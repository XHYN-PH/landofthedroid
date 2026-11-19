#include "recomp.h"
#include "rec_mod.h"

void f_786574(void) {
  LOAD_REGS();
  goto L_786574;
L_7864fb: /* 7864fb: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7864fe: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 786501: jg 0x786595 */
  if ((!zf && sf == of)) goto L_786595;
L_786507: /* 786507: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* 786509: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_786510: /* 786510: cmp edi, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786512: jg 0x786588 */
  if ((!zf && sf == of)) goto L_786588;
L_786514: /* 786514: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 786517: mov edx, dword ptr [ebx + 0xf004] */
  edx = R32((uint32_t)(ebx + 0xf004u));
/* 78651d: add edx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 786520: cmp edx, 0xc00 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xc00u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786526: jge 0x786909 */
  if ((sf == of)) goto L_786909;
L_78652c: /* 78652c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78652d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78652e: mov ecx, esi */
  ecx = esi;
/* 786530: call 0x6cb82f */
  esp -= 4; W32(esp, 0x786535u); SPILL(); f_6cb82f(); if (g_unwind) return; RELOAD();
/* 786535: mov ecx, dword ptr [esi + 0x1280] */
  ecx = R32((uint32_t)(esi + 0x1280u));
/* 78653b: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 78653e: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 786541: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 786543: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 786546: mov eax, esp */
  eax = esp;
/* 786548: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78654a: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 78654d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 786550: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 786553: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 786556: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 786559: mov eax, dword ptr [ebx + 0xf004] */
  eax = R32((uint32_t)(ebx + 0xf004u));
/* 78655f: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 786561: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 786564: lea ecx, [ebx + eax*4 + 0x6004] */
  ecx = (uint32_t)(ebx + eax*4 + 0x6004u);
/* 78656b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78656c: call 0x6c882d */
  esp -= 4; W32(esp, 0x786571u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 786571: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
L_786574: /* 786574: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 786577: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 78657a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78657d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 78657e: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 786580: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 786583: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 786586: jmp 0x786510 */
  goto L_786510;
L_786588: /* 786588: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78658b: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 78658e: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 786590: jmp 0x7864fb */
  goto L_7864fb;
L_786595: /* 786595: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 786598: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
L_78659f: /* 78659f: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7865a2: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7865a5: jge 0x7868bb */
  if ((sf == of)) goto L_7868bb;
L_7865ab: /* 7865ab: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7865ad: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
L_7865b4: /* 7865b4: cmp edx, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7865b6: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 7865b9: jge 0x7868ad */
  if ((sf == of)) goto L_7868ad;
L_7865bf: /* 7865bf: test byte ptr [esi + 0x1260], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7865c6: jne 0x7865f1 */
  if (!zf) goto L_7865f1;
L_7865c8: /* 7865c8: mov ecx, dword ptr [esi + 0x128c] */
  ecx = R32((uint32_t)(esi + 0x128cu));
/* 7865ce: mov edi, dword ptr [esi + 0x131c] */
  edi = R32((uint32_t)(esi + 0x131cu));
/* 7865d4: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 7865d7: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7865d9: mov eax, ecx */
  eax = ecx;
/* 7865db: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 7865de: mov ebx, 1 */
  ebx = 0x1u;
/* 7865e3: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 7865e5: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7865e8: test dword ptr [edi + eax*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + eax*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7865eb: je 0x786893 */
  if (zf) goto L_786893;
L_7865f1: /* 7865f1: mov eax, dword ptr [esi + 0x1338] */
  eax = R32((uint32_t)(esi + 0x1338u));
/* 7865f7: xor ebx, ebx */
  ebx = 0;
/* 7865f9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7865fb: mov dword ptr [ebp - 0x44], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x3f800000u);
/* 786602: mov dword ptr [ebp - 0x48], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x3f800000u);
/* 786609: jle 0x786625 */
  if ((zf || sf != of)) goto L_786625;
L_78660b: /* 78660b: mov ecx, dword ptr [esi + 0x128c] */
  ecx = R32((uint32_t)(esi + 0x128cu));
/* 786611: imul ecx, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  ecx = (uint32_t)r;
  }
/* 786615: mov eax, dword ptr [esi + 0x1334] */
  eax = R32((uint32_t)(esi + 0x1334u));
/* 78661b: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 78661d: mov ecx, dword ptr [eax + ecx*4] */
  ecx = R32((uint32_t)(eax + ecx*4));
/* 786620: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 786623: jmp 0x786630 */
  goto L_786630;
L_786625: /* 786625: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 786628: jmp 0x786630 */
  goto L_786630;
L_786630: /* 786630: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786633: jge 0x786893 */
  if ((sf == of)) goto L_786893;
L_786639: /* 786639: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 78663c: mov eax, dword ptr [edi + 0x6000] */
  eax = R32((uint32_t)(edi + 0x6000u));
/* 786642: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 786645: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 786647: cmp eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78664c: jge 0x786909 */
  if ((sf == of)) goto L_786909;
L_786652: /* 786652: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 786655: lea edi, [edi + eax*8] */
  edi = (uint32_t)(edi + eax*8);
/* 786658: test byte ptr [esi + 0x1260], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78665f: je 0x78666a */
  if (zf) goto L_78666a;
L_786661: /* 786661: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 786668: jmp 0x78669c */
  goto L_78669c;
L_78666a: /* 78666a: mov ecx, dword ptr [esi + 0x128c] */
  ecx = R32((uint32_t)(esi + 0x128cu));
/* 786670: imul ecx, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  ecx = (uint32_t)r;
  }
/* 786674: mov eax, dword ptr [esi + 0x1328] */
  eax = R32((uint32_t)(esi + 0x1328u));
/* 78667a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 78667c: mov edx, ecx */
  edx = ecx;
/* 78667e: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 786681: mov esi, 1 */
  esi = 0x1u;
/* 786686: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 786688: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 78668b: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 78668e: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 786690: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 786693: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 786695: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 786697: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 786699: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
L_78669c: /* 78669c: xor ecx, ecx */
  ecx = 0;
L_78669e: /* 78669e: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7866a1: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 7866a4: jge 0x78677d */
  if ((sf == of)) goto L_78677d;
L_7866aa: /* 7866aa: test byte ptr [esi + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7866b1: je 0x7866bc */
  if (zf) goto L_7866bc;
L_7866b3: /* 7866b3: mov eax, dword ptr [ecx*4 + 0xac7e7c] */
  eax = R32((uint32_t)(ecx*4 + 0xac7e7cu));
/* 7866ba: jmp 0x7866c3 */
  goto L_7866c3;
L_7866bc: /* 7866bc: mov eax, dword ptr [ecx*4 + 0xac7e6c] */
  eax = R32((uint32_t)(ecx*4 + 0xac7e6cu));
L_7866c3: /* 7866c3: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7866c6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7866c8: lea edx, [eax + ebx*2] */
  edx = (uint32_t)(eax + ebx*2);
/* 7866cb: mov eax, ebx */
  eax = ebx;
/* 7866cd: je 0x7866e7 */
  if (zf) goto L_7866e7;
L_7866cf: /* 7866cf: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7866d1: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7866d4: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7866d7: mov esi, dword ptr [eax + 0xac7e34] */
  esi = R32((uint32_t)(eax + 0xac7e34u));
/* 7866dd: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7866df: mov edx, dword ptr [eax + 0xac7e30] */
  edx = R32((uint32_t)(eax + 0xac7e30u));
/* 7866e5: jmp 0x7866fd */
  goto L_7866fd;
L_7866e7: /* 7866e7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7866e9: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7866ec: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7866ef: mov esi, dword ptr [eax + 0xac7df8] */
  esi = R32((uint32_t)(eax + 0xac7df8u));
/* 7866f5: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7866f7: mov edx, dword ptr [eax + 0xac7df4] */
  edx = R32((uint32_t)(eax + 0xac7df4u));
L_7866fd: /* 7866fd: imul esi, dword ptr [ebp - 0x2c] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  esi = (uint32_t)r;
  }
/* 786701: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 786704: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 786706: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 786708: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78670a: jl 0x786711 */
  if ((sf != of)) goto L_786711;
L_78670c: /* 78670c: cmp esi, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78670f: jl 0x78672c */
  if ((sf != of)) goto L_78672c;
L_786711: /* 786711: push 0x89 */
  { uint32_t v = 0x89u; esp -= 4; W32(esp, v); }
/* 786716: push 0xac7cb8 */
  { uint32_t v = 0xac7cb8u; esp -= 4; W32(esp, v); }
/* 78671b: push 0xac7cc8 */
  { uint32_t v = 0xac7cc8u; esp -= 4; W32(esp, v); }
/* 786720: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x786726u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 786726: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 786729: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78672c: /* 78672c: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 78672f: mov eax, dword ptr [edx + 0xf004] */
  eax = R32((uint32_t)(edx + 0xf004u));
/* 786735: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 786737: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 78673a: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 78673d: lea edx, [edx + eax*4 + 0x6004] */
  edx = (uint32_t)(edx + eax*4 + 0x6004u);
/* 786744: mov dword ptr [edi + ecx*4], edx */
  W32((uint32_t)(edi + ecx*4), edx);
/* 786747: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 786748: jmp 0x78669e */
  goto L_78669e;
L_78677d: /* 78677d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 786780: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 786782: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786784: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 786786: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 786789: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 78678c: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 78678f: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 786792: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 786795: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 786798: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 78679a: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 78679c: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 78679f: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7867a2: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7867a5: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 7867a8: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 7867ab: mov ecx, dword ptr [edx + 0x15008] */
  ecx = R32((uint32_t)(edx + 0x15008u));
/* 7867b1: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 7867b4: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7867b7: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7867b9: cmp ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7867bf: jge 0x786901 */
  if ((sf == of)) goto L_786901;
L_7867c5: /* 7867c5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7867c7: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 7867ca: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7867cc: lea edx, [edx + eax*4 + 0xf008] */
  edx = (uint32_t)(edx + eax*4 + 0xf008u);
/* 7867d3: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 7867d6: xor eax, eax */
  eax = 0;
/* 7867d8: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7867da: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7867dc: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 7867de: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7867e0: fmul dword ptr [ebp - 0x58] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 7867e3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7867e5: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7867e7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7867e9: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 7867ec: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 7867ef: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7867f1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7867f3: fmul dword ptr [ebp - 0x58] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 7867f6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7867f8: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 7867fb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7867fd: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_786803: /* 786803: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786806: jge 0x786816 */
  if ((sf == of)) goto L_786816;
L_786808: /* 786808: fld dword ptr [edx + eax*4] */
  { double v = F32((uint32_t)(edx + eax*4)); FPUSH(v); }
/* 78680b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 78680c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 78680e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 786810: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 786812: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786814: jmp 0x786803 */
  goto L_786803;
L_786816: /* 786816: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 78681c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78681e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 786821: jne 0x786841 */
  if (!zf) goto L_786841;
L_786823: /* 786823: fsqrt  */
  ST0 = sqrt(ST0);
/* 786825: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 78682b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 78682d: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 78682f: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 786831: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 786833: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 786836: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 786839: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 78683c: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 78683f: jmp 0x786851 */
  goto L_786851;
L_786841: /* 786841: xor eax, eax */
  eax = 0;
/* 786843: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786845: mov dword ptr [edx], 0x3f800000 */
  W32((uint32_t)(edx), 0x3f800000u);
/* 78684b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 78684e: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_786851: /* 786851: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 786854: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 786857: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 78685a: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 78685d: lea ecx, [eax + 0xf008] */
  ecx = (uint32_t)(eax + 0xf008u);
/* 786863: mov dword ptr [edi + 0xc], ecx */
  W32((uint32_t)(edi + 0xcu), ecx);
/* 786866: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 786869: add eax, 0x12008 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12008u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78686e: mov dword ptr [edi + 0x14], 1 */
  W32((uint32_t)(edi + 0x14u), 0x1u);
/* 786875: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 786878: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 78687b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 78687d: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 786880: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 786881: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 786884: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 786887: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 78688a: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 78688d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 78688e: jmp 0x786630 */
  goto L_786630;
L_786893: /* 786893: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 786896: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 786899: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 78689c: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 78689f: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7868a1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7868a2: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7868a5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7868a8: jmp 0x7865b4 */
  goto L_7865b4;
L_7868ad: /* 7868ad: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7868b0: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7868b2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7868b3: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 7868b6: jmp 0x78659f */
  goto L_78659f;
L_7868bb: /* 7868bb: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7868be: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7868c1: mov edi, dword ptr [eax + 0x6000] */
  edi = R32((uint32_t)(eax + 0x6000u));
/* 7868c7: mov esi, dword ptr [eax + 0x15008] */
  esi = R32((uint32_t)(eax + 0x15008u));
/* 7868cd: mov edx, dword ptr [eax + 0xf004] */
  edx = R32((uint32_t)(eax + 0xf004u));
/* 7868d3: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7868d5: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7868d7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7868da: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7868dc: mov dword ptr [eax + 0x6000], edi */
  W32((uint32_t)(eax + 0x6000u), edi);
/* 7868e2: mov dword ptr [eax + 0x15008], esi */
  W32((uint32_t)(eax + 0x15008u), esi);
/* 7868e8: mov dword ptr [eax + 0xf004], edx */
  W32((uint32_t)(eax + 0xf004u), edx);
/* 7868ee: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7868f1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7868f8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7868f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7868fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7868fb: mov esp, ebp */
  esp = ebp;
/* 7868fd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7868fe: ret 0x10 */
  esp += 20; SPILL(); return;
L_786901: /* 786901: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786903: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786905: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786907: fstp st(0) */
  STI(0) = ST0; FPOP();
L_786909: /* 786909: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78690c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78690d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78690e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 786915: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 786916: mov esp, ebp */
  esp = ebp;
/* 786918: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 786919: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_78662a(void) {
  LOAD_REGS();
  goto L_78662a;
L_78659f: /* 78659f: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7865a2: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7865a5: jge 0x7868bb */
  if ((sf == of)) goto L_7868bb;
L_7865ab: /* 7865ab: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7865ad: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
L_7865b4: /* 7865b4: cmp edx, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7865b6: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 7865b9: jge 0x7868ad */
  if ((sf == of)) goto L_7868ad;
L_7865bf: /* 7865bf: test byte ptr [esi + 0x1260], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7865c6: jne 0x7865f1 */
  if (!zf) goto L_7865f1;
L_7865c8: /* 7865c8: mov ecx, dword ptr [esi + 0x128c] */
  ecx = R32((uint32_t)(esi + 0x128cu));
/* 7865ce: mov edi, dword ptr [esi + 0x131c] */
  edi = R32((uint32_t)(esi + 0x131cu));
/* 7865d4: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 7865d7: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7865d9: mov eax, ecx */
  eax = ecx;
/* 7865db: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 7865de: mov ebx, 1 */
  ebx = 0x1u;
/* 7865e3: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 7865e5: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7865e8: test dword ptr [edi + eax*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + eax*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7865eb: je 0x786893 */
  if (zf) goto L_786893;
L_7865f1: /* 7865f1: mov eax, dword ptr [esi + 0x1338] */
  eax = R32((uint32_t)(esi + 0x1338u));
/* 7865f7: xor ebx, ebx */
  ebx = 0;
/* 7865f9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7865fb: mov dword ptr [ebp - 0x44], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x3f800000u);
/* 786602: mov dword ptr [ebp - 0x48], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x3f800000u);
/* 786609: jle 0x786625 */
  if ((zf || sf != of)) goto L_786625;
L_78660b: /* 78660b: mov ecx, dword ptr [esi + 0x128c] */
  ecx = R32((uint32_t)(esi + 0x128cu));
/* 786611: imul ecx, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  ecx = (uint32_t)r;
  }
/* 786615: mov eax, dword ptr [esi + 0x1334] */
  eax = R32((uint32_t)(esi + 0x1334u));
/* 78661b: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 78661d: mov ecx, dword ptr [eax + ecx*4] */
  ecx = R32((uint32_t)(eax + ecx*4));
/* 786620: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 786623: jmp 0x786630 */
  goto L_786630;
L_786625: /* 786625: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 786628: jmp 0x786630 */
  goto L_786630;
L_78662a: /* 78662a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_786630: /* 786630: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786633: jge 0x786893 */
  if ((sf == of)) goto L_786893;
L_786639: /* 786639: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 78663c: mov eax, dword ptr [edi + 0x6000] */
  eax = R32((uint32_t)(edi + 0x6000u));
/* 786642: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 786645: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 786647: cmp eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78664c: jge 0x786909 */
  if ((sf == of)) goto L_786909;
L_786652: /* 786652: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 786655: lea edi, [edi + eax*8] */
  edi = (uint32_t)(edi + eax*8);
/* 786658: test byte ptr [esi + 0x1260], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78665f: je 0x78666a */
  if (zf) goto L_78666a;
L_786661: /* 786661: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 786668: jmp 0x78669c */
  goto L_78669c;
L_78666a: /* 78666a: mov ecx, dword ptr [esi + 0x128c] */
  ecx = R32((uint32_t)(esi + 0x128cu));
/* 786670: imul ecx, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  ecx = (uint32_t)r;
  }
/* 786674: mov eax, dword ptr [esi + 0x1328] */
  eax = R32((uint32_t)(esi + 0x1328u));
/* 78667a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 78667c: mov edx, ecx */
  edx = ecx;
/* 78667e: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 786681: mov esi, 1 */
  esi = 0x1u;
/* 786686: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 786688: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 78668b: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 78668e: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 786690: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 786693: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 786695: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 786697: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 786699: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
L_78669c: /* 78669c: xor ecx, ecx */
  ecx = 0;
L_78669e: /* 78669e: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7866a1: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 7866a4: jge 0x78677d */
  if ((sf == of)) goto L_78677d;
L_7866aa: /* 7866aa: test byte ptr [esi + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7866b1: je 0x7866bc */
  if (zf) goto L_7866bc;
L_7866b3: /* 7866b3: mov eax, dword ptr [ecx*4 + 0xac7e7c] */
  eax = R32((uint32_t)(ecx*4 + 0xac7e7cu));
/* 7866ba: jmp 0x7866c3 */
  goto L_7866c3;
L_7866bc: /* 7866bc: mov eax, dword ptr [ecx*4 + 0xac7e6c] */
  eax = R32((uint32_t)(ecx*4 + 0xac7e6cu));
L_7866c3: /* 7866c3: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7866c6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7866c8: lea edx, [eax + ebx*2] */
  edx = (uint32_t)(eax + ebx*2);
/* 7866cb: mov eax, ebx */
  eax = ebx;
/* 7866cd: je 0x7866e7 */
  if (zf) goto L_7866e7;
L_7866cf: /* 7866cf: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7866d1: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7866d4: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7866d7: mov esi, dword ptr [eax + 0xac7e34] */
  esi = R32((uint32_t)(eax + 0xac7e34u));
/* 7866dd: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7866df: mov edx, dword ptr [eax + 0xac7e30] */
  edx = R32((uint32_t)(eax + 0xac7e30u));
/* 7866e5: jmp 0x7866fd */
  goto L_7866fd;
L_7866e7: /* 7866e7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7866e9: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7866ec: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7866ef: mov esi, dword ptr [eax + 0xac7df8] */
  esi = R32((uint32_t)(eax + 0xac7df8u));
/* 7866f5: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7866f7: mov edx, dword ptr [eax + 0xac7df4] */
  edx = R32((uint32_t)(eax + 0xac7df4u));
L_7866fd: /* 7866fd: imul esi, dword ptr [ebp - 0x2c] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  esi = (uint32_t)r;
  }
/* 786701: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 786704: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 786706: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 786708: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78670a: jl 0x786711 */
  if ((sf != of)) goto L_786711;
L_78670c: /* 78670c: cmp esi, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78670f: jl 0x78672c */
  if ((sf != of)) goto L_78672c;
L_786711: /* 786711: push 0x89 */
  { uint32_t v = 0x89u; esp -= 4; W32(esp, v); }
/* 786716: push 0xac7cb8 */
  { uint32_t v = 0xac7cb8u; esp -= 4; W32(esp, v); }
/* 78671b: push 0xac7cc8 */
  { uint32_t v = 0xac7cc8u; esp -= 4; W32(esp, v); }
/* 786720: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x786726u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 786726: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 786729: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78672c: /* 78672c: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 78672f: mov eax, dword ptr [edx + 0xf004] */
  eax = R32((uint32_t)(edx + 0xf004u));
/* 786735: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 786737: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 78673a: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 78673d: lea edx, [edx + eax*4 + 0x6004] */
  edx = (uint32_t)(edx + eax*4 + 0x6004u);
/* 786744: mov dword ptr [edi + ecx*4], edx */
  W32((uint32_t)(edi + ecx*4), edx);
/* 786747: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 786748: jmp 0x78669e */
  goto L_78669e;
L_78677d: /* 78677d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 786780: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 786782: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786784: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 786786: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 786789: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 78678c: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 78678f: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 786792: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 786795: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 786798: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 78679a: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 78679c: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 78679f: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7867a2: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7867a5: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 7867a8: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 7867ab: mov ecx, dword ptr [edx + 0x15008] */
  ecx = R32((uint32_t)(edx + 0x15008u));
/* 7867b1: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 7867b4: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7867b7: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7867b9: cmp ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7867bf: jge 0x786901 */
  if ((sf == of)) goto L_786901;
L_7867c5: /* 7867c5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7867c7: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 7867ca: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7867cc: lea edx, [edx + eax*4 + 0xf008] */
  edx = (uint32_t)(edx + eax*4 + 0xf008u);
/* 7867d3: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 7867d6: xor eax, eax */
  eax = 0;
/* 7867d8: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7867da: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7867dc: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 7867de: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7867e0: fmul dword ptr [ebp - 0x58] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 7867e3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7867e5: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7867e7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7867e9: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 7867ec: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 7867ef: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7867f1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7867f3: fmul dword ptr [ebp - 0x58] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 7867f6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7867f8: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 7867fb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7867fd: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_786803: /* 786803: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786806: jge 0x786816 */
  if ((sf == of)) goto L_786816;
L_786808: /* 786808: fld dword ptr [edx + eax*4] */
  { double v = F32((uint32_t)(edx + eax*4)); FPUSH(v); }
/* 78680b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 78680c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 78680e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 786810: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 786812: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786814: jmp 0x786803 */
  goto L_786803;
L_786816: /* 786816: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 78681c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78681e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 786821: jne 0x786841 */
  if (!zf) goto L_786841;
L_786823: /* 786823: fsqrt  */
  ST0 = sqrt(ST0);
/* 786825: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 78682b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 78682d: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 78682f: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 786831: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 786833: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 786836: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 786839: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 78683c: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 78683f: jmp 0x786851 */
  goto L_786851;
L_786841: /* 786841: xor eax, eax */
  eax = 0;
/* 786843: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786845: mov dword ptr [edx], 0x3f800000 */
  W32((uint32_t)(edx), 0x3f800000u);
/* 78684b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 78684e: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_786851: /* 786851: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 786854: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 786857: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 78685a: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 78685d: lea ecx, [eax + 0xf008] */
  ecx = (uint32_t)(eax + 0xf008u);
/* 786863: mov dword ptr [edi + 0xc], ecx */
  W32((uint32_t)(edi + 0xcu), ecx);
/* 786866: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 786869: add eax, 0x12008 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12008u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78686e: mov dword ptr [edi + 0x14], 1 */
  W32((uint32_t)(edi + 0x14u), 0x1u);
/* 786875: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 786878: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 78687b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 78687d: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 786880: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 786881: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 786884: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 786887: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 78688a: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 78688d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 78688e: jmp 0x786630 */
  goto L_786630;
L_786893: /* 786893: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 786896: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 786899: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 78689c: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 78689f: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7868a1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7868a2: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7868a5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7868a8: jmp 0x7865b4 */
  goto L_7865b4;
L_7868ad: /* 7868ad: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7868b0: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7868b2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7868b3: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 7868b6: jmp 0x78659f */
  goto L_78659f;
L_7868bb: /* 7868bb: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7868be: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7868c1: mov edi, dword ptr [eax + 0x6000] */
  edi = R32((uint32_t)(eax + 0x6000u));
/* 7868c7: mov esi, dword ptr [eax + 0x15008] */
  esi = R32((uint32_t)(eax + 0x15008u));
/* 7868cd: mov edx, dword ptr [eax + 0xf004] */
  edx = R32((uint32_t)(eax + 0xf004u));
/* 7868d3: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7868d5: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7868d7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7868da: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7868dc: mov dword ptr [eax + 0x6000], edi */
  W32((uint32_t)(eax + 0x6000u), edi);
/* 7868e2: mov dword ptr [eax + 0x15008], esi */
  W32((uint32_t)(eax + 0x15008u), esi);
/* 7868e8: mov dword ptr [eax + 0xf004], edx */
  W32((uint32_t)(eax + 0xf004u), edx);
/* 7868ee: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7868f1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7868f8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7868f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7868fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7868fb: mov esp, ebp */
  esp = ebp;
/* 7868fd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7868fe: ret 0x10 */
  esp += 20; SPILL(); return;
L_786901: /* 786901: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786903: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786905: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786907: fstp st(0) */
  STI(0) = ST0; FPOP();
L_786909: /* 786909: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78690c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78690d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78690e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 786915: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 786916: mov esp, ebp */
  esp = ebp;
/* 786918: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 786919: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_78674d(void) {
  LOAD_REGS();
L_78674d: /* 78674d: mov eax, dword ptr [ebp - 0x4c] */
  eax = R32((uint32_t)(ebp + 0xffffffb4u));
/* 786750: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 786755: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 786758: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786759: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 78675c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x786761u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_786761(); return;
}

void f_786761(void) {
  LOAD_REGS();
  goto L_786761;
L_78659f: /* 78659f: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7865a2: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 7865a5: jge 0x7868bb */
  if ((sf == of)) goto L_7868bb;
L_7865ab: /* 7865ab: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 7865ad: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
L_7865b4: /* 7865b4: cmp edx, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7865b6: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 7865b9: jge 0x7868ad */
  if ((sf == of)) goto L_7868ad;
L_7865bf: /* 7865bf: test byte ptr [esi + 0x1260], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7865c6: jne 0x7865f1 */
  if (!zf) goto L_7865f1;
L_7865c8: /* 7865c8: mov ecx, dword ptr [esi + 0x128c] */
  ecx = R32((uint32_t)(esi + 0x128cu));
/* 7865ce: mov edi, dword ptr [esi + 0x131c] */
  edi = R32((uint32_t)(esi + 0x131cu));
/* 7865d4: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 7865d7: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7865d9: mov eax, ecx */
  eax = ecx;
/* 7865db: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 7865de: mov ebx, 1 */
  ebx = 0x1u;
/* 7865e3: shl ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
  }
/* 7865e5: sar eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 7865e8: test dword ptr [edi + eax*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + eax*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7865eb: je 0x786893 */
  if (zf) goto L_786893;
L_7865f1: /* 7865f1: mov eax, dword ptr [esi + 0x1338] */
  eax = R32((uint32_t)(esi + 0x1338u));
/* 7865f7: xor ebx, ebx */
  ebx = 0;
/* 7865f9: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7865fb: mov dword ptr [ebp - 0x44], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x3f800000u);
/* 786602: mov dword ptr [ebp - 0x48], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x3f800000u);
/* 786609: jle 0x786625 */
  if ((zf || sf != of)) goto L_786625;
L_78660b: /* 78660b: mov ecx, dword ptr [esi + 0x128c] */
  ecx = R32((uint32_t)(esi + 0x128cu));
/* 786611: imul ecx, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  ecx = (uint32_t)r;
  }
/* 786615: mov eax, dword ptr [esi + 0x1334] */
  eax = R32((uint32_t)(esi + 0x1334u));
/* 78661b: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 78661d: mov ecx, dword ptr [eax + ecx*4] */
  ecx = R32((uint32_t)(eax + ecx*4));
/* 786620: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 786623: jmp 0x786630 */
  goto L_786630;
L_786625: /* 786625: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 786628: jmp 0x786630 */
  goto L_786630;
L_786630: /* 786630: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786633: jge 0x786893 */
  if ((sf == of)) goto L_786893;
L_786639: /* 786639: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 78663c: mov eax, dword ptr [edi + 0x6000] */
  eax = R32((uint32_t)(edi + 0x6000u));
/* 786642: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 786645: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 786647: cmp eax, 0x400 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78664c: jge 0x786909 */
  if ((sf == of)) goto L_786909;
L_786652: /* 786652: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 786655: lea edi, [edi + eax*8] */
  edi = (uint32_t)(edi + eax*8);
/* 786658: test byte ptr [esi + 0x1260], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78665f: je 0x78666a */
  if (zf) goto L_78666a;
L_786661: /* 786661: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 786668: jmp 0x78669c */
  goto L_78669c;
L_78666a: /* 78666a: mov ecx, dword ptr [esi + 0x128c] */
  ecx = R32((uint32_t)(esi + 0x128cu));
/* 786670: imul ecx, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  ecx = (uint32_t)r;
  }
/* 786674: mov eax, dword ptr [esi + 0x1328] */
  eax = R32((uint32_t)(esi + 0x1328u));
/* 78667a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 78667c: mov edx, ecx */
  edx = ecx;
/* 78667e: and ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1fu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* 786681: mov esi, 1 */
  esi = 0x1u;
/* 786686: shl esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
  }
/* 786688: sar edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 78668b: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 78668e: and eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 786690: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 786693: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 786695: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 786697: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 786699: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
L_78669c: /* 78669c: xor ecx, ecx */
  ecx = 0;
L_78669e: /* 78669e: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7866a1: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 7866a4: jge 0x78677d */
  if ((sf == of)) goto L_78677d;
L_7866aa: /* 7866aa: test byte ptr [esi + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7866b1: je 0x7866bc */
  if (zf) goto L_7866bc;
L_7866b3: /* 7866b3: mov eax, dword ptr [ecx*4 + 0xac7e7c] */
  eax = R32((uint32_t)(ecx*4 + 0xac7e7cu));
/* 7866ba: jmp 0x7866c3 */
  goto L_7866c3;
L_7866bc: /* 7866bc: mov eax, dword ptr [ecx*4 + 0xac7e6c] */
  eax = R32((uint32_t)(ecx*4 + 0xac7e6cu));
L_7866c3: /* 7866c3: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 7866c6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7866c8: lea edx, [eax + ebx*2] */
  edx = (uint32_t)(eax + ebx*2);
/* 7866cb: mov eax, ebx */
  eax = ebx;
/* 7866cd: je 0x7866e7 */
  if (zf) goto L_7866e7;
L_7866cf: /* 7866cf: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7866d1: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7866d4: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7866d7: mov esi, dword ptr [eax + 0xac7e34] */
  esi = R32((uint32_t)(eax + 0xac7e34u));
/* 7866dd: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7866df: mov edx, dword ptr [eax + 0xac7e30] */
  edx = R32((uint32_t)(eax + 0xac7e30u));
/* 7866e5: jmp 0x7866fd */
  goto L_7866fd;
L_7866e7: /* 7866e7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7866e9: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7866ec: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 7866ef: mov esi, dword ptr [eax + 0xac7df8] */
  esi = R32((uint32_t)(eax + 0xac7df8u));
/* 7866f5: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7866f7: mov edx, dword ptr [eax + 0xac7df4] */
  edx = R32((uint32_t)(eax + 0xac7df4u));
L_7866fd: /* 7866fd: imul esi, dword ptr [ebp - 0x2c] */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffd4u)));
  esi = (uint32_t)r;
  }
/* 786701: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 786704: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 786706: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 786708: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 78670a: jl 0x786711 */
  if ((sf != of)) goto L_786711;
L_78670c: /* 78670c: cmp esi, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78670f: jl 0x78672c */
  if ((sf != of)) goto L_78672c;
L_786711: /* 786711: push 0x89 */
  { uint32_t v = 0x89u; esp -= 4; W32(esp, v); }
/* 786716: push 0xac7cb8 */
  { uint32_t v = 0xac7cb8u; esp -= 4; W32(esp, v); }
/* 78671b: push 0xac7cc8 */
  { uint32_t v = 0xac7cc8u; esp -= 4; W32(esp, v); }
/* 786720: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x786726u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 786726: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 786729: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78672c: /* 78672c: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 78672f: mov eax, dword ptr [edx + 0xf004] */
  eax = R32((uint32_t)(edx + 0xf004u));
/* 786735: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 786737: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 78673a: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 78673d: lea edx, [edx + eax*4 + 0x6004] */
  edx = (uint32_t)(edx + eax*4 + 0x6004u);
/* 786744: mov dword ptr [edi + ecx*4], edx */
  W32((uint32_t)(edi + ecx*4), edx);
/* 786747: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 786748: jmp 0x78669e */
  goto L_78669e;
L_786761: /* 786761: push 0xa09904 */
  { uint32_t v = 0xa09904u; esp -= 4; W32(esp, v); }
/* 786766: push 0xac7cf0 */
  { uint32_t v = 0xac7cf0u; esp -= 4; W32(esp, v); }
/* 78676b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x786771u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 786771: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786774: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786776: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786778: call 0x99caf8 */
  esp -= 4; W32(esp, 0x78677du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_78677d: /* 78677d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 786780: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 786782: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786784: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 786786: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 786789: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 78678c: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 78678f: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 786792: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 786795: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 786798: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 78679a: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 78679c: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 78679f: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7867a2: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7867a5: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 7867a8: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 7867ab: mov ecx, dword ptr [edx + 0x15008] */
  ecx = R32((uint32_t)(edx + 0x15008u));
/* 7867b1: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 7867b4: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7867b7: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 7867b9: cmp ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7867bf: jge 0x786901 */
  if ((sf == of)) goto L_786901;
L_7867c5: /* 7867c5: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 7867c7: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 7867ca: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7867cc: lea edx, [edx + eax*4 + 0xf008] */
  edx = (uint32_t)(edx + eax*4 + 0xf008u);
/* 7867d3: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 7867d6: xor eax, eax */
  eax = 0;
/* 7867d8: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7867da: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7867dc: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 7867de: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7867e0: fmul dword ptr [ebp - 0x58] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 7867e3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7867e5: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 7867e7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7867e9: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 7867ec: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 7867ef: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 7867f1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7867f3: fmul dword ptr [ebp - 0x58] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 7867f6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7867f8: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 7867fb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 7867fd: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_786803: /* 786803: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786806: jge 0x786816 */
  if ((sf == of)) goto L_786816;
L_786808: /* 786808: fld dword ptr [edx + eax*4] */
  { double v = F32((uint32_t)(edx + eax*4)); FPUSH(v); }
/* 78680b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 78680c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 78680e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 786810: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 786812: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786814: jmp 0x786803 */
  goto L_786803;
L_786816: /* 786816: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 78681c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78681e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 786821: jne 0x786841 */
  if (!zf) goto L_786841;
L_786823: /* 786823: fsqrt  */
  ST0 = sqrt(ST0);
/* 786825: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 78682b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 78682d: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 78682f: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 786831: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 786833: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 786836: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 786839: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 78683c: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 78683f: jmp 0x786851 */
  goto L_786851;
L_786841: /* 786841: xor eax, eax */
  eax = 0;
/* 786843: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786845: mov dword ptr [edx], 0x3f800000 */
  W32((uint32_t)(edx), 0x3f800000u);
/* 78684b: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 78684e: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
L_786851: /* 786851: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 786854: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 786857: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 78685a: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 78685d: lea ecx, [eax + 0xf008] */
  ecx = (uint32_t)(eax + 0xf008u);
/* 786863: mov dword ptr [edi + 0xc], ecx */
  W32((uint32_t)(edi + 0xcu), ecx);
/* 786866: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 786869: add eax, 0x12008 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x12008u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 78686e: mov dword ptr [edi + 0x14], 1 */
  W32((uint32_t)(edi + 0x14u), 0x1u);
/* 786875: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 786878: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 78687b: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 78687d: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 786880: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 786881: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 786884: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 786887: mov dword ptr [edi + 0x10], eax */
  W32((uint32_t)(edi + 0x10u), eax);
/* 78688a: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 78688d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 78688e: jmp 0x786630 */
  goto L_786630;
L_786893: /* 786893: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 786896: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 786899: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 78689c: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 78689f: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7868a1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7868a2: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 7868a5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 7868a8: jmp 0x7865b4 */
  goto L_7865b4;
L_7868ad: /* 7868ad: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 7868b0: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7868b2: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 7868b3: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 7868b6: jmp 0x78659f */
  goto L_78659f;
L_7868bb: /* 7868bb: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 7868be: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 7868c1: mov edi, dword ptr [eax + 0x6000] */
  edi = R32((uint32_t)(eax + 0x6000u));
/* 7868c7: mov esi, dword ptr [eax + 0x15008] */
  esi = R32((uint32_t)(eax + 0x15008u));
/* 7868cd: mov edx, dword ptr [eax + 0xf004] */
  edx = R32((uint32_t)(eax + 0xf004u));
/* 7868d3: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 7868d5: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7868d7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7868da: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 7868dc: mov dword ptr [eax + 0x6000], edi */
  W32((uint32_t)(eax + 0x6000u), edi);
/* 7868e2: mov dword ptr [eax + 0x15008], esi */
  W32((uint32_t)(eax + 0x15008u), esi);
/* 7868e8: mov dword ptr [eax + 0xf004], edx */
  W32((uint32_t)(eax + 0xf004u), edx);
/* 7868ee: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7868f1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7868f8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7868f9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7868fa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7868fb: mov esp, ebp */
  esp = ebp;
/* 7868fd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7868fe: ret 0x10 */
  esp += 20; SPILL(); return;
L_786901: /* 786901: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786903: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786905: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 786907: fstp st(0) */
  STI(0) = ST0; FPOP();
L_786909: /* 786909: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 78690c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 78690d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78690e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 786915: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 786916: mov esp, ebp */
  esp = ebp;
/* 786918: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 786919: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_786a70(void) {
  LOAD_REGS();
L_786a70: /* 786a70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 786a71: mov ebp, esp */
  ebp = esp;
/* 786a73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 786a75: push 0x9cca98 */
  { uint32_t v = 0x9cca98u; esp -= 4; W32(esp, v); }
/* 786a7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 786a80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 786a81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 786a88: sub esp, 0x240 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x240u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 786a8e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 786a8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 786a90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 786a91: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 786a94: xor ebx, ebx */
  ebx = 0;
/* 786a96: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 786a98: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 786a9b: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 786a9e: jne 0x786ab8 */
  if (!zf) goto L_786ab8;
L_786aa0: /* 786aa0: push 0x19d */
  { uint32_t v = 0x19du; esp -= 4; W32(esp, v); }
/* 786aa5: push 0xac7d08 */
  { uint32_t v = 0xac7d08u; esp -= 4; W32(esp, v); }
/* 786aaa: push 0xac7d18 */
  { uint32_t v = 0xac7d18u; esp -= 4; W32(esp, v); }
/* 786aaf: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x786ab5u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 786ab5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_786ab8: /* 786ab8: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 786abb: mov dword ptr [esi + 0x6000], ebx */
  W32((uint32_t)(esi + 0x6000u), ebx);
/* 786ac1: mov dword ptr [esi + 0x15008], ebx */
  W32((uint32_t)(esi + 0x15008u), ebx);
/* 786ac7: mov dword ptr [esi + 0xf004], ebx */
  W32((uint32_t)(esi + 0xf004u), ebx);
/* 786acd: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 786ad0: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 786ad4: xor edx, edx */
  edx = 0;
L_786ad6: /* 786ad6: cmp edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786ad9: mov ecx, dword ptr [edi + 0x8c] */
  ecx = R32((uint32_t)(edi + 0x8cu));
/* 786adf: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 786ae2: jge 0x786e2f */
  if ((sf == of)) goto L_786e2f;
L_786ae8: /* 786ae8: lea eax, [edx + edx*2] */
  eax = (uint32_t)(edx + edx*2);
/* 786aeb: mov eax, dword ptr [ecx + eax*8 + 0x11c] */
  eax = R32((uint32_t)(ecx + eax*8 + 0x11cu));
/* 786af2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 786af4: jne 0x786afb */
  if (!zf) goto L_786afb;
L_786af6: /* 786af6: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 786af9: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
L_786afb: /* 786afb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 786afd: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 786b00: je 0x786e29 */
  if (zf) goto L_786e29;
L_786b06: /* 786b06: test byte ptr [eax + 0x358], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x358u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 786b0d: je 0x786e29 */
  if (zf) goto L_786e29;
L_786b13: /* 786b13: xor ecx, ecx */
  ecx = 0;
/* 786b15: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 786b18: jmp 0x786b20 */
  goto L_786b20;
L_786b20: /* 786b20: cmp ecx, dword ptr [eax + 0x360] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x360u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786b26: jge 0x786e29 */
  if ((sf == of)) goto L_786e29;
L_786b2c: /* 786b2c: mov edx, dword ptr [eax + 0x35c] */
  edx = R32((uint32_t)(eax + 0x35cu));
/* 786b32: mov edi, dword ptr [edx + ecx*4] */
  edi = R32((uint32_t)(edx + ecx*4));
/* 786b35: lea eax, [edi + 0x12dc] */
  eax = (uint32_t)(edi + 0x12dcu);
/* 786b3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 786b3c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786b3f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786b40: mov ecx, ebx */
  ecx = ebx;
/* 786b42: call dword ptr [0xcfa364] */
  esp -= 4; W32(esp, 0x786b48u); SPILL(); f_4e1af5(); if (g_unwind) return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 786b48: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 786b4b: fdiv dword ptr [edi + 0x344] */
  ST0 = ST0 / (F32((uint32_t)(edi + 0x344u)));
/* 786b51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786b53: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786b56: fabs  */
  ST0 = fabs(ST0);
/* 786b58: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 786b5b: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 786b5e: fdiv dword ptr [edi + 0x348] */
  ST0 = ST0 / (F32((uint32_t)(edi + 0x348u)));
/* 786b64: fabs  */
  ST0 = fabs(ST0);
/* 786b66: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 786b69: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786b6fu); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786b6f: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786b71: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 786b74: mov ebx, dword ptr [0xcfa3dc] */
  ebx = R32((uint32_t)(0xcfa3dcu));
/* 786b7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786b7b: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786b7e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786b80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786b80: mov ecx, dword ptr [edi + 0x128c] */
  ecx = R32((uint32_t)(edi + 0x128cu));
/* 786b86: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786b89: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 786b8a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786b8c: jge 0x786ba9 */
  if ((sf == of)) goto L_786ba9;
L_786b8e: /* 786b8e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786b90: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786b93: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786b99u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786b99: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786b9b: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 786b9e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786b9f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786ba2: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786ba4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786ba4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786ba7: mov ecx, eax */
  ecx = eax;
L_786ba9: /* 786ba9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 786bab: jge 0x786bb6 */
  if ((sf == of)) goto L_786bb6;
L_786bad: /* 786bad: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 786bb4: jmp 0x786bfb */
  goto L_786bfb;
L_786bb6: /* 786bb6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786bb8: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786bbb: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786bc1u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786bc1: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786bc3: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 786bc6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786bc7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786bca: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786bccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786bcc: mov ecx, dword ptr [edi + 0x128c] */
  ecx = R32((uint32_t)(edi + 0x128cu));
/* 786bd2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786bd5: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 786bd6: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786bd8: jge 0x786bf8 */
  if ((sf == of)) goto L_786bf8;
L_786bda: /* 786bda: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786bdc: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786bdf: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786be5u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786be5: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786be7: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 786bea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786beb: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786bee: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786bf0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786bf0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786bf3: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 786bf6: jmp 0x786bfb */
  goto L_786bfb;
L_786bf8: /* 786bf8: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
L_786bfb: /* 786bfb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786bfd: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786c00: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786c06u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786c06: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 786c09: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 786c0b: mov ebx, dword ptr [0xcfa598] */
  ebx = R32((uint32_t)(0xcfa598u));
/* 786c11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786c12: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786c15: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786c17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786c17: mov ecx, dword ptr [edi + 0x128c] */
  ecx = R32((uint32_t)(edi + 0x128cu));
/* 786c1d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786c20: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 786c21: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786c23: jge 0x786c40 */
  if ((sf == of)) goto L_786c40;
L_786c25: /* 786c25: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786c27: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786c2a: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786c30u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786c30: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 786c33: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 786c35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786c36: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786c39: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786c3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786c3b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786c3e: mov ecx, eax */
  ecx = eax;
L_786c40: /* 786c40: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 786c42: jge 0x786c4d */
  if ((sf == of)) goto L_786c4d;
L_786c44: /* 786c44: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 786c4b: jmp 0x786c92 */
  goto L_786c92;
L_786c4d: /* 786c4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786c4f: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786c52: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786c58u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786c58: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 786c5b: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 786c5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786c5e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786c61: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786c63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786c63: mov ecx, dword ptr [edi + 0x128c] */
  ecx = R32((uint32_t)(edi + 0x128cu));
/* 786c69: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786c6c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 786c6d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786c6f: jge 0x786c8f */
  if ((sf == of)) goto L_786c8f;
L_786c71: /* 786c71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786c73: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786c76: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786c7cu); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786c7c: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 786c7f: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 786c81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786c82: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786c85: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786c87u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786c87: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786c8a: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 786c8d: jmp 0x786c92 */
  goto L_786c92;
L_786c8f: /* 786c8f: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
L_786c92: /* 786c92: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 786c94: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786c97: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786c9du); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786c9d: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786c9f: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 786ca2: mov ebx, dword ptr [0xcfa3dc] */
  ebx = R32((uint32_t)(0xcfa3dcu));
/* 786ca8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786ca9: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786cac: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786caeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786cae: mov ecx, dword ptr [edi + 0x1290] */
  ecx = R32((uint32_t)(edi + 0x1290u));
/* 786cb4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786cb7: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 786cb8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786cba: jge 0x786cd7 */
  if ((sf == of)) goto L_786cd7;
L_786cbc: /* 786cbc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 786cbe: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786cc1: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786cc7u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786cc7: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786cc9: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 786ccc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786ccd: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786cd0: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786cd2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786cd2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786cd5: mov ecx, eax */
  ecx = eax;
L_786cd7: /* 786cd7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 786cd9: jge 0x786cdf */
  if ((sf == of)) goto L_786cdf;
L_786cdb: /* 786cdb: xor ebx, ebx */
  ebx = 0;
/* 786cdd: jmp 0x786d22 */
  goto L_786d22;
L_786cdf: /* 786cdf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 786ce1: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786ce4: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786ceau); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786cea: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786cec: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 786cef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786cf0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786cf3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786cf5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786cf5: mov ecx, dword ptr [edi + 0x1290] */
  ecx = R32((uint32_t)(edi + 0x1290u));
/* 786cfb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786cfe: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 786cff: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786d01: jge 0x786d20 */
  if ((sf == of)) goto L_786d20;
L_786d03: /* 786d03: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 786d05: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786d08: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786d0eu); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786d0e: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786d10: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 786d13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786d14: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786d17: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786d19u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786d19: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786d1c: mov ebx, eax */
  ebx = eax;
/* 786d1e: jmp 0x786d22 */
  goto L_786d22;
L_786d20: /* 786d20: mov ebx, ecx */
  ebx = ecx;
L_786d22: /* 786d22: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 786d24: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786d27: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 786d2a: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786d30u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786d30: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 786d33: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 786d35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786d36: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786d39: call dword ptr [0xcfa598] */
  esp -= 4; W32(esp, 0x786d3fu); SPILL(); f_4e301c(); if (g_unwind) return; /* Core!?appCeil@@YAHM@Z */ RELOAD();
/* 786d3f: mov ecx, dword ptr [edi + 0x1290] */
  ecx = R32((uint32_t)(edi + 0x1290u));
/* 786d45: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786d48: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 786d49: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786d4b: jge 0x786d6c */
  if ((sf == of)) goto L_786d6c;
L_786d4d: /* 786d4d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 786d4f: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786d52: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786d58u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786d58: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 786d5b: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 786d5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786d5e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786d61: call dword ptr [0xcfa598] */
  esp -= 4; W32(esp, 0x786d67u); SPILL(); f_4e301c(); if (g_unwind) return; /* Core!?appCeil@@YAHM@Z */ RELOAD();
/* 786d67: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786d6a: mov ecx, eax */
  ecx = eax;
L_786d6c: /* 786d6c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 786d6e: jge 0x786d74 */
  if ((sf == of)) goto L_786d74;
L_786d70: /* 786d70: xor ecx, ecx */
  ecx = 0;
/* 786d72: jmp 0x786dbb */
  goto L_786dbb;
L_786d74: /* 786d74: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 786d76: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786d79: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786d7fu); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786d7f: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 786d82: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 786d84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786d85: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786d88: call dword ptr [0xcfa598] */
  esp -= 4; W32(esp, 0x786d8eu); SPILL(); f_4e301c(); if (g_unwind) return; /* Core!?appCeil@@YAHM@Z */ RELOAD();
/* 786d8e: mov ecx, dword ptr [edi + 0x1290] */
  ecx = R32((uint32_t)(edi + 0x1290u));
/* 786d94: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786d97: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 786d98: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786d9a: jge 0x786dbb */
  if ((sf == of)) goto L_786dbb;
L_786d9c: /* 786d9c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 786d9e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786da1: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786da7u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786da7: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 786daa: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 786dac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786dad: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786db0: call dword ptr [0xcfa598] */
  esp -= 4; W32(esp, 0x786db6u); SPILL(); f_4e301c(); if (g_unwind) return; /* Core!?appCeil@@YAHM@Z */ RELOAD();
/* 786db6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786db9: mov ecx, eax */
  ecx = eax;
L_786dbb: /* 786dbb: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 786dbe: cmp dword ptr [ebp - 0x5c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786dc1: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 786dc4: jg 0x786dca */
  if ((!zf && sf == of)) goto L_786dca;
L_786dc6: /* 786dc6: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786dc8: jle 0x786dd9 */
  if ((zf || sf != of)) goto L_786dd9;
L_786dca: /* 786dca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 786dcb: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 786dce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 786dcf: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 786dd2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786dd3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 786dd4: call 0x786400 */
  esp -= 4; W32(esp, 0x786dd9u); SPILL(); f_786400(); if (g_unwind) return; RELOAD();
L_786dd9: /* 786dd9: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 786ddc: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 786ddf: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 786de2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 786de5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 786de6: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 786de9: mov ecx, eax */
  ecx = eax;
/* 786deb: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 786dee: jmp 0x786b20 */
  goto L_786b20;
L_786e29: /* 786e29: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 786e2a: jmp 0x786ad6 */
  goto L_786ad6;
L_786e2f: /* 786e2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 786e30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 786e31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786e33: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 786e3a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786e3b: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 786e3f: call 0x785f60 */
  esp -= 4; W32(esp, 0x786e44u); SPILL(); f_785f60(); if (g_unwind) return; RELOAD();
/* 786e44: mov edx, dword ptr [0xcfa538] */
  edx = R32((uint32_t)(0xcfa538u));
/* 786e4a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 786e51: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 786e52: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 786e55: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 786e59: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x786e5fu); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 786e5f: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 786e62: fsub dword ptr [ebx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0xcu)));
/* 786e65: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 786e68: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 786e6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 786e6c: fsub dword ptr [ebx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0xcu)));
/* 786e6f: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 786e72: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 786e74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786e75: fsub dword ptr [ebx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0xcu)));
/* 786e78: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 786e7e: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 786e81: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 786e84: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 786e87: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 786e8a: fadd dword ptr [ebx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8u)));
/* 786e8d: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 786e90: fadd dword ptr [ebx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x4u)));
/* 786e93: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 786e96: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 786e98: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 786e9b: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 786e9e: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 786ea1: call dword ptr [0xcfa530] */
  esp -= 4; W32(esp, 0x786ea7u); SPILL(); f_4e310c(); if (g_unwind) return; /* Core!??0FBox@@QAE@ABVFVector@@0@Z */ RELOAD();
/* 786ea7: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 786ead: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 786eaf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 786eb1: lea eax, [ebp - 0xa8] */
  eax = (uint32_t)(ebp + 0xffffff58u);
/* 786eb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 786eb8: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 786ebd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786ebf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 786ec0: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x786ec3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786ec3: mov ebx, eax */
  ebx = eax;
L_786ec5: /* 786ec5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 786ec7: mov dword ptr [ebp - 0x70], ebx */
  W32((uint32_t)(ebp + 0xffffff90u), ebx);
/* 786eca: je 0x787887 */
  if (zf) goto L_787887;
L_786ed0: /* 786ed0: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
/* 786ed3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 786ed5: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 786ed8: je 0x787880 */
  if (zf) goto L_787880;
L_786ede: /* 786ede: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 786ee1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 786ee3: je 0x787880 */
  if (zf) goto L_787880;
L_786ee9: /* 786ee9: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* 786eef: test ch, 4 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 786ef2: je 0x787880 */
  if (zf) goto L_787880;
L_786ef8: /* 786ef8: mov ecx, dword ptr [eax + 0x12c] */
  ecx = R32((uint32_t)(eax + 0x12cu));
/* 786efe: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 786f00: jne 0x787880 */
  if (!zf) goto L_787880;
L_786f06: /* 786f06: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 786f0c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786f0e: add ecx, 0x1523c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1523cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 786f14: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 786f16: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x786f1cu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 786f1c: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 786f22: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 786f25: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 786f28: add ecx, 0x1523c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1523cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 786f2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786f2f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 786f30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 786f31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 786f32: lea ecx, [ebp - 0x1d4] */
  ecx = (uint32_t)(ebp + 0xfffffe2cu);
/* 786f38: call 0x6c4ccd */
  esp -= 4; W32(esp, 0x786f3du); SPILL(); f_6c4ccd(); if (g_unwind) return; RELOAD();
/* 786f3d: lea ecx, [ebp - 0x1d4] */
  ecx = (uint32_t)(ebp + 0xfffffe2cu);
/* 786f43: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786f44: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 786f47: add ecx, 0x108 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 786f4d: call 0x6c1be0 */
  esp -= 4; W32(esp, 0x786f52u); SPILL(); f_6c1be0(); if (g_unwind) return; RELOAD();
/* 786f52: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 786f54: lea eax, [ebp - 0x16c] */
  eax = (uint32_t)(ebp + 0xfffffe94u);
/* 786f5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 786f5b: mov ecx, edi */
  ecx = edi;
/* 786f5d: call dword ptr [edx + 0xb8] */
  { uint32_t t = R32((uint32_t)(edx + 0xb8u)); esp -= 4; W32(esp, 0x786f63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786f63: lea ecx, [ebp - 0x16c] */
  ecx = (uint32_t)(ebp + 0xfffffe94u);
/* 786f69: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 786f6d: call dword ptr [0xcfa594] */
  esp -= 4; W32(esp, 0x786f73u); SPILL(); f_4e1af0(); if (g_unwind) return; /* Core!?Determinant@FMatrix@@QBEMXZ */ RELOAD();
/* 786f73: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 786f76: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 786f79: lea edx, [ebp - 0x22c] */
  edx = (uint32_t)(ebp + 0xfffffdd4u);
/* 786f7f: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 786f82: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 786f83: lea ecx, [ebp - 0x16c] */
  ecx = (uint32_t)(ebp + 0xfffffe94u);
/* 786f89: call dword ptr [0xcfa590] */
  esp -= 4; W32(esp, 0x786f8fu); SPILL(); f_4e1e9c(); if (g_unwind) return; /* Core!?TransposeAdjoint@FMatrix@@QBE?AV1@XZ */ RELOAD();
/* 786f8f: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* 786f92: add edx, 0x64 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 786f95: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 786f99: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 786f9c: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 786fa3: jmp 0x786fb0 */
  goto L_786fb0;
L_786fb0: /* 786fb0: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 786fb5: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 786fb8: cmp ecx, dword ptr [eax + 0x15240] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x15240u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786fbe: jge 0x787860 */
  if ((sf == of)) goto L_787860;
L_786fc4: /* 786fc4: mov ecx, dword ptr [esi + 0x6000] */
  ecx = R32((uint32_t)(esi + 0x6000u));
/* 786fca: cmp ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786fd0: jge 0x78782d */
  if ((sf == of)) goto L_78782d;
L_786fd6: /* 786fd6: mov eax, dword ptr [esi + 0xf004] */
  eax = R32((uint32_t)(esi + 0xf004u));
/* 786fdc: lea ebx, [eax + 2] */
  ebx = (uint32_t)(eax + 0x2u);
/* 786fdf: cmp ebx, 0xc00 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xc00u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786fe5: jge 0x78782d */
  if ((sf == of)) goto L_78782d;
L_786feb: /* 786feb: cmp dword ptr [esi + 0x15008], 0x400 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x15008u))); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786ff5: jge 0x78782d */
  if ((sf == of)) goto L_78782d;
L_786ffb: /* 786ffb: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 786ffe: lea ebx, [esi + ecx*8] */
  ebx = (uint32_t)(esi + ecx*8);
/* 787001: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 787004: lea ecx, [esi + eax*4 + 0x6004] */
  ecx = (uint32_t)(esi + eax*4 + 0x6004u);
/* 78700b: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 78700d: mov eax, dword ptr [esi + 0xf004] */
  eax = R32((uint32_t)(esi + 0xf004u));
/* 787013: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 787016: lea ecx, [esi + eax*4 + 0x6010] */
  ecx = (uint32_t)(esi + eax*4 + 0x6010u);
/* 78701d: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 787020: mov eax, dword ptr [esi + 0xf004] */
  eax = R32((uint32_t)(esi + 0xf004u));
/* 787026: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 787029: lea ecx, [esi + eax*4 + 0x601c] */
  ecx = (uint32_t)(esi + eax*4 + 0x601cu);
/* 787030: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 787033: mov eax, dword ptr [esi + 0x15008] */
  eax = R32((uint32_t)(esi + 0x15008u));
/* 787039: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 78703c: lea ecx, [esi + eax*4 + 0xf008] */
  ecx = (uint32_t)(esi + eax*4 + 0xf008u);
/* 787043: mov dword ptr [ebx + 0xc], ecx */
  W32((uint32_t)(ebx + 0xcu), ecx);
/* 787046: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78704b: mov ecx, dword ptr [eax + 0x1523c] */
  ecx = R32((uint32_t)(eax + 0x1523cu));
/* 787051: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 787054: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 787057: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 78705a: mov ecx, dword ptr [ecx + 0x114] */
  ecx = R32((uint32_t)(ecx + 0x114u));
/* 787060: movzx esi, word ptr [ecx + eax*8] */
  esi = (uint32_t)(R16((uint32_t)(ecx + eax*8)));
/* 787064: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 787066: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* 787069: movzx eax, word ptr [ecx + 4] */
  eax = (uint32_t)(R16((uint32_t)(ecx + 0x4u)));
/* 78706d: lea esi, [esi + esi*2] */
  esi = (uint32_t)(esi + esi*2);
/* 787070: lea esi, [edx + esi*8] */
  esi = (uint32_t)(edx + esi*8);
/* 787073: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 787076: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 787079: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 78707c: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 78707f: movzx ecx, word ptr [ecx + 2] */
  ecx = (uint32_t)(R16((uint32_t)(ecx + 0x2u)));
/* 787083: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 787086: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 787089: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 78708c: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* 78708f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787092: lea edx, [ebp - 0x23c] */
  edx = (uint32_t)(ebp + 0xfffffdc4u);
/* 787098: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 78709b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78709c: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 78709f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7870a1: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7870a3: fstp dword ptr [ebp - 0x1e0] */
  WF32((uint32_t)(ebp + 0xfffffe20u), ST0); FPOP();
/* 7870a9: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 7870ac: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 7870af: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7870b2: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7870b5: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7870b8: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7870bb: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 7870bd: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 7870c0: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7870c2: fst dword ptr [ebp - 0x1ec] */
  WF32((uint32_t)(ebp + 0xfffffe14u), ST0);
/* 7870c8: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7870cb: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7870ce: fmul dword ptr [ebp - 0x1e0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffe20u)));
/* 7870d4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7870d6: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7870d9: fmul dword ptr [ebp - 0x1e0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffe20u)));
/* 7870df: fld dword ptr [ebp - 0x1ec] */
  { double v = F32((uint32_t)(ebp + 0xfffffe14u)); FPUSH(v); }
/* 7870e5: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 7870e8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7870ea: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7870ed: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 7870f0: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7870f3: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7870f6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7870f8: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 7870fb: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 7870fe: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 787101: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x787107u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 787107: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 787109: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* 78710c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 78710f: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 787112: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 787115: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 787118: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 78711f: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 787122: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 787125: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 78712b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78712d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 787130: movzx eax, word ptr [ecx] */
  eax = (uint32_t)(R16((uint32_t)(ecx)));
/* 787133: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 787136: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 787139: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78713b: lea eax, [ecx + edx*8] */
  eax = (uint32_t)(ecx + edx*8);
/* 78713e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 787140: lea ecx, [ebp - 0x16c] */
  ecx = (uint32_t)(ebp + 0xfffffe94u);
/* 787146: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 787149: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 78714c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 78714f: jne 0x787439 */
  if (!zf) goto L_787439;
L_787155: /* 787155: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 78715b: lea eax, [ebp - 0xdc] */
  eax = (uint32_t)(ebp + 0xffffff24u);
/* 787161: mov dword ptr [ebp - 0xdc], edx */
  W32((uint32_t)(ebp + 0xffffff24u), edx);
/* 787167: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 78716d: mov dword ptr [ebp - 0xd0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff30u), 0x3f800000u);
/* 787177: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 78717a: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 78717d: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 787180: lea edi, [ebp - 0x19c] */
  edi = (uint32_t)(ebp + 0xfffffe64u);
/* 787186: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787188: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 78718a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78718c: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 78718f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787191: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 787194: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787196: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 787199: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 78719c: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 78719f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7871a2: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7871a5: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7871a8: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7871ab: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7871ae: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7871b1: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7871b3: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7871b5: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7871b7: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7871b9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7871bb: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7871be: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7871c1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7871c4: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7871c7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7871ca: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7871cd: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7871d0: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7871d3: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7871d5: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7871d7: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7871d9: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7871db: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7871dd: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7871e0: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7871e3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7871e6: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7871e9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7871ec: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7871ef: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7871f2: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7871f5: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7871f7: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7871f9: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7871fb: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7871fd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7871ff: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 787201: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 787203: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 787205: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 787208: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 78720b: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 78720e: mov eax, dword ptr [ebp - 0x19c] */
  eax = R32((uint32_t)(ebp + 0xfffffe64u));
/* 787214: mov ecx, dword ptr [ebp - 0x198] */
  ecx = R32((uint32_t)(ebp + 0xfffffe68u));
/* 78721a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78721d: mov edx, esp */
  edx = esp;
/* 78721f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 787221: mov eax, dword ptr [ebp - 0x194] */
  eax = R32((uint32_t)(ebp + 0xfffffe6cu));
/* 787227: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 78722a: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 78722c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78722d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 787230: call 0x6c882d */
  esp -= 4; W32(esp, 0x787235u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 787235: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 787238: movzx eax, word ptr [edx + 4] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x4u)));
/* 78723c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78723f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 787241: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 787244: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 787247: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 78724d: lea edx, [ebp - 0x16c] */
  edx = (uint32_t)(ebp + 0xfffffe94u);
/* 787253: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 787256: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 787259: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 78725c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 78725e: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 787264: mov dword ptr [ebp - 0xbc], eax */
  W32((uint32_t)(ebp + 0xffffff44u), eax);
/* 78726a: mov dword ptr [ebp - 0xb0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x3f800000u);
/* 787274: fstp dword ptr [ebp - 0xb4] */
  WF32((uint32_t)(ebp + 0xffffff4cu), ST0); FPOP();
/* 78727a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 78727d: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 787280: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 787283: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 787286: lea edi, [ebp - 0x11c] */
  edi = (uint32_t)(ebp + 0xfffffee4u);
/* 78728c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78728e: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 787290: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787292: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 787295: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787297: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 78729a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78729c: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 78729f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7872a2: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 7872a5: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7872a8: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7872ab: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7872ae: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7872b1: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7872b4: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7872b7: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7872b9: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7872bb: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7872bd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7872bf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7872c1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7872c4: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7872c7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7872ca: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7872cd: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7872d0: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7872d3: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7872d6: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7872d9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7872db: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7872dd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7872df: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7872e1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7872e3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7872e6: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7872e9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7872ec: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7872ef: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7872f2: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7872f5: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7872f8: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7872fb: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7872fd: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7872ff: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 787301: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 787303: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 787305: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 787307: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 787309: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 78730b: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 78730e: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 787311: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 787314: mov ecx, dword ptr [ebp - 0x11c] */
  ecx = R32((uint32_t)(ebp + 0xfffffee4u));
/* 78731a: mov edx, dword ptr [ebp - 0x118] */
  edx = R32((uint32_t)(ebp + 0xfffffee8u));
/* 787320: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 787323: mov eax, esp */
  eax = esp;
/* 787325: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 787327: mov ecx, dword ptr [ebp - 0x114] */
  ecx = R32((uint32_t)(ebp + 0xfffffeecu));
/* 78732d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 787330: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 787333: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 787334: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 787337: call 0x6c882d */
  esp -= 4; W32(esp, 0x78733cu); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 78733c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 78733f: movzx eax, word ptr [eax + 2] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0x2u)));
/* 787343: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 787346: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 787349: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 78734b: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 78734e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 787350: lea edx, [ebp - 0xfc] */
  edx = (uint32_t)(ebp + 0xffffff04u);
/* 787356: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 787359: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78735c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 78735f: lea eax, [ebp - 0x16c] */
  eax = (uint32_t)(ebp + 0xfffffe94u);
/* 787365: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 78736b: mov dword ptr [ebp - 0xfc], ecx */
  W32((uint32_t)(ebp + 0xffffff04u), ecx);
/* 787371: mov dword ptr [ebp - 0xf0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x3f800000u);
/* 78737b: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 787381: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 787384: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 787387: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 78738a: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78738d: lea edi, [ebp - 0x1ac] */
  edi = (uint32_t)(ebp + 0xfffffe54u);
/* 787393: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787395: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 787397: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787399: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 78739c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78739e: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 7873a1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7873a3: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 7873a6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7873a9: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 7873ac: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7873af: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7873b2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7873b5: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7873b8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7873bb: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7873be: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7873c0: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7873c2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7873c4: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7873c6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7873c8: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7873cb: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7873ce: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7873d1: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7873d4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7873d7: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7873da: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7873dd: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7873e0: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7873e2: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7873e4: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7873e6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7873e8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7873ea: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7873ed: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7873f0: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7873f3: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7873f6: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7873f9: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7873fc: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7873ff: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 787402: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 787404: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 787406: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 787408: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 78740a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78740c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 78740e: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 787410: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 787412: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 787415: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 787418: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 78741b: mov edx, dword ptr [ebp - 0x1ac] */
  edx = R32((uint32_t)(ebp + 0xfffffe54u));
/* 787421: mov eax, dword ptr [ebp - 0x1a8] */
  eax = R32((uint32_t)(ebp + 0xfffffe58u));
/* 787427: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78742a: mov ecx, esp */
  ecx = esp;
/* 78742c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 78742e: mov edx, dword ptr [ebp - 0x1a4] */
  edx = R32((uint32_t)(ebp + 0xfffffe5cu));
/* 787434: jmp 0x787718 */
  goto L_787718;
L_787439: /* 787439: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 78743f: lea eax, [ebp - 0xcc] */
  eax = (uint32_t)(ebp + 0xffffff34u);
/* 787445: mov dword ptr [ebp - 0xcc], edx */
  W32((uint32_t)(ebp + 0xffffff34u), edx);
/* 78744b: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 787451: mov dword ptr [ebp - 0xc0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x3f800000u);
/* 78745b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 78745e: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 787461: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 787464: lea edi, [ebp - 0x18c] */
  edi = (uint32_t)(ebp + 0xfffffe74u);
/* 78746a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78746c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 78746e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787470: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 787473: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787475: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 787478: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78747a: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 78747d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787480: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 787483: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787486: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 787489: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 78748c: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 78748f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787492: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 787495: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 787497: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 787499: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 78749b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 78749d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78749f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7874a2: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7874a5: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7874a8: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7874ab: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7874ae: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7874b1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7874b4: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7874b7: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7874b9: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7874bb: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7874bd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7874bf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7874c1: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7874c4: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7874c7: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7874ca: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7874cd: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7874d0: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7874d3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7874d6: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7874d9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7874db: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7874dd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7874df: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7874e1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7874e3: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7874e5: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7874e7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7874e9: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7874ec: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7874ef: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7874f2: mov eax, dword ptr [ebp - 0x18c] */
  eax = R32((uint32_t)(ebp + 0xfffffe74u));
/* 7874f8: mov ecx, dword ptr [ebp - 0x188] */
  ecx = R32((uint32_t)(ebp + 0xfffffe78u));
/* 7874fe: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 787501: mov edx, esp */
  edx = esp;
/* 787503: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 787505: mov eax, dword ptr [ebp - 0x184] */
  eax = R32((uint32_t)(ebp + 0xfffffe7cu));
/* 78750b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 78750e: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 787510: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787511: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 787514: call 0x6c882d */
  esp -= 4; W32(esp, 0x787519u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 787519: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 78751c: movzx eax, word ptr [edx + 2] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x2u)));
/* 787520: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 787523: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 787525: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 787528: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 78752b: lea ecx, [ebp - 0xec] */
  ecx = (uint32_t)(ebp + 0xffffff14u);
/* 787531: lea edx, [ebp - 0x16c] */
  edx = (uint32_t)(ebp + 0xfffffe94u);
/* 787537: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 78753a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78753d: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 787540: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 787542: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 787548: mov dword ptr [ebp - 0xec], eax */
  W32((uint32_t)(ebp + 0xffffff14u), eax);
/* 78754e: mov dword ptr [ebp - 0xe0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff20u), 0x3f800000u);
/* 787558: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 78755e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 787561: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 787564: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 787567: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78756a: lea edi, [ebp - 0x12c] */
  edi = (uint32_t)(ebp + 0xfffffed4u);
/* 787570: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787572: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 787574: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787576: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 787579: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78757b: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 78757e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787580: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 787583: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787586: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 787589: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 78758c: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 78758f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787592: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 787595: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787598: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 78759b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 78759d: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 78759f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7875a1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7875a3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7875a5: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7875a8: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7875ab: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7875ae: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7875b1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7875b4: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7875b7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7875ba: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7875bd: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7875bf: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7875c1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7875c3: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7875c5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7875c7: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7875ca: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7875cd: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7875d0: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7875d3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7875d6: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7875d9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7875dc: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7875df: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7875e1: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7875e3: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7875e5: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7875e7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7875e9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7875eb: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7875ed: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7875ef: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7875f2: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7875f5: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7875f8: mov ecx, dword ptr [ebp - 0x12c] */
  ecx = R32((uint32_t)(ebp + 0xfffffed4u));
/* 7875fe: mov edx, dword ptr [ebp - 0x128] */
  edx = R32((uint32_t)(ebp + 0xfffffed8u));
/* 787604: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 787607: mov eax, esp */
  eax = esp;
/* 787609: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78760b: mov ecx, dword ptr [ebp - 0x124] */
  ecx = R32((uint32_t)(ebp + 0xfffffedcu));
/* 787611: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 787614: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 787617: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 787618: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 78761b: call 0x6c882d */
  esp -= 4; W32(esp, 0x787620u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 787620: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 787623: movzx eax, word ptr [eax + 4] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0x4u)));
/* 787627: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78762a: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 78762d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 78762f: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 787632: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 787634: lea edx, [ebp - 0x10c] */
  edx = (uint32_t)(ebp + 0xfffffef4u);
/* 78763a: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 78763d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 787640: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 787643: lea eax, [ebp - 0x16c] */
  eax = (uint32_t)(ebp + 0xfffffe94u);
/* 787649: fstp dword ptr [ebp - 0x108] */
  WF32((uint32_t)(ebp + 0xfffffef8u), ST0); FPOP();
/* 78764f: mov dword ptr [ebp - 0x10c], ecx */
  W32((uint32_t)(ebp + 0xfffffef4u), ecx);
/* 787655: mov dword ptr [ebp - 0x100], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff00u), 0x3f800000u);
/* 78765f: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 787665: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 787668: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 78766b: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 78766e: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 787671: lea edi, [ebp - 0x17c] */
  edi = (uint32_t)(ebp + 0xfffffe84u);
/* 787677: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787679: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 78767b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78767d: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 787680: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787682: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 787685: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787687: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 78768a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 78768d: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 787690: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787693: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 787696: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787699: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 78769c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 78769f: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7876a2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7876a4: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7876a6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7876a8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7876aa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7876ac: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7876af: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7876b2: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7876b5: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7876b8: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7876bb: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7876be: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7876c1: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7876c4: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7876c6: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7876c8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7876ca: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7876cc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7876ce: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7876d1: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7876d4: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7876d7: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7876da: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7876dd: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7876e0: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7876e3: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7876e6: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7876e8: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7876ea: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7876ec: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7876ee: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7876f0: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7876f2: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7876f4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7876f6: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7876f9: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7876fc: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7876ff: mov edx, dword ptr [ebp - 0x17c] */
  edx = R32((uint32_t)(ebp + 0xfffffe84u));
/* 787705: mov eax, dword ptr [ebp - 0x178] */
  eax = R32((uint32_t)(ebp + 0xfffffe88u));
/* 78770b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78770e: mov ecx, esp */
  ecx = esp;
/* 787710: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 787712: mov edx, dword ptr [ebp - 0x174] */
  edx = R32((uint32_t)(ebp + 0xfffffe8cu));
L_787718: /* 787718: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 78771b: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 78771e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78771f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 787722: call 0x6c882d */
  esp -= 4; W32(esp, 0x787727u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 787727: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 78772a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78772d: lea ecx, [ebp - 0x22c] */
  ecx = (uint32_t)(ebp + 0xfffffdd4u);
/* 787733: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787734: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 787735: lea eax, [ebp - 0x16c] */
  eax = (uint32_t)(ebp + 0xfffffe94u);
/* 78773b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78773c: lea ecx, [ebp - 0x24c] */
  ecx = (uint32_t)(ebp + 0xfffffdb4u);
/* 787742: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787743: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 787746: call dword ptr [0xcfa58c] */
  esp -= 4; W32(esp, 0x78774cu); SPILL(); f_4e1a55(); if (g_unwind) return; /* Core!?TransformByUsingAdjointT@FPlane@@QBE?AV1@ABVFMatrix@@M0@Z */ RELOAD();
/* 78774c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78774e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 787751: mov edx, esp */
  edx = esp;
/* 787753: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 787755: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 787758: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 78775b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 78775e: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 787761: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787762: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 787765: call 0x6c1965 */
  esp -= 4; W32(esp, 0x78776au); SPILL(); f_6c1965(); if (g_unwind) return; RELOAD();
/* 78776a: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 78776d: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 787770: mov dword ptr [ebx + 0x14], 1 */
  W32((uint32_t)(ebx + 0x14u), 0x1u);
/* 787777: mov eax, dword ptr [esi + 0x6000] */
  eax = R32((uint32_t)(esi + 0x6000u));
/* 78777d: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 787780: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 787783: lea edi, [esi + edx*4 + 0x12008] */
  edi = (uint32_t)(esi + edx*4 + 0x12008u);
/* 78778a: mov dword ptr [edi], 0x3f800000 */
  W32((uint32_t)(edi), 0x3f800000u);
/* 787790: mov dword ptr [edi + 4], 0x3f800000 */
  W32((uint32_t)(edi + 0x4u), 0x3f800000u);
/* 787797: movzx eax, word ptr [eax + 6] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0x6u)));
/* 78779b: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 78779e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7877a1: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7877a4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7877a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7877a7: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7877aa: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x7877b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7877b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7877b2: jne 0x7877e1 */
  if (!zf) goto L_7877e1;
L_7877b4: /* 7877b4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7877b7: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7877ba: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* 7877c0: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7877c3: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 7877c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7877c8: jne 0x7877e1 */
  if (!zf) goto L_7877e1;
L_7877ca: /* 7877ca: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 7877cf: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x7877d5u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 7877d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7877d6: call 0x6c449e */
  esp -= 4; W32(esp, 0x7877dbu); SPILL(); f_6c449e(); if (g_unwind) return; RELOAD();
/* 7877db: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7877de: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7877e1: /* 7877e1: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 7877e4: mov dword ptr [ebx + 0x10], edi */
  W32((uint32_t)(ebx + 0x10u), edi);
/* 7877e7: mov edx, dword ptr [esi + 0xf004] */
  edx = R32((uint32_t)(esi + 0xf004u));
/* 7877ed: mov ecx, dword ptr [esi + 0x15008] */
  ecx = R32((uint32_t)(esi + 0x15008u));
/* 7877f3: mov edi, dword ptr [esi + 0x6000] */
  edi = R32((uint32_t)(esi + 0x6000u));
/* 7877f9: mov ebx, dword ptr [ebp - 0x70] */
  ebx = R32((uint32_t)(ebp + 0xffffff90u));
/* 7877fc: mov eax, 3 */
  eax = 0x3u;
/* 787801: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 787803: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 787805: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 787808: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 787809: mov dword ptr [esi + 0x6000], edi */
  W32((uint32_t)(esi + 0x6000u), edi);
/* 78780f: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 787812: mov dword ptr [esi + 0xf004], edx */
  W32((uint32_t)(esi + 0xf004u), edx);
/* 787818: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78781b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 78781c: mov dword ptr [esi + 0x15008], ecx */
  W32((uint32_t)(esi + 0x15008u), ecx);
/* 787822: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 787825: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 787828: jmp 0x786fb0 */
  goto L_786fb0;
L_78782d: /* 78782d: lea ecx, [ebp - 0x22c] */
  ecx = (uint32_t)(ebp + 0xfffffdd4u);
/* 787833: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 787837: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x78783du); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 78783d: lea ecx, [ebp - 0x16c] */
  ecx = (uint32_t)(ebp + 0xfffffe94u);
/* 787843: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 787847: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x78784du); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_78784d: /* 78784d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 787850: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 787851: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 787852: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 787859: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78785a: mov esp, ebp */
  esp = ebp;
/* 78785c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78785d: ret 0xc */
  esp += 16; SPILL(); return;
L_787860: /* 787860: lea ecx, [ebp - 0x22c] */
  ecx = (uint32_t)(ebp + 0xfffffdd4u);
/* 787866: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 78786a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x787870u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 787870: lea ecx, [ebp - 0x16c] */
  ecx = (uint32_t)(ebp + 0xfffffe94u);
/* 787876: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 78787a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x787880u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_787880: /* 787880: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 787882: jmp 0x786ec5 */
  goto L_786ec5;
L_787887: /* 787887: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 78788a: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x787890u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 787890: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 787895: mov ecx, dword ptr [eax + 0x15220] */
  ecx = R32((uint32_t)(eax + 0x15220u));
/* 78789b: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78789e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7878a5: je 0x78784d */
  if (zf) goto L_78784d;
L_7878a7: /* 7878a7: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
/* 7878ae: mov edi, edi */
  edi = edi;
L_7878b0: /* 7878b0: mov eax, dword ptr [esi + 0x6000] */
  eax = R32((uint32_t)(esi + 0x6000u));
/* 7878b6: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7878b9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7878bb: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7878be: jge 0x78784d */
  if ((sf == of)) goto L_78784d;
L_7878c0: /* 7878c0: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7878c3: mov eax, ecx */
  eax = ecx;
/* 7878c5: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7878c8: mov eax, dword ptr [esi + ecx*8 + 4] */
  eax = R32((uint32_t)(esi + ecx*8 + 0x4u));
/* 7878cc: fidiv dword ptr [ebp + 0xc] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(ebp + 0xcu)));
/* 7878cf: mov edx, dword ptr [esi + ecx*8 + 8] */
  edx = R32((uint32_t)(esi + ecx*8 + 0x8u));
/* 7878d3: lea edi, [esi + ecx*8] */
  edi = (uint32_t)(esi + ecx*8);
/* 7878d6: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7878d8: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7878db: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 7878dd: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7878df: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7878e2: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7878e5: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7878e8: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7878eb: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 7878ee: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7878f1: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7878f4: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7878f7: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 7878f9: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7878fc: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7878ff: fadd dword ptr [edx + 4] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x4u)));
/* 787902: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 787905: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 787908: fadd dword ptr [edx + 8] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x8u)));
/* 78790b: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 78790e: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 787911: fmul dword ptr [0xa09998] */
  ST0 = ST0 * (F32((uint32_t)(0xa09998u)));
/* 787917: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 78791a: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 78791d: fmul dword ptr [0xa09998] */
  ST0 = ST0 * (F32((uint32_t)(0xa09998u)));
/* 787923: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 787926: fmul dword ptr [0xa09998] */
  ST0 = ST0 * (F32((uint32_t)(0xa09998u)));
/* 78792c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 78792f: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 787932: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 787934: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 787937: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 78793a: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 78793d: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 787940: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 787943: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 787946: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 787949: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 78794c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 787952: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 787955: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 787958: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 78795b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78795c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78795e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78795f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 787960: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787961: call 0x6c8607 */
  esp -= 4; W32(esp, 0x787966u); SPILL(); f_6c8607(); if (g_unwind) return; RELOAD();
/* 787966: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 787969: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 78796c: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 78796f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 787970: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 787972: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 787973: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787974: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 787975: call 0x6c8607 */
  esp -= 4; W32(esp, 0x78797au); SPILL(); f_6c8607(); if (g_unwind) return; RELOAD();
/* 78797a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 78797d: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 78797f: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 787982: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 787983: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 787985: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 787986: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787987: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 787988: call 0x6c8607 */
  esp -= 4; W32(esp, 0x78798du); SPILL(); f_6c8607(); if (g_unwind) return; RELOAD();
/* 78798d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 787990: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 787991: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 787993: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 787994: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 787997: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787998: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 78799b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78799c: call 0x6c8607 */
  esp -= 4; W32(esp, 0x7879a1u); SPILL(); f_6c8607(); if (g_unwind) return; RELOAD();
/* 7879a1: inc dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 7879a4: jmp 0x7878b0 */
  goto L_7878b0;
}

void f_786b1a(void) {
  LOAD_REGS();
  goto L_786b1a;
L_786ad6: /* 786ad6: cmp edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786ad9: mov ecx, dword ptr [edi + 0x8c] */
  ecx = R32((uint32_t)(edi + 0x8cu));
/* 786adf: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 786ae2: jge 0x786e2f */
  if ((sf == of)) goto L_786e2f;
L_786ae8: /* 786ae8: lea eax, [edx + edx*2] */
  eax = (uint32_t)(edx + edx*2);
/* 786aeb: mov eax, dword ptr [ecx + eax*8 + 0x11c] */
  eax = R32((uint32_t)(ecx + eax*8 + 0x11cu));
/* 786af2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 786af4: jne 0x786afb */
  if (!zf) goto L_786afb;
L_786af6: /* 786af6: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 786af9: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
L_786afb: /* 786afb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 786afd: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 786b00: je 0x786e29 */
  if (zf) goto L_786e29;
L_786b06: /* 786b06: test byte ptr [eax + 0x358], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x358u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 786b0d: je 0x786e29 */
  if (zf) goto L_786e29;
L_786b13: /* 786b13: xor ecx, ecx */
  ecx = 0;
/* 786b15: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 786b18: jmp 0x786b20 */
  goto L_786b20;
L_786b1a: /* 786b1a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_786b20: /* 786b20: cmp ecx, dword ptr [eax + 0x360] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x360u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786b26: jge 0x786e29 */
  if ((sf == of)) goto L_786e29;
L_786b2c: /* 786b2c: mov edx, dword ptr [eax + 0x35c] */
  edx = R32((uint32_t)(eax + 0x35cu));
/* 786b32: mov edi, dword ptr [edx + ecx*4] */
  edi = R32((uint32_t)(edx + ecx*4));
/* 786b35: lea eax, [edi + 0x12dc] */
  eax = (uint32_t)(edi + 0x12dcu);
/* 786b3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 786b3c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786b3f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786b40: mov ecx, ebx */
  ecx = ebx;
/* 786b42: call dword ptr [0xcfa364] */
  esp -= 4; W32(esp, 0x786b48u); SPILL(); f_4e1af5(); if (g_unwind) return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 786b48: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 786b4b: fdiv dword ptr [edi + 0x344] */
  ST0 = ST0 / (F32((uint32_t)(edi + 0x344u)));
/* 786b51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786b53: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786b56: fabs  */
  ST0 = fabs(ST0);
/* 786b58: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 786b5b: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 786b5e: fdiv dword ptr [edi + 0x348] */
  ST0 = ST0 / (F32((uint32_t)(edi + 0x348u)));
/* 786b64: fabs  */
  ST0 = fabs(ST0);
/* 786b66: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 786b69: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786b6fu); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786b6f: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786b71: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 786b74: mov ebx, dword ptr [0xcfa3dc] */
  ebx = R32((uint32_t)(0xcfa3dcu));
/* 786b7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786b7b: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786b7e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786b80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786b80: mov ecx, dword ptr [edi + 0x128c] */
  ecx = R32((uint32_t)(edi + 0x128cu));
/* 786b86: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786b89: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 786b8a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786b8c: jge 0x786ba9 */
  if ((sf == of)) goto L_786ba9;
L_786b8e: /* 786b8e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786b90: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786b93: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786b99u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786b99: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786b9b: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 786b9e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786b9f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786ba2: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786ba4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786ba4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786ba7: mov ecx, eax */
  ecx = eax;
L_786ba9: /* 786ba9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 786bab: jge 0x786bb6 */
  if ((sf == of)) goto L_786bb6;
L_786bad: /* 786bad: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 786bb4: jmp 0x786bfb */
  goto L_786bfb;
L_786bb6: /* 786bb6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786bb8: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786bbb: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786bc1u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786bc1: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786bc3: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 786bc6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786bc7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786bca: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786bccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786bcc: mov ecx, dword ptr [edi + 0x128c] */
  ecx = R32((uint32_t)(edi + 0x128cu));
/* 786bd2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786bd5: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 786bd6: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786bd8: jge 0x786bf8 */
  if ((sf == of)) goto L_786bf8;
L_786bda: /* 786bda: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786bdc: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786bdf: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786be5u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786be5: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786be7: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 786bea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786beb: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786bee: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786bf0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786bf0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786bf3: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 786bf6: jmp 0x786bfb */
  goto L_786bfb;
L_786bf8: /* 786bf8: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
L_786bfb: /* 786bfb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786bfd: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786c00: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786c06u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786c06: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 786c09: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 786c0b: mov ebx, dword ptr [0xcfa598] */
  ebx = R32((uint32_t)(0xcfa598u));
/* 786c11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786c12: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786c15: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786c17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786c17: mov ecx, dword ptr [edi + 0x128c] */
  ecx = R32((uint32_t)(edi + 0x128cu));
/* 786c1d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786c20: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 786c21: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786c23: jge 0x786c40 */
  if ((sf == of)) goto L_786c40;
L_786c25: /* 786c25: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786c27: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786c2a: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786c30u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786c30: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 786c33: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 786c35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786c36: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786c39: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786c3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786c3b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786c3e: mov ecx, eax */
  ecx = eax;
L_786c40: /* 786c40: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 786c42: jge 0x786c4d */
  if ((sf == of)) goto L_786c4d;
L_786c44: /* 786c44: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 786c4b: jmp 0x786c92 */
  goto L_786c92;
L_786c4d: /* 786c4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786c4f: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786c52: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786c58u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786c58: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 786c5b: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 786c5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786c5e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786c61: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786c63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786c63: mov ecx, dword ptr [edi + 0x128c] */
  ecx = R32((uint32_t)(edi + 0x128cu));
/* 786c69: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786c6c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 786c6d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786c6f: jge 0x786c8f */
  if ((sf == of)) goto L_786c8f;
L_786c71: /* 786c71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786c73: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786c76: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786c7cu); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786c7c: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 786c7f: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 786c81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786c82: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786c85: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786c87u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786c87: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786c8a: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 786c8d: jmp 0x786c92 */
  goto L_786c92;
L_786c8f: /* 786c8f: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
L_786c92: /* 786c92: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 786c94: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786c97: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786c9du); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786c9d: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786c9f: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 786ca2: mov ebx, dword ptr [0xcfa3dc] */
  ebx = R32((uint32_t)(0xcfa3dcu));
/* 786ca8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786ca9: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786cac: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786caeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786cae: mov ecx, dword ptr [edi + 0x1290] */
  ecx = R32((uint32_t)(edi + 0x1290u));
/* 786cb4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786cb7: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 786cb8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786cba: jge 0x786cd7 */
  if ((sf == of)) goto L_786cd7;
L_786cbc: /* 786cbc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 786cbe: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786cc1: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786cc7u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786cc7: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786cc9: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 786ccc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786ccd: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786cd0: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786cd2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786cd2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786cd5: mov ecx, eax */
  ecx = eax;
L_786cd7: /* 786cd7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 786cd9: jge 0x786cdf */
  if ((sf == of)) goto L_786cdf;
L_786cdb: /* 786cdb: xor ebx, ebx */
  ebx = 0;
/* 786cdd: jmp 0x786d22 */
  goto L_786d22;
L_786cdf: /* 786cdf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 786ce1: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786ce4: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786ceau); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786cea: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786cec: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 786cef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786cf0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786cf3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786cf5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786cf5: mov ecx, dword ptr [edi + 0x1290] */
  ecx = R32((uint32_t)(edi + 0x1290u));
/* 786cfb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786cfe: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 786cff: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786d01: jge 0x786d20 */
  if ((sf == of)) goto L_786d20;
L_786d03: /* 786d03: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 786d05: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786d08: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786d0eu); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786d0e: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786d10: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 786d13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786d14: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786d17: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786d19u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786d19: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786d1c: mov ebx, eax */
  ebx = eax;
/* 786d1e: jmp 0x786d22 */
  goto L_786d22;
L_786d20: /* 786d20: mov ebx, ecx */
  ebx = ecx;
L_786d22: /* 786d22: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 786d24: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786d27: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 786d2a: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786d30u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786d30: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 786d33: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 786d35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786d36: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786d39: call dword ptr [0xcfa598] */
  esp -= 4; W32(esp, 0x786d3fu); SPILL(); f_4e301c(); if (g_unwind) return; /* Core!?appCeil@@YAHM@Z */ RELOAD();
/* 786d3f: mov ecx, dword ptr [edi + 0x1290] */
  ecx = R32((uint32_t)(edi + 0x1290u));
/* 786d45: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786d48: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 786d49: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786d4b: jge 0x786d6c */
  if ((sf == of)) goto L_786d6c;
L_786d4d: /* 786d4d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 786d4f: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786d52: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786d58u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786d58: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 786d5b: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 786d5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786d5e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786d61: call dword ptr [0xcfa598] */
  esp -= 4; W32(esp, 0x786d67u); SPILL(); f_4e301c(); if (g_unwind) return; /* Core!?appCeil@@YAHM@Z */ RELOAD();
/* 786d67: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786d6a: mov ecx, eax */
  ecx = eax;
L_786d6c: /* 786d6c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 786d6e: jge 0x786d74 */
  if ((sf == of)) goto L_786d74;
L_786d70: /* 786d70: xor ecx, ecx */
  ecx = 0;
/* 786d72: jmp 0x786dbb */
  goto L_786dbb;
L_786d74: /* 786d74: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 786d76: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786d79: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786d7fu); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786d7f: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 786d82: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 786d84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786d85: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786d88: call dword ptr [0xcfa598] */
  esp -= 4; W32(esp, 0x786d8eu); SPILL(); f_4e301c(); if (g_unwind) return; /* Core!?appCeil@@YAHM@Z */ RELOAD();
/* 786d8e: mov ecx, dword ptr [edi + 0x1290] */
  ecx = R32((uint32_t)(edi + 0x1290u));
/* 786d94: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786d97: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 786d98: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786d9a: jge 0x786dbb */
  if ((sf == of)) goto L_786dbb;
L_786d9c: /* 786d9c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 786d9e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786da1: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786da7u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786da7: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 786daa: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 786dac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786dad: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786db0: call dword ptr [0xcfa598] */
  esp -= 4; W32(esp, 0x786db6u); SPILL(); f_4e301c(); if (g_unwind) return; /* Core!?appCeil@@YAHM@Z */ RELOAD();
/* 786db6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786db9: mov ecx, eax */
  ecx = eax;
L_786dbb: /* 786dbb: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 786dbe: cmp dword ptr [ebp - 0x5c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786dc1: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 786dc4: jg 0x786dca */
  if ((!zf && sf == of)) goto L_786dca;
L_786dc6: /* 786dc6: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786dc8: jle 0x786dd9 */
  if ((zf || sf != of)) goto L_786dd9;
L_786dca: /* 786dca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 786dcb: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 786dce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 786dcf: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 786dd2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786dd3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 786dd4: call 0x786400 */
  esp -= 4; W32(esp, 0x786dd9u); SPILL(); f_786400(); if (g_unwind) return; RELOAD();
L_786dd9: /* 786dd9: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 786ddc: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 786ddf: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 786de2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 786de5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 786de6: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 786de9: mov ecx, eax */
  ecx = eax;
/* 786deb: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 786dee: jmp 0x786b20 */
  goto L_786b20;
L_786e29: /* 786e29: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 786e2a: jmp 0x786ad6 */
  goto L_786ad6;
L_786e2f: /* 786e2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 786e30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 786e31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786e33: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 786e3a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786e3b: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 786e3f: call 0x785f60 */
  esp -= 4; W32(esp, 0x786e44u); SPILL(); f_785f60(); if (g_unwind) return; RELOAD();
/* 786e44: mov edx, dword ptr [0xcfa538] */
  edx = R32((uint32_t)(0xcfa538u));
/* 786e4a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 786e51: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 786e52: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 786e55: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 786e59: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x786e5fu); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 786e5f: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 786e62: fsub dword ptr [ebx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0xcu)));
/* 786e65: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 786e68: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 786e6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 786e6c: fsub dword ptr [ebx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0xcu)));
/* 786e6f: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 786e72: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 786e74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786e75: fsub dword ptr [ebx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0xcu)));
/* 786e78: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 786e7e: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 786e81: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 786e84: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 786e87: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 786e8a: fadd dword ptr [ebx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8u)));
/* 786e8d: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 786e90: fadd dword ptr [ebx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x4u)));
/* 786e93: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 786e96: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 786e98: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 786e9b: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 786e9e: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 786ea1: call dword ptr [0xcfa530] */
  esp -= 4; W32(esp, 0x786ea7u); SPILL(); f_4e310c(); if (g_unwind) return; /* Core!??0FBox@@QAE@ABVFVector@@0@Z */ RELOAD();
/* 786ea7: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 786ead: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 786eaf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 786eb1: lea eax, [ebp - 0xa8] */
  eax = (uint32_t)(ebp + 0xffffff58u);
/* 786eb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 786eb8: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 786ebd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786ebf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 786ec0: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x786ec3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786ec3: mov ebx, eax */
  ebx = eax;
L_786ec5: /* 786ec5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 786ec7: mov dword ptr [ebp - 0x70], ebx */
  W32((uint32_t)(ebp + 0xffffff90u), ebx);
/* 786eca: je 0x787887 */
  if (zf) goto L_787887;
L_786ed0: /* 786ed0: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
/* 786ed3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 786ed5: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 786ed8: je 0x787880 */
  if (zf) goto L_787880;
L_786ede: /* 786ede: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 786ee1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 786ee3: je 0x787880 */
  if (zf) goto L_787880;
L_786ee9: /* 786ee9: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* 786eef: test ch, 4 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 786ef2: je 0x787880 */
  if (zf) goto L_787880;
L_786ef8: /* 786ef8: mov ecx, dword ptr [eax + 0x12c] */
  ecx = R32((uint32_t)(eax + 0x12cu));
/* 786efe: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 786f00: jne 0x787880 */
  if (!zf) goto L_787880;
L_786f06: /* 786f06: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 786f0c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786f0e: add ecx, 0x1523c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1523cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 786f14: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 786f16: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x786f1cu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 786f1c: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 786f22: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 786f25: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 786f28: add ecx, 0x1523c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1523cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 786f2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786f2f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 786f30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 786f31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 786f32: lea ecx, [ebp - 0x1d4] */
  ecx = (uint32_t)(ebp + 0xfffffe2cu);
/* 786f38: call 0x6c4ccd */
  esp -= 4; W32(esp, 0x786f3du); SPILL(); f_6c4ccd(); if (g_unwind) return; RELOAD();
/* 786f3d: lea ecx, [ebp - 0x1d4] */
  ecx = (uint32_t)(ebp + 0xfffffe2cu);
/* 786f43: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786f44: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 786f47: add ecx, 0x108 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 786f4d: call 0x6c1be0 */
  esp -= 4; W32(esp, 0x786f52u); SPILL(); f_6c1be0(); if (g_unwind) return; RELOAD();
/* 786f52: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 786f54: lea eax, [ebp - 0x16c] */
  eax = (uint32_t)(ebp + 0xfffffe94u);
/* 786f5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 786f5b: mov ecx, edi */
  ecx = edi;
/* 786f5d: call dword ptr [edx + 0xb8] */
  { uint32_t t = R32((uint32_t)(edx + 0xb8u)); esp -= 4; W32(esp, 0x786f63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786f63: lea ecx, [ebp - 0x16c] */
  ecx = (uint32_t)(ebp + 0xfffffe94u);
/* 786f69: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 786f6d: call dword ptr [0xcfa594] */
  esp -= 4; W32(esp, 0x786f73u); SPILL(); f_4e1af0(); if (g_unwind) return; /* Core!?Determinant@FMatrix@@QBEMXZ */ RELOAD();
/* 786f73: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 786f76: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 786f79: lea edx, [ebp - 0x22c] */
  edx = (uint32_t)(ebp + 0xfffffdd4u);
/* 786f7f: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 786f82: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 786f83: lea ecx, [ebp - 0x16c] */
  ecx = (uint32_t)(ebp + 0xfffffe94u);
/* 786f89: call dword ptr [0xcfa590] */
  esp -= 4; W32(esp, 0x786f8fu); SPILL(); f_4e1e9c(); if (g_unwind) return; /* Core!?TransposeAdjoint@FMatrix@@QBE?AV1@XZ */ RELOAD();
/* 786f8f: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* 786f92: add edx, 0x64 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 786f95: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 786f99: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 786f9c: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 786fa3: jmp 0x786fb0 */
  goto L_786fb0;
L_786fb0: /* 786fb0: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 786fb5: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 786fb8: cmp ecx, dword ptr [eax + 0x15240] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x15240u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786fbe: jge 0x787860 */
  if ((sf == of)) goto L_787860;
L_786fc4: /* 786fc4: mov ecx, dword ptr [esi + 0x6000] */
  ecx = R32((uint32_t)(esi + 0x6000u));
/* 786fca: cmp ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786fd0: jge 0x78782d */
  if ((sf == of)) goto L_78782d;
L_786fd6: /* 786fd6: mov eax, dword ptr [esi + 0xf004] */
  eax = R32((uint32_t)(esi + 0xf004u));
/* 786fdc: lea ebx, [eax + 2] */
  ebx = (uint32_t)(eax + 0x2u);
/* 786fdf: cmp ebx, 0xc00 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xc00u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786fe5: jge 0x78782d */
  if ((sf == of)) goto L_78782d;
L_786feb: /* 786feb: cmp dword ptr [esi + 0x15008], 0x400 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x15008u))); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786ff5: jge 0x78782d */
  if ((sf == of)) goto L_78782d;
L_786ffb: /* 786ffb: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 786ffe: lea ebx, [esi + ecx*8] */
  ebx = (uint32_t)(esi + ecx*8);
/* 787001: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 787004: lea ecx, [esi + eax*4 + 0x6004] */
  ecx = (uint32_t)(esi + eax*4 + 0x6004u);
/* 78700b: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 78700d: mov eax, dword ptr [esi + 0xf004] */
  eax = R32((uint32_t)(esi + 0xf004u));
/* 787013: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 787016: lea ecx, [esi + eax*4 + 0x6010] */
  ecx = (uint32_t)(esi + eax*4 + 0x6010u);
/* 78701d: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 787020: mov eax, dword ptr [esi + 0xf004] */
  eax = R32((uint32_t)(esi + 0xf004u));
/* 787026: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 787029: lea ecx, [esi + eax*4 + 0x601c] */
  ecx = (uint32_t)(esi + eax*4 + 0x601cu);
/* 787030: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 787033: mov eax, dword ptr [esi + 0x15008] */
  eax = R32((uint32_t)(esi + 0x15008u));
/* 787039: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 78703c: lea ecx, [esi + eax*4 + 0xf008] */
  ecx = (uint32_t)(esi + eax*4 + 0xf008u);
/* 787043: mov dword ptr [ebx + 0xc], ecx */
  W32((uint32_t)(ebx + 0xcu), ecx);
/* 787046: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78704b: mov ecx, dword ptr [eax + 0x1523c] */
  ecx = R32((uint32_t)(eax + 0x1523cu));
/* 787051: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 787054: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 787057: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 78705a: mov ecx, dword ptr [ecx + 0x114] */
  ecx = R32((uint32_t)(ecx + 0x114u));
/* 787060: movzx esi, word ptr [ecx + eax*8] */
  esi = (uint32_t)(R16((uint32_t)(ecx + eax*8)));
/* 787064: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 787066: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* 787069: movzx eax, word ptr [ecx + 4] */
  eax = (uint32_t)(R16((uint32_t)(ecx + 0x4u)));
/* 78706d: lea esi, [esi + esi*2] */
  esi = (uint32_t)(esi + esi*2);
/* 787070: lea esi, [edx + esi*8] */
  esi = (uint32_t)(edx + esi*8);
/* 787073: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 787076: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 787079: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 78707c: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 78707f: movzx ecx, word ptr [ecx + 2] */
  ecx = (uint32_t)(R16((uint32_t)(ecx + 0x2u)));
/* 787083: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 787086: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 787089: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 78708c: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* 78708f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787092: lea edx, [ebp - 0x23c] */
  edx = (uint32_t)(ebp + 0xfffffdc4u);
/* 787098: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 78709b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78709c: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 78709f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7870a1: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7870a3: fstp dword ptr [ebp - 0x1e0] */
  WF32((uint32_t)(ebp + 0xfffffe20u), ST0); FPOP();
/* 7870a9: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 7870ac: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 7870af: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7870b2: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7870b5: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7870b8: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7870bb: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 7870bd: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 7870c0: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7870c2: fst dword ptr [ebp - 0x1ec] */
  WF32((uint32_t)(ebp + 0xfffffe14u), ST0);
/* 7870c8: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7870cb: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7870ce: fmul dword ptr [ebp - 0x1e0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffe20u)));
/* 7870d4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7870d6: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7870d9: fmul dword ptr [ebp - 0x1e0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffe20u)));
/* 7870df: fld dword ptr [ebp - 0x1ec] */
  { double v = F32((uint32_t)(ebp + 0xfffffe14u)); FPUSH(v); }
/* 7870e5: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 7870e8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7870ea: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7870ed: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 7870f0: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7870f3: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7870f6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7870f8: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 7870fb: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 7870fe: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 787101: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x787107u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 787107: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 787109: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* 78710c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 78710f: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 787112: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 787115: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 787118: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 78711f: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 787122: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 787125: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 78712b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78712d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 787130: movzx eax, word ptr [ecx] */
  eax = (uint32_t)(R16((uint32_t)(ecx)));
/* 787133: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 787136: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 787139: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78713b: lea eax, [ecx + edx*8] */
  eax = (uint32_t)(ecx + edx*8);
/* 78713e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 787140: lea ecx, [ebp - 0x16c] */
  ecx = (uint32_t)(ebp + 0xfffffe94u);
/* 787146: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 787149: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 78714c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 78714f: jne 0x787439 */
  if (!zf) goto L_787439;
L_787155: /* 787155: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 78715b: lea eax, [ebp - 0xdc] */
  eax = (uint32_t)(ebp + 0xffffff24u);
/* 787161: mov dword ptr [ebp - 0xdc], edx */
  W32((uint32_t)(ebp + 0xffffff24u), edx);
/* 787167: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 78716d: mov dword ptr [ebp - 0xd0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff30u), 0x3f800000u);
/* 787177: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 78717a: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 78717d: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 787180: lea edi, [ebp - 0x19c] */
  edi = (uint32_t)(ebp + 0xfffffe64u);
/* 787186: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787188: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 78718a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78718c: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 78718f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787191: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 787194: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787196: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 787199: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 78719c: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 78719f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7871a2: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7871a5: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7871a8: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7871ab: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7871ae: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7871b1: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7871b3: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7871b5: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7871b7: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7871b9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7871bb: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7871be: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7871c1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7871c4: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7871c7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7871ca: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7871cd: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7871d0: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7871d3: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7871d5: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7871d7: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7871d9: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7871db: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7871dd: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7871e0: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7871e3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7871e6: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7871e9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7871ec: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7871ef: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7871f2: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7871f5: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7871f7: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7871f9: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7871fb: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7871fd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7871ff: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 787201: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 787203: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 787205: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 787208: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 78720b: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 78720e: mov eax, dword ptr [ebp - 0x19c] */
  eax = R32((uint32_t)(ebp + 0xfffffe64u));
/* 787214: mov ecx, dword ptr [ebp - 0x198] */
  ecx = R32((uint32_t)(ebp + 0xfffffe68u));
/* 78721a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78721d: mov edx, esp */
  edx = esp;
/* 78721f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 787221: mov eax, dword ptr [ebp - 0x194] */
  eax = R32((uint32_t)(ebp + 0xfffffe6cu));
/* 787227: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 78722a: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 78722c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78722d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 787230: call 0x6c882d */
  esp -= 4; W32(esp, 0x787235u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 787235: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 787238: movzx eax, word ptr [edx + 4] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x4u)));
/* 78723c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78723f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 787241: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 787244: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 787247: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 78724d: lea edx, [ebp - 0x16c] */
  edx = (uint32_t)(ebp + 0xfffffe94u);
/* 787253: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 787256: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 787259: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 78725c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 78725e: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 787264: mov dword ptr [ebp - 0xbc], eax */
  W32((uint32_t)(ebp + 0xffffff44u), eax);
/* 78726a: mov dword ptr [ebp - 0xb0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x3f800000u);
/* 787274: fstp dword ptr [ebp - 0xb4] */
  WF32((uint32_t)(ebp + 0xffffff4cu), ST0); FPOP();
/* 78727a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 78727d: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 787280: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 787283: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 787286: lea edi, [ebp - 0x11c] */
  edi = (uint32_t)(ebp + 0xfffffee4u);
/* 78728c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78728e: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 787290: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787292: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 787295: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787297: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 78729a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78729c: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 78729f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7872a2: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 7872a5: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7872a8: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7872ab: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7872ae: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7872b1: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7872b4: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7872b7: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7872b9: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7872bb: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7872bd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7872bf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7872c1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7872c4: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7872c7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7872ca: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7872cd: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7872d0: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7872d3: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7872d6: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7872d9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7872db: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7872dd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7872df: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7872e1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7872e3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7872e6: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7872e9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7872ec: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7872ef: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7872f2: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7872f5: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7872f8: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7872fb: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7872fd: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7872ff: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 787301: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 787303: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 787305: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 787307: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 787309: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 78730b: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 78730e: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 787311: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 787314: mov ecx, dword ptr [ebp - 0x11c] */
  ecx = R32((uint32_t)(ebp + 0xfffffee4u));
/* 78731a: mov edx, dword ptr [ebp - 0x118] */
  edx = R32((uint32_t)(ebp + 0xfffffee8u));
/* 787320: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 787323: mov eax, esp */
  eax = esp;
/* 787325: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 787327: mov ecx, dword ptr [ebp - 0x114] */
  ecx = R32((uint32_t)(ebp + 0xfffffeecu));
/* 78732d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 787330: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 787333: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 787334: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 787337: call 0x6c882d */
  esp -= 4; W32(esp, 0x78733cu); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 78733c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 78733f: movzx eax, word ptr [eax + 2] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0x2u)));
/* 787343: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 787346: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 787349: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 78734b: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 78734e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 787350: lea edx, [ebp - 0xfc] */
  edx = (uint32_t)(ebp + 0xffffff04u);
/* 787356: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 787359: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78735c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 78735f: lea eax, [ebp - 0x16c] */
  eax = (uint32_t)(ebp + 0xfffffe94u);
/* 787365: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 78736b: mov dword ptr [ebp - 0xfc], ecx */
  W32((uint32_t)(ebp + 0xffffff04u), ecx);
/* 787371: mov dword ptr [ebp - 0xf0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x3f800000u);
/* 78737b: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 787381: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 787384: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 787387: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 78738a: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78738d: lea edi, [ebp - 0x1ac] */
  edi = (uint32_t)(ebp + 0xfffffe54u);
/* 787393: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787395: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 787397: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787399: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 78739c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78739e: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 7873a1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7873a3: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 7873a6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7873a9: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 7873ac: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7873af: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7873b2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7873b5: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7873b8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7873bb: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7873be: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7873c0: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7873c2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7873c4: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7873c6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7873c8: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7873cb: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7873ce: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7873d1: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7873d4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7873d7: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7873da: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7873dd: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7873e0: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7873e2: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7873e4: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7873e6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7873e8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7873ea: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7873ed: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7873f0: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7873f3: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7873f6: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7873f9: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7873fc: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7873ff: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 787402: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 787404: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 787406: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 787408: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 78740a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78740c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 78740e: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 787410: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 787412: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 787415: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 787418: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 78741b: mov edx, dword ptr [ebp - 0x1ac] */
  edx = R32((uint32_t)(ebp + 0xfffffe54u));
/* 787421: mov eax, dword ptr [ebp - 0x1a8] */
  eax = R32((uint32_t)(ebp + 0xfffffe58u));
/* 787427: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78742a: mov ecx, esp */
  ecx = esp;
/* 78742c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 78742e: mov edx, dword ptr [ebp - 0x1a4] */
  edx = R32((uint32_t)(ebp + 0xfffffe5cu));
/* 787434: jmp 0x787718 */
  goto L_787718;
L_787439: /* 787439: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 78743f: lea eax, [ebp - 0xcc] */
  eax = (uint32_t)(ebp + 0xffffff34u);
/* 787445: mov dword ptr [ebp - 0xcc], edx */
  W32((uint32_t)(ebp + 0xffffff34u), edx);
/* 78744b: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 787451: mov dword ptr [ebp - 0xc0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x3f800000u);
/* 78745b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 78745e: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 787461: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 787464: lea edi, [ebp - 0x18c] */
  edi = (uint32_t)(ebp + 0xfffffe74u);
/* 78746a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78746c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 78746e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787470: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 787473: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787475: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 787478: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78747a: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 78747d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787480: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 787483: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787486: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 787489: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 78748c: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 78748f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787492: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 787495: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 787497: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 787499: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 78749b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 78749d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78749f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7874a2: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7874a5: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7874a8: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7874ab: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7874ae: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7874b1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7874b4: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7874b7: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7874b9: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7874bb: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7874bd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7874bf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7874c1: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7874c4: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7874c7: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7874ca: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7874cd: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7874d0: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7874d3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7874d6: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7874d9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7874db: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7874dd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7874df: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7874e1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7874e3: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7874e5: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7874e7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7874e9: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7874ec: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7874ef: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7874f2: mov eax, dword ptr [ebp - 0x18c] */
  eax = R32((uint32_t)(ebp + 0xfffffe74u));
/* 7874f8: mov ecx, dword ptr [ebp - 0x188] */
  ecx = R32((uint32_t)(ebp + 0xfffffe78u));
/* 7874fe: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 787501: mov edx, esp */
  edx = esp;
/* 787503: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 787505: mov eax, dword ptr [ebp - 0x184] */
  eax = R32((uint32_t)(ebp + 0xfffffe7cu));
/* 78750b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 78750e: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 787510: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787511: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 787514: call 0x6c882d */
  esp -= 4; W32(esp, 0x787519u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 787519: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 78751c: movzx eax, word ptr [edx + 2] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x2u)));
/* 787520: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 787523: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 787525: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 787528: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 78752b: lea ecx, [ebp - 0xec] */
  ecx = (uint32_t)(ebp + 0xffffff14u);
/* 787531: lea edx, [ebp - 0x16c] */
  edx = (uint32_t)(ebp + 0xfffffe94u);
/* 787537: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 78753a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78753d: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 787540: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 787542: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 787548: mov dword ptr [ebp - 0xec], eax */
  W32((uint32_t)(ebp + 0xffffff14u), eax);
/* 78754e: mov dword ptr [ebp - 0xe0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff20u), 0x3f800000u);
/* 787558: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 78755e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 787561: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 787564: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 787567: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78756a: lea edi, [ebp - 0x12c] */
  edi = (uint32_t)(ebp + 0xfffffed4u);
/* 787570: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787572: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 787574: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787576: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 787579: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78757b: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 78757e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787580: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 787583: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787586: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 787589: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 78758c: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 78758f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787592: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 787595: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787598: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 78759b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 78759d: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 78759f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7875a1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7875a3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7875a5: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7875a8: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7875ab: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7875ae: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7875b1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7875b4: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7875b7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7875ba: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7875bd: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7875bf: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7875c1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7875c3: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7875c5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7875c7: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7875ca: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7875cd: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7875d0: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7875d3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7875d6: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7875d9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7875dc: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7875df: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7875e1: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7875e3: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7875e5: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7875e7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7875e9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7875eb: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7875ed: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7875ef: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7875f2: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7875f5: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7875f8: mov ecx, dword ptr [ebp - 0x12c] */
  ecx = R32((uint32_t)(ebp + 0xfffffed4u));
/* 7875fe: mov edx, dword ptr [ebp - 0x128] */
  edx = R32((uint32_t)(ebp + 0xfffffed8u));
/* 787604: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 787607: mov eax, esp */
  eax = esp;
/* 787609: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78760b: mov ecx, dword ptr [ebp - 0x124] */
  ecx = R32((uint32_t)(ebp + 0xfffffedcu));
/* 787611: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 787614: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 787617: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 787618: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 78761b: call 0x6c882d */
  esp -= 4; W32(esp, 0x787620u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 787620: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 787623: movzx eax, word ptr [eax + 4] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0x4u)));
/* 787627: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78762a: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 78762d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 78762f: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 787632: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 787634: lea edx, [ebp - 0x10c] */
  edx = (uint32_t)(ebp + 0xfffffef4u);
/* 78763a: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 78763d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 787640: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 787643: lea eax, [ebp - 0x16c] */
  eax = (uint32_t)(ebp + 0xfffffe94u);
/* 787649: fstp dword ptr [ebp - 0x108] */
  WF32((uint32_t)(ebp + 0xfffffef8u), ST0); FPOP();
/* 78764f: mov dword ptr [ebp - 0x10c], ecx */
  W32((uint32_t)(ebp + 0xfffffef4u), ecx);
/* 787655: mov dword ptr [ebp - 0x100], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff00u), 0x3f800000u);
/* 78765f: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 787665: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 787668: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 78766b: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 78766e: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 787671: lea edi, [ebp - 0x17c] */
  edi = (uint32_t)(ebp + 0xfffffe84u);
/* 787677: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787679: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 78767b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78767d: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 787680: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787682: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 787685: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787687: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 78768a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 78768d: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 787690: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787693: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 787696: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787699: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 78769c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 78769f: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7876a2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7876a4: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7876a6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7876a8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7876aa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7876ac: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7876af: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7876b2: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7876b5: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7876b8: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7876bb: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7876be: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7876c1: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7876c4: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7876c6: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7876c8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7876ca: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7876cc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7876ce: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7876d1: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7876d4: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7876d7: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7876da: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7876dd: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7876e0: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7876e3: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7876e6: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7876e8: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7876ea: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7876ec: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7876ee: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7876f0: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7876f2: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7876f4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7876f6: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7876f9: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7876fc: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7876ff: mov edx, dword ptr [ebp - 0x17c] */
  edx = R32((uint32_t)(ebp + 0xfffffe84u));
/* 787705: mov eax, dword ptr [ebp - 0x178] */
  eax = R32((uint32_t)(ebp + 0xfffffe88u));
/* 78770b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78770e: mov ecx, esp */
  ecx = esp;
/* 787710: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 787712: mov edx, dword ptr [ebp - 0x174] */
  edx = R32((uint32_t)(ebp + 0xfffffe8cu));
L_787718: /* 787718: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 78771b: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 78771e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78771f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 787722: call 0x6c882d */
  esp -= 4; W32(esp, 0x787727u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 787727: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 78772a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78772d: lea ecx, [ebp - 0x22c] */
  ecx = (uint32_t)(ebp + 0xfffffdd4u);
/* 787733: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787734: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 787735: lea eax, [ebp - 0x16c] */
  eax = (uint32_t)(ebp + 0xfffffe94u);
/* 78773b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78773c: lea ecx, [ebp - 0x24c] */
  ecx = (uint32_t)(ebp + 0xfffffdb4u);
/* 787742: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787743: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 787746: call dword ptr [0xcfa58c] */
  esp -= 4; W32(esp, 0x78774cu); SPILL(); f_4e1a55(); if (g_unwind) return; /* Core!?TransformByUsingAdjointT@FPlane@@QBE?AV1@ABVFMatrix@@M0@Z */ RELOAD();
/* 78774c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78774e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 787751: mov edx, esp */
  edx = esp;
/* 787753: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 787755: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 787758: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 78775b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 78775e: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 787761: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787762: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 787765: call 0x6c1965 */
  esp -= 4; W32(esp, 0x78776au); SPILL(); f_6c1965(); if (g_unwind) return; RELOAD();
/* 78776a: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 78776d: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 787770: mov dword ptr [ebx + 0x14], 1 */
  W32((uint32_t)(ebx + 0x14u), 0x1u);
/* 787777: mov eax, dword ptr [esi + 0x6000] */
  eax = R32((uint32_t)(esi + 0x6000u));
/* 78777d: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 787780: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 787783: lea edi, [esi + edx*4 + 0x12008] */
  edi = (uint32_t)(esi + edx*4 + 0x12008u);
/* 78778a: mov dword ptr [edi], 0x3f800000 */
  W32((uint32_t)(edi), 0x3f800000u);
/* 787790: mov dword ptr [edi + 4], 0x3f800000 */
  W32((uint32_t)(edi + 0x4u), 0x3f800000u);
/* 787797: movzx eax, word ptr [eax + 6] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0x6u)));
/* 78779b: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 78779e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7877a1: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7877a4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7877a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7877a7: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7877aa: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x7877b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7877b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7877b2: jne 0x7877e1 */
  if (!zf) goto L_7877e1;
L_7877b4: /* 7877b4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7877b7: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7877ba: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* 7877c0: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7877c3: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 7877c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7877c8: jne 0x7877e1 */
  if (!zf) goto L_7877e1;
L_7877ca: /* 7877ca: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 7877cf: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x7877d5u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 7877d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7877d6: call 0x6c449e */
  esp -= 4; W32(esp, 0x7877dbu); SPILL(); f_6c449e(); if (g_unwind) return; RELOAD();
/* 7877db: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7877de: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7877e1: /* 7877e1: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 7877e4: mov dword ptr [ebx + 0x10], edi */
  W32((uint32_t)(ebx + 0x10u), edi);
/* 7877e7: mov edx, dword ptr [esi + 0xf004] */
  edx = R32((uint32_t)(esi + 0xf004u));
/* 7877ed: mov ecx, dword ptr [esi + 0x15008] */
  ecx = R32((uint32_t)(esi + 0x15008u));
/* 7877f3: mov edi, dword ptr [esi + 0x6000] */
  edi = R32((uint32_t)(esi + 0x6000u));
/* 7877f9: mov ebx, dword ptr [ebp - 0x70] */
  ebx = R32((uint32_t)(ebp + 0xffffff90u));
/* 7877fc: mov eax, 3 */
  eax = 0x3u;
/* 787801: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 787803: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 787805: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 787808: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 787809: mov dword ptr [esi + 0x6000], edi */
  W32((uint32_t)(esi + 0x6000u), edi);
/* 78780f: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 787812: mov dword ptr [esi + 0xf004], edx */
  W32((uint32_t)(esi + 0xf004u), edx);
/* 787818: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78781b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 78781c: mov dword ptr [esi + 0x15008], ecx */
  W32((uint32_t)(esi + 0x15008u), ecx);
/* 787822: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 787825: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 787828: jmp 0x786fb0 */
  goto L_786fb0;
L_78782d: /* 78782d: lea ecx, [ebp - 0x22c] */
  ecx = (uint32_t)(ebp + 0xfffffdd4u);
/* 787833: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 787837: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x78783du); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 78783d: lea ecx, [ebp - 0x16c] */
  ecx = (uint32_t)(ebp + 0xfffffe94u);
/* 787843: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 787847: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x78784du); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_78784d: /* 78784d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 787850: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 787851: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 787852: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 787859: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78785a: mov esp, ebp */
  esp = ebp;
/* 78785c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78785d: ret 0xc */
  esp += 16; SPILL(); return;
L_787860: /* 787860: lea ecx, [ebp - 0x22c] */
  ecx = (uint32_t)(ebp + 0xfffffdd4u);
/* 787866: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 78786a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x787870u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 787870: lea ecx, [ebp - 0x16c] */
  ecx = (uint32_t)(ebp + 0xfffffe94u);
/* 787876: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 78787a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x787880u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_787880: /* 787880: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 787882: jmp 0x786ec5 */
  goto L_786ec5;
L_787887: /* 787887: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 78788a: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x787890u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 787890: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 787895: mov ecx, dword ptr [eax + 0x15220] */
  ecx = R32((uint32_t)(eax + 0x15220u));
/* 78789b: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78789e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7878a5: je 0x78784d */
  if (zf) goto L_78784d;
L_7878a7: /* 7878a7: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
/* 7878ae: mov edi, edi */
  edi = edi;
L_7878b0: /* 7878b0: mov eax, dword ptr [esi + 0x6000] */
  eax = R32((uint32_t)(esi + 0x6000u));
/* 7878b6: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7878b9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7878bb: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7878be: jge 0x78784d */
  if ((sf == of)) goto L_78784d;
L_7878c0: /* 7878c0: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7878c3: mov eax, ecx */
  eax = ecx;
/* 7878c5: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7878c8: mov eax, dword ptr [esi + ecx*8 + 4] */
  eax = R32((uint32_t)(esi + ecx*8 + 0x4u));
/* 7878cc: fidiv dword ptr [ebp + 0xc] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(ebp + 0xcu)));
/* 7878cf: mov edx, dword ptr [esi + ecx*8 + 8] */
  edx = R32((uint32_t)(esi + ecx*8 + 0x8u));
/* 7878d3: lea edi, [esi + ecx*8] */
  edi = (uint32_t)(esi + ecx*8);
/* 7878d6: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7878d8: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7878db: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 7878dd: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7878df: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7878e2: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7878e5: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7878e8: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7878eb: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 7878ee: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7878f1: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7878f4: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7878f7: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 7878f9: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7878fc: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7878ff: fadd dword ptr [edx + 4] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x4u)));
/* 787902: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 787905: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 787908: fadd dword ptr [edx + 8] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x8u)));
/* 78790b: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 78790e: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 787911: fmul dword ptr [0xa09998] */
  ST0 = ST0 * (F32((uint32_t)(0xa09998u)));
/* 787917: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 78791a: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 78791d: fmul dword ptr [0xa09998] */
  ST0 = ST0 * (F32((uint32_t)(0xa09998u)));
/* 787923: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 787926: fmul dword ptr [0xa09998] */
  ST0 = ST0 * (F32((uint32_t)(0xa09998u)));
/* 78792c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 78792f: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 787932: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 787934: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 787937: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 78793a: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 78793d: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 787940: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 787943: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 787946: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 787949: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 78794c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 787952: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 787955: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 787958: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 78795b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78795c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78795e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78795f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 787960: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787961: call 0x6c8607 */
  esp -= 4; W32(esp, 0x787966u); SPILL(); f_6c8607(); if (g_unwind) return; RELOAD();
/* 787966: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 787969: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 78796c: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 78796f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 787970: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 787972: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 787973: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787974: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 787975: call 0x6c8607 */
  esp -= 4; W32(esp, 0x78797au); SPILL(); f_6c8607(); if (g_unwind) return; RELOAD();
/* 78797a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 78797d: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 78797f: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 787982: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 787983: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 787985: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 787986: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787987: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 787988: call 0x6c8607 */
  esp -= 4; W32(esp, 0x78798du); SPILL(); f_6c8607(); if (g_unwind) return; RELOAD();
/* 78798d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 787990: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 787991: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 787993: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 787994: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 787997: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787998: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 78799b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78799c: call 0x6c8607 */
  esp -= 4; W32(esp, 0x7879a1u); SPILL(); f_6c8607(); if (g_unwind) return; RELOAD();
/* 7879a1: inc dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 7879a4: jmp 0x7878b0 */
  goto L_7878b0;
}

void f_786df3(void) {
  LOAD_REGS();
L_786df3: /* 786df3: mov edx, dword ptr [ebp - 0x70] */
  edx = R32((uint32_t)(ebp + 0xffffff90u));
/* 786df6: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 786dfb: lea eax, [ebp - 0x84] */
  eax = (uint32_t)(ebp + 0xffffff7cu);
/* 786e01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 786e02: mov dword ptr [ebp - 0x84], edx */
  W32((uint32_t)(ebp + 0xffffff7cu), edx);
/* 786e08: call 0x99caf8 */
  esp -= 4; W32(esp, 0x786e0du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_786e0d(); return;
}

void f_786e0d(void) {
  LOAD_REGS();
  goto L_786e0d;
L_786ad6: /* 786ad6: cmp edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786ad9: mov ecx, dword ptr [edi + 0x8c] */
  ecx = R32((uint32_t)(edi + 0x8cu));
/* 786adf: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 786ae2: jge 0x786e2f */
  if ((sf == of)) goto L_786e2f;
L_786ae8: /* 786ae8: lea eax, [edx + edx*2] */
  eax = (uint32_t)(edx + edx*2);
/* 786aeb: mov eax, dword ptr [ecx + eax*8 + 0x11c] */
  eax = R32((uint32_t)(ecx + eax*8 + 0x11cu));
/* 786af2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 786af4: jne 0x786afb */
  if (!zf) goto L_786afb;
L_786af6: /* 786af6: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 786af9: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
L_786afb: /* 786afb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 786afd: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 786b00: je 0x786e29 */
  if (zf) goto L_786e29;
L_786b06: /* 786b06: test byte ptr [eax + 0x358], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x358u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 786b0d: je 0x786e29 */
  if (zf) goto L_786e29;
L_786b13: /* 786b13: xor ecx, ecx */
  ecx = 0;
/* 786b15: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 786b18: jmp 0x786b20 */
  goto L_786b20;
L_786b20: /* 786b20: cmp ecx, dword ptr [eax + 0x360] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x360u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786b26: jge 0x786e29 */
  if ((sf == of)) goto L_786e29;
L_786b2c: /* 786b2c: mov edx, dword ptr [eax + 0x35c] */
  edx = R32((uint32_t)(eax + 0x35cu));
/* 786b32: mov edi, dword ptr [edx + ecx*4] */
  edi = R32((uint32_t)(edx + ecx*4));
/* 786b35: lea eax, [edi + 0x12dc] */
  eax = (uint32_t)(edi + 0x12dcu);
/* 786b3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 786b3c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786b3f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786b40: mov ecx, ebx */
  ecx = ebx;
/* 786b42: call dword ptr [0xcfa364] */
  esp -= 4; W32(esp, 0x786b48u); SPILL(); f_4e1af5(); if (g_unwind) return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 786b48: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 786b4b: fdiv dword ptr [edi + 0x344] */
  ST0 = ST0 / (F32((uint32_t)(edi + 0x344u)));
/* 786b51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786b53: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786b56: fabs  */
  ST0 = fabs(ST0);
/* 786b58: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 786b5b: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 786b5e: fdiv dword ptr [edi + 0x348] */
  ST0 = ST0 / (F32((uint32_t)(edi + 0x348u)));
/* 786b64: fabs  */
  ST0 = fabs(ST0);
/* 786b66: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 786b69: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786b6fu); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786b6f: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786b71: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 786b74: mov ebx, dword ptr [0xcfa3dc] */
  ebx = R32((uint32_t)(0xcfa3dcu));
/* 786b7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786b7b: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786b7e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786b80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786b80: mov ecx, dword ptr [edi + 0x128c] */
  ecx = R32((uint32_t)(edi + 0x128cu));
/* 786b86: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786b89: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 786b8a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786b8c: jge 0x786ba9 */
  if ((sf == of)) goto L_786ba9;
L_786b8e: /* 786b8e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786b90: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786b93: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786b99u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786b99: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786b9b: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 786b9e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786b9f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786ba2: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786ba4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786ba4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786ba7: mov ecx, eax */
  ecx = eax;
L_786ba9: /* 786ba9: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 786bab: jge 0x786bb6 */
  if ((sf == of)) goto L_786bb6;
L_786bad: /* 786bad: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 786bb4: jmp 0x786bfb */
  goto L_786bfb;
L_786bb6: /* 786bb6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786bb8: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786bbb: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786bc1u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786bc1: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786bc3: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 786bc6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786bc7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786bca: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786bccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786bcc: mov ecx, dword ptr [edi + 0x128c] */
  ecx = R32((uint32_t)(edi + 0x128cu));
/* 786bd2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786bd5: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 786bd6: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786bd8: jge 0x786bf8 */
  if ((sf == of)) goto L_786bf8;
L_786bda: /* 786bda: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786bdc: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786bdf: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786be5u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786be5: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786be7: fsub dword ptr [ebp - 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 786bea: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786beb: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786bee: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786bf0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786bf0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786bf3: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 786bf6: jmp 0x786bfb */
  goto L_786bfb;
L_786bf8: /* 786bf8: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
L_786bfb: /* 786bfb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786bfd: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786c00: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786c06u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786c06: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 786c09: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 786c0b: mov ebx, dword ptr [0xcfa598] */
  ebx = R32((uint32_t)(0xcfa598u));
/* 786c11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786c12: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786c15: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786c17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786c17: mov ecx, dword ptr [edi + 0x128c] */
  ecx = R32((uint32_t)(edi + 0x128cu));
/* 786c1d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786c20: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 786c21: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786c23: jge 0x786c40 */
  if ((sf == of)) goto L_786c40;
L_786c25: /* 786c25: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786c27: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786c2a: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786c30u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786c30: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 786c33: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 786c35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786c36: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786c39: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786c3bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786c3b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786c3e: mov ecx, eax */
  ecx = eax;
L_786c40: /* 786c40: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 786c42: jge 0x786c4d */
  if ((sf == of)) goto L_786c4d;
L_786c44: /* 786c44: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 786c4b: jmp 0x786c92 */
  goto L_786c92;
L_786c4d: /* 786c4d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786c4f: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786c52: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786c58u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786c58: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 786c5b: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 786c5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786c5e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786c61: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786c63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786c63: mov ecx, dword ptr [edi + 0x128c] */
  ecx = R32((uint32_t)(edi + 0x128cu));
/* 786c69: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786c6c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 786c6d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786c6f: jge 0x786c8f */
  if ((sf == of)) goto L_786c8f;
L_786c71: /* 786c71: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786c73: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786c76: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786c7cu); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786c7c: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 786c7f: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 786c81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786c82: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786c85: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786c87u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786c87: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786c8a: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 786c8d: jmp 0x786c92 */
  goto L_786c92;
L_786c8f: /* 786c8f: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
L_786c92: /* 786c92: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 786c94: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786c97: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786c9du); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786c9d: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786c9f: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 786ca2: mov ebx, dword ptr [0xcfa3dc] */
  ebx = R32((uint32_t)(0xcfa3dcu));
/* 786ca8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786ca9: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786cac: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786caeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786cae: mov ecx, dword ptr [edi + 0x1290] */
  ecx = R32((uint32_t)(edi + 0x1290u));
/* 786cb4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786cb7: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 786cb8: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786cba: jge 0x786cd7 */
  if ((sf == of)) goto L_786cd7;
L_786cbc: /* 786cbc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 786cbe: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786cc1: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786cc7u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786cc7: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786cc9: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 786ccc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786ccd: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786cd0: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786cd2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786cd2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786cd5: mov ecx, eax */
  ecx = eax;
L_786cd7: /* 786cd7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 786cd9: jge 0x786cdf */
  if ((sf == of)) goto L_786cdf;
L_786cdb: /* 786cdb: xor ebx, ebx */
  ebx = 0;
/* 786cdd: jmp 0x786d22 */
  goto L_786d22;
L_786cdf: /* 786cdf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 786ce1: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786ce4: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786ceau); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786cea: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786cec: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 786cef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786cf0: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786cf3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786cf5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786cf5: mov ecx, dword ptr [edi + 0x1290] */
  ecx = R32((uint32_t)(edi + 0x1290u));
/* 786cfb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786cfe: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 786cff: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786d01: jge 0x786d20 */
  if ((sf == of)) goto L_786d20;
L_786d03: /* 786d03: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 786d05: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786d08: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786d0eu); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786d0e: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 786d10: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 786d13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786d14: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786d17: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x786d19u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786d19: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786d1c: mov ebx, eax */
  ebx = eax;
/* 786d1e: jmp 0x786d22 */
  goto L_786d22;
L_786d20: /* 786d20: mov ebx, ecx */
  ebx = ecx;
L_786d22: /* 786d22: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 786d24: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786d27: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* 786d2a: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786d30u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786d30: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 786d33: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 786d35: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786d36: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786d39: call dword ptr [0xcfa598] */
  esp -= 4; W32(esp, 0x786d3fu); SPILL(); f_4e301c(); if (g_unwind) return; /* Core!?appCeil@@YAHM@Z */ RELOAD();
/* 786d3f: mov ecx, dword ptr [edi + 0x1290] */
  ecx = R32((uint32_t)(edi + 0x1290u));
/* 786d45: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786d48: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 786d49: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786d4b: jge 0x786d6c */
  if ((sf == of)) goto L_786d6c;
L_786d4d: /* 786d4d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 786d4f: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786d52: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786d58u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786d58: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 786d5b: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 786d5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786d5e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786d61: call dword ptr [0xcfa598] */
  esp -= 4; W32(esp, 0x786d67u); SPILL(); f_4e301c(); if (g_unwind) return; /* Core!?appCeil@@YAHM@Z */ RELOAD();
/* 786d67: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786d6a: mov ecx, eax */
  ecx = eax;
L_786d6c: /* 786d6c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 786d6e: jge 0x786d74 */
  if ((sf == of)) goto L_786d74;
L_786d70: /* 786d70: xor ecx, ecx */
  ecx = 0;
/* 786d72: jmp 0x786dbb */
  goto L_786dbb;
L_786d74: /* 786d74: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 786d76: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786d79: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786d7fu); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786d7f: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 786d82: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 786d84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786d85: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786d88: call dword ptr [0xcfa598] */
  esp -= 4; W32(esp, 0x786d8eu); SPILL(); f_4e301c(); if (g_unwind) return; /* Core!?appCeil@@YAHM@Z */ RELOAD();
/* 786d8e: mov ecx, dword ptr [edi + 0x1290] */
  ecx = R32((uint32_t)(edi + 0x1290u));
/* 786d94: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786d97: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 786d98: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786d9a: jge 0x786dbb */
  if ((sf == of)) goto L_786dbb;
L_786d9c: /* 786d9c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 786d9e: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 786da1: call dword ptr [0xcfa59c] */
  esp -= 4; W32(esp, 0x786da7u); SPILL(); f_4e3be3(); if (g_unwind) return; /* Core!??AFVector@@QAEAAMH@Z */ RELOAD();
/* 786da7: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 786daa: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 786dac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786dad: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 786db0: call dword ptr [0xcfa598] */
  esp -= 4; W32(esp, 0x786db6u); SPILL(); f_4e301c(); if (g_unwind) return; /* Core!?appCeil@@YAHM@Z */ RELOAD();
/* 786db6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786db9: mov ecx, eax */
  ecx = eax;
L_786dbb: /* 786dbb: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 786dbe: cmp dword ptr [ebp - 0x5c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffa4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786dc1: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 786dc4: jg 0x786dca */
  if ((!zf && sf == of)) goto L_786dca;
L_786dc6: /* 786dc6: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786dc8: jle 0x786dd9 */
  if ((zf || sf != of)) goto L_786dd9;
L_786dca: /* 786dca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 786dcb: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 786dce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 786dcf: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 786dd2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786dd3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 786dd4: call 0x786400 */
  esp -= 4; W32(esp, 0x786dd9u); SPILL(); f_786400(); if (g_unwind) return; RELOAD();
L_786dd9: /* 786dd9: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 786ddc: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 786ddf: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 786de2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 786de5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 786de6: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 786de9: mov ecx, eax */
  ecx = eax;
/* 786deb: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 786dee: jmp 0x786b20 */
  goto L_786b20;
L_786e0d: /* 786e0d: push 0xa0999c */
  { uint32_t v = 0xa0999cu; esp -= 4; W32(esp, v); }
/* 786e12: push 0xac7d20 */
  { uint32_t v = 0xac7d20u; esp -= 4; W32(esp, v); }
/* 786e17: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x786e1du); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 786e1d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 786e20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786e22: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786e24: call 0x99caf8 */
  esp -= 4; W32(esp, 0x786e29u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_786e29: /* 786e29: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 786e2a: jmp 0x786ad6 */
  goto L_786ad6;
L_786e2f: /* 786e2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 786e30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 786e31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786e33: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 786e3a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786e3b: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 786e3f: call 0x785f60 */
  esp -= 4; W32(esp, 0x786e44u); SPILL(); f_785f60(); if (g_unwind) return; RELOAD();
/* 786e44: mov edx, dword ptr [0xcfa538] */
  edx = R32((uint32_t)(0xcfa538u));
/* 786e4a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 786e51: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 786e52: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 786e55: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 786e59: call dword ptr [0xcfa534] */
  esp -= 4; W32(esp, 0x786e5fu); SPILL(); f_4e12d0(); if (g_unwind) return; /* Core!??0FMemMark@@QAE@AAVFMemStack@@@Z */ RELOAD();
/* 786e5f: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 786e62: fsub dword ptr [ebx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0xcu)));
/* 786e65: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 786e68: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 786e6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 786e6c: fsub dword ptr [ebx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0xcu)));
/* 786e6f: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 786e72: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 786e74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786e75: fsub dword ptr [ebx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0xcu)));
/* 786e78: lea ecx, [ebp - 0xa8] */
  ecx = (uint32_t)(ebp + 0xffffff58u);
/* 786e7e: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 786e81: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 786e84: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 786e87: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 786e8a: fadd dword ptr [ebx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8u)));
/* 786e8d: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 786e90: fadd dword ptr [ebx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x4u)));
/* 786e93: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 786e96: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 786e98: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 786e9b: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 786e9e: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 786ea1: call dword ptr [0xcfa530] */
  esp -= 4; W32(esp, 0x786ea7u); SPILL(); f_4e310c(); if (g_unwind) return; /* Core!??0FBox@@QAE@ABVFVector@@0@Z */ RELOAD();
/* 786ea7: mov ecx, dword ptr [edi + 0xec] */
  ecx = R32((uint32_t)(edi + 0xecu));
/* 786ead: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 786eaf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 786eb1: lea eax, [ebp - 0xa8] */
  eax = (uint32_t)(ebp + 0xffffff58u);
/* 786eb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 786eb8: mov eax, dword ptr [0xcfa538] */
  eax = R32((uint32_t)(0xcfa538u));
/* 786ebd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786ebf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 786ec0: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x786ec3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786ec3: mov ebx, eax */
  ebx = eax;
L_786ec5: /* 786ec5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 786ec7: mov dword ptr [ebp - 0x70], ebx */
  W32((uint32_t)(ebp + 0xffffff90u), ebx);
/* 786eca: je 0x787887 */
  if (zf) goto L_787887;
L_786ed0: /* 786ed0: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
/* 786ed3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 786ed5: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 786ed8: je 0x787880 */
  if (zf) goto L_787880;
L_786ede: /* 786ede: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 786ee1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 786ee3: je 0x787880 */
  if (zf) goto L_787880;
L_786ee9: /* 786ee9: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* 786eef: test ch, 4 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 786ef2: je 0x787880 */
  if (zf) goto L_787880;
L_786ef8: /* 786ef8: mov ecx, dword ptr [eax + 0x12c] */
  ecx = R32((uint32_t)(eax + 0x12cu));
/* 786efe: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 786f00: jne 0x787880 */
  if (!zf) goto L_787880;
L_786f06: /* 786f06: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 786f0c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786f0e: add ecx, 0x1523c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1523cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 786f14: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 786f16: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x786f1cu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 786f1c: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 786f22: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 786f25: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 786f28: add ecx, 0x1523c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1523cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 786f2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786f2f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 786f30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 786f31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 786f32: lea ecx, [ebp - 0x1d4] */
  ecx = (uint32_t)(ebp + 0xfffffe2cu);
/* 786f38: call 0x6c4ccd */
  esp -= 4; W32(esp, 0x786f3du); SPILL(); f_6c4ccd(); if (g_unwind) return; RELOAD();
/* 786f3d: lea ecx, [ebp - 0x1d4] */
  ecx = (uint32_t)(ebp + 0xfffffe2cu);
/* 786f43: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786f44: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 786f47: add ecx, 0x108 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 786f4d: call 0x6c1be0 */
  esp -= 4; W32(esp, 0x786f52u); SPILL(); f_6c1be0(); if (g_unwind) return; RELOAD();
/* 786f52: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 786f54: lea eax, [ebp - 0x16c] */
  eax = (uint32_t)(ebp + 0xfffffe94u);
/* 786f5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 786f5b: mov ecx, edi */
  ecx = edi;
/* 786f5d: call dword ptr [edx + 0xb8] */
  { uint32_t t = R32((uint32_t)(edx + 0xb8u)); esp -= 4; W32(esp, 0x786f63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786f63: lea ecx, [ebp - 0x16c] */
  ecx = (uint32_t)(ebp + 0xfffffe94u);
/* 786f69: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 786f6d: call dword ptr [0xcfa594] */
  esp -= 4; W32(esp, 0x786f73u); SPILL(); f_4e1af0(); if (g_unwind) return; /* Core!?Determinant@FMatrix@@QBEMXZ */ RELOAD();
/* 786f73: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 786f76: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 786f79: lea edx, [ebp - 0x22c] */
  edx = (uint32_t)(ebp + 0xfffffdd4u);
/* 786f7f: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 786f82: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 786f83: lea ecx, [ebp - 0x16c] */
  ecx = (uint32_t)(ebp + 0xfffffe94u);
/* 786f89: call dword ptr [0xcfa590] */
  esp -= 4; W32(esp, 0x786f8fu); SPILL(); f_4e1e9c(); if (g_unwind) return; /* Core!?TransposeAdjoint@FMatrix@@QBE?AV1@XZ */ RELOAD();
/* 786f8f: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* 786f92: add edx, 0x64 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 786f95: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 786f99: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 786f9c: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 786fa3: jmp 0x786fb0 */
  goto L_786fb0;
L_786fb0: /* 786fb0: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 786fb5: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 786fb8: cmp ecx, dword ptr [eax + 0x15240] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x15240u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786fbe: jge 0x787860 */
  if ((sf == of)) goto L_787860;
L_786fc4: /* 786fc4: mov ecx, dword ptr [esi + 0x6000] */
  ecx = R32((uint32_t)(esi + 0x6000u));
/* 786fca: cmp ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786fd0: jge 0x78782d */
  if ((sf == of)) goto L_78782d;
L_786fd6: /* 786fd6: mov eax, dword ptr [esi + 0xf004] */
  eax = R32((uint32_t)(esi + 0xf004u));
/* 786fdc: lea ebx, [eax + 2] */
  ebx = (uint32_t)(eax + 0x2u);
/* 786fdf: cmp ebx, 0xc00 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xc00u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786fe5: jge 0x78782d */
  if ((sf == of)) goto L_78782d;
L_786feb: /* 786feb: cmp dword ptr [esi + 0x15008], 0x400 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x15008u))); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786ff5: jge 0x78782d */
  if ((sf == of)) goto L_78782d;
L_786ffb: /* 786ffb: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 786ffe: lea ebx, [esi + ecx*8] */
  ebx = (uint32_t)(esi + ecx*8);
/* 787001: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 787004: lea ecx, [esi + eax*4 + 0x6004] */
  ecx = (uint32_t)(esi + eax*4 + 0x6004u);
/* 78700b: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 78700d: mov eax, dword ptr [esi + 0xf004] */
  eax = R32((uint32_t)(esi + 0xf004u));
/* 787013: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 787016: lea ecx, [esi + eax*4 + 0x6010] */
  ecx = (uint32_t)(esi + eax*4 + 0x6010u);
/* 78701d: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 787020: mov eax, dword ptr [esi + 0xf004] */
  eax = R32((uint32_t)(esi + 0xf004u));
/* 787026: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 787029: lea ecx, [esi + eax*4 + 0x601c] */
  ecx = (uint32_t)(esi + eax*4 + 0x601cu);
/* 787030: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 787033: mov eax, dword ptr [esi + 0x15008] */
  eax = R32((uint32_t)(esi + 0x15008u));
/* 787039: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 78703c: lea ecx, [esi + eax*4 + 0xf008] */
  ecx = (uint32_t)(esi + eax*4 + 0xf008u);
/* 787043: mov dword ptr [ebx + 0xc], ecx */
  W32((uint32_t)(ebx + 0xcu), ecx);
/* 787046: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78704b: mov ecx, dword ptr [eax + 0x1523c] */
  ecx = R32((uint32_t)(eax + 0x1523cu));
/* 787051: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 787054: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 787057: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 78705a: mov ecx, dword ptr [ecx + 0x114] */
  ecx = R32((uint32_t)(ecx + 0x114u));
/* 787060: movzx esi, word ptr [ecx + eax*8] */
  esi = (uint32_t)(R16((uint32_t)(ecx + eax*8)));
/* 787064: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 787066: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* 787069: movzx eax, word ptr [ecx + 4] */
  eax = (uint32_t)(R16((uint32_t)(ecx + 0x4u)));
/* 78706d: lea esi, [esi + esi*2] */
  esi = (uint32_t)(esi + esi*2);
/* 787070: lea esi, [edx + esi*8] */
  esi = (uint32_t)(edx + esi*8);
/* 787073: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 787076: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 787079: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 78707c: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 78707f: movzx ecx, word ptr [ecx + 2] */
  ecx = (uint32_t)(R16((uint32_t)(ecx + 0x2u)));
/* 787083: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 787086: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 787089: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 78708c: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* 78708f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787092: lea edx, [ebp - 0x23c] */
  edx = (uint32_t)(ebp + 0xfffffdc4u);
/* 787098: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 78709b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78709c: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 78709f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7870a1: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7870a3: fstp dword ptr [ebp - 0x1e0] */
  WF32((uint32_t)(ebp + 0xfffffe20u), ST0); FPOP();
/* 7870a9: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 7870ac: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 7870af: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7870b2: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7870b5: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7870b8: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7870bb: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 7870bd: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 7870c0: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7870c2: fst dword ptr [ebp - 0x1ec] */
  WF32((uint32_t)(ebp + 0xfffffe14u), ST0);
/* 7870c8: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7870cb: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7870ce: fmul dword ptr [ebp - 0x1e0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffe20u)));
/* 7870d4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7870d6: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7870d9: fmul dword ptr [ebp - 0x1e0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffe20u)));
/* 7870df: fld dword ptr [ebp - 0x1ec] */
  { double v = F32((uint32_t)(ebp + 0xfffffe14u)); FPUSH(v); }
/* 7870e5: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 7870e8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7870ea: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7870ed: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 7870f0: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7870f3: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7870f6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7870f8: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 7870fb: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 7870fe: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 787101: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x787107u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 787107: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 787109: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* 78710c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 78710f: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 787112: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 787115: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 787118: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 78711f: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 787122: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 787125: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 78712b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78712d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 787130: movzx eax, word ptr [ecx] */
  eax = (uint32_t)(R16((uint32_t)(ecx)));
/* 787133: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 787136: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 787139: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78713b: lea eax, [ecx + edx*8] */
  eax = (uint32_t)(ecx + edx*8);
/* 78713e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 787140: lea ecx, [ebp - 0x16c] */
  ecx = (uint32_t)(ebp + 0xfffffe94u);
/* 787146: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 787149: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 78714c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 78714f: jne 0x787439 */
  if (!zf) goto L_787439;
L_787155: /* 787155: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 78715b: lea eax, [ebp - 0xdc] */
  eax = (uint32_t)(ebp + 0xffffff24u);
/* 787161: mov dword ptr [ebp - 0xdc], edx */
  W32((uint32_t)(ebp + 0xffffff24u), edx);
/* 787167: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 78716d: mov dword ptr [ebp - 0xd0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff30u), 0x3f800000u);
/* 787177: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 78717a: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 78717d: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 787180: lea edi, [ebp - 0x19c] */
  edi = (uint32_t)(ebp + 0xfffffe64u);
/* 787186: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787188: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 78718a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78718c: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 78718f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787191: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 787194: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787196: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 787199: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 78719c: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 78719f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7871a2: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7871a5: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7871a8: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7871ab: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7871ae: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7871b1: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7871b3: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7871b5: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7871b7: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7871b9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7871bb: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7871be: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7871c1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7871c4: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7871c7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7871ca: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7871cd: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7871d0: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7871d3: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7871d5: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7871d7: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7871d9: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7871db: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7871dd: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7871e0: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7871e3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7871e6: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7871e9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7871ec: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7871ef: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7871f2: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7871f5: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7871f7: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7871f9: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7871fb: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7871fd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7871ff: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 787201: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 787203: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 787205: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 787208: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 78720b: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 78720e: mov eax, dword ptr [ebp - 0x19c] */
  eax = R32((uint32_t)(ebp + 0xfffffe64u));
/* 787214: mov ecx, dword ptr [ebp - 0x198] */
  ecx = R32((uint32_t)(ebp + 0xfffffe68u));
/* 78721a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78721d: mov edx, esp */
  edx = esp;
/* 78721f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 787221: mov eax, dword ptr [ebp - 0x194] */
  eax = R32((uint32_t)(ebp + 0xfffffe6cu));
/* 787227: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 78722a: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 78722c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78722d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 787230: call 0x6c882d */
  esp -= 4; W32(esp, 0x787235u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 787235: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 787238: movzx eax, word ptr [edx + 4] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x4u)));
/* 78723c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78723f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 787241: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 787244: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 787247: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 78724d: lea edx, [ebp - 0x16c] */
  edx = (uint32_t)(ebp + 0xfffffe94u);
/* 787253: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 787256: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 787259: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 78725c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 78725e: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 787264: mov dword ptr [ebp - 0xbc], eax */
  W32((uint32_t)(ebp + 0xffffff44u), eax);
/* 78726a: mov dword ptr [ebp - 0xb0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x3f800000u);
/* 787274: fstp dword ptr [ebp - 0xb4] */
  WF32((uint32_t)(ebp + 0xffffff4cu), ST0); FPOP();
/* 78727a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 78727d: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 787280: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 787283: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 787286: lea edi, [ebp - 0x11c] */
  edi = (uint32_t)(ebp + 0xfffffee4u);
/* 78728c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78728e: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 787290: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787292: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 787295: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787297: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 78729a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78729c: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 78729f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7872a2: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 7872a5: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7872a8: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7872ab: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7872ae: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7872b1: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7872b4: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7872b7: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7872b9: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7872bb: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7872bd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7872bf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7872c1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7872c4: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7872c7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7872ca: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7872cd: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7872d0: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7872d3: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7872d6: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7872d9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7872db: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7872dd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7872df: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7872e1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7872e3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7872e6: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7872e9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7872ec: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7872ef: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7872f2: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7872f5: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7872f8: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7872fb: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7872fd: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7872ff: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 787301: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 787303: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 787305: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 787307: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 787309: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 78730b: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 78730e: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 787311: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 787314: mov ecx, dword ptr [ebp - 0x11c] */
  ecx = R32((uint32_t)(ebp + 0xfffffee4u));
/* 78731a: mov edx, dword ptr [ebp - 0x118] */
  edx = R32((uint32_t)(ebp + 0xfffffee8u));
/* 787320: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 787323: mov eax, esp */
  eax = esp;
/* 787325: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 787327: mov ecx, dword ptr [ebp - 0x114] */
  ecx = R32((uint32_t)(ebp + 0xfffffeecu));
/* 78732d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 787330: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 787333: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 787334: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 787337: call 0x6c882d */
  esp -= 4; W32(esp, 0x78733cu); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 78733c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 78733f: movzx eax, word ptr [eax + 2] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0x2u)));
/* 787343: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 787346: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 787349: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 78734b: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 78734e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 787350: lea edx, [ebp - 0xfc] */
  edx = (uint32_t)(ebp + 0xffffff04u);
/* 787356: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 787359: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78735c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 78735f: lea eax, [ebp - 0x16c] */
  eax = (uint32_t)(ebp + 0xfffffe94u);
/* 787365: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 78736b: mov dword ptr [ebp - 0xfc], ecx */
  W32((uint32_t)(ebp + 0xffffff04u), ecx);
/* 787371: mov dword ptr [ebp - 0xf0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x3f800000u);
/* 78737b: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 787381: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 787384: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 787387: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 78738a: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78738d: lea edi, [ebp - 0x1ac] */
  edi = (uint32_t)(ebp + 0xfffffe54u);
/* 787393: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787395: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 787397: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787399: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 78739c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78739e: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 7873a1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7873a3: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 7873a6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7873a9: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 7873ac: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7873af: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7873b2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7873b5: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7873b8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7873bb: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7873be: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7873c0: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7873c2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7873c4: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7873c6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7873c8: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7873cb: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7873ce: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7873d1: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7873d4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7873d7: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7873da: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7873dd: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7873e0: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7873e2: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7873e4: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7873e6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7873e8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7873ea: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7873ed: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7873f0: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7873f3: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7873f6: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7873f9: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7873fc: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7873ff: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 787402: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 787404: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 787406: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 787408: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 78740a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78740c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 78740e: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 787410: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 787412: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 787415: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 787418: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 78741b: mov edx, dword ptr [ebp - 0x1ac] */
  edx = R32((uint32_t)(ebp + 0xfffffe54u));
/* 787421: mov eax, dword ptr [ebp - 0x1a8] */
  eax = R32((uint32_t)(ebp + 0xfffffe58u));
/* 787427: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78742a: mov ecx, esp */
  ecx = esp;
/* 78742c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 78742e: mov edx, dword ptr [ebp - 0x1a4] */
  edx = R32((uint32_t)(ebp + 0xfffffe5cu));
/* 787434: jmp 0x787718 */
  goto L_787718;
L_787439: /* 787439: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 78743f: lea eax, [ebp - 0xcc] */
  eax = (uint32_t)(ebp + 0xffffff34u);
/* 787445: mov dword ptr [ebp - 0xcc], edx */
  W32((uint32_t)(ebp + 0xffffff34u), edx);
/* 78744b: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 787451: mov dword ptr [ebp - 0xc0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x3f800000u);
/* 78745b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 78745e: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 787461: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 787464: lea edi, [ebp - 0x18c] */
  edi = (uint32_t)(ebp + 0xfffffe74u);
/* 78746a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78746c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 78746e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787470: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 787473: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787475: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 787478: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78747a: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 78747d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787480: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 787483: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787486: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 787489: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 78748c: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 78748f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787492: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 787495: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 787497: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 787499: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 78749b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 78749d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78749f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7874a2: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7874a5: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7874a8: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7874ab: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7874ae: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7874b1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7874b4: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7874b7: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7874b9: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7874bb: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7874bd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7874bf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7874c1: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7874c4: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7874c7: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7874ca: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7874cd: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7874d0: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7874d3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7874d6: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7874d9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7874db: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7874dd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7874df: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7874e1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7874e3: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7874e5: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7874e7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7874e9: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7874ec: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7874ef: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7874f2: mov eax, dword ptr [ebp - 0x18c] */
  eax = R32((uint32_t)(ebp + 0xfffffe74u));
/* 7874f8: mov ecx, dword ptr [ebp - 0x188] */
  ecx = R32((uint32_t)(ebp + 0xfffffe78u));
/* 7874fe: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 787501: mov edx, esp */
  edx = esp;
/* 787503: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 787505: mov eax, dword ptr [ebp - 0x184] */
  eax = R32((uint32_t)(ebp + 0xfffffe7cu));
/* 78750b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 78750e: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 787510: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787511: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 787514: call 0x6c882d */
  esp -= 4; W32(esp, 0x787519u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 787519: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 78751c: movzx eax, word ptr [edx + 2] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x2u)));
/* 787520: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 787523: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 787525: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 787528: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 78752b: lea ecx, [ebp - 0xec] */
  ecx = (uint32_t)(ebp + 0xffffff14u);
/* 787531: lea edx, [ebp - 0x16c] */
  edx = (uint32_t)(ebp + 0xfffffe94u);
/* 787537: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 78753a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78753d: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 787540: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 787542: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 787548: mov dword ptr [ebp - 0xec], eax */
  W32((uint32_t)(ebp + 0xffffff14u), eax);
/* 78754e: mov dword ptr [ebp - 0xe0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff20u), 0x3f800000u);
/* 787558: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 78755e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 787561: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 787564: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 787567: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78756a: lea edi, [ebp - 0x12c] */
  edi = (uint32_t)(ebp + 0xfffffed4u);
/* 787570: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787572: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 787574: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787576: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 787579: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78757b: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 78757e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787580: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 787583: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787586: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 787589: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 78758c: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 78758f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787592: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 787595: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787598: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 78759b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 78759d: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 78759f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7875a1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7875a3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7875a5: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7875a8: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7875ab: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7875ae: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7875b1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7875b4: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7875b7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7875ba: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7875bd: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7875bf: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7875c1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7875c3: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7875c5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7875c7: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7875ca: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7875cd: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7875d0: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7875d3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7875d6: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7875d9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7875dc: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7875df: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7875e1: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7875e3: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7875e5: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7875e7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7875e9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7875eb: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7875ed: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7875ef: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7875f2: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7875f5: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7875f8: mov ecx, dword ptr [ebp - 0x12c] */
  ecx = R32((uint32_t)(ebp + 0xfffffed4u));
/* 7875fe: mov edx, dword ptr [ebp - 0x128] */
  edx = R32((uint32_t)(ebp + 0xfffffed8u));
/* 787604: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 787607: mov eax, esp */
  eax = esp;
/* 787609: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78760b: mov ecx, dword ptr [ebp - 0x124] */
  ecx = R32((uint32_t)(ebp + 0xfffffedcu));
/* 787611: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 787614: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 787617: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 787618: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 78761b: call 0x6c882d */
  esp -= 4; W32(esp, 0x787620u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 787620: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 787623: movzx eax, word ptr [eax + 4] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0x4u)));
/* 787627: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78762a: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 78762d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 78762f: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 787632: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 787634: lea edx, [ebp - 0x10c] */
  edx = (uint32_t)(ebp + 0xfffffef4u);
/* 78763a: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 78763d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 787640: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 787643: lea eax, [ebp - 0x16c] */
  eax = (uint32_t)(ebp + 0xfffffe94u);
/* 787649: fstp dword ptr [ebp - 0x108] */
  WF32((uint32_t)(ebp + 0xfffffef8u), ST0); FPOP();
/* 78764f: mov dword ptr [ebp - 0x10c], ecx */
  W32((uint32_t)(ebp + 0xfffffef4u), ecx);
/* 787655: mov dword ptr [ebp - 0x100], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff00u), 0x3f800000u);
/* 78765f: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 787665: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 787668: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 78766b: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 78766e: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 787671: lea edi, [ebp - 0x17c] */
  edi = (uint32_t)(ebp + 0xfffffe84u);
/* 787677: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787679: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 78767b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78767d: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 787680: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787682: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 787685: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787687: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 78768a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 78768d: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 787690: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787693: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 787696: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787699: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 78769c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 78769f: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7876a2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7876a4: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7876a6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7876a8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7876aa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7876ac: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7876af: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7876b2: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7876b5: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7876b8: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7876bb: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7876be: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7876c1: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7876c4: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7876c6: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7876c8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7876ca: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7876cc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7876ce: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7876d1: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7876d4: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7876d7: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7876da: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7876dd: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7876e0: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7876e3: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7876e6: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7876e8: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7876ea: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7876ec: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7876ee: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7876f0: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7876f2: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7876f4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7876f6: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7876f9: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7876fc: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7876ff: mov edx, dword ptr [ebp - 0x17c] */
  edx = R32((uint32_t)(ebp + 0xfffffe84u));
/* 787705: mov eax, dword ptr [ebp - 0x178] */
  eax = R32((uint32_t)(ebp + 0xfffffe88u));
/* 78770b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78770e: mov ecx, esp */
  ecx = esp;
/* 787710: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 787712: mov edx, dword ptr [ebp - 0x174] */
  edx = R32((uint32_t)(ebp + 0xfffffe8cu));
L_787718: /* 787718: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 78771b: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 78771e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78771f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 787722: call 0x6c882d */
  esp -= 4; W32(esp, 0x787727u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 787727: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 78772a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78772d: lea ecx, [ebp - 0x22c] */
  ecx = (uint32_t)(ebp + 0xfffffdd4u);
/* 787733: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787734: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 787735: lea eax, [ebp - 0x16c] */
  eax = (uint32_t)(ebp + 0xfffffe94u);
/* 78773b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78773c: lea ecx, [ebp - 0x24c] */
  ecx = (uint32_t)(ebp + 0xfffffdb4u);
/* 787742: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787743: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 787746: call dword ptr [0xcfa58c] */
  esp -= 4; W32(esp, 0x78774cu); SPILL(); f_4e1a55(); if (g_unwind) return; /* Core!?TransformByUsingAdjointT@FPlane@@QBE?AV1@ABVFMatrix@@M0@Z */ RELOAD();
/* 78774c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78774e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 787751: mov edx, esp */
  edx = esp;
/* 787753: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 787755: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 787758: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 78775b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 78775e: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 787761: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787762: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 787765: call 0x6c1965 */
  esp -= 4; W32(esp, 0x78776au); SPILL(); f_6c1965(); if (g_unwind) return; RELOAD();
/* 78776a: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 78776d: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 787770: mov dword ptr [ebx + 0x14], 1 */
  W32((uint32_t)(ebx + 0x14u), 0x1u);
/* 787777: mov eax, dword ptr [esi + 0x6000] */
  eax = R32((uint32_t)(esi + 0x6000u));
/* 78777d: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 787780: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 787783: lea edi, [esi + edx*4 + 0x12008] */
  edi = (uint32_t)(esi + edx*4 + 0x12008u);
/* 78778a: mov dword ptr [edi], 0x3f800000 */
  W32((uint32_t)(edi), 0x3f800000u);
/* 787790: mov dword ptr [edi + 4], 0x3f800000 */
  W32((uint32_t)(edi + 0x4u), 0x3f800000u);
/* 787797: movzx eax, word ptr [eax + 6] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0x6u)));
/* 78779b: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 78779e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7877a1: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7877a4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7877a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7877a7: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7877aa: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x7877b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7877b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7877b2: jne 0x7877e1 */
  if (!zf) goto L_7877e1;
L_7877b4: /* 7877b4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7877b7: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7877ba: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* 7877c0: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7877c3: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 7877c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7877c8: jne 0x7877e1 */
  if (!zf) goto L_7877e1;
L_7877ca: /* 7877ca: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 7877cf: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x7877d5u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 7877d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7877d6: call 0x6c449e */
  esp -= 4; W32(esp, 0x7877dbu); SPILL(); f_6c449e(); if (g_unwind) return; RELOAD();
/* 7877db: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7877de: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7877e1: /* 7877e1: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 7877e4: mov dword ptr [ebx + 0x10], edi */
  W32((uint32_t)(ebx + 0x10u), edi);
/* 7877e7: mov edx, dword ptr [esi + 0xf004] */
  edx = R32((uint32_t)(esi + 0xf004u));
/* 7877ed: mov ecx, dword ptr [esi + 0x15008] */
  ecx = R32((uint32_t)(esi + 0x15008u));
/* 7877f3: mov edi, dword ptr [esi + 0x6000] */
  edi = R32((uint32_t)(esi + 0x6000u));
/* 7877f9: mov ebx, dword ptr [ebp - 0x70] */
  ebx = R32((uint32_t)(ebp + 0xffffff90u));
/* 7877fc: mov eax, 3 */
  eax = 0x3u;
/* 787801: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 787803: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 787805: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 787808: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 787809: mov dword ptr [esi + 0x6000], edi */
  W32((uint32_t)(esi + 0x6000u), edi);
/* 78780f: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 787812: mov dword ptr [esi + 0xf004], edx */
  W32((uint32_t)(esi + 0xf004u), edx);
/* 787818: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78781b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 78781c: mov dword ptr [esi + 0x15008], ecx */
  W32((uint32_t)(esi + 0x15008u), ecx);
/* 787822: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 787825: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 787828: jmp 0x786fb0 */
  goto L_786fb0;
L_78782d: /* 78782d: lea ecx, [ebp - 0x22c] */
  ecx = (uint32_t)(ebp + 0xfffffdd4u);
/* 787833: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 787837: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x78783du); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 78783d: lea ecx, [ebp - 0x16c] */
  ecx = (uint32_t)(ebp + 0xfffffe94u);
/* 787843: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 787847: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x78784du); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_78784d: /* 78784d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 787850: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 787851: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 787852: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 787859: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78785a: mov esp, ebp */
  esp = ebp;
/* 78785c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78785d: ret 0xc */
  esp += 16; SPILL(); return;
L_787860: /* 787860: lea ecx, [ebp - 0x22c] */
  ecx = (uint32_t)(ebp + 0xfffffdd4u);
/* 787866: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 78786a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x787870u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 787870: lea ecx, [ebp - 0x16c] */
  ecx = (uint32_t)(ebp + 0xfffffe94u);
/* 787876: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 78787a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x787880u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_787880: /* 787880: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 787882: jmp 0x786ec5 */
  goto L_786ec5;
L_787887: /* 787887: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 78788a: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x787890u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 787890: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 787895: mov ecx, dword ptr [eax + 0x15220] */
  ecx = R32((uint32_t)(eax + 0x15220u));
/* 78789b: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78789e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7878a5: je 0x78784d */
  if (zf) goto L_78784d;
L_7878a7: /* 7878a7: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
/* 7878ae: mov edi, edi */
  edi = edi;
L_7878b0: /* 7878b0: mov eax, dword ptr [esi + 0x6000] */
  eax = R32((uint32_t)(esi + 0x6000u));
/* 7878b6: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7878b9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7878bb: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7878be: jge 0x78784d */
  if ((sf == of)) goto L_78784d;
L_7878c0: /* 7878c0: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7878c3: mov eax, ecx */
  eax = ecx;
/* 7878c5: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7878c8: mov eax, dword ptr [esi + ecx*8 + 4] */
  eax = R32((uint32_t)(esi + ecx*8 + 0x4u));
/* 7878cc: fidiv dword ptr [ebp + 0xc] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(ebp + 0xcu)));
/* 7878cf: mov edx, dword ptr [esi + ecx*8 + 8] */
  edx = R32((uint32_t)(esi + ecx*8 + 0x8u));
/* 7878d3: lea edi, [esi + ecx*8] */
  edi = (uint32_t)(esi + ecx*8);
/* 7878d6: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7878d8: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7878db: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 7878dd: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7878df: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7878e2: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7878e5: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7878e8: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7878eb: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 7878ee: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7878f1: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7878f4: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7878f7: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 7878f9: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7878fc: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7878ff: fadd dword ptr [edx + 4] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x4u)));
/* 787902: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 787905: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 787908: fadd dword ptr [edx + 8] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x8u)));
/* 78790b: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 78790e: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 787911: fmul dword ptr [0xa09998] */
  ST0 = ST0 * (F32((uint32_t)(0xa09998u)));
/* 787917: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 78791a: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 78791d: fmul dword ptr [0xa09998] */
  ST0 = ST0 * (F32((uint32_t)(0xa09998u)));
/* 787923: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 787926: fmul dword ptr [0xa09998] */
  ST0 = ST0 * (F32((uint32_t)(0xa09998u)));
/* 78792c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 78792f: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 787932: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 787934: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 787937: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 78793a: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 78793d: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 787940: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 787943: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 787946: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 787949: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 78794c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 787952: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 787955: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 787958: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 78795b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78795c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78795e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78795f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 787960: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787961: call 0x6c8607 */
  esp -= 4; W32(esp, 0x787966u); SPILL(); f_6c8607(); if (g_unwind) return; RELOAD();
/* 787966: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 787969: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 78796c: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 78796f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 787970: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 787972: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 787973: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787974: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 787975: call 0x6c8607 */
  esp -= 4; W32(esp, 0x78797au); SPILL(); f_6c8607(); if (g_unwind) return; RELOAD();
/* 78797a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 78797d: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 78797f: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 787982: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 787983: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 787985: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 787986: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787987: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 787988: call 0x6c8607 */
  esp -= 4; W32(esp, 0x78798du); SPILL(); f_6c8607(); if (g_unwind) return; RELOAD();
/* 78798d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 787990: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 787991: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 787993: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 787994: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 787997: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787998: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 78799b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78799c: call 0x6c8607 */
  esp -= 4; W32(esp, 0x7879a1u); SPILL(); f_6c8607(); if (g_unwind) return; RELOAD();
/* 7879a1: inc dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 7879a4: jmp 0x7878b0 */
  goto L_7878b0;
}

void f_786fa5(void) {
  LOAD_REGS();
  goto L_786fa5;
L_786ec5: /* 786ec5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 786ec7: mov dword ptr [ebp - 0x70], ebx */
  W32((uint32_t)(ebp + 0xffffff90u), ebx);
/* 786eca: je 0x787887 */
  if (zf) goto L_787887;
L_786ed0: /* 786ed0: mov edi, dword ptr [ebx + 4] */
  edi = R32((uint32_t)(ebx + 0x4u));
/* 786ed3: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 786ed5: mov dword ptr [ebp - 0x38], edi */
  W32((uint32_t)(ebp + 0xffffffc8u), edi);
/* 786ed8: je 0x787880 */
  if (zf) goto L_787880;
L_786ede: /* 786ede: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 786ee1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 786ee3: je 0x787880 */
  if (zf) goto L_787880;
L_786ee9: /* 786ee9: mov ecx, dword ptr [edi + 0x88] */
  ecx = R32((uint32_t)(edi + 0x88u));
/* 786eef: test ch, 4 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 786ef2: je 0x787880 */
  if (zf) goto L_787880;
L_786ef8: /* 786ef8: mov ecx, dword ptr [eax + 0x12c] */
  ecx = R32((uint32_t)(eax + 0x12cu));
/* 786efe: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 786f00: jne 0x787880 */
  if (!zf) goto L_787880;
L_786f06: /* 786f06: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 786f0c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 786f0e: add ecx, 0x1523c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1523cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 786f14: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 786f16: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x786f1cu); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 786f1c: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 786f22: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 786f25: mov eax, dword ptr [edi + 0x54] */
  eax = R32((uint32_t)(edi + 0x54u));
/* 786f28: add ecx, 0x1523c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1523cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 786f2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786f2f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 786f30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 786f31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 786f32: lea ecx, [ebp - 0x1d4] */
  ecx = (uint32_t)(ebp + 0xfffffe2cu);
/* 786f38: call 0x6c4ccd */
  esp -= 4; W32(esp, 0x786f3du); SPILL(); f_6c4ccd(); if (g_unwind) return; RELOAD();
/* 786f3d: lea ecx, [ebp - 0x1d4] */
  ecx = (uint32_t)(ebp + 0xfffffe2cu);
/* 786f43: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 786f44: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 786f47: add ecx, 0x108 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 786f4d: call 0x6c1be0 */
  esp -= 4; W32(esp, 0x786f52u); SPILL(); f_6c1be0(); if (g_unwind) return; RELOAD();
/* 786f52: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 786f54: lea eax, [ebp - 0x16c] */
  eax = (uint32_t)(ebp + 0xfffffe94u);
/* 786f5a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 786f5b: mov ecx, edi */
  ecx = edi;
/* 786f5d: call dword ptr [edx + 0xb8] */
  { uint32_t t = R32((uint32_t)(edx + 0xb8u)); esp -= 4; W32(esp, 0x786f63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 786f63: lea ecx, [ebp - 0x16c] */
  ecx = (uint32_t)(ebp + 0xfffffe94u);
/* 786f69: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 786f6d: call dword ptr [0xcfa594] */
  esp -= 4; W32(esp, 0x786f73u); SPILL(); f_4e1af0(); if (g_unwind) return; /* Core!?Determinant@FMatrix@@QBEMXZ */ RELOAD();
/* 786f73: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 786f76: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 786f79: lea edx, [ebp - 0x22c] */
  edx = (uint32_t)(ebp + 0xfffffdd4u);
/* 786f7f: mov dword ptr [ebp - 0x74], ecx */
  W32((uint32_t)(ebp + 0xffffff8cu), ecx);
/* 786f82: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 786f83: lea ecx, [ebp - 0x16c] */
  ecx = (uint32_t)(ebp + 0xfffffe94u);
/* 786f89: call dword ptr [0xcfa590] */
  esp -= 4; W32(esp, 0x786f8fu); SPILL(); f_4e1e9c(); if (g_unwind) return; /* Core!?TransposeAdjoint@FMatrix@@QBE?AV1@XZ */ RELOAD();
/* 786f8f: mov edx, dword ptr [edi + 0x54] */
  edx = R32((uint32_t)(edi + 0x54u));
/* 786f92: add edx, 0x64 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 786f95: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 786f99: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 786f9c: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 786fa3: jmp 0x786fb0 */
  goto L_786fb0;
L_786fa5: /* 786fa5: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 786fac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_786fb0: /* 786fb0: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 786fb5: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 786fb8: cmp ecx, dword ptr [eax + 0x15240] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x15240u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786fbe: jge 0x787860 */
  if ((sf == of)) goto L_787860;
L_786fc4: /* 786fc4: mov ecx, dword ptr [esi + 0x6000] */
  ecx = R32((uint32_t)(esi + 0x6000u));
/* 786fca: cmp ecx, 0x400 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786fd0: jge 0x78782d */
  if ((sf == of)) goto L_78782d;
L_786fd6: /* 786fd6: mov eax, dword ptr [esi + 0xf004] */
  eax = R32((uint32_t)(esi + 0xf004u));
/* 786fdc: lea ebx, [eax + 2] */
  ebx = (uint32_t)(eax + 0x2u);
/* 786fdf: cmp ebx, 0xc00 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xc00u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786fe5: jge 0x78782d */
  if ((sf == of)) goto L_78782d;
L_786feb: /* 786feb: cmp dword ptr [esi + 0x15008], 0x400 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x15008u))); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 786ff5: jge 0x78782d */
  if ((sf == of)) goto L_78782d;
L_786ffb: /* 786ffb: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 786ffe: lea ebx, [esi + ecx*8] */
  ebx = (uint32_t)(esi + ecx*8);
/* 787001: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 787004: lea ecx, [esi + eax*4 + 0x6004] */
  ecx = (uint32_t)(esi + eax*4 + 0x6004u);
/* 78700b: mov dword ptr [ebx], ecx */
  W32((uint32_t)(ebx), ecx);
/* 78700d: mov eax, dword ptr [esi + 0xf004] */
  eax = R32((uint32_t)(esi + 0xf004u));
/* 787013: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 787016: lea ecx, [esi + eax*4 + 0x6010] */
  ecx = (uint32_t)(esi + eax*4 + 0x6010u);
/* 78701d: mov dword ptr [ebx + 4], ecx */
  W32((uint32_t)(ebx + 0x4u), ecx);
/* 787020: mov eax, dword ptr [esi + 0xf004] */
  eax = R32((uint32_t)(esi + 0xf004u));
/* 787026: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 787029: lea ecx, [esi + eax*4 + 0x601c] */
  ecx = (uint32_t)(esi + eax*4 + 0x601cu);
/* 787030: mov dword ptr [ebx + 8], ecx */
  W32((uint32_t)(ebx + 0x8u), ecx);
/* 787033: mov eax, dword ptr [esi + 0x15008] */
  eax = R32((uint32_t)(esi + 0x15008u));
/* 787039: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 78703c: lea ecx, [esi + eax*4 + 0xf008] */
  ecx = (uint32_t)(esi + eax*4 + 0xf008u);
/* 787043: mov dword ptr [ebx + 0xc], ecx */
  W32((uint32_t)(ebx + 0xcu), ecx);
/* 787046: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78704b: mov ecx, dword ptr [eax + 0x1523c] */
  ecx = R32((uint32_t)(eax + 0x1523cu));
/* 787051: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 787054: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 787057: mov ecx, dword ptr [edi + 0x54] */
  ecx = R32((uint32_t)(edi + 0x54u));
/* 78705a: mov ecx, dword ptr [ecx + 0x114] */
  ecx = R32((uint32_t)(ecx + 0x114u));
/* 787060: movzx esi, word ptr [ecx + eax*8] */
  esi = (uint32_t)(R16((uint32_t)(ecx + eax*8)));
/* 787064: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 787066: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* 787069: movzx eax, word ptr [ecx + 4] */
  eax = (uint32_t)(R16((uint32_t)(ecx + 0x4u)));
/* 78706d: lea esi, [esi + esi*2] */
  esi = (uint32_t)(esi + esi*2);
/* 787070: lea esi, [edx + esi*8] */
  esi = (uint32_t)(edx + esi*8);
/* 787073: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 787076: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 787079: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 78707c: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 78707f: movzx ecx, word ptr [ecx + 2] */
  ecx = (uint32_t)(R16((uint32_t)(ecx + 0x2u)));
/* 787083: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 787086: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 787089: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 78708c: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* 78708f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787092: lea edx, [ebp - 0x23c] */
  edx = (uint32_t)(ebp + 0xfffffdc4u);
/* 787098: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 78709b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78709c: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 78709f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7870a1: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7870a3: fstp dword ptr [ebp - 0x1e0] */
  WF32((uint32_t)(ebp + 0xfffffe20u), ST0); FPOP();
/* 7870a9: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 7870ac: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 7870af: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 7870b2: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7870b5: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 7870b8: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 7870bb: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 7870bd: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 7870c0: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 7870c2: fst dword ptr [ebp - 0x1ec] */
  WF32((uint32_t)(ebp + 0xfffffe14u), ST0);
/* 7870c8: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7870cb: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7870ce: fmul dword ptr [ebp - 0x1e0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffe20u)));
/* 7870d4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7870d6: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7870d9: fmul dword ptr [ebp - 0x1e0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffe20u)));
/* 7870df: fld dword ptr [ebp - 0x1ec] */
  { double v = F32((uint32_t)(ebp + 0xfffffe14u)); FPUSH(v); }
/* 7870e5: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 7870e8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7870ea: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 7870ed: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* 7870f0: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 7870f3: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 7870f6: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 7870f8: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 7870fb: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 7870fe: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 787101: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x787107u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 787107: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 787109: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* 78710c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 78710f: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 787112: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 787115: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 787118: mov dword ptr [ebp - 0x60], 0 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x0u);
/* 78711f: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 787122: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 787125: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 78712b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 78712d: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 787130: movzx eax, word ptr [ecx] */
  eax = (uint32_t)(R16((uint32_t)(ecx)));
/* 787133: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 787136: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 787139: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78713b: lea eax, [ecx + edx*8] */
  eax = (uint32_t)(ecx + edx*8);
/* 78713e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 787140: lea ecx, [ebp - 0x16c] */
  ecx = (uint32_t)(ebp + 0xfffffe94u);
/* 787146: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 787149: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 78714c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 78714f: jne 0x787439 */
  if (!zf) goto L_787439;
L_787155: /* 787155: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 78715b: lea eax, [ebp - 0xdc] */
  eax = (uint32_t)(ebp + 0xffffff24u);
/* 787161: mov dword ptr [ebp - 0xdc], edx */
  W32((uint32_t)(ebp + 0xffffff24u), edx);
/* 787167: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 78716d: mov dword ptr [ebp - 0xd0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff30u), 0x3f800000u);
/* 787177: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 78717a: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 78717d: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 787180: lea edi, [ebp - 0x19c] */
  edi = (uint32_t)(ebp + 0xfffffe64u);
/* 787186: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787188: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 78718a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78718c: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 78718f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787191: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 787194: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787196: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 787199: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 78719c: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 78719f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7871a2: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7871a5: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7871a8: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7871ab: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7871ae: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7871b1: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7871b3: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7871b5: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7871b7: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7871b9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7871bb: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7871be: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7871c1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7871c4: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7871c7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7871ca: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7871cd: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7871d0: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7871d3: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7871d5: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7871d7: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7871d9: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7871db: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7871dd: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7871e0: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7871e3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7871e6: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7871e9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7871ec: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7871ef: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7871f2: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7871f5: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7871f7: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7871f9: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7871fb: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7871fd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7871ff: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 787201: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 787203: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 787205: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 787208: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 78720b: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 78720e: mov eax, dword ptr [ebp - 0x19c] */
  eax = R32((uint32_t)(ebp + 0xfffffe64u));
/* 787214: mov ecx, dword ptr [ebp - 0x198] */
  ecx = R32((uint32_t)(ebp + 0xfffffe68u));
/* 78721a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78721d: mov edx, esp */
  edx = esp;
/* 78721f: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 787221: mov eax, dword ptr [ebp - 0x194] */
  eax = R32((uint32_t)(ebp + 0xfffffe6cu));
/* 787227: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 78722a: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 78722c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78722d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 787230: call 0x6c882d */
  esp -= 4; W32(esp, 0x787235u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 787235: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 787238: movzx eax, word ptr [edx + 4] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x4u)));
/* 78723c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78723f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 787241: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 787244: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 787247: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 78724d: lea edx, [ebp - 0x16c] */
  edx = (uint32_t)(ebp + 0xfffffe94u);
/* 787253: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 787256: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 787259: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 78725c: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 78725e: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 787264: mov dword ptr [ebp - 0xbc], eax */
  W32((uint32_t)(ebp + 0xffffff44u), eax);
/* 78726a: mov dword ptr [ebp - 0xb0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x3f800000u);
/* 787274: fstp dword ptr [ebp - 0xb4] */
  WF32((uint32_t)(ebp + 0xffffff4cu), ST0); FPOP();
/* 78727a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 78727d: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 787280: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 787283: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 787286: lea edi, [ebp - 0x11c] */
  edi = (uint32_t)(ebp + 0xfffffee4u);
/* 78728c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78728e: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 787290: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787292: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 787295: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787297: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 78729a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78729c: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 78729f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7872a2: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 7872a5: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7872a8: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7872ab: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7872ae: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7872b1: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7872b4: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7872b7: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7872b9: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7872bb: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7872bd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7872bf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7872c1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7872c4: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7872c7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7872ca: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7872cd: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7872d0: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7872d3: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7872d6: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7872d9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7872db: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7872dd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7872df: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7872e1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7872e3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7872e6: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7872e9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7872ec: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7872ef: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7872f2: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7872f5: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7872f8: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7872fb: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7872fd: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7872ff: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 787301: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 787303: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 787305: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 787307: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 787309: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 78730b: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 78730e: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 787311: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 787314: mov ecx, dword ptr [ebp - 0x11c] */
  ecx = R32((uint32_t)(ebp + 0xfffffee4u));
/* 78731a: mov edx, dword ptr [ebp - 0x118] */
  edx = R32((uint32_t)(ebp + 0xfffffee8u));
/* 787320: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 787323: mov eax, esp */
  eax = esp;
/* 787325: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 787327: mov ecx, dword ptr [ebp - 0x114] */
  ecx = R32((uint32_t)(ebp + 0xfffffeecu));
/* 78732d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 787330: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 787333: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 787334: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 787337: call 0x6c882d */
  esp -= 4; W32(esp, 0x78733cu); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 78733c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 78733f: movzx eax, word ptr [eax + 2] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0x2u)));
/* 787343: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 787346: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 787349: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 78734b: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 78734e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 787350: lea edx, [ebp - 0xfc] */
  edx = (uint32_t)(ebp + 0xffffff04u);
/* 787356: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 787359: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78735c: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 78735f: lea eax, [ebp - 0x16c] */
  eax = (uint32_t)(ebp + 0xfffffe94u);
/* 787365: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 78736b: mov dword ptr [ebp - 0xfc], ecx */
  W32((uint32_t)(ebp + 0xffffff04u), ecx);
/* 787371: mov dword ptr [ebp - 0xf0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x3f800000u);
/* 78737b: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 787381: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 787384: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 787387: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 78738a: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78738d: lea edi, [ebp - 0x1ac] */
  edi = (uint32_t)(ebp + 0xfffffe54u);
/* 787393: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787395: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 787397: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787399: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 78739c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78739e: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 7873a1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 7873a3: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 7873a6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7873a9: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 7873ac: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7873af: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 7873b2: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7873b5: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 7873b8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 7873bb: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7873be: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7873c0: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7873c2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7873c4: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7873c6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7873c8: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7873cb: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7873ce: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7873d1: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7873d4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7873d7: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7873da: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7873dd: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7873e0: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7873e2: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7873e4: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7873e6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7873e8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7873ea: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7873ed: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7873f0: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7873f3: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7873f6: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7873f9: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7873fc: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7873ff: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 787402: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 787404: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 787406: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 787408: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 78740a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78740c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 78740e: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 787410: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 787412: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 787415: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 787418: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 78741b: mov edx, dword ptr [ebp - 0x1ac] */
  edx = R32((uint32_t)(ebp + 0xfffffe54u));
/* 787421: mov eax, dword ptr [ebp - 0x1a8] */
  eax = R32((uint32_t)(ebp + 0xfffffe58u));
/* 787427: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78742a: mov ecx, esp */
  ecx = esp;
/* 78742c: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 78742e: mov edx, dword ptr [ebp - 0x1a4] */
  edx = R32((uint32_t)(ebp + 0xfffffe5cu));
/* 787434: jmp 0x787718 */
  goto L_787718;
L_787439: /* 787439: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 78743f: lea eax, [ebp - 0xcc] */
  eax = (uint32_t)(ebp + 0xffffff34u);
/* 787445: mov dword ptr [ebp - 0xcc], edx */
  W32((uint32_t)(ebp + 0xffffff34u), edx);
/* 78744b: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 787451: mov dword ptr [ebp - 0xc0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x3f800000u);
/* 78745b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 78745e: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 787461: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 787464: lea edi, [ebp - 0x18c] */
  edi = (uint32_t)(ebp + 0xfffffe74u);
/* 78746a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78746c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 78746e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787470: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 787473: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787475: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 787478: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78747a: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 78747d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787480: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 787483: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787486: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 787489: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 78748c: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 78748f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787492: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 787495: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 787497: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 787499: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 78749b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 78749d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 78749f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7874a2: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7874a5: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7874a8: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7874ab: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7874ae: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7874b1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7874b4: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7874b7: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7874b9: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7874bb: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7874bd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7874bf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7874c1: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7874c4: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7874c7: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7874ca: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7874cd: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7874d0: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7874d3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7874d6: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7874d9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7874db: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7874dd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7874df: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7874e1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7874e3: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7874e5: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7874e7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7874e9: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7874ec: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7874ef: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7874f2: mov eax, dword ptr [ebp - 0x18c] */
  eax = R32((uint32_t)(ebp + 0xfffffe74u));
/* 7874f8: mov ecx, dword ptr [ebp - 0x188] */
  ecx = R32((uint32_t)(ebp + 0xfffffe78u));
/* 7874fe: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 787501: mov edx, esp */
  edx = esp;
/* 787503: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 787505: mov eax, dword ptr [ebp - 0x184] */
  eax = R32((uint32_t)(ebp + 0xfffffe7cu));
/* 78750b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 78750e: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 787510: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787511: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 787514: call 0x6c882d */
  esp -= 4; W32(esp, 0x787519u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 787519: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 78751c: movzx eax, word ptr [edx + 2] */
  eax = (uint32_t)(R16((uint32_t)(edx + 0x2u)));
/* 787520: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 787523: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 787525: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 787528: lea eax, [edx + eax*8] */
  eax = (uint32_t)(edx + eax*8);
/* 78752b: lea ecx, [ebp - 0xec] */
  ecx = (uint32_t)(ebp + 0xffffff14u);
/* 787531: lea edx, [ebp - 0x16c] */
  edx = (uint32_t)(ebp + 0xfffffe94u);
/* 787537: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 78753a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78753d: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 787540: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 787542: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 787548: mov dword ptr [ebp - 0xec], eax */
  W32((uint32_t)(ebp + 0xffffff14u), eax);
/* 78754e: mov dword ptr [ebp - 0xe0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff20u), 0x3f800000u);
/* 787558: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
/* 78755e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 787561: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 787564: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 787567: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 78756a: lea edi, [ebp - 0x12c] */
  edi = (uint32_t)(ebp + 0xfffffed4u);
/* 787570: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787572: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 787574: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787576: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 787579: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78757b: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 78757e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787580: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 787583: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787586: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 787589: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 78758c: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 78758f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787592: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 787595: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787598: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 78759b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 78759d: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 78759f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7875a1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7875a3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7875a5: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7875a8: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7875ab: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7875ae: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7875b1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7875b4: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7875b7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7875ba: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7875bd: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7875bf: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7875c1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7875c3: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7875c5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7875c7: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7875ca: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7875cd: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7875d0: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7875d3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7875d6: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7875d9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7875dc: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7875df: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7875e1: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7875e3: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7875e5: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7875e7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7875e9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7875eb: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7875ed: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7875ef: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7875f2: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7875f5: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7875f8: mov ecx, dword ptr [ebp - 0x12c] */
  ecx = R32((uint32_t)(ebp + 0xfffffed4u));
/* 7875fe: mov edx, dword ptr [ebp - 0x128] */
  edx = R32((uint32_t)(ebp + 0xfffffed8u));
/* 787604: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 787607: mov eax, esp */
  eax = esp;
/* 787609: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 78760b: mov ecx, dword ptr [ebp - 0x124] */
  ecx = R32((uint32_t)(ebp + 0xfffffedcu));
/* 787611: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 787614: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* 787617: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 787618: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 78761b: call 0x6c882d */
  esp -= 4; W32(esp, 0x787620u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 787620: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 787623: movzx eax, word ptr [eax + 4] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0x4u)));
/* 787627: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78762a: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 78762d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 78762f: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* 787632: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 787634: lea edx, [ebp - 0x10c] */
  edx = (uint32_t)(ebp + 0xfffffef4u);
/* 78763a: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 78763d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 787640: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 787643: lea eax, [ebp - 0x16c] */
  eax = (uint32_t)(ebp + 0xfffffe94u);
/* 787649: fstp dword ptr [ebp - 0x108] */
  WF32((uint32_t)(ebp + 0xfffffef8u), ST0); FPOP();
/* 78764f: mov dword ptr [ebp - 0x10c], ecx */
  W32((uint32_t)(ebp + 0xfffffef4u), ecx);
/* 787655: mov dword ptr [ebp - 0x100], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff00u), 0x3f800000u);
/* 78765f: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 787665: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 787668: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 78766b: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 78766e: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 787671: lea edi, [ebp - 0x17c] */
  edi = (uint32_t)(ebp + 0xfffffe84u);
/* 787677: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787679: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 78767b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 78767d: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 787680: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787682: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 787685: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 787687: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 78768a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 78768d: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 787690: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787693: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 787696: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 787699: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 78769c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 78769f: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 7876a2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7876a4: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7876a6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7876a8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7876aa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7876ac: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7876af: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 7876b2: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7876b5: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 7876b8: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7876bb: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 7876be: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 7876c1: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 7876c4: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7876c6: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7876c8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7876ca: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7876cc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7876ce: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7876d1: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 7876d4: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7876d7: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 7876da: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7876dd: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 7876e0: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 7876e3: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 7876e6: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7876e8: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 7876ea: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7876ec: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 7876ee: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 7876f0: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 7876f2: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 7876f4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 7876f6: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 7876f9: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 7876fc: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 7876ff: mov edx, dword ptr [ebp - 0x17c] */
  edx = R32((uint32_t)(ebp + 0xfffffe84u));
/* 787705: mov eax, dword ptr [ebp - 0x178] */
  eax = R32((uint32_t)(ebp + 0xfffffe88u));
/* 78770b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78770e: mov ecx, esp */
  ecx = esp;
/* 787710: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 787712: mov edx, dword ptr [ebp - 0x174] */
  edx = R32((uint32_t)(ebp + 0xfffffe8cu));
L_787718: /* 787718: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 78771b: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 78771e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78771f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 787722: call 0x6c882d */
  esp -= 4; W32(esp, 0x787727u); SPILL(); f_6c882d(); if (g_unwind) return; RELOAD();
/* 787727: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 78772a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78772d: lea ecx, [ebp - 0x22c] */
  ecx = (uint32_t)(ebp + 0xfffffdd4u);
/* 787733: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787734: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 787735: lea eax, [ebp - 0x16c] */
  eax = (uint32_t)(ebp + 0xfffffe94u);
/* 78773b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78773c: lea ecx, [ebp - 0x24c] */
  ecx = (uint32_t)(ebp + 0xfffffdb4u);
/* 787742: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787743: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 787746: call dword ptr [0xcfa58c] */
  esp -= 4; W32(esp, 0x78774cu); SPILL(); f_4e1a55(); if (g_unwind) return; /* Core!?TransformByUsingAdjointT@FPlane@@QBE?AV1@ABVFMatrix@@M0@Z */ RELOAD();
/* 78774c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78774e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 787751: mov edx, esp */
  edx = esp;
/* 787753: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 787755: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 787758: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 78775b: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 78775e: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 787761: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787762: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 787765: call 0x6c1965 */
  esp -= 4; W32(esp, 0x78776au); SPILL(); f_6c1965(); if (g_unwind) return; RELOAD();
/* 78776a: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 78776d: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 787770: mov dword ptr [ebx + 0x14], 1 */
  W32((uint32_t)(ebx + 0x14u), 0x1u);
/* 787777: mov eax, dword ptr [esi + 0x6000] */
  eax = R32((uint32_t)(esi + 0x6000u));
/* 78777d: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 787780: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 787783: lea edi, [esi + edx*4 + 0x12008] */
  edi = (uint32_t)(esi + edx*4 + 0x12008u);
/* 78778a: mov dword ptr [edi], 0x3f800000 */
  W32((uint32_t)(edi), 0x3f800000u);
/* 787790: mov dword ptr [edi + 4], 0x3f800000 */
  W32((uint32_t)(edi + 0x4u), 0x3f800000u);
/* 787797: movzx eax, word ptr [eax + 6] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0x6u)));
/* 78779b: mov edx, dword ptr [ecx + 0x54] */
  edx = R32((uint32_t)(ecx + 0x54u));
/* 78779e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7877a1: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 7877a4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7877a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7877a7: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 7877aa: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x7877b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7877b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7877b2: jne 0x7877e1 */
  if (!zf) goto L_7877e1;
L_7877b4: /* 7877b4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 7877b7: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 7877ba: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* 7877c0: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 7877c3: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 7877c6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7877c8: jne 0x7877e1 */
  if (!zf) goto L_7877e1;
L_7877ca: /* 7877ca: mov ecx, 0xb86100 */
  ecx = 0xb86100u;
/* 7877cf: call dword ptr [0xcfa3f4] */
  esp -= 4; W32(esp, 0x7877d5u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 7877d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7877d6: call 0x6c449e */
  esp -= 4; W32(esp, 0x7877dbu); SPILL(); f_6c449e(); if (g_unwind) return; RELOAD();
/* 7877db: mov eax, dword ptr [eax + 0x2c] */
  eax = R32((uint32_t)(eax + 0x2cu));
/* 7877de: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_7877e1: /* 7877e1: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 7877e4: mov dword ptr [ebx + 0x10], edi */
  W32((uint32_t)(ebx + 0x10u), edi);
/* 7877e7: mov edx, dword ptr [esi + 0xf004] */
  edx = R32((uint32_t)(esi + 0xf004u));
/* 7877ed: mov ecx, dword ptr [esi + 0x15008] */
  ecx = R32((uint32_t)(esi + 0x15008u));
/* 7877f3: mov edi, dword ptr [esi + 0x6000] */
  edi = R32((uint32_t)(esi + 0x6000u));
/* 7877f9: mov ebx, dword ptr [ebp - 0x70] */
  ebx = R32((uint32_t)(ebp + 0xffffff90u));
/* 7877fc: mov eax, 3 */
  eax = 0x3u;
/* 787801: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 787803: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 787805: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 787808: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 787809: mov dword ptr [esi + 0x6000], edi */
  W32((uint32_t)(esi + 0x6000u), edi);
/* 78780f: mov edi, dword ptr [ebp - 0x38] */
  edi = R32((uint32_t)(ebp + 0xffffffc8u));
/* 787812: mov dword ptr [esi + 0xf004], edx */
  W32((uint32_t)(esi + 0xf004u), edx);
/* 787818: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 78781b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 78781c: mov dword ptr [esi + 0x15008], ecx */
  W32((uint32_t)(esi + 0x15008u), ecx);
/* 787822: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 787825: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 787828: jmp 0x786fb0 */
  goto L_786fb0;
L_78782d: /* 78782d: lea ecx, [ebp - 0x22c] */
  ecx = (uint32_t)(ebp + 0xfffffdd4u);
/* 787833: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 787837: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x78783du); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 78783d: lea ecx, [ebp - 0x16c] */
  ecx = (uint32_t)(ebp + 0xfffffe94u);
/* 787843: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 787847: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x78784du); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_78784d: /* 78784d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 787850: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 787851: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 787852: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 787859: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78785a: mov esp, ebp */
  esp = ebp;
/* 78785c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78785d: ret 0xc */
  esp += 16; SPILL(); return;
L_787860: /* 787860: lea ecx, [ebp - 0x22c] */
  ecx = (uint32_t)(ebp + 0xfffffdd4u);
/* 787866: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 78786a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x787870u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 787870: lea ecx, [ebp - 0x16c] */
  ecx = (uint32_t)(ebp + 0xfffffe94u);
/* 787876: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 78787a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x787880u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_787880: /* 787880: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 787882: jmp 0x786ec5 */
  goto L_786ec5;
L_787887: /* 787887: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 78788a: call dword ptr [0xcfa52c] */
  esp -= 4; W32(esp, 0x787890u); SPILL(); f_4e16ef(); if (g_unwind) return; /* Core!?Pop@FMemMark@@QAEXXZ */ RELOAD();
/* 787890: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 787895: mov ecx, dword ptr [eax + 0x15220] */
  ecx = R32((uint32_t)(eax + 0x15220u));
/* 78789b: test ch, 2 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 78789e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7878a5: je 0x78784d */
  if (zf) goto L_78784d;
L_7878a7: /* 7878a7: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
/* 7878ae: mov edi, edi */
  edi = edi;
L_7878b0: /* 7878b0: mov eax, dword ptr [esi + 0x6000] */
  eax = R32((uint32_t)(esi + 0x6000u));
/* 7878b6: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7878b9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7878bb: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 7878be: jge 0x78784d */
  if ((sf == of)) goto L_78784d;
L_7878c0: /* 7878c0: fild dword ptr [ebp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 7878c3: mov eax, ecx */
  eax = ecx;
/* 7878c5: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 7878c8: mov eax, dword ptr [esi + ecx*8 + 4] */
  eax = R32((uint32_t)(esi + ecx*8 + 0x4u));
/* 7878cc: fidiv dword ptr [ebp + 0xc] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(ebp + 0xcu)));
/* 7878cf: mov edx, dword ptr [esi + ecx*8 + 8] */
  edx = R32((uint32_t)(esi + ecx*8 + 0x8u));
/* 7878d3: lea edi, [esi + ecx*8] */
  edi = (uint32_t)(esi + ecx*8);
/* 7878d6: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 7878d8: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* 7878db: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 7878dd: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 7878df: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7878e2: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 7878e5: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 7878e8: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 7878eb: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 7878ee: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 7878f1: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 7878f4: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 7878f7: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 7878f9: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 7878fc: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 7878ff: fadd dword ptr [edx + 4] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x4u)));
/* 787902: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 787905: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 787908: fadd dword ptr [edx + 8] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x8u)));
/* 78790b: mov edx, dword ptr [edi + 0xc] */
  edx = R32((uint32_t)(edi + 0xcu));
/* 78790e: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 787911: fmul dword ptr [0xa09998] */
  ST0 = ST0 * (F32((uint32_t)(0xa09998u)));
/* 787917: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 78791a: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 78791d: fmul dword ptr [0xa09998] */
  ST0 = ST0 * (F32((uint32_t)(0xa09998u)));
/* 787923: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 787926: fmul dword ptr [0xa09998] */
  ST0 = ST0 * (F32((uint32_t)(0xa09998u)));
/* 78792c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 78792f: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 787932: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 787934: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 787937: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 78793a: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 78793d: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 787940: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 787943: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 787946: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 787949: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 78794c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 787952: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* 787955: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 787958: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 78795b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 78795c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78795e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78795f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 787960: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787961: call 0x6c8607 */
  esp -= 4; W32(esp, 0x787966u); SPILL(); f_6c8607(); if (g_unwind) return; RELOAD();
/* 787966: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 787969: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 78796c: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 78796f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 787970: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 787972: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 787973: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787974: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 787975: call 0x6c8607 */
  esp -= 4; W32(esp, 0x78797au); SPILL(); f_6c8607(); if (g_unwind) return; RELOAD();
/* 78797a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 78797d: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 78797f: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* 787982: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 787983: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 787985: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 787986: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787987: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 787988: call 0x6c8607 */
  esp -= 4; W32(esp, 0x78798du); SPILL(); f_6c8607(); if (g_unwind) return; RELOAD();
/* 78798d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 787990: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 787991: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 787993: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 787994: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 787997: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787998: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 78799b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78799c: call 0x6c8607 */
  esp -= 4; W32(esp, 0x7879a1u); SPILL(); f_6c8607(); if (g_unwind) return; RELOAD();
/* 7879a1: inc dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* 7879a4: jmp 0x7878b0 */
  goto L_7878b0;
}

void f_7879a9(void) {
  LOAD_REGS();
L_7879a9: /* 7879a9: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 7879ac: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7879b1: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 7879b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7879b8: mov dword ptr [ebp - 0xac], eax */
  W32((uint32_t)(ebp + 0xffffff54u), eax);
/* 7879be: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7879c3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7879c3(); return;
}

void f_7879c3(void) {
  LOAD_REGS();
L_7879c3: /* 7879c3: push 0xa09974 */
  { uint32_t v = 0xa09974u; esp -= 4; W32(esp, v); }
/* 7879c8: push 0xac7d30 */
  { uint32_t v = 0xac7d30u; esp -= 4; W32(esp, v); }
/* 7879cd: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7879d3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7879d3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7879d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7879d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7879da: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7879dfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7879df(); return;
}

void f_7879df(void) {
  LOAD_REGS();
L_7879df: /* 7879df: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 7879e2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7879e7: lea eax, [ebp - 0x8c] */
  eax = (uint32_t)(ebp + 0xffffff74u);
/* 7879ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7879ee: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 7879f4: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7879f9u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7879f9(); return;
}

void f_7879f9(void) {
  LOAD_REGS();
L_7879f9: /* 7879f9: push 0xa09960 */
  { uint32_t v = 0xa09960u; esp -= 4; W32(esp, v); }
/* 7879fe: push 0xac7d28 */
  { uint32_t v = 0xac7d28u; esp -= 4; W32(esp, v); }
/* 787a03: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x787a09u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 787a09: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 787a0c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 787a0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 787a10: call 0x99caf8 */
  esp -= 4; W32(esp, 0x787a15u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_787a15(); return;
}

void f_787a15(void) {
  LOAD_REGS();
L_787a15: /* 787a15: mov ecx, dword ptr [ebp - 0x230] */
  ecx = R32((uint32_t)(ebp + 0xfffffdd0u));
/* 787a1b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 787a20: lea edx, [ebp - 0x88] */
  edx = (uint32_t)(ebp + 0xffffff78u);
/* 787a26: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 787a27: mov dword ptr [ebp - 0x88], ecx */
  W32((uint32_t)(ebp + 0xffffff78u), ecx);
/* 787a2d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x787a32u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_787a32(); return;
}

void f_787a32(void) {
  LOAD_REGS();
L_787a32: /* 787a32: push 0xa0993c */
  { uint32_t v = 0xa0993cu; esp -= 4; W32(esp, v); }
/* 787a37: push 0xac7d38 */
  { uint32_t v = 0xac7d38u; esp -= 4; W32(esp, v); }
/* 787a3c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x787a42u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 787a42: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 787a45: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 787a47: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 787a49: call 0x99caf8 */
  esp -= 4; W32(esp, 0x787a4eu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_787a4e: guest_badaddr(0x787a4e); return;
}

void f_787e50(void) {
  LOAD_REGS();
L_787e50: /* 787e50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 787e51: mov ebp, esp */
  ebp = esp;
/* 787e53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 787e55: push 0x9ccab0 */
  { uint32_t v = 0x9ccab0u; esp -= 4; W32(esp, v); }
/* 787e5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 787e60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 787e61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 787e68: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 787e6b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 787e6e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 787e6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 787e70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 787e71: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 787e74: xor edi, edi */
  edi = 0;
/* 787e76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 787e77: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 787e7a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787e7b: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 787e7e: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 787e81: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 787e84: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 787e87: call 0x6c92a5 */
  esp -= 4; W32(esp, 0x787e8cu); SPILL(); f_6c92a5(); if (g_unwind) return; RELOAD();
/* 787e8c: fld dword ptr [0xa098d4] */
  { double v = F32((uint32_t)(0xa098d4u)); FPUSH(v); }
/* 787e92: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 787e95: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 787e98: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 787e9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 787e9e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 787ea1: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 787ea5: mov edx, esp */
  edx = esp;
/* 787ea7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 787ea9: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 787eac: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 787eaf: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 787eb2: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 787eb5: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x787ebbu); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 787ebb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 787ebe: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 787ec1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787ec2: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 787ec5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 787ec6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 787ec7: call 0x92a450 */
  esp -= 4; W32(esp, 0x787eccu); SPILL(); f_92a450(); if (g_unwind) return; RELOAD();
/* 787ecc: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 787ecf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787ed0: call 0x9287f0 */
  esp -= 4; W32(esp, 0x787ed5u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 787ed5: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 787ed8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 787ed9: mov esi, eax */
  esi = eax;
/* 787edb: call 0x9287f0 */
  esp -= 4; W32(esp, 0x787ee0u); SPILL(); f_9287f0(); if (g_unwind) return; RELOAD();
/* 787ee0: mov ebx, eax */
  ebx = eax;
/* 787ee2: cmp byte ptr [esi], 6 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 787ee5: mov dword ptr [ebp + 0x14], edi */
  W32((uint32_t)(ebp + 0x14u), edi);
/* 787ee8: mov dword ptr [ebp + 0x10], edi */
  W32((uint32_t)(ebp + 0x10u), edi);
/* 787eeb: jne 0x787f04 */
  if (!zf) goto L_787f04;
L_787eed: /* 787eed: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 787eee: call 0x92f4a0 */
  esp -= 4; W32(esp, 0x787ef3u); SPILL(); f_92f4a0(); if (g_unwind) return; RELOAD();
/* 787ef3: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 787ef6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 787ef9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 787efa: call 0x6c78e7 */
  esp -= 4; W32(esp, 0x787effu); SPILL(); f_6c78e7(); if (g_unwind) return; RELOAD();
/* 787eff: mov dword ptr [ebp + 0x14], esi */
  W32((uint32_t)(ebp + 0x14u), esi);
/* 787f02: jmp 0x787f1e */
  goto L_787f1e;
L_787f04: /* 787f04: cmp byte ptr [ebx], 6 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 787f07: jne 0x787f32 */
  if (!zf) goto L_787f32;
L_787f09: /* 787f09: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 787f0a: call 0x92f4a0 */
  esp -= 4; W32(esp, 0x787f0fu); SPILL(); f_92f4a0(); if (g_unwind) return; RELOAD();
/* 787f0f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 787f12: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 787f13: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 787f16: call 0x6c78e7 */
  esp -= 4; W32(esp, 0x787f1bu); SPILL(); f_6c78e7(); if (g_unwind) return; RELOAD();
/* 787f1b: mov dword ptr [ebp + 0x14], ebx */
  W32((uint32_t)(ebp + 0x14u), ebx);
L_787f1e: /* 787f1e: mov edi, eax */
  edi = eax;
/* 787f20: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 787f23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 787f25: je 0x787f32 */
  if (zf) goto L_787f32;
L_787f27: /* 787f27: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 787f29: je 0x787f32 */
  if (zf) goto L_787f32;
L_787f2b: /* 787f2b: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 787f2e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 787f30: jne 0x787f4a */
  if (!zf) goto L_787f4a;
L_787f32: /* 787f32: push 0x28a */
  { uint32_t v = 0x28au; esp -= 4; W32(esp, v); }
/* 787f37: push 0xac7d40 */
  { uint32_t v = 0xac7d40u; esp -= 4; W32(esp, v); }
/* 787f3c: push 0xac7d50 */
  { uint32_t v = 0xac7d50u; esp -= 4; W32(esp, v); }
/* 787f41: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x787f47u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 787f47: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_787f4a: /* 787f4a: mov edi, dword ptr [edi + 0x30c] */
  edi = R32((uint32_t)(edi + 0x30cu));
/* 787f50: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 787f52: je 0x787f6c */
  if (zf) goto L_787f6c;
L_787f54: /* 787f54: push 0xb1ee08 */
  { uint32_t v = 0xb1ee08u; esp -= 4; W32(esp, v); }
/* 787f59: mov ecx, edi */
  ecx = edi;
/* 787f5b: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x787f61u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 787f61: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 787f63: je 0x787f6c */
  if (zf) goto L_787f6c;
L_787f65: /* 787f65: mov esi, dword ptr [edi + 0x50] */
  esi = R32((uint32_t)(edi + 0x50u));
/* 787f68: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 787f6a: jne 0x787f80 */
  if (!zf) goto L_787f80;
L_787f6c: /* 787f6c: mov esi, dword ptr [0xb21bb4] */
  esi = R32((uint32_t)(0xb21bb4u));
/* 787f72: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 787f75: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 787f76: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 787f79: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 787f7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 787f7b: call 0x6c6c5d */
  esp -= 4; W32(esp, 0x787f80u); SPILL(); f_6c6c5d(); if (g_unwind) return; RELOAD();
L_787f80: /* 787f80: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 787f83: mov dword ptr [ecx + 0x34], esi */
  W32((uint32_t)(ecx + 0x34u), esi);
/* 787f86: mov eax, dword ptr [esi + 0x6000] */
  eax = R32((uint32_t)(esi + 0x6000u));
/* 787f8c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 787f8f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 787f90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 787f91: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 787f98: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 787f99: mov esp, ebp */
  esp = ebp;
/* 787f9b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 787f9c: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_787f9f(void) {
  LOAD_REGS();
L_787f9f: /* 787f9f: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 787fa2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 787fa7: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 787faa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 787fab: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 787fae: call 0x99caf8 */
  esp -= 4; W32(esp, 0x787fb3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_787fb3(); return;
}

void f_787fb3(void) {
  LOAD_REGS();
L_787fb3: /* 787fb3: push 0xa099b8 */
  { uint32_t v = 0xa099b8u; esp -= 4; W32(esp, v); }
/* 787fb8: push 0xac7d6c */
  { uint32_t v = 0xac7d6cu; esp -= 4; W32(esp, v); }
/* 787fbd: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x787fc3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 787fc3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 787fc6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 787fc8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 787fca: call 0x99caf8 */
  esp -= 4; W32(esp, 0x787fcfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_787fcf: guest_badaddr(0x787fcf); return;
}

void f_788030(void) {
  LOAD_REGS();
L_788030: /* 788030: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 788034: xor ecx, ecx */
  ecx = 0;
/* 788036: mov dword ptr [eax + 0x6000], ecx */
  W32((uint32_t)(eax + 0x6000u), ecx);
/* 78803c: mov dword ptr [eax + 0xf004], ecx */
  W32((uint32_t)(eax + 0xf004u), ecx);
/* 788042: mov dword ptr [eax + 0x15008], ecx */
  W32((uint32_t)(eax + 0x15008u), ecx);
/* 788048: ret  */
  esp += 4; SPILL(); return;
}

void f_788060(void) {
  LOAD_REGS();
L_788060: /* 788060: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 788061: mov ebp, esp */
  ebp = esp;
/* 788063: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 788065: push 0x9ccac0 */
  { uint32_t v = 0x9ccac0u; esp -= 4; W32(esp, v); }
/* 78806a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 788070: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 788071: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 788078: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78807b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 78807e: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 788084: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 788085: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 788086: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 788087: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 78808a: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 78808f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 788090: add ecx, 0x15018 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x15018u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 788096: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 788097: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78809e: call dword ptr [0xcfa5a4] */
  esp -= 4; W32(esp, 0x7880a4u); SPILL(); f_4e2be4(); if (g_unwind) return; /* Core!?appStrncpy@@YAPAGPAGPBGH@Z */ RELOAD();
/* 7880a4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7880a7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7880aa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7880ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7880ac: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7880b3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7880b4: mov esp, ebp */
  esp = ebp;
/* 7880b6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7880b7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7880ba(void) {
  LOAD_REGS();
L_7880ba: /* 7880ba: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7880bd: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7880c2: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7880c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7880c6: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7880c9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7880ceu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7880ce(); return;
}

void f_7880ce(void) {
  LOAD_REGS();
L_7880ce: /* 7880ce: push 0xa099f0 */
  { uint32_t v = 0xa099f0u; esp -= 4; W32(esp, v); }
/* 7880d3: push 0xac7e90 */
  { uint32_t v = 0xac7e90u; esp -= 4; W32(esp, v); }
/* 7880d8: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7880deu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7880de: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7880e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7880e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7880e5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7880eau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7880ea: guest_badaddr(0x7880ea); return;
}

void f_788120(void) {
  LOAD_REGS();
L_788120: /* 788120: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 788125: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 788127: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78812c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78812e: add eax, 0x15018 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x15018u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 788133: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 788134: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 788138: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 788139: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x78813bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78813b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_788150(void) {
  LOAD_REGS();
L_788150: /* 788150: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 788155: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 788157: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 788159: jmp dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); SPILL(); call_ind(t); return; }
}

void f_788170(void) {
  LOAD_REGS();
L_788170: /* 788170: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 788175: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 788177: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 78817c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 78817e: add eax, 0x15018 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x15018u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 788183: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 788184: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 788188: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 788189: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 78818d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78818e: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x788191u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 788191: ret 8 */
  esp += 12; SPILL(); return;
}

void f_7881b0(void) {
  LOAD_REGS();
L_7881b0: /* 7881b0: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 7881b5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7881b7: mov eax, dword ptr [0xb21bb4] */
  eax = R32((uint32_t)(0xb21bb4u));
/* 7881bc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 7881be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7881bf: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7881c3: add eax, 0x15018 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x15018u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 7881c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7881c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7881ca: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x7881ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7881cc: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 7881ce: mov edx, eax */
  edx = eax;
/* 7881d0: jbe 0x7881e6 */
  if ((cf | zf)) goto L_7881e6;
L_7881d2: /* 7881d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7881d3: mov ecx, esi */
  ecx = esi;
/* 7881d5: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 7881d8: xor eax, eax */
  eax = 0;
/* 7881da: mov edi, edx */
  edi = edx;
/* 7881dc: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 7881de: mov ecx, esi */
  ecx = esi;
/* 7881e0: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 7881e3: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 7881e5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_7881e6: /* 7881e6: mov eax, edx */
  eax = edx;
/* 7881e8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7881e9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_788200(void) {
  LOAD_REGS();
L_788200: /* 788200: push 0xac7e98 */
  { uint32_t v = 0xac7e98u; esp -= 4; W32(esp, v); }
/* 788205: push 0xac7ebc */
  { uint32_t v = 0xac7ebcu; esp -= 4; W32(esp, v); }
/* 78820a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 78820c: call 0x971e20 */
  esp -= 4; W32(esp, 0x788211u); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 788211: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 788214: ret 4 */
  esp += 8; SPILL(); return;
}

void f_788230(void) {
  LOAD_REGS();
L_788230: /* 788230: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 788234: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 788238: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 78823c: mov dword ptr [eax], 2 */
  W32((uint32_t)(eax), 0x2u);
/* 788242: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 788245: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 788249: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 788250: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 788253: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 788256: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_788270(void) {
  LOAD_REGS();
L_788270: /* 788270: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 788274: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 788277: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 788279: je 0x78828b */
  if (zf) goto L_78828b;
L_78827b: /* 78827b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78827c: push 0xac7ec0 */
  { uint32_t v = 0xac7ec0u; esp -= 4; W32(esp, v); }
/* 788281: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 788283: call 0x971e40 */
  esp -= 4; W32(esp, 0x788288u); SPILL(); f_971e40(); if (g_unwind) return; RELOAD();
/* 788288: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_78828b: /* 78828b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7882a0(void) {
  LOAD_REGS();
L_7882a0: /* 7882a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7882a1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7882a5: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 7882a8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7882aa: jne 0x7882b8 */
  if (!zf) goto L_7882b8;
L_7882ac: /* 7882ac: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 7882af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7882b0: call dword ptr [0xb02198] */
  { uint32_t t = R32((uint32_t)(0xb02198u)); esp -= 4; W32(esp, 0x7882b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 7882b6: jmp 0x7882c3 */
  goto L_7882c3;
L_7882b8: /* 7882b8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 7882bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7882bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7882bd: call dword ptr [0xb021a0] */
  { uint32_t t = R32((uint32_t)(0xb021a0u)); esp -= 4; W32(esp, 0x7882c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_7882c3: /* 7882c3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7882c5: jne 0x7882cb */
  if (!zf) goto L_7882cb;
L_7882c7: /* 7882c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7882c8: ret 4 */
  esp += 8; SPILL(); return;
L_7882cb: /* 7882cb: inc dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x4u), r);
  }
/* 7882ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7882cf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7882f0(void) {
  LOAD_REGS();
L_7882f0: /* 7882f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7882f1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 7882f5: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 7882f8: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 7882fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7882fd: jne 0x788314 */
  if (!zf) goto L_788314;
L_7882ff: /* 7882ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 788300: push 0xac7ef8 */
  { uint32_t v = 0xac7ef8u; esp -= 4; W32(esp, v); }
/* 788305: push 0xac7f54 */
  { uint32_t v = 0xac7f54u; esp -= 4; W32(esp, v); }
/* 78830a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78830c: call 0x971e20 */
  esp -= 4; W32(esp, 0x788311u); SPILL(); f_971e20(); if (g_unwind) return; RELOAD();
/* 788311: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_788314: /* 788314: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 788318: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 78831a: je 0x78833b */
  if (zf) goto L_78833b;
L_78831c: /* 78831c: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 78831f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 788321: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 788322: jne 0x78832c */
  if (!zf) goto L_78832c;
L_788324: /* 788324: call dword ptr [0xb021a4] */
  { uint32_t t = R32((uint32_t)(0xb021a4u)); esp -= 4; W32(esp, 0x78832au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78832a: jmp 0x788332 */
  goto L_788332;
L_78832c: /* 78832c: call dword ptr [0xb021a8] */
  { uint32_t t = R32((uint32_t)(0xb021a8u)); esp -= 4; W32(esp, 0x788332u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_788332: /* 788332: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 788334: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 788336: jle 0x78833b */
  if ((zf || sf != of)) goto L_78833b;
L_788338: /* 788338: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 788339: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_78833b: /* 78833b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78833c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_788360(void) {
  LOAD_REGS();
L_788360: /* 788360: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 788364: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 788367: ret 4 */
  esp += 8; SPILL(); return;
}

void f_788380(void) {
  LOAD_REGS();
L_788380: /* 788380: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 788384: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 788387: sub eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 78838a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_7883a0(void) {
  LOAD_REGS();
L_7883a0: /* 7883a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7883a1: mov ebp, esp */
  ebp = esp;
/* 7883a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7883a5: push 0x9ccad0 */
  { uint32_t v = 0x9ccad0u; esp -= 4; W32(esp, v); }
/* 7883aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7883b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7883b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7883b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7883b9: mov eax, 0x2718 */
  eax = 0x2718u;
/* 7883be: call 0x99cc00 */
  esp -= 4; W32(esp, 0x7883c3u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 7883c3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 7883c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7883c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7883c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7883c9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7883cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7883cd: lea ecx, [ebp - 0x2728] */
  ecx = (uint32_t)(ebp + 0xffffd8d8u);
/* 7883d3: push 0xac7f58 */
  { uint32_t v = 0xac7f58u; esp -= 4; W32(esp, v); }
/* 7883d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7883d9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7883e0: call dword ptr [0xcfb054] */
  esp -= 4; W32(esp, 0x7883e6u); SPILL(); f_403ced(); if (g_unwind) return; /* MSVCR70!swprintf */ RELOAD();
/* 7883e6: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 7883eb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 7883ed: lea edx, [ebp - 0x2728] */
  edx = (uint32_t)(ebp + 0xffffd8d8u);
/* 7883f3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7883f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7883f5: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x7883fbu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 7883fb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7883fe: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 788401: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 788402: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 788403: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 78840a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78840b: mov esp, ebp */
  esp = ebp;
/* 78840d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78840e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_788411(void) {
  LOAD_REGS();
L_788411: /* 788411: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 788414: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 788419: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 78841c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78841d: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 788420: call 0x99caf8 */
  esp -= 4; W32(esp, 0x788425u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_788425(); return;
}

void f_788425(void) {
  LOAD_REGS();
L_788425: /* 788425: push 0xa09a0c */
  { uint32_t v = 0xa09a0cu; esp -= 4; W32(esp, v); }
/* 78842a: push 0xac7f60 */
  { uint32_t v = 0xac7f60u; esp -= 4; W32(esp, v); }
/* 78842f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x788435u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 788435: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 788438: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78843a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78843c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x788441u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_788441: guest_badaddr(0x788441); return;
}

void f_788480(void) {
  LOAD_REGS();
L_788480: /* 788480: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 788481: mov ebp, esp */
  ebp = esp;
/* 788483: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 788485: push 0x9ccae0 */
  { uint32_t v = 0x9ccae0u; esp -= 4; W32(esp, v); }
/* 78848a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 788490: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 788491: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 788498: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 788499: mov eax, 0x1390 */
  eax = 0x1390u;
/* 78849e: call 0x99cc00 */
  esp -= 4; W32(esp, 0x7884a3u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 7884a3: mov eax, dword ptr [0xcf2f80] */
  eax = R32((uint32_t)(0xcf2f80u));
/* 7884a8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 7884a9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 7884aa: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 7884ad: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 7884af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 7884b0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 7884b3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 7884ba: jg 0x78853d */
  if ((!zf && sf == of)) goto L_78853d;
L_7884c0: /* 7884c0: push 0x1388 */
  { uint32_t v = 0x1388u; esp -= 4; W32(esp, v); }
/* 7884c5: lea eax, [ebp - 0x13a0] */
  eax = (uint32_t)(ebp + 0xffffec60u);
/* 7884cb: push 0xac7f68 */
  { uint32_t v = 0xac7f68u; esp -= 4; W32(esp, v); }
/* 7884d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7884d1: call dword ptr [0xcfb05c] */
  esp -= 4; W32(esp, 0x7884d7u); SPILL(); f_4053f1(); if (g_unwind) return; /* MSVCR70!strncpy */ RELOAD();
/* 7884d7: mov eax, 0xac7f68 */
  eax = 0xac7f68u;
/* 7884dc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7884df: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
L_7884e2: /* 7884e2: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 7884e4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 7884e5: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 7884e7: jne 0x7884e2 */
  if (!zf) goto L_7884e2;
L_7884e9: /* 7884e9: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 7884ec: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 7884ee: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 7884f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7884f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7884f3: lea eax, [ebp + eax - 0x13a0] */
  eax = (uint32_t)(ebp + eax + 0xffffec60u);
/* 7884fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7884fb: call dword ptr [0xcfb058] */
  esp -= 4; W32(esp, 0x788501u); SPILL(); f_42b977(); if (g_unwind) return; /* MSVCR70!vsprintf */ RELOAD();
/* 788501: lea eax, [ebp - 0x13a0] */
  eax = (uint32_t)(ebp + 0xffffec60u);
/* 788507: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78850a: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* 78850d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_788510: /* 788510: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 788512: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 788513: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 788515: jne 0x788510 */
  if (!zf) goto L_788510;
L_788517: /* 788517: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 788519: mov cl, byte ptr [ebp + eax - 0x13a1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + eax + 0xffffec5fu))) & 0xffu);
/* 788520: cmp cl, 0xa */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 788523: lea eax, [ebp + eax - 0x13a1] */
  eax = (uint32_t)(ebp + eax + 0xffffec5fu);
/* 78852a: jne 0x78852f */
  if (!zf) goto L_78852f;
L_78852c: /* 78852c: mov byte ptr [eax], 0 */
  W8((uint32_t)(eax), 0x0u);
L_78852f: /* 78852f: lea ecx, [ebp - 0x13a0] */
  ecx = (uint32_t)(ebp + 0xffffec60u);
/* 788535: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 788536: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 788537: call dword ptr [0xb020fc] */
  { uint32_t t = R32((uint32_t)(0xb020fcu)); esp -= 4; W32(esp, 0x78853du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_78853d: /* 78853d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 788540: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 788541: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 788542: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 788549: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 78854a: mov esp, ebp */
  esp = ebp;
/* 78854c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 78854d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_788550(void) {
  LOAD_REGS();
L_788550: /* 788550: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 788553: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 788558: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 78855b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78855c: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 78855f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x788564u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_788564(); return;
}

void f_788564(void) {
  LOAD_REGS();
L_788564: /* 788564: push 0xa09a28 */
  { uint32_t v = 0xa09a28u; esp -= 4; W32(esp, v); }
/* 788569: push 0xac7f74 */
  { uint32_t v = 0xac7f74u; esp -= 4; W32(esp, v); }
/* 78856e: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x788574u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 788574: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 788577: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 788579: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 78857b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x788580u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_788580: guest_badaddr(0x788580); return;
}

void f_7885e0(void) {
  LOAD_REGS();
L_7885e0: /* 7885e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 7885e1: mov ebp, esp */
  ebp = esp;
/* 7885e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 7885e5: push 0x9ccaf0 */
  { uint32_t v = 0x9ccaf0u; esp -= 4; W32(esp, v); }
/* 7885ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 7885f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7885f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 7885f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7885f9: mov eax, 0x1390 */
  eax = 0x1390u;
/* 7885fe: call 0x99cc00 */
  esp -= 4; W32(esp, 0x788603u); SPILL(); f_99cc00(); if (g_unwind) return; RELOAD();
/* 788603: mov eax, dword ptr [0xcf2f80] */
  eax = R32((uint32_t)(0xcf2f80u));
/* 788608: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 788609: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78860a: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 78860d: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 78860f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 788610: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 788613: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 78861a: jg 0x7886ad */
  if ((!zf && sf == of)) goto L_7886ad;
L_788620: /* 788620: push 0x1388 */
  { uint32_t v = 0x1388u; esp -= 4; W32(esp, v); }
/* 788625: lea eax, [ebp - 0x13a0] */
  eax = (uint32_t)(ebp + 0xffffec60u);
/* 78862b: push 0xac7f7c */
  { uint32_t v = 0xac7f7cu; esp -= 4; W32(esp, v); }
/* 788630: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 788631: call dword ptr [0xcfb05c] */
  esp -= 4; W32(esp, 0x788637u); SPILL(); f_4053f1(); if (g_unwind) return; /* MSVCR70!strncpy */ RELOAD();
/* 788637: mov eax, 0xac7f7c */
  eax = 0xac7f7cu;
/* 78863c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78863f: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
L_788642: /* 788642: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 788644: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 788645: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 788647: jne 0x788642 */
  if (!zf) goto L_788642;
L_788649: /* 788649: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 78864c: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 78864e: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 788651: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 788652: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 788653: lea eax, [ebp + eax - 0x13a0] */
  eax = (uint32_t)(ebp + eax + 0xffffec60u);
/* 78865a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78865b: call dword ptr [0xcfb058] */
  esp -= 4; W32(esp, 0x788661u); SPILL(); f_42b977(); if (g_unwind) return; /* MSVCR70!vsprintf */ RELOAD();
/* 788661: lea eax, [ebp - 0x13a0] */
  eax = (uint32_t)(ebp + 0xffffec60u);
/* 788667: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78866a: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
/* 78866d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_788670: /* 788670: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 788672: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 788673: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 788675: jne 0x788670 */
  if (!zf) goto L_788670;
L_788677: /* 788677: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 788679: mov cl, byte ptr [ebp + eax - 0x13a1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + eax + 0xffffec5fu))) & 0xffu);
/* 788680: cmp cl, 0xa */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 788683: lea eax, [ebp + eax - 0x13a1] */
  eax = (uint32_t)(ebp + eax + 0xffffec5fu);
/* 78868a: jne 0x78868f */
  if (!zf) goto L_78868f;
L_78868c: /* 78868c: mov byte ptr [eax], 0 */
  W8((uint32_t)(eax), 0x0u);
L_78868f: /* 78868f: lea ecx, [ebp - 0x13a0] */
  ecx = (uint32_t)(ebp + 0xffffec60u);
/* 788695: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 788696: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 788697: call dword ptr [0xb020fc] */
  { uint32_t t = R32((uint32_t)(0xb020fcu)); esp -= 4; W32(esp, 0x78869du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 78869d: call dword ptr [0xcfa5ac] */
  esp -= 4; W32(esp, 0x7886a3u); SPILL(); f_4e10cd(); if (g_unwind) return; /* Core!?appIsDebuggerPresent@@YAHXZ */ RELOAD();
/* 7886a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 7886a5: je 0x7886ad */
  if (zf) goto L_7886ad;
L_7886a7: /* 7886a7: call dword ptr [0xcfa5a8] */
  esp -= 4; W32(esp, 0x7886adu); SPILL(); f_4e3963(); if (g_unwind) return; /* Core!?appDebugBreak@@YAXXZ */ RELOAD();
L_7886ad: /* 7886ad: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 7886b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7886b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7886b2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 7886b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 7886ba: mov esp, ebp */
  esp = ebp;
/* 7886bc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 7886bd: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_7886c0(void) {
  LOAD_REGS();
L_7886c0: /* 7886c0: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 7886c3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 7886c8: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 7886cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7886cc: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 7886cf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7886d4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_7886d4(); return;
}

void f_7886d4(void) {
  LOAD_REGS();
L_7886d4: /* 7886d4: push 0xa09a50 */
  { uint32_t v = 0xa09a50u; esp -= 4; W32(esp, v); }
/* 7886d9: push 0xac7f88 */
  { uint32_t v = 0xac7f88u; esp -= 4; W32(esp, v); }
/* 7886de: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x7886e4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 7886e4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7886e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7886e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 7886eb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x7886f0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_7886f0: guest_badaddr(0x7886f0); return;
}

void f_788750(void) {
  LOAD_REGS();
L_788750: /* 788750: sub esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 788753: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 788757: fld dword ptr [0xa099e8] */
  { double v = F32((uint32_t)(0xa099e8u)); FPUSH(v); }
/* 78875d: fmul dword ptr [eax + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x30u)));
/* 788760: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 788763: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 788766: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 788767: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 78876b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 78876c: fld dword ptr [0xa099e8] */
  { double v = F32((uint32_t)(0xa099e8u)); FPUSH(v); }
/* 788772: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 788776: fmul dword ptr [eax + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x34u)));
/* 788779: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 78877b: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 78877f: lea edx, [esp + 8] */
  edx = (uint32_t)(esp + 0x8u);
/* 788783: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 788787: fld dword ptr [0xa099e8] */
  { double v = F32((uint32_t)(0xa099e8u)); FPUSH(v); }
/* 78878d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 78878e: fmul dword ptr [eax + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x38u)));
/* 788791: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* 788795: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 788799: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* 78879d: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 7887a1: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* 7887a4: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 7887a8: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* 7887ab: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 7887af: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 7887b2: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 7887b6: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* 7887b9: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 7887bd: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 7887c0: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 7887c4: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 7887c7: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* 7887cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 7887cc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 7887cd: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 7887d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 7887d2: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* 7887d6: call dword ptr [0xcfa5b0] */
  esp -= 4; W32(esp, 0x7887dcu); SPILL(); f_4e317f(); if (g_unwind) return; /* Core!??0FCoords@@QAE@ABVFVector@@000@Z */ RELOAD();
/* 7887dc: mov edi, dword ptr [esp + 0x6c] */
  edi = R32((uint32_t)(esp + 0x6cu));
/* 7887e0: mov ecx, 0xc */
  ecx = 0xcu;
/* 7887e5: mov esi, eax */
  esi = eax;
/* 7887e7: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 7887e9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 7887ea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 7887eb: add esp, 0x60 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x60u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7887ee: ret  */
  esp += 4; SPILL(); return;
}

void f_788820(void) {
  LOAD_REGS();
L_788820: /* 788820: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 788823: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 788827: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 788828: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 78882c: mov dword ptr [esp + 4], 0 */
  W32((uint32_t)(esp + 0x4u), 0x0u);
/* 788834: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 78883c: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* 788844: call dword ptr [0xcfa520] */
  esp -= 4; W32(esp, 0x78884au); SPILL(); f_4e3cc9(); if (g_unwind) return; /* Core!??0FCoords@@QAE@ABVFVector@@@Z */ RELOAD();
/* 78884a: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 78884e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78884f: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 788853: call dword ptr [0xcfa51c] */
  esp -= 4; W32(esp, 0x788859u); SPILL(); f_4e13e8(); if (g_unwind) return; /* Core!??XFCoords@@QAEAAV0@ABVFRotator@@@Z */ RELOAD();
/* 788859: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 78885d: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 788861: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 788865: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 788867: fld dword ptr [0xa099e4] */
  { double v = F32((uint32_t)(0xa099e4u)); FPUSH(v); }
/* 78886d: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* 788871: fmul dword ptr [esp + 0x44] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x44u)));
/* 788875: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 788878: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 78887c: mov dword ptr [eax + 0x10], edx */
  W32((uint32_t)(eax + 0x10u), edx);
/* 78887f: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* 788883: fstp dword ptr [eax + 0x30] */
  WF32((uint32_t)(eax + 0x30u), ST0); FPOP();
/* 788886: fld dword ptr [0xa099e4] */
  { double v = F32((uint32_t)(0xa099e4u)); FPUSH(v); }
/* 78888c: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 78888f: fmul dword ptr [esp + 0x48] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x48u)));
/* 788893: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* 788897: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* 78889a: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 78889e: fstp dword ptr [eax + 0x34] */
  WF32((uint32_t)(eax + 0x34u), ST0); FPOP();
/* 7888a1: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* 7888a4: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* 7888a8: fld dword ptr [0xa099e4] */
  { double v = F32((uint32_t)(0xa099e4u)); FPUSH(v); }
/* 7888ae: fmul dword ptr [esp + 0x4c] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x4cu)));
/* 7888b2: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 7888b5: xor ecx, ecx */
  ecx = 0;
/* 7888b7: mov dword ptr [eax + 0x24], edx */
  W32((uint32_t)(eax + 0x24u), edx);
/* 7888ba: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 7888be: fstp dword ptr [eax + 0x38] */
  WF32((uint32_t)(eax + 0x38u), ST0); FPOP();
/* 7888c1: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 7888c4: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
/* 7888c7: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
/* 7888ca: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 7888cd: mov dword ptr [eax + 0x3c], 0x3f800000 */
  W32((uint32_t)(eax + 0x3cu), 0x3f800000u);
/* 7888d4: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 7888d7: ret  */
  esp += 4; SPILL(); return;
}

void f_788910(void) {
  LOAD_REGS();
L_788910: /* 788910: fld dword ptr [0xa099e8] */
  { double v = F32((uint32_t)(0xa099e8u)); FPUSH(v); }
/* 788916: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 78891a: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 78891d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78891e: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* 788922: fmul dword ptr [esi + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x30u)));
/* 788925: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 788929: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 78892b: fld dword ptr [0xa099e8] */
  { double v = F32((uint32_t)(0xa099e8u)); FPUSH(v); }
/* 788931: fmul dword ptr [esi + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x34u)));
/* 788934: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 788937: fld dword ptr [0xa099e8] */
  { double v = F32((uint32_t)(0xa099e8u)); FPUSH(v); }
/* 78893d: fmul dword ptr [esi + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x38u)));
/* 788940: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 788943: call dword ptr [0xcfa434] */
  esp -= 4; W32(esp, 0x788949u); SPILL(); f_4e125d(); if (g_unwind) return; /* Core!??0FCoords@@QAE@XZ */ RELOAD();
/* 788949: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* 78894d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 78894e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 78894f: call 0x6c759a */
  esp -= 4; W32(esp, 0x788954u); SPILL(); f_6c759a(); if (g_unwind) return; RELOAD();
/* 788954: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 788957: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 78895b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 78895c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 788960: call dword ptr [0xcfa568] */
  esp -= 4; W32(esp, 0x788966u); SPILL(); f_4e1a69(); if (g_unwind) return; /* Core!?OrthoRotation@FCoords@@QBE?AVFRotator@@XZ */ RELOAD();
/* 788966: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 788968: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 78896c: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 78896e: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 788971: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 788974: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 788977: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 78897a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 78897b: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 78897e: ret  */
  esp += 4; SPILL(); return;
}

void f_7889a0(void) {
  LOAD_REGS();
L_7889a0: /* 7889a0: fld dword ptr [0xa099e4] */
  { double v = F32((uint32_t)(0xa099e4u)); FPUSH(v); }
/* 7889a6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 7889aa: fmul dword ptr [esp + 8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x8u)));
/* 7889ae: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 7889b0: fld dword ptr [0xa099e4] */
  { double v = F32((uint32_t)(0xa099e4u)); FPUSH(v); }
/* 7889b6: fmul dword ptr [esp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xcu)));
/* 7889ba: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 7889bd: fld dword ptr [0xa099e4] */
  { double v = F32((uint32_t)(0xa099e4u)); FPUSH(v); }
/* 7889c3: fmul dword ptr [esp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x10u)));
/* 7889c7: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 7889ca: ret  */
  esp += 4; SPILL(); return;
}

void f_7889e0(void) {
  LOAD_REGS();
L_7889e0: /* 7889e0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 7889e4: fld dword ptr [0xa099e8] */
  { double v = F32((uint32_t)(0xa099e8u)); FPUSH(v); }
/* 7889ea: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 7889ec: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 7889f0: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 7889f2: fld dword ptr [0xa099e8] */
  { double v = F32((uint32_t)(0xa099e8u)); FPUSH(v); }
/* 7889f8: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 7889fb: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* 7889fe: fld dword ptr [0xa099e8] */
  { double v = F32((uint32_t)(0xa099e8u)); FPUSH(v); }
/* 788a04: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 788a07: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* 788a0a: ret  */
  esp += 4; SPILL(); return;
}

void f_788a20(void) {
  LOAD_REGS();
L_788a20: /* 788a20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 788a24: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 788a28: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 788a2c: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 788a2e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 788a32: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 788a35: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 788a38: ret  */
  esp += 4; SPILL(); return;
}

void f_788a50(void) {
  LOAD_REGS();
L_788a50: /* 788a50: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 788a54: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 788a56: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 788a5a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 788a5c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 788a5f: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 788a62: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 788a65: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 788a68: ret  */
  esp += 4; SPILL(); return;
}

void f_788a80(void) {
  LOAD_REGS();
L_788a80: /* 788a80: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 788a84: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 788a86: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 788a8a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 788a8c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 788a8f: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 788a92: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 788a95: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 788a98: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 788a9b: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 788a9e: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 788aa1: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 788aa4: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 788aa7: mov dword ptr [ecx + 0x14], edx */
  W32((uint32_t)(ecx + 0x14u), edx);
/* 788aaa: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 788aad: mov dword ptr [ecx + 0x18], edx */
  W32((uint32_t)(ecx + 0x18u), edx);
/* 788ab0: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 788ab3: mov dword ptr [ecx + 0x1c], edx */
  W32((uint32_t)(ecx + 0x1cu), edx);
/* 788ab6: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 788ab9: mov dword ptr [ecx + 0x20], edx */
  W32((uint32_t)(ecx + 0x20u), edx);
/* 788abc: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
/* 788abf: mov dword ptr [ecx + 0x24], edx */
  W32((uint32_t)(ecx + 0x24u), edx);
/* 788ac2: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 788ac5: mov dword ptr [ecx + 0x28], edx */
  W32((uint32_t)(ecx + 0x28u), edx);
/* 788ac8: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 788acb: mov dword ptr [ecx + 0x2c], edx */
  W32((uint32_t)(ecx + 0x2cu), edx);
/* 788ace: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 788ad1: mov dword ptr [ecx + 0x30], edx */
  W32((uint32_t)(ecx + 0x30u), edx);
/* 788ad4: mov edx, dword ptr [eax + 0x34] */
  edx = R32((uint32_t)(eax + 0x34u));
/* 788ad7: mov dword ptr [ecx + 0x34], edx */
  W32((uint32_t)(ecx + 0x34u), edx);
/* 788ada: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 788add: mov dword ptr [ecx + 0x38], edx */
  W32((uint32_t)(ecx + 0x38u), edx);
/* 788ae0: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 788ae3: mov dword ptr [ecx + 0x3c], eax */
  W32((uint32_t)(ecx + 0x3cu), eax);
/* 788ae6: ret  */
  esp += 4; SPILL(); return;
}

void f_788b10(void) {
  LOAD_REGS();
L_788b10: /* 788b10: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 788b14: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 788b16: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 788b1a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 788b1c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 788b1f: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 788b22: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 788b25: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 788b28: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 788b2b: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 788b2e: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 788b31: mov dword ptr [ecx + 0x10], edx */
  W32((uint32_t)(ecx + 0x10u), edx);
/* 788b34: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 788b37: mov dword ptr [ecx + 0x14], edx */
  W32((uint32_t)(ecx + 0x14u), edx);
/* 788b3a: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 788b3d: mov dword ptr [ecx + 0x18], edx */
  W32((uint32_t)(ecx + 0x18u), edx);
/* 788b40: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* 788b43: mov dword ptr [ecx + 0x1c], edx */
  W32((uint32_t)(ecx + 0x1cu), edx);
/* 788b46: mov edx, dword ptr [eax + 0x20] */
  edx = R32((uint32_t)(eax + 0x20u));
/* 788b49: mov dword ptr [ecx + 0x20], edx */
  W32((uint32_t)(ecx + 0x20u), edx);
/* 788b4c: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
/* 788b4f: mov dword ptr [ecx + 0x24], edx */
  W32((uint32_t)(ecx + 0x24u), edx);
/* 788b52: mov edx, dword ptr [eax + 0x28] */
  edx = R32((uint32_t)(eax + 0x28u));
/* 788b55: mov dword ptr [ecx + 0x28], edx */
  W32((uint32_t)(ecx + 0x28u), edx);
/* 788b58: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 788b5b: mov dword ptr [ecx + 0x2c], edx */
  W32((uint32_t)(ecx + 0x2cu), edx);
/* 788b5e: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 788b61: mov dword ptr [ecx + 0x30], edx */
  W32((uint32_t)(ecx + 0x30u), edx);
/* 788b64: mov edx, dword ptr [eax + 0x34] */
  edx = R32((uint32_t)(eax + 0x34u));
/* 788b67: mov dword ptr [ecx + 0x34], edx */
  W32((uint32_t)(ecx + 0x34u), edx);
/* 788b6a: mov edx, dword ptr [eax + 0x38] */
  edx = R32((uint32_t)(eax + 0x38u));
/* 788b6d: mov dword ptr [ecx + 0x38], edx */
  W32((uint32_t)(ecx + 0x38u), edx);
/* 788b70: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 788b73: mov dword ptr [ecx + 0x3c], eax */
  W32((uint32_t)(ecx + 0x3cu), eax);
/* 788b76: ret  */
  esp += 4; SPILL(); return;
}
