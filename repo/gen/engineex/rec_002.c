#include "recomp.h"
#include "rec_mod.h"

void f_d5f500(void) {
  LOAD_REGS();
L_d5f500: /* d5f500: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d5f504: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5f505: mov esi, ecx */
  esi = ecx;
/* d5f507: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d5f50a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5f50c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5f50d: je 0xd5f51b */
  if (zf) goto L_d5f51b;
L_d5f50f: /* d5f50f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d5f512: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d5f514: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* d5f517: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5f519: jne 0xd5f51f */
  if (!zf) goto L_d5f51f;
L_d5f51b: /* d5f51b: xor edi, edi */
  edi = 0;
/* d5f51d: jmp 0xd5f526 */
  goto L_d5f526;
L_d5f51f: /* d5f51f: mov edi, edx */
  edi = edx;
/* d5f521: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* d5f523: sar edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
L_d5f526: /* d5f526: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* d5f52a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5f52b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d5f52d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5f52e: mov eax, esp */
  eax = esp;
/* d5f530: mov ecx, esi */
  ecx = esi;
/* d5f532: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d5f534: call 0xd5103c */
  esp -= 4; W32(esp, 0xd5f539u); SPILL(); f_d5103c(); if (g_unwind) return; RELOAD();
/* d5f539: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d5f53c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* d5f540: lea edx, [ecx + edi*4] */
  edx = (uint32_t)(ecx + edi*4);
/* d5f543: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5f544: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d5f546: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5f547: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d5f570(void) {
  LOAD_REGS();
L_d5f570: /* d5f570: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5f571: mov esi, ecx */
  esi = ecx;
/* d5f573: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d5f576: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5f578: je 0xd5f583 */
  if (zf) goto L_d5f583;
L_d5f57a: /* d5f57a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5f57b: call 0xd51415 */
  esp -= 4; W32(esp, 0xd5f580u); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d5f580: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d5f583: /* d5f583: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* d5f58a: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* d5f591: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* d5f598: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5f599: ret  */
  esp += 4; SPILL(); return;
}

void f_d5f5b0(void) {
  LOAD_REGS();
L_d5f5b0: /* d5f5b0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* d5f5b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5f5b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5f5b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5f5b7: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* d5f5bb: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5f5bd: je 0xd5f5d9 */
  if (zf) goto L_d5f5d9;
L_d5f5bf: /* d5f5bf: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* d5f5c2: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5f5c4: mov edx, edi */
  edx = edi;
/* d5f5c6: je 0xd5f5d6 */
  if (zf) goto L_d5f5d6;
L_d5f5c8: /* d5f5c8: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* d5f5ca: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* d5f5cc: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5f5cf: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d5f5d2: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5f5d4: jne 0xd5f5c8 */
  if (!zf) goto L_d5f5c8;
L_d5f5d6: /* d5f5d6: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
L_d5f5d9: /* d5f5d9: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d5f5dd: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* d5f5df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5f5e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5f5e1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5f5e2: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d5f600(void) {
  LOAD_REGS();
L_d5f600: /* d5f600: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5f601: mov esi, ecx */
  esi = ecx;
/* d5f603: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d5f606: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* d5f609: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5f60a: mov ecx, esi */
  ecx = esi;
/* d5f60c: call 0xd51a3c */
  esp -= 4; W32(esp, 0xd5f611u); SPILL(); f_d51a3c(); if (g_unwind) return; RELOAD();
/* d5f611: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d5f614: mov dword ptr [eax + 4], eax */
  W32((uint32_t)(eax + 0x4u), eax);
/* d5f617: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d5f61a: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* d5f621: mov dword ptr [eax], eax */
  W32((uint32_t)(eax), eax);
/* d5f623: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* d5f626: mov dword ptr [esi + 8], esi */
  W32((uint32_t)(esi + 0x8u), esi);
/* d5f629: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5f62a: ret  */
  esp += 4; SPILL(); return;
}

void f_d5f640(void) {
  LOAD_REGS();
L_d5f640: /* d5f640: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5f641: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* d5f645: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* d5f648: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5f649: mov esi, ecx */
  esi = ecx;
/* d5f64b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* d5f64e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5f64f: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* d5f652: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5f653: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5f654: mov ecx, esi */
  ecx = esi;
/* d5f656: call 0xd51721 */
  esp -= 4; W32(esp, 0xd5f65bu); SPILL(); f_d51721(); if (g_unwind) return; RELOAD();
/* d5f65b: mov dword ptr [edi + 4], eax */
  W32((uint32_t)(edi + 0x4u), eax);
/* d5f65e: mov edx, dword ptr [ebx + 8] */
  edx = R32((uint32_t)(ebx + 0x8u));
/* d5f661: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* d5f664: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* d5f667: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* d5f66a: mov cl, byte ptr [eax + 0x45] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x45u))) & 0xffu);
/* d5f66d: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5f66f: jne 0xd5f6b5 */
  if (!zf) goto L_d5f6b5;
L_d5f671: /* d5f671: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5f673: mov bl, byte ptr [ecx + 0x45] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x45u))) & 0xffu);
/* d5f676: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5f678: jne 0xd5f68b */
  if (!zf) goto L_d5f68b;
L_d5f67a: /* d5f67a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_d5f680: /* d5f680: mov eax, ecx */
  eax = ecx;
/* d5f682: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5f684: mov bl, byte ptr [ecx + 0x45] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x45u))) & 0xffu);
/* d5f687: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5f689: je 0xd5f680 */
  if (zf) goto L_d5f680;
L_d5f68b: /* d5f68b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* d5f68d: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* d5f690: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d5f693: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* d5f696: mov dl, byte ptr [eax + 0x45] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x45u))) & 0xffu);
/* d5f699: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5f69b: jne 0xd5f6ac */
  if (!zf) goto L_d5f6ac;
L_d5f69d: /* d5f69d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_d5f6a0: /* d5f6a0: mov ecx, eax */
  ecx = eax;
/* d5f6a2: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* d5f6a5: mov dl, byte ptr [eax + 0x45] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x45u))) & 0xffu);
/* d5f6a8: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5f6aa: je 0xd5f6a0 */
  if (zf) goto L_d5f6a0;
L_d5f6ac: /* d5f6ac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5f6ad: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* d5f6b0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5f6b1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5f6b2: ret 4 */
  esp += 8; SPILL(); return;
L_d5f6b5: /* d5f6b5: mov dword ptr [edx], edx */
  W32((uint32_t)(edx), edx);
/* d5f6b7: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* d5f6ba: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5f6bb: mov dword ptr [esi + 8], esi */
  W32((uint32_t)(esi + 0x8u), esi);
/* d5f6be: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5f6bf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5f6c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5f700(void) {
  LOAD_REGS();
L_d5f700: /* d5f700: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d5f702: push 0xd657f9 */
  { uint32_t v = 0xd657f9u; esp -= 4; W32(esp, v); }
/* d5f707: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d5f70d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5f70e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d5f715: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5f716: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5f717: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5f718: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* d5f71c: mov edi, dword ptr [eax + 0x3c] */
  edi = R32((uint32_t)(eax + 0x3cu));
/* d5f71f: lea esi, [eax + 0x38] */
  esi = (uint32_t)(eax + 0x38u);
/* d5f722: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* d5f726: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5f727: mov ecx, esi */
  ecx = esi;
/* d5f729: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* d5f731: call 0xd51078 */
  esp -= 4; W32(esp, 0xd5f736u); SPILL(); f_d51078(); if (g_unwind) return; RELOAD();
/* d5f736: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5f739: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* d5f73d: je 0xd5f75b */
  if (zf) goto L_d5f75b;
L_d5f73f: /* d5f73f: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d5f742: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5f743: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* d5f747: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5f748: call dword ptr [0xd7a5a4] */
  esp -= 4; W32(esp, 0xd5f74eu); SPILL(); f_4727d1(); if (g_unwind) return; /* MSVCP70!??Mstd@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z */ RELOAD();
/* d5f74e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5f751: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5f753: jne 0xd5f75b */
  if (!zf) goto L_d5f75b;
L_d5f755: /* d5f755: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* d5f759: jmp 0xd5f766 */
  goto L_d5f766;
L_d5f75b: /* d5f75b: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* d5f75e: mov dword ptr [esp + 8], edx */
  W32((uint32_t)(esp + 0x8u), edx);
/* d5f762: lea eax, [esp + 8] */
  eax = (uint32_t)(esp + 0x8u);
L_d5f766: /* d5f766: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5f768: jne 0xd5f794 */
  if (!zf) goto L_d5f794;
L_d5f76a: /* d5f76a: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* d5f76e: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* d5f776: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd5f77cu); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d5f77c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5f77d: mov eax, 0xd6c2f2 */
  eax = 0xd6c2f2u;
/* d5f782: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5f783: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d5f787: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d5f78e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5f791: ret 0x20 */
  esp += 36; SPILL(); return;
L_d5f794: /* d5f794: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* d5f798: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5f799: mov ecx, esi */
  ecx = esi;
/* d5f79b: call 0xd511ea */
  esp -= 4; W32(esp, 0xd5f7a0u); SPILL(); f_d511ea(); if (g_unwind) return; RELOAD();
/* d5f7a0: cmp dword ptr [eax + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5f7a4: jb 0xd5f7ab */
  if (cf) goto L_d5f7ab;
L_d5f7a6: /* d5f7a6: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* d5f7a9: jmp 0xd5f7ae */
  goto L_d5f7ae;
L_d5f7ab: /* d5f7ab: lea esi, [eax + 4] */
  esi = (uint32_t)(eax + 0x4u);
L_d5f7ae: /* d5f7ae: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* d5f7b2: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* d5f7ba: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd5f7c0u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d5f7c0: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* d5f7c4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5f7c5: mov eax, esi */
  eax = esi;
/* d5f7c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5f7c8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d5f7cf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5f7d2: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_d5f820(void) {
  LOAD_REGS();
L_d5f820: /* d5f820: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d5f826: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d5f828: push 0xd65822 */
  { uint32_t v = 0xd65822u; esp -= 4; W32(esp, v); }
/* d5f82d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5f82e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d5f835: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5f836: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5f837: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* d5f83b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d5f83d: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* d5f845: jl 0xd5f888 */
  if ((sf != of)) goto L_d5f888;
L_d5f847: /* d5f847: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* d5f84a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5f84c: je 0xd5f888 */
  if (zf) goto L_d5f888;
L_d5f84e: /* d5f84e: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* d5f851: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d5f853: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d5f858: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d5f85a: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d5f85d: mov eax, edx */
  eax = edx;
/* d5f85f: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d5f862: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d5f864: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5f866: jae 0xd5f888 */
  if (!cf) goto L_d5f888;
L_d5f868: /* d5f868: lea ecx, [edi + edi*8] */
  ecx = (uint32_t)(edi + edi*8);
/* d5f86b: lea eax, [esi + ecx*8] */
  eax = (uint32_t)(esi + ecx*8);
/* d5f86e: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* d5f872: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5f873: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* d5f877: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5f878: lea ecx, [eax + 0x38] */
  ecx = (uint32_t)(eax + 0x38u);
/* d5f87b: call 0xd511ea */
  esp -= 4; W32(esp, 0xd5f880u); SPILL(); f_d511ea(); if (g_unwind) return; RELOAD();
/* d5f880: mov ecx, eax */
  ecx = eax;
/* d5f882: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd5f888u); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
L_d5f888: /* d5f888: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* d5f88c: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* d5f891: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd5f897u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d5f897: lea ecx, [esp + 0x38] */
  ecx = (uint32_t)(esp + 0x38u);
/* d5f89b: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* d5f8a3: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd5f8a9u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d5f8a9: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d5f8ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5f8ae: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d5f8b5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5f8b6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5f8b9: ret 0x3c */
  esp += 64; SPILL(); return;
}

void f_d5f8f0(void) {
  LOAD_REGS();
L_d5f8f0: /* d5f8f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d5f8f2: push 0xd6587c */
  { uint32_t v = 0xd6587cu; esp -= 4; W32(esp, v); }
/* d5f8f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d5f8fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5f8fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d5f905: sub esp, 0x510 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x510u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d5f90b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5f90c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d5f90d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5f90e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5f90f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d5f911: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* d5f915: call dword ptr [0xd7a538] */
  esp -= 4; W32(esp, 0xd5f91bu); SPILL(); f_482320(); if (g_unwind) return; /* MSVCP70!??0?$basic_ifstream@DU?$char_traits@D@std@@@std@@QAE@XZ */ RELOAD();
/* d5f91b: mov ebp, dword ptr [esp + 0x530] */
  ebp = R32((uint32_t)(esp + 0x530u));
/* d5f922: push 0xd6c2cc */
  { uint32_t v = 0xd6c2ccu; esp -= 4; W32(esp, v); }
/* d5f927: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* d5f92a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5f92b: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* d5f92f: xor edi, edi */
  edi = 0;
/* d5f931: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5f932: mov dword ptr [esp + 0x534], edi */
  W32((uint32_t)(esp + 0x534u), edi);
/* d5f939: call 0xd641b2 */
  esp -= 4; W32(esp, 0xd5f93eu); SPILL(); f_d641b2(); if (g_unwind) return; RELOAD();
/* d5f93e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5f941: cmp dword ptr [esp + 0x2c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5f946: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* d5f94a: mov byte ptr [esp + 0x528], 1 */
  W8((uint32_t)(esp + 0x528u), 0x1u);
/* d5f952: jae 0xd5f958 */
  if (!cf) goto L_d5f958;
L_d5f954: /* d5f954: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
L_d5f958: /* d5f958: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d5f95a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5f95b: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* d5f95f: call dword ptr [0xd7a534] */
  esp -= 4; W32(esp, 0xd5f965u); SPILL(); f_4851ca(); if (g_unwind) return; /* MSVCP70!?open@?$basic_ifstream@DU?$char_traits@D@std@@@std@@QAEXPBDH@Z */ RELOAD();
/* d5f965: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* d5f969: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* d5f96c: mov eax, dword ptr [esp + eax + 0x50] */
  eax = R32((uint32_t)(esp + eax + 0x50u));
/* d5f970: test al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5f972: jne 0xd5fb82 */
  if (!zf) goto L_d5fb82;
L_d5f978: /* d5f978: mov ecx, eax */
  ecx = eax;
/* d5f97a: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* d5f97d: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5f980: jne 0xd5fb82 */
  if (!zf) goto L_d5fb82;
L_d5f986: /* d5f986: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5f988: jne 0xd5fb82 */
  if (!zf) goto L_d5fb82;
L_d5f98e: /* d5f98e: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* d5f992: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5f993: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* d5f997: call dword ptr [0xd7a554] */
  esp -= 4; W32(esp, 0xd5f99du); SPILL(); f_474057(); if (g_unwind) return; /* MSVCP70!??5?$basic_istream@DU?$char_traits@D@std@@@std@@QAEAAV01@AAH@Z */ RELOAD();
/* d5f99d: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* d5f9a1: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* d5f9a4: mov eax, dword ptr [esp + ecx + 0x50] */
  eax = R32((uint32_t)(esp + ecx + 0x50u));
/* d5f9a8: test al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5f9aa: jne 0xd5fb78 */
  if (!zf) goto L_d5fb78;
L_d5f9b0: /* d5f9b0: mov edx, eax */
  edx = eax;
/* d5f9b2: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* d5f9b5: test dl, 1 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5f9b8: jne 0xd5fb78 */
  if (!zf) goto L_d5fb78;
L_d5f9be: /* d5f9be: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5f9c0: jne 0xd5fb78 */
  if (!zf) goto L_d5fb78;
L_d5f9c6: /* d5f9c6: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* d5f9cb: lea eax, [esp + 0x124] */
  eax = (uint32_t)(esp + 0x124u);
/* d5f9d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5f9d3: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* d5f9d7: call dword ptr [0xd7a558] */
  esp -= 4; W32(esp, 0xd5f9ddu); SPILL(); f_47c24c(); if (g_unwind) return; /* MSVCP70!?getline@?$basic_istream@DU?$char_traits@D@std@@@std@@QAEAAV12@PADH@Z */ RELOAD();
/* d5f9dd: cmp dword ptr [esp + 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d5f9e1: jle 0xd5fb25 */
  if ((zf || sf != of)) goto L_d5fb25;
L_d5f9e7: /* d5f9e7: mov bl, 3 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x3u) & 0xffu);
/* d5f9e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_d5f9f0: /* d5f9f0: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* d5f9f5: lea ecx, [esp + 0x124] */
  ecx = (uint32_t)(esp + 0x124u);
/* d5f9fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5f9fd: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* d5fa01: call dword ptr [0xd7a558] */
  esp -= 4; W32(esp, 0xd5fa07u); SPILL(); f_47c24c(); if (g_unwind) return; /* MSVCP70!?getline@?$basic_istream@DU?$char_traits@D@std@@@std@@QAEAAV12@PADH@Z */ RELOAD();
/* d5fa07: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* d5fa0b: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* d5fa0e: mov eax, dword ptr [esp + eax + 0x50] */
  eax = R32((uint32_t)(esp + eax + 0x50u));
/* d5fa12: test al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5fa14: jne 0xd5fb78 */
  if (!zf) goto L_d5fb78;
L_d5fa1a: /* d5fa1a: mov ecx, eax */
  ecx = eax;
/* d5fa1c: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* d5fa1f: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5fa22: jne 0xd5fb78 */
  if (!zf) goto L_d5fb78;
L_d5fa28: /* d5fa28: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5fa2a: jne 0xd5fb78 */
  if (!zf) goto L_d5fb78;
L_d5fa30: /* d5fa30: lea edx, [esp + 0x120] */
  edx = (uint32_t)(esp + 0x120u);
/* d5fa37: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5fa38: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* d5fa3c: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd5fa42u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d5fa42: mov eax, 0xd77f08 */
  eax = 0xd77f08u;
/* d5fa47: mov byte ptr [esp + 0x528], 2 */
  W8((uint32_t)(esp + 0x528u), 0x2u);
/* d5fa4f: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
L_d5fa52: /* d5fa52: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* d5fa54: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d5fa55: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5fa57: jne 0xd5fa52 */
  if (!zf) goto L_d5fa52;
L_d5fa59: /* d5fa59: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d5fa5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5fa5c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5fa5e: push 0xd77f08 */
  { uint32_t v = 0xd77f08u; esp -= 4; W32(esp, v); }
/* d5fa63: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* d5fa67: call dword ptr [0xd7a55c] */
  esp -= 4; W32(esp, 0xd5fa6du); SPILL(); f_4653a2(); if (g_unwind) return; /* MSVCP70!?find_first_of@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBEIPBDII@Z */ RELOAD();
/* d5fa6d: mov esi, eax */
  esi = eax;
/* d5fa6f: mov eax, dword ptr [0xd7a560] */
  eax = R32((uint32_t)(0xd7a560u));
/* d5fa74: cmp esi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5fa76: je 0xd5fb5a */
  if (zf) goto L_d5fb5a;
L_d5fa7c: /* d5fa7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5fa7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d5fa7f: lea ecx, [esp + 0x10c] */
  ecx = (uint32_t)(esp + 0x10cu);
/* d5fa86: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5fa87: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* d5fa8b: call dword ptr [0xd7a564] */
  esp -= 4; W32(esp, 0xd5fa91u); SPILL(); f_4676a5(); if (g_unwind) return; /* MSVCP70!?substr@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBE?AV12@II@Z */ RELOAD();
/* d5fa91: mov edx, dword ptr [0xd7a560] */
  edx = R32((uint32_t)(0xd7a560u));
/* d5fa97: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* d5fa99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5fa9a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* d5fa9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5fa9c: lea ecx, [esp + 0xf0] */
  ecx = (uint32_t)(esp + 0xf0u);
/* d5faa3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5faa4: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* d5faa8: mov byte ptr [esp + 0x534], bl */
  W8((uint32_t)(esp + 0x534u), (ebx & 0xffu));
/* d5faaf: call dword ptr [0xd7a564] */
  esp -= 4; W32(esp, 0xd5fab5u); SPILL(); f_4676a5(); if (g_unwind) return; /* MSVCP70!?substr@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBE?AV12@II@Z */ RELOAD();
/* d5fab5: lea edx, [esp + 0xe8] */
  edx = (uint32_t)(esp + 0xe8u);
/* d5fabc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5fabd: lea eax, [esp + 0x108] */
  eax = (uint32_t)(esp + 0x108u);
/* d5fac4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5fac5: lea ecx, [ebp + 0x38] */
  ecx = (uint32_t)(ebp + 0x38u);
/* d5fac8: mov byte ptr [esp + 0x530], 4 */
  W8((uint32_t)(esp + 0x530u), 0x4u);
/* d5fad0: call 0xd511ea */
  esp -= 4; W32(esp, 0xd5fad5u); SPILL(); f_d511ea(); if (g_unwind) return; RELOAD();
/* d5fad5: mov ecx, eax */
  ecx = eax;
/* d5fad7: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd5faddu); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d5fadd: lea ecx, [esp + 0xe8] */
  ecx = (uint32_t)(esp + 0xe8u);
/* d5fae4: mov byte ptr [esp + 0x528], bl */
  W8((uint32_t)(esp + 0x528u), (ebx & 0xffu));
/* d5faeb: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd5faf1u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d5faf1: lea ecx, [esp + 0x104] */
  ecx = (uint32_t)(esp + 0x104u);
/* d5faf8: mov byte ptr [esp + 0x528], 2 */
  W8((uint32_t)(esp + 0x528u), 0x2u);
/* d5fb00: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd5fb06u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d5fb06: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* d5fb0a: mov byte ptr [esp + 0x528], 1 */
  W8((uint32_t)(esp + 0x528u), 0x1u);
/* d5fb12: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd5fb18u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d5fb18: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d5fb1c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* d5fb1d: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d5fb1f: jl 0xd5f9f0 */
  if ((sf != of)) goto L_d5f9f0;
L_d5fb25: /* d5fb25: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* d5fb29: call dword ptr [0xd7a568] */
  esp -= 4; W32(esp, 0xd5fb2fu); SPILL(); f_480c39(); if (g_unwind) return; /* MSVCP70!?close@?$basic_ifstream@DU?$char_traits@D@std@@@std@@QAEXXZ */ RELOAD();
/* d5fb2f: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d5fb33: mov byte ptr [esp + 0x528], 0 */
  W8((uint32_t)(esp + 0x528u), 0x0u);
/* d5fb3b: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd5fb41u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d5fb41: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* d5fb45: mov dword ptr [esp + 0x528], 0xffffffff */
  W32((uint32_t)(esp + 0x528u), 0xffffffffu);
/* d5fb50: call dword ptr [0xd7a56c] */
  esp -= 4; W32(esp, 0xd5fb56u); SPILL(); f_484f0d(); if (g_unwind) return; /* MSVCP70!??_D?$basic_ifstream@DU?$char_traits@D@std@@@std@@QAEXXZ */ RELOAD();
/* d5fb56: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* d5fb58: jmp 0xd5fbab */
  goto L_d5fbab;
L_d5fb5a: /* d5fb5a: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* d5fb5e: call dword ptr [0xd7a568] */
  esp -= 4; W32(esp, 0xd5fb64u); SPILL(); f_480c39(); if (g_unwind) return; /* MSVCP70!?close@?$basic_ifstream@DU?$char_traits@D@std@@@std@@QAEXXZ */ RELOAD();
/* d5fb64: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* d5fb68: mov byte ptr [esp + 0x528], 1 */
  W8((uint32_t)(esp + 0x528u), 0x1u);
/* d5fb70: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd5fb76u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d5fb76: jmp 0xd5fb82 */
  goto L_d5fb82;
L_d5fb78: /* d5fb78: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* d5fb7c: call dword ptr [0xd7a568] */
  esp -= 4; W32(esp, 0xd5fb82u); SPILL(); f_480c39(); if (g_unwind) return; /* MSVCP70!?close@?$basic_ifstream@DU?$char_traits@D@std@@@std@@QAEXXZ */ RELOAD();
L_d5fb82: /* d5fb82: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d5fb86: mov byte ptr [esp + 0x528], 0 */
  W8((uint32_t)(esp + 0x528u), 0x0u);
/* d5fb8e: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd5fb94u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d5fb94: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* d5fb98: mov dword ptr [esp + 0x528], 0xffffffff */
  W32((uint32_t)(esp + 0x528u), 0xffffffffu);
/* d5fba3: call dword ptr [0xd7a56c] */
  esp -= 4; W32(esp, 0xd5fba9u); SPILL(); f_484f0d(); if (g_unwind) return; /* MSVCP70!??_D?$basic_ifstream@DU?$char_traits@D@std@@@std@@QAEXXZ */ RELOAD();
/* d5fba9: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_d5fbab: /* d5fbab: mov ecx, dword ptr [esp + 0x520] */
  ecx = R32((uint32_t)(esp + 0x520u));
/* d5fbb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5fbb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5fbb4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d5fbb5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5fbb6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d5fbbd: add esp, 0x51c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x51cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5fbc3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5fc90(void) {
  LOAD_REGS();
L_d5fc90: /* d5fc90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5fc91: mov esi, ecx */
  esi = ecx;
/* d5fc93: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d5fc96: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5fc98: je 0xd5fca3 */
  if (zf) goto L_d5fca3;
L_d5fc9a: /* d5fc9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5fc9b: call 0xd51415 */
  esp -= 4; W32(esp, 0xd5fca0u); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d5fca0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d5fca3: /* d5fca3: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* d5fcaa: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* d5fcb1: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* d5fcb8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5fcb9: ret  */
  esp += 4; SPILL(); return;
}

void f_d5fcd0(void) {
  LOAD_REGS();
L_d5fcd0: /* d5fcd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5fcd1: mov esi, ecx */
  esi = ecx;
/* d5fcd3: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* d5fcd6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5fcd8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5fcd9: jne 0xd5fcdf */
  if (!zf) goto L_d5fcdf;
L_d5fcdb: /* d5fcdb: xor ecx, ecx */
  ecx = 0;
/* d5fcdd: jmp 0xd5fce7 */
  goto L_d5fce7;
L_d5fcdf: /* d5fcdf: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d5fce2: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d5fce4: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
L_d5fce7: /* d5fce7: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5fce9: je 0xd5fd1b */
  if (zf) goto L_d5fd1b;
L_d5fceb: /* d5fceb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* d5fcee: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d5fcf0: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* d5fcf3: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5fcf5: jae 0xd5fd1b */
  if (!cf) goto L_d5fd1b;
L_d5fcf7: /* d5fcf7: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* d5fcfb: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* d5fcff: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* d5fd02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5fd03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5fd04: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5fd05: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d5fd07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5fd08: call 0xd5164f */
  esp -= 4; W32(esp, 0xd5fd0du); SPILL(); f_d5164f(); if (g_unwind) return; RELOAD();
/* d5fd0d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5fd10: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d5fd13: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* d5fd16: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5fd17: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5fd18: ret 4 */
  esp += 8; SPILL(); return;
L_d5fd1b: /* d5fd1b: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* d5fd1f: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d5fd22: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5fd23: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d5fd25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5fd26: mov ecx, esp */
  ecx = esp;
/* d5fd28: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* d5fd2a: mov ecx, esi */
  ecx = esi;
/* d5fd2c: call 0xd5103c */
  esp -= 4; W32(esp, 0xd5fd31u); SPILL(); f_d5103c(); if (g_unwind) return; RELOAD();
/* d5fd31: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5fd32: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5fd33: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5fd60(void) {
  LOAD_REGS();
L_d5fd60: /* d5fd60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5fd61: mov esi, ecx */
  esi = ecx;
/* d5fd63: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d5fd66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5fd68: je 0xd5fd73 */
  if (zf) goto L_d5fd73;
L_d5fd6a: /* d5fd6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5fd6b: call 0xd51415 */
  esp -= 4; W32(esp, 0xd5fd70u); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d5fd70: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d5fd73: /* d5fd73: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* d5fd7a: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* d5fd81: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* d5fd88: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5fd89: ret  */
  esp += 4; SPILL(); return;
}

void f_d5fda0(void) {
  LOAD_REGS();
L_d5fda0: /* d5fda0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5fda1: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* d5fda4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5fda6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5fda7: jne 0xd5fdad */
  if (!zf) goto L_d5fdad;
L_d5fda9: /* d5fda9: xor eax, eax */
  eax = 0;
/* d5fdab: jmp 0xd5fdb5 */
  goto L_d5fdb5;
L_d5fdad: /* d5fdad: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* d5fdb0: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d5fdb2: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_d5fdb5: /* d5fdb5: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* d5fdb9: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5fdbb: jae 0xd5fde7 */
  if (!cf) goto L_d5fde7;
L_d5fdbd: /* d5fdbd: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5fdbf: jne 0xd5fdc5 */
  if (!zf) goto L_d5fdc5;
L_d5fdc1: /* d5fdc1: xor eax, eax */
  eax = 0;
/* d5fdc3: jmp 0xd5fdcd */
  goto L_d5fdcd;
L_d5fdc5: /* d5fdc5: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* d5fdc8: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d5fdca: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_d5fdcd: /* d5fdcd: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d5fdcf: lea esi, [esp + 0x10] */
  esi = (uint32_t)(esp + 0x10u);
/* d5fdd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5fdd4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5fdd5: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* d5fdd8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5fdd9: mov eax, esp */
  eax = esp;
/* d5fddb: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d5fddd: call 0xd5103c */
  esp -= 4; W32(esp, 0xd5fde2u); SPILL(); f_d5103c(); if (g_unwind) return; RELOAD();
/* d5fde2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5fde3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5fde4: ret 8 */
  esp += 12; SPILL(); return;
L_d5fde7: /* d5fde7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5fde9: je 0xd5fe13 */
  if (zf) goto L_d5fe13;
L_d5fdeb: /* d5fdeb: mov edi, dword ptr [ecx + 8] */
  edi = R32((uint32_t)(ecx + 0x8u));
/* d5fdee: mov eax, edi */
  eax = edi;
/* d5fdf0: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d5fdf2: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* d5fdf5: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5fdf7: jae 0xd5fe13 */
  if (!cf) goto L_d5fe13;
L_d5fdf9: /* d5fdf9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5fdfa: mov eax, esp */
  eax = esp;
/* d5fdfc: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* d5fdfe: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d5fe01: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5fe02: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* d5fe05: mov esi, esp */
  esi = esp;
/* d5fe07: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* d5fe0b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d5fe0c: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* d5fe0e: call 0xd51474 */
  esp -= 4; W32(esp, 0xd5fe13u); SPILL(); f_d51474(); if (g_unwind) return; RELOAD();
L_d5fe13: /* d5fe13: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5fe14: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5fe15: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d5fe40(void) {
  LOAD_REGS();
L_d5fe40: /* d5fe40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d5fe41: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* d5fe45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5fe46: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* d5fe4a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5fe4b: mov edi, ecx */
  edi = ecx;
/* d5fe4d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* d5fe50: cmp esi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5fe52: jne 0xd5fe8c */
  if (!zf) goto L_d5fe8c;
L_d5fe54: /* d5fe54: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5fe56: jne 0xd5fe8c */
  if (!zf) goto L_d5fe8c;
L_d5fe58: /* d5fe58: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d5fe5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5fe5c: mov ecx, edi */
  ecx = edi;
/* d5fe5e: call 0xd51a3c */
  esp -= 4; W32(esp, 0xd5fe63u); SPILL(); f_d51a3c(); if (g_unwind) return; RELOAD();
/* d5fe63: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* d5fe66: mov dword ptr [eax + 4], eax */
  W32((uint32_t)(eax + 0x4u), eax);
/* d5fe69: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* d5fe6c: mov dword ptr [edi + 8], 0 */
  W32((uint32_t)(edi + 0x8u), 0x0u);
/* d5fe73: mov dword ptr [eax], eax */
  W32((uint32_t)(eax), eax);
/* d5fe75: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* d5fe78: mov dword ptr [eax + 8], eax */
  W32((uint32_t)(eax + 0x8u), eax);
/* d5fe7b: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* d5fe7e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* d5fe80: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d5fe84: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5fe85: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5fe86: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d5fe88: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5fe89: ret 0xc */
  esp += 16; SPILL(); return;
L_d5fe8c: /* d5fe8c: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5fe8e: je 0xd5feeb */
  if (zf) goto L_d5feeb;
L_d5fe90: /* d5fe90: mov al, byte ptr [esi + 0x45] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x45u))) & 0xffu);
/* d5fe93: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5fe95: mov ecx, esi */
  ecx = esi;
/* d5fe97: jne 0xd5feda */
  if (!zf) goto L_d5feda;
L_d5fe99: /* d5fe99: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* d5fe9c: mov dl, byte ptr [eax + 0x45] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x45u))) & 0xffu);
/* d5fe9f: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5fea1: jne 0xd5febd */
  if (!zf) goto L_d5febd;
L_d5fea3: /* d5fea3: mov esi, eax */
  esi = eax;
/* d5fea5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d5fea7: mov dl, byte ptr [eax + 0x45] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x45u))) & 0xffu);
/* d5feaa: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5feac: jne 0xd5feda */
  if (!zf) goto L_d5feda;
L_d5feae: /* d5feae: mov edi, edi */
  edi = edi;
L_d5feb0: /* d5feb0: mov esi, eax */
  esi = eax;
/* d5feb2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* d5feb4: mov dl, byte ptr [eax + 0x45] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x45u))) & 0xffu);
/* d5feb7: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5feb9: je 0xd5feb0 */
  if (zf) goto L_d5feb0;
L_d5febb: /* d5febb: jmp 0xd5feda */
  goto L_d5feda;
L_d5febd: /* d5febd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d5fec0: mov dl, byte ptr [eax + 0x45] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x45u))) & 0xffu);
/* d5fec3: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5fec5: jne 0xd5fed8 */
  if (!zf) goto L_d5fed8;
L_d5fec7: /* d5fec7: cmp esi, dword ptr [eax + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5feca: jne 0xd5fed8 */
  if (!zf) goto L_d5fed8;
L_d5fecc: /* d5fecc: mov esi, eax */
  esi = eax;
/* d5fece: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* d5fed1: mov dl, byte ptr [eax + 0x45] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x45u))) & 0xffu);
/* d5fed4: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d5fed6: je 0xd5fec7 */
  if (zf) goto L_d5fec7;
L_d5fed8: /* d5fed8: mov esi, eax */
  esi = eax;
L_d5feda: /* d5feda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5fedb: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* d5fedf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5fee0: mov ecx, edi */
  ecx = edi;
/* d5fee2: call 0xd51884 */
  esp -= 4; W32(esp, 0xd5fee7u); SPILL(); f_d51884(); if (g_unwind) return; RELOAD();
/* d5fee7: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5fee9: jne 0xd5fe90 */
  if (!zf) goto L_d5fe90;
L_d5feeb: /* d5feeb: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d5feef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5fef0: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* d5fef2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5fef3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d5fef4: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d5ff30(void) {
  LOAD_REGS();
L_d5ff30: /* d5ff30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5ff31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5ff32: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* d5ff36: mov esi, ecx */
  esi = ecx;
/* d5ff38: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d5ff3a: je 0xd5ff5b */
  if (zf) goto L_d5ff5b;
L_d5ff3c: /* d5ff3c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d5ff3f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d5ff41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ff42: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d5ff43: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* d5ff47: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ff48: mov ecx, esi */
  ecx = esi;
/* d5ff4a: call 0xd51b2c */
  esp -= 4; W32(esp, 0xd5ff4fu); SPILL(); f_d51b2c(); if (g_unwind) return; RELOAD();
/* d5ff4f: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* d5ff51: mov byte ptr [esi], cl */
  W8((uint32_t)(esi), (ecx & 0xffu));
/* d5ff53: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5ff54: mov ecx, esi */
  ecx = esi;
/* d5ff56: call 0xd5134d */
  esp -= 4; W32(esp, 0xd5ff5bu); SPILL(); f_d5134d(); if (g_unwind) return; RELOAD();
L_d5ff5b: /* d5ff5b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5ff5c: mov eax, esi */
  eax = esi;
/* d5ff5e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5ff5f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d5ff80(void) {
  LOAD_REGS();
L_d5ff80: /* d5ff80: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d5ff86: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d5ff88: push 0xd658a9 */
  { uint32_t v = 0xd658a9u; esp -= 4; W32(esp, v); }
/* d5ff8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d5ff8e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d5ff95: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d5ff96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d5ff97: mov esi, ecx */
  esi = ecx;
/* d5ff99: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* d5ff9d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d5ff9f: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* d5ffa7: jl 0xd5ffca */
  if ((sf != of)) goto L_d5ffca;
L_d5ffa9: /* d5ffa9: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d5ffac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d5ffae: je 0xd5ffca */
  if (zf) goto L_d5ffca;
L_d5ffb0: /* d5ffb0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d5ffb3: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d5ffb5: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d5ffba: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d5ffbc: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d5ffbf: mov eax, edx */
  eax = edx;
/* d5ffc1: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d5ffc4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d5ffc6: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d5ffc8: jb 0xd5fff4 */
  if (cf) goto L_d5fff4;
L_d5ffca: /* d5ffca: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* d5ffce: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* d5ffd6: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd5ffdcu); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d5ffdc: mov eax, 0xd6c2f2 */
  eax = 0xd6c2f2u;
/* d5ffe1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d5ffe5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d5ffec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d5ffed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d5ffee: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d5fff1: ret 0x20 */
  esp += 36; SPILL(); return;
L_d5fff4: /* d5fff4: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d5fff7: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* d5fffb: mov ecx, esp */
  ecx = esp;
/* d5fffd: mov dword ptr [esp + 0x34], esp */
  W32((uint32_t)(esp + 0x34u), esp);
/* d60001: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d60002: call dword ptr [0xd7a5a8] */
  esp -= 4; W32(esp, 0xd60008u); SPILL(); f_4675a8(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z */ RELOAD();
/* d60008: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d6000b: lea ecx, [edi + edi*8] */
  ecx = (uint32_t)(edi + edi*8);
/* d6000e: lea eax, [eax + ecx*8] */
  eax = (uint32_t)(eax + ecx*8);
/* d60011: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d60012: mov ecx, esi */
  ecx = esi;
/* d60014: call 0xd51384 */
  esp -= 4; W32(esp, 0xd60019u); SPILL(); f_d51384(); if (g_unwind) return; RELOAD();
/* d60019: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* d6001d: mov esi, eax */
  esi = eax;
/* d6001f: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* d60027: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd6002du); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d6002d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d60031: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d60032: mov eax, esi */
  eax = esi;
/* d60034: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d6003b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d6003c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d6003f: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_d60090(void) {
  LOAD_REGS();
L_d60090: /* d60090: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d60094: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d60096: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d60097: call 0xd5108c */
  esp -= 4; W32(esp, 0xd6009cu); SPILL(); f_d5108c(); if (g_unwind) return; RELOAD();
/* d6009c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d600b0(void) {
  LOAD_REGS();
L_d600b0: /* d600b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d600b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d600b2: mov esi, ecx */
  esi = ecx;
/* d600b4: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d600b7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d600b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d600ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d600bb: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* d600bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d600c0: mov ecx, esi */
  ecx = esi;
/* d600c2: call 0xd51b2c */
  esp -= 4; W32(esp, 0xd600c7u); SPILL(); f_d51b2c(); if (g_unwind) return; RELOAD();
/* d600c7: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d600ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d600cb: call 0xd51415 */
  esp -= 4; W32(esp, 0xd600d0u); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d600d0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d600d3: xor eax, eax */
  eax = 0;
/* d600d5: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* d600d8: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* d600db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d600dc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d600dd: ret  */
  esp += 4; SPILL(); return;
}

void f_d600f0(void) {
  LOAD_REGS();
L_d600f0: /* d600f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d600f1: mov ebp, esp */
  ebp = esp;
/* d600f3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d600f5: push 0xd658c0 */
  { uint32_t v = 0xd658c0u; esp -= 4; W32(esp, v); }
/* d600fa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d60100: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d60101: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d60108: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d6010b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d6010c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d6010d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d6010e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* d60111: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* d60113: mov esi, ecx */
  esi = ecx;
/* d60115: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d60118: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* d6011b: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* d6011d: call 0xd513a7 */
  esp -= 4; W32(esp, 0xd60122u); SPILL(); f_d513a7(); if (g_unwind) return; RELOAD();
/* d60122: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* d60125: mov byte ptr [eax + 0x45], 1 */
  W8((uint32_t)(eax + 0x45u), 0x1u);
/* d60129: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d6012c: mov dword ptr [eax + 4], eax */
  W32((uint32_t)(eax + 0x4u), eax);
/* d6012f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d60132: mov dword ptr [eax], eax */
  W32((uint32_t)(eax), eax);
/* d60134: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d60137: mov dword ptr [eax + 8], eax */
  W32((uint32_t)(eax + 0x8u), eax);
/* d6013a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d6013b: mov ecx, esi */
  ecx = esi;
/* d6013d: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* d60144: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d6014b: call 0xd5134d */
  esp -= 4; W32(esp, 0xd60150u); SPILL(); f_d5134d(); if (g_unwind) return; RELOAD();
/* d60150: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d60153: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d60154: mov eax, esi */
  eax = esi;
/* d60156: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d60157: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d6015e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d6015f: mov esp, ebp */
  esp = ebp;
/* d60161: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d60162: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d60165(void) {
  LOAD_REGS();
L_d60165: /* d60165: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d60168: call 0xd51b6d */
  esp -= 4; W32(esp, 0xd6016du); SPILL(); f_d51b6d(); if (g_unwind) return; RELOAD();
/* d6016d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d6016f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d60171: call 0xd63f10 */
  esp -= 4; W32(esp, 0xd60176u); SPILL(); f_d63f10(); if (g_unwind) return; RELOAD();
L_d60176: guest_badaddr(0xd60176); return;
}

void f_d601b0(void) {
  LOAD_REGS();
L_d601b0: /* d601b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d601b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d601b2: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* d601b6: mov esi, ecx */
  esi = ecx;
/* d601b8: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d601ba: je 0xd601db */
  if (zf) goto L_d601db;
L_d601bc: /* d601bc: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d601bf: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d601c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d601c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d601c3: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* d601c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d601c8: mov ecx, esi */
  ecx = esi;
/* d601ca: call 0xd51b2c */
  esp -= 4; W32(esp, 0xd601cfu); SPILL(); f_d51b2c(); if (g_unwind) return; RELOAD();
/* d601cf: mov cl, byte ptr [edi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* d601d1: mov byte ptr [esi], cl */
  W8((uint32_t)(esi), (ecx & 0xffu));
/* d601d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d601d4: mov ecx, esi */
  ecx = esi;
/* d601d6: call 0xd5134d */
  esp -= 4; W32(esp, 0xd601dbu); SPILL(); f_d5134d(); if (g_unwind) return; RELOAD();
L_d601db: /* d601db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d601dc: mov eax, esi */
  eax = esi;
/* d601de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d601df: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d60200(void) {
  LOAD_REGS();
L_d60200: /* d60200: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d60203: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d60204: mov esi, dword ptr [0xd7a53c] */
  esi = R32((uint32_t)(0xd7a53cu));
/* d6020a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d6020b: mov edi, ecx */
  edi = ecx;
/* d6020d: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* d60210: push 0xd79bac */
  { uint32_t v = 0xd79bacu; esp -= 4; W32(esp, v); }
/* d60215: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d60216: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd60218u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d60218: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d6021b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d6021d: je 0xd60292 */
  if (zf) goto L_d60292;
L_d6021f: /* d6021f: lea eax, [edi + 0x44] */
  eax = (uint32_t)(edi + 0x44u);
/* d60222: push 0xd79bad */
  { uint32_t v = 0xd79badu; esp -= 4; W32(esp, v); }
/* d60227: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d60228: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0xd6022au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d6022a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d6022d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d6022f: je 0xd60292 */
  if (zf) goto L_d60292;
L_d60231: /* d60231: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* d60234: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d60236: jne 0xd6023c */
  if (!zf) goto L_d6023c;
L_d60238: /* d60238: xor edx, edx */
  edx = 0;
/* d6023a: jmp 0xd60252 */
  goto L_d60252;
L_d6023c: /* d6023c: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* d6023f: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d60241: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d60246: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d60248: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d6024b: mov ecx, edx */
  ecx = edx;
/* d6024d: shr ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* d60250: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_d60252: /* d60252: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d60254: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d60255: lea ecx, [edi + 0x10] */
  ecx = (uint32_t)(edi + 0x10u);
/* d60258: call 0xd5108c */
  esp -= 4; W32(esp, 0xd6025du); SPILL(); f_d5108c(); if (g_unwind) return; RELOAD();
/* d6025d: xor esi, esi */
  esi = 0;
/* d6025f: nop  */
L_d60260: /* d60260: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* d60263: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d60265: je 0xd6036d */
  if (zf) goto L_d6036d;
L_d6026b: /* d6026b: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* d6026e: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d60270: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d60275: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d60277: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d6027a: mov eax, edx */
  eax = edx;
/* d6027c: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d6027f: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d60281: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d60283: jae 0xd6036d */
  if (!cf) goto L_d6036d;
L_d60289: /* d60289: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* d6028c: mov dword ptr [ecx + esi*4], esi */
  W32((uint32_t)(ecx + esi*4), esi);
/* d6028f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* d60290: jmp 0xd60260 */
  goto L_d60260;
L_d60292: /* d60292: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* d60295: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d60296: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d60297: xor ebp, ebp */
  ebp = 0;
/* d60299: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d6029b: je 0xd602a6 */
  if (zf) goto L_d602a6;
L_d6029d: /* d6029d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6029e: call 0xd51415 */
  esp -= 4; W32(esp, 0xd602a3u); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d602a3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d602a6: /* d602a6: mov dword ptr [edi + 0x14], ebp */
  W32((uint32_t)(edi + 0x14u), ebp);
/* d602a9: mov dword ptr [edi + 0x18], ebp */
  W32((uint32_t)(edi + 0x18u), ebp);
/* d602ac: mov dword ptr [edi + 0x1c], ebp */
  W32((uint32_t)(edi + 0x1cu), ebp);
L_d602af: /* d602af: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* d602b2: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d602b4: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* d602b8: je 0xd6036b */
  if (zf) goto L_d6036b;
L_d602be: /* d602be: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* d602c1: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d602c3: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d602c8: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d602ca: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d602cd: mov eax, edx */
  eax = edx;
/* d602cf: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d602d2: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d602d4: cmp ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d602d6: jae 0xd6036b */
  if (!cf) goto L_d6036b;
L_d602dc: /* d602dc: lea esi, [ebp + ebp*8] */
  esi = (uint32_t)(ebp + ebp*8);
/* d602e0: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* d602e3: mov ecx, dword ptr [esi + ebx + 0x3c] */
  ecx = R32((uint32_t)(esi + ebx + 0x3cu));
/* d602e7: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* d602ea: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* d602ee: lea ebx, [esi + ebx + 0x38] */
  ebx = (uint32_t)(esi + ebx + 0x38u);
/* d602f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d602f3: mov ecx, ebx */
  ecx = ebx;
/* d602f5: call 0xd51078 */
  esp -= 4; W32(esp, 0xd602fau); SPILL(); f_d51078(); if (g_unwind) return; RELOAD();
/* d602fa: cmp eax, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d602fd: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* d60301: je 0xd6031e */
  if (zf) goto L_d6031e;
L_d60303: /* d60303: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d60306: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d60307: lea eax, [edi + 0x28] */
  eax = (uint32_t)(edi + 0x28u);
/* d6030a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6030b: call dword ptr [0xd7a5a4] */
  esp -= 4; W32(esp, 0xd60311u); SPILL(); f_4727d1(); if (g_unwind) return; /* MSVCP70!??Mstd@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z */ RELOAD();
/* d60311: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d60314: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d60316: jne 0xd6031e */
  if (!zf) goto L_d6031e;
L_d60318: /* d60318: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* d6031c: jmp 0xd60329 */
  goto L_d60329;
L_d6031e: /* d6031e: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* d60321: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* d60325: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
L_d60329: /* d60329: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* d6032d: cmp dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d6032f: je 0xd60365 */
  if (zf) goto L_d60365;
L_d60331: /* d60331: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* d60334: lea edx, [edi + 0x44] */
  edx = (uint32_t)(edi + 0x44u);
/* d60337: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d60338: lea ecx, [edi + 0x28] */
  ecx = (uint32_t)(edi + 0x28u);
/* d6033b: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d6033d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d6033e: lea ecx, [eax + 0x38] */
  ecx = (uint32_t)(eax + 0x38u);
/* d60341: call 0xd511ea */
  esp -= 4; W32(esp, 0xd60346u); SPILL(); f_d511ea(); if (g_unwind) return; RELOAD();
/* d60346: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d60347: call dword ptr [0xd7a5a0] */
  esp -= 4; W32(esp, 0xd6034du); SPILL(); f_47275c(); if (g_unwind) return; /* MSVCP70!??8std@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z */ RELOAD();
/* d6034d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d60350: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d60352: je 0xd60365 */
  if (zf) goto L_d60365;
L_d60354: /* d60354: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* d60358: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d60359: lea ecx, [edi + 0x10] */
  ecx = (uint32_t)(edi + 0x10u);
/* d6035c: call 0xd51c26 */
  esp -= 4; W32(esp, 0xd60361u); SPILL(); f_d51c26(); if (g_unwind) return; RELOAD();
/* d60361: mov ebp, dword ptr [esp + 0x10] */
  ebp = R32((uint32_t)(esp + 0x10u));
L_d60365: /* d60365: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* d60366: jmp 0xd602af */
  goto L_d602af;
L_d6036b: /* d6036b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d6036c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_d6036d: /* d6036d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d6036e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d6036f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d60372: ret  */
  esp += 4; SPILL(); return;
}

void f_d603e0(void) {
  LOAD_REGS();
L_d603e0: /* d603e0: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d603e6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d603e8: push 0xd658e2 */
  { uint32_t v = 0xd658e2u; esp -= 4; W32(esp, v); }
/* d603ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d603ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d603f5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d603f6: mov esi, ecx */
  esi = ecx;
/* d603f8: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* d603fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d603fd: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* d60400: mov dword ptr [esp + 0x10], 1 */
  W32((uint32_t)(esp + 0x10u), 0x1u);
/* d60408: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd6040eu); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d6040e: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* d60412: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d60413: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* d60416: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd6041cu); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d6041c: mov ecx, esi */
  ecx = esi;
/* d6041e: call 0xd5130c */
  esp -= 4; W32(esp, 0xd60423u); SPILL(); f_d5130c(); if (g_unwind) return; RELOAD();
/* d60423: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d60427: mov byte ptr [esp + 0xc], 0 */
  W8((uint32_t)(esp + 0xcu), 0x0u);
/* d6042c: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd60432u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d60432: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* d60436: mov dword ptr [esp + 0xc], 0xffffffff */
  W32((uint32_t)(esp + 0xcu), 0xffffffffu);
/* d6043e: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd60444u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d60444: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d60448: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d6044f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d60450: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d60453: ret 0x38 */
  esp += 60; SPILL(); return;
}

void f_d60480(void) {
  LOAD_REGS();
L_d60480: /* d60480: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d60481: mov esi, ecx */
  esi = ecx;
/* d60483: push 0xd79bae */
  { uint32_t v = 0xd79baeu; esp -= 4; W32(esp, v); }
/* d60488: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* d6048b: call dword ptr [0xd7a540] */
  esp -= 4; W32(esp, 0xd60491u); SPILL(); f_467690(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@PBD@Z */ RELOAD();
/* d60491: push 0xd79baf */
  { uint32_t v = 0xd79bafu; esp -= 4; W32(esp, v); }
/* d60496: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* d60499: call dword ptr [0xd7a540] */
  esp -= 4; W32(esp, 0xd6049fu); SPILL(); f_467690(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@PBD@Z */ RELOAD();
/* d6049f: mov ecx, esi */
  ecx = esi;
/* d604a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d604a2: jmp 0xd5130c */
  SPILL(); f_d5130c(); return;
}

void f_d604c0(void) {
  LOAD_REGS();
L_d604c0: /* d604c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d604c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d604c2: mov esi, ecx */
  esi = ecx;
/* d604c4: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d604c7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d604c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d604ca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d604cb: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* d604cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d604d0: mov ecx, esi */
  ecx = esi;
/* d604d2: call 0xd51b2c */
  esp -= 4; W32(esp, 0xd604d7u); SPILL(); f_d51b2c(); if (g_unwind) return; RELOAD();
/* d604d7: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d604da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d604db: call 0xd51415 */
  esp -= 4; W32(esp, 0xd604e0u); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d604e0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d604e3: xor eax, eax */
  eax = 0;
/* d604e5: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* d604e8: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* d604eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d604ec: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d604ed: ret  */
  esp += 4; SPILL(); return;
}

void f_d60500(void) {
  LOAD_REGS();
L_d60500: /* d60500: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d60504: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d60505: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d60506: mov esi, ecx */
  esi = ecx;
/* d60508: call 0xd51663 */
  esp -= 4; W32(esp, 0xd6050du); SPILL(); f_d51663(); if (g_unwind) return; RELOAD();
/* d6050d: mov eax, esi */
  eax = esi;
/* d6050f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d60510: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d60530(void) {
  LOAD_REGS();
L_d60530: /* d60530: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d60531: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d60532: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* d60536: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d60537: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d60538: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d60539: mov edi, ecx */
  edi = ecx;
/* d6053b: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd60541u); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d60541: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* d60544: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d60545: lea ecx, [edi + 0x1c] */
  ecx = (uint32_t)(edi + 0x1cu);
/* d60548: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd6054eu); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d6054e: lea ebx, [ebp + 0x38] */
  ebx = (uint32_t)(ebp + 0x38u);
/* d60551: lea esi, [edi + 0x38] */
  esi = (uint32_t)(edi + 0x38u);
/* d60554: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d60556: je 0xd60577 */
  if (zf) goto L_d60577;
L_d60558: /* d60558: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d6055b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d6055d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6055e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d6055f: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* d60563: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d60564: mov ecx, esi */
  ecx = esi;
/* d60566: call 0xd51b2c */
  esp -= 4; W32(esp, 0xd6056bu); SPILL(); f_d51b2c(); if (g_unwind) return; RELOAD();
/* d6056b: mov dl, byte ptr [ebx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* d6056d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d6056e: mov ecx, esi */
  ecx = esi;
/* d60570: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* d60572: call 0xd5134d */
  esp -= 4; W32(esp, 0xd60577u); SPILL(); f_d5134d(); if (g_unwind) return; RELOAD();
L_d60577: /* d60577: mov eax, dword ptr [ebp + 0x44] */
  eax = R32((uint32_t)(ebp + 0x44u));
/* d6057a: mov dword ptr [edi + 0x44], eax */
  W32((uint32_t)(edi + 0x44u), eax);
/* d6057d: mov eax, edi */
  eax = edi;
/* d6057f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d60580: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d60581: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d60582: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d60583: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d605b0(void) {
  LOAD_REGS();
L_d605b0: /* d605b0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d605b4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d605b5: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* d605b9: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d605bb: je 0xd6062a */
  if (zf) goto L_d6062a;
L_d605bd: /* d605bd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d605be: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* d605c2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d605c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d605c4: lea esi, [ebp + 0x38] */
  esi = (uint32_t)(ebp + 0x38u);
/* d605c7: lea edi, [ebx + 0x38] */
  edi = (uint32_t)(ebx + 0x38u);
/* d605ca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_d605d0: /* d605d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d605d1: mov ecx, ebp */
  ecx = ebp;
/* d605d3: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd605d9u); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d605d9: lea eax, [edi - 0x1c] */
  eax = (uint32_t)(edi + 0xffffffe4u);
/* d605dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d605dd: lea ecx, [esi - 0x1c] */
  ecx = (uint32_t)(esi + 0xffffffe4u);
/* d605e0: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd605e6u); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d605e6: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d605e8: je 0xd60609 */
  if (zf) goto L_d60609;
L_d605ea: /* d605ea: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d605ed: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d605ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d605f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d605f1: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* d605f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d605f6: mov ecx, esi */
  ecx = esi;
/* d605f8: call 0xd51b2c */
  esp -= 4; W32(esp, 0xd605fdu); SPILL(); f_d51b2c(); if (g_unwind) return; RELOAD();
/* d605fd: mov dl, byte ptr [edi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* d605ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d60600: mov ecx, esi */
  ecx = esi;
/* d60602: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* d60604: call 0xd5134d */
  esp -= 4; W32(esp, 0xd60609u); SPILL(); f_d5134d(); if (g_unwind) return; RELOAD();
L_d60609: /* d60609: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* d6060c: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d6060f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* d60613: add ebx, 0x48 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* d60616: add ebp, 0x48 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* d60619: add esi, 0x48 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d6061c: add edi, 0x48 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d6061f: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d60621: jne 0xd605d0 */
  if (!zf) goto L_d605d0;
L_d60623: /* d60623: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d60624: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d60625: mov eax, ebp */
  eax = ebp;
/* d60627: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d60628: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d60629: ret  */
  esp += 4; SPILL(); return;
L_d6062a: /* d6062a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d6062e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d6062f: ret  */
  esp += 4; SPILL(); return;
}

void f_d60650(void) {
  LOAD_REGS();
L_d60650: /* d60650: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d60654: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d60655: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* d60659: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d6065b: je 0xd606cc */
  if (zf) goto L_d606cc;
L_d6065d: /* d6065d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d6065e: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* d60662: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d60663: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d60664: lea esi, [ebp + 0x38] */
  esi = (uint32_t)(ebp + 0x38u);
/* d60667: lea edi, [ebx + 0x38] */
  edi = (uint32_t)(ebx + 0x38u);
/* d6066a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_d60670: /* d60670: sub ebx, 0x48 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* d60673: sub ebp, 0x48 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* d60676: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d60677: mov ecx, ebp */
  ecx = ebp;
/* d60679: sub edi, 0x48 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* d6067c: sub esi, 0x48 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* d6067f: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd60685u); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d60685: lea eax, [edi - 0x1c] */
  eax = (uint32_t)(edi + 0xffffffe4u);
/* d60688: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d60689: lea ecx, [esi - 0x1c] */
  ecx = (uint32_t)(esi + 0xffffffe4u);
/* d6068c: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd60692u); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d60692: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d60694: je 0xd606b5 */
  if (zf) goto L_d606b5;
L_d60696: /* d60696: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d60699: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d6069b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6069c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d6069d: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* d606a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d606a2: mov ecx, esi */
  ecx = esi;
/* d606a4: call 0xd51b2c */
  esp -= 4; W32(esp, 0xd606a9u); SPILL(); f_d51b2c(); if (g_unwind) return; RELOAD();
/* d606a9: mov dl, byte ptr [edi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* d606ab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d606ac: mov ecx, esi */
  ecx = esi;
/* d606ae: mov byte ptr [esi], dl */
  W8((uint32_t)(esi), (edx & 0xffu));
/* d606b0: call 0xd5134d */
  esp -= 4; W32(esp, 0xd606b5u); SPILL(); f_d5134d(); if (g_unwind) return; RELOAD();
L_d606b5: /* d606b5: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* d606b8: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d606bb: cmp ebx, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d606bf: jne 0xd60670 */
  if (!zf) goto L_d60670;
L_d606c1: /* d606c1: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* d606c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d606c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d606c7: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* d606c9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d606ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d606cb: ret  */
  esp += 4; SPILL(); return;
L_d606cc: /* d606cc: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d606d0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* d606d4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d606d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d606d7: ret  */
  esp += 4; SPILL(); return;
}

void f_d60710(void) {
  LOAD_REGS();
L_d60710: /* d60710: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d60711: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d60712: mov esi, ecx */
  esi = ecx;
/* d60714: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d60717: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d60719: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6071a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d6071b: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* d6071f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d60720: mov ecx, esi */
  ecx = esi;
/* d60722: call 0xd51b2c */
  esp -= 4; W32(esp, 0xd60727u); SPILL(); f_d51b2c(); if (g_unwind) return; RELOAD();
/* d60727: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d6072a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d6072b: call 0xd51415 */
  esp -= 4; W32(esp, 0xd60730u); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d60730: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d60733: xor eax, eax */
  eax = 0;
/* d60735: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* d60738: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* d6073b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d6073c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d6073d: ret  */
  esp += 4; SPILL(); return;
}

void f_d60750(void) {
  LOAD_REGS();
L_d60750: /* d60750: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d60751: mov al, byte ptr [esp + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x3u))) & 0xffu);
/* d60755: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d60756: mov esi, ecx */
  esi = ecx;
/* d60758: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* d6075a: call 0xd513a7 */
  esp -= 4; W32(esp, 0xd6075fu); SPILL(); f_d513a7(); if (g_unwind) return; RELOAD();
/* d6075f: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* d60762: mov byte ptr [eax + 0x45], 1 */
  W8((uint32_t)(eax + 0x45u), 0x1u);
/* d60766: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d60769: mov dword ptr [eax + 4], eax */
  W32((uint32_t)(eax + 0x4u), eax);
/* d6076c: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d6076f: mov dword ptr [eax], eax */
  W32((uint32_t)(eax), eax);
/* d60771: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d60774: mov dword ptr [eax + 8], eax */
  W32((uint32_t)(eax + 0x8u), eax);
/* d60777: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* d6077e: mov eax, esi */
  eax = esi;
/* d60780: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d60781: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d60782: ret  */
  esp += 4; SPILL(); return;
}

void f_d607a0(void) {
  LOAD_REGS();
L_d607a0: /* d607a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d607a2: push 0xd65915 */
  { uint32_t v = 0xd65915u; esp -= 4; W32(esp, v); }
/* d607a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d607ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d607ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d607b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d607b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d607b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d607b8: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* d607bc: mov esi, ecx */
  esi = ecx;
/* d607be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d607bf: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* d607c3: call dword ptr [0xd7a5a8] */
  esp -= 4; W32(esp, 0xd607c9u); SPILL(); f_4675a8(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z */ RELOAD();
/* d607c9: lea eax, [edi + 0x1c] */
  eax = (uint32_t)(edi + 0x1cu);
/* d607cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d607cd: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* d607d0: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* d607d8: call dword ptr [0xd7a5a8] */
  esp -= 4; W32(esp, 0xd607deu); SPILL(); f_4675a8(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z */ RELOAD();
/* d607de: lea ecx, [edi + 0x38] */
  ecx = (uint32_t)(edi + 0x38u);
/* d607e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d607e2: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* d607e5: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* d607ea: call 0xd51663 */
  esp -= 4; W32(esp, 0xd607efu); SPILL(); f_d51663(); if (g_unwind) return; RELOAD();
/* d607ef: mov edx, dword ptr [edi + 0x44] */
  edx = R32((uint32_t)(edi + 0x44u));
/* d607f2: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* d607f6: mov dword ptr [esi + 0x44], edx */
  W32((uint32_t)(esi + 0x44u), edx);
/* d607f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d607fa: mov eax, esi */
  eax = esi;
/* d607fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d607fd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d60804: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d60807: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d60830(void) {
  LOAD_REGS();
L_d60830: /* d60830: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* d60834: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* d60838: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d6083c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6083d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d6083e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d6083f: mov eax, esp */
  eax = esp;
/* d60841: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d60842: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* d60846: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d60848: mov eax, esp */
  eax = esp;
/* d6084a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d6084c: call 0xd5142e */
  esp -= 4; W32(esp, 0xd60851u); SPILL(); f_d5142e(); if (g_unwind) return; RELOAD();
/* d60851: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d60854: ret  */
  esp += 4; SPILL(); return;
}

void f_d60870(void) {
  LOAD_REGS();
L_d60870: /* d60870: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d60874: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d60875: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* d60879: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d6087b: je 0xd608e1 */
  if (zf) goto L_d608e1;
L_d6087d: /* d6087d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d6087e: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* d60882: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d60883: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d60884: lea ebp, [ebx + 0x38] */
  ebp = (uint32_t)(ebx + 0x38u);
/* d60887: lea esi, [edi + 0x38] */
  esi = (uint32_t)(edi + 0x38u);
/* d6088a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_d60890: /* d60890: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d60891: mov ecx, edi */
  ecx = edi;
/* d60893: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd60899u); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d60899: lea eax, [ebx + 0x1c] */
  eax = (uint32_t)(ebx + 0x1cu);
/* d6089c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6089d: lea ecx, [esi - 0x1c] */
  ecx = (uint32_t)(esi + 0xffffffe4u);
/* d608a0: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd608a6u); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d608a6: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d608a8: je 0xd608ca */
  if (zf) goto L_d608ca;
L_d608aa: /* d608aa: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d608ad: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d608af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d608b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d608b1: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* d608b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d608b6: mov ecx, esi */
  ecx = esi;
/* d608b8: call 0xd51b2c */
  esp -= 4; W32(esp, 0xd608bdu); SPILL(); f_d51b2c(); if (g_unwind) return; RELOAD();
/* d608bd: mov cl, byte ptr [ebp] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* d608c0: mov byte ptr [esi], cl */
  W8((uint32_t)(esi), (ecx & 0xffu));
/* d608c2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d608c3: mov ecx, esi */
  ecx = esi;
/* d608c5: call 0xd5134d */
  esp -= 4; W32(esp, 0xd608cau); SPILL(); f_d5134d(); if (g_unwind) return; RELOAD();
L_d608ca: /* d608ca: mov edx, dword ptr [ebx + 0x44] */
  edx = R32((uint32_t)(ebx + 0x44u));
/* d608cd: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* d608d1: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* d608d4: add edi, 0x48 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d608d7: add esi, 0x48 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d608da: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d608dc: jne 0xd60890 */
  if (!zf) goto L_d60890;
L_d608de: /* d608de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d608df: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d608e0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_d608e1: /* d608e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d608e2: ret  */
  esp += 4; SPILL(); return;
}

void f_d60910(void) {
  LOAD_REGS();
L_d60910: /* d60910: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d60914: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* d60918: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d60919: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d6091d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6091e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d6091f: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* d60923: mov eax, esp */
  eax = esp;
/* d60925: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d60927: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d60928: mov eax, esp */
  eax = esp;
/* d6092a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d6092b: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* d6092f: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d60931: mov eax, esp */
  eax = esp;
/* d60933: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d60934: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d60936: call 0xd5157d */
  esp -= 4; W32(esp, 0xd6093bu); SPILL(); f_d5157d(); if (g_unwind) return; RELOAD();
/* d6093b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d6093e: mov eax, esi */
  eax = esi;
/* d60940: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d60941: ret  */
  esp += 4; SPILL(); return;
}

void f_d60960(void) {
  LOAD_REGS();
L_d60960: /* d60960: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d60962: push 0xd65941 */
  { uint32_t v = 0xd65941u; esp -= 4; W32(esp, v); }
/* d60967: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d6096d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6096e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d60975: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d60976: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* d6097a: mov dword ptr [esp], ecx */
  W32((uint32_t)(esp), ecx);
/* d6097e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d60980: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* d60988: je 0xd60994 */
  if (zf) goto L_d60994;
L_d6098a: /* d6098a: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* d6098e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6098f: call 0xd517c6 */
  esp -= 4; W32(esp, 0xd60994u); SPILL(); f_d517c6(); if (g_unwind) return; RELOAD();
L_d60994: /* d60994: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d60998: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d6099f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d609a2: ret  */
  esp += 4; SPILL(); return;
}

void f_d609d0(void) {
  LOAD_REGS();
L_d609d0: /* d609d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d609d2: push 0xd65975 */
  { uint32_t v = 0xd65975u; esp -= 4; W32(esp, v); }
/* d609d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d609dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d609de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d609e5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d609e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d609e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d609ea: mov edi, ecx */
  edi = ecx;
/* d609ec: mov dword ptr [esp + 0xc], edi */
  W32((uint32_t)(esp + 0xcu), edi);
/* d609f0: call dword ptr [0xd7a574] */
  esp -= 4; W32(esp, 0xd609f6u); SPILL(); f_465a76(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d609f6: lea ecx, [edi + 0x1c] */
  ecx = (uint32_t)(edi + 0x1cu);
/* d609f9: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* d60a01: call dword ptr [0xd7a574] */
  esp -= 4; W32(esp, 0xd60a07u); SPILL(); f_465a76(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d60a07: mov al, byte ptr [esp + 0xb] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xbu))) & 0xffu);
/* d60a0b: lea esi, [edi + 0x38] */
  esi = (uint32_t)(edi + 0x38u);
/* d60a0e: mov ecx, esi */
  ecx = esi;
/* d60a10: mov byte ptr [esp + 0x18], 1 */
  W8((uint32_t)(esp + 0x18u), 0x1u);
/* d60a15: mov byte ptr [esi], al */
  W8((uint32_t)(esi), (eax & 0xffu));
/* d60a17: call 0xd513a7 */
  esp -= 4; W32(esp, 0xd60a1cu); SPILL(); f_d513a7(); if (g_unwind) return; RELOAD();
/* d60a1c: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* d60a20: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* d60a23: mov byte ptr [eax + 0x45], 1 */
  W8((uint32_t)(eax + 0x45u), 0x1u);
/* d60a27: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d60a2a: mov dword ptr [eax + 4], eax */
  W32((uint32_t)(eax + 0x4u), eax);
/* d60a2d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d60a30: mov dword ptr [eax], eax */
  W32((uint32_t)(eax), eax);
/* d60a32: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d60a35: mov dword ptr [eax + 8], eax */
  W32((uint32_t)(eax + 0x8u), eax);
/* d60a38: mov eax, edi */
  eax = edi;
/* d60a3a: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* d60a41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d60a42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d60a43: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d60a4a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d60a4d: ret  */
  esp += 4; SPILL(); return;
}

void f_d60a70(void) {
  LOAD_REGS();
L_d60a70: /* d60a70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d60a72: push 0xd659a5 */
  { uint32_t v = 0xd659a5u; esp -= 4; W32(esp, v); }
/* d60a77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d60a7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d60a7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d60a85: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d60a88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d60a89: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d60a8a: mov edi, ecx */
  edi = ecx;
/* d60a8c: mov dword ptr [esp + 8], edi */
  W32((uint32_t)(esp + 0x8u), edi);
/* d60a90: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* d60a93: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* d60a95: lea esi, [edi + 0x38] */
  esi = (uint32_t)(edi + 0x38u);
/* d60a98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d60a99: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d60a9a: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* d60a9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d60a9f: mov ecx, esi */
  ecx = esi;
/* d60aa1: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
/* d60aa9: call 0xd51b2c */
  esp -= 4; W32(esp, 0xd60aaeu); SPILL(); f_d51b2c(); if (g_unwind) return; RELOAD();
/* d60aae: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d60ab1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d60ab2: call 0xd51415 */
  esp -= 4; W32(esp, 0xd60ab7u); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d60ab7: xor eax, eax */
  eax = 0;
/* d60ab9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d60abc: lea ecx, [edi + 0x1c] */
  ecx = (uint32_t)(edi + 0x1cu);
/* d60abf: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* d60ac2: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* d60ac5: mov byte ptr [esp + 0x18], al */
  W8((uint32_t)(esp + 0x18u), (eax & 0xffu));
/* d60ac9: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd60acfu); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d60acf: mov ecx, edi */
  ecx = edi;
/* d60ad1: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* d60ad9: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd60adfu); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d60adf: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* d60ae3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d60ae4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d60ae5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d60aec: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d60aef: ret  */
  esp += 4; SPILL(); return;
}

void f_d60b10(void) {
  LOAD_REGS();
L_d60b10: /* d60b10: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d60b14: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d60b18: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d60b19: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d60b1a: call 0xd5158c */
  esp -= 4; W32(esp, 0xd60b1fu); SPILL(); f_d5158c(); if (g_unwind) return; RELOAD();
/* d60b1f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d60b22: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d60b40(void) {
  LOAD_REGS();
L_d60b40: /* d60b40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d60b41: mov esi, ecx */
  esi = ecx;
/* d60b43: call 0xd51b40 */
  esp -= 4; W32(esp, 0xd60b48u); SPILL(); f_d51b40(); if (g_unwind) return; RELOAD();
/* d60b48: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d60b4d: je 0xd60b58 */
  if (zf) goto L_d60b58;
L_d60b4f: /* d60b4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d60b50: call 0xd51415 */
  esp -= 4; W32(esp, 0xd60b55u); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d60b55: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d60b58: /* d60b58: mov eax, esi */
  eax = esi;
/* d60b5a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d60b5b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d60b70(void) {
  LOAD_REGS();
L_d60b70: /* d60b70: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d60b74: jmp 0xd51b40 */
  SPILL(); f_d51b40(); return;
}

void f_d60b90(void) {
  LOAD_REGS();
L_d60b90: /* d60b90: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d60b94: call 0xd51b40 */
  esp -= 4; W32(esp, 0xd60b99u); SPILL(); f_d51b40(); if (g_unwind) return; RELOAD();
/* d60b99: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d60bb0(void) {
  LOAD_REGS();
L_d60bb0: /* d60bb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d60bb1: mov ebp, esp */
  ebp = esp;
/* d60bb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d60bb5: push 0xd659d1 */
  { uint32_t v = 0xd659d1u; esp -= 4; W32(esp, v); }
/* d60bba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d60bc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d60bc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d60bc8: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d60bcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d60bcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d60bcd: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* d60bd0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d60bd1: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* d60bd4: xor ebx, ebx */
  ebx = 0;
/* d60bd6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d60bd9: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* d60bdc: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* d60bdf: nop  */
L_d60be0: /* d60be0: cmp edi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d60be3: je 0xd60c27 */
  if (zf) goto L_d60c27;
L_d60be5: /* d60be5: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* d60be8: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d60bea: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d60bee: je 0xd60bf8 */
  if (zf) goto L_d60bf8;
L_d60bf0: /* d60bf0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d60bf1: mov ecx, esi */
  ecx = esi;
/* d60bf3: call 0xd517c6 */
  esp -= 4; W32(esp, 0xd60bf8u); SPILL(); f_d517c6(); if (g_unwind) return; RELOAD();
L_d60bf8: /* d60bf8: add esi, 0x48 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d60bfb: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* d60bfe: mov dword ptr [ebp + 0x10], esi */
  W32((uint32_t)(ebp + 0x10u), esi);
/* d60c01: add edi, 0x48 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d60c04: jmp 0xd60be0 */
  goto L_d60be0;
L_d60c27: /* d60c27: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d60c2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d60c2b: mov eax, esi */
  eax = esi;
/* d60c2d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d60c2e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d60c35: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d60c36: mov esp, ebp */
  esp = ebp;
/* d60c38: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d60c39: ret  */
  esp += 4; SPILL(); return;
}

void f_d60c06(void) {
  LOAD_REGS();
L_d60c06: /* d60c06: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* d60c09: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* d60c0c: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d60c0e: je 0xd60c1e */
  if (zf) goto L_d60c1e;
L_d60c10: /* d60c10: mov ecx, esi */
  ecx = esi;
/* d60c12: call 0xd51b40 */
  esp -= 4; W32(esp, 0xd60c17u); SPILL(); f_d51b40(); if (g_unwind) return; RELOAD();
/* d60c17: add esi, 0x48 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d60c1a: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d60c1c: jne 0xd60c10 */
  if (!zf) goto L_d60c10;
L_d60c1e: /* d60c1e: xor ebx, ebx */
  ebx = 0;
/* d60c20: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d60c21: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d60c22: call 0xd63f10 */
  esp -= 4; W32(esp, 0xd60c27u); SPILL(); f_d63f10(); if (g_unwind) return; RELOAD();
/* d60c27: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d60c2a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d60c2b: mov eax, esi */
  eax = esi;
/* d60c2d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d60c2e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d60c35: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d60c36: mov esp, ebp */
  esp = ebp;
/* d60c38: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d60c39: ret  */
  esp += 4; SPILL(); return;
}

void f_d60c70(void) {
  LOAD_REGS();
L_d60c70: /* d60c70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d60c71: mov ebp, esp */
  ebp = esp;
/* d60c73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d60c75: push 0xd65a01 */
  { uint32_t v = 0xd65a01u; esp -= 4; W32(esp, v); }
/* d60c7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d60c80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d60c81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d60c88: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d60c8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d60c8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d60c8d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* d60c90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d60c91: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* d60c94: xor ebx, ebx */
  ebx = 0;
/* d60c96: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d60c99: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* d60c9c: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* d60c9f: nop  */
L_d60ca0: /* d60ca0: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d60ca2: jbe 0xd60ce7 */
  if ((cf | zf)) goto L_d60ce7;
L_d60ca4: /* d60ca4: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* d60ca7: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d60ca9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d60cad: je 0xd60cba */
  if (zf) goto L_d60cba;
L_d60caf: /* d60caf: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* d60cb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d60cb3: mov ecx, esi */
  ecx = esi;
/* d60cb5: call 0xd517c6 */
  esp -= 4; W32(esp, 0xd60cbau); SPILL(); f_d517c6(); if (g_unwind) return; RELOAD();
L_d60cba: /* d60cba: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* d60cbb: add esi, 0x48 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d60cbe: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* d60cc1: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* d60cc4: jmp 0xd60ca0 */
  goto L_d60ca0;
L_d60ce7: /* d60ce7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d60cea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d60ceb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d60cec: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d60cf3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d60cf4: mov esp, ebp */
  esp = ebp;
/* d60cf6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d60cf7: ret  */
  esp += 4; SPILL(); return;
}

void f_d60cc6(void) {
  LOAD_REGS();
L_d60cc6: /* d60cc6: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* d60cc9: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* d60ccc: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d60cce: je 0xd60cde */
  if (zf) goto L_d60cde;
L_d60cd0: /* d60cd0: mov ecx, esi */
  ecx = esi;
/* d60cd2: call 0xd51b40 */
  esp -= 4; W32(esp, 0xd60cd7u); SPILL(); f_d51b40(); if (g_unwind) return; RELOAD();
/* d60cd7: add esi, 0x48 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d60cda: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d60cdc: jne 0xd60cd0 */
  if (!zf) goto L_d60cd0;
L_d60cde: /* d60cde: xor ebx, ebx */
  ebx = 0;
/* d60ce0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d60ce1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d60ce2: call 0xd63f10 */
  esp -= 4; W32(esp, 0xd60ce7u); SPILL(); f_d63f10(); if (g_unwind) return; RELOAD();
/* d60ce7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d60cea: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d60ceb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d60cec: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d60cf3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d60cf4: mov esp, ebp */
  esp = ebp;
/* d60cf6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d60cf7: ret  */
  esp += 4; SPILL(); return;
}

void f_d60d30(void) {
  LOAD_REGS();
L_d60d30: /* d60d30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d60d31: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d60d35: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d60d36: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* d60d3a: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d60d3c: je 0xd60d4e */
  if (zf) goto L_d60d4e;
L_d60d3e: /* d60d3e: mov edi, edi */
  edi = edi;
L_d60d40: /* d60d40: mov ecx, esi */
  ecx = esi;
/* d60d42: call 0xd51b40 */
  esp -= 4; W32(esp, 0xd60d47u); SPILL(); f_d51b40(); if (g_unwind) return; RELOAD();
/* d60d47: add esi, 0x48 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d60d4a: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d60d4c: jne 0xd60d40 */
  if (!zf) goto L_d60d40;
L_d60d4e: /* d60d4e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d60d4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d60d50: ret  */
  esp += 4; SPILL(); return;
}

void f_d60d70(void) {
  LOAD_REGS();
L_d60d70: /* d60d70: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d60d74: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* d60d78: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* d60d7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d60d7d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d60d7e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d60d7f: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* d60d83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d60d84: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* d60d88: mov eax, esp */
  eax = esp;
/* d60d8a: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d60d8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d60d8d: mov eax, esp */
  eax = esp;
/* d60d8f: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d60d91: call 0xd511ef */
  esp -= 4; W32(esp, 0xd60d96u); SPILL(); f_d511ef(); if (g_unwind) return; RELOAD();
/* d60d96: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d60d99: ret  */
  esp += 4; SPILL(); return;
}

void f_d60db0(void) {
  LOAD_REGS();
L_d60db0: /* d60db0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d60db1: mov eax, dword ptr [esp] */
  eax = R32((uint32_t)(esp));
/* d60db5: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* d60db9: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* d60dbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d60dbe: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d60dc2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d60dc3: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* d60dc7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d60dc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d60dc9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d60dca: call 0xd51172 */
  esp -= 4; W32(esp, 0xd60dcfu); SPILL(); f_d51172(); if (g_unwind) return; RELOAD();
/* d60dcf: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d60dd2: ret  */
  esp += 4; SPILL(); return;
}

void f_d60df0(void) {
  LOAD_REGS();
L_d60df0: /* d60df0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d60df1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d60df5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d60df6: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* d60dfa: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d60dfc: je 0xd60e0e */
  if (zf) goto L_d60e0e;
L_d60dfe: /* d60dfe: mov edi, edi */
  edi = edi;
L_d60e00: /* d60e00: mov ecx, esi */
  ecx = esi;
/* d60e02: call 0xd51b40 */
  esp -= 4; W32(esp, 0xd60e07u); SPILL(); f_d51b40(); if (g_unwind) return; RELOAD();
/* d60e07: add esi, 0x48 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d60e0a: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d60e0c: jne 0xd60e00 */
  if (!zf) goto L_d60e00;
L_d60e0e: /* d60e0e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d60e0f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d60e10: ret  */
  esp += 4; SPILL(); return;
}

void f_d60e30(void) {
  LOAD_REGS();
L_d60e30: /* d60e30: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* d60e34: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* d60e38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d60e39: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d60e3a: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* d60e3e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d60e3f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d60e40: mov eax, esp */
  eax = esp;
/* d60e42: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d60e43: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* d60e47: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d60e49: mov eax, esp */
  eax = esp;
/* d60e4b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d60e4d: call 0xd511ef */
  esp -= 4; W32(esp, 0xd60e52u); SPILL(); f_d511ef(); if (g_unwind) return; RELOAD();
/* d60e52: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d60e55: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d60e70(void) {
  LOAD_REGS();
L_d60e70: /* d60e70: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* d60e74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d60e75: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* d60e79: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d60e7a: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* d60e7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d60e7f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d60e80: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* d60e84: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d60e85: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d60e86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d60e87: call 0xd51172 */
  esp -= 4; W32(esp, 0xd60e8cu); SPILL(); f_d51172(); if (g_unwind) return; RELOAD();
/* d60e8c: lea edx, [esi + esi*8] */
  edx = (uint32_t)(esi + esi*8);
/* d60e8f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d60e92: lea eax, [edi + edx*8] */
  eax = (uint32_t)(edi + edx*8);
/* d60e95: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d60e96: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d60e97: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d60eb0(void) {
  LOAD_REGS();
L_d60eb0: /* d60eb0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d60eb1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d60eb5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d60eb6: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* d60eba: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d60ebc: je 0xd60ece */
  if (zf) goto L_d60ece;
L_d60ebe: /* d60ebe: mov edi, edi */
  edi = edi;
L_d60ec0: /* d60ec0: mov ecx, esi */
  ecx = esi;
/* d60ec2: call 0xd51b40 */
  esp -= 4; W32(esp, 0xd60ec7u); SPILL(); f_d51b40(); if (g_unwind) return; RELOAD();
/* d60ec7: add esi, 0x48 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d60eca: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d60ecc: jne 0xd60ec0 */
  if (!zf) goto L_d60ec0;
L_d60ece: /* d60ece: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d60ecf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d60ed0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d60ef0(void) {
  LOAD_REGS();
L_d60ef0: /* d60ef0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d60ef1: mov ebp, esp */
  ebp = esp;
/* d60ef3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d60ef5: push 0xd65a28 */
  { uint32_t v = 0xd65a28u; esp -= 4; W32(esp, v); }
/* d60efa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d60f00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d60f01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d60f08: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d60f0b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* d60f0e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d60f0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d60f10: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d60f11: mov esi, ecx */
  esi = ecx;
/* d60f13: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* d60f16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d60f17: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* d60f1a: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* d60f1d: call 0xd517c6 */
  esp -= 4; W32(esp, 0xd60f22u); SPILL(); f_d517c6(); if (g_unwind) return; RELOAD();
/* d60f22: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* d60f25: xor ecx, ecx */
  ecx = 0;
/* d60f27: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d60f29: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* d60f2c: je 0xd60f46 */
  if (zf) goto L_d60f46;
L_d60f2e: /* d60f2e: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* d60f31: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d60f33: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d60f38: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d60f3a: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d60f3d: mov ecx, edx */
  ecx = edx;
/* d60f3f: shr ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* d60f42: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d60f44: mov ecx, edx */
  ecx = edx;
L_d60f46: /* d60f46: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* d60f49: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d60f4b: je 0xd61210 */
  if (zf) goto L_d61210;
L_d60f51: /* d60f51: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d60f53: jne 0xd60f59 */
  if (!zf) goto L_d60f59;
L_d60f55: /* d60f55: xor edx, edx */
  edx = 0;
/* d60f57: jmp 0xd60f6f */
  goto L_d60f6f;
L_d60f59: /* d60f59: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* d60f5c: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d60f5e: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d60f63: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d60f65: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d60f68: mov eax, edx */
  eax = edx;
/* d60f6a: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d60f6d: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_d60f6f: /* d60f6f: mov eax, 0x38e38e3 */
  eax = 0x38e38e3u;
/* d60f74: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d60f76: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d60f78: jae 0xd60f86 */
  if (!cf) goto L_d60f86;
L_d60f7a: /* d60f7a: mov ecx, esi */
  ecx = esi;
/* d60f7c: call 0xd51046 */
  esp -= 4; W32(esp, 0xd60f81u); SPILL(); f_d51046(); if (g_unwind) return; RELOAD();
/* d60f81: jmp 0xd61210 */
  goto L_d61210;
L_d60f86: /* d60f86: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d60f88: jne 0xd60f8e */
  if (!zf) goto L_d60f8e;
L_d60f8a: /* d60f8a: xor edx, edx */
  edx = 0;
/* d60f8c: jmp 0xd60fa4 */
  goto L_d60fa4;
L_d60f8e: /* d60f8e: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* d60f91: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d60f93: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d60f98: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d60f9a: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d60f9d: mov eax, edx */
  eax = edx;
/* d60f9f: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d60fa2: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_d60fa4: /* d60fa4: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d60fa6: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d60fa8: jae 0xd610e4 */
  if (!cf) goto L_d610e4;
L_d60fae: /* d60fae: mov eax, ecx */
  eax = ecx;
/* d60fb0: shr eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d60fb2: mov edx, 0x38e38e3 */
  edx = 0x38e38e3u;
/* d60fb7: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d60fb9: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d60fbb: jae 0xd60fc1 */
  if (!cf) goto L_d60fc1;
L_d60fbd: /* d60fbd: xor ecx, ecx */
  ecx = 0;
/* d60fbf: jmp 0xd60fc3 */
  goto L_d60fc3;
L_d60fc1: /* d60fc1: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_d60fc3: /* d60fc3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d60fc5: jne 0xd60fcb */
  if (!zf) goto L_d60fcb;
L_d60fc7: /* d60fc7: xor edx, edx */
  edx = 0;
/* d60fc9: jmp 0xd60fe1 */
  goto L_d60fe1;
L_d60fcb: /* d60fcb: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* d60fce: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d60fd0: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d60fd5: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d60fd7: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d60fda: mov eax, edx */
  eax = edx;
/* d60fdc: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d60fdf: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_d60fe1: /* d60fe1: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d60fe3: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d60fe5: jae 0xd60ff2 */
  if (!cf) goto L_d60ff2;
L_d60fe7: /* d60fe7: mov ecx, esi */
  ecx = esi;
/* d60fe9: call 0xd516ea */
  esp -= 4; W32(esp, 0xd60feeu); SPILL(); f_d516ea(); if (g_unwind) return; RELOAD();
/* d60fee: mov ecx, eax */
  ecx = eax;
/* d60ff0: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_d60ff2: /* d60ff2: lea ebx, [ecx + ecx*8] */
  ebx = (uint32_t)(ecx + ecx*8);
/* d60ff5: shl ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* d60ff8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d60ff9: call 0xd51ae1 */
  esp -= 4; W32(esp, 0xd60ffeu); SPILL(); f_d51ae1(); if (g_unwind) return; RELOAD();
/* d60ffe: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d61001: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d61004: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d61007: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d61008: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d6100b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d6100c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6100d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d6100e: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* d61011: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* d61014: mov eax, esp */
  eax = esp;
/* d61016: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d61018: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d61019: mov eax, esp */
  eax = esp;
/* d6101b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* d6101f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d61021: call 0xd511ef */
  esp -= 4; W32(esp, 0xd61026u); SPILL(); f_d511ef(); if (g_unwind) return; RELOAD();
/* d61026: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d61029: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d6102c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d6102d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d6102e: lea edx, [ebp - 0x60] */
  edx = (uint32_t)(ebp + 0xffffffa0u);
/* d61031: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d61032: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d61033: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61034: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* d61037: call 0xd51172 */
  esp -= 4; W32(esp, 0xd6103cu); SPILL(); f_d51172(); if (g_unwind) return; RELOAD();
/* d6103c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d6103f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* d61042: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d61045: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d61046: lea eax, [edi + edi*8] */
  eax = (uint32_t)(edi + edi*8);
/* d61049: lea eax, [ecx + eax*8] */
  eax = (uint32_t)(ecx + eax*8);
/* d6104c: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d6104f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d61050: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61051: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d61052: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* d61055: mov eax, esp */
  eax = esp;
/* d61057: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d61059: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d6105a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d6105d: mov eax, esp */
  eax = esp;
/* d6105f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d61061: call 0xd511ef */
  esp -= 4; W32(esp, 0xd61066u); SPILL(); f_d511ef(); if (g_unwind) return; RELOAD();
/* d61066: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d61069: xor edx, edx */
  edx = 0;
/* d6106b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d6106e: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d61070: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* d61073: je 0xd6108b */
  if (zf) goto L_d6108b;
L_d61075: /* d61075: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* d61078: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d6107a: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d6107f: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d61081: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d61084: mov eax, edx */
  eax = edx;
/* d61086: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d61089: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_d6108b: /* d6108b: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d6108d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d6108f: je 0xd610a9 */
  if (zf) goto L_d610a9;
L_d61091: /* d61091: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* d61094: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d61095: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d61096: mov ecx, esi */
  ecx = esi;
/* d61098: call 0xd510d7 */
  esp -= 4; W32(esp, 0xd6109du); SPILL(); f_d510d7(); if (g_unwind) return; RELOAD();
/* d6109d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d610a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d610a1: call 0xd51415 */
  esp -= 4; W32(esp, 0xd610a6u); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d610a6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d610a9: /* d610a9: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* d610ac: lea ecx, [edi + edi*8] */
  ecx = (uint32_t)(edi + edi*8);
/* d610af: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* d610b1: lea edx, [eax + ecx*8] */
  edx = (uint32_t)(eax + ecx*8);
/* d610b4: mov dword ptr [esi + 0xc], ebx */
  W32((uint32_t)(esi + 0xcu), ebx);
/* d610b7: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* d610ba: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* d610bd: jmp 0xd61210 */
  goto L_d61210;
L_d610e4: /* d610e4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d610e7: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* d610ea: mov edx, ecx */
  edx = ecx;
/* d610ec: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d610ee: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d610f3: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d610f5: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d610f8: mov eax, edx */
  eax = edx;
/* d610fa: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d610fd: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d610ff: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d61101: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* d61104: jae 0xd611a2 */
  if (!cf) goto L_d611a2;
L_d6110a: /* d6110a: lea eax, [edi + edi*8] */
  eax = (uint32_t)(edi + edi*8);
/* d6110d: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* d61110: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* d61113: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d61115: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61116: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d61117: mov eax, esp */
  eax = esp;
/* d61119: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* d6111c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d6111d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d6111f: mov eax, esp */
  eax = esp;
/* d61121: mov ecx, esi */
  ecx = esi;
/* d61123: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* d61126: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* d61128: call 0xd510eb */
  esp -= 4; W32(esp, 0xd6112du); SPILL(); f_d510eb(); if (g_unwind) return; RELOAD();
/* d6112d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d61130: lea edx, [ebp - 0x60] */
  edx = (uint32_t)(ebp + 0xffffffa0u);
/* d61133: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d61134: mov edx, ecx */
  edx = ecx;
/* d61136: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d61138: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d6113d: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d6113f: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d61142: mov eax, edx */
  eax = edx;
/* d61144: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d61147: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d61149: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* d6114b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d6114c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d6114d: mov ecx, esi */
  ecx = esi;
/* d6114f: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* d61153: call 0xd51357 */
  esp -= 4; W32(esp, 0xd61158u); SPILL(); f_d51357(); if (g_unwind) return; RELOAD();
/* d61158: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* d6115b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* d6115e: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d61160: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* d61163: mov esi, edx */
  esi = edx;
/* d61165: lea edx, [ebp - 0x60] */
  edx = (uint32_t)(ebp + 0xffffffa0u);
/* d61168: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d61169: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d6116a: mov eax, esp */
  eax = esp;
/* d6116c: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* d6116e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d61175: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* d61177: jmp 0xd611fd */
  goto L_d611fd;
L_d611a2: /* d611a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d611a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d611a4: mov eax, esp */
  eax = esp;
/* d611a6: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* d611a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d611aa: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d611ac: lea edi, [edi + edi*8] */
  edi = (uint32_t)(edi + edi*8);
/* d611af: shl edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* d611b2: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d611b4: mov eax, esp */
  eax = esp;
/* d611b6: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* d611b9: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* d611bc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d611be: mov ecx, esi */
  ecx = esi;
/* d611c0: call 0xd510eb */
  esp -= 4; W32(esp, 0xd611c5u); SPILL(); f_d510eb(); if (g_unwind) return; RELOAD();
/* d611c5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d611c8: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* d611cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d611cc: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* d611cf: mov eax, esp */
  eax = esp;
/* d611d1: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* d611d4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d611d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d611d7: mov eax, esp */
  eax = esp;
/* d611d9: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* d611dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d611dd: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d611df: mov eax, esp */
  eax = esp;
/* d611e1: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* d611e3: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* d611e6: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* d611e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d611ea: call 0xd517b7 */
  esp -= 4; W32(esp, 0xd611efu); SPILL(); f_d517b7(); if (g_unwind) return; RELOAD();
/* d611ef: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d611f2: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* d611f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d611f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d611f7: mov eax, esp */
  eax = esp;
/* d611f9: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d611fb: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
L_d611fd: /* d611fd: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* d61200: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d61201: mov eax, esp */
  eax = esp;
/* d61203: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* d61205: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* d61208: call 0xd5165e */
  esp -= 4; W32(esp, 0xd6120du); SPILL(); f_d5165e(); if (g_unwind) return; RELOAD();
/* d6120d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d61210: /* d61210: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* d61213: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* d6121a: call 0xd51b40 */
  esp -= 4; W32(esp, 0xd6121fu); SPILL(); f_d51b40(); if (g_unwind) return; RELOAD();
/* d6121f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d61222: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d61223: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d61224: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d6122b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d6122c: mov esp, ebp */
  esp = ebp;
/* d6122e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d6122f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d610c2(void) {
  LOAD_REGS();
L_d610c2: /* d610c2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d610c5: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* d610c8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d610cb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d610cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d610cd: call 0xd510d7 */
  esp -= 4; W32(esp, 0xd610d2u); SPILL(); f_d510d7(); if (g_unwind) return; RELOAD();
/* d610d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d610d3: call 0xd51415 */
  esp -= 4; W32(esp, 0xd610d8u); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d610d8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d610db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d610dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d610df: call 0xd63f10 */
  esp -= 4; W32(esp, 0xd610e4u); SPILL(); f_d63f10(); if (g_unwind) return; RELOAD();
/* d610e4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d610e7: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* d610ea: mov edx, ecx */
  edx = ecx;
/* d610ec: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d610ee: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d610f3: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d610f5: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d610f8: mov eax, edx */
  eax = edx;
/* d610fa: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d610fd: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d610ff: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d61101: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* d61104: jae 0xd611a2 */
  if (!cf) goto L_d611a2;
L_d6110a: /* d6110a: lea eax, [edi + edi*8] */
  eax = (uint32_t)(edi + edi*8);
/* d6110d: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* d61110: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* d61113: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d61115: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61116: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d61117: mov eax, esp */
  eax = esp;
/* d61119: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* d6111c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d6111d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d6111f: mov eax, esp */
  eax = esp;
/* d61121: mov ecx, esi */
  ecx = esi;
/* d61123: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* d61126: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* d61128: call 0xd510eb */
  esp -= 4; W32(esp, 0xd6112du); SPILL(); f_d510eb(); if (g_unwind) return; RELOAD();
/* d6112d: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d61130: lea edx, [ebp - 0x60] */
  edx = (uint32_t)(ebp + 0xffffffa0u);
/* d61133: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d61134: mov edx, ecx */
  edx = ecx;
/* d61136: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d61138: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d6113d: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d6113f: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d61142: mov eax, edx */
  eax = edx;
/* d61144: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d61147: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d61149: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* d6114b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d6114c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d6114d: mov ecx, esi */
  ecx = esi;
/* d6114f: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* d61153: call 0xd51357 */
  esp -= 4; W32(esp, 0xd61158u); SPILL(); f_d51357(); if (g_unwind) return; RELOAD();
/* d61158: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* d6115b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* d6115e: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d61160: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* d61163: mov esi, edx */
  esi = edx;
/* d61165: lea edx, [ebp - 0x60] */
  edx = (uint32_t)(ebp + 0xffffffa0u);
/* d61168: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d61169: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d6116a: mov eax, esp */
  eax = esp;
/* d6116c: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* d6116e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* d61175: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* d61177: jmp 0xd611fd */
  goto L_d611fd;
L_d611a2: /* d611a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d611a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d611a4: mov eax, esp */
  eax = esp;
/* d611a6: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* d611a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d611aa: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d611ac: lea edi, [edi + edi*8] */
  edi = (uint32_t)(edi + edi*8);
/* d611af: shl edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* d611b2: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d611b4: mov eax, esp */
  eax = esp;
/* d611b6: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* d611b9: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* d611bc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d611be: mov ecx, esi */
  ecx = esi;
/* d611c0: call 0xd510eb */
  esp -= 4; W32(esp, 0xd611c5u); SPILL(); f_d510eb(); if (g_unwind) return; RELOAD();
/* d611c5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d611c8: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* d611cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d611cc: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* d611cf: mov eax, esp */
  eax = esp;
/* d611d1: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* d611d4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d611d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d611d7: mov eax, esp */
  eax = esp;
/* d611d9: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* d611dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d611dd: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d611df: mov eax, esp */
  eax = esp;
/* d611e1: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* d611e3: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* d611e6: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* d611e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d611ea: call 0xd517b7 */
  esp -= 4; W32(esp, 0xd611efu); SPILL(); f_d517b7(); if (g_unwind) return; RELOAD();
/* d611ef: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d611f2: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* d611f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d611f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d611f7: mov eax, esp */
  eax = esp;
/* d611f9: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d611fb: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
L_d611fd: /* d611fd: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* d61200: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d61201: mov eax, esp */
  eax = esp;
/* d61203: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* d61205: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* d61208: call 0xd5165e */
  esp -= 4; W32(esp, 0xd6120du); SPILL(); f_d5165e(); if (g_unwind) return; RELOAD();
/* d6120d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d61210: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* d61213: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* d6121a: call 0xd51b40 */
  esp -= 4; W32(esp, 0xd6121fu); SPILL(); f_d51b40(); if (g_unwind) return; RELOAD();
/* d6121f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d61222: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d61223: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d61224: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d6122b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d6122c: mov esp, ebp */
  esp = ebp;
/* d6122e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d6122f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d6117c(void) {
  LOAD_REGS();
L_d6117c: /* d6117c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* d6117f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d61182: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* d61185: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* d61188: shl eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* d6118b: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d6118d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d6118e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d61191: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d61193: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61194: call 0xd510d7 */
  esp -= 4; W32(esp, 0xd61199u); SPILL(); f_d510d7(); if (g_unwind) return; RELOAD();
/* d61199: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d6119b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d6119d: call 0xd63f10 */
  esp -= 4; W32(esp, 0xd611a2u); SPILL(); f_d63f10(); if (g_unwind) return; RELOAD();
/* d611a2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d611a3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d611a4: mov eax, esp */
  eax = esp;
/* d611a6: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* d611a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d611aa: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d611ac: lea edi, [edi + edi*8] */
  edi = (uint32_t)(edi + edi*8);
/* d611af: shl edi, 3 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* d611b2: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d611b4: mov eax, esp */
  eax = esp;
/* d611b6: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* d611b9: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* d611bc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d611be: mov ecx, esi */
  ecx = esi;
/* d611c0: call 0xd510eb */
  esp -= 4; W32(esp, 0xd611c5u); SPILL(); f_d510eb(); if (g_unwind) return; RELOAD();
/* d611c5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* d611c8: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* d611cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d611cc: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* d611cf: mov eax, esp */
  eax = esp;
/* d611d1: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* d611d4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d611d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d611d7: mov eax, esp */
  eax = esp;
/* d611d9: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
/* d611dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d611dd: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d611df: mov eax, esp */
  eax = esp;
/* d611e1: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* d611e3: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* d611e6: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* d611e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d611ea: call 0xd517b7 */
  esp -= 4; W32(esp, 0xd611efu); SPILL(); f_d517b7(); if (g_unwind) return; RELOAD();
/* d611ef: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d611f2: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* d611f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d611f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d611f7: mov eax, esp */
  eax = esp;
/* d611f9: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d611fb: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* d611fd: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* d61200: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d61201: mov eax, esp */
  eax = esp;
/* d61203: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* d61205: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* d61208: call 0xd5165e */
  esp -= 4; W32(esp, 0xd6120du); SPILL(); f_d5165e(); if (g_unwind) return; RELOAD();
/* d6120d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d61210: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* d61213: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* d6121a: call 0xd51b40 */
  esp -= 4; W32(esp, 0xd6121fu); SPILL(); f_d51b40(); if (g_unwind) return; RELOAD();
/* d6121f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* d61222: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d61223: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d61224: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d6122b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d6122c: mov esp, ebp */
  esp = ebp;
/* d6122e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d6122f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d61320(void) {
  LOAD_REGS();
L_d61320: /* d61320: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d61321: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* d61325: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d61326: mov esi, ecx */
  esi = ecx;
/* d61328: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d61329: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* d6132c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d6132e: je 0xd6134c */
  if (zf) goto L_d6134c;
L_d61330: /* d61330: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d61333: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d61335: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d6133a: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d6133c: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d6133f: mov eax, edx */
  eax = edx;
/* d61341: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d61344: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  edx = r;
  }
/* d61346: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* d6134a: jne 0xd61350 */
  if (!zf) goto L_d61350;
L_d6134c: /* d6134c: xor edi, edi */
  edi = 0;
/* d6134e: jmp 0xd61367 */
  goto L_d61367;
L_d61350: /* d61350: mov ecx, ebx */
  ecx = ebx;
/* d61352: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d61354: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d61359: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d6135b: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d6135e: mov ecx, edx */
  ecx = edx;
/* d61360: shr ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* d61363: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d61365: mov edi, edx */
  edi = edx;
L_d61367: /* d61367: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* d6136b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d6136c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d6136e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d6136f: mov eax, esp */
  eax = esp;
/* d61371: mov ecx, esi */
  ecx = esi;
/* d61373: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* d61375: call 0xd51118 */
  esp -= 4; W32(esp, 0xd6137au); SPILL(); f_d51118(); if (g_unwind) return; RELOAD();
/* d6137a: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* d6137d: lea eax, [edi + edi*8] */
  eax = (uint32_t)(edi + edi*8);
/* d61380: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d61381: lea edx, [ecx + eax*8] */
  edx = (uint32_t)(ecx + eax*8);
/* d61384: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* d61388: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d61389: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d6138b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d6138c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d613b0(void) {
  LOAD_REGS();
L_d613b0: /* d613b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d613b1: mov ebx, ecx */
  ebx = ecx;
/* d613b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d613b4: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* d613b7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d613b9: je 0xd613de */
  if (zf) goto L_d613de;
L_d613bb: /* d613bb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d613bc: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* d613bf: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d613c1: je 0xd613d1 */
  if (zf) goto L_d613d1;
L_d613c3: /* d613c3: mov ecx, esi */
  ecx = esi;
/* d613c5: call 0xd51b40 */
  esp -= 4; W32(esp, 0xd613cau); SPILL(); f_d51b40(); if (g_unwind) return; RELOAD();
/* d613ca: add esi, 0x48 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d613cd: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d613cf: jne 0xd613c3 */
  if (!zf) goto L_d613c3;
L_d613d1: /* d613d1: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* d613d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d613d5: call 0xd51415 */
  esp -= 4; W32(esp, 0xd613dau); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d613da: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d613dd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_d613de: /* d613de: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d613df: mov dword ptr [ebx + 4], 0 */
  W32((uint32_t)(ebx + 0x4u), 0x0u);
/* d613e6: mov dword ptr [ebx + 8], 0 */
  W32((uint32_t)(ebx + 0x8u), 0x0u);
/* d613ed: mov dword ptr [ebx + 0xc], 0 */
  W32((uint32_t)(ebx + 0xcu), 0x0u);
/* d613f4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d613f5: ret  */
  esp += 4; SPILL(); return;
}

void f_d61420(void) {
  LOAD_REGS();
L_d61420: /* d61420: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* d61424: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d61425: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d61426: mov ebp, ecx */
  ebp = ecx;
/* d61428: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* d6142c: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d6142e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d6142f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d61430: je 0xd6146d */
  if (zf) goto L_d6146d;
L_d61432: /* d61432: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* d61436: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d61439: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d6143a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d6143b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d6143c: mov ecx, esp */
  ecx = esp;
/* d6143e: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* d61440: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d61441: mov eax, esp */
  eax = esp;
/* d61443: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d61445: call 0xd5142e */
  esp -= 4; W32(esp, 0xd6144au); SPILL(); f_d5142e(); if (g_unwind) return; RELOAD();
/* d6144a: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* d6144d: mov esi, eax */
  esi = eax;
/* d6144f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d61452: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d61454: mov edi, esi */
  edi = esi;
/* d61456: je 0xd61466 */
  if (zf) goto L_d61466;
L_d61458: /* d61458: mov ecx, edi */
  ecx = edi;
/* d6145a: call 0xd51b40 */
  esp -= 4; W32(esp, 0xd6145fu); SPILL(); f_d51b40(); if (g_unwind) return; RELOAD();
/* d6145f: add edi, 0x48 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d61462: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d61464: jne 0xd61458 */
  if (!zf) goto L_d61458;
L_d61466: /* d61466: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* d6146a: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
L_d6146d: /* d6146d: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* d61471: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d61472: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d61473: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d61474: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* d61476: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d61477: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d614a0(void) {
  LOAD_REGS();
L_d614a0: /* d614a0: jmp 0xd514d3 */
  SPILL(); f_d514d3(); return;
}

void f_d614c0(void) {
  LOAD_REGS();
L_d614c0: /* d614c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d614c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d614c2: mov esi, ecx */
  esi = ecx;
/* d614c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d614c5: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* d614c8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d614ca: jne 0xd614d0 */
  if (!zf) goto L_d614d0;
L_d614cc: /* d614cc: xor ebx, ebx */
  ebx = 0;
/* d614ce: jmp 0xd614e8 */
  goto L_d614e8;
L_d614d0: /* d614d0: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d614d3: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d614d5: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d614da: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d614dc: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d614df: mov eax, edx */
  eax = edx;
/* d614e1: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d614e4: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d614e6: mov ebx, edx */
  ebx = edx;
L_d614e8: /* d614e8: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d614ea: je 0xd6152b */
  if (zf) goto L_d6152b;
L_d614ec: /* d614ec: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* d614ef: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d614f1: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d614f6: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d614f8: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d614fb: mov ecx, edx */
  ecx = edx;
/* d614fd: shr ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* d61500: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d61502: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d61504: jae 0xd6152b */
  if (!cf) goto L_d6152b;
L_d61506: /* d61506: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* d6150a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d6150e: mov edi, dword ptr [esi + 8] */
  edi = R32((uint32_t)(esi + 0x8u));
/* d61511: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d61512: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d61513: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61514: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d61516: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d61517: call 0xd51172 */
  esp -= 4; W32(esp, 0xd6151cu); SPILL(); f_d51172(); if (g_unwind) return; RELOAD();
/* d6151c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d6151f: add edi, 0x48 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d61522: mov dword ptr [esi + 8], edi */
  W32((uint32_t)(esi + 0x8u), edi);
/* d61525: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d61526: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d61527: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d61528: ret 4 */
  esp += 8; SPILL(); return;
L_d6152b: /* d6152b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* d6152f: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* d61532: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d61533: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d61534: mov eax, esp */
  eax = esp;
/* d61536: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d61538: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* d6153c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6153d: mov ecx, esi */
  ecx = esi;
/* d6153f: call 0xd518f7 */
  esp -= 4; W32(esp, 0xd61544u); SPILL(); f_d518f7(); if (g_unwind) return; RELOAD();
/* d61544: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d61545: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d61546: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d61547: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d61580(void) {
  LOAD_REGS();
L_d61580: /* d61580: jmp 0xd514d3 */
  SPILL(); f_d514d3(); return;
}

void f_d615a0(void) {
  LOAD_REGS();
L_d615a0: /* d615a0: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d615a6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d615a8: push 0xd65a48 */
  { uint32_t v = 0xd65a48u; esp -= 4; W32(esp, v); }
/* d615ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d615ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d615b5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d615b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d615b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d615b8: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* d615bb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d615bd: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* d615c5: jne 0xd615cb */
  if (!zf) goto L_d615cb;
L_d615c7: /* d615c7: xor edx, edx */
  edx = 0;
/* d615c9: jmp 0xd615e1 */
  goto L_d615e1;
L_d615cb: /* d615cb: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* d615ce: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d615d0: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d615d5: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d615d7: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d615da: mov eax, edx */
  eax = edx;
/* d615dc: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d615df: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_d615e1: /* d615e1: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* d615e5: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d615e7: jae 0xd61622 */
  if (!cf) goto L_d61622;
L_d615e9: /* d615e9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d615eb: jne 0xd615f1 */
  if (!zf) goto L_d615f1;
L_d615ed: /* d615ed: xor edx, edx */
  edx = 0;
/* d615ef: jmp 0xd61607 */
  goto L_d61607;
L_d615f1: /* d615f1: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* d615f4: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d615f6: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d615fb: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d615fd: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d61600: mov eax, edx */
  eax = edx;
/* d61602: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d61605: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_d61607: /* d61607: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* d6160b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6160c: sub edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* d6160e: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* d61611: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d61612: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d61613: mov eax, esp */
  eax = esp;
/* d61615: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* d61619: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* d6161b: call 0xd51118 */
  esp -= 4; W32(esp, 0xd61620u); SPILL(); f_d51118(); if (g_unwind) return; RELOAD();
/* d61620: jmp 0xd61667 */
  goto L_d61667;
L_d61622: /* d61622: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d61624: je 0xd61667 */
  if (zf) goto L_d61667;
L_d61626: /* d61626: mov ebx, dword ptr [ecx + 8] */
  ebx = R32((uint32_t)(ecx + 0x8u));
/* d61629: mov edx, ebx */
  edx = ebx;
/* d6162b: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* d6162d: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d61632: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d61634: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d61637: mov eax, edx */
  eax = edx;
/* d61639: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d6163c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d6163e: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d61640: jae 0xd61667 */
  if (!cf) goto L_d61667;
L_d61642: /* d61642: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d61643: mov eax, esp */
  eax = esp;
/* d61645: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* d61649: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* d6164b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* d6164e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d6164f: mov edx, esp */
  edx = esp;
/* d61651: lea esi, [edi + edi*8] */
  esi = (uint32_t)(edi + edi*8);
/* d61654: lea eax, [eax + esi*8] */
  eax = (uint32_t)(eax + esi*8);
/* d61657: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* d61659: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* d6165d: mov dword ptr [esp + 0x24], esp */
  W32((uint32_t)(esp + 0x24u), esp);
/* d61661: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d61662: call 0xd51ba9 */
  esp -= 4; W32(esp, 0xd61667u); SPILL(); f_d51ba9(); if (g_unwind) return; RELOAD();
L_d61667: /* d61667: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* d6166b: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* d61673: call 0xd51b40 */
  esp -= 4; W32(esp, 0xd61678u); SPILL(); f_d51b40(); if (g_unwind) return; RELOAD();
/* d61678: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* d6167c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d6167d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d6167e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d61685: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d61686: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d61689: ret 0x4c */
  esp += 80; SPILL(); return;
}

void f_d616d0(void) {
  LOAD_REGS();
L_d616d0: /* d616d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d616d2: push 0xd65a7f */
  { uint32_t v = 0xd65a7fu; esp -= 4; W32(esp, v); }
/* d616d7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d616dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d616de: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d616e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d616e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d616e7: mov esi, ecx */
  esi = ecx;
/* d616e9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* d616ed: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* d616f0: mov dword ptr [esp + 0x10], 2 */
  W32((uint32_t)(esp + 0x10u), 0x2u);
/* d616f8: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd616feu); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d616fe: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* d61701: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* d61706: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd6170cu); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d6170c: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* d6170f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d61711: je 0xd6171c */
  if (zf) goto L_d6171c;
L_d61713: /* d61713: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61714: call 0xd51415 */
  esp -= 4; W32(esp, 0xd61719u); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d61719: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d6171c: /* d6171c: mov ecx, esi */
  ecx = esi;
/* d6171e: mov dword ptr [esi + 0x14], 0 */
  W32((uint32_t)(esi + 0x14u), 0x0u);
/* d61725: mov dword ptr [esi + 0x18], 0 */
  W32((uint32_t)(esi + 0x18u), 0x0u);
/* d6172c: mov dword ptr [esi + 0x1c], 0 */
  W32((uint32_t)(esi + 0x1cu), 0x0u);
/* d61733: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* d6173b: call 0xd514d3 */
  esp -= 4; W32(esp, 0xd61740u); SPILL(); f_d514d3(); if (g_unwind) return; RELOAD();
/* d61740: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d61744: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d61745: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d6174c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d6174f: ret  */
  esp += 4; SPILL(); return;
}

void f_d61770(void) {
  LOAD_REGS();
L_d61770: /* d61770: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d61772: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d61778: push 0xd65acf */
  { uint32_t v = 0xd65acfu; esp -= 4; W32(esp, v); }
/* d6177d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6177e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d61785: sub esp, 0x2e4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2e4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d6178b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d6178c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d6178d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d6178e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d6178f: mov ebp, ecx */
  ebp = ecx;
/* d61791: call 0xd514d3 */
  esp -= 4; W32(esp, 0xd61796u); SPILL(); f_d514d3(); if (g_unwind) return; RELOAD();
/* d61796: xor eax, eax */
  eax = 0;
/* d61798: jmp 0xd617a0 */
  goto L_d617a0;
L_d617a0: /* d617a0: mov cl, byte ptr [eax + 0xd6c2d8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0xd6c2d8u))) & 0xffu);
/* d617a6: mov byte ptr [esp + eax + 0xb0], cl */
  W8((uint32_t)(esp + eax + 0xb0u), (ecx & 0xffu));
/* d617ad: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d617ae: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d617b0: jne 0xd617a0 */
  if (!zf) goto L_d617a0;
L_d617b2: /* d617b2: mov eax, 0xd77f10 */
  eax = 0xd77f10u;
/* d617b7: mov edx, eax */
  edx = eax;
/* d617b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_d617c0: /* d617c0: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* d617c2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d617c3: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d617c5: jne 0xd617c0 */
  if (!zf) goto L_d617c0;
L_d617c7: /* d617c7: lea edi, [esp + 0xb0] */
  edi = (uint32_t)(esp + 0xb0u);
/* d617ce: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d617d0: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_d617d1: /* d617d1: mov cl, byte ptr [edi + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* d617d4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* d617d5: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d617d7: jne 0xd617d1 */
  if (!zf) goto L_d617d1;
L_d617d9: /* d617d9: mov ecx, eax */
  ecx = eax;
/* d617db: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* d617de: mov esi, edx */
  esi = edx;
/* d617e0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* d617e2: mov ecx, eax */
  ecx = eax;
/* d617e4: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* d617e7: lea eax, [esp + 0x1b4] */
  eax = (uint32_t)(esp + 0x1b4u);
/* d617ee: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* d617f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d617f1: lea ecx, [esp + 0xb4] */
  ecx = (uint32_t)(esp + 0xb4u);
/* d617f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d617f9: call dword ptr [0xd7a4f0] */
  esp -= 4; W32(esp, 0xd617ffu); SPILL(); call_ind(R32(0xd7a4f0u)); if (g_unwind) return; /* KERNEL32!FindFirstFileA */ RELOAD();
/* d617ff: mov esi, eax */
  esi = eax;
/* d61801: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d61804: je 0xd61937 */
  if (zf) goto L_d61937;
L_d6180a: /* d6180a: mov edi, dword ptr [0xd7a4ec] */
  edi = R32((uint32_t)(0xd7a4ecu));
/* d61810: mov bl, 2 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
L_d61812: /* d61812: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d61816: call 0xd51654 */
  esp -= 4; W32(esp, 0xd6181bu); SPILL(); f_d51654(); if (g_unwind) return; RELOAD();
/* d6181b: push 0xd6c2d8 */
  { uint32_t v = 0xd6c2d8u; esp -= 4; W32(esp, v); }
/* d61820: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* d61824: mov dword ptr [esp + 0x300], 0 */
  W32((uint32_t)(esp + 0x300u), 0x0u);
/* d6182f: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd61835u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d61835: lea edx, [esp + 0x1e0] */
  edx = (uint32_t)(esp + 0x1e0u);
/* d6183c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d6183d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6183e: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* d61845: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61846: mov byte ptr [esp + 0x308], 1 */
  W8((uint32_t)(esp + 0x308u), 0x1u);
/* d6184e: call 0xd641b2 */
  esp -= 4; W32(esp, 0xd61853u); SPILL(); f_d641b2(); if (g_unwind) return; RELOAD();
/* d61853: push 0xd77f14 */
  { uint32_t v = 0xd77f14u; esp -= 4; W32(esp, v); }
/* d61858: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61859: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* d61860: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d61861: mov byte ptr [esp + 0x314], bl */
  W8((uint32_t)(esp + 0x314u), (ebx & 0xffu));
/* d61868: call 0xd641b2 */
  esp -= 4; W32(esp, 0xd6186du); SPILL(); f_d641b2(); if (g_unwind) return; RELOAD();
/* d6186d: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d61870: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61871: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* d61875: mov byte ptr [esp + 0x300], 3 */
  W8((uint32_t)(esp + 0x300u), 0x3u);
/* d6187d: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd61883u); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d61883: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* d6188a: mov byte ptr [esp + 0x2fc], bl */
  W8((uint32_t)(esp + 0x2fcu), (ebx & 0xffu));
/* d61891: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd61897u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d61897: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* d6189b: mov byte ptr [esp + 0x2fc], 1 */
  W8((uint32_t)(esp + 0x2fcu), 0x1u);
/* d618a3: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd618a9u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d618a9: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* d618ad: mov byte ptr [esp + 0x2fc], 0 */
  W8((uint32_t)(esp + 0x2fcu), 0x0u);
/* d618b5: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd618bbu); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d618bb: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* d618bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d618c0: mov ecx, ebp */
  ecx = ebp;
/* d618c2: call 0xd51122 */
  esp -= 4; W32(esp, 0xd618c7u); SPILL(); f_d51122(); if (g_unwind) return; RELOAD();
/* d618c7: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d618c9: je 0xd61902 */
  if (zf) goto L_d61902;
L_d618cb: /* d618cb: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d618ce: mov ecx, esp */
  ecx = esp;
/* d618d0: mov dword ptr [esp + 0x2c], esp */
  W32((uint32_t)(esp + 0x2cu), esp);
/* d618d4: push 0xd6c2e4 */
  { uint32_t v = 0xd6c2e4u; esp -= 4; W32(esp, v); }
/* d618d9: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd618dfu); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d618df: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* d618e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d618e4: mov ecx, ebp */
  ecx = ebp;
/* d618e6: call 0xd51384 */
  esp -= 4; W32(esp, 0xd618ebu); SPILL(); f_d51384(); if (g_unwind) return; RELOAD();
/* d618eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d618ec: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* d618f0: call dword ptr [0xd7a540] */
  esp -= 4; W32(esp, 0xd618f6u); SPILL(); f_467690(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@PBD@Z */ RELOAD();
/* d618f6: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d618fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d618fb: mov ecx, ebp */
  ecx = ebp;
/* d618fd: call 0xd51186 */
  esp -= 4; W32(esp, 0xd61902u); SPILL(); f_d51186(); if (g_unwind) return; RELOAD();
L_d61902: /* d61902: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d61906: mov dword ptr [esp + 0x2fc], 0xffffffff */
  W32((uint32_t)(esp + 0x2fcu), 0xffffffffu);
/* d61911: call 0xd51b40 */
  esp -= 4; W32(esp, 0xd61916u); SPILL(); f_d51b40(); if (g_unwind) return; RELOAD();
/* d61916: lea edx, [esp + 0x1b4] */
  edx = (uint32_t)(esp + 0x1b4u);
/* d6191d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d6191e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d6191f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd61921u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d61921: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d61923: jne 0xd61812 */
  if (!zf) goto L_d61812;
L_d61929: /* d61929: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d6192a: call dword ptr [0xd7a4e8] */
  esp -= 4; W32(esp, 0xd61930u); SPILL(); call_ind(R32(0xd7a4e8u)); if (g_unwind) return; /* KERNEL32!FindClose */ RELOAD();
/* d61930: mov ecx, ebp */
  ecx = ebp;
/* d61932: call 0xd5130c */
  esp -= 4; W32(esp, 0xd61937u); SPILL(); f_d5130c(); if (g_unwind) return; RELOAD();
L_d61937: /* d61937: mov ecx, dword ptr [esp + 0x2f4] */
  ecx = R32((uint32_t)(esp + 0x2f4u));
/* d6193e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d6193f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d61940: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d61941: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d61948: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d61949: add esp, 0x2f0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2f0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d6194f: ret  */
  esp += 4; SPILL(); return;
}

void f_d6179a(void) {
  LOAD_REGS();
L_d6179a: /* d6179a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_d617a0: /* d617a0: mov cl, byte ptr [eax + 0xd6c2d8] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0xd6c2d8u))) & 0xffu);
/* d617a6: mov byte ptr [esp + eax + 0xb0], cl */
  W8((uint32_t)(esp + eax + 0xb0u), (ecx & 0xffu));
/* d617ad: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d617ae: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d617b0: jne 0xd617a0 */
  if (!zf) goto L_d617a0;
L_d617b2: /* d617b2: mov eax, 0xd77f10 */
  eax = 0xd77f10u;
/* d617b7: mov edx, eax */
  edx = eax;
/* d617b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_d617c0: /* d617c0: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* d617c2: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d617c3: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d617c5: jne 0xd617c0 */
  if (!zf) goto L_d617c0;
L_d617c7: /* d617c7: lea edi, [esp + 0xb0] */
  edi = (uint32_t)(esp + 0xb0u);
/* d617ce: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d617d0: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
L_d617d1: /* d617d1: mov cl, byte ptr [edi + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + 0x1u))) & 0xffu);
/* d617d4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* d617d5: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d617d7: jne 0xd617d1 */
  if (!zf) goto L_d617d1;
L_d617d9: /* d617d9: mov ecx, eax */
  ecx = eax;
/* d617db: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* d617de: mov esi, edx */
  esi = edx;
/* d617e0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* d617e2: mov ecx, eax */
  ecx = eax;
/* d617e4: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* d617e7: lea eax, [esp + 0x1b4] */
  eax = (uint32_t)(esp + 0x1b4u);
/* d617ee: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* d617f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d617f1: lea ecx, [esp + 0xb4] */
  ecx = (uint32_t)(esp + 0xb4u);
/* d617f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d617f9: call dword ptr [0xd7a4f0] */
  esp -= 4; W32(esp, 0xd617ffu); SPILL(); call_ind(R32(0xd7a4f0u)); if (g_unwind) return; /* KERNEL32!FindFirstFileA */ RELOAD();
/* d617ff: mov esi, eax */
  esi = eax;
/* d61801: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d61804: je 0xd61937 */
  if (zf) goto L_d61937;
L_d6180a: /* d6180a: mov edi, dword ptr [0xd7a4ec] */
  edi = R32((uint32_t)(0xd7a4ecu));
/* d61810: mov bl, 2 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x2u) & 0xffu);
L_d61812: /* d61812: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d61816: call 0xd51654 */
  esp -= 4; W32(esp, 0xd6181bu); SPILL(); f_d51654(); if (g_unwind) return; RELOAD();
/* d6181b: push 0xd6c2d8 */
  { uint32_t v = 0xd6c2d8u; esp -= 4; W32(esp, v); }
/* d61820: lea ecx, [esp + 0x60] */
  ecx = (uint32_t)(esp + 0x60u);
/* d61824: mov dword ptr [esp + 0x300], 0 */
  W32((uint32_t)(esp + 0x300u), 0x0u);
/* d6182f: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd61835u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d61835: lea edx, [esp + 0x1e0] */
  edx = (uint32_t)(esp + 0x1e0u);
/* d6183c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d6183d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6183e: lea eax, [esp + 0x80] */
  eax = (uint32_t)(esp + 0x80u);
/* d61845: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61846: mov byte ptr [esp + 0x308], 1 */
  W8((uint32_t)(esp + 0x308u), 0x1u);
/* d6184e: call 0xd641b2 */
  esp -= 4; W32(esp, 0xd61853u); SPILL(); f_d641b2(); if (g_unwind) return; RELOAD();
/* d61853: push 0xd77f14 */
  { uint32_t v = 0xd77f14u; esp -= 4; W32(esp, v); }
/* d61858: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61859: lea ecx, [esp + 0xa8] */
  ecx = (uint32_t)(esp + 0xa8u);
/* d61860: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d61861: mov byte ptr [esp + 0x314], bl */
  W8((uint32_t)(esp + 0x314u), (ebx & 0xffu));
/* d61868: call 0xd641b2 */
  esp -= 4; W32(esp, 0xd6186du); SPILL(); f_d641b2(); if (g_unwind) return; RELOAD();
/* d6186d: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d61870: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61871: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* d61875: mov byte ptr [esp + 0x300], 3 */
  W8((uint32_t)(esp + 0x300u), 0x3u);
/* d6187d: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd61883u); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d61883: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* d6188a: mov byte ptr [esp + 0x2fc], bl */
  W8((uint32_t)(esp + 0x2fcu), (ebx & 0xffu));
/* d61891: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd61897u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d61897: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* d6189b: mov byte ptr [esp + 0x2fc], 1 */
  W8((uint32_t)(esp + 0x2fcu), 0x1u);
/* d618a3: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd618a9u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d618a9: lea ecx, [esp + 0x5c] */
  ecx = (uint32_t)(esp + 0x5cu);
/* d618ad: mov byte ptr [esp + 0x2fc], 0 */
  W8((uint32_t)(esp + 0x2fcu), 0x0u);
/* d618b5: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd618bbu); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d618bb: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* d618bf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d618c0: mov ecx, ebp */
  ecx = ebp;
/* d618c2: call 0xd51122 */
  esp -= 4; W32(esp, 0xd618c7u); SPILL(); f_d51122(); if (g_unwind) return; RELOAD();
/* d618c7: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d618c9: je 0xd61902 */
  if (zf) goto L_d61902;
L_d618cb: /* d618cb: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d618ce: mov ecx, esp */
  ecx = esp;
/* d618d0: mov dword ptr [esp + 0x2c], esp */
  W32((uint32_t)(esp + 0x2cu), esp);
/* d618d4: push 0xd6c2e4 */
  { uint32_t v = 0xd6c2e4u; esp -= 4; W32(esp, v); }
/* d618d9: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd618dfu); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d618df: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
/* d618e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d618e4: mov ecx, ebp */
  ecx = ebp;
/* d618e6: call 0xd51384 */
  esp -= 4; W32(esp, 0xd618ebu); SPILL(); f_d51384(); if (g_unwind) return; RELOAD();
/* d618eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d618ec: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* d618f0: call dword ptr [0xd7a540] */
  esp -= 4; W32(esp, 0xd618f6u); SPILL(); f_467690(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@PBD@Z */ RELOAD();
/* d618f6: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d618fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d618fb: mov ecx, ebp */
  ecx = ebp;
/* d618fd: call 0xd51186 */
  esp -= 4; W32(esp, 0xd61902u); SPILL(); f_d51186(); if (g_unwind) return; RELOAD();
L_d61902: /* d61902: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d61906: mov dword ptr [esp + 0x2fc], 0xffffffff */
  W32((uint32_t)(esp + 0x2fcu), 0xffffffffu);
/* d61911: call 0xd51b40 */
  esp -= 4; W32(esp, 0xd61916u); SPILL(); f_d51b40(); if (g_unwind) return; RELOAD();
/* d61916: lea edx, [esp + 0x1b4] */
  edx = (uint32_t)(esp + 0x1b4u);
/* d6191d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d6191e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d6191f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xd61921u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d61921: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d61923: jne 0xd61812 */
  if (!zf) goto L_d61812;
L_d61929: /* d61929: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d6192a: call dword ptr [0xd7a4e8] */
  esp -= 4; W32(esp, 0xd61930u); SPILL(); call_ind(R32(0xd7a4e8u)); if (g_unwind) return; /* KERNEL32!FindClose */ RELOAD();
/* d61930: mov ecx, ebp */
  ecx = ebp;
/* d61932: call 0xd5130c */
  esp -= 4; W32(esp, 0xd61937u); SPILL(); f_d5130c(); if (g_unwind) return; RELOAD();
L_d61937: /* d61937: mov ecx, dword ptr [esp + 0x2f4] */
  ecx = R32((uint32_t)(esp + 0x2f4u));
/* d6193e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d6193f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d61940: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d61941: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d61948: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d61949: add esp, 0x2f0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2f0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d6194f: ret  */
  esp += 4; SPILL(); return;
}

void f_d619d0(void) {
  LOAD_REGS();
L_d619d0: /* d619d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d619d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d619d2: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d619d5: mov esi, ecx */
  esi = ecx;
/* d619d7: mov ecx, esp */
  ecx = esp;
/* d619d9: mov dword ptr [esp + 0x4c], esp */
  W32((uint32_t)(esp + 0x4cu), esp);
/* d619dd: call 0xd51654 */
  esp -= 4; W32(esp, 0xd619e2u); SPILL(); f_d51654(); if (g_unwind) return; RELOAD();
/* d619e2: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* d619e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d619e7: mov ecx, esi */
  ecx = esi;
/* d619e9: call 0xd51055 */
  esp -= 4; W32(esp, 0xd619eeu); SPILL(); f_d51055(); if (g_unwind) return; RELOAD();
/* d619ee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d619ef: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d619f0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d61a10(void) {
  LOAD_REGS();
L_d61a10: /* d61a10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d61a12: push 0xd65b1b */
  { uint32_t v = 0xd65b1bu; esp -= 4; W32(esp, v); }
/* d61a17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d61a1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61a1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d61a25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d61a26: xor eax, eax */
  eax = 0;
/* d61a28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d61a29: mov esi, ecx */
  esi = ecx;
/* d61a2b: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* d61a2f: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* d61a32: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* d61a35: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d61a38: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* d61a3c: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* d61a3f: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* d61a42: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* d61a45: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* d61a48: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* d61a4d: call dword ptr [0xd7a574] */
  esp -= 4; W32(esp, 0xd61a53u); SPILL(); f_465a76(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d61a53: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* d61a56: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* d61a5b: call dword ptr [0xd7a574] */
  esp -= 4; W32(esp, 0xd61a61u); SPILL(); f_465a76(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d61a61: mov ecx, esi */
  ecx = esi;
/* d61a63: mov byte ptr [esp + 0x10], 3 */
  W8((uint32_t)(esp + 0x10u), 0x3u);
/* d61a68: call 0xd519b0 */
  esp -= 4; W32(esp, 0xd61a6du); SPILL(); f_d519b0(); if (g_unwind) return; RELOAD();
/* d61a6d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d61a71: mov eax, esi */
  eax = esi;
/* d61a73: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d61a74: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d61a7b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d61a7e: ret  */
  esp += 4; SPILL(); return;
}

void f_d61aa0(void) {
  LOAD_REGS();
L_d61aa0: /* d61aa0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d61aa2: push 0xd65b76 */
  { uint32_t v = 0xd65b76u; esp -= 4; W32(esp, v); }
/* d61aa7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d61aad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61aae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d61ab5: sub esp, 0x5c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d61ab8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d61ab9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d61aba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d61abb: mov esi, ecx */
  esi = ecx;
/* d61abd: push 0xd77ef8 */
  { uint32_t v = 0xd77ef8u; esp -= 4; W32(esp, v); }
/* d61ac2: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d61ac5: lea eax, [esp + 0x98] */
  eax = (uint32_t)(esp + 0x98u);
/* d61acc: mov ecx, esp */
  ecx = esp;
/* d61ace: mov dword ptr [esp + 0x2c], esp */
  W32((uint32_t)(esp + 0x2cu), esp);
/* d61ad2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61ad3: mov dword ptr [esp + 0x94], 1 */
  W32((uint32_t)(esp + 0x94u), 0x1u);
/* d61ade: call dword ptr [0xd7a5a8] */
  esp -= 4; W32(esp, 0xd61ae4u); SPILL(); f_4675a8(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z */ RELOAD();
/* d61ae4: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* d61ae8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d61ae9: mov ecx, esi */
  ecx = esi;
/* d61aeb: call 0xd51960 */
  esp -= 4; W32(esp, 0xd61af0u); SPILL(); f_d51960(); if (g_unwind) return; RELOAD();
/* d61af0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61af1: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* d61af5: push 0xd6c2d8 */
  { uint32_t v = 0xd6c2d8u; esp -= 4; W32(esp, v); }
/* d61afa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d61afb: mov byte ptr [esp + 0x80], 2 */
  W8((uint32_t)(esp + 0x80u), 0x2u);
/* d61b03: call 0xd64206 */
  esp -= 4; W32(esp, 0xd61b08u); SPILL(); f_d64206(); if (g_unwind) return; RELOAD();
/* d61b08: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d61b0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61b0c: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* d61b10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61b11: mov byte ptr [esp + 0x7c], 3 */
  W8((uint32_t)(esp + 0x7cu), 0x3u);
/* d61b16: call 0xd641b2 */
  esp -= 4; W32(esp, 0xd61b1bu); SPILL(); f_d641b2(); if (g_unwind) return; RELOAD();
/* d61b1b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d61b1e: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* d61b22: mov byte ptr [esp + 0x70], 6 */
  W8((uint32_t)(esp + 0x70u), 0x6u);
/* d61b27: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd61b2du); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d61b2d: lea ecx, [esp + 0x4c] */
  ecx = (uint32_t)(esp + 0x4cu);
/* d61b31: mov byte ptr [esp + 0x70], 5 */
  W8((uint32_t)(esp + 0x70u), 0x5u);
/* d61b36: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd61b3cu); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d61b3c: cmp dword ptr [esp + 0x2c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d61b41: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* d61b45: jae 0xd61b4b */
  if (!cf) goto L_d61b4b;
L_d61b47: /* d61b47: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
L_d61b4b: /* d61b4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d61b4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61b4e: call dword ptr [0xd7a4f4] */
  esp -= 4; W32(esp, 0xd61b54u); SPILL(); call_ind(R32(0xd7a4f4u)); if (g_unwind) return; /* KERNEL32!CreateDirectoryA */ RELOAD();
/* d61b54: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d61b57: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d61b59: jne 0xd61b5f */
  if (!zf) goto L_d61b5f;
L_d61b5b: /* d61b5b: xor edi, edi */
  edi = 0;
/* d61b5d: jmp 0xd61b77 */
  goto L_d61b77;
L_d61b5f: /* d61b5f: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d61b62: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d61b64: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d61b69: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d61b6b: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d61b6e: mov ecx, edx */
  ecx = edx;
/* d61b70: shr ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* d61b73: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d61b75: mov edi, edx */
  edi = edx;
L_d61b77: /* d61b77: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d61b7a: mov ecx, esp */
  ecx = esp;
/* d61b7c: mov dword ptr [esp + 0x54], esp */
  W32((uint32_t)(esp + 0x54u), esp);
/* d61b80: call 0xd51654 */
  esp -= 4; W32(esp, 0xd61b85u); SPILL(); f_d51654(); if (g_unwind) return; RELOAD();
/* d61b85: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* d61b86: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d61b87: mov ecx, esi */
  ecx = esi;
/* d61b89: call 0xd51055 */
  esp -= 4; W32(esp, 0xd61b8eu); SPILL(); f_d51055(); if (g_unwind) return; RELOAD();
/* d61b8e: mov ebp, dword ptr [esi + 4] */
  ebp = R32((uint32_t)(esi + 0x4u));
/* d61b91: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d61b93: jne 0xd61b99 */
  if (!zf) goto L_d61b99;
L_d61b95: /* d61b95: xor edx, edx */
  edx = 0;
/* d61b97: jmp 0xd61baf */
  goto L_d61baf;
L_d61b99: /* d61b99: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d61b9c: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d61b9e: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d61ba3: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d61ba5: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d61ba8: mov eax, edx */
  eax = edx;
/* d61baa: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d61bad: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_d61baf: /* d61baf: lea edi, [edx - 1] */
  edi = (uint32_t)(edx + 0xffffffffu);
/* d61bb2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d61bb4: jl 0xd61c53 */
  if ((sf != of)) goto L_d61c53;
L_d61bba: /* d61bba: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d61bbc: je 0xd61c53 */
  if (zf) goto L_d61c53;
L_d61bc2: /* d61bc2: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d61bc5: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d61bc7: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d61bcc: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d61bce: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d61bd1: mov ecx, edx */
  ecx = edx;
/* d61bd3: shr ecx, 0x1f */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* d61bd6: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d61bd8: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d61bda: jae 0xd61c53 */
  if (!cf) goto L_d61c53;
L_d61bdc: /* d61bdc: lea edx, [edi + edi*8] */
  edx = (uint32_t)(edi + edi*8);
/* d61bdf: lea ebp, [ebp + edx*8] */
  ebp = (uint32_t)(ebp + edx*8);
/* d61be3: lea eax, [esp + 0x78] */
  eax = (uint32_t)(esp + 0x78u);
/* d61be7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61be8: mov ecx, ebp */
  ecx = ebp;
/* d61bea: mov dword ptr [esi + 0x24], edi */
  W32((uint32_t)(esi + 0x24u), edi);
/* d61bed: mov byte ptr [esi + 0x20], 1 */
  W8((uint32_t)(esi + 0x20u), 0x1u);
/* d61bf1: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd61bf7u); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d61bf7: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d61bfa: lea edx, [esp + 0x94] */
  edx = (uint32_t)(esp + 0x94u);
/* d61c01: mov ecx, esp */
  ecx = esp;
/* d61c03: mov dword ptr [esp + 0x28], esp */
  W32((uint32_t)(esp + 0x28u), esp);
/* d61c07: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d61c08: call dword ptr [0xd7a5a8] */
  esp -= 4; W32(esp, 0xd61c0eu); SPILL(); f_4675a8(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z */ RELOAD();
/* d61c0e: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d61c11: mov ecx, esp */
  ecx = esp;
/* d61c13: mov dword ptr [esp + 0x48], esp */
  W32((uint32_t)(esp + 0x48u), esp);
/* d61c17: push 0xd6c2e4 */
  { uint32_t v = 0xd6c2e4u; esp -= 4; W32(esp, v); }
/* d61c1c: mov byte ptr [esp + 0xac], 7 */
  W8((uint32_t)(esp + 0xacu), 0x7u);
/* d61c24: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd61c2au); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d61c2a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d61c2b: mov ecx, esi */
  ecx = esi;
/* d61c2d: mov byte ptr [esp + 0xac], 5 */
  W8((uint32_t)(esp + 0xacu), 0x5u);
/* d61c35: call 0xd517a3 */
  esp -= 4; W32(esp, 0xd61c3au); SPILL(); f_d517a3(); if (g_unwind) return; RELOAD();
/* d61c3a: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* d61c3e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61c3f: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* d61c42: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd61c48u); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d61c48: mov ecx, esi */
  ecx = esi;
/* d61c4a: call 0xd511d1 */
  esp -= 4; W32(esp, 0xd61c4fu); SPILL(); f_d511d1(); if (g_unwind) return; RELOAD();
/* d61c4f: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d61c51: jne 0xd61c9d */
  if (!zf) goto L_d61c9d;
L_d61c53: /* d61c53: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d61c57: mov byte ptr [esp + 0x70], 1 */
  W8((uint32_t)(esp + 0x70u), 0x1u);
/* d61c5c: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd61c62u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d61c62: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* d61c66: mov byte ptr [esp + 0x70], 0 */
  W8((uint32_t)(esp + 0x70u), 0x0u);
/* d61c6b: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd61c71u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d61c71: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* d61c78: mov dword ptr [esp + 0x70], 0xffffffff */
  W32((uint32_t)(esp + 0x70u), 0xffffffffu);
/* d61c80: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd61c86u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d61c86: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* d61c89: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* d61c8d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d61c94: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d61c95: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d61c96: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d61c97: add esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d61c9a: ret 0x3c */
  esp += 64; SPILL(); return;
L_d61c9d: /* d61c9d: mov ecx, esi */
  ecx = esi;
/* d61c9f: call 0xd5130c */
  esp -= 4; W32(esp, 0xd61ca4u); SPILL(); f_d5130c(); if (g_unwind) return; RELOAD();
/* d61ca4: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d61ca8: mov byte ptr [esp + 0x70], 1 */
  W8((uint32_t)(esp + 0x70u), 0x1u);
/* d61cad: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd61cb3u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d61cb3: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* d61cb7: mov byte ptr [esp + 0x70], 0 */
  W8((uint32_t)(esp + 0x70u), 0x0u);
/* d61cbc: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd61cc2u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d61cc2: lea ecx, [esp + 0x94] */
  ecx = (uint32_t)(esp + 0x94u);
/* d61cc9: mov dword ptr [esp + 0x70], 0xffffffff */
  W32((uint32_t)(esp + 0x70u), 0xffffffffu);
/* d61cd1: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd61cd7u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d61cd7: mov ecx, dword ptr [esp + 0x68] */
  ecx = R32((uint32_t)(esp + 0x68u));
/* d61cdb: mov eax, edi */
  eax = edi;
/* d61cdd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d61cde: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d61cdf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d61ce6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d61ce7: add esp, 0x68 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x68u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d61cea: ret 0x3c */
  esp += 64; SPILL(); return;
}

void f_d61d90(void) {
  LOAD_REGS();
L_d61d90: /* d61d90: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d61d96: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d61d98: push 0xd65b9c */
  { uint32_t v = 0xd65b9cu; esp -= 4; W32(esp, v); }
/* d61d9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61d9e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d61da5: sub esp, 0x178 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x178u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d61dab: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d61dac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d61dad: mov esi, dword ptr [esp + 0x190] */
  esi = R32((uint32_t)(esp + 0x190u));
/* d61db4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d61db6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d61db7: mov ebp, ecx */
  ebp = ecx;
/* d61db9: jl 0xd61e4e */
  if ((sf != of)) goto L_d61e4e;
L_d61dbf: /* d61dbf: mov edi, dword ptr [ebp + 4] */
  edi = R32((uint32_t)(ebp + 0x4u));
/* d61dc2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d61dc4: je 0xd61e4e */
  if (zf) goto L_d61e4e;
L_d61dca: /* d61dca: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d61dcd: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d61dcf: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d61dd4: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d61dd6: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d61dd9: mov eax, edx */
  eax = edx;
/* d61ddb: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d61dde: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d61de0: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d61de2: jae 0xd61e4e */
  if (!cf) goto L_d61e4e;
L_d61de4: /* d61de4: lea esi, [esi + esi*8] */
  esi = (uint32_t)(esi + esi*8);
/* d61de7: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* d61dea: push 0xd77efc */
  { uint32_t v = 0xd77efcu; esp -= 4; W32(esp, v); }
/* d61def: lea ecx, [esi + edi + 0x1c] */
  ecx = (uint32_t)(esi + edi + 0x1cu);
/* d61df3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d61df4: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* d61df8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d61df9: call 0xd641b2 */
  esp -= 4; W32(esp, 0xd61dfeu); SPILL(); f_d641b2(); if (g_unwind) return; RELOAD();
/* d61dfe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d61e01: mov eax, 0xd77f00 */
  eax = 0xd77f00u;
/* d61e06: mov dword ptr [esp + 0x18c], 0 */
  W32((uint32_t)(esp + 0x18cu), 0x0u);
/* d61e11: lea edx, [eax + 1] */
  edx = (uint32_t)(eax + 0x1u);
L_d61e14: /* d61e14: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* d61e16: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d61e17: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d61e19: jne 0xd61e14 */
  if (!zf) goto L_d61e14;
L_d61e1b: /* d61e1b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d61e1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61e1e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d61e20: push 0xd77f00 */
  { uint32_t v = 0xd77f00u; esp -= 4; W32(esp, v); }
/* d61e25: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* d61e29: call dword ptr [0xd7a548] */
  esp -= 4; W32(esp, 0xd61e2fu); SPILL(); f_465218(); if (g_unwind) return; /* MSVCP70!?find@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBEIPBDII@Z */ RELOAD();
/* d61e2f: mov ecx, dword ptr [0xd7a560] */
  ecx = R32((uint32_t)(0xd7a560u));
/* d61e35: cmp eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d61e37: jne 0xd61e55 */
  if (!zf) goto L_d61e55;
L_d61e39: /* d61e39: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* d61e3d: mov dword ptr [esp + 0x18c], 0xffffffff */
  W32((uint32_t)(esp + 0x18cu), 0xffffffffu);
/* d61e48: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd61e4eu); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
L_d61e4e: /* d61e4e: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* d61e50: jmp 0xd61f3a */
  goto L_d61f3a;
L_d61e55: /* d61e55: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* d61e59: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d61e5a: mov ebx, 0x10 */
  ebx = 0x10u;
/* d61e5f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d61e61: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* d61e65: jae 0xd61e6b */
  if (!cf) goto L_d61e6b;
L_d61e67: /* d61e67: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
L_d61e6b: /* d61e6b: lea edx, [esp + 0x48] */
  edx = (uint32_t)(esp + 0x48u);
/* d61e6f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d61e70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61e71: call dword ptr [0xd7a4f0] */
  esp -= 4; W32(esp, 0xd61e77u); SPILL(); call_ind(R32(0xd7a4f0u)); if (g_unwind) return; /* KERNEL32!FindFirstFileA */ RELOAD();
/* d61e77: mov edi, eax */
  edi = eax;
/* d61e79: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d61e7c: jne 0xd61ea0 */
  if (!zf) goto L_d61ea0;
L_d61e7e: /* d61e7e: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* d61e82: mov dword ptr [esp + 0x190], 0xffffffff */
  W32((uint32_t)(esp + 0x190u), 0xffffffffu);
/* d61e8d: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd61e93u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d61e93: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* d61e95: jmp 0xd61f39 */
  goto L_d61f39;
L_d61ea0: /* d61ea0: cmp byte ptr [esp + 0x74], 0x2e */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x74u))); uint8_t b = (uint8_t)(0x2eu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d61ea5: je 0xd61ee2 */
  if (zf) goto L_d61ee2;
L_d61ea7: /* d61ea7: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* d61eaa: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* d61eae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d61eaf: lea edx, [esi + eax + 0x1c] */
  edx = (uint32_t)(esi + eax + 0x1cu);
/* d61eb3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d61eb4: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* d61eb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61eb9: call 0xd641b2 */
  esp -= 4; W32(esp, 0xd61ebeu); SPILL(); f_d641b2(); if (g_unwind) return; RELOAD();
/* d61ebe: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* d61ec2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d61ec5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d61ec7: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* d61ecb: jae 0xd61ed1 */
  if (!cf) goto L_d61ed1;
L_d61ecd: /* d61ecd: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
L_d61ed1: /* d61ed1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61ed2: call dword ptr [0xd7a4fc] */
  esp -= 4; W32(esp, 0xd61ed8u); SPILL(); call_ind(R32(0xd7a4fcu)); if (g_unwind) return; /* KERNEL32!DeleteFileA */ RELOAD();
/* d61ed8: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* d61edc: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd61ee2u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
L_d61ee2: /* d61ee2: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* d61ee6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d61ee7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d61ee8: call dword ptr [0xd7a4ec] */
  esp -= 4; W32(esp, 0xd61eeeu); SPILL(); call_ind(R32(0xd7a4ecu)); if (g_unwind) return; /* KERNEL32!FindNextFileA */ RELOAD();
/* d61eee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d61ef0: jne 0xd61ea0 */
  if (!zf) goto L_d61ea0;
L_d61ef2: /* d61ef2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d61ef3: call dword ptr [0xd7a4e8] */
  esp -= 4; W32(esp, 0xd61ef9u); SPILL(); call_ind(R32(0xd7a4e8u)); if (g_unwind) return; /* KERNEL32!FindClose */ RELOAD();
/* d61ef9: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* d61efc: cmp dword ptr [esi + eax + 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + eax + 0x34u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d61f00: jb 0xd61f08 */
  if (cf) goto L_d61f08;
L_d61f02: /* d61f02: mov eax, dword ptr [esi + eax + 0x20] */
  eax = R32((uint32_t)(esi + eax + 0x20u));
/* d61f06: jmp 0xd61f0c */
  goto L_d61f0c;
L_d61f08: /* d61f08: lea eax, [esi + eax + 0x20] */
  eax = (uint32_t)(esi + eax + 0x20u);
L_d61f0c: /* d61f0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61f0d: call dword ptr [0xd7a4f8] */
  esp -= 4; W32(esp, 0xd61f13u); SPILL(); call_ind(R32(0xd7a4f8u)); if (g_unwind) return; /* KERNEL32!RemoveDirectoryA */ RELOAD();
/* d61f13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d61f15: je 0xd61e7e */
  if (zf) goto L_d61e7e;
L_d61f1b: /* d61f1b: mov ecx, ebp */
  ecx = ebp;
/* d61f1d: call 0xd519b0 */
  esp -= 4; W32(esp, 0xd61f22u); SPILL(); f_d519b0(); if (g_unwind) return; RELOAD();
/* d61f22: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* d61f26: mov dword ptr [esp + 0x190], 0xffffffff */
  W32((uint32_t)(esp + 0x190u), 0xffffffffu);
/* d61f31: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd61f37u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d61f37: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_d61f39: /* d61f39: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_d61f3a: /* d61f3a: mov ecx, dword ptr [esp + 0x184] */
  ecx = R32((uint32_t)(esp + 0x184u));
/* d61f41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d61f42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d61f43: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d61f44: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d61f4b: add esp, 0x184 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x184u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d61f51: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d61e9a(void) {
  LOAD_REGS();
  goto L_d61e9a;
L_d61e7e: /* d61e7e: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* d61e82: mov dword ptr [esp + 0x190], 0xffffffff */
  W32((uint32_t)(esp + 0x190u), 0xffffffffu);
/* d61e8d: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd61e93u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d61e93: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* d61e95: jmp 0xd61f39 */
  goto L_d61f39;
L_d61e9a: /* d61e9a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_d61ea0: /* d61ea0: cmp byte ptr [esp + 0x74], 0x2e */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x74u))); uint8_t b = (uint8_t)(0x2eu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* d61ea5: je 0xd61ee2 */
  if (zf) goto L_d61ee2;
L_d61ea7: /* d61ea7: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* d61eaa: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* d61eae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d61eaf: lea edx, [esi + eax + 0x1c] */
  edx = (uint32_t)(esi + eax + 0x1cu);
/* d61eb3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d61eb4: lea eax, [esp + 0x34] */
  eax = (uint32_t)(esp + 0x34u);
/* d61eb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61eb9: call 0xd641b2 */
  esp -= 4; W32(esp, 0xd61ebeu); SPILL(); f_d641b2(); if (g_unwind) return; RELOAD();
/* d61ebe: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* d61ec2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d61ec5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d61ec7: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* d61ecb: jae 0xd61ed1 */
  if (!cf) goto L_d61ed1;
L_d61ecd: /* d61ecd: lea eax, [esp + 0x30] */
  eax = (uint32_t)(esp + 0x30u);
L_d61ed1: /* d61ed1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61ed2: call dword ptr [0xd7a4fc] */
  esp -= 4; W32(esp, 0xd61ed8u); SPILL(); call_ind(R32(0xd7a4fcu)); if (g_unwind) return; /* KERNEL32!DeleteFileA */ RELOAD();
/* d61ed8: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* d61edc: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd61ee2u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
L_d61ee2: /* d61ee2: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* d61ee6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d61ee7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d61ee8: call dword ptr [0xd7a4ec] */
  esp -= 4; W32(esp, 0xd61eeeu); SPILL(); call_ind(R32(0xd7a4ecu)); if (g_unwind) return; /* KERNEL32!FindNextFileA */ RELOAD();
/* d61eee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d61ef0: jne 0xd61ea0 */
  if (!zf) goto L_d61ea0;
L_d61ef2: /* d61ef2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d61ef3: call dword ptr [0xd7a4e8] */
  esp -= 4; W32(esp, 0xd61ef9u); SPILL(); call_ind(R32(0xd7a4e8u)); if (g_unwind) return; /* KERNEL32!FindClose */ RELOAD();
/* d61ef9: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* d61efc: cmp dword ptr [esi + eax + 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + eax + 0x34u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d61f00: jb 0xd61f08 */
  if (cf) goto L_d61f08;
L_d61f02: /* d61f02: mov eax, dword ptr [esi + eax + 0x20] */
  eax = R32((uint32_t)(esi + eax + 0x20u));
/* d61f06: jmp 0xd61f0c */
  goto L_d61f0c;
L_d61f08: /* d61f08: lea eax, [esi + eax + 0x20] */
  eax = (uint32_t)(esi + eax + 0x20u);
L_d61f0c: /* d61f0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61f0d: call dword ptr [0xd7a4f8] */
  esp -= 4; W32(esp, 0xd61f13u); SPILL(); call_ind(R32(0xd7a4f8u)); if (g_unwind) return; /* KERNEL32!RemoveDirectoryA */ RELOAD();
/* d61f13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d61f15: je 0xd61e7e */
  if (zf) goto L_d61e7e;
L_d61f1b: /* d61f1b: mov ecx, ebp */
  ecx = ebp;
/* d61f1d: call 0xd519b0 */
  esp -= 4; W32(esp, 0xd61f22u); SPILL(); f_d519b0(); if (g_unwind) return; RELOAD();
/* d61f22: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* d61f26: mov dword ptr [esp + 0x190], 0xffffffff */
  W32((uint32_t)(esp + 0x190u), 0xffffffffu);
/* d61f31: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd61f37u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d61f37: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_d61f39: /* d61f39: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d61f3a: mov ecx, dword ptr [esp + 0x184] */
  ecx = R32((uint32_t)(esp + 0x184u));
/* d61f41: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d61f42: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d61f43: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d61f44: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d61f4b: add esp, 0x184 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x184u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d61f51: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d61fe0(void) {
  LOAD_REGS();
L_d61fe0: /* d61fe0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d61fe2: push 0xd65bc2 */
  { uint32_t v = 0xd65bc2u; esp -= 4; W32(esp, v); }
/* d61fe7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d61fed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d61fee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d61ff5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d61ff8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d61ff9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d61ffa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d61ffb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d61ffc: mov ebp, ecx */
  ebp = ecx;
/* d61ffe: mov dword ptr [esp + 0x24], 1 */
  W32((uint32_t)(esp + 0x24u), 0x1u);
L_d62006: /* d62006: xor edi, edi */
  edi = 0;
/* d62008: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* d6200c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_d62010: /* d62010: mov esi, dword ptr [ebp + 4] */
  esi = R32((uint32_t)(ebp + 0x4u));
/* d62013: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d62015: je 0xd620c4 */
  if (zf) goto L_d620c4;
L_d6201b: /* d6201b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d6201e: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d62020: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d62025: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d62027: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d6202a: mov eax, edx */
  eax = edx;
/* d6202c: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d6202f: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d62031: cmp dword ptr [esp + 0x10], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d62035: jae 0xd620c4 */
  if (!cf) goto L_d620c4;
L_d6203b: /* d6203b: mov ebx, dword ptr [edi + esi + 0x3c] */
  ebx = R32((uint32_t)(edi + esi + 0x3cu));
/* d6203f: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* d62043: lea esi, [edi + esi + 0x38] */
  esi = (uint32_t)(edi + esi + 0x38u);
/* d62047: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d62048: mov ecx, esi */
  ecx = esi;
/* d6204a: call 0xd51078 */
  esp -= 4; W32(esp, 0xd6204fu); SPILL(); f_d51078(); if (g_unwind) return; RELOAD();
/* d6204f: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d62052: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* d62056: je 0xd62074 */
  if (zf) goto L_d62074;
L_d62058: /* d62058: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d6205b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6205c: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* d62060: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d62061: call dword ptr [0xd7a5a4] */
  esp -= 4; W32(esp, 0xd62067u); SPILL(); f_4727d1(); if (g_unwind) return; /* MSVCP70!??Mstd@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z */ RELOAD();
/* d62067: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d6206a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d6206c: jne 0xd62074 */
  if (!zf) goto L_d62074;
L_d6206e: /* d6206e: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* d62072: jmp 0xd6207f */
  goto L_d6207f;
L_d62074: /* d62074: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d62077: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* d6207b: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
L_d6207f: /* d6207f: cmp dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d62081: je 0xd620a7 */
  if (zf) goto L_d620a7;
L_d62083: /* d62083: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* d62086: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* d6208a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d6208b: lea edx, [esp + 0x30] */
  edx = (uint32_t)(esp + 0x30u);
/* d6208f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d62090: lea ecx, [edi + eax + 0x38] */
  ecx = (uint32_t)(edi + eax + 0x38u);
/* d62094: call 0xd511ea */
  esp -= 4; W32(esp, 0xd62099u); SPILL(); f_d511ea(); if (g_unwind) return; RELOAD();
/* d62099: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6209a: call dword ptr [0xd7a5a0] */
  esp -= 4; W32(esp, 0xd620a0u); SPILL(); f_47275c(); if (g_unwind) return; /* MSVCP70!??8std@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z */ RELOAD();
/* d620a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d620a3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d620a5: jne 0xd620b3 */
  if (!zf) goto L_d620b3;
L_d620a7: /* d620a7: inc dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x10u), r);
  }
/* d620ab: add edi, 0x48 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d620ae: jmp 0xd62010 */
  goto L_d62010;
L_d620b3: /* d620b3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d620b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d620b8: mov ecx, ebp */
  ecx = ebp;
/* d620ba: call 0xd51343 */
  esp -= 4; W32(esp, 0xd620bfu); SPILL(); f_d51343(); if (g_unwind) return; RELOAD();
/* d620bf: jmp 0xd62006 */
  goto L_d62006;
L_d620c4: /* d620c4: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* d620c8: mov byte ptr [esp + 0x24], 0 */
  W8((uint32_t)(esp + 0x24u), 0x0u);
/* d620cd: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd620d3u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d620d3: lea ecx, [esp + 0x48] */
  ecx = (uint32_t)(esp + 0x48u);
/* d620d7: mov dword ptr [esp + 0x24], 0xffffffff */
  W32((uint32_t)(esp + 0x24u), 0xffffffffu);
/* d620df: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd620e5u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d620e5: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* d620e9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d620ea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d620eb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d620ec: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* d620ee: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d620ef: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d620f6: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d620f9: ret 0x38 */
  esp += 60; SPILL(); return;
}

void f_d62150(void) {
  LOAD_REGS();
L_d62150: /* d62150: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d62152: push 0xd65be9 */
  { uint32_t v = 0xd65be9u; esp -= 4; W32(esp, v); }
/* d62157: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d6215d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6215e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d62165: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d62166: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* d6216a: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* d6216e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6216f: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d62172: mov ecx, esp */
  ecx = esp;
/* d62174: mov dword ptr [esp + 0x3c], esp */
  W32((uint32_t)(esp + 0x3cu), esp);
/* d62178: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d62179: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd6217fu); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d6217f: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* d62183: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d62186: mov ecx, esp */
  ecx = esp;
/* d62188: mov dword ptr [esp + 0x3c], esp */
  W32((uint32_t)(esp + 0x3cu), esp);
/* d6218c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6218d: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* d62195: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd6219bu); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d6219b: mov dword ptr [esp + 0x48], 0xffffffff */
  W32((uint32_t)(esp + 0x48u), 0xffffffffu);
/* d621a3: call 0xd5133e */
  esp -= 4; W32(esp, 0xd621a8u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d621a8: mov ecx, eax */
  ecx = eax;
/* d621aa: call 0xd511a9 */
  esp -= 4; W32(esp, 0xd621afu); SPILL(); f_d511a9(); if (g_unwind) return; RELOAD();
/* d621af: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d621b3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d621ba: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d621bd: ret  */
  esp += 4; SPILL(); return;
}

void f_d621e0(void) {
  LOAD_REGS();
L_d621e0: /* d621e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d621e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d621e5: call 0xd5133e */
  esp -= 4; W32(esp, 0xd621eau); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d621ea: mov ecx, eax */
  ecx = eax;
/* d621ec: call 0xd51343 */
  esp -= 4; W32(esp, 0xd621f1u); SPILL(); f_d51343(); if (g_unwind) return; RELOAD();
/* d621f1: ret  */
  esp += 4; SPILL(); return;
}

void f_d62210(void) {
  LOAD_REGS();
L_d62210: /* d62210: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d62212: push 0xd65c09 */
  { uint32_t v = 0xd65c09u; esp -= 4; W32(esp, v); }
/* d62217: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d6221d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6221e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d62225: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d62228: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* d6222c: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d6222f: mov ecx, esp */
  ecx = esp;
/* d62231: mov dword ptr [esp + 0x1c], esp */
  W32((uint32_t)(esp + 0x1cu), esp);
/* d62235: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d62236: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd6223cu); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d6223c: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* d62240: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d62243: mov ecx, esp */
  ecx = esp;
/* d62245: mov dword ptr [esp + 0x3c], esp */
  W32((uint32_t)(esp + 0x3cu), esp);
/* d62249: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d6224a: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* d62252: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd62258u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d62258: mov dword ptr [esp + 0x48], 0xffffffff */
  W32((uint32_t)(esp + 0x48u), 0xffffffffu);
/* d62260: call 0xd5133e */
  esp -= 4; W32(esp, 0xd62265u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d62265: mov ecx, eax */
  ecx = eax;
/* d62267: call 0xd51613 */
  esp -= 4; W32(esp, 0xd6226cu); SPILL(); f_d51613(); if (g_unwind) return; RELOAD();
/* d6226c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d62270: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d62277: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d6227a: ret  */
  esp += 4; SPILL(); return;
}

void f_d622a0(void) {
  LOAD_REGS();
L_d622a0: /* d622a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d622a1: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d622a5: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d622a8: mov ecx, esp */
  ecx = esp;
/* d622aa: mov dword ptr [esp + 0x1c], esp */
  W32((uint32_t)(esp + 0x1cu), esp);
/* d622ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d622af: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd622b5u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d622b5: call 0xd5133e */
  esp -= 4; W32(esp, 0xd622bau); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d622ba: mov ecx, eax */
  ecx = eax;
/* d622bc: call 0xd511cc */
  esp -= 4; W32(esp, 0xd622c1u); SPILL(); f_d511cc(); if (g_unwind) return; RELOAD();
/* d622c1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d622c2: ret  */
  esp += 4; SPILL(); return;
}

void f_d622e0(void) {
  LOAD_REGS();
L_d622e0: /* d622e0: call 0xd5133e */
  esp -= 4; W32(esp, 0xd622e5u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d622e5: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* d622e8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d622ea: jne 0xd622ef */
  if (!zf) goto L_d622ef;
L_d622ec: /* d622ec: xor eax, eax */
  eax = 0;
/* d622ee: ret  */
  esp += 4; SPILL(); return;
L_d622ef: /* d622ef: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* d622f2: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d622f4: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d622f9: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d622fb: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d622fe: mov eax, edx */
  eax = edx;
/* d62300: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d62303: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d62305: mov eax, edx */
  eax = edx;
/* d62307: ret  */
  esp += 4; SPILL(); return;
}

void f_d62320(void) {
  LOAD_REGS();
L_d62320: /* d62320: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d62321: call 0xd5133e */
  esp -= 4; W32(esp, 0xd62326u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d62326: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d6232a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d6232c: jl 0xd62356 */
  if ((sf != of)) goto L_d62356;
L_d6232e: /* d6232e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* d62331: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d62333: je 0xd62356 */
  if (zf) goto L_d62356;
L_d62335: /* d62335: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* d62338: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d6233a: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d6233f: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d62341: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d62344: mov eax, edx */
  eax = edx;
/* d62346: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d62349: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d6234b: cmp esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d6234d: jae 0xd62356 */
  if (!cf) goto L_d62356;
L_d6234f: /* d6234f: mov eax, 1 */
  eax = 0x1u;
/* d62354: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d62355: ret  */
  esp += 4; SPILL(); return;
L_d62356: /* d62356: xor eax, eax */
  eax = 0;
/* d62358: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d62359: ret  */
  esp += 4; SPILL(); return;
}

void f_d62370(void) {
  LOAD_REGS();
L_d62370: /* d62370: call 0xd5133e */
  esp -= 4; W32(esp, 0xd62375u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d62375: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* d62378: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d6237b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d6237d: jne 0xd62382 */
  if (!zf) goto L_d62382;
L_d6237f: /* d6237f: xor eax, eax */
  eax = 0;
/* d62381: ret  */
  esp += 4; SPILL(); return;
L_d62382: /* d62382: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* d62385: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d62387: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* d6238a: ret  */
  esp += 4; SPILL(); return;
}

void f_d623a0(void) {
  LOAD_REGS();
L_d623a0: /* d623a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d623a1: call 0xd5133e */
  esp -= 4; W32(esp, 0xd623a6u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d623a6: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d623aa: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d623ac: jl 0xd623c8 */
  if ((sf != of)) goto L_d623c8;
L_d623ae: /* d623ae: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* d623b1: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d623b3: je 0xd623c8 */
  if (zf) goto L_d623c8;
L_d623b5: /* d623b5: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* d623b8: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d623ba: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* d623bd: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d623bf: jae 0xd623c8 */
  if (!cf) goto L_d623c8;
L_d623c1: /* d623c1: mov eax, edx */
  eax = edx;
/* d623c3: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* d623c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d623c7: ret  */
  esp += 4; SPILL(); return;
L_d623c8: /* d623c8: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* d623cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d623cc: ret  */
  esp += 4; SPILL(); return;
}

void f_d623e0(void) {
  LOAD_REGS();
L_d623e0: /* d623e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d623e2: push 0xd65c29 */
  { uint32_t v = 0xd65c29u; esp -= 4; W32(esp, v); }
/* d623e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d623ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d623ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d623f5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d623f8: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* d623fc: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d623ff: mov ecx, esp */
  ecx = esp;
/* d62401: mov dword ptr [esp + 0x1c], esp */
  W32((uint32_t)(esp + 0x1cu), esp);
/* d62405: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d62406: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd6240cu); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d6240c: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* d62410: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d62413: mov ecx, esp */
  ecx = esp;
/* d62415: mov dword ptr [esp + 0x3c], esp */
  W32((uint32_t)(esp + 0x3cu), esp);
/* d62419: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d6241a: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* d62422: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd62428u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d62428: mov dword ptr [esp + 0x48], 0xffffffff */
  W32((uint32_t)(esp + 0x48u), 0xffffffffu);
/* d62430: call 0xd5133e */
  esp -= 4; W32(esp, 0xd62435u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d62435: mov ecx, eax */
  ecx = eax;
/* d62437: call 0xd51352 */
  esp -= 4; W32(esp, 0xd6243cu); SPILL(); f_d51352(); if (g_unwind) return; RELOAD();
/* d6243c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d62440: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d62447: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d6244a: ret  */
  esp += 4; SPILL(); return;
}

void f_d62470(void) {
  LOAD_REGS();
L_d62470: /* d62470: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d62471: call 0xd5133e */
  esp -= 4; W32(esp, 0xd62476u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d62476: mov esi, eax */
  esi = eax;
/* d62478: push 0xd79bae */
  { uint32_t v = 0xd79baeu; esp -= 4; W32(esp, v); }
/* d6247d: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* d62480: call dword ptr [0xd7a540] */
  esp -= 4; W32(esp, 0xd62486u); SPILL(); f_467690(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@PBD@Z */ RELOAD();
/* d62486: push 0xd79baf */
  { uint32_t v = 0xd79bafu; esp -= 4; W32(esp, v); }
/* d6248b: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* d6248e: call dword ptr [0xd7a540] */
  esp -= 4; W32(esp, 0xd62494u); SPILL(); f_467690(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@PBD@Z */ RELOAD();
/* d62494: mov ecx, esi */
  ecx = esi;
/* d62496: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d62497: jmp 0xd5130c */
  SPILL(); f_d5130c(); return;
}

void f_d624b0(void) {
  LOAD_REGS();
L_d624b0: /* d624b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d624b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d624b5: call 0xd5133e */
  esp -= 4; W32(esp, 0xd624bau); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d624ba: mov ecx, eax */
  ecx = eax;
/* d624bc: call 0xd51523 */
  esp -= 4; W32(esp, 0xd624c1u); SPILL(); f_d51523(); if (g_unwind) return; RELOAD();
/* d624c1: ret  */
  esp += 4; SPILL(); return;
}

void f_d624e0(void) {
  LOAD_REGS();
L_d624e0: /* d624e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d624e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d624e5: call 0xd5133e */
  esp -= 4; W32(esp, 0xd624eau); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d624ea: mov ecx, eax */
  ecx = eax;
/* d624ec: call 0xd51c5d */
  esp -= 4; W32(esp, 0xd624f1u); SPILL(); f_d51c5d(); if (g_unwind) return; RELOAD();
/* d624f1: ret  */
  esp += 4; SPILL(); return;
}

void f_d62510(void) {
  LOAD_REGS();
L_d62510: /* d62510: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d62511: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* d62515: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d62518: mov ecx, esp */
  ecx = esp;
/* d6251a: mov dword ptr [esp + 0x1c], esp */
  W32((uint32_t)(esp + 0x1cu), esp);
/* d6251e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6251f: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd62525u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d62525: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* d62529: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d6252a: call 0xd5133e */
  esp -= 4; W32(esp, 0xd6252fu); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d6252f: mov ecx, eax */
  ecx = eax;
/* d62531: call 0xd51ae6 */
  esp -= 4; W32(esp, 0xd62536u); SPILL(); f_d51ae6(); if (g_unwind) return; RELOAD();
/* d62536: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d62537: ret  */
  esp += 4; SPILL(); return;
}

void f_d62550(void) {
  LOAD_REGS();
L_d62550: /* d62550: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d62552: push 0xd65c49 */
  { uint32_t v = 0xd65c49u; esp -= 4; W32(esp, v); }
/* d62557: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d6255d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6255e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d62565: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d62568: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* d6256c: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d6256f: mov ecx, esp */
  ecx = esp;
/* d62571: mov dword ptr [esp + 0x1c], esp */
  W32((uint32_t)(esp + 0x1cu), esp);
/* d62575: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d62576: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd6257cu); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d6257c: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* d62580: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d62583: mov ecx, esp */
  ecx = esp;
/* d62585: mov dword ptr [esp + 0x3c], esp */
  W32((uint32_t)(esp + 0x3cu), esp);
/* d62589: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d6258a: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* d62592: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd62598u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d62598: mov eax, dword ptr [esp + 0x50] */
  eax = R32((uint32_t)(esp + 0x50u));
/* d6259c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6259d: mov dword ptr [esp + 0x4c], 0xffffffff */
  W32((uint32_t)(esp + 0x4cu), 0xffffffffu);
/* d625a5: call 0xd5133e */
  esp -= 4; W32(esp, 0xd625aau); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d625aa: mov ecx, eax */
  ecx = eax;
/* d625ac: call 0xd517a3 */
  esp -= 4; W32(esp, 0xd625b1u); SPILL(); f_d517a3(); if (g_unwind) return; RELOAD();
/* d625b1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d625b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d625bc: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d625bf: ret  */
  esp += 4; SPILL(); return;
}

void f_d625e0(void) {
  LOAD_REGS();
L_d625e0: /* d625e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d625e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d625e2: call 0xd5133e */
  esp -= 4; W32(esp, 0xd625e7u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d625e7: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* d625eb: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d625ed: mov esi, eax */
  esi = eax;
/* d625ef: jl 0xd62612 */
  if ((sf != of)) goto L_d62612;
L_d625f1: /* d625f1: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* d625f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d625f6: je 0xd62612 */
  if (zf) goto L_d62612;
L_d625f8: /* d625f8: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* d625fb: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d625fd: mov eax, 0x38e38e39 */
  eax = 0x38e38e39u;
/* d62602: imul ecx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ecx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* d62604: sar edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* d62607: mov eax, edx */
  eax = edx;
/* d62609: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* d6260c: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* d6260e: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d62610: jb 0xd62617 */
  if (cf) goto L_d62617;
L_d62612: /* d62612: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d62613: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* d62615: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d62616: ret  */
  esp += 4; SPILL(); return;
L_d62617: /* d62617: mov cl, byte ptr [esp + 0x10] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x10u))) & 0xffu);
/* d6261b: mov dword ptr [esi + 0x24], edi */
  W32((uint32_t)(esi + 0x24u), edi);
/* d6261e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d6261f: mov byte ptr [esi + 0x20], cl */
  W8((uint32_t)(esi + 0x20u), (ecx & 0xffu));
/* d62622: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* d62624: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d62625: ret  */
  esp += 4; SPILL(); return;
}

void f_d62650(void) {
  LOAD_REGS();
L_d62650: /* d62650: call 0xd5133e */
  esp -= 4; W32(esp, 0xd62655u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d62655: mov ecx, eax */
  ecx = eax;
/* d62657: jmp 0xd511d1 */
  SPILL(); f_d511d1(); return;
}

void f_d62670(void) {
  LOAD_REGS();
L_d62670: /* d62670: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d62672: push 0xd65d3b */
  { uint32_t v = 0xd65d3bu; esp -= 4; W32(esp, v); }
/* d62677: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d6267d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6267e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d62685: sub esp, 0x1e4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1e4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d6268b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d6268c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d6268d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d6268e: mov esi, dword ptr [esp + 0x204] */
  esi = R32((uint32_t)(esp + 0x204u));
/* d62695: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d62696: mov edi, dword ptr [esp + 0x20c] */
  edi = R32((uint32_t)(esp + 0x20cu));
/* d6269d: lea eax, [esi + edi] */
  eax = (uint32_t)(esi + edi);
/* d626a0: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* d626a4: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* d626ac: mov ebp, esi */
  ebp = esi;
/* d626ae: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* d626b2: call dword ptr [0xd7a574] */
  esp -= 4; W32(esp, 0xd626b8u); SPILL(); f_465a76(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d626b8: lea ecx, [edi + edi] */
  ecx = (uint32_t)(edi + edi);
/* d626bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d626bc: mov ebx, 1 */
  ebx = 0x1u;
/* d626c1: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d626c5: mov dword ptr [esp + 0x200], ebx */
  W32((uint32_t)(esp + 0x200u), ebx);
/* d626cc: call dword ptr [0xd7a550] */
  esp -= 4; W32(esp, 0xd626d2u); SPILL(); f_466cef(); if (g_unwind) return; /* MSVCP70!?reserve@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEXI@Z */ RELOAD();
/* d626d2: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* d626d6: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d626d8: jae 0xd62a71 */
  if (!cf) goto L_d62a71;
L_d626de: /* d626de: mov edi, edi */
  edi = edi;
L_d626e0: /* d626e0: xor esi, esi */
  esi = 0;
L_d626e2: /* d626e2: mov ecx, esi */
  ecx = esi;
/* d626e4: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* d626e6: sub ecx, 0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* d626e9: je 0xd626f5 */
  if (zf) goto L_d626f5;
L_d626eb: /* d626eb: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* d626ec: jne 0xd626fb */
  if (!zf) goto L_d626fb;
L_d626ee: /* d626ee: mov al, byte ptr [ebp] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* d626f1: and al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* d626f3: jmp 0xd626fb */
  goto L_d626fb;
L_d626f5: /* d626f5: mov al, byte ptr [ebp] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp))) & 0xffu);
/* d626f8: shr al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 4;
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_d626fb: /* d626fb: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* d626fe: cmp eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d62701: ja 0xd62a5e */
  if ((!cf && !zf)) goto L_d62a5e;
L_d62707: /* d62707: jmp dword ptr [eax*4 + 0xd62ab8] */
  switch (R32((uint32_t)(eax*4 + 0xd62ab8u))) {
    case 0xd6270eu: goto L_d6270e;
    case 0xd62744u: goto L_d62744;
    case 0xd62774u: goto L_d62774;
    case 0xd627aau: goto L_d627aa;
    case 0xd627e0u: goto L_d627e0;
    case 0xd62816u: goto L_d62816;
    case 0xd6284cu: goto L_d6284c;
    case 0xd6287cu: goto L_d6287c;
    case 0xd628b2u: goto L_d628b2;
    case 0xd628e2u: goto L_d628e2;
    case 0xd62918u: goto L_d62918;
    case 0xd6294eu: goto L_d6294e;
    case 0xd62984u: goto L_d62984;
    case 0xd629bau: goto L_d629ba;
    case 0xd629edu: goto L_d629ed;
    case 0xd62a20u: goto L_d62a20;
    default: guest_badjump(0xd62707, R32((uint32_t)(eax*4 + 0xd62ab8u))); return;
  }
L_d6270e: /* d6270e: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* d62710: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* d62714: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d62715: lea eax, [esp + 0x1c4] */
  eax = (uint32_t)(esp + 0x1c4u);
/* d6271c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6271d: call 0xd64212 */
  esp -= 4; W32(esp, 0xd62722u); SPILL(); f_d64212(); if (g_unwind) return; RELOAD();
/* d62722: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d62725: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d62726: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d6272a: mov byte ptr [esp + 0x200], 2 */
  W8((uint32_t)(esp + 0x200u), 0x2u);
/* d62732: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd62738u); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d62738: lea ecx, [esp + 0x1bc] */
  ecx = (uint32_t)(esp + 0x1bcu);
/* d6273f: jmp 0xd62a51 */
  goto L_d62a51;
L_d62744: /* d62744: push 0x31 */
  { uint32_t v = 0x31u; esp -= 4; W32(esp, v); }
/* d62746: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d6274a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d6274b: lea edx, [esp + 0x74] */
  edx = (uint32_t)(esp + 0x74u);
/* d6274f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d62750: call 0xd64212 */
  esp -= 4; W32(esp, 0xd62755u); SPILL(); f_d64212(); if (g_unwind) return; RELOAD();
/* d62755: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d62758: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d62759: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d6275d: mov byte ptr [esp + 0x200], 3 */
  W8((uint32_t)(esp + 0x200u), 0x3u);
/* d62765: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd6276bu); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d6276b: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* d6276f: jmp 0xd62a51 */
  goto L_d62a51;
L_d62774: /* d62774: push 0x32 */
  { uint32_t v = 0x32u; esp -= 4; W32(esp, v); }
/* d62776: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* d6277a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6277b: lea ecx, [esp + 0x18c] */
  ecx = (uint32_t)(esp + 0x18cu);
/* d62782: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d62783: call 0xd64212 */
  esp -= 4; W32(esp, 0xd62788u); SPILL(); f_d64212(); if (g_unwind) return; RELOAD();
/* d62788: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d6278b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6278c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d62790: mov byte ptr [esp + 0x200], 4 */
  W8((uint32_t)(esp + 0x200u), 0x4u);
/* d62798: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd6279eu); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d6279e: lea ecx, [esp + 0x184] */
  ecx = (uint32_t)(esp + 0x184u);
/* d627a5: jmp 0xd62a51 */
  goto L_d62a51;
L_d627aa: /* d627aa: push 0x33 */
  { uint32_t v = 0x33u; esp -= 4; W32(esp, v); }
/* d627ac: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* d627b0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d627b1: lea eax, [esp + 0xac] */
  eax = (uint32_t)(esp + 0xacu);
/* d627b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d627b9: call 0xd64212 */
  esp -= 4; W32(esp, 0xd627beu); SPILL(); f_d64212(); if (g_unwind) return; RELOAD();
/* d627be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d627c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d627c2: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d627c6: mov byte ptr [esp + 0x200], 5 */
  W8((uint32_t)(esp + 0x200u), 0x5u);
/* d627ce: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd627d4u); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d627d4: lea ecx, [esp + 0xa4] */
  ecx = (uint32_t)(esp + 0xa4u);
/* d627db: jmp 0xd62a51 */
  goto L_d62a51;
L_d627e0: /* d627e0: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* d627e2: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d627e6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d627e7: lea edx, [esp + 0x154] */
  edx = (uint32_t)(esp + 0x154u);
/* d627ee: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d627ef: call 0xd64212 */
  esp -= 4; W32(esp, 0xd627f4u); SPILL(); f_d64212(); if (g_unwind) return; RELOAD();
/* d627f4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d627f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d627f8: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d627fc: mov byte ptr [esp + 0x200], 6 */
  W8((uint32_t)(esp + 0x200u), 0x6u);
/* d62804: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd6280au); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d6280a: lea ecx, [esp + 0x14c] */
  ecx = (uint32_t)(esp + 0x14cu);
/* d62811: jmp 0xd62a51 */
  goto L_d62a51;
L_d62816: /* d62816: push 0x35 */
  { uint32_t v = 0x35u; esp -= 4; W32(esp, v); }
/* d62818: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* d6281c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6281d: lea ecx, [esp + 0xe4] */
  ecx = (uint32_t)(esp + 0xe4u);
/* d62824: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d62825: call 0xd64212 */
  esp -= 4; W32(esp, 0xd6282au); SPILL(); f_d64212(); if (g_unwind) return; RELOAD();
/* d6282a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d6282d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6282e: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d62832: mov byte ptr [esp + 0x200], 7 */
  W8((uint32_t)(esp + 0x200u), 0x7u);
/* d6283a: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd62840u); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d62840: lea ecx, [esp + 0xdc] */
  ecx = (uint32_t)(esp + 0xdcu);
/* d62847: jmp 0xd62a51 */
  goto L_d62a51;
L_d6284c: /* d6284c: push 0x36 */
  { uint32_t v = 0x36u; esp -= 4; W32(esp, v); }
/* d6284e: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* d62852: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d62853: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* d62857: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d62858: call 0xd64212 */
  esp -= 4; W32(esp, 0xd6285du); SPILL(); f_d64212(); if (g_unwind) return; RELOAD();
/* d6285d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d62860: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d62861: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d62865: mov byte ptr [esp + 0x200], 8 */
  W8((uint32_t)(esp + 0x200u), 0x8u);
/* d6286d: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd62873u); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d62873: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* d62877: jmp 0xd62a51 */
  goto L_d62a51;
L_d6287c: /* d6287c: push 0x37 */
  { uint32_t v = 0x37u; esp -= 4; W32(esp, v); }
/* d6287e: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d62882: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d62883: lea edx, [esp + 0x11c] */
  edx = (uint32_t)(esp + 0x11cu);
/* d6288a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d6288b: call 0xd64212 */
  esp -= 4; W32(esp, 0xd62890u); SPILL(); f_d64212(); if (g_unwind) return; RELOAD();
/* d62890: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d62893: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d62894: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d62898: mov byte ptr [esp + 0x200], 9 */
  W8((uint32_t)(esp + 0x200u), 0x9u);
/* d628a0: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd628a6u); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d628a6: lea ecx, [esp + 0x114] */
  ecx = (uint32_t)(esp + 0x114u);
/* d628ad: jmp 0xd62a51 */
  goto L_d62a51;
L_d628b2: /* d628b2: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* d628b4: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* d628b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d628b9: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* d628bd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d628be: call 0xd64212 */
  esp -= 4; W32(esp, 0xd628c3u); SPILL(); f_d64212(); if (g_unwind) return; RELOAD();
/* d628c3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d628c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d628c7: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d628cb: mov byte ptr [esp + 0x200], 0xa */
  W8((uint32_t)(esp + 0x200u), 0xau);
/* d628d3: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd628d9u); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d628d9: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* d628dd: jmp 0xd62a51 */
  goto L_d62a51;
L_d628e2: /* d628e2: push 0x39 */
  { uint32_t v = 0x39u; esp -= 4; W32(esp, v); }
/* d628e4: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* d628e8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d628e9: lea eax, [esp + 0x90] */
  eax = (uint32_t)(esp + 0x90u);
/* d628f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d628f1: call 0xd64212 */
  esp -= 4; W32(esp, 0xd628f6u); SPILL(); f_d64212(); if (g_unwind) return; RELOAD();
/* d628f6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d628f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d628fa: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d628fe: mov byte ptr [esp + 0x200], 0xb */
  W8((uint32_t)(esp + 0x200u), 0xbu);
/* d62906: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd6290cu); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d6290c: lea ecx, [esp + 0x88] */
  ecx = (uint32_t)(esp + 0x88u);
/* d62913: jmp 0xd62a51 */
  goto L_d62a51;
L_d62918: /* d62918: push 0x41 */
  { uint32_t v = 0x41u; esp -= 4; W32(esp, v); }
/* d6291a: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d6291e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d6291f: lea edx, [esp + 0xc8] */
  edx = (uint32_t)(esp + 0xc8u);
/* d62926: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d62927: call 0xd64212 */
  esp -= 4; W32(esp, 0xd6292cu); SPILL(); f_d64212(); if (g_unwind) return; RELOAD();
/* d6292c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d6292f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d62930: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d62934: mov byte ptr [esp + 0x200], 0xc */
  W8((uint32_t)(esp + 0x200u), 0xcu);
/* d6293c: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd62942u); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d62942: lea ecx, [esp + 0xc0] */
  ecx = (uint32_t)(esp + 0xc0u);
/* d62949: jmp 0xd62a51 */
  goto L_d62a51;
L_d6294e: /* d6294e: push 0x42 */
  { uint32_t v = 0x42u; esp -= 4; W32(esp, v); }
/* d62950: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* d62954: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d62955: lea ecx, [esp + 0x100] */
  ecx = (uint32_t)(esp + 0x100u);
/* d6295c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d6295d: call 0xd64212 */
  esp -= 4; W32(esp, 0xd62962u); SPILL(); f_d64212(); if (g_unwind) return; RELOAD();
/* d62962: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d62965: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d62966: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d6296a: mov byte ptr [esp + 0x200], 0xd */
  W8((uint32_t)(esp + 0x200u), 0xdu);
/* d62972: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd62978u); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d62978: lea ecx, [esp + 0xf8] */
  ecx = (uint32_t)(esp + 0xf8u);
/* d6297f: jmp 0xd62a51 */
  goto L_d62a51;
L_d62984: /* d62984: push 0x43 */
  { uint32_t v = 0x43u; esp -= 4; W32(esp, v); }
/* d62986: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* d6298a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d6298b: lea eax, [esp + 0x138] */
  eax = (uint32_t)(esp + 0x138u);
/* d62992: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d62993: call 0xd64212 */
  esp -= 4; W32(esp, 0xd62998u); SPILL(); f_d64212(); if (g_unwind) return; RELOAD();
/* d62998: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d6299b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6299c: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d629a0: mov byte ptr [esp + 0x200], 0xe */
  W8((uint32_t)(esp + 0x200u), 0xeu);
/* d629a8: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd629aeu); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d629ae: lea ecx, [esp + 0x130] */
  ecx = (uint32_t)(esp + 0x130u);
/* d629b5: jmp 0xd62a51 */
  goto L_d62a51;
L_d629ba: /* d629ba: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* d629bc: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d629c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d629c1: lea edx, [esp + 0x170] */
  edx = (uint32_t)(esp + 0x170u);
/* d629c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d629c9: call 0xd64212 */
  esp -= 4; W32(esp, 0xd629ceu); SPILL(); f_d64212(); if (g_unwind) return; RELOAD();
/* d629ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d629d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d629d2: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d629d6: mov byte ptr [esp + 0x200], 0xf */
  W8((uint32_t)(esp + 0x200u), 0xfu);
/* d629de: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd629e4u); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d629e4: lea ecx, [esp + 0x168] */
  ecx = (uint32_t)(esp + 0x168u);
/* d629eb: jmp 0xd62a51 */
  goto L_d62a51;
L_d629ed: /* d629ed: push 0x45 */
  { uint32_t v = 0x45u; esp -= 4; W32(esp, v); }
/* d629ef: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* d629f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d629f4: lea ecx, [esp + 0x1a8] */
  ecx = (uint32_t)(esp + 0x1a8u);
/* d629fb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d629fc: call 0xd64212 */
  esp -= 4; W32(esp, 0xd62a01u); SPILL(); f_d64212(); if (g_unwind) return; RELOAD();
/* d62a01: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d62a04: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d62a05: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d62a09: mov byte ptr [esp + 0x200], 0x10 */
  W8((uint32_t)(esp + 0x200u), 0x10u);
/* d62a11: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd62a17u); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d62a17: lea ecx, [esp + 0x1a0] */
  ecx = (uint32_t)(esp + 0x1a0u);
/* d62a1e: jmp 0xd62a51 */
  goto L_d62a51;
L_d62a20: /* d62a20: push 0x46 */
  { uint32_t v = 0x46u; esp -= 4; W32(esp, v); }
/* d62a22: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* d62a26: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d62a27: lea eax, [esp + 0x1e0] */
  eax = (uint32_t)(esp + 0x1e0u);
/* d62a2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d62a2f: call 0xd64212 */
  esp -= 4; W32(esp, 0xd62a34u); SPILL(); f_d64212(); if (g_unwind) return; RELOAD();
/* d62a34: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d62a37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d62a38: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* d62a3c: mov byte ptr [esp + 0x200], 0x11 */
  W8((uint32_t)(esp + 0x200u), 0x11u);
/* d62a44: call dword ptr [0xd7a570] */
  esp -= 4; W32(esp, 0xd62a4au); SPILL(); f_467980(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */ RELOAD();
/* d62a4a: lea ecx, [esp + 0x1d8] */
  ecx = (uint32_t)(esp + 0x1d8u);
L_d62a51: /* d62a51: mov byte ptr [esp + 0x1fc], bl */
  W8((uint32_t)(esp + 0x1fcu), (ebx & 0xffu));
/* d62a58: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd62a5eu); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
L_d62a5e: /* d62a5e: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* d62a5f: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d62a62: jl 0xd626e2 */
  if ((sf != of)) goto L_d626e2;
L_d62a68: /* d62a68: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* d62a69: cmp ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d62a6b: jb 0xd626e0 */
  if (cf) goto L_d626e0;
L_d62a71: /* d62a71: mov esi, dword ptr [esp + 0x204] */
  esi = R32((uint32_t)(esp + 0x204u));
/* d62a78: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* d62a7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d62a7d: mov ecx, esi */
  ecx = esi;
/* d62a7f: call dword ptr [0xd7a5a8] */
  esp -= 4; W32(esp, 0xd62a85u); SPILL(); f_4675a8(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z */ RELOAD();
/* d62a85: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* d62a89: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* d62a8d: mov byte ptr [esp + 0x1fc], 0 */
  W8((uint32_t)(esp + 0x1fcu), 0x0u);
/* d62a95: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd62a9bu); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d62a9b: mov ecx, dword ptr [esp + 0x1f4] */
  ecx = R32((uint32_t)(esp + 0x1f4u));
/* d62aa2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d62aa3: mov eax, esi */
  eax = esi;
/* d62aa5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d62aa6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d62aa7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d62aa8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d62aaf: add esp, 0x1f0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1f0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d62ab5: ret  */
  esp += 4; SPILL(); return;
}

void f_d62c30(void) {
  LOAD_REGS();
L_d62c30: /* d62c30: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* d62c34: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d62c35: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d62c36: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* d62c3a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d62c3b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d62c3c: mov edi, dword ptr [esp + 0x30] */
  edi = R32((uint32_t)(esp + 0x30u));
/* d62c40: lea eax, [edi + ecx] */
  eax = (uint32_t)(edi + ecx);
/* d62c43: mov edx, ecx */
  edx = ecx;
/* d62c45: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* d62c48: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* d62c4c: xor eax, eax */
  eax = 0;
/* d62c4e: mov ebx, edi */
  ebx = edi;
/* d62c50: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* d62c52: mov ecx, edx */
  ecx = edx;
/* d62c54: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* d62c57: xor esi, esi */
  esi = 0;
/* d62c59: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* d62c5b: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* d62c5d: jle 0xd62ce0 */
  if ((zf || sf != of)) goto L_d62ce0;
L_d62c63: /* d62c63: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
L_d62c67: /* d62c67: cmp ebx, dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d62c6b: jae 0xd62ce0 */
  if (!cf) goto L_d62ce0;
L_d62c6d: /* d62c6d: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* d62c6f: xor edx, edx */
  edx = 0;
L_d62c71: /* d62c71: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* d62c75: shl al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 4;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* d62c78: cmp edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d62c7b: jae 0xd62c81 */
  if (!cf) goto L_d62c81;
L_d62c7d: /* d62c7d: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
L_d62c81: /* d62c81: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d62c83: movsx ecx, byte ptr [ecx + esi] */
  ecx = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ecx + esi)));
/* d62c87: add ecx, -0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffd0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d62c8a: cmp ecx, 0x16 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x16u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d62c8d: ja 0xd62cd0 */
  if ((!cf && !zf)) goto L_d62cd0;
L_d62c8f: /* d62c8f: jmp dword ptr [ecx*4 + 0xd62cf0] */
  switch (R32((uint32_t)(ecx*4 + 0xd62cf0u))) {
    case 0xd62c96u: goto L_d62c96;
    case 0xd62c9au: goto L_d62c9a;
    case 0xd62c9eu: goto L_d62c9e;
    case 0xd62ca2u: goto L_d62ca2;
    case 0xd62ca6u: goto L_d62ca6;
    case 0xd62caau: goto L_d62caa;
    case 0xd62caeu: goto L_d62cae;
    case 0xd62cb2u: goto L_d62cb2;
    case 0xd62cb6u: goto L_d62cb6;
    case 0xd62cbau: goto L_d62cba;
    case 0xd62cbeu: goto L_d62cbe;
    case 0xd62cc2u: goto L_d62cc2;
    case 0xd62cc6u: goto L_d62cc6;
    case 0xd62ccau: goto L_d62cca;
    case 0xd62cceu: goto L_d62cce;
    case 0xd62cd0u: goto L_d62cd0;
    default: guest_badjump(0xd62c8f, R32((uint32_t)(ecx*4 + 0xd62cf0u))); return;
  }
L_d62c96: /* d62c96: or al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* d62c98: jmp 0xd62cd0 */
  goto L_d62cd0;
L_d62c9a: /* d62c9a: or al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* d62c9c: jmp 0xd62cd0 */
  goto L_d62cd0;
L_d62c9e: /* d62c9e: or al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* d62ca0: jmp 0xd62cd0 */
  goto L_d62cd0;
L_d62ca2: /* d62ca2: or al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* d62ca4: jmp 0xd62cd0 */
  goto L_d62cd0;
L_d62ca6: /* d62ca6: or al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* d62ca8: jmp 0xd62cd0 */
  goto L_d62cd0;
L_d62caa: /* d62caa: or al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* d62cac: jmp 0xd62cd0 */
  goto L_d62cd0;
L_d62cae: /* d62cae: or al, 7 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* d62cb0: jmp 0xd62cd0 */
  goto L_d62cd0;
L_d62cb2: /* d62cb2: or al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* d62cb4: jmp 0xd62cd0 */
  goto L_d62cd0;
L_d62cb6: /* d62cb6: or al, 9 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* d62cb8: jmp 0xd62cd0 */
  goto L_d62cd0;
L_d62cba: /* d62cba: or al, 0xa */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* d62cbc: jmp 0xd62cd0 */
  goto L_d62cd0;
L_d62cbe: /* d62cbe: or al, 0xb */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xbu);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* d62cc0: jmp 0xd62cd0 */
  goto L_d62cd0;
L_d62cc2: /* d62cc2: or al, 0xc */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xcu);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* d62cc4: jmp 0xd62cd0 */
  goto L_d62cd0;
L_d62cc6: /* d62cc6: or al, 0xd */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xdu);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* d62cc8: jmp 0xd62cd0 */
  goto L_d62cd0;
L_d62cca: /* d62cca: or al, 0xe */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xeu);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* d62ccc: jmp 0xd62cd0 */
  goto L_d62cd0;
L_d62cce: /* d62cce: or al, 0xf */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
L_d62cd0: /* d62cd0: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* d62cd1: cmp edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d62cd4: jl 0xd62c71 */
  if ((sf != of)) goto L_d62c71;
L_d62cd6: /* d62cd6: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* d62cd8: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d62cdb: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* d62cdc: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d62cde: jl 0xd62c67 */
  if ((sf != of)) goto L_d62c67;
L_d62ce0: /* d62ce0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d62ce1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d62ce2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d62ce3: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* d62ce7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d62ce8: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d62da0(void) {
  LOAD_REGS();
L_d62da0: /* d62da0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d62da1: push 0xd79bb8 */
  { uint32_t v = 0xd79bb8u; esp -= 4; W32(esp, v); }
/* d62da6: mov esi, ecx */
  esi = ecx;
/* d62da8: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd62daeu); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d62dae: mov eax, esi */
  eax = esi;
/* d62db0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d62db1: ret  */
  esp += 4; SPILL(); return;
}

void f_d62dd0(void) {
  LOAD_REGS();
L_d62dd0: /* d62dd0: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d62df0(void) {
  LOAD_REGS();
L_d62df0: /* d62df0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d62df1: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d62df5: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d62df8: mov ecx, esp */
  ecx = esp;
/* d62dfa: mov dword ptr [esp + 0x1c], esp */
  W32((uint32_t)(esp + 0x1cu), esp);
/* d62dfe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d62dff: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd62e05u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d62e05: call 0xd5133e */
  esp -= 4; W32(esp, 0xd62e0au); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d62e0a: mov ecx, eax */
  ecx = eax;
/* d62e0c: call 0xd511cc */
  esp -= 4; W32(esp, 0xd62e11u); SPILL(); f_d511cc(); if (g_unwind) return; RELOAD();
/* d62e11: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d62e12: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d62e30(void) {
  LOAD_REGS();
L_d62e30: /* d62e30: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d62e31: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* d62e35: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d62e36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d62e37: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* d62e3f: call 0xd5133e */
  esp -= 4; W32(esp, 0xd62e44u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d62e44: mov ecx, eax */
  ecx = eax;
/* d62e46: call 0xd51032 */
  esp -= 4; W32(esp, 0xd62e4bu); SPILL(); f_d51032(); if (g_unwind) return; RELOAD();
/* d62e4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d62e4c: call 0xd5133e */
  esp -= 4; W32(esp, 0xd62e51u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d62e51: mov ecx, eax */
  ecx = eax;
/* d62e53: call 0xd51523 */
  esp -= 4; W32(esp, 0xd62e58u); SPILL(); f_d51523(); if (g_unwind) return; RELOAD();
/* d62e58: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* d62e5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d62e5d: mov ecx, esi */
  ecx = esi;
/* d62e5f: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd62e65u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d62e65: mov eax, esi */
  eax = esi;
/* d62e67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d62e68: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d62e69: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d62e80(void) {
  LOAD_REGS();
L_d62e80: /* d62e80: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* d62e82: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d62ea0(void) {
  LOAD_REGS();
L_d62ea0: /* d62ea0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d62ea1: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d62ea4: mov eax, ecx */
  eax = ecx;
/* d62ea6: mov ecx, esp */
  ecx = esp;
/* d62ea8: mov dword ptr [esp + 0x1c], esp */
  W32((uint32_t)(esp + 0x1cu), esp);
/* d62eac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d62ead: call dword ptr [0xd7a5a8] */
  esp -= 4; W32(esp, 0xd62eb3u); SPILL(); f_4675a8(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z */ RELOAD();
/* d62eb3: call 0xd5133e */
  esp -= 4; W32(esp, 0xd62eb8u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d62eb8: mov ecx, eax */
  ecx = eax;
/* d62eba: call 0xd511cc */
  esp -= 4; W32(esp, 0xd62ebfu); SPILL(); f_d511cc(); if (g_unwind) return; RELOAD();
/* d62ebf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d62ec0: ret  */
  esp += 4; SPILL(); return;
}

void f_d62ee0(void) {
  LOAD_REGS();
L_d62ee0: /* d62ee0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d62ee4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d62ee5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d62ee6: mov esi, ecx */
  esi = ecx;
/* d62ee8: call 0xd5133e */
  esp -= 4; W32(esp, 0xd62eedu); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d62eed: mov ecx, eax */
  ecx = eax;
/* d62eef: call 0xd51523 */
  esp -= 4; W32(esp, 0xd62ef4u); SPILL(); f_d51523(); if (g_unwind) return; RELOAD();
/* d62ef4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d62ef5: mov ecx, esi */
  ecx = esi;
/* d62ef7: call dword ptr [0xd7a540] */
  esp -= 4; W32(esp, 0xd62efdu); SPILL(); f_467690(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@PBD@Z */ RELOAD();
/* d62efd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d62efe: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d62f20(void) {
  LOAD_REGS();
L_d62f20: /* d62f20: xor eax, eax */
  eax = 0;
/* d62f22: ret  */
  esp += 4; SPILL(); return;
}

void f_d62f40(void) {
  LOAD_REGS();
L_d62f40: /* d62f40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d62f41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d62f42: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* d62f46: push 0xd79bbc */
  { uint32_t v = 0xd79bbcu; esp -= 4; W32(esp, v); }
/* d62f4b: mov ecx, esi */
  ecx = esi;
/* d62f4d: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* d62f55: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd62f5bu); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d62f5b: mov eax, esi */
  eax = esi;
/* d62f5d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d62f5e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d62f5f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d62f80(void) {
  LOAD_REGS();
L_d62f80: /* d62f80: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d62fa0(void) {
  LOAD_REGS();
L_d62fa0: /* d62fa0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d62fa2: push 0xd65d92 */
  { uint32_t v = 0xd65d92u; esp -= 4; W32(esp, v); }
/* d62fa7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d62fad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d62fae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d62fb5: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d62fb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d62fb9: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d62fbb: mov esi, ecx */
  esi = ecx;
/* d62fbd: call 0xd5133e */
  esp -= 4; W32(esp, 0xd62fc2u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d62fc2: mov ecx, eax */
  ecx = eax;
/* d62fc4: call 0xd51523 */
  esp -= 4; W32(esp, 0xd62fc9u); SPILL(); f_d51523(); if (g_unwind) return; RELOAD();
/* d62fc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d62fca: mov ecx, esi */
  ecx = esi;
/* d62fcc: call dword ptr [0xd7a540] */
  esp -= 4; W32(esp, 0xd62fd2u); SPILL(); f_467690(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@PBD@Z */ RELOAD();
/* d62fd2: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* d62fd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d62fd7: call 0xd5133e */
  esp -= 4; W32(esp, 0xd62fdcu); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d62fdc: mov ecx, eax */
  ecx = eax;
/* d62fde: call 0xd51032 */
  esp -= 4; W32(esp, 0xd62fe3u); SPILL(); f_d51032(); if (g_unwind) return; RELOAD();
/* d62fe3: mov esi, eax */
  esi = eax;
/* d62fe5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d62fe6: call 0xd5133e */
  esp -= 4; W32(esp, 0xd62febu); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d62feb: mov ecx, eax */
  ecx = eax;
/* d62fed: call 0xd51523 */
  esp -= 4; W32(esp, 0xd62ff2u); SPILL(); f_d51523(); if (g_unwind) return; RELOAD();
/* d62ff2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d62ff3: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* d62ff7: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd62ffdu); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d62ffd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d62ffe: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* d63006: call 0xd5133e */
  esp -= 4; W32(esp, 0xd6300bu); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d6300b: mov ecx, eax */
  ecx = eax;
/* d6300d: call 0xd51343 */
  esp -= 4; W32(esp, 0xd63012u); SPILL(); f_d51343(); if (g_unwind) return; RELOAD();
/* d63012: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d63015: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* d63019: mov ecx, esp */
  ecx = esp;
/* d6301b: mov dword ptr [esp + 0x50], esp */
  W32((uint32_t)(esp + 0x50u), esp);
/* d6301f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d63020: call dword ptr [0xd7a5a8] */
  esp -= 4; W32(esp, 0xd63026u); SPILL(); f_4675a8(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z */ RELOAD();
/* d63026: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d63029: mov ecx, esp */
  ecx = esp;
/* d6302b: mov dword ptr [esp + 0x3c], esp */
  W32((uint32_t)(esp + 0x3cu), esp);
/* d6302f: push 0xd78014 */
  { uint32_t v = 0xd78014u; esp -= 4; W32(esp, v); }
/* d63034: mov byte ptr [esp + 0x68], 1 */
  W8((uint32_t)(esp + 0x68u), 0x1u);
/* d63039: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd6303fu); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d6303f: mov byte ptr [esp + 0x64], 0 */
  W8((uint32_t)(esp + 0x64u), 0x0u);
/* d63044: call 0xd5133e */
  esp -= 4; W32(esp, 0xd63049u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d63049: mov ecx, eax */
  ecx = eax;
/* d6304b: call 0xd51613 */
  esp -= 4; W32(esp, 0xd63050u); SPILL(); f_d51613(); if (g_unwind) return; RELOAD();
/* d63050: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* d63054: mov dword ptr [esp + 0x2c], 0xffffffff */
  W32((uint32_t)(esp + 0x2cu), 0xffffffffu);
/* d6305c: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd63062u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d63062: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* d63066: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* d63068: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d6306f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d63070: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d63073: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d630c0(void) {
  LOAD_REGS();
L_d630c0: /* d630c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d630c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d630c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d630c6: mov esi, ecx */
  esi = ecx;
/* d630c8: call 0xd5133e */
  esp -= 4; W32(esp, 0xd630cdu); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d630cd: mov ecx, eax */
  ecx = eax;
/* d630cf: call 0xd51032 */
  esp -= 4; W32(esp, 0xd630d4u); SPILL(); f_d51032(); if (g_unwind) return; RELOAD();
/* d630d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d630d5: call 0xd5133e */
  esp -= 4; W32(esp, 0xd630dau); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d630da: mov ecx, eax */
  ecx = eax;
/* d630dc: call 0xd51523 */
  esp -= 4; W32(esp, 0xd630e1u); SPILL(); f_d51523(); if (g_unwind) return; RELOAD();
/* d630e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d630e2: mov ecx, esi */
  ecx = esi;
/* d630e4: call dword ptr [0xd7a540] */
  esp -= 4; W32(esp, 0xd630eau); SPILL(); f_467690(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@PBD@Z */ RELOAD();
/* d630ea: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* d630ec: mov ecx, esi */
  ecx = esi;
/* d630ee: call 0xd51abe */
  esp -= 4; W32(esp, 0xd630f3u); SPILL(); f_d51abe(); if (g_unwind) return; RELOAD();
/* d630f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d630f4: call 0xd5133e */
  esp -= 4; W32(esp, 0xd630f9u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d630f9: mov ecx, eax */
  ecx = eax;
/* d630fb: call 0xd51582 */
  esp -= 4; W32(esp, 0xd63100u); SPILL(); f_d51582(); if (g_unwind) return; RELOAD();
/* d63100: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d63102: je 0xd63114 */
  if (zf) goto L_d63114;
L_d63104: /* d63104: call 0xd5133e */
  esp -= 4; W32(esp, 0xd63109u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d63109: mov ecx, eax */
  ecx = eax;
/* d6310b: call 0xd511d1 */
  esp -= 4; W32(esp, 0xd63110u); SPILL(); f_d511d1(); if (g_unwind) return; RELOAD();
/* d63110: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d63112: jne 0xd63131 */
  if (!zf) goto L_d63131;
L_d63114: /* d63114: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d63116: call 0xd5133e */
  esp -= 4; W32(esp, 0xd6311bu); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d6311b: mov ecx, eax */
  ecx = eax;
/* d6311d: call 0xd51523 */
  esp -= 4; W32(esp, 0xd63122u); SPILL(); f_d51523(); if (g_unwind) return; RELOAD();
/* d63122: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d63123: mov ecx, esi */
  ecx = esi;
/* d63125: call dword ptr [0xd7a540] */
  esp -= 4; W32(esp, 0xd6312bu); SPILL(); f_467690(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@PBD@Z */ RELOAD();
/* d6312b: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* d6312d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d6312e: ret 4 */
  esp += 8; SPILL(); return;
L_d63131: /* d63131: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* d63133: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d63134: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d63160(void) {
  LOAD_REGS();
L_d63160: /* d63160: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d63162: call 0xd51abe */
  esp -= 4; W32(esp, 0xd63167u); SPILL(); f_d51abe(); if (g_unwind) return; RELOAD();
/* d63167: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d63168: call 0xd5133e */
  esp -= 4; W32(esp, 0xd6316du); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d6316d: mov ecx, eax */
  ecx = eax;
/* d6316f: call 0xd51582 */
  esp -= 4; W32(esp, 0xd63174u); SPILL(); f_d51582(); if (g_unwind) return; RELOAD();
/* d63174: call 0xd5133e */
  esp -= 4; W32(esp, 0xd63179u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d63179: mov ecx, eax */
  ecx = eax;
/* d6317b: jmp 0xd511d1 */
  SPILL(); f_d511d1(); return;
}

void f_d63190(void) {
  LOAD_REGS();
L_d63190: /* d63190: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d63192: push 0xd65db9 */
  { uint32_t v = 0xd65db9u; esp -= 4; W32(esp, v); }
/* d63197: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d6319d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6319e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d631a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d631a6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d631a7: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d631aa: mov esi, ecx */
  esi = ecx;
/* d631ac: mov ecx, esp */
  ecx = esp;
/* d631ae: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* d631b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d631b3: call dword ptr [0xd7a5a8] */
  esp -= 4; W32(esp, 0xd631b9u); SPILL(); f_4675a8(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z */ RELOAD();
/* d631b9: call 0xd5133e */
  esp -= 4; W32(esp, 0xd631beu); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d631be: mov ecx, eax */
  ecx = eax;
/* d631c0: call 0xd511cc */
  esp -= 4; W32(esp, 0xd631c5u); SPILL(); f_d511cc(); if (g_unwind) return; RELOAD();
/* d631c5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d631c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d631c8: call 0xd5133e */
  esp -= 4; W32(esp, 0xd631cdu); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d631cd: mov ecx, eax */
  ecx = eax;
/* d631cf: call 0xd51582 */
  esp -= 4; W32(esp, 0xd631d4u); SPILL(); f_d51582(); if (g_unwind) return; RELOAD();
/* d631d4: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* d631d8: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d631db: mov ecx, esp */
  ecx = esp;
/* d631dd: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* d631e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d631e2: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd631e8u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d631e8: mov edx, dword ptr [esp + 0x34] */
  edx = R32((uint32_t)(esp + 0x34u));
/* d631ec: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d631ef: mov ecx, esp */
  ecx = esp;
/* d631f1: mov dword ptr [esp + 0x54], esp */
  W32((uint32_t)(esp + 0x54u), esp);
/* d631f5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* d631f6: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* d631fe: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd63204u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d63204: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d63207: mov ecx, esp */
  ecx = esp;
/* d63209: mov dword ptr [esp + 0x70], esp */
  W32((uint32_t)(esp + 0x70u), esp);
/* d6320d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d6320e: mov dword ptr [esp + 0x68], 0xffffffff */
  W32((uint32_t)(esp + 0x68u), 0xffffffffu);
/* d63216: call dword ptr [0xd7a5a8] */
  esp -= 4; W32(esp, 0xd6321cu); SPILL(); f_4675a8(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z */ RELOAD();
/* d6321c: call 0xd5133e */
  esp -= 4; W32(esp, 0xd63221u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d63221: mov ecx, eax */
  ecx = eax;
/* d63223: call 0xd511cc */
  esp -= 4; W32(esp, 0xd63228u); SPILL(); f_d511cc(); if (g_unwind) return; RELOAD();
/* d63228: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d63229: call 0xd5133e */
  esp -= 4; W32(esp, 0xd6322eu); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d6322e: mov ecx, eax */
  ecx = eax;
/* d63230: call 0xd517a3 */
  esp -= 4; W32(esp, 0xd63235u); SPILL(); f_d517a3(); if (g_unwind) return; RELOAD();
/* d63235: call 0xd5133e */
  esp -= 4; W32(esp, 0xd6323au); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d6323a: mov ecx, eax */
  ecx = eax;
/* d6323c: call 0xd511d1 */
  esp -= 4; W32(esp, 0xd63241u); SPILL(); f_d511d1(); if (g_unwind) return; RELOAD();
/* d63241: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d63245: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d6324c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d6324d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d63250: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d632a0(void) {
  LOAD_REGS();
L_d632a0: /* d632a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d632a1: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* d632a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d632a6: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d632a9: mov esi, ecx */
  esi = ecx;
/* d632ab: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* d632b3: mov ecx, esp */
  ecx = esp;
/* d632b5: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* d632b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d632ba: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd632c0u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d632c0: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d632c3: mov ecx, esp */
  ecx = esp;
/* d632c5: mov dword ptr [esp + 0x48], esp */
  W32((uint32_t)(esp + 0x48u), esp);
/* d632c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d632ca: call dword ptr [0xd7a5a8] */
  esp -= 4; W32(esp, 0xd632d0u); SPILL(); f_4675a8(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z */ RELOAD();
/* d632d0: call 0xd5133e */
  esp -= 4; W32(esp, 0xd632d5u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d632d5: mov ecx, eax */
  ecx = eax;
/* d632d7: call 0xd511cc */
  esp -= 4; W32(esp, 0xd632dcu); SPILL(); f_d511cc(); if (g_unwind) return; RELOAD();
/* d632dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d632dd: call 0xd5133e */
  esp -= 4; W32(esp, 0xd632e2u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d632e2: mov ecx, eax */
  ecx = eax;
/* d632e4: call 0xd51ae6 */
  esp -= 4; W32(esp, 0xd632e9u); SPILL(); f_d51ae6(); if (g_unwind) return; RELOAD();
/* d632e9: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* d632ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d632ee: mov ecx, esi */
  ecx = esi;
/* d632f0: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd632f6u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d632f6: mov eax, esi */
  eax = esi;
/* d632f8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d632f9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d632fa: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d63320(void) {
  LOAD_REGS();
L_d63320: /* d63320: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d63322: push 0xd65dd9 */
  { uint32_t v = 0xd65dd9u; esp -= 4; W32(esp, v); }
/* d63327: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d6332d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6332e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d63335: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d63338: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d6333b: mov ecx, esp */
  ecx = esp;
/* d6333d: mov dword ptr [esp + 0x1c], esp */
  W32((uint32_t)(esp + 0x1cu), esp);
/* d63341: push 0xd6c32c */
  { uint32_t v = 0xd6c32cu; esp -= 4; W32(esp, v); }
/* d63346: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd6334cu); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d6334c: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d6334f: mov ecx, esp */
  ecx = esp;
/* d63351: mov dword ptr [esp + 0x3c], esp */
  W32((uint32_t)(esp + 0x3cu), esp);
/* d63355: push 0xd6c320 */
  { uint32_t v = 0xd6c320u; esp -= 4; W32(esp, v); }
/* d6335a: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* d63362: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd63368u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d63368: mov dword ptr [esp + 0x48], 0xffffffff */
  W32((uint32_t)(esp + 0x48u), 0xffffffffu);
/* d63370: call 0xd5133e */
  esp -= 4; W32(esp, 0xd63375u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d63375: mov ecx, eax */
  ecx = eax;
/* d63377: call 0xd51352 */
  esp -= 4; W32(esp, 0xd6337cu); SPILL(); f_d51352(); if (g_unwind) return; RELOAD();
/* d6337c: call 0xd5133e */
  esp -= 4; W32(esp, 0xd63381u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d63381: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* d63384: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* d63387: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d63389: jne 0xd6339c */
  if (!zf) goto L_d6339c;
L_d6338b: /* d6338b: xor eax, eax */
  eax = 0;
/* d6338d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d63391: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d63398: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d6339b: ret  */
  esp += 4; SPILL(); return;
L_d6339c: /* d6339c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* d6339f: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* d633a1: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* d633a5: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* d633a8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d633af: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d633b2: ret  */
  esp += 4; SPILL(); return;
}

void f_d633f0(void) {
  LOAD_REGS();
L_d633f0: /* d633f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d633f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d633f2: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d633f5: mov eax, ecx */
  eax = ecx;
/* d633f7: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* d633ff: mov ecx, esp */
  ecx = esp;
/* d63401: mov dword ptr [esp + 0x20], esp */
  W32((uint32_t)(esp + 0x20u), esp);
/* d63405: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d63406: call dword ptr [0xd7a5a8] */
  esp -= 4; W32(esp, 0xd6340cu); SPILL(); f_4675a8(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z */ RELOAD();
/* d6340c: call 0xd5133e */
  esp -= 4; W32(esp, 0xd63411u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d63411: mov ecx, eax */
  ecx = eax;
/* d63413: call 0xd511cc */
  esp -= 4; W32(esp, 0xd63418u); SPILL(); f_d511cc(); if (g_unwind) return; RELOAD();
/* d63418: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d63419: call 0xd5133e */
  esp -= 4; W32(esp, 0xd6341eu); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d6341e: mov ecx, eax */
  ecx = eax;
/* d63420: call 0xd51523 */
  esp -= 4; W32(esp, 0xd63425u); SPILL(); f_d51523(); if (g_unwind) return; RELOAD();
/* d63425: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* d63429: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6342a: mov ecx, esi */
  ecx = esi;
/* d6342c: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd63432u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d63432: mov eax, esi */
  eax = esi;
/* d63434: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d63435: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d63436: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d63460(void) {
  LOAD_REGS();
L_d63460: /* d63460: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d63462: push 0xd65df9 */
  { uint32_t v = 0xd65df9u; esp -= 4; W32(esp, v); }
/* d63467: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d6346d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6346e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d63475: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d63478: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d63479: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* d6347b: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d6347e: mov esi, ecx */
  esi = ecx;
/* d63480: mov ecx, esp */
  ecx = esp;
/* d63482: mov dword ptr [esp + 0x24], esp */
  W32((uint32_t)(esp + 0x24u), esp);
/* d63486: push 0xd78000 */
  { uint32_t v = 0xd78000u; esp -= 4; W32(esp, v); }
/* d6348b: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd63491u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d63491: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* d63495: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d63498: mov ecx, esp */
  ecx = esp;
/* d6349a: mov dword ptr [esp + 0x44], esp */
  W32((uint32_t)(esp + 0x44u), esp);
/* d6349e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6349f: mov dword ptr [esp + 0x54], 0 */
  W32((uint32_t)(esp + 0x54u), 0x0u);
/* d634a7: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd634adu); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d634ad: mov dword ptr [esp + 0x50], 0xffffffff */
  W32((uint32_t)(esp + 0x50u), 0xffffffffu);
/* d634b5: call 0xd5133e */
  esp -= 4; W32(esp, 0xd634bau); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d634ba: mov ecx, eax */
  ecx = eax;
/* d634bc: call 0xd511a9 */
  esp -= 4; W32(esp, 0xd634c1u); SPILL(); f_d511a9(); if (g_unwind) return; RELOAD();
/* d634c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d634c2: call 0xd5133e */
  esp -= 4; W32(esp, 0xd634c7u); SPILL(); f_d5133e(); if (g_unwind) return; RELOAD();
/* d634c7: mov ecx, eax */
  ecx = eax;
/* d634c9: call 0xd51523 */
  esp -= 4; W32(esp, 0xd634ceu); SPILL(); f_d51523(); if (g_unwind) return; RELOAD();
/* d634ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d634cf: mov ecx, esi */
  ecx = esi;
/* d634d1: call dword ptr [0xd7a540] */
  esp -= 4; W32(esp, 0xd634d7u); SPILL(); f_467690(); if (g_unwind) return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@PBD@Z */ RELOAD();
/* d634d7: push 0xd6c32c */
  { uint32_t v = 0xd6c32cu; esp -= 4; W32(esp, v); }
/* d634dc: push 0xd6c320 */
  { uint32_t v = 0xd6c320u; esp -= 4; W32(esp, v); }
/* d634e1: mov ecx, esi */
  ecx = esi;
/* d634e3: call 0xd51c6c */
  esp -= 4; W32(esp, 0xd634e8u); SPILL(); f_d51c6c(); if (g_unwind) return; RELOAD();
/* d634e8: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* d634ec: xor eax, eax */
  eax = 0;
/* d634ee: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d634f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d634f6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d634f9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d63530(void) {
  LOAD_REGS();
L_d63530: /* d63530: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* d63534: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd6353au); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d6353a: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* d6353c: ret 0x28 */
  esp += 44; SPILL(); return;
}

void f_d63550(void) {
  LOAD_REGS();
L_d63550: /* d63550: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* d63554: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd6355au); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d6355a: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* d6355c: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_d63570(void) {
  LOAD_REGS();
L_d63570: /* d63570: ret  */
  esp += 4; SPILL(); return;
}

void f_d63590(void) {
  LOAD_REGS();
L_d63590: /* d63590: xor eax, eax */
  eax = 0;
/* d63592: ret  */
  esp += 4; SPILL(); return;
}

void f_d635b0(void) {
  LOAD_REGS();
L_d635b0: /* d635b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d635b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d635b2: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* d635b6: push 0xd79bc4 */
  { uint32_t v = 0xd79bc4u; esp -= 4; W32(esp, v); }
/* d635bb: mov ecx, esi */
  ecx = esi;
/* d635bd: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* d635c5: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd635cbu); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d635cb: mov eax, esi */
  eax = esi;
/* d635cd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d635ce: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d635cf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d635f0(void) {
  LOAD_REGS();
L_d635f0: /* d635f0: ret  */
  esp += 4; SPILL(); return;
}

void f_d63610(void) {
  LOAD_REGS();
L_d63610: /* d63610: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d63611: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d63612: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* d63616: push 0xd79bc5 */
  { uint32_t v = 0xd79bc5u; esp -= 4; W32(esp, v); }
/* d6361b: mov ecx, esi */
  ecx = esi;
/* d6361d: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* d63625: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd6362bu); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d6362b: mov eax, esi */
  eax = esi;
/* d6362d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d6362e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d6362f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d63650(void) {
  LOAD_REGS();
L_d63650: /* d63650: xor eax, eax */
  eax = 0;
/* d63652: ret  */
  esp += 4; SPILL(); return;
}

void f_d63670(void) {
  LOAD_REGS();
L_d63670: /* d63670: xor eax, eax */
  eax = 0;
/* d63672: ret  */
  esp += 4; SPILL(); return;
}

void f_d63690(void) {
  LOAD_REGS();
L_d63690: /* d63690: xor eax, eax */
  eax = 0;
/* d63692: ret  */
  esp += 4; SPILL(); return;
}

void f_d636b0(void) {
  LOAD_REGS();
L_d636b0: /* d636b0: xor eax, eax */
  eax = 0;
/* d636b2: ret  */
  esp += 4; SPILL(); return;
}

void f_d636d0(void) {
  LOAD_REGS();
L_d636d0: /* d636d0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d636f0(void) {
  LOAD_REGS();
L_d636f0: /* d636f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d636f1: mov esi, ecx */
  esi = ecx;
/* d636f3: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd636f9u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d636f9: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d636fe: je 0xd63709 */
  if (zf) goto L_d63709;
L_d63700: /* d63700: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d63701: call 0xd51415 */
  esp -= 4; W32(esp, 0xd63706u); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d63706: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_d63709: /* d63709: mov eax, esi */
  eax = esi;
/* d6370b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d6370c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d63720(void) {
  LOAD_REGS();
L_d63720: /* d63720: mov eax, ecx */
  eax = ecx;
/* d63722: ret  */
  esp += 4; SPILL(); return;
}

void f_d63740(void) {
  LOAD_REGS();
L_d63740: /* d63740: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d63742: push 0xd65e22 */
  { uint32_t v = 0xd65e22u; esp -= 4; W32(esp, v); }
/* d63747: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d6374d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6374e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* d63755: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d63758: push 0xd77f84 */
  { uint32_t v = 0xd77f84u; esp -= 4; W32(esp, v); }
/* d6375d: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* d63761: call dword ptr [0xd7a5b0] */
  esp -= 4; W32(esp, 0xd63767u); SPILL(); f_46172f(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */ RELOAD();
/* d63767: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* d6376b: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* d63773: call dword ptr [0xd7a61c] */
  esp -= 4; W32(esp, 0xd63779u); SPILL(); f_41a98e(); if (g_unwind) return; /* MSVCR70!??0exception@@QAE@XZ */ RELOAD();
/* d63779: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* d6377d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6377e: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* d63782: mov byte ptr [esp + 0x50], 1 */
  W8((uint32_t)(esp + 0x50u), 0x1u);
/* d63787: mov dword ptr [esp + 0x20], 0xd6c2fc */
  W32((uint32_t)(esp + 0x20u), 0xd6c2fcu);
/* d6378f: call dword ptr [0xd7a5a8] */
  esp -= 4; W32(esp, 0xd63795u); SPILL(); f_4675a8(); if (g_unwind) return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z */ RELOAD();
/* d63795: push 0xd6d4a8 */
  { uint32_t v = 0xd6d4a8u; esp -= 4; W32(esp, v); }
/* d6379a: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* d6379e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d6379f: mov byte ptr [esp + 0x54], 0 */
  W8((uint32_t)(esp + 0x54u), 0x0u);
/* d637a4: mov dword ptr [esp + 0x24], 0xd6c308 */
  W32((uint32_t)(esp + 0x24u), 0xd6c308u);
/* d637ac: call 0xd63f10 */
  esp -= 4; W32(esp, 0xd637b1u); SPILL(); f_d63f10(); if (g_unwind) return; RELOAD();
L_d637b1: guest_badaddr(0xd637b1); return;
}

void f_d637e0(void) {
  LOAD_REGS();
L_d637e0: /* d637e0: mov eax, ecx */
  eax = ecx;
/* d637e2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d63800(void) {
  LOAD_REGS();
L_d63800: /* d63800: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d63804: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d63805: call 0xd51415 */
  esp -= 4; W32(esp, 0xd6380au); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d6380a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d6380b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d63820(void) {
  LOAD_REGS();
L_d63820: /* d63820: mov eax, 0x9249249 */
  eax = 0x9249249u;
/* d63825: ret  */
  esp += 4; SPILL(); return;
}

void f_d63840(void) {
  LOAD_REGS();
L_d63840: /* d63840: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d63844: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* d63847: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d63848: call 0xd51ae1 */
  esp -= 4; W32(esp, 0xd6384du); SPILL(); f_d51ae1(); if (g_unwind) return; RELOAD();
/* d6384d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d63850: ret  */
  esp += 4; SPILL(); return;
}

void f_d63870(void) {
  LOAD_REGS();
L_d63870: /* d63870: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d63871: mov al, byte ptr [esp + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x3u))) & 0xffu);
/* d63875: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d63876: ret  */
  esp += 4; SPILL(); return;
}

void f_d63890(void) {
  LOAD_REGS();
L_d63890: /* d63890: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d63894: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d638b0(void) {
  LOAD_REGS();
L_d638b0: /* d638b0: mov eax, ecx */
  eax = ecx;
/* d638b2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d638d0(void) {
  LOAD_REGS();
L_d638d0: /* d638d0: mov eax, 0x9249249 */
  eax = 0x9249249u;
/* d638d5: ret  */
  esp += 4; SPILL(); return;
}

void f_d638f0(void) {
  LOAD_REGS();
L_d638f0: /* d638f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* d638f4: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* d638f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d638f8: call 0xd51ae1 */
  esp -= 4; W32(esp, 0xd638fdu); SPILL(); f_d51ae1(); if (g_unwind) return; RELOAD();
/* d638fd: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d63900: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d63920(void) {
  LOAD_REGS();
L_d63920: /* d63920: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* d63924: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd6392au); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d6392a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d63940(void) {
  LOAD_REGS();
L_d63940: /* d63940: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d63941: xor eax, eax */
  eax = 0;
/* d63943: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d63944: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* d63948: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d6394a: mov esi, ecx */
  esi = ecx;
/* d6394c: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* d6394f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* d63952: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* d63955: jne 0xd6395e */
  if (!zf) goto L_d6395e;
L_d63957: /* d63957: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d63958: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* d6395a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d6395b: ret 4 */
  esp += 8; SPILL(); return;
L_d6395e: /* d6395e: cmp edi, 0x9249249 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x9249249u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* d63964: jbe 0xd63974 */
  if ((cf | zf)) goto L_d63974;
L_d63966: /* d63966: mov ecx, esi */
  ecx = esi;
/* d63968: call 0xd518e3 */
  esp -= 4; W32(esp, 0xd6396du); SPILL(); f_d518e3(); if (g_unwind) return; RELOAD();
/* d6396d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d6396e: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* d63970: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d63971: ret 4 */
  esp += 8; SPILL(); return;
L_d63974: /* d63974: imul edi, edi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x1cu);
  edi = (uint32_t)r;
  }
/* d63977: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d63978: call 0xd51ae1 */
  esp -= 4; W32(esp, 0xd6397du); SPILL(); f_d51ae1(); if (g_unwind) return; RELOAD();
/* d6397d: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* d6397f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d63982: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* d63985: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* d63988: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* d6398b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d6398c: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* d6398e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d6398f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d639c0(void) {
  LOAD_REGS();
L_d639c0: /* d639c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d639c1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d639c5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d639c6: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* d639ca: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d639cc: je 0xd639df */
  if (zf) goto L_d639df;
L_d639ce: /* d639ce: mov edi, edi */
  edi = edi;
L_d639d0: /* d639d0: mov ecx, esi */
  ecx = esi;
/* d639d2: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd639d8u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d639d8: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d639db: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d639dd: jne 0xd639d0 */
  if (!zf) goto L_d639d0;
L_d639df: /* d639df: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d639e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d639e1: ret  */
  esp += 4; SPILL(); return;
}

void f_d63a00(void) {
  LOAD_REGS();
L_d63a00: /* d63a00: mov eax, ecx */
  eax = ecx;
/* d63a02: xor ecx, ecx */
  ecx = 0;
/* d63a04: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* d63a07: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* d63a0a: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* d63a0d: ret  */
  esp += 4; SPILL(); return;
}

void f_d63a20(void) {
  LOAD_REGS();
L_d63a20: /* d63a20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d63a21: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d63a25: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d63a26: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* d63a2a: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d63a2c: je 0xd63a3f */
  if (zf) goto L_d63a3f;
L_d63a2e: /* d63a2e: mov edi, edi */
  edi = edi;
L_d63a30: /* d63a30: mov ecx, esi */
  ecx = esi;
/* d63a32: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd63a38u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d63a38: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d63a3b: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d63a3d: jne 0xd63a30 */
  if (!zf) goto L_d63a30;
L_d63a3f: /* d63a3f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d63a40: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d63a41: ret  */
  esp += 4; SPILL(); return;
}

void f_d63a60(void) {
  LOAD_REGS();
L_d63a60: /* d63a60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d63a61: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* d63a65: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d63a66: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* d63a6a: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d63a6c: je 0xd63a7f */
  if (zf) goto L_d63a7f;
L_d63a6e: /* d63a6e: mov edi, edi */
  edi = edi;
L_d63a70: /* d63a70: mov ecx, esi */
  ecx = esi;
/* d63a72: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd63a78u); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d63a78: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d63a7b: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d63a7d: jne 0xd63a70 */
  if (!zf) goto L_d63a70;
L_d63a7f: /* d63a7f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d63a80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d63a81: ret 8 */
  esp += 12; SPILL(); return;
}

void f_d63aa0(void) {
  LOAD_REGS();
L_d63aa0: /* d63aa0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d63aa1: mov ebx, ecx */
  ebx = ecx;
/* d63aa3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d63aa4: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* d63aa7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d63aa9: je 0xd63acf */
  if (zf) goto L_d63acf;
L_d63aab: /* d63aab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d63aac: mov edi, dword ptr [ebx + 8] */
  edi = R32((uint32_t)(ebx + 0x8u));
/* d63aaf: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d63ab1: je 0xd63ac2 */
  if (zf) goto L_d63ac2;
L_d63ab3: /* d63ab3: mov ecx, esi */
  ecx = esi;
/* d63ab5: call dword ptr [0xd7a5ac] */
  esp -= 4; W32(esp, 0xd63abbu); SPILL(); f_461c6b(); if (g_unwind) return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */ RELOAD();
/* d63abb: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* d63abe: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d63ac0: jne 0xd63ab3 */
  if (!zf) goto L_d63ab3;
L_d63ac2: /* d63ac2: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* d63ac5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d63ac6: call 0xd51415 */
  esp -= 4; W32(esp, 0xd63acbu); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d63acb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d63ace: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_d63acf: /* d63acf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d63ad0: mov dword ptr [ebx + 4], 0 */
  W32((uint32_t)(ebx + 0x4u), 0x0u);
/* d63ad7: mov dword ptr [ebx + 8], 0 */
  W32((uint32_t)(ebx + 0x8u), 0x0u);
/* d63ade: mov dword ptr [ebx + 0xc], 0 */
  W32((uint32_t)(ebx + 0xcu), 0x0u);
/* d63ae5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d63ae6: ret  */
  esp += 4; SPILL(); return;
}

void f_d63b10(void) {
  LOAD_REGS();
L_d63b10: /* d63b10: jmp 0xd51497 */
  SPILL(); f_d51497(); return;
}

void f_d63b30(void) {
  LOAD_REGS();
L_d63b30: /* d63b30: mov eax, ecx */
  eax = ecx;
/* d63b32: xor ecx, ecx */
  ecx = 0;
/* d63b34: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* d63b37: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* d63b3a: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* d63b3d: ret  */
  esp += 4; SPILL(); return;
}

void f_d63b50(void) {
  LOAD_REGS();
L_d63b50: /* d63b50: jmp 0xd51497 */
  SPILL(); f_d51497(); return;
}

void f_d63b64(void) {
  LOAD_REGS();
L_d63b64: /* d63b64: jmp dword ptr [0xd7a6c8] */
  SPILL(); call_ind(R32(0xd7a6c8u)); return; /* binkw32!_BinkClose@4 */
}

void f_d63b6a(void) {
  LOAD_REGS();
L_d63b6a: /* d63b6a: jmp dword ptr [0xd7a6c4] */
  SPILL(); call_ind(R32(0xd7a6c4u)); return; /* binkw32!_BinkNextFrame@4 */
}

void f_d63b70(void) {
  LOAD_REGS();
L_d63b70: /* d63b70: jmp dword ptr [0xd7a6c0] */
  SPILL(); call_ind(R32(0xd7a6c0u)); return; /* binkw32!_BinkCopyToBufferRect@44 */
}

void f_d63b76(void) {
  LOAD_REGS();
L_d63b76: /* d63b76: jmp dword ptr [0xd7a6bc] */
  SPILL(); call_ind(R32(0xd7a6bcu)); return; /* binkw32!_BinkDoFrame@4 */
}

void f_d63b7c(void) {
  LOAD_REGS();
L_d63b7c: /* d63b7c: jmp dword ptr [0xd7a6b8] */
  SPILL(); call_ind(R32(0xd7a6b8u)); return; /* binkw32!_BinkWait@4 */
}

void f_d63b82(void) {
  LOAD_REGS();
L_d63b82: /* d63b82: jmp dword ptr [0xd7a6b4] */
  SPILL(); call_ind(R32(0xd7a6b4u)); return; /* binkw32!_BinkOpen@8 */
}

void f_d63b88(void) {
  LOAD_REGS();
L_d63b88: /* d63b88: jmp dword ptr [0xd7a6b0] */
  SPILL(); call_ind(R32(0xd7a6b0u)); return; /* binkw32!_BinkSetSoundTrack@8 */
}

void f_d63b8e(void) {
  LOAD_REGS();
L_d63b8e: /* d63b8e: jmp dword ptr [0xd7a6ac] */
  SPILL(); call_ind(R32(0xd7a6acu)); return; /* binkw32!_BinkSetSoundSystem@8 */
}

void f_d63b94(void) {
  LOAD_REGS();
L_d63b94: /* d63b94: jmp dword ptr [0xd7a6a8] */
  SPILL(); call_ind(R32(0xd7a6a8u)); return; /* binkw32!_BinkOpenDirectSound@4 */
}

void f_d63b9a(void) {
  LOAD_REGS();
L_d63b9a: /* d63b9a: jmp dword ptr [0xd7a3ec] */
  SPILL(); f_4e2b1c(); return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */
}

void f_d63ba0(void) {
  LOAD_REGS();
L_d63ba0: /* d63ba0: jmp dword ptr [0xd7a3f4] */
  SPILL(); f_4e18b1(); return; /* Core!?NetDirty@UObject@@UAEXPAVUProperty@@@Z */
}

void f_d63ba6(void) {
  LOAD_REGS();
L_d63ba6: /* d63ba6: jmp dword ptr [0xd7a3f8] */
  SPILL(); f_4e2d42(); return; /* Core!?Rename@UObject@@UAEXPBGPAV1@@Z */
}

void f_d63bac(void) {
  LOAD_REGS();
L_d63bac: /* d63bac: jmp dword ptr [0xd7a3fc] */
  SPILL(); f_4e2608(); return; /* Core!?LanguageChange@UObject@@UAEXXZ */
}

void f_d63bb2(void) {
  LOAD_REGS();
L_d63bb2: /* d63bb2: jmp dword ptr [0xd7a400] */
  SPILL(); f_4e22ca(); return; /* Core!?Register@UObject@@UAEXXZ */
}

void f_d63bb8(void) {
  LOAD_REGS();
L_d63bb8: /* d63bb8: jmp dword ptr [0xd7a404] */
  SPILL(); f_4e1636(); return; /* Core!?ScriptConsoleExec@UObject@@UAEHPBGAAVFOutputDevice@@PAV1@@Z */
}

void f_d63bbe(void) {
  LOAD_REGS();
L_d63bbe: /* d63bbe: jmp dword ptr [0xd7a408] */
  SPILL(); f_4e1271(); return; /* Core!?CallFunction@UObject@@UAEXAAUFFrame@@QAXPAVUFunction@@@Z */
}

void f_d63bc4(void) {
  LOAD_REGS();
L_d63bc4: /* d63bc4: jmp dword ptr [0xd7a40c] */
  SPILL(); f_4e1f82(); return; /* Core!?PostEditUndo@UObject@@UAEXXZ */
}

void f_d63bca(void) {
  LOAD_REGS();
L_d63bca: /* d63bca: jmp dword ptr [0xd7a410] */
  SPILL(); f_4e3a67(); return; /* Core!?PreEditUndo@UObject@@UAEXXZ */
}

void f_d63bd0(void) {
  LOAD_REGS();
L_d63bd0: /* d63bd0: jmp dword ptr [0xd7a414] */
  SPILL(); f_4e1d11(); return; /* Core!?PostEditChange@UObject@@UAEXXZ */
}

void f_d63bd6(void) {
  LOAD_REGS();
L_d63bd6: /* d63bd6: jmp dword ptr [0xd7a418] */
  SPILL(); f_4e25c7(); return; /* Core!?ShutdownAfterError@UObject@@UAEXXZ */
}

void f_d63bdc(void) {
  LOAD_REGS();
L_d63bdc: /* d63bdc: jmp dword ptr [0xd7a41c] */
  SPILL(); f_4e2dd8(); return; /* Core!?InitExecution@UObject@@UAEXXZ */
}

void f_d63be2(void) {
  LOAD_REGS();
L_d63be2: /* d63be2: jmp dword ptr [0xd7a420] */
  SPILL(); f_4e2db5(); return; /* Core!?GotoLabel@UObject@@UAEHVFName@@@Z */
}

void f_d63be8(void) {
  LOAD_REGS();
L_d63be8: /* d63be8: jmp dword ptr [0xd7a424] */
  SPILL(); f_4e3738(); return; /* Core!?GotoState@UObject@@UAE?AW4EGotoState@@VFName@@@Z */
}

void f_d63bee(void) {
  LOAD_REGS();
L_d63bee: /* d63bee: jmp dword ptr [0xd7a428] */
  SPILL(); f_4e2e19(); return; /* Core!?IsPendingKill@UObject@@UAEHXZ */
}

void f_d63bf4(void) {
  LOAD_REGS();
L_d63bf4: /* d63bf4: jmp dword ptr [0xd7a42c] */
  SPILL(); f_4e1519(); return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */
}

void f_d63bfa(void) {
  LOAD_REGS();
L_d63bfa: /* d63bfa: jmp dword ptr [0xd7a430] */
  SPILL(); f_4e2a9a(); return; /* Core!?Destroy@UObject@@UAEXXZ */
}

void f_d63c00(void) {
  LOAD_REGS();
L_d63c00: /* d63c00: jmp dword ptr [0xd7a434] */
  SPILL(); f_4e4110(); return; /* Core!?PostLoad@UObject@@UAEXXZ */
}

void f_d63c06(void) {
  LOAD_REGS();
L_d63c06: /* d63c06: jmp dword ptr [0xd7a438] */
  SPILL(); f_4e4318(); return; /* Core!?Modify@UObject@@UAEXXZ */
}

void f_d63c0c(void) {
  LOAD_REGS();
L_d63c0c: /* d63c0c: jmp dword ptr [0xd7a43c] */
  SPILL(); f_4e222f(); return; /* Core!?ProcessRemoteFunction@UObject@@UAEHPAVUFunction@@PAXPAUFFrame@@@Z */
}

void f_d63c12(void) {
  LOAD_REGS();
L_d63c12: /* d63c12: jmp dword ptr [0xd7a440] */
  SPILL(); f_4e358f(); return; /* Core!?ProcessState@UObject@@UAEXM@Z */
}

void f_d63c18(void) {
  LOAD_REGS();
L_d63c18: /* d63c18: jmp dword ptr [0xd7a444] */
  SPILL(); f_4e2a81(); return; /* Core!?ProcessDelegate@UObject@@UAEXVFName@@PAUFScriptDelegate@@PAX2@Z */
}

void f_d63c1e(void) {
  LOAD_REGS();
L_d63c1e: /* d63c1e: jmp dword ptr [0xd7a448] */
  SPILL(); f_4e3954(); return; /* Core!?ProcessEvent@UObject@@UAEXPAVUFunction@@PAX1@Z */
}

void f_d63c24(void) {
  LOAD_REGS();
L_d63c24: /* d63c24: jmp dword ptr [0xd7a3c4] */
  SPILL(); f_4e3bb6(); return; /* Core!?Release@UObject@@UAGKXZ */
}

void f_d63c2a(void) {
  LOAD_REGS();
L_d63c2a: /* d63c2a: jmp dword ptr [0xd7a450] */
  SPILL(); f_4e33a0(); return; /* Core!?AddRef@UObject@@UAGKXZ */
}

void f_d63c30(void) {
  LOAD_REGS();
L_d63c30: /* d63c30: jmp dword ptr [0xd7a454] */
  SPILL(); f_4e42aa(); return; /* Core!?QueryInterface@UObject@@UAGKABVFGuid@@PAPAX@Z */
}

void f_d63c36(void) {
  LOAD_REGS();
L_d63c36: /* d63c36: jmp dword ptr [0xd7a458] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_d63c3c(void) {
  LOAD_REGS();
L_d63c3c: /* d63c3c: jmp dword ptr [0xd7a45c] */
  SPILL(); f_4e2559(); return; /* Core!?ConditionalDestroy@UObject@@QAEHXZ */
}

void f_d63c42(void) {
  LOAD_REGS();
L_d63c42: /* d63c42: jmp dword ptr [0xd7a460] */
  SPILL(); f_4e245a(); return; /* Core!??0UObject@@QAE@XZ */
}

void f_d63c48(void) {
  LOAD_REGS();
L_d63c48: /* d63c48: jmp dword ptr [0xd7a464] */
  SPILL(); f_4e1078(); return; /* Core!??0UObject@@QAE@ABV0@@Z */
}

void f_d63c4e(void) {
  LOAD_REGS();
L_d63c4e: /* d63c4e: jmp dword ptr [0xd7a468] */
  SPILL(); f_4e1c67(); return; /* Core!??4UObject@@QAEAAV0@ABV0@@Z */
}

void f_d63c54(void) {
  LOAD_REGS();
L_d63c54: /* d63c54: jmp dword ptr [0xd7a46c] */
  SPILL(); f_4e3fb2(); return; /* Core!??3UObject@@SAXPAXI@Z */
}

void f_d63c5a(void) {
  LOAD_REGS();
L_d63c5a: /* d63c5a: jmp dword ptr [0xd7a470] */
  SPILL(); f_4e2aea(); return; /* Core!?FindFunctionChecked@UObject@@QAEPAVUFunction@@VFName@@H@Z */
}

void f_d63c60(void) {
  LOAD_REGS();
L_d63c60: /* d63c60: jmp dword ptr [0xd7a474] */
  SPILL(); f_4e36a7(); return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */
}

void f_d63c66(void) {
  LOAD_REGS();
L_d63c66: /* d63c66: jmp dword ptr [0xd7a478] */
  SPILL(); f_4e1ba9(); return; /* Core!?IsValid@UObject@@QAEHXZ */
}

void f_d63c6c(void) {
  LOAD_REGS();
L_d63c6c: /* d63c6c: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d63c72(void) {
  LOAD_REGS();
L_d63c72: /* d63c72: jmp dword ptr [0xd7a484] */
  SPILL(); f_4e1037(); return; /* Core!??DFString@@QBEPBGXZ */
}

void f_d63c78(void) {
  LOAD_REGS();
L_d63c78: /* d63c78: jmp dword ptr [0xd7a488] */
  SPILL(); f_4e2d01(); return; /* Core!??0FString@@QAE@XZ */
}

void f_d63c7e(void) {
  LOAD_REGS();
L_d63c7e: /* d63c7e: jmp dword ptr [0xd7a44c] */
  SPILL(); f_4e298c(); return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */
}

void f_d63c84(void) {
  LOAD_REGS();
L_d63c84: /* d63c84: jmp dword ptr [0xd7a3e0] */
  SPILL(); f_4e353f(); return; /* Core!??0UClass@@QAE@W4ENativeConstructor@@KKPAV0@1VFGuid@@PBG33KP6AXPAX@ZP8UObject@@AEXXZ@Z */
}

void f_d63c8a(void) {
  LOAD_REGS();
L_d63c8a: /* d63c8a: jmp dword ptr [0xd7a3dc] */
  SPILL(); f_4e1735(); return; /* Core!?StaticConfigName@UObject@@SAPBGXZ */
}

void f_d63c90(void) {
  LOAD_REGS();
L_d63c90: /* d63c90: jmp dword ptr [0xd7a3d8] */
  SPILL(); f_4e3f3f(); return; /* Core!?StaticConstructor@UObject@@QAEXXZ */
}

void f_d63c96(void) {
  LOAD_REGS();
L_d63c96: /* d63c96: jmp dword ptr [0xd7a3d0] */
  SPILL(); f_4e2a1d(); return; /* Core!??1UClass@@UAE@XZ */
}

void f_d63c9c(void) {
  LOAD_REGS();
L_d63c9c: /* d63c9c: jmp dword ptr [0xd7a3cc] */
  SPILL(); f_4e1d20(); return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */
}

void f_d63ca2(void) {
  LOAD_REGS();
L_d63ca2: /* d63ca2: jmp dword ptr [0xd7a3c8] */
  SPILL(); f_4e13d9(); return; /* Core!??0FString@@QAE@PBD@Z */
}

void f_d63ca8(void) {
  LOAD_REGS();
L_d63ca8: /* d63ca8: jmp dword ptr [0xd7a48c] */
  SPILL(); f_4e13de(); return; /* Core!??0FString@@QAE@PBG@Z */
}

void f_d63cae(void) {
  LOAD_REGS();
L_d63cae: /* d63cae: jmp dword ptr [0xd7a3e4] */
  SPILL(); f_4e3e5e(); return; /* Core!??4FString@@QAEAAV0@PBG@Z */
}

void f_d63cb4(void) {
  LOAD_REGS();
L_d63cb4: /* d63cb4: jmp dword ptr [0xd7a500] */
  SPILL(); call_ind(R32(0xd7a500u)); return; /* KERNEL32!WideCharToMultiByte */
}

void f_d63cba(void) {
  LOAD_REGS();
L_d63cba: /* d63cba: jmp dword ptr [0xd7a4e4] */
  SPILL(); call_ind(R32(0xd7a4e4u)); return; /* KERNEL32!GetCurrentThreadId */
}

void f_d63cc0(void) {
  LOAD_REGS();
L_d63cc0: /* d63cc0: jmp dword ptr [0xd7a4e8] */
  SPILL(); call_ind(R32(0xd7a4e8u)); return; /* KERNEL32!FindClose */
}

void f_d63cc6(void) {
  LOAD_REGS();
L_d63cc6: /* d63cc6: jmp dword ptr [0xd7a4ec] */
  SPILL(); call_ind(R32(0xd7a4ecu)); return; /* KERNEL32!FindNextFileA */
}

void f_d63ccc(void) {
  LOAD_REGS();
L_d63ccc: /* d63ccc: jmp dword ptr [0xd7a4f0] */
  SPILL(); call_ind(R32(0xd7a4f0u)); return; /* KERNEL32!FindFirstFileA */
}

void f_d63cd2(void) {
  LOAD_REGS();
L_d63cd2: /* d63cd2: jmp dword ptr [0xd7a4f4] */
  SPILL(); call_ind(R32(0xd7a4f4u)); return; /* KERNEL32!CreateDirectoryA */
}

void f_d63cd8(void) {
  LOAD_REGS();
L_d63cd8: /* d63cd8: jmp dword ptr [0xd7a4f8] */
  SPILL(); call_ind(R32(0xd7a4f8u)); return; /* KERNEL32!RemoveDirectoryA */
}

void f_d63cde(void) {
  LOAD_REGS();
L_d63cde: /* d63cde: jmp dword ptr [0xd7a4fc] */
  SPILL(); call_ind(R32(0xd7a4fcu)); return; /* KERNEL32!DeleteFileA */
}

void f_d63ce4(void) {
  LOAD_REGS();
L_d63ce4: /* d63ce4: jmp dword ptr [0xd7a674] */
  SPILL(); call_ind(R32(0xd7a674u)); return; /* USER32!IsWindowVisible */
}

void f_d63cea(void) {
  LOAD_REGS();
L_d63cea: /* d63cea: jmp dword ptr [0xd7a670] */
  SPILL(); call_ind(R32(0xd7a670u)); return; /* USER32!IsWindow */
}

void f_d63cf0(void) {
  LOAD_REGS();
L_d63cf0: /* d63cf0: jmp dword ptr [0xd7a66c] */
  SPILL(); call_ind(R32(0xd7a66cu)); return; /* USER32!GetWindowTextW */
}

void f_d63cf6(void) {
  LOAD_REGS();
L_d63cf6: /* d63cf6: jmp dword ptr [0xd7a668] */
  SPILL(); call_ind(R32(0xd7a668u)); return; /* USER32!GetClientRect */
}

void f_d63cfc(void) {
  LOAD_REGS();
L_d63cfc: /* d63cfc: jmp dword ptr [0xd7a664] */
  SPILL(); call_ind(R32(0xd7a664u)); return; /* USER32!EnumThreadWindows */
}

void f_d63d16(void) {
  LOAD_REGS();
L_d63d16: /* d63d16: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* d63d18: cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d63d1e: je 0xd63d23 */
  if (zf) goto L_d63d23;
L_d63d20: /* d63d20: xor eax, eax */
  eax = 0;
/* d63d22: ret  */
  esp += 4; SPILL(); return;
L_d63d23: /* d63d23: jmp 0xd64072 */
  SPILL(); f_d64072(); return;
}

void f_d63d28(void) {
  LOAD_REGS();
L_d63d28: /* d63d28: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* d63d2a: push 0xd6c338 */
  { uint32_t v = 0xd6c338u; esp -= 4; W32(esp, v); }
/* d63d2f: call 0xd64078 */
  esp -= 4; W32(esp, 0xd63d34u); SPILL(); f_d64078(); if (g_unwind) return; RELOAD();
/* d63d34: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_d63d38: /* d63d38: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* d63d3b: js 0xd63d4b */
  if (sf) goto L_d63d4b;
L_d63d3d: /* d63d3d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d63d40: sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* d63d43: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* d63d46: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0xd63d49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d63d49: jmp 0xd63d38 */
  goto L_d63d38;
L_d63d4b: /* d63d4b: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* d63d4f: call 0xd640b3 */
  esp -= 4; W32(esp, 0xd63d54u); SPILL(); f_d640b3(); if (g_unwind) return; RELOAD();
/* d63d54: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_d63d57(void) {
  LOAD_REGS();
L_d63d57: /* d63d57: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d63d5a: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* d63d5d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* d63d60: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* d63d62: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* d63d65: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* d63d68: cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xe06d7363u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d63d6e: je 0xd63d80 */
  if (zf) goto L_d63d80;
L_d63d70: /* d63d70: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* d63d77: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* d63d7a: ret  */
  esp += 4; SPILL(); return;
L_d63d80: /* d63d80: call 0xd64072 */
  esp -= 4; W32(esp, 0xd63d85u); SPILL(); f_d64072(); if (g_unwind) return; RELOAD();
L_d63d85: guest_badaddr(0xd63d85); return;
}

void f_d63d7b(void) {
  LOAD_REGS();
  goto L_d63d7b;
L_d63d4b: /* d63d4b: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* d63d4f: call 0xd640b3 */
  esp -= 4; W32(esp, 0xd63d54u); SPILL(); f_d640b3(); if (g_unwind) return; RELOAD();
/* d63d54: ret 0x10 */
  esp += 20; SPILL(); return;
L_d63d7b: /* d63d7b: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
/* d63d7e: jmp 0xd63d4b */
  goto L_d63d4b;
}

void f_d63d86(void) {
  LOAD_REGS();
L_d63d86: /* d63d86: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* d63d88: push 0xd6c348 */
  { uint32_t v = 0xd6c348u; esp -= 4; W32(esp, v); }
/* d63d8d: call 0xd64078 */
  esp -= 4; W32(esp, 0xd63d92u); SPILL(); f_d64078(); if (g_unwind) return; RELOAD();
/* d63d92: and dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* d63d96: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* d63d99: mov eax, esi */
  eax = esi;
/* d63d9b: imul eax, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  eax = (uint32_t)r;
  }
/* d63d9f: add dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* d63da2: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_d63da6: /* d63da6: dec dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0x10u), r);
  }
/* d63da9: js 0xd63db6 */
  if (sf) goto L_d63db6;
L_d63dab: /* d63dab: sub dword ptr [ebp + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* d63dae: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d63db1: call dword ptr [ebp + 0x14] */
  { uint32_t t = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, 0xd63db4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d63db4: jmp 0xd63da6 */
  goto L_d63da6;
L_d63db6: /* d63db6: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
/* d63dbd: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* d63dc1: call 0xd63dce */
  esp -= 4; W32(esp, 0xd63dc6u); SPILL(); f_d63dce(); if (g_unwind) return; RELOAD();
/* d63dc6: call 0xd640b3 */
  esp -= 4; W32(esp, 0xd63dcbu); SPILL(); f_d640b3(); if (g_unwind) return; RELOAD();
/* d63dcb: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_d63dce(void) {
  LOAD_REGS();
L_d63dce: /* d63dce: cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d63dd2: jne 0xd63de5 */
  if (!zf) goto L_d63de5;
L_d63dd4: /* d63dd4: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* d63dd7: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* d63dda: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* d63ddd: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* d63de0: call 0xd63d28 */
  esp -= 4; W32(esp, 0xd63de5u); SPILL(); f_d63d28(); if (g_unwind) return; RELOAD();
L_d63de5: /* d63de5: ret  */
  esp += 4; SPILL(); return;
}

void f_d63de6(void) {
  LOAD_REGS();
L_d63de6: /* d63de6: cmp dword ptr [0xd79bf4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xd79bf4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d63ded: jne 0xd63df5 */
  if (!zf) goto L_d63df5;
L_d63def: /* d63def: jmp dword ptr [0xd7a608] */
  SPILL(); f_404cc9(); return; /* MSVCR70!_onexit */
L_d63df5: /* d63df5: push 0xd79be4 */
  { uint32_t v = 0xd79be4u; esp -= 4; W32(esp, v); }
/* d63dfa: push 0xd79bf4 */
  { uint32_t v = 0xd79bf4u; esp -= 4; W32(esp, v); }
/* d63dff: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* d63e03: call 0xd640c4 */
  esp -= 4; W32(esp, 0xd63e08u); SPILL(); f_d640c4(); if (g_unwind) return; RELOAD();
/* d63e08: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d63e0b: ret  */
  esp += 4; SPILL(); return;
}

void f_d63e0c(void) {
  LOAD_REGS();
L_d63e0c: /* d63e0c: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* d63e10: call 0xd63de6 */
  esp -= 4; W32(esp, 0xd63e15u); SPILL(); f_d63de6(); if (g_unwind) return; RELOAD();
/* d63e15: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* d63e17: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* d63e19: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* d63e1b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d63e1c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* d63e1d: ret  */
  esp += 4; SPILL(); return;
}

void f_d63e20(void) {
  LOAD_REGS();
L_d63e20: /* d63e20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d63e21: mov ebp, esp */
  ebp = esp;
/* d63e23: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d63e26: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* d63e29: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* d63e2b: fst dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0);
/* d63e2f: fistp qword ptr [esp + 0x10] */
  W64((uint32_t)(esp + 0x10u), (uint64_t)fpu_toint64(ST0)); FPOP();
/* d63e33: fild qword ptr [esp + 0x10] */
  { double v = (double)(int64_t)R64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* d63e37: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* d63e3b: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d63e3f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d63e41: je 0xd63e7f */
  if (zf) goto L_d63e7f;
L_d63e43: /* d63e43: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* d63e45: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* d63e47: jns 0xd63e67 */
  if (!sf) goto L_d63e67;
L_d63e49: /* d63e49: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* d63e4c: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* d63e4f: xor ecx, 0x80000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* d63e55: add ecx, 0x7fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* d63e5b: adc eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  cf = cin ? ((r) <= (a)) : ((r) < (a));
  eax = r;
  }
/* d63e5e: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* d63e62: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* d63e65: jmp 0xd63e93 */
  goto L_d63e93;
L_d63e67: /* d63e67: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* d63e6a: mov ecx, dword ptr [esp] */
  ecx = R32((uint32_t)(esp));
/* d63e6d: add ecx, 0x7fffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  ecx = r;
  }
/* d63e73: sbb eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* d63e76: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* d63e7a: sbb edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  edx = r;
  }
/* d63e7d: jmp 0xd63e93 */
  goto L_d63e93;
L_d63e7f: /* d63e7f: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* d63e83: test edx, 0x7fffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d63e89: jne 0xd63e43 */
  if (!zf) goto L_d63e43;
L_d63e8b: /* d63e8b: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* d63e8f: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_d63e93: /* d63e93: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* d63e94: ret  */
  esp += 4; SPILL(); return;
}

void f_d63e96(void) {
  LOAD_REGS();
L_d63e96: /* d63e96: jmp dword ptr [0xd7a628] */
  SPILL(); f_4010eb(); return; /* MSVCR70!malloc */
}

void f_d63e9c(void) {
  LOAD_REGS();
L_d63e9c: /* d63e9c: jmp dword ptr [0xd7a624] */
  SPILL(); f_401156(); return; /* MSVCR70!free */
}

void f_d63ea2(void) {
  LOAD_REGS();
L_d63ea2: /* d63ea2: jmp dword ptr [0xd7a620] */
  SPILL(); f_41aa26(); return; /* MSVCR70!??1exception@@UAE@XZ */
}

void f_d63ea8(void) {
  LOAD_REGS();
L_d63ea8: /* d63ea8: jmp dword ptr [0xd7a61c] */
  SPILL(); f_41a98e(); return; /* MSVCR70!??0exception@@QAE@XZ */
}

void f_d63eae(void) {
  LOAD_REGS();
L_d63eae: /* d63eae: jmp dword ptr [0xd7a618] */
  SPILL(); f_41a9dc(); return; /* MSVCR70!??0exception@@QAE@ABV0@@Z */
}

void f_d63eb4(void) {
  LOAD_REGS();
L_d63eb4: /* d63eb4: mov eax, ecx */
  eax = ecx;
/* d63eb6: mov dword ptr [eax], 0xd6c358 */
  W32((uint32_t)(eax), 0xd6c358u);
/* d63ebc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d63ebf(void) {
  LOAD_REGS();
L_d63ebf: /* d63ebf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d63ec0: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* d63ec4: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d63ec7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d63ec8: mov esi, ecx */
  esi = ecx;
/* d63eca: je 0xd63ef0 */
  if (zf) goto L_d63ef0;
L_d63ecc: /* d63ecc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d63ecd: push 0xd640ca */
  { uint32_t v = 0xd640cau; esp -= 4; W32(esp, v); }
/* d63ed2: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* d63ed5: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* d63ed7: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* d63ed9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d63eda: call 0xd63d86 */
  esp -= 4; W32(esp, 0xd63edfu); SPILL(); f_d63d86(); if (g_unwind) return; RELOAD();
/* d63edf: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d63ee2: je 0xd63eeb */
  if (zf) goto L_d63eeb;
L_d63ee4: /* d63ee4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d63ee5: call 0xd51415 */
  esp -= 4; W32(esp, 0xd63eeau); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d63eea: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_d63eeb: /* d63eeb: mov eax, edi */
  eax = edi;
/* d63eed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d63eee: jmp 0xd63f05 */
  goto L_d63f05;
L_d63ef0: /* d63ef0: mov ecx, esi */
  ecx = esi;
/* d63ef2: call 0xd640ca */
  esp -= 4; W32(esp, 0xd63ef7u); SPILL(); f_d640ca(); if (g_unwind) return; RELOAD();
/* d63ef7: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* d63efa: je 0xd63f03 */
  if (zf) goto L_d63f03;
L_d63efc: /* d63efc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d63efd: call 0xd51415 */
  esp -= 4; W32(esp, 0xd63f02u); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d63f02: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_d63f03: /* d63f03: mov eax, esi */
  eax = esi;
L_d63f05: /* d63f05: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d63f06: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d63f07: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d63f0a(void) {
  LOAD_REGS();
L_d63f0a: /* d63f0a: mov eax, ecx */
  eax = ecx;
/* d63f0c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_d63f10(void) {
  LOAD_REGS();
L_d63f10: /* d63f10: jmp dword ptr [0xd7a614] */
  SPILL(); f_41b9d1(); return; /* MSVCR70!_CxxThrowException */
}

void f_d63f16(void) {
  LOAD_REGS();
L_d63f16: /* d63f16: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* d63f1a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d63f1c: jne 0xd63f2c */
  if (!zf) goto L_d63f2c;
L_d63f1e: /* d63f1e: cmp dword ptr [0xd79bc8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xd79bc8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* d63f24: jle 0xd63f54 */
  if ((zf || sf != of)) goto L_d63f54;
L_d63f26: /* d63f26: dec dword ptr [0xd79bc8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xd79bc8u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(0xd79bc8u), r);
  }
L_d63f2c: /* d63f2c: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d63f2f: mov ecx, dword ptr [0xd7a5fc] */
  ecx = R32((uint32_t)(0xd7a5fcu));
/* d63f35: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d63f37: mov dword ptr [0xd79bcc], ecx */
  W32((uint32_t)(0xd79bccu), ecx);
/* d63f3d: jne 0xd63f8e */
  if (!zf) goto L_d63f8e;
L_d63f3f: /* d63f3f: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* d63f44: call dword ptr [0xd7a628] */
  esp -= 4; W32(esp, 0xd63f4au); SPILL(); f_4010eb(); if (g_unwind) return; /* MSVCR70!malloc */ RELOAD();
/* d63f4a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d63f4c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d63f4d: mov dword ptr [0xd79bf4], eax */
  W32((uint32_t)(0xd79bf4u), eax);
/* d63f52: jne 0xd63f58 */
  if (!zf) goto L_d63f58;
L_d63f54: /* d63f54: xor eax, eax */
  eax = 0;
/* d63f56: jmp 0xd63fd1 */
  goto L_d63fd1;
L_d63f58: /* d63f58: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* d63f5b: mov eax, dword ptr [0xd79bf4] */
  eax = R32((uint32_t)(0xd79bf4u));
/* d63f60: mov dword ptr [0xd79be4], eax */
  W32((uint32_t)(0xd79be4u), eax);
/* d63f65: call 0xd640d6 */
  esp -= 4; W32(esp, 0xd63f6au); SPILL(); f_d640d6(); if (g_unwind) return; RELOAD();
/* d63f6a: push 0xd6411a */
  { uint32_t v = 0xd6411au; esp -= 4; W32(esp, v); }
/* d63f6f: call 0xd63e0c */
  esp -= 4; W32(esp, 0xd63f74u); SPILL(); f_d63e0c(); if (g_unwind) return; RELOAD();
/* d63f74: mov dword ptr [esp], 0xd77624 */
  W32((uint32_t)(esp), 0xd77624u);
/* d63f7b: push 0xd77000 */
  { uint32_t v = 0xd77000u; esp -= 4; W32(esp, v); }
/* d63f80: call 0xd640d0 */
  esp -= 4; W32(esp, 0xd63f85u); SPILL(); f_d640d0(); if (g_unwind) return; RELOAD();
/* d63f85: inc dword ptr [0xd79bc8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xd79bc8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0xd79bc8u), r);
  }
/* d63f8b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d63f8c: jmp 0xd63fcd */
  goto L_d63fcd;
L_d63f8e: /* d63f8e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d63f90: jne 0xd63fce */
  if (!zf) goto L_d63fce;
L_d63f92: /* d63f92: mov eax, dword ptr [0xd79bf4] */
  eax = R32((uint32_t)(0xd79bf4u));
/* d63f97: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d63f99: je 0xd63fce */
  if (zf) goto L_d63fce;
L_d63f9b: /* d63f9b: jmp 0xd63fb0 */
  goto L_d63fb0;
L_d63f9d: /* d63f9d: mov ecx, dword ptr [0xd79be4] */
  ecx = R32((uint32_t)(0xd79be4u));
/* d63fa3: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* d63fa5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d63fa7: je 0xd63fb0 */
  if (zf) goto L_d63fb0;
L_d63fa9: /* d63fa9: call ecx */
  { uint32_t t = ecx; esp -= 4; W32(esp, 0xd63fabu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d63fab: mov eax, dword ptr [0xd79bf4] */
  eax = R32((uint32_t)(0xd79bf4u));
L_d63fb0: /* d63fb0: sub dword ptr [0xd79be4], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xd79be4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(0xd79be4u), r);
  }
/* d63fb7: cmp dword ptr [0xd79be4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xd79be4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d63fbd: jae 0xd63f9d */
  if (!cf) goto L_d63f9d;
L_d63fbf: /* d63fbf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d63fc0: call dword ptr [0xd7a624] */
  esp -= 4; W32(esp, 0xd63fc6u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* d63fc6: and dword ptr [0xd79bf4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xd79bf4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0xd79bf4u), r);
  }
L_d63fcd: /* d63fcd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_d63fce: /* d63fce: xor eax, eax */
  eax = 0;
/* d63fd0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_d63fd1: /* d63fd1: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d63fd4(void) {
  LOAD_REGS();
L_d63fd4: /* d63fd4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* d63fd5: mov ebp, esp */
  ebp = esp;
/* d63fd7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d63fd8: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* d63fdb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d63fdc: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* d63fdf: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d63fe1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d63fe2: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* d63fe5: jne 0xd63ff0 */
  if (!zf) goto L_d63ff0;
L_d63fe7: /* d63fe7: cmp dword ptr [0xd79bc8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xd79bc8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d63fee: jmp 0xd64016 */
  goto L_d64016;
L_d63ff0: /* d63ff0: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d63ff3: je 0xd63ffa */
  if (zf) goto L_d63ffa;
L_d63ff5: /* d63ff5: cmp esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d63ff8: jne 0xd6401c */
  if (!zf) goto L_d6401c;
L_d63ffa: /* d63ffa: mov eax, dword ptr [0xd79bd8] */
  eax = R32((uint32_t)(0xd79bd8u));
/* d63fff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d64001: je 0xd6400c */
  if (zf) goto L_d6400c;
L_d64003: /* d64003: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d64004: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d64005: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d64006: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xd64008u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d64008: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d6400a: je 0xd64018 */
  if (zf) goto L_d64018;
L_d6400c: /* d6400c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d6400d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d6400e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d6400f: call 0xd63f16 */
  esp -= 4; W32(esp, 0xd64014u); SPILL(); f_d63f16(); if (g_unwind) return; RELOAD();
/* d64014: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
L_d64016: /* d64016: jne 0xd6401c */
  if (!zf) goto L_d6401c;
L_d64018: /* d64018: xor eax, eax */
  eax = 0;
/* d6401a: jmp 0xd6406a */
  goto L_d6406a;
L_d6401c: /* d6401c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d6401d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d6401e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d6401f: call 0xd51249 */
  esp -= 4; W32(esp, 0xd64024u); SPILL(); f_d51249(); if (g_unwind) return; RELOAD();
/* d64024: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d64027: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* d6402a: jne 0xd64038 */
  if (!zf) goto L_d64038;
L_d6402c: /* d6402c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d6402e: jne 0xd64067 */
  if (!zf) goto L_d64067;
L_d64030: /* d64030: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d64031: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d64032: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d64033: call 0xd63f16 */
  esp -= 4; W32(esp, 0xd64038u); SPILL(); f_d63f16(); if (g_unwind) return; RELOAD();
L_d64038: /* d64038: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d6403a: je 0xd64041 */
  if (zf) goto L_d64041;
L_d6403c: /* d6403c: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d6403f: jne 0xd64067 */
  if (!zf) goto L_d64067;
L_d64041: /* d64041: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d64042: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d64043: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d64044: call 0xd63f16 */
  esp -= 4; W32(esp, 0xd64049u); SPILL(); f_d63f16(); if (g_unwind) return; RELOAD();
/* d64049: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d6404b: jne 0xd64050 */
  if (!zf) goto L_d64050;
L_d6404d: /* d6404d: and dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
L_d64050: /* d64050: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* d64054: je 0xd64067 */
  if (zf) goto L_d64067;
L_d64056: /* d64056: mov eax, dword ptr [0xd79bd8] */
  eax = R32((uint32_t)(0xd79bd8u));
/* d6405b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d6405d: je 0xd64067 */
  if (zf) goto L_d64067;
L_d6405f: /* d6405f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d64060: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d64061: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d64062: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xd64064u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d64064: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_d64067: /* d64067: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
L_d6406a: /* d6406a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d6406b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d6406c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d6406d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* d6406e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_d64072(void) {
  LOAD_REGS();
L_d64072: /* d64072: jmp dword ptr [0xd7a610] */
  SPILL(); f_41b959(); return; /* MSVCR70!?terminate@@YAXXZ */
}

void f_d64078(void) {
  LOAD_REGS();
L_d64078: /* d64078: push 0xd6415e */
  { uint32_t v = 0xd6415eu; esp -= 4; W32(esp, v); }
/* d6407d: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* d64083: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d64084: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* d64088: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* d6408c: lea ebp, [esp + 0x10] */
  ebp = (uint32_t)(esp + 0x10u);
/* d64090: sub esp, eax */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* d64092: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* d64093: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* d64094: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* d64095: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* d64098: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* d6409b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d6409c: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* d6409f: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* d640a6: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* d640a9: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* d640ac: mov dword ptr fs:[0], eax */
  W32((uint32_t)(FS_BASE + 0x0u), eax);
/* d640b2: ret  */
  esp += 4; SPILL(); return;
}

void f_d640b3(void) {
  LOAD_REGS();
L_d640b3: /* d640b3: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* d640b6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* d640bd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d640be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* d640bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* d640c0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* d640c1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* d640c2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d640c3: ret  */
  esp += 4; SPILL(); return;
}

void f_d640c4(void) {
  LOAD_REGS();
L_d640c4: /* d640c4: jmp dword ptr [0xd7a60c] */
  SPILL(); f_40259b(); return; /* MSVCR70!__dllonexit */
}

void f_d640ca(void) {
  LOAD_REGS();
L_d640ca: /* d640ca: jmp dword ptr [0xd7a604] */
  SPILL(); f_41ac82(); return; /* MSVCR70!??1type_info@@UAE@XZ */
}

void f_d640d0(void) {
  LOAD_REGS();
L_d640d0: /* d640d0: jmp dword ptr [0xd7a600] */
  SPILL(); f_4011ee(); return; /* MSVCR70!_initterm */
}

void f_d640d6(void) {
  LOAD_REGS();
L_d640d6: /* d640d6: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* d640d8: push 0xd6c360 */
  { uint32_t v = 0xd6c360u; esp -= 4; W32(esp, v); }
/* d640dd: call 0xd64078 */
  esp -= 4; W32(esp, 0xd640e2u); SPILL(); f_d64078(); if (g_unwind) return; RELOAD();
/* d640e2: mov dword ptr [ebp - 0x1c], 0xd6c794 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xd6c794u);
L_d640e9: /* d640e9: cmp dword ptr [ebp - 0x1c], 0xd6c894 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xd6c894u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d640f0: jae 0xd64114 */
  if (!cf) goto L_d64114;
L_d640f2: /* d640f2: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* d640f6: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* d640f9: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* d640fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d640fd: je 0xd6410a */
  if (zf) goto L_d6410a;
L_d640ff: /* d640ff: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xd64101u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d64101: jmp 0xd6410a */
  goto L_d6410a;
L_d6410a: /* d6410a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* d6410e: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* d64112: jmp 0xd640e9 */
  goto L_d640e9;
L_d64114: /* d64114: call 0xd640b3 */
  esp -= 4; W32(esp, 0xd64119u); SPILL(); f_d640b3(); if (g_unwind) return; RELOAD();
/* d64119: ret  */
  esp += 4; SPILL(); return;
}

void f_d64103(void) {
  LOAD_REGS();
L_d64103: /* d64103: xor eax, eax */
  eax = 0;
/* d64105: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d64106: ret  */
  esp += 4; SPILL(); return;
}

void f_d64107(void) {
  LOAD_REGS();
  goto L_d64107;
L_d640e9: /* d640e9: cmp dword ptr [ebp - 0x1c], 0xd6c894 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xd6c894u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d640f0: jae 0xd64114 */
  if (!cf) goto L_d64114;
L_d640f2: /* d640f2: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* d640f6: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* d640f9: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* d640fb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d640fd: je 0xd6410a */
  if (zf) goto L_d6410a;
L_d640ff: /* d640ff: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xd64101u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d64101: jmp 0xd6410a */
  goto L_d6410a;
L_d64107: /* d64107: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_d6410a: /* d6410a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* d6410e: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* d64112: jmp 0xd640e9 */
  goto L_d640e9;
L_d64114: /* d64114: call 0xd640b3 */
  esp -= 4; W32(esp, 0xd64119u); SPILL(); f_d640b3(); if (g_unwind) return; RELOAD();
/* d64119: ret  */
  esp += 4; SPILL(); return;
}

void f_d6411a(void) {
  LOAD_REGS();
L_d6411a: /* d6411a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* d6411c: push 0xd6c370 */
  { uint32_t v = 0xd6c370u; esp -= 4; W32(esp, v); }
/* d64121: call 0xd64078 */
  esp -= 4; W32(esp, 0xd64126u); SPILL(); f_d64078(); if (g_unwind) return; RELOAD();
/* d64126: mov dword ptr [ebp - 0x1c], 0xd6c99c */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xd6c99cu);
L_d6412d: /* d6412d: cmp dword ptr [ebp - 0x1c], 0xd6ca9c */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xd6ca9cu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d64134: jae 0xd64158 */
  if (!cf) goto L_d64158;
L_d64136: /* d64136: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* d6413a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* d6413d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* d6413f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d64141: je 0xd6414e */
  if (zf) goto L_d6414e;
L_d64143: /* d64143: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xd64145u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d64145: jmp 0xd6414e */
  goto L_d6414e;
L_d6414e: /* d6414e: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* d64152: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* d64156: jmp 0xd6412d */
  goto L_d6412d;
L_d64158: /* d64158: call 0xd640b3 */
  esp -= 4; W32(esp, 0xd6415du); SPILL(); f_d640b3(); if (g_unwind) return; RELOAD();
/* d6415d: ret  */
  esp += 4; SPILL(); return;
}

void f_d64147(void) {
  LOAD_REGS();
L_d64147: /* d64147: xor eax, eax */
  eax = 0;
/* d64149: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* d6414a: ret  */
  esp += 4; SPILL(); return;
}

void f_d6414b(void) {
  LOAD_REGS();
  goto L_d6414b;
L_d6412d: /* d6412d: cmp dword ptr [ebp - 0x1c], 0xd6ca9c */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xd6ca9cu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* d64134: jae 0xd64158 */
  if (!cf) goto L_d64158;
L_d64136: /* d64136: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* d6413a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* d6413d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* d6413f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d64141: je 0xd6414e */
  if (zf) goto L_d6414e;
L_d64143: /* d64143: call eax */
  { uint32_t t = eax; esp -= 4; W32(esp, 0xd64145u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* d64145: jmp 0xd6414e */
  goto L_d6414e;
L_d6414b: /* d6414b: mov esp, dword ptr [ebp - 0x18] */
  esp = R32((uint32_t)(ebp + 0xffffffe8u));
L_d6414e: /* d6414e: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* d64152: add dword ptr [ebp - 0x1c], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* d64156: jmp 0xd6412d */
  goto L_d6412d;
L_d64158: /* d64158: call 0xd640b3 */
  esp -= 4; W32(esp, 0xd6415du); SPILL(); f_d640b3(); if (g_unwind) return; RELOAD();
/* d6415d: ret  */
  esp += 4; SPILL(); return;
}

void f_d6415e(void) {
  LOAD_REGS();
L_d6415e: /* d6415e: jmp dword ptr [0xd7a5f8] */
  SPILL(); f_406ebd(); return; /* MSVCR70!_except_handler3 */
}

void f_d64164(void) {
  LOAD_REGS();
L_d64164: /* d64164: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d6416a(void) {
  LOAD_REGS();
L_d6416a: /* d6416a: jmp dword ptr [0xd7a5b0] */
  SPILL(); f_46172f(); return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@PBD@Z */
}

void f_d64170(void) {
  LOAD_REGS();
L_d64170: /* d64170: jmp dword ptr [0xd7a5a8] */
  SPILL(); f_4675a8(); return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@ABV01@@Z */
}

void f_d64176(void) {
  LOAD_REGS();
L_d64176: /* d64176: jmp dword ptr [0xd7a5a4] */
  SPILL(); f_4727d1(); return; /* MSVCP70!??Mstd@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z */
}

void f_d6417c(void) {
  LOAD_REGS();
L_d6417c: /* d6417c: jmp dword ptr [0xd7a5a0] */
  SPILL(); f_47275c(); return; /* MSVCP70!??8std@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@0@Z */
}

void f_d64182(void) {
  LOAD_REGS();
L_d64182: /* d64182: jmp dword ptr [0xd7a59c] */
  SPILL(); f_484f46(); return; /* MSVCP70!??_D?$basic_ofstream@DU?$char_traits@D@std@@@std@@QAEXXZ */
}

void f_d64188(void) {
  LOAD_REGS();
L_d64188: /* d64188: jmp dword ptr [0xd7a598] */
  SPILL(); f_480cab(); return; /* MSVCP70!?close@?$basic_ofstream@DU?$char_traits@D@std@@@std@@QAEXXZ */
}

void f_d6418e(void) {
  LOAD_REGS();
L_d6418e: /* d6418e: jmp dword ptr [0xd7a594] */
  SPILL(); f_4617c1(); return; /* MSVCP70!??6std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@ABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@@Z */
}

void f_d64194(void) {
  LOAD_REGS();
L_d64194: /* d64194: jmp dword ptr [0xd7a590] */
  SPILL(); f_46c7a0(); return; /* MSVCP70!??6std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@0@AAV10@PBD@Z */
}

void f_d6419a(void) {
  LOAD_REGS();
L_d6419a: /* d6419a: jmp dword ptr [0xd7a58c] */
  SPILL(); f_4613f7(); return; /* MSVCP70!??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@P6AAAV01@AAV01@@Z@Z */
}

void f_d641a0(void) {
  LOAD_REGS();
L_d641a0: /* d641a0: jmp dword ptr [0xd7a588] */
  SPILL(); f_46f8ee(); return; /* MSVCP70!??6?$basic_ostream@DU?$char_traits@D@std@@@std@@QAEAAV01@I@Z */
}

void f_d641a6(void) {
  LOAD_REGS();
L_d641a6: /* d641a6: jmp dword ptr [0xd7a584] */
  SPILL(); f_461400(); return; /* MSVCP70!?endl@std@@YAAAV?$basic_ostream@DU?$char_traits@D@std@@@1@AAV21@@Z */
}

void f_d641ac(void) {
  LOAD_REGS();
L_d641ac: /* d641ac: jmp dword ptr [0xd7a580] */
  SPILL(); f_48544c(); return; /* MSVCP70!?open@?$basic_ofstream@DU?$char_traits@D@std@@@std@@QAEXPBDH@Z */
}

void f_d641b2(void) {
  LOAD_REGS();
L_d641b2: /* d641b2: jmp dword ptr [0xd7a57c] */
  SPILL(); f_481238(); return; /* MSVCP70!??Hstd@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@ABV10@PBD@Z */
}

void f_d641b8(void) {
  LOAD_REGS();
L_d641b8: /* d641b8: jmp dword ptr [0xd7a578] */
  SPILL(); f_482548(); return; /* MSVCP70!??0?$basic_ofstream@DU?$char_traits@D@std@@@std@@QAE@XZ */
}

void f_d641be(void) {
  LOAD_REGS();
L_d641be: /* d641be: jmp dword ptr [0xd7a574] */
  SPILL(); f_465a76(); return; /* MSVCP70!??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d641c4(void) {
  LOAD_REGS();
L_d641c4: /* d641c4: jmp dword ptr [0xd7a570] */
  SPILL(); f_467980(); return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@ABV01@@Z */
}

void f_d641ca(void) {
  LOAD_REGS();
L_d641ca: /* d641ca: jmp dword ptr [0xd7a56c] */
  SPILL(); f_484f0d(); return; /* MSVCP70!??_D?$basic_ifstream@DU?$char_traits@D@std@@@std@@QAEXXZ */
}

void f_d641d0(void) {
  LOAD_REGS();
L_d641d0: /* d641d0: jmp dword ptr [0xd7a568] */
  SPILL(); f_480c39(); return; /* MSVCP70!?close@?$basic_ifstream@DU?$char_traits@D@std@@@std@@QAEXXZ */
}

void f_d641d6(void) {
  LOAD_REGS();
L_d641d6: /* d641d6: jmp dword ptr [0xd7a564] */
  SPILL(); f_4676a5(); return; /* MSVCP70!?substr@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBE?AV12@II@Z */
}

void f_d641dc(void) {
  LOAD_REGS();
L_d641dc: /* d641dc: jmp dword ptr [0xd7a55c] */
  SPILL(); f_4653a2(); return; /* MSVCP70!?find_first_of@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBEIPBDII@Z */
}

void f_d641e2(void) {
  LOAD_REGS();
L_d641e2: /* d641e2: jmp dword ptr [0xd7a558] */
  SPILL(); f_47c24c(); return; /* MSVCP70!?getline@?$basic_istream@DU?$char_traits@D@std@@@std@@QAEAAV12@PADH@Z */
}

void f_d641e8(void) {
  LOAD_REGS();
L_d641e8: /* d641e8: jmp dword ptr [0xd7a554] */
  SPILL(); f_474057(); return; /* MSVCP70!??5?$basic_istream@DU?$char_traits@D@std@@@std@@QAEAAV01@AAH@Z */
}

void f_d641ee(void) {
  LOAD_REGS();
L_d641ee: /* d641ee: jmp dword ptr [0xd7a534] */
  SPILL(); f_4851ca(); return; /* MSVCP70!?open@?$basic_ifstream@DU?$char_traits@D@std@@@std@@QAEXPBDH@Z */
}

void f_d641f4(void) {
  LOAD_REGS();
L_d641f4: /* d641f4: jmp dword ptr [0xd7a538] */
  SPILL(); f_482320(); return; /* MSVCP70!??0?$basic_ifstream@DU?$char_traits@D@std@@@std@@QAE@XZ */
}

void f_d641fa(void) {
  LOAD_REGS();
L_d641fa: /* d641fa: jmp dword ptr [0xd7a53c] */
  SPILL(); f_472782(); return; /* MSVCP70!??8std@@YA_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PBD@Z */
}

void f_d64200(void) {
  LOAD_REGS();
L_d64200: /* d64200: jmp dword ptr [0xd7a540] */
  SPILL(); f_467690(); return; /* MSVCP70!??4?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEAAV01@PBD@Z */
}

void f_d64206(void) {
  LOAD_REGS();
L_d64206: /* d64206: jmp dword ptr [0xd7a544] */
  SPILL(); f_481196(); return; /* MSVCP70!??Hstd@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@PBDABV10@@Z */
}

void f_d6420c(void) {
  LOAD_REGS();
L_d6420c: /* d6420c: jmp dword ptr [0xd7a548] */
  SPILL(); f_465218(); return; /* MSVCP70!?find@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QBEIPBDII@Z */
}

void f_d64212(void) {
  LOAD_REGS();
L_d64212: /* d64212: jmp dword ptr [0xd7a54c] */
  SPILL(); f_481284(); return; /* MSVCP70!??Hstd@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@0@ABV10@D@Z */
}

void f_d64218(void) {
  LOAD_REGS();
L_d64218: /* d64218: jmp dword ptr [0xd7a550] */
  SPILL(); f_466cef(); return; /* MSVCP70!?reserve@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAEXI@Z */
}

void f_d64e90(void) {
  LOAD_REGS();
L_d64e90: /* d64e90: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* d64e93: jmp dword ptr [0xd7a458] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_d64e99(void) {
  LOAD_REGS();
  goto L_d64e99;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d64e99: /* d64e99: mov eax, 0xd6cba8 */
  eax = 0xd6cba8u;
/* d64e9e: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d64eb0(void) {
  LOAD_REGS();
L_d64eb0: /* d64eb0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* d64eb3: jmp dword ptr [0xd7a458] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_d64eb9(void) {
  LOAD_REGS();
  goto L_d64eb9;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d64eb9: /* d64eb9: mov eax, 0xd6cbd0 */
  eax = 0xd6cbd0u;
/* d64ebe: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d64ed0(void) {
  LOAD_REGS();
L_d64ed0: /* d64ed0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* d64ed3: jmp dword ptr [0xd7a458] */
  SPILL(); f_4e2e55(); return; /* Core!??1UObject@@UAE@XZ */
}

void f_d64ed9(void) {
  LOAD_REGS();
  goto L_d64ed9;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d64ed9: /* d64ed9: mov eax, 0xd6cbf8 */
  eax = 0xd6cbf8u;
/* d64ede: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d64ef0(void) {
  LOAD_REGS();
L_d64ef0: /* d64ef0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* d64ef3: jmp 0xd51a4b */
  SPILL(); f_d51a4b(); return;
}

void f_d64ef8(void) {
  LOAD_REGS();
  goto L_d64ef8;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d64ef8: /* d64ef8: mov eax, 0xd6cc20 */
  eax = 0xd6cc20u;
/* d64efd: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d64f10(void) {
  LOAD_REGS();
L_d64f10: /* d64f10: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* d64f13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d64f14: call 0xd51415 */
  esp -= 4; W32(esp, 0xd64f19u); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d64f19: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d64f1a: ret  */
  esp += 4; SPILL(); return;
}

void f_d64f1b(void) {
  LOAD_REGS();
  goto L_d64f1b;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d64f1b: /* d64f1b: mov eax, 0xd6cc48 */
  eax = 0xd6cc48u;
/* d64f20: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d64f30(void) {
  LOAD_REGS();
L_d64f30: /* d64f30: lea ecx, [ebp - 0x41c] */
  ecx = (uint32_t)(ebp + 0xfffffbe4u);
/* d64f36: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d64f3c(void) {
  LOAD_REGS();
  goto L_d64f3c;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d64f3c: /* d64f3c: mov eax, 0xd6cc70 */
  eax = 0xd6cc70u;
/* d64f41: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d64f50(void) {
  LOAD_REGS();
L_d64f50: /* d64f50: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* d64f53: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d64f54: call 0xd51415 */
  esp -= 4; W32(esp, 0xd64f59u); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d64f59: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d64f5a: ret  */
  esp += 4; SPILL(); return;
}

void f_d64f5b(void) {
  LOAD_REGS();
  goto L_d64f5b;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d64f5b: /* d64f5b: mov eax, 0xd6cc98 */
  eax = 0xd6cc98u;
/* d64f60: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d64f70(void) {
  LOAD_REGS();
L_d64f70: /* d64f70: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* d64f73: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d64f79(void) {
  LOAD_REGS();
L_d64f79: /* d64f79: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* d64f7c: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d64f82(void) {
  LOAD_REGS();
  goto L_d64f82;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d64f82: /* d64f82: mov eax, 0xd6ccc8 */
  eax = 0xd6ccc8u;
/* d64f87: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d64fa0(void) {
  LOAD_REGS();
L_d64fa0: /* d64fa0: lea ecx, [ebp - 0x418] */
  ecx = (uint32_t)(ebp + 0xfffffbe8u);
/* d64fa6: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d64fac(void) {
  LOAD_REGS();
  goto L_d64fac;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d64fac: /* d64fac: mov eax, 0xd6ccf0 */
  eax = 0xd6ccf0u;
/* d64fb1: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d64fc0(void) {
  LOAD_REGS();
L_d64fc0: /* d64fc0: lea ecx, [ebp - 0x418] */
  ecx = (uint32_t)(ebp + 0xfffffbe8u);
/* d64fc6: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d64fcc(void) {
  LOAD_REGS();
  goto L_d64fcc;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d64fcc: /* d64fcc: mov eax, 0xd6cd18 */
  eax = 0xd6cd18u;
/* d64fd1: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d64fe0(void) {
  LOAD_REGS();
L_d64fe0: /* d64fe0: lea ecx, [ebp - 0x440] */
  ecx = (uint32_t)(ebp + 0xfffffbc0u);
/* d64fe6: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d64fec(void) {
  LOAD_REGS();
L_d64fec: /* d64fec: lea ecx, [ebp - 0x428] */
  ecx = (uint32_t)(ebp + 0xfffffbd8u);
/* d64ff2: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d64ff8(void) {
  LOAD_REGS();
L_d64ff8: /* d64ff8: lea ecx, [ebp - 0x434] */
  ecx = (uint32_t)(ebp + 0xfffffbccu);
/* d64ffe: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d65004(void) {
  LOAD_REGS();
  goto L_d65004;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65004: /* d65004: mov eax, 0xd6cd50 */
  eax = 0xd6cd50u;
/* d65009: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65020(void) {
  LOAD_REGS();
L_d65020: /* d65020: lea ecx, [ebp - 0x824] */
  ecx = (uint32_t)(ebp + 0xfffff7dcu);
/* d65026: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d6502c(void) {
  LOAD_REGS();
L_d6502c: /* d6502c: lea ecx, [ebp - 0x818] */
  ecx = (uint32_t)(ebp + 0xfffff7e8u);
/* d65032: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d65038(void) {
  LOAD_REGS();
  goto L_d65038;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65038: /* d65038: mov eax, 0xd6cd84 */
  eax = 0xd6cd84u;
/* d6503d: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65050(void) {
  LOAD_REGS();
L_d65050: /* d65050: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* d65053: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65059(void) {
  LOAD_REGS();
L_d65059: /* d65059: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* d6505c: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d65062(void) {
  LOAD_REGS();
  goto L_d65062;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65062: /* d65062: mov eax, 0xd6cdb4 */
  eax = 0xd6cdb4u;
/* d65067: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65080(void) {
  LOAD_REGS();
L_d65080: /* d65080: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* d65083: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65089(void) {
  LOAD_REGS();
L_d65089: /* d65089: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* d6508c: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d65092(void) {
  LOAD_REGS();
  goto L_d65092;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65092: /* d65092: mov eax, 0xd6cde4 */
  eax = 0xd6cde4u;
/* d65097: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d650b0(void) {
  LOAD_REGS();
L_d650b0: /* d650b0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d650b3: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d650b9(void) {
  LOAD_REGS();
  goto L_d650b9;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d650b9: /* d650b9: mov eax, 0xd6ce0c */
  eax = 0xd6ce0cu;
/* d650be: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d650d0(void) {
  LOAD_REGS();
L_d650d0: /* d650d0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d650d3: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d650d9(void) {
  LOAD_REGS();
  goto L_d650d9;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d650d9: /* d650d9: mov eax, 0xd6ce34 */
  eax = 0xd6ce34u;
/* d650de: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d650f0(void) {
  LOAD_REGS();
L_d650f0: /* d650f0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d650f3: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d650f9(void) {
  LOAD_REGS();
  goto L_d650f9;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d650f9: /* d650f9: mov eax, 0xd6ce5c */
  eax = 0xd6ce5cu;
/* d650fe: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65110(void) {
  LOAD_REGS();
L_d65110: /* d65110: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d65113: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d65119(void) {
  LOAD_REGS();
  goto L_d65119;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65119: /* d65119: mov eax, 0xd6ce84 */
  eax = 0xd6ce84u;
/* d6511e: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65130(void) {
  LOAD_REGS();
L_d65130: /* d65130: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d65133: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d65139(void) {
  LOAD_REGS();
  goto L_d65139;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65139: /* d65139: mov eax, 0xd6ceac */
  eax = 0xd6ceacu;
/* d6513e: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65150(void) {
  LOAD_REGS();
L_d65150: /* d65150: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d65153: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d65159(void) {
  LOAD_REGS();
  goto L_d65159;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65159: /* d65159: mov eax, 0xd6ced4 */
  eax = 0xd6ced4u;
/* d6515e: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65170(void) {
  LOAD_REGS();
L_d65170: /* d65170: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d65173: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d65179(void) {
  LOAD_REGS();
  goto L_d65179;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65179: /* d65179: mov eax, 0xd6cefc */
  eax = 0xd6cefcu;
/* d6517e: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65190(void) {
  LOAD_REGS();
L_d65190: /* d65190: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d65193: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d65199(void) {
  LOAD_REGS();
  goto L_d65199;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65199: /* d65199: mov eax, 0xd6cf24 */
  eax = 0xd6cf24u;
/* d6519e: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d651b0(void) {
  LOAD_REGS();
L_d651b0: /* d651b0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d651b3: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d651b9(void) {
  LOAD_REGS();
  goto L_d651b9;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d651b9: /* d651b9: mov eax, 0xd6cf4c */
  eax = 0xd6cf4cu;
/* d651be: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d651d0(void) {
  LOAD_REGS();
L_d651d0: /* d651d0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d651d3: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d651d9(void) {
  LOAD_REGS();
  goto L_d651d9;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d651d9: /* d651d9: mov eax, 0xd6cf74 */
  eax = 0xd6cf74u;
/* d651de: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d651f0(void) {
  LOAD_REGS();
L_d651f0: /* d651f0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d651f3: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d651f9(void) {
  LOAD_REGS();
  goto L_d651f9;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d651f9: /* d651f9: mov eax, 0xd6cf9c */
  eax = 0xd6cf9cu;
/* d651fe: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65210(void) {
  LOAD_REGS();
L_d65210: /* d65210: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d65213: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d65219(void) {
  LOAD_REGS();
  goto L_d65219;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65219: /* d65219: mov eax, 0xd6cfc4 */
  eax = 0xd6cfc4u;
/* d6521e: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65230(void) {
  LOAD_REGS();
L_d65230: /* d65230: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d65233: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d65239(void) {
  LOAD_REGS();
  goto L_d65239;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65239: /* d65239: mov eax, 0xd6cfec */
  eax = 0xd6cfecu;
/* d6523e: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65250(void) {
  LOAD_REGS();
L_d65250: /* d65250: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d65253: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d65259(void) {
  LOAD_REGS();
  goto L_d65259;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65259: /* d65259: mov eax, 0xd6d014 */
  eax = 0xd6d014u;
/* d6525e: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65270(void) {
  LOAD_REGS();
L_d65270: /* d65270: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d65273: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d65279(void) {
  LOAD_REGS();
  goto L_d65279;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65279: /* d65279: mov eax, 0xd6d03c */
  eax = 0xd6d03cu;
/* d6527e: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65290(void) {
  LOAD_REGS();
L_d65290: /* d65290: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d65293: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d65299(void) {
  LOAD_REGS();
  goto L_d65299;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65299: /* d65299: mov eax, 0xd6d064 */
  eax = 0xd6d064u;
/* d6529e: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d652b0(void) {
  LOAD_REGS();
L_d652b0: /* d652b0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d652b3: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d652b9(void) {
  LOAD_REGS();
  goto L_d652b9;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d652b9: /* d652b9: mov eax, 0xd6d08c */
  eax = 0xd6d08cu;
/* d652be: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d652d0(void) {
  LOAD_REGS();
L_d652d0: /* d652d0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d652d3: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d652d9(void) {
  LOAD_REGS();
  goto L_d652d9;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d652d9: /* d652d9: mov eax, 0xd6d0b4 */
  eax = 0xd6d0b4u;
/* d652de: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d652f0(void) {
  LOAD_REGS();
L_d652f0: /* d652f0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d652f3: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d652f9(void) {
  LOAD_REGS();
  goto L_d652f9;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d652f9: /* d652f9: mov eax, 0xd6d0dc */
  eax = 0xd6d0dcu;
/* d652fe: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65310(void) {
  LOAD_REGS();
L_d65310: /* d65310: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d65313: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d65319(void) {
  LOAD_REGS();
L_d65319: /* d65319: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* d6531c: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d65322(void) {
  LOAD_REGS();
  goto L_d65322;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65322: /* d65322: mov eax, 0xd6d10c */
  eax = 0xd6d10cu;
/* d65327: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65340(void) {
  LOAD_REGS();
L_d65340: /* d65340: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d65343: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d65349(void) {
  LOAD_REGS();
  goto L_d65349;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65349: /* d65349: mov eax, 0xd6d134 */
  eax = 0xd6d134u;
/* d6534e: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65360(void) {
  LOAD_REGS();
L_d65360: /* d65360: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d65363: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d65369(void) {
  LOAD_REGS();
  goto L_d65369;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65369: /* d65369: mov eax, 0xd6d15c */
  eax = 0xd6d15cu;
/* d6536e: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65380(void) {
  LOAD_REGS();
L_d65380: /* d65380: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d65383: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d65389(void) {
  LOAD_REGS();
  goto L_d65389;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65389: /* d65389: mov eax, 0xd6d184 */
  eax = 0xd6d184u;
/* d6538e: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d653a0(void) {
  LOAD_REGS();
L_d653a0: /* d653a0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d653a3: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d653a9(void) {
  LOAD_REGS();
  goto L_d653a9;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d653a9: /* d653a9: mov eax, 0xd6d1ac */
  eax = 0xd6d1acu;
/* d653ae: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d653c0(void) {
  LOAD_REGS();
L_d653c0: /* d653c0: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* d653c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d653c4: call 0xd51415 */
  esp -= 4; W32(esp, 0xd653c9u); SPILL(); f_d51415(); if (g_unwind) return; RELOAD();
/* d653c9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* d653ca: ret  */
  esp += 4; SPILL(); return;
}

void f_d653cb(void) {
  LOAD_REGS();
  goto L_d653cb;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d653cb: /* d653cb: mov eax, 0xd6d1d4 */
  eax = 0xd6d1d4u;
/* d653d0: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d653e0(void) {
  LOAD_REGS();
L_d653e0: /* d653e0: lea ecx, [ebp - 0x820] */
  ecx = (uint32_t)(ebp + 0xfffff7e0u);
/* d653e6: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d653ec(void) {
  LOAD_REGS();
L_d653ec: /* d653ec: lea ecx, [ebp - 0x82c] */
  ecx = (uint32_t)(ebp + 0xfffff7d4u);
/* d653f2: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d653f8(void) {
  LOAD_REGS();
L_d653f8: /* d653f8: mov ecx, dword ptr [ebp - 0x810] */
  ecx = R32((uint32_t)(ebp + 0xfffff7f0u));
/* d653fe: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65404(void) {
  LOAD_REGS();
  goto L_d65404;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65404: /* d65404: mov eax, 0xd6d20c */
  eax = 0xd6d20cu;
/* d65409: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65420(void) {
  LOAD_REGS();
L_d65420: /* d65420: lea ecx, [ebp - 0x820] */
  ecx = (uint32_t)(ebp + 0xfffff7e0u);
/* d65426: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d6542c(void) {
  LOAD_REGS();
L_d6542c: /* d6542c: lea ecx, [ebp - 0x82c] */
  ecx = (uint32_t)(ebp + 0xfffff7d4u);
/* d65432: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d65438(void) {
  LOAD_REGS();
L_d65438: /* d65438: mov ecx, dword ptr [ebp - 0x810] */
  ecx = R32((uint32_t)(ebp + 0xfffff7f0u));
/* d6543e: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65444(void) {
  LOAD_REGS();
  goto L_d65444;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65444: /* d65444: mov eax, 0xd6d248 */
  eax = 0xd6d248u;
/* d65449: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65460(void) {
  LOAD_REGS();
L_d65460: /* d65460: lea ecx, [ebp - 0x820] */
  ecx = (uint32_t)(ebp + 0xfffff7e0u);
/* d65466: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d6546c(void) {
  LOAD_REGS();
L_d6546c: /* d6546c: lea ecx, [ebp - 0x82c] */
  ecx = (uint32_t)(ebp + 0xfffff7d4u);
/* d65472: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d65478(void) {
  LOAD_REGS();
L_d65478: /* d65478: mov ecx, dword ptr [ebp - 0x810] */
  ecx = R32((uint32_t)(ebp + 0xfffff7f0u));
/* d6547e: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65484(void) {
  LOAD_REGS();
  goto L_d65484;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65484: /* d65484: mov eax, 0xd6d284 */
  eax = 0xd6d284u;
/* d65489: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d654a0(void) {
  LOAD_REGS();
L_d654a0: /* d654a0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d654a3: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d654a9(void) {
  LOAD_REGS();
  goto L_d654a9;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d654a9: /* d654a9: mov eax, 0xd6d2b0 */
  eax = 0xd6d2b0u;
/* d654ae: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d654c0(void) {
  LOAD_REGS();
L_d654c0: /* d654c0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* d654c3: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d654c9(void) {
  LOAD_REGS();
  goto L_d654c9;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d654c9: /* d654c9: mov eax, 0xd6d2d8 */
  eax = 0xd6d2d8u;
/* d654ce: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d654e0(void) {
  LOAD_REGS();
L_d654e0: /* d654e0: lea ecx, [ebp - 0x428] */
  ecx = (uint32_t)(ebp + 0xfffffbd8u);
/* d654e6: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d654ec(void) {
  LOAD_REGS();
L_d654ec: /* d654ec: lea ecx, [ebp - 0x41c] */
  ecx = (uint32_t)(ebp + 0xfffffbe4u);
/* d654f2: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d654f8(void) {
  LOAD_REGS();
  goto L_d654f8;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d654f8: /* d654f8: mov eax, 0xd6d308 */
  eax = 0xd6d308u;
/* d654fd: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65510(void) {
  LOAD_REGS();
L_d65510: /* d65510: lea ecx, [ebp - 0x820] */
  ecx = (uint32_t)(ebp + 0xfffff7e0u);
/* d65516: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d6551c(void) {
  LOAD_REGS();
L_d6551c: /* d6551c: lea ecx, [ebp - 0x82c] */
  ecx = (uint32_t)(ebp + 0xfffff7d4u);
/* d65522: jmp dword ptr [0xd7a480] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_d65528(void) {
  LOAD_REGS();
L_d65528: /* d65528: mov ecx, dword ptr [ebp - 0x810] */
  ecx = R32((uint32_t)(ebp + 0xfffff7f0u));
/* d6552e: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65534(void) {
  LOAD_REGS();
  goto L_d65534;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65534: /* d65534: mov eax, 0xd6d340 */
  eax = 0xd6d340u;
/* d65539: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65550(void) {
  LOAD_REGS();
L_d65550: /* d65550: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* d65553: jmp dword ptr [0xd7a620] */
  SPILL(); f_41aa26(); return; /* MSVCR70!??1exception@@UAE@XZ */
}

void f_d65559(void) {
  LOAD_REGS();
  goto L_d65559;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65559: /* d65559: mov eax, 0xd6d36c */
  eax = 0xd6d36cu;
/* d6555e: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65570(void) {
  LOAD_REGS();
L_d65570: /* d65570: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* d65573: jmp dword ptr [0xd7a620] */
  SPILL(); f_41aa26(); return; /* MSVCR70!??1exception@@UAE@XZ */
}

void f_d65579(void) {
  LOAD_REGS();
  goto L_d65579;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65579: /* d65579: mov eax, 0xd6d394 */
  eax = 0xd6d394u;
/* d6557e: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65590(void) {
  LOAD_REGS();
L_d65590: /* d65590: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* d65593: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65599(void) {
  LOAD_REGS();
L_d65599: /* d65599: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* d6559c: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d6559f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d655a1: je 0xd655b0 */
  if (zf) goto L_d655b0;
L_d655a7: /* d655a7: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* d655aa: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
L_d655b0: /* d655b0: ret  */
  esp += 4; SPILL(); return;
}

void f_d655b1(void) {
  LOAD_REGS();
  goto L_d655b1;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d655b1: /* d655b1: mov eax, 0xd6d3c4 */
  eax = 0xd6d3c4u;
/* d655b6: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d655d0(void) {
  LOAD_REGS();
L_d655d0: /* d655d0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* d655d3: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d655d9(void) {
  LOAD_REGS();
  goto L_d655d9;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d655d9: /* d655d9: mov eax, 0xd6d3ec */
  eax = 0xd6d3ecu;
/* d655de: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d655f0(void) {
  LOAD_REGS();
L_d655f0: /* d655f0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* d655f3: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d655f9(void) {
  LOAD_REGS();
  goto L_d655f9;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d655f9: /* d655f9: mov eax, 0xd6d414 */
  eax = 0xd6d414u;
/* d655fe: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65610(void) {
  LOAD_REGS();
L_d65610: /* d65610: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* d65613: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65619(void) {
  LOAD_REGS();
L_d65619: /* d65619: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* d6561c: jmp dword ptr [0xd7a620] */
  SPILL(); f_41aa26(); return; /* MSVCR70!??1exception@@UAE@XZ */
}

void f_d65622(void) {
  LOAD_REGS();
  goto L_d65622;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65622: /* d65622: mov eax, 0xd6d4cc */
  eax = 0xd6d4ccu;
/* d65627: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65640(void) {
  LOAD_REGS();
L_d65640: /* d65640: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* d65643: jmp dword ptr [0xd7a620] */
  SPILL(); f_41aa26(); return; /* MSVCR70!??1exception@@UAE@XZ */
}

void f_d65649(void) {
  LOAD_REGS();
  goto L_d65649;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65649: /* d65649: mov eax, 0xd6d4f4 */
  eax = 0xd6d4f4u;
/* d6564e: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65660(void) {
  LOAD_REGS();
L_d65660: /* d65660: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* d65663: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65669(void) {
  LOAD_REGS();
L_d65669: /* d65669: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* d6566c: jmp dword ptr [0xd7a620] */
  SPILL(); f_41aa26(); return; /* MSVCR70!??1exception@@UAE@XZ */
}

void f_d65672(void) {
  LOAD_REGS();
  goto L_d65672;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65672: /* d65672: mov eax, 0xd6d524 */
  eax = 0xd6d524u;
/* d65677: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65690(void) {
  LOAD_REGS();
L_d65690: /* d65690: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* d65693: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65699(void) {
  LOAD_REGS();
  goto L_d65699;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65699: /* d65699: mov eax, 0xd6d54c */
  eax = 0xd6d54cu;
/* d6569e: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d656b0(void) {
  LOAD_REGS();
L_d656b0: /* d656b0: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* d656b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d656b4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* d656b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d656b8: call 0xd517fd */
  esp -= 4; W32(esp, 0xd656bdu); SPILL(); f_d517fd(); if (g_unwind) return; RELOAD();
/* d656bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d656c0: ret  */
  esp += 4; SPILL(); return;
}

void f_d656c1(void) {
  LOAD_REGS();
  goto L_d656c1;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d656c1: /* d656c1: mov eax, 0xd6d5a8 */
  eax = 0xd6d5a8u;
/* d656c6: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d656e0(void) {
  LOAD_REGS();
L_d656e0: /* d656e0: lea ecx, [ebp + 4] */
  ecx = (uint32_t)(ebp + 0x4u);
/* d656e3: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d656e9(void) {
  LOAD_REGS();
  goto L_d656e9;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d656e9: /* d656e9: mov eax, 0xd6d5d4 */
  eax = 0xd6d5d4u;
/* d656ee: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65700(void) {
  LOAD_REGS();
L_d65700: /* d65700: lea ecx, [ebp - 0xa4] */
  ecx = (uint32_t)(ebp + 0xffffff5cu);
/* d65706: jmp dword ptr [0xd7a59c] */
  SPILL(); f_484f46(); return; /* MSVCP70!??_D?$basic_ofstream@DU?$char_traits@D@std@@@std@@QAEXXZ */
}

void f_d6570c(void) {
  LOAD_REGS();
L_d6570c: /* d6570c: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* d65712: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65718(void) {
  LOAD_REGS();
  goto L_d65718;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65718: /* d65718: mov eax, 0xd6d604 */
  eax = 0xd6d604u;
/* d6571d: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65730(void) {
  LOAD_REGS();
L_d65730: /* d65730: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* d65733: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65739(void) {
  LOAD_REGS();
L_d65739: /* d65739: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* d6573c: jmp dword ptr [0xd7a620] */
  SPILL(); f_41aa26(); return; /* MSVCR70!??1exception@@UAE@XZ */
}

void f_d65742(void) {
  LOAD_REGS();
  goto L_d65742;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65742: /* d65742: mov eax, 0xd6d634 */
  eax = 0xd6d634u;
/* d65747: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65760(void) {
  LOAD_REGS();
  goto L_d65760;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65760: /* d65760: mov eax, 0xd6d6bc */
  eax = 0xd6d6bcu;
/* d65765: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65770(void) {
  LOAD_REGS();
L_d65770: /* d65770: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* d65773: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65779(void) {
  LOAD_REGS();
L_d65779: /* d65779: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* d6577c: jmp dword ptr [0xd7a620] */
  SPILL(); f_41aa26(); return; /* MSVCR70!??1exception@@UAE@XZ */
}

void f_d65782(void) {
  LOAD_REGS();
L_d65782: /* d65782: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* d65785: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d6578b(void) {
  LOAD_REGS();
  goto L_d6578b;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d6578b: /* d6578b: mov eax, 0xd6d748 */
  eax = 0xd6d748u;
/* d65790: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d657a0(void) {
  LOAD_REGS();
  goto L_d657a0;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d657a0: /* d657a0: mov eax, 0xd6d7a0 */
  eax = 0xd6d7a0u;
/* d657a5: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d657b0(void) {
  LOAD_REGS();
L_d657b0: /* d657b0: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* d657b3: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d657b9(void) {
  LOAD_REGS();
L_d657b9: /* d657b9: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* d657bc: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d657c2(void) {
  LOAD_REGS();
L_d657c2: /* d657c2: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* d657c5: jmp 0xd515b4 */
  SPILL(); f_d515b4(); return;
}

void f_d657ca(void) {
  LOAD_REGS();
L_d657ca: /* d657ca: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* d657cd: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d657d3(void) {
  LOAD_REGS();
  goto L_d657d3;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d657d3: /* d657d3: mov eax, 0xd6d7e4 */
  eax = 0xd6d7e4u;
/* d657d8: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d657f0(void) {
  LOAD_REGS();
L_d657f0: /* d657f0: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* d657f3: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d657f9(void) {
  LOAD_REGS();
  goto L_d657f9;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d657f9: /* d657f9: mov eax, 0xd6d810 */
  eax = 0xd6d810u;
/* d657fe: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65810(void) {
  LOAD_REGS();
L_d65810: /* d65810: lea ecx, [ebp + 0x24] */
  ecx = (uint32_t)(ebp + 0x24u);
/* d65813: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65819(void) {
  LOAD_REGS();
L_d65819: /* d65819: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* d6581c: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65822(void) {
  LOAD_REGS();
  goto L_d65822;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65822: /* d65822: mov eax, 0xd6d840 */
  eax = 0xd6d840u;
/* d65827: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65840(void) {
  LOAD_REGS();
L_d65840: /* d65840: lea ecx, [ebp - 0x4e0] */
  ecx = (uint32_t)(ebp + 0xfffffb20u);
/* d65846: jmp dword ptr [0xd7a56c] */
  SPILL(); f_484f0d(); return; /* MSVCP70!??_D?$basic_ifstream@DU?$char_traits@D@std@@@std@@QAEXXZ */
}

void f_d6584c(void) {
  LOAD_REGS();
L_d6584c: /* d6584c: lea ecx, [ebp - 0x518] */
  ecx = (uint32_t)(ebp + 0xfffffae8u);
/* d65852: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65858(void) {
  LOAD_REGS();
L_d65858: /* d65858: lea ecx, [ebp - 0x4fc] */
  ecx = (uint32_t)(ebp + 0xfffffb04u);
/* d6585e: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65864(void) {
  LOAD_REGS();
L_d65864: /* d65864: lea ecx, [ebp - 0x428] */
  ecx = (uint32_t)(ebp + 0xfffffbd8u);
/* d6586a: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65870(void) {
  LOAD_REGS();
L_d65870: /* d65870: lea ecx, [ebp - 0x444] */
  ecx = (uint32_t)(ebp + 0xfffffbbcu);
/* d65876: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d6587c(void) {
  LOAD_REGS();
  goto L_d6587c;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d6587c: /* d6587c: mov eax, 0xd6d888 */
  eax = 0xd6d888u;
/* d65881: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d658a0(void) {
  LOAD_REGS();
L_d658a0: /* d658a0: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* d658a3: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d658a9(void) {
  LOAD_REGS();
  goto L_d658a9;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d658a9: /* d658a9: mov eax, 0xd6d8b4 */
  eax = 0xd6d8b4u;
/* d658ae: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d658c0(void) {
  LOAD_REGS();
  goto L_d658c0;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d658c0: /* d658c0: mov eax, 0xd6d908 */
  eax = 0xd6d908u;
/* d658c5: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d658d0(void) {
  LOAD_REGS();
L_d658d0: /* d658d0: lea ecx, [ebp + 0x20] */
  ecx = (uint32_t)(ebp + 0x20u);
/* d658d3: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d658d9(void) {
  LOAD_REGS();
L_d658d9: /* d658d9: lea ecx, [ebp + 4] */
  ecx = (uint32_t)(ebp + 0x4u);
/* d658dc: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d658e2(void) {
  LOAD_REGS();
  goto L_d658e2;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d658e2: /* d658e2: mov eax, 0xd6d93c */
  eax = 0xd6d93cu;
/* d658e7: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65900(void) {
  LOAD_REGS();
L_d65900: /* d65900: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* d65903: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65909(void) {
  LOAD_REGS();
L_d65909: /* d65909: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* d6590c: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d6590f: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65915(void) {
  LOAD_REGS();
  goto L_d65915;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65915: /* d65915: mov eax, 0xd6d96c */
  eax = 0xd6d96cu;
/* d6591a: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65930(void) {
  LOAD_REGS();
L_d65930: /* d65930: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* d65933: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d65934: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* d65937: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d65938: call 0xd517fd */
  esp -= 4; W32(esp, 0xd6593du); SPILL(); f_d517fd(); if (g_unwind) return; RELOAD();
/* d6593d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d65940: ret  */
  esp += 4; SPILL(); return;
}

void f_d65941(void) {
  LOAD_REGS();
  goto L_d65941;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65941: /* d65941: mov eax, 0xd6d994 */
  eax = 0xd6d994u;
/* d65946: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65960(void) {
  LOAD_REGS();
L_d65960: /* d65960: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* d65963: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65969(void) {
  LOAD_REGS();
L_d65969: /* d65969: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* d6596c: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d6596f: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65975(void) {
  LOAD_REGS();
  goto L_d65975;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65975: /* d65975: mov eax, 0xd6d9c4 */
  eax = 0xd6d9c4u;
/* d6597a: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65990(void) {
  LOAD_REGS();
L_d65990: /* d65990: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d65993: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65999(void) {
  LOAD_REGS();
L_d65999: /* d65999: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d6599c: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d6599f: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d659a5(void) {
  LOAD_REGS();
  goto L_d659a5;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d659a5: /* d659a5: mov eax, 0xd6d9f4 */
  eax = 0xd6d9f4u;
/* d659aa: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d659c0(void) {
  LOAD_REGS();
L_d659c0: /* d659c0: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* d659c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d659c4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* d659c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d659c8: call 0xd517fd */
  esp -= 4; W32(esp, 0xd659cdu); SPILL(); f_d517fd(); if (g_unwind) return; RELOAD();
/* d659cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d659d0: ret  */
  esp += 4; SPILL(); return;
}

void f_d659d1(void) {
  LOAD_REGS();
  goto L_d659d1;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d659d1: /* d659d1: mov eax, 0xd6da50 */
  eax = 0xd6da50u;
/* d659d6: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d659f0(void) {
  LOAD_REGS();
L_d659f0: /* d659f0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* d659f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* d659f4: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* d659f7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* d659f8: call 0xd517fd */
  esp -= 4; W32(esp, 0xd659fdu); SPILL(); f_d517fd(); if (g_unwind) return; RELOAD();
/* d659fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d65a00: ret  */
  esp += 4; SPILL(); return;
}

void f_d65a01(void) {
  LOAD_REGS();
  goto L_d65a01;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65a01: /* d65a01: mov eax, 0xd6dab0 */
  eax = 0xd6dab0u;
/* d65a06: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65a20(void) {
  LOAD_REGS();
L_d65a20: /* d65a20: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* d65a23: jmp 0xd51b40 */
  SPILL(); f_d51b40(); return;
}

void f_d65a28(void) {
  LOAD_REGS();
  goto L_d65a28;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65a28: /* d65a28: mov eax, 0xd6db44 */
  eax = 0xd6db44u;
/* d65a2d: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65a40(void) {
  LOAD_REGS();
L_d65a40: /* d65a40: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* d65a43: jmp 0xd51b40 */
  SPILL(); f_d51b40(); return;
}

void f_d65a48(void) {
  LOAD_REGS();
  goto L_d65a48;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65a48: /* d65a48: mov eax, 0xd6db78 */
  eax = 0xd6db78u;
/* d65a4d: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65a60(void) {
  LOAD_REGS();
L_d65a60: /* d65a60: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* d65a63: jmp 0xd5100f */
  SPILL(); f_d5100f(); return;
}

void f_d65a68(void) {
  LOAD_REGS();
L_d65a68: /* d65a68: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* d65a6b: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d65a6e: jmp 0xd51b7c */
  SPILL(); f_d51b7c(); return;
}

void f_d65a73(void) {
  LOAD_REGS();
L_d65a73: /* d65a73: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* d65a76: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d65a79: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65a7f(void) {
  LOAD_REGS();
  goto L_d65a7f;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65a7f: /* d65a7f: mov eax, 0xd6dbb0 */
  eax = 0xd6dbb0u;
/* d65a84: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65aa0(void) {
  LOAD_REGS();
L_d65aa0: /* d65aa0: lea ecx, [ebp - 0x2ec] */
  ecx = (uint32_t)(ebp + 0xfffffd14u);
/* d65aa6: jmp 0xd51b40 */
  SPILL(); f_d51b40(); return;
}

void f_d65aab(void) {
  LOAD_REGS();
L_d65aab: /* d65aab: lea ecx, [ebp - 0x2a4] */
  ecx = (uint32_t)(ebp + 0xfffffd5cu);
/* d65ab1: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65ab7(void) {
  LOAD_REGS();
L_d65ab7: /* d65ab7: lea ecx, [ebp - 0x288] */
  ecx = (uint32_t)(ebp + 0xfffffd78u);
/* d65abd: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65ac3(void) {
  LOAD_REGS();
L_d65ac3: /* d65ac3: lea ecx, [ebp - 0x26c] */
  ecx = (uint32_t)(ebp + 0xfffffd94u);
/* d65ac9: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65acf(void) {
  LOAD_REGS();
  goto L_d65acf;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65acf: /* d65acf: mov eax, 0xd6dbf4 */
  eax = 0xd6dbf4u;
/* d65ad4: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65af0(void) {
  LOAD_REGS();
L_d65af0: /* d65af0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* d65af3: jmp 0xd5100f */
  SPILL(); f_d5100f(); return;
}

void f_d65af8(void) {
  LOAD_REGS();
L_d65af8: /* d65af8: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* d65afb: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d65afe: jmp 0xd51b7c */
  SPILL(); f_d51b7c(); return;
}

void f_d65b03(void) {
  LOAD_REGS();
L_d65b03: /* d65b03: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* d65b06: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d65b09: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65b0f(void) {
  LOAD_REGS();
L_d65b0f: /* d65b0f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* d65b12: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* d65b15: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65b1b(void) {
  LOAD_REGS();
  goto L_d65b1b;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65b1b: /* d65b1b: mov eax, 0xd6dc38 */
  eax = 0xd6dc38u;
/* d65b20: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65b40(void) {
  LOAD_REGS();
L_d65b40: /* d65b40: lea ecx, [ebp + 0x20] */
  ecx = (uint32_t)(ebp + 0x20u);
/* d65b43: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65b49(void) {
  LOAD_REGS();
L_d65b49: /* d65b49: lea ecx, [ebp + 4] */
  ecx = (uint32_t)(ebp + 0x4u);
/* d65b4c: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65b52(void) {
  LOAD_REGS();
L_d65b52: /* d65b52: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* d65b55: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65b5b(void) {
  LOAD_REGS();
L_d65b5b: /* d65b5b: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* d65b5e: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65b64(void) {
  LOAD_REGS();
L_d65b64: /* d65b64: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* d65b67: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65b6d(void) {
  LOAD_REGS();
L_d65b6d: /* d65b6d: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* d65b70: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65b76(void) {
  LOAD_REGS();
  goto L_d65b76;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65b76: /* d65b76: mov eax, 0xd6dc9c */
  eax = 0xd6dc9cu;
/* d65b7b: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65b90(void) {
  LOAD_REGS();
L_d65b90: /* d65b90: lea ecx, [ebp - 0x184] */
  ecx = (uint32_t)(ebp + 0xfffffe7cu);
/* d65b96: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65b9c(void) {
  LOAD_REGS();
  goto L_d65b9c;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65b9c: /* d65b9c: mov eax, 0xd6dccc */
  eax = 0xd6dcccu;
/* d65ba1: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65bb0(void) {
  LOAD_REGS();
L_d65bb0: /* d65bb0: lea ecx, [ebp + 0x20] */
  ecx = (uint32_t)(ebp + 0x20u);
/* d65bb3: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65bb9(void) {
  LOAD_REGS();
L_d65bb9: /* d65bb9: lea ecx, [ebp + 4] */
  ecx = (uint32_t)(ebp + 0x4u);
/* d65bbc: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65bc2(void) {
  LOAD_REGS();
  goto L_d65bc2;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65bc2: /* d65bc2: mov eax, 0xd6dcfc */
  eax = 0xd6dcfcu;
/* d65bc7: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65be0(void) {
  LOAD_REGS();
L_d65be0: /* d65be0: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* d65be3: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65be9(void) {
  LOAD_REGS();
  goto L_d65be9;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65be9: /* d65be9: mov eax, 0xd6dd24 */
  eax = 0xd6dd24u;
/* d65bee: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65c00(void) {
  LOAD_REGS();
L_d65c00: /* d65c00: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d65c03: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65c09(void) {
  LOAD_REGS();
  goto L_d65c09;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65c09: /* d65c09: mov eax, 0xd6dd4c */
  eax = 0xd6dd4cu;
/* d65c0e: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65c20(void) {
  LOAD_REGS();
L_d65c20: /* d65c20: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d65c23: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65c29(void) {
  LOAD_REGS();
  goto L_d65c29;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65c29: /* d65c29: mov eax, 0xd6dd74 */
  eax = 0xd6dd74u;
/* d65c2e: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65c40(void) {
  LOAD_REGS();
L_d65c40: /* d65c40: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d65c43: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65c49(void) {
  LOAD_REGS();
  goto L_d65c49;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65c49: /* d65c49: mov eax, 0xd6dd9c */
  eax = 0xd6dd9cu;
/* d65c4e: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65c60(void) {
  LOAD_REGS();
L_d65c60: /* d65c60: lea ecx, [ebp - 0x1f0] */
  ecx = (uint32_t)(ebp + 0xfffffe10u);
/* d65c66: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65c6c(void) {
  LOAD_REGS();
L_d65c6c: /* d65c6c: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* d65c6f: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65c75(void) {
  LOAD_REGS();
L_d65c75: /* d65c75: lea ecx, [ebp - 0x194] */
  ecx = (uint32_t)(ebp + 0xfffffe6cu);
/* d65c7b: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65c81(void) {
  LOAD_REGS();
L_d65c81: /* d65c81: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* d65c84: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65c8a(void) {
  LOAD_REGS();
L_d65c8a: /* d65c8a: lea ecx, [ebp - 0x15c] */
  ecx = (uint32_t)(ebp + 0xfffffea4u);
/* d65c90: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65c96(void) {
  LOAD_REGS();
L_d65c96: /* d65c96: lea ecx, [ebp - 0xb4] */
  ecx = (uint32_t)(ebp + 0xffffff4cu);
/* d65c9c: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65ca2(void) {
  LOAD_REGS();
L_d65ca2: /* d65ca2: lea ecx, [ebp - 0x124] */
  ecx = (uint32_t)(ebp + 0xfffffedcu);
/* d65ca8: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65cae(void) {
  LOAD_REGS();
L_d65cae: /* d65cae: lea ecx, [ebp - 0x1cc] */
  ecx = (uint32_t)(ebp + 0xfffffe34u);
/* d65cb4: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65cba(void) {
  LOAD_REGS();
L_d65cba: /* d65cba: lea ecx, [ebp - 0xec] */
  ecx = (uint32_t)(ebp + 0xffffff14u);
/* d65cc0: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65cc6(void) {
  LOAD_REGS();
L_d65cc6: /* d65cc6: lea ecx, [ebp - 0x1b0] */
  ecx = (uint32_t)(ebp + 0xfffffe50u);
/* d65ccc: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65cd2(void) {
  LOAD_REGS();
L_d65cd2: /* d65cd2: lea ecx, [ebp - 0x178] */
  ecx = (uint32_t)(ebp + 0xfffffe88u);
/* d65cd8: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65cde(void) {
  LOAD_REGS();
L_d65cde: /* d65cde: lea ecx, [ebp - 0x140] */
  ecx = (uint32_t)(ebp + 0xfffffec0u);
/* d65ce4: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65cea(void) {
  LOAD_REGS();
L_d65cea: /* d65cea: lea ecx, [ebp - 0x108] */
  ecx = (uint32_t)(ebp + 0xfffffef8u);
/* d65cf0: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65cf6(void) {
  LOAD_REGS();
L_d65cf6: /* d65cf6: lea ecx, [ebp - 0xd0] */
  ecx = (uint32_t)(ebp + 0xffffff30u);
/* d65cfc: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65d02(void) {
  LOAD_REGS();
L_d65d02: /* d65d02: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* d65d08: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65d0e(void) {
  LOAD_REGS();
L_d65d0e: /* d65d0e: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* d65d11: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65d17(void) {
  LOAD_REGS();
L_d65d17: /* d65d17: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* d65d1a: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65d20(void) {
  LOAD_REGS();
L_d65d20: /* d65d20: mov eax, dword ptr [ebp - 0x1d4] */
  eax = R32((uint32_t)(ebp + 0xfffffe2cu));
/* d65d26: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* d65d29: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* d65d2b: je 0xd65d3a */
  if (zf) goto L_d65d3a;
L_d65d31: /* d65d31: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* d65d34: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
L_d65d3a: /* d65d3a: ret  */
  esp += 4; SPILL(); return;
}

void f_d65d3b(void) {
  LOAD_REGS();
  goto L_d65d3b;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65d3b: /* d65d3b: mov eax, 0xd6de4c */
  eax = 0xd6de4cu;
/* d65d40: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65d80(void) {
  LOAD_REGS();
L_d65d80: /* d65d80: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* d65d83: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65d89(void) {
  LOAD_REGS();
L_d65d89: /* d65d89: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* d65d8c: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65d92(void) {
  LOAD_REGS();
  goto L_d65d92;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65d92: /* d65d92: mov eax, 0xd6de8c */
  eax = 0xd6de8cu;
/* d65d97: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65db0(void) {
  LOAD_REGS();
L_d65db0: /* d65db0: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* d65db3: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65db9(void) {
  LOAD_REGS();
  goto L_d65db9;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65db9: /* d65db9: mov eax, 0xd6deb4 */
  eax = 0xd6deb4u;
/* d65dbe: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65dd0(void) {
  LOAD_REGS();
L_d65dd0: /* d65dd0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d65dd3: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65dd9(void) {
  LOAD_REGS();
  goto L_d65dd9;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65dd9: /* d65dd9: mov eax, 0xd6dedc */
  eax = 0xd6dedcu;
/* d65dde: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65df0(void) {
  LOAD_REGS();
L_d65df0: /* d65df0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* d65df3: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65df9(void) {
  LOAD_REGS();
  goto L_d65df9;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65df9: /* d65df9: mov eax, 0xd6df04 */
  eax = 0xd6df04u;
/* d65dfe: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d65e10(void) {
  LOAD_REGS();
L_d65e10: /* d65e10: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* d65e13: jmp dword ptr [0xd7a5ac] */
  SPILL(); f_461c6b(); return; /* MSVCP70!??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QAE@XZ */
}

void f_d65e19(void) {
  LOAD_REGS();
L_d65e19: /* d65e19: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* d65e1c: jmp dword ptr [0xd7a620] */
  SPILL(); f_41aa26(); return; /* MSVCR70!??1exception@@UAE@XZ */
}

void f_d65e22(void) {
  LOAD_REGS();
  goto L_d65e22;
L_d63d10: /* d63d10: jmp dword ptr [0xd7a62c] */
  SPILL(); f_41ba8f(); return; /* MSVCR70!__CxxFrameHandler */
L_d65e22: /* d65e22: mov eax, 0xd6df34 */
  eax = 0xd6df34u;
/* d65e27: jmp 0xd63d10 */
  goto L_d63d10;
}

void f_d66f40(void) {
  LOAD_REGS();
L_d66f40: /* d66f40: push 0xd77930 */
  { uint32_t v = 0xd77930u; esp -= 4; W32(esp, v); }
/* d66f45: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d66f47: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd66f4du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d66f4d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d66f50: mov byte ptr [0xd7816e], al */
  W8((uint32_t)(0xd7816eu), (eax & 0xffu));
/* d66f55: ret  */
  esp += 4; SPILL(); return;
}

void f_d66f70(void) {
  LOAD_REGS();
L_d66f70: /* d66f70: push 0xd77934 */
  { uint32_t v = 0xd77934u; esp -= 4; W32(esp, v); }
/* d66f75: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d66f77: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd66f7du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d66f7d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d66f80: mov byte ptr [0xd78159], al */
  W8((uint32_t)(0xd78159u), (eax & 0xffu));
/* d66f85: ret  */
  esp += 4; SPILL(); return;
}

void f_d66fa0(void) {
  LOAD_REGS();
L_d66fa0: /* d66fa0: push 0xd77938 */
  { uint32_t v = 0xd77938u; esp -= 4; W32(esp, v); }
/* d66fa5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d66fa7: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd66fadu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d66fad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d66fb0: mov byte ptr [0xd7816d], al */
  W8((uint32_t)(0xd7816du), (eax & 0xffu));
/* d66fb5: ret  */
  esp += 4; SPILL(); return;
}

void f_d66fd0(void) {
  LOAD_REGS();
L_d66fd0: /* d66fd0: push 0xd7793c */
  { uint32_t v = 0xd7793cu; esp -= 4; W32(esp, v); }
/* d66fd5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d66fd7: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd66fddu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d66fdd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d66fe0: mov byte ptr [0xd781cb], al */
  W8((uint32_t)(0xd781cbu), (eax & 0xffu));
/* d66fe5: ret  */
  esp += 4; SPILL(); return;
}

void f_d67000(void) {
  LOAD_REGS();
L_d67000: /* d67000: push 0xd77940 */
  { uint32_t v = 0xd77940u; esp -= 4; W32(esp, v); }
/* d67005: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67007: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6700du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6700d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67010: mov byte ptr [0xd78192], al */
  W8((uint32_t)(0xd78192u), (eax & 0xffu));
/* d67015: ret  */
  esp += 4; SPILL(); return;
}

void f_d67030(void) {
  LOAD_REGS();
L_d67030: /* d67030: push 0xd77944 */
  { uint32_t v = 0xd77944u; esp -= 4; W32(esp, v); }
/* d67035: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67037: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6703du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6703d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67040: mov byte ptr [0xd78c86], al */
  W8((uint32_t)(0xd78c86u), (eax & 0xffu));
/* d67045: ret  */
  esp += 4; SPILL(); return;
}

void f_d67060(void) {
  LOAD_REGS();
L_d67060: /* d67060: push 0xd77948 */
  { uint32_t v = 0xd77948u; esp -= 4; W32(esp, v); }
/* d67065: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67067: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6706du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6706d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67070: mov byte ptr [0xd781d5], al */
  W8((uint32_t)(0xd781d5u), (eax & 0xffu));
/* d67075: ret  */
  esp += 4; SPILL(); return;
}

void f_d67090(void) {
  LOAD_REGS();
L_d67090: /* d67090: push 0xd7794c */
  { uint32_t v = 0xd7794cu; esp -= 4; W32(esp, v); }
/* d67095: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67097: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6709du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6709d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d670a0: mov byte ptr [0xd781b4], al */
  W8((uint32_t)(0xd781b4u), (eax & 0xffu));
/* d670a5: ret  */
  esp += 4; SPILL(); return;
}

void f_d670c0(void) {
  LOAD_REGS();
L_d670c0: /* d670c0: push 0xd77950 */
  { uint32_t v = 0xd77950u; esp -= 4; W32(esp, v); }
/* d670c5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d670c7: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd670cdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d670cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d670d0: mov byte ptr [0xd78c6a], al */
  W8((uint32_t)(0xd78c6au), (eax & 0xffu));
/* d670d5: ret  */
  esp += 4; SPILL(); return;
}

void f_d670f0(void) {
  LOAD_REGS();
L_d670f0: /* d670f0: push 0xd77954 */
  { uint32_t v = 0xd77954u; esp -= 4; W32(esp, v); }
/* d670f5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d670f7: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd670fdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d670fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67100: mov byte ptr [0xd7817b], al */
  W8((uint32_t)(0xd7817bu), (eax & 0xffu));
/* d67105: ret  */
  esp += 4; SPILL(); return;
}

void f_d67120(void) {
  LOAD_REGS();
L_d67120: /* d67120: push 0xd77958 */
  { uint32_t v = 0xd77958u; esp -= 4; W32(esp, v); }
/* d67125: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67127: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6712du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6712d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67130: mov byte ptr [0xd78157], al */
  W8((uint32_t)(0xd78157u), (eax & 0xffu));
/* d67135: ret  */
  esp += 4; SPILL(); return;
}

void f_d67150(void) {
  LOAD_REGS();
L_d67150: /* d67150: push 0xd7795c */
  { uint32_t v = 0xd7795cu; esp -= 4; W32(esp, v); }
/* d67155: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67157: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6715du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6715d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67160: mov byte ptr [0xd7870a], al */
  W8((uint32_t)(0xd7870au), (eax & 0xffu));
/* d67165: ret  */
  esp += 4; SPILL(); return;
}

void f_d67180(void) {
  LOAD_REGS();
L_d67180: /* d67180: push 0xd77960 */
  { uint32_t v = 0xd77960u; esp -= 4; W32(esp, v); }
/* d67185: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67187: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6718du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6718d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67190: mov byte ptr [0xd78170], al */
  W8((uint32_t)(0xd78170u), (eax & 0xffu));
/* d67195: ret  */
  esp += 4; SPILL(); return;
}

void f_d671b0(void) {
  LOAD_REGS();
L_d671b0: /* d671b0: push 0xd77964 */
  { uint32_t v = 0xd77964u; esp -= 4; W32(esp, v); }
/* d671b5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d671b7: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd671bdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d671bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d671c0: mov byte ptr [0xd7814f], al */
  W8((uint32_t)(0xd7814fu), (eax & 0xffu));
/* d671c5: ret  */
  esp += 4; SPILL(); return;
}

void f_d671e0(void) {
  LOAD_REGS();
L_d671e0: /* d671e0: push 0xd77968 */
  { uint32_t v = 0xd77968u; esp -= 4; W32(esp, v); }
/* d671e5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d671e7: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd671edu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d671ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d671f0: mov byte ptr [0xd781d1], al */
  W8((uint32_t)(0xd781d1u), (eax & 0xffu));
/* d671f5: ret  */
  esp += 4; SPILL(); return;
}

void f_d67210(void) {
  LOAD_REGS();
L_d67210: /* d67210: push 0xd7796c */
  { uint32_t v = 0xd7796cu; esp -= 4; W32(esp, v); }
/* d67215: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67217: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6721du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6721d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67220: mov byte ptr [0xd781a1], al */
  W8((uint32_t)(0xd781a1u), (eax & 0xffu));
/* d67225: ret  */
  esp += 4; SPILL(); return;
}

void f_d67240(void) {
  LOAD_REGS();
L_d67240: /* d67240: push 0xd77970 */
  { uint32_t v = 0xd77970u; esp -= 4; W32(esp, v); }
/* d67245: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67247: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6724du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6724d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67250: mov byte ptr [0xd78c5f], al */
  W8((uint32_t)(0xd78c5fu), (eax & 0xffu));
/* d67255: ret  */
  esp += 4; SPILL(); return;
}

void f_d67270(void) {
  LOAD_REGS();
L_d67270: /* d67270: push 0xd77974 */
  { uint32_t v = 0xd77974u; esp -= 4; W32(esp, v); }
/* d67275: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67277: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6727du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6727d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67280: mov byte ptr [0xd781ce], al */
  W8((uint32_t)(0xd781ceu), (eax & 0xffu));
/* d67285: ret  */
  esp += 4; SPILL(); return;
}

void f_d672a0(void) {
  LOAD_REGS();
L_d672a0: /* d672a0: push 0xd77978 */
  { uint32_t v = 0xd77978u; esp -= 4; W32(esp, v); }
/* d672a5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d672a7: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd672adu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d672ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d672b0: mov byte ptr [0xd78179], al */
  W8((uint32_t)(0xd78179u), (eax & 0xffu));
/* d672b5: ret  */
  esp += 4; SPILL(); return;
}

void f_d672d0(void) {
  LOAD_REGS();
L_d672d0: /* d672d0: push 0xd7797c */
  { uint32_t v = 0xd7797cu; esp -= 4; W32(esp, v); }
/* d672d5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d672d7: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd672ddu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d672dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d672e0: mov byte ptr [0xd78c74], al */
  W8((uint32_t)(0xd78c74u), (eax & 0xffu));
/* d672e5: ret  */
  esp += 4; SPILL(); return;
}

void f_d67300(void) {
  LOAD_REGS();
L_d67300: /* d67300: push 0xd77980 */
  { uint32_t v = 0xd77980u; esp -= 4; W32(esp, v); }
/* d67305: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67307: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6730du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6730d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67310: mov byte ptr [0xd78705], al */
  W8((uint32_t)(0xd78705u), (eax & 0xffu));
/* d67315: ret  */
  esp += 4; SPILL(); return;
}

void f_d67330(void) {
  LOAD_REGS();
L_d67330: /* d67330: push 0xd77984 */
  { uint32_t v = 0xd77984u; esp -= 4; W32(esp, v); }
/* d67335: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67337: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6733du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6733d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67340: mov byte ptr [0xd7818c], al */
  W8((uint32_t)(0xd7818cu), (eax & 0xffu));
/* d67345: ret  */
  esp += 4; SPILL(); return;
}

void f_d67360(void) {
  LOAD_REGS();
L_d67360: /* d67360: push 0xd77988 */
  { uint32_t v = 0xd77988u; esp -= 4; W32(esp, v); }
/* d67365: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67367: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6736du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6736d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67370: mov byte ptr [0xd78c6d], al */
  W8((uint32_t)(0xd78c6du), (eax & 0xffu));
/* d67375: ret  */
  esp += 4; SPILL(); return;
}

void f_d67390(void) {
  LOAD_REGS();
L_d67390: /* d67390: push 0xd7798c */
  { uint32_t v = 0xd7798cu; esp -= 4; W32(esp, v); }
/* d67395: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67397: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6739du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6739d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d673a0: mov byte ptr [0xd78c60], al */
  W8((uint32_t)(0xd78c60u), (eax & 0xffu));
/* d673a5: ret  */
  esp += 4; SPILL(); return;
}

void f_d673c0(void) {
  LOAD_REGS();
L_d673c0: /* d673c0: push 0xd77990 */
  { uint32_t v = 0xd77990u; esp -= 4; W32(esp, v); }
/* d673c5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d673c7: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd673cdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d673cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d673d0: mov byte ptr [0xd781a7], al */
  W8((uint32_t)(0xd781a7u), (eax & 0xffu));
/* d673d5: ret  */
  esp += 4; SPILL(); return;
}

void f_d673f0(void) {
  LOAD_REGS();
L_d673f0: /* d673f0: push 0xd77994 */
  { uint32_t v = 0xd77994u; esp -= 4; W32(esp, v); }
/* d673f5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d673f7: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd673fdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d673fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67400: mov byte ptr [0xd78c47], al */
  W8((uint32_t)(0xd78c47u), (eax & 0xffu));
/* d67405: ret  */
  esp += 4; SPILL(); return;
}

void f_d67420(void) {
  LOAD_REGS();
L_d67420: /* d67420: push 0xd77998 */
  { uint32_t v = 0xd77998u; esp -= 4; W32(esp, v); }
/* d67425: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67427: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6742du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6742d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67430: mov byte ptr [0xd78163], al */
  W8((uint32_t)(0xd78163u), (eax & 0xffu));
/* d67435: ret  */
  esp += 4; SPILL(); return;
}

void f_d67450(void) {
  LOAD_REGS();
L_d67450: /* d67450: push 0xd7799c */
  { uint32_t v = 0xd7799cu; esp -= 4; W32(esp, v); }
/* d67455: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67457: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6745du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6745d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67460: mov byte ptr [0xd78c6b], al */
  W8((uint32_t)(0xd78c6bu), (eax & 0xffu));
/* d67465: ret  */
  esp += 4; SPILL(); return;
}

void f_d67480(void) {
  LOAD_REGS();
L_d67480: /* d67480: push 0xd779a0 */
  { uint32_t v = 0xd779a0u; esp -= 4; W32(esp, v); }
/* d67485: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67487: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6748du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6748d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67490: mov byte ptr [0xd78c57], al */
  W8((uint32_t)(0xd78c57u), (eax & 0xffu));
/* d67495: ret  */
  esp += 4; SPILL(); return;
}

void f_d674b0(void) {
  LOAD_REGS();
L_d674b0: /* d674b0: push 0xd779a4 */
  { uint32_t v = 0xd779a4u; esp -= 4; W32(esp, v); }
/* d674b5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d674b7: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd674bdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d674bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d674c0: mov byte ptr [0xd78c6c], al */
  W8((uint32_t)(0xd78c6cu), (eax & 0xffu));
/* d674c5: ret  */
  esp += 4; SPILL(); return;
}

void f_d674e0(void) {
  LOAD_REGS();
L_d674e0: /* d674e0: push 0xd779a8 */
  { uint32_t v = 0xd779a8u; esp -= 4; W32(esp, v); }
/* d674e5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d674e7: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd674edu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d674ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d674f0: mov byte ptr [0xd7870f], al */
  W8((uint32_t)(0xd7870fu), (eax & 0xffu));
/* d674f5: ret  */
  esp += 4; SPILL(); return;
}

void f_d67510(void) {
  LOAD_REGS();
L_d67510: /* d67510: push 0xd779ac */
  { uint32_t v = 0xd779acu; esp -= 4; W32(esp, v); }
/* d67515: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67517: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6751du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6751d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67520: mov byte ptr [0xd781aa], al */
  W8((uint32_t)(0xd781aau), (eax & 0xffu));
/* d67525: ret  */
  esp += 4; SPILL(); return;
}

void f_d67540(void) {
  LOAD_REGS();
L_d67540: /* d67540: push 0xd779b0 */
  { uint32_t v = 0xd779b0u; esp -= 4; W32(esp, v); }
/* d67545: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67547: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6754du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6754d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67550: mov byte ptr [0xd781cf], al */
  W8((uint32_t)(0xd781cfu), (eax & 0xffu));
/* d67555: ret  */
  esp += 4; SPILL(); return;
}

void f_d67570(void) {
  LOAD_REGS();
L_d67570: /* d67570: push 0xd779b4 */
  { uint32_t v = 0xd779b4u; esp -= 4; W32(esp, v); }
/* d67575: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67577: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6757du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6757d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67580: mov byte ptr [0xd781be], al */
  W8((uint32_t)(0xd781beu), (eax & 0xffu));
/* d67585: ret  */
  esp += 4; SPILL(); return;
}

void f_d675a0(void) {
  LOAD_REGS();
L_d675a0: /* d675a0: push 0xd779b8 */
  { uint32_t v = 0xd779b8u; esp -= 4; W32(esp, v); }
/* d675a5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d675a7: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd675adu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d675ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d675b0: mov byte ptr [0xd7815c], al */
  W8((uint32_t)(0xd7815cu), (eax & 0xffu));
/* d675b5: ret  */
  esp += 4; SPILL(); return;
}

void f_d675d0(void) {
  LOAD_REGS();
L_d675d0: /* d675d0: push 0xd779bc */
  { uint32_t v = 0xd779bcu; esp -= 4; W32(esp, v); }
/* d675d5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d675d7: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd675ddu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d675dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d675e0: mov byte ptr [0xd781a8], al */
  W8((uint32_t)(0xd781a8u), (eax & 0xffu));
/* d675e5: ret  */
  esp += 4; SPILL(); return;
}

void f_d67600(void) {
  LOAD_REGS();
L_d67600: /* d67600: push 0xd779c0 */
  { uint32_t v = 0xd779c0u; esp -= 4; W32(esp, v); }
/* d67605: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67607: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6760du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6760d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67610: mov byte ptr [0xd7818f], al */
  W8((uint32_t)(0xd7818fu), (eax & 0xffu));
/* d67615: ret  */
  esp += 4; SPILL(); return;
}

void f_d67630(void) {
  LOAD_REGS();
L_d67630: /* d67630: push 0xd779c4 */
  { uint32_t v = 0xd779c4u; esp -= 4; W32(esp, v); }
/* d67635: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67637: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6763du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6763d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67640: mov byte ptr [0xd78c8c], al */
  W8((uint32_t)(0xd78c8cu), (eax & 0xffu));
/* d67645: ret  */
  esp += 4; SPILL(); return;
}

void f_d67660(void) {
  LOAD_REGS();
L_d67660: /* d67660: push 0xd779c8 */
  { uint32_t v = 0xd779c8u; esp -= 4; W32(esp, v); }
/* d67665: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67667: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6766du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6766d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67670: mov byte ptr [0xd78c48], al */
  W8((uint32_t)(0xd78c48u), (eax & 0xffu));
/* d67675: ret  */
  esp += 4; SPILL(); return;
}

void f_d67690(void) {
  LOAD_REGS();
L_d67690: /* d67690: push 0xd779cc */
  { uint32_t v = 0xd779ccu; esp -= 4; W32(esp, v); }
/* d67695: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67697: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6769du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6769d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d676a0: mov byte ptr [0xd78198], al */
  W8((uint32_t)(0xd78198u), (eax & 0xffu));
/* d676a5: ret  */
  esp += 4; SPILL(); return;
}

void f_d676c0(void) {
  LOAD_REGS();
L_d676c0: /* d676c0: push 0xd779d0 */
  { uint32_t v = 0xd779d0u; esp -= 4; W32(esp, v); }
/* d676c5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d676c7: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd676cdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d676cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d676d0: mov byte ptr [0xd78158], al */
  W8((uint32_t)(0xd78158u), (eax & 0xffu));
/* d676d5: ret  */
  esp += 4; SPILL(); return;
}

void f_d676f0(void) {
  LOAD_REGS();
L_d676f0: /* d676f0: push 0xd779d4 */
  { uint32_t v = 0xd779d4u; esp -= 4; W32(esp, v); }
/* d676f5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d676f7: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd676fdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d676fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67700: mov byte ptr [0xd781b1], al */
  W8((uint32_t)(0xd781b1u), (eax & 0xffu));
/* d67705: ret  */
  esp += 4; SPILL(); return;
}

void f_d67720(void) {
  LOAD_REGS();
L_d67720: /* d67720: push 0xd779d8 */
  { uint32_t v = 0xd779d8u; esp -= 4; W32(esp, v); }
/* d67725: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67727: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6772du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6772d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67730: mov byte ptr [0xd781c6], al */
  W8((uint32_t)(0xd781c6u), (eax & 0xffu));
/* d67735: ret  */
  esp += 4; SPILL(); return;
}

void f_d67750(void) {
  LOAD_REGS();
L_d67750: /* d67750: push 0xd779dc */
  { uint32_t v = 0xd779dcu; esp -= 4; W32(esp, v); }
/* d67755: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67757: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6775du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6775d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67760: mov byte ptr [0xd7818a], al */
  W8((uint32_t)(0xd7818au), (eax & 0xffu));
/* d67765: ret  */
  esp += 4; SPILL(); return;
}

void f_d67780(void) {
  LOAD_REGS();
L_d67780: /* d67780: push 0xd779e0 */
  { uint32_t v = 0xd779e0u; esp -= 4; W32(esp, v); }
/* d67785: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67787: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6778du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6778d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67790: mov byte ptr [0xd78c5e], al */
  W8((uint32_t)(0xd78c5eu), (eax & 0xffu));
/* d67795: ret  */
  esp += 4; SPILL(); return;
}

void f_d677b0(void) {
  LOAD_REGS();
L_d677b0: /* d677b0: push 0xd779e4 */
  { uint32_t v = 0xd779e4u; esp -= 4; W32(esp, v); }
/* d677b5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d677b7: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd677bdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d677bd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d677c0: mov byte ptr [0xd78160], al */
  W8((uint32_t)(0xd78160u), (eax & 0xffu));
/* d677c5: ret  */
  esp += 4; SPILL(); return;
}

void f_d677e0(void) {
  LOAD_REGS();
L_d677e0: /* d677e0: push 0xd779e8 */
  { uint32_t v = 0xd779e8u; esp -= 4; W32(esp, v); }
/* d677e5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d677e7: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd677edu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d677ed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d677f0: mov byte ptr [0xd781d2], al */
  W8((uint32_t)(0xd781d2u), (eax & 0xffu));
/* d677f5: ret  */
  esp += 4; SPILL(); return;
}

void f_d67810(void) {
  LOAD_REGS();
L_d67810: /* d67810: push 0xd779ec */
  { uint32_t v = 0xd779ecu; esp -= 4; W32(esp, v); }
/* d67815: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67817: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6781du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6781d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67820: mov byte ptr [0xd781cd], al */
  W8((uint32_t)(0xd781cdu), (eax & 0xffu));
/* d67825: ret  */
  esp += 4; SPILL(); return;
}

void f_d67840(void) {
  LOAD_REGS();
L_d67840: /* d67840: push 0xd779f0 */
  { uint32_t v = 0xd779f0u; esp -= 4; W32(esp, v); }
/* d67845: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67847: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6784du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6784d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67850: mov byte ptr [0xd78c64], al */
  W8((uint32_t)(0xd78c64u), (eax & 0xffu));
/* d67855: ret  */
  esp += 4; SPILL(); return;
}

void f_d67870(void) {
  LOAD_REGS();
L_d67870: /* d67870: push 0xd779f4 */
  { uint32_t v = 0xd779f4u; esp -= 4; W32(esp, v); }
/* d67875: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67877: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6787du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6787d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67880: mov byte ptr [0xd78707], al */
  W8((uint32_t)(0xd78707u), (eax & 0xffu));
/* d67885: ret  */
  esp += 4; SPILL(); return;
}

void f_d678a0(void) {
  LOAD_REGS();
L_d678a0: /* d678a0: push 0xd779f8 */
  { uint32_t v = 0xd779f8u; esp -= 4; W32(esp, v); }
/* d678a5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d678a7: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd678adu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d678ad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d678b0: mov byte ptr [0xd781c7], al */
  W8((uint32_t)(0xd781c7u), (eax & 0xffu));
/* d678b5: ret  */
  esp += 4; SPILL(); return;
}

void f_d678d0(void) {
  LOAD_REGS();
L_d678d0: /* d678d0: push 0xd779fc */
  { uint32_t v = 0xd779fcu; esp -= 4; W32(esp, v); }
/* d678d5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d678d7: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd678ddu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d678dd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d678e0: mov byte ptr [0xd78c6e], al */
  W8((uint32_t)(0xd78c6eu), (eax & 0xffu));
/* d678e5: ret  */
  esp += 4; SPILL(); return;
}

void f_d67900(void) {
  LOAD_REGS();
L_d67900: /* d67900: push 0xd77a00 */
  { uint32_t v = 0xd77a00u; esp -= 4; W32(esp, v); }
/* d67905: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67907: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6790du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6790d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67910: mov byte ptr [0xd7814c], al */
  W8((uint32_t)(0xd7814cu), (eax & 0xffu));
/* d67915: ret  */
  esp += 4; SPILL(); return;
}

void f_d67930(void) {
  LOAD_REGS();
L_d67930: /* d67930: push 0xd77a04 */
  { uint32_t v = 0xd77a04u; esp -= 4; W32(esp, v); }
/* d67935: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67937: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6793du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6793d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67940: mov byte ptr [0xd781c9], al */
  W8((uint32_t)(0xd781c9u), (eax & 0xffu));
/* d67945: ret  */
  esp += 4; SPILL(); return;
}

void f_d67960(void) {
  LOAD_REGS();
L_d67960: /* d67960: push 0xd77a08 */
  { uint32_t v = 0xd77a08u; esp -= 4; W32(esp, v); }
/* d67965: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67967: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6796du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6796d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67970: mov byte ptr [0xd78188], al */
  W8((uint32_t)(0xd78188u), (eax & 0xffu));
/* d67975: ret  */
  esp += 4; SPILL(); return;
}

void f_d67990(void) {
  LOAD_REGS();
L_d67990: /* d67990: push 0xd77a0c */
  { uint32_t v = 0xd77a0cu; esp -= 4; W32(esp, v); }
/* d67995: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67997: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd6799du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d6799d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d679a0: mov byte ptr [0xd7815d], al */
  W8((uint32_t)(0xd7815du), (eax & 0xffu));
/* d679a5: ret  */
  esp += 4; SPILL(); return;
}

void f_d679c0(void) {
  LOAD_REGS();
L_d679c0: /* d679c0: push 0xd77a10 */
  { uint32_t v = 0xd77a10u; esp -= 4; W32(esp, v); }
/* d679c5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d679c7: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd679cdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d679cd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d679d0: mov byte ptr [0xd78191], al */
  W8((uint32_t)(0xd78191u), (eax & 0xffu));
/* d679d5: ret  */
  esp += 4; SPILL(); return;
}

void f_d679f0(void) {
  LOAD_REGS();
L_d679f0: /* d679f0: push 0xd77a14 */
  { uint32_t v = 0xd77a14u; esp -= 4; W32(esp, v); }
/* d679f5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d679f7: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd679fdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d679fd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67a00: mov byte ptr [0xd781a5], al */
  W8((uint32_t)(0xd781a5u), (eax & 0xffu));
/* d67a05: ret  */
  esp += 4; SPILL(); return;
}

void f_d67a20(void) {
  LOAD_REGS();
L_d67a20: /* d67a20: push 0xd77a18 */
  { uint32_t v = 0xd77a18u; esp -= 4; W32(esp, v); }
/* d67a25: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67a27: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd67a2du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d67a2d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67a30: mov byte ptr [0xd78169], al */
  W8((uint32_t)(0xd78169u), (eax & 0xffu));
/* d67a35: ret  */
  esp += 4; SPILL(); return;
}

void f_d67a50(void) {
  LOAD_REGS();
L_d67a50: /* d67a50: push 0xd77a1c */
  { uint32_t v = 0xd77a1cu; esp -= 4; W32(esp, v); }
/* d67a55: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67a57: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd67a5du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d67a5d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67a60: mov byte ptr [0xd78c80], al */
  W8((uint32_t)(0xd78c80u), (eax & 0xffu));
/* d67a65: ret  */
  esp += 4; SPILL(); return;
}

void f_d67a80(void) {
  LOAD_REGS();
L_d67a80: /* d67a80: push 0xd77a20 */
  { uint32_t v = 0xd77a20u; esp -= 4; W32(esp, v); }
/* d67a85: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67a87: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd67a8du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d67a8d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67a90: mov byte ptr [0xd78c58], al */
  W8((uint32_t)(0xd78c58u), (eax & 0xffu));
/* d67a95: ret  */
  esp += 4; SPILL(); return;
}

void f_d67ab0(void) {
  LOAD_REGS();
L_d67ab0: /* d67ab0: push 0xd77a24 */
  { uint32_t v = 0xd77a24u; esp -= 4; W32(esp, v); }
/* d67ab5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67ab7: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd67abdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d67abd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67ac0: mov byte ptr [0xd78176], al */
  W8((uint32_t)(0xd78176u), (eax & 0xffu));
/* d67ac5: ret  */
  esp += 4; SPILL(); return;
}

void f_d67ae0(void) {
  LOAD_REGS();
L_d67ae0: /* d67ae0: push 0xd77a28 */
  { uint32_t v = 0xd77a28u; esp -= 4; W32(esp, v); }
/* d67ae5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67ae7: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd67aedu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d67aed: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67af0: mov byte ptr [0xd78194], al */
  W8((uint32_t)(0xd78194u), (eax & 0xffu));
/* d67af5: ret  */
  esp += 4; SPILL(); return;
}

void f_d67b10(void) {
  LOAD_REGS();
L_d67b10: /* d67b10: push 0xd77a2c */
  { uint32_t v = 0xd77a2cu; esp -= 4; W32(esp, v); }
/* d67b15: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67b17: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd67b1du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d67b1d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67b20: mov byte ptr [0xd7816b], al */
  W8((uint32_t)(0xd7816bu), (eax & 0xffu));
/* d67b25: ret  */
  esp += 4; SPILL(); return;
}

void f_d67b40(void) {
  LOAD_REGS();
L_d67b40: /* d67b40: push 0xd77a30 */
  { uint32_t v = 0xd77a30u; esp -= 4; W32(esp, v); }
/* d67b45: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67b47: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd67b4du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d67b4d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67b50: mov byte ptr [0xd78711], al */
  W8((uint32_t)(0xd78711u), (eax & 0xffu));
/* d67b55: ret  */
  esp += 4; SPILL(); return;
}

void f_d67b70(void) {
  LOAD_REGS();
L_d67b70: /* d67b70: push 0xd77a34 */
  { uint32_t v = 0xd77a34u; esp -= 4; W32(esp, v); }
/* d67b75: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67b77: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd67b7du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d67b7d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67b80: mov byte ptr [0xd781ab], al */
  W8((uint32_t)(0xd781abu), (eax & 0xffu));
/* d67b85: ret  */
  esp += 4; SPILL(); return;
}

void f_d67ba0(void) {
  LOAD_REGS();
L_d67ba0: /* d67ba0: push 0xd77a38 */
  { uint32_t v = 0xd77a38u; esp -= 4; W32(esp, v); }
/* d67ba5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67ba7: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd67badu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d67bad: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67bb0: mov byte ptr [0xd78c67], al */
  W8((uint32_t)(0xd78c67u), (eax & 0xffu));
/* d67bb5: ret  */
  esp += 4; SPILL(); return;
}

void f_d67bd0(void) {
  LOAD_REGS();
L_d67bd0: /* d67bd0: push 0xd77a3c */
  { uint32_t v = 0xd77a3cu; esp -= 4; W32(esp, v); }
/* d67bd5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67bd7: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd67bddu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d67bdd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67be0: mov byte ptr [0xd781b3], al */
  W8((uint32_t)(0xd781b3u), (eax & 0xffu));
/* d67be5: ret  */
  esp += 4; SPILL(); return;
}

void f_d67c00(void) {
  LOAD_REGS();
L_d67c00: /* d67c00: push 0xd77a40 */
  { uint32_t v = 0xd77a40u; esp -= 4; W32(esp, v); }
/* d67c05: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67c07: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd67c0du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d67c0d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67c10: mov byte ptr [0xd78150], al */
  W8((uint32_t)(0xd78150u), (eax & 0xffu));
/* d67c15: ret  */
  esp += 4; SPILL(); return;
}

void f_d67c30(void) {
  LOAD_REGS();
L_d67c30: /* d67c30: push 0xd77a44 */
  { uint32_t v = 0xd77a44u; esp -= 4; W32(esp, v); }
/* d67c35: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67c37: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd67c3du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d67c3d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67c40: mov byte ptr [0xd78c7e], al */
  W8((uint32_t)(0xd78c7eu), (eax & 0xffu));
/* d67c45: ret  */
  esp += 4; SPILL(); return;
}

void f_d67c60(void) {
  LOAD_REGS();
L_d67c60: /* d67c60: push 0xd77a48 */
  { uint32_t v = 0xd77a48u; esp -= 4; W32(esp, v); }
/* d67c65: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67c67: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd67c6du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d67c6d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67c70: mov byte ptr [0xd78c65], al */
  W8((uint32_t)(0xd78c65u), (eax & 0xffu));
/* d67c75: ret  */
  esp += 4; SPILL(); return;
}

void f_d67c90(void) {
  LOAD_REGS();
L_d67c90: /* d67c90: push 0xd77a4c */
  { uint32_t v = 0xd77a4cu; esp -= 4; W32(esp, v); }
/* d67c95: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67c97: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd67c9du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d67c9d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67ca0: mov byte ptr [0xd78c4b], al */
  W8((uint32_t)(0xd78c4bu), (eax & 0xffu));
/* d67ca5: ret  */
  esp += 4; SPILL(); return;
}

void f_d67cc0(void) {
  LOAD_REGS();
L_d67cc0: /* d67cc0: push 0xd77a50 */
  { uint32_t v = 0xd77a50u; esp -= 4; W32(esp, v); }
/* d67cc5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67cc7: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd67ccdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d67ccd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67cd0: mov byte ptr [0xd78c7b], al */
  W8((uint32_t)(0xd78c7bu), (eax & 0xffu));
/* d67cd5: ret  */
  esp += 4; SPILL(); return;
}

void f_d67cf0(void) {
  LOAD_REGS();
L_d67cf0: /* d67cf0: push 0xd77a54 */
  { uint32_t v = 0xd77a54u; esp -= 4; W32(esp, v); }
/* d67cf5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67cf7: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd67cfdu); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d67cfd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67d00: mov byte ptr [0xd7818b], al */
  W8((uint32_t)(0xd7818bu), (eax & 0xffu));
/* d67d05: ret  */
  esp += 4; SPILL(); return;
}

void f_d67d20(void) {
  LOAD_REGS();
L_d67d20: /* d67d20: push 0xd77a58 */
  { uint32_t v = 0xd77a58u; esp -= 4; W32(esp, v); }
/* d67d25: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67d27: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd67d2du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d67d2d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67d30: mov byte ptr [0xd781ae], al */
  W8((uint32_t)(0xd781aeu), (eax & 0xffu));
/* d67d35: ret  */
  esp += 4; SPILL(); return;
}

void f_d67d50(void) {
  LOAD_REGS();
L_d67d50: /* d67d50: push 0xd77a5c */
  { uint32_t v = 0xd77a5cu; esp -= 4; W32(esp, v); }
/* d67d55: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67d57: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd67d5du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d67d5d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67d60: mov byte ptr [0xd78c73], al */
  W8((uint32_t)(0xd78c73u), (eax & 0xffu));
/* d67d65: ret  */
  esp += 4; SPILL(); return;
}

void f_d67d80(void) {
  LOAD_REGS();
L_d67d80: /* d67d80: push 0xd77a60 */
  { uint32_t v = 0xd77a60u; esp -= 4; W32(esp, v); }
/* d67d85: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* d67d87: call dword ptr [0xd7a44c] */
  esp -= 4; W32(esp, 0xd67d8du); SPILL(); f_4e298c(); if (g_unwind) return; /* Core!?GRegisterNative@@YAEHABQ8UObject@@AEXAAUFFrame@@QAX@Z@Z */ RELOAD();
/* d67d8d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* d67d90: mov byte ptr [0xd7817c], al */
  W8((uint32_t)(0xd7817cu), (eax & 0xffu));
/* d67d95: ret  */
  esp += 4; SPILL(); return;
}
