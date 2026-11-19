#include "recomp.h"
#include "rec_mod.h"

void f_8db44b(void) {
  LOAD_REGS();
  goto L_8db44b;
L_8db2e1: /* 8db2e1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db2e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db2eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db2ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db2ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db2ee: mov esp, ebp */
  esp = ebp;
/* 8db2f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db2f1: ret 0x14 */
  esp += 24; SPILL(); return;
L_8db44b: /* 8db44b: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db44e: mov eax, edi */
  eax = edi;
/* 8db450: jl 0x8db457 */
  if ((sf != of)) goto L_8db457;
L_8db452: /* 8db452: mov eax, 0xb */
  eax = 0xbu;
L_8db457: /* 8db457: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8db45a: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db45d: jne 0x8db513 */
  if (!zf) goto L_8db513;
L_8db463: /* 8db463: movzx cx, byte ptr [eax*4 + 0xceb646] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax*4 + 0xceb646u)))) & 0xffffu);
/* 8db46c: movzx dx, byte ptr [eax*4 + 0xceb645] */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax*4 + 0xceb645u)))) & 0xffffu);
/* 8db475: mov al, byte ptr [eax*4 + 0xceb644] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax*4 + 0xceb644u))) & 0xffu);
/* 8db47c: shr al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8db47f: and ecx, 0xfff8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfff8u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8db485: shl ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8db488: and edx, 0xfffc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db48e: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db490: movzx dx, al */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)((eax & 0xffu))) & 0xffffu);
/* 8db494: lea eax, [edx + ecx*8] */
  eax = (uint32_t)(edx + ecx*8);
/* 8db497: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 8db49a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db49b: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8db49e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8db4a1: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8db4a4: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8db4a7: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db4aa: mov ecx, eax */
  ecx = eax;
/* 8db4ac: jge 0x8db4b3 */
  if ((sf == of)) goto L_8db4b3;
L_8db4ae: /* 8db4ae: mov ecx, 4 */
  ecx = 0x4u;
L_8db4b3: /* 8db4b3: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 8db4b6: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db4b9: jge 0x8db4c0 */
  if ((sf == of)) goto L_8db4c0;
L_8db4bb: /* 8db4bb: mov eax, 4 */
  eax = 0x4u;
L_8db4c0: /* 8db4c0: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8db4c3: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db4c4: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db4c7: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8db4c9: mov esi, eax */
  esi = eax;
/* 8db4cb: mov eax, ecx */
  eax = ecx;
/* 8db4cd: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db4ce: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db4d1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8db4d3: sar esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 8db4d6: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8db4d9: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
L_8db4e0: /* 8db4e0: cmp dword ptr [ebp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db4e3: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db4e9: /* 8db4e9: mov ecx, edi */
  ecx = edi;
/* 8db4eb: xor edx, edx */
  edx = 0;
/* 8db4ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8db4f0: /* 8db4f0: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db4f2: jge 0x8db505 */
  if ((sf == of)) goto L_8db505;
L_8db4f4: /* 8db4f4: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8db4f7: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8db4f9: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8db4fc: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8db4ff: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db502: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8db503: jmp 0x8db4f0 */
  goto L_8db4f0;
L_8db505: /* 8db505: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8db508: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8db50b: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8db50d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8db50e: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 8db511: jmp 0x8db4e0 */
  goto L_8db4e0;
L_8db513: /* 8db513: cmp ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db516: je 0x8db553 */
  if (zf) goto L_8db553;
L_8db518: /* 8db518: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db51b: je 0x8db553 */
  if (zf) goto L_8db553;
L_8db51d: /* 8db51d: cmp ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db520: jne 0x8db67f */
  if (!zf) goto L_8db67f;
L_8db526: /* 8db526: mov esi, dword ptr [eax*4 + 0xceb644] */
  esi = R32((uint32_t)(eax*4 + 0xceb644u));
/* 8db52d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8db530: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8db533: imul eax, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  eax = (uint32_t)r;
  }
/* 8db537: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8db53a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db53b: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db53e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8db540: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_8db543: /* 8db543: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8db545: jle 0x8db67f */
  if ((zf || sf != of)) goto L_8db67f;
L_8db54b: /* 8db54b: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 8db54d: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db550: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8db551: jmp 0x8db543 */
  goto L_8db543;
L_8db553: /* 8db553: movzx dx, byte ptr [eax*4 + 0xceb646] */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax*4 + 0xceb646u)))) & 0xffffu);
/* 8db55c: movzx si, byte ptr [eax*4 + 0xceb645] */
  esi = (esi & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax*4 + 0xceb645u)))) & 0xffffu);
/* 8db565: movzx eax, byte ptr [eax*4 + 0xceb644] */
  eax = (uint32_t)(R8((uint32_t)(eax*4 + 0xceb644u)));
/* 8db56d: shr al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8db570: movzx ax, al */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)((eax & 0xffu))) & 0xffffu);
/* 8db574: and edx, 0xfff8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfff8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db57a: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8db57d: and esi, 0xfffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8db583: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8db585: cmp ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db588: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 8db58b: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 8db58e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db58f: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8db592: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8db595: jne 0x8db5a0 */
  if (!zf) goto L_8db5a0;
L_8db597: /* 8db597: mov esi, 0x77777777 */
  esi = 0x77777777u;
/* 8db59c: mov edi, esi */
  edi = esi;
/* 8db59e: jmp 0x8db5a8 */
  goto L_8db5a8;
L_8db5a0: /* 8db5a0: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 8db5a3: mov edi, 0x8081ffff */
  edi = 0x8081ffffu;
L_8db5a8: /* 8db5a8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8db5ab: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8db5ae: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db5b1: jge 0x8db5b8 */
  if ((sf == of)) goto L_8db5b8;
L_8db5b3: /* 8db5b3: mov ecx, 4 */
  ecx = 0x4u;
L_8db5b8: /* 8db5b8: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8db5bb: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db5be: jge 0x8db5c5 */
  if ((sf == of)) goto L_8db5c5;
L_8db5c0: /* 8db5c0: mov eax, 4 */
  eax = 0x4u;
L_8db5c5: /* 8db5c5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db5c6: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db5c9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8db5cb: mov ebx, eax */
  ebx = eax;
/* 8db5cd: mov eax, ecx */
  eax = ecx;
/* 8db5cf: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8db5d2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db5d3: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db5d6: sar ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 8db5d9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8db5db: mov dword ptr [ebp + 0x18], ebx */
  W32((uint32_t)(ebp + 0x18u), ebx);
/* 8db5de: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8db5e1: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
L_8db5e8: /* 8db5e8: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db5eb: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 8db5ee: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db5f4: /* 8db5f4: xor edx, edx */
  edx = 0;
L_8db5f6: /* 8db5f6: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db5f8: jge 0x8db613 */
  if ((sf == of)) goto L_8db613;
L_8db5fa: /* 8db5fa: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8db5fd: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 8db5ff: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 8db602: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db605: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8db607: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8db60a: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8db60d: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db610: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8db611: jmp 0x8db5f6 */
  goto L_8db5f6;
L_8db613: /* 8db613: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 8db616: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8db619: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8db61c: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db61e: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 8db621: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8db622: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 8db625: jmp 0x8db5e8 */
  goto L_8db5e8;
L_8db67f: /* 8db67f: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 8db685: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db688: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db68e: /* 8db68e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8db691: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8db694: test byte ptr [ecx + 0x7c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x7cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8db698: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db69e: /* 8db69e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8db6a1: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 8db6a4: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db6a7: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8db6aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8db6aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db6ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db6ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db6af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db6b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db6b7: mov esp, ebp */
  esp = ebp;
/* 8db6b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db6ba: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8db505(void) {
  LOAD_REGS();
  goto L_8db505;
L_8db2e1: /* 8db2e1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db2e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db2eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db2ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db2ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db2ee: mov esp, ebp */
  esp = ebp;
/* 8db2f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db2f1: ret 0x14 */
  esp += 24; SPILL(); return;
L_8db4e0: /* 8db4e0: cmp dword ptr [ebp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db4e3: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db4e9: /* 8db4e9: mov ecx, edi */
  ecx = edi;
/* 8db4eb: xor edx, edx */
  edx = 0;
/* 8db4ed: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8db4f0: /* 8db4f0: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db4f2: jge 0x8db505 */
  if ((sf == of)) goto L_8db505;
L_8db4f4: /* 8db4f4: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8db4f7: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8db4f9: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8db4fc: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8db4ff: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db502: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8db503: jmp 0x8db4f0 */
  goto L_8db4f0;
L_8db505: /* 8db505: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8db508: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8db50b: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8db50d: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8db50e: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 8db511: jmp 0x8db4e0 */
  goto L_8db4e0;
L_8db67f: /* 8db67f: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 8db685: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db688: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db68e: /* 8db68e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8db691: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8db694: test byte ptr [ecx + 0x7c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x7cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8db698: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db69e: /* 8db69e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8db6a1: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 8db6a4: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db6a7: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8db6aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8db6aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db6ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db6ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db6af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db6b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db6b7: mov esp, ebp */
  esp = ebp;
/* 8db6b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db6ba: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8db513(void) {
  LOAD_REGS();
  goto L_8db513;
L_8db2e1: /* 8db2e1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db2e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db2eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db2ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db2ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db2ee: mov esp, ebp */
  esp = ebp;
/* 8db2f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db2f1: ret 0x14 */
  esp += 24; SPILL(); return;
L_8db513: /* 8db513: cmp ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db516: je 0x8db553 */
  if (zf) goto L_8db553;
L_8db518: /* 8db518: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db51b: je 0x8db553 */
  if (zf) goto L_8db553;
L_8db51d: /* 8db51d: cmp ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db520: jne 0x8db67f */
  if (!zf) goto L_8db67f;
L_8db526: /* 8db526: mov esi, dword ptr [eax*4 + 0xceb644] */
  esi = R32((uint32_t)(eax*4 + 0xceb644u));
/* 8db52d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8db530: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8db533: imul eax, dword ptr [ebp + 0x10] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x10u)));
  eax = (uint32_t)r;
  }
/* 8db537: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8db53a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db53b: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db53e: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8db540: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
L_8db543: /* 8db543: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8db545: jle 0x8db67f */
  if ((zf || sf != of)) goto L_8db67f;
L_8db54b: /* 8db54b: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 8db54d: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db550: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8db551: jmp 0x8db543 */
  goto L_8db543;
L_8db553: /* 8db553: movzx dx, byte ptr [eax*4 + 0xceb646] */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax*4 + 0xceb646u)))) & 0xffffu);
/* 8db55c: movzx si, byte ptr [eax*4 + 0xceb645] */
  esi = (esi & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax*4 + 0xceb645u)))) & 0xffffu);
/* 8db565: movzx eax, byte ptr [eax*4 + 0xceb644] */
  eax = (uint32_t)(R8((uint32_t)(eax*4 + 0xceb644u)));
/* 8db56d: shr al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8db570: movzx ax, al */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)((eax & 0xffu))) & 0xffffu);
/* 8db574: and edx, 0xfff8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfff8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db57a: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8db57d: and esi, 0xfffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8db583: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8db585: cmp ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db588: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 8db58b: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 8db58e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db58f: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8db592: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8db595: jne 0x8db5a0 */
  if (!zf) goto L_8db5a0;
L_8db597: /* 8db597: mov esi, 0x77777777 */
  esi = 0x77777777u;
/* 8db59c: mov edi, esi */
  edi = esi;
/* 8db59e: jmp 0x8db5a8 */
  goto L_8db5a8;
L_8db5a0: /* 8db5a0: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 8db5a3: mov edi, 0x8081ffff */
  edi = 0x8081ffffu;
L_8db5a8: /* 8db5a8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8db5ab: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8db5ae: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db5b1: jge 0x8db5b8 */
  if ((sf == of)) goto L_8db5b8;
L_8db5b3: /* 8db5b3: mov ecx, 4 */
  ecx = 0x4u;
L_8db5b8: /* 8db5b8: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8db5bb: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db5be: jge 0x8db5c5 */
  if ((sf == of)) goto L_8db5c5;
L_8db5c0: /* 8db5c0: mov eax, 4 */
  eax = 0x4u;
L_8db5c5: /* 8db5c5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db5c6: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db5c9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8db5cb: mov ebx, eax */
  ebx = eax;
/* 8db5cd: mov eax, ecx */
  eax = ecx;
/* 8db5cf: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8db5d2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db5d3: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db5d6: sar ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 8db5d9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8db5db: mov dword ptr [ebp + 0x18], ebx */
  W32((uint32_t)(ebp + 0x18u), ebx);
/* 8db5de: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8db5e1: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
L_8db5e8: /* 8db5e8: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db5eb: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 8db5ee: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db5f4: /* 8db5f4: xor edx, edx */
  edx = 0;
L_8db5f6: /* 8db5f6: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db5f8: jge 0x8db613 */
  if ((sf == of)) goto L_8db613;
L_8db5fa: /* 8db5fa: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8db5fd: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 8db5ff: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 8db602: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db605: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8db607: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8db60a: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8db60d: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db610: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8db611: jmp 0x8db5f6 */
  goto L_8db5f6;
L_8db613: /* 8db613: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 8db616: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8db619: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8db61c: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db61e: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 8db621: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8db622: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 8db625: jmp 0x8db5e8 */
  goto L_8db5e8;
L_8db67f: /* 8db67f: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 8db685: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db688: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db68e: /* 8db68e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8db691: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8db694: test byte ptr [ecx + 0x7c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x7cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8db698: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db69e: /* 8db69e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8db6a1: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 8db6a4: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db6a7: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8db6aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8db6aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db6ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db6ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db6af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db6b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db6b7: mov esp, ebp */
  esp = ebp;
/* 8db6b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db6ba: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8db553(void) {
  LOAD_REGS();
  goto L_8db553;
L_8db2e1: /* 8db2e1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db2e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db2eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db2ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db2ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db2ee: mov esp, ebp */
  esp = ebp;
/* 8db2f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db2f1: ret 0x14 */
  esp += 24; SPILL(); return;
L_8db553: /* 8db553: movzx dx, byte ptr [eax*4 + 0xceb646] */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax*4 + 0xceb646u)))) & 0xffffu);
/* 8db55c: movzx si, byte ptr [eax*4 + 0xceb645] */
  esi = (esi & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(eax*4 + 0xceb645u)))) & 0xffffu);
/* 8db565: movzx eax, byte ptr [eax*4 + 0xceb644] */
  eax = (uint32_t)(R8((uint32_t)(eax*4 + 0xceb644u)));
/* 8db56d: shr al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8db570: movzx ax, al */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)((eax & 0xffu))) & 0xffffu);
/* 8db574: and edx, 0xfff8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfff8u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db57a: shl edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8db57d: and esi, 0xfffc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8db583: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8db585: cmp ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db588: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 8db58b: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 8db58e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db58f: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8db592: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8db595: jne 0x8db5a0 */
  if (!zf) goto L_8db5a0;
L_8db597: /* 8db597: mov esi, 0x77777777 */
  esi = 0x77777777u;
/* 8db59c: mov edi, esi */
  edi = esi;
/* 8db59e: jmp 0x8db5a8 */
  goto L_8db5a8;
L_8db5a0: /* 8db5a0: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 8db5a3: mov edi, 0x8081ffff */
  edi = 0x8081ffffu;
L_8db5a8: /* 8db5a8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8db5ab: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8db5ae: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db5b1: jge 0x8db5b8 */
  if ((sf == of)) goto L_8db5b8;
L_8db5b3: /* 8db5b3: mov ecx, 4 */
  ecx = 0x4u;
L_8db5b8: /* 8db5b8: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8db5bb: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db5be: jge 0x8db5c5 */
  if ((sf == of)) goto L_8db5c5;
L_8db5c0: /* 8db5c0: mov eax, 4 */
  eax = 0x4u;
L_8db5c5: /* 8db5c5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db5c6: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db5c9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8db5cb: mov ebx, eax */
  ebx = eax;
/* 8db5cd: mov eax, ecx */
  eax = ecx;
/* 8db5cf: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8db5d2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db5d3: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db5d6: sar ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 8db5d9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8db5db: mov dword ptr [ebp + 0x18], ebx */
  W32((uint32_t)(ebp + 0x18u), ebx);
/* 8db5de: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8db5e1: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
L_8db5e8: /* 8db5e8: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db5eb: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 8db5ee: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db5f4: /* 8db5f4: xor edx, edx */
  edx = 0;
L_8db5f6: /* 8db5f6: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db5f8: jge 0x8db613 */
  if ((sf == of)) goto L_8db613;
L_8db5fa: /* 8db5fa: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8db5fd: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 8db5ff: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 8db602: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db605: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8db607: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8db60a: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8db60d: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db610: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8db611: jmp 0x8db5f6 */
  goto L_8db5f6;
L_8db613: /* 8db613: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 8db616: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8db619: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8db61c: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db61e: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 8db621: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8db622: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 8db625: jmp 0x8db5e8 */
  goto L_8db5e8;
L_8db67f: /* 8db67f: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 8db685: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db688: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db68e: /* 8db68e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8db691: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8db694: test byte ptr [ecx + 0x7c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x7cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8db698: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db69e: /* 8db69e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8db6a1: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 8db6a4: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db6a7: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8db6aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8db6aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db6ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db6ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db6af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db6b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db6b7: mov esp, ebp */
  esp = ebp;
/* 8db6b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db6ba: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8db5a0(void) {
  LOAD_REGS();
  goto L_8db5a0;
L_8db2e1: /* 8db2e1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db2e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db2eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db2ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db2ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db2ee: mov esp, ebp */
  esp = ebp;
/* 8db2f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db2f1: ret 0x14 */
  esp += 24; SPILL(); return;
L_8db5a0: /* 8db5a0: or esi, 0xffffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 8db5a3: mov edi, 0x8081ffff */
  edi = 0x8081ffffu;
/* 8db5a8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8db5ab: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8db5ae: cmp ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db5b1: jge 0x8db5b8 */
  if ((sf == of)) goto L_8db5b8;
L_8db5b3: /* 8db5b3: mov ecx, 4 */
  ecx = 0x4u;
L_8db5b8: /* 8db5b8: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8db5bb: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db5be: jge 0x8db5c5 */
  if ((sf == of)) goto L_8db5c5;
L_8db5c0: /* 8db5c0: mov eax, 4 */
  eax = 0x4u;
L_8db5c5: /* 8db5c5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db5c6: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db5c9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8db5cb: mov ebx, eax */
  ebx = eax;
/* 8db5cd: mov eax, ecx */
  eax = ecx;
/* 8db5cf: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8db5d2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db5d3: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db5d6: sar ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 8db5d9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8db5db: mov dword ptr [ebp + 0x18], ebx */
  W32((uint32_t)(ebp + 0x18u), ebx);
/* 8db5de: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8db5e1: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
L_8db5e8: /* 8db5e8: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db5eb: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 8db5ee: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db5f4: /* 8db5f4: xor edx, edx */
  edx = 0;
L_8db5f6: /* 8db5f6: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db5f8: jge 0x8db613 */
  if ((sf == of)) goto L_8db613;
L_8db5fa: /* 8db5fa: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8db5fd: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 8db5ff: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 8db602: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db605: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8db607: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8db60a: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8db60d: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db610: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8db611: jmp 0x8db5f6 */
  goto L_8db5f6;
L_8db613: /* 8db613: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 8db616: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8db619: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8db61c: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db61e: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 8db621: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8db622: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 8db625: jmp 0x8db5e8 */
  goto L_8db5e8;
L_8db67f: /* 8db67f: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 8db685: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db688: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db68e: /* 8db68e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8db691: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8db694: test byte ptr [ecx + 0x7c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x7cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8db698: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db69e: /* 8db69e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8db6a1: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 8db6a4: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db6a7: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8db6aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8db6aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db6ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db6ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db6af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db6b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db6b7: mov esp, ebp */
  esp = ebp;
/* 8db6b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db6ba: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8db613(void) {
  LOAD_REGS();
  goto L_8db613;
L_8db2e1: /* 8db2e1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db2e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db2eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db2ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db2ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db2ee: mov esp, ebp */
  esp = ebp;
/* 8db2f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db2f1: ret 0x14 */
  esp += 24; SPILL(); return;
L_8db5e8: /* 8db5e8: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db5eb: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 8db5ee: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db5f4: /* 8db5f4: xor edx, edx */
  edx = 0;
L_8db5f6: /* 8db5f6: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db5f8: jge 0x8db613 */
  if ((sf == of)) goto L_8db613;
L_8db5fa: /* 8db5fa: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8db5fd: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 8db5ff: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 8db602: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db605: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8db607: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8db60a: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8db60d: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db610: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8db611: jmp 0x8db5f6 */
  goto L_8db5f6;
L_8db613: /* 8db613: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 8db616: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8db619: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8db61c: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db61e: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
/* 8db621: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8db622: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 8db625: jmp 0x8db5e8 */
  goto L_8db5e8;
L_8db67f: /* 8db67f: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 8db685: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db688: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db68e: /* 8db68e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8db691: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8db694: test byte ptr [ecx + 0x7c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x7cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8db698: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db69e: /* 8db69e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8db6a1: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 8db6a4: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db6a7: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8db6aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8db6aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db6ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db6ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db6af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db6b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db6b7: mov esp, ebp */
  esp = ebp;
/* 8db6b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db6ba: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8db627(void) {
  LOAD_REGS();
  goto L_8db627;
L_8db2e1: /* 8db2e1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db2e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db2eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db2ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db2ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db2ee: mov esp, ebp */
  esp = ebp;
/* 8db2f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db2f1: ret 0x14 */
  esp += 24; SPILL(); return;
L_8db627: /* 8db627: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8db62a: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db62d: je 0x8db7f1 */
  if (zf) goto L_8db7f1;
L_8db633: /* 8db633: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db636: je 0x8db7f1 */
  if (zf) goto L_8db7f1;
L_8db63c: /* 8db63c: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db63f: je 0x8db7f1 */
  if (zf) goto L_8db7f1;
L_8db645: /* 8db645: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db647: jne 0x8db6ea */
  if (!zf) goto L_8db6ea;
L_8db64d: /* 8db64d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8db650: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8db653: mov ebx, edx */
  ebx = edx;
/* 8db655: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8db658: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8db659: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8db65a: call 0x6ca52e */
  esp -= 4; W32(esp, 0x8db65fu); SPILL(); f_6ca52e(); if (g_unwind) return; RELOAD();
/* 8db65f: mov esi, eax */
  esi = eax;
/* 8db661: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8db664: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8db667: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db669: jne 0x8db6bd */
  if (!zf) goto L_8db6bd;
L_8db66b: /* 8db66b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8db66e: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8db671: imul ecx, esi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(esi);
  ecx = (uint32_t)r;
  }
/* 8db674: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8db675: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8db676: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_8db677: /* 8db677: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8db67cu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8db67c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8db67f: /* 8db67f: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 8db685: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db688: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db68e: /* 8db68e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8db691: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8db694: test byte ptr [ecx + 0x7c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x7cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8db698: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db69e: /* 8db69e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8db6a1: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 8db6a4: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db6a7: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8db6aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8db6aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db6ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db6ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db6af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db6b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db6b7: mov esp, ebp */
  esp = ebp;
/* 8db6b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db6ba: ret 0x14 */
  esp += 24; SPILL(); return;
L_8db6bd: /* 8db6bd: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
L_8db6c4: /* 8db6c4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8db6c7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8db6ca: cmp eax, dword ptr [edx + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db6cd: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db6cf: /* 8db6cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8db6d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8db6d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8db6d2: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8db6d7u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8db6d7: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8db6da: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8db6dd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8db6e0: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8db6e2: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8db6e4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8db6e5: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8db6e8: jmp 0x8db6c4 */
  goto L_8db6c4;
L_8db6ea: /* 8db6ea: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8db6ec: jne 0x8db783 */
  if (!zf) goto L_8db783;
L_8db6f2: /* 8db6f2: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db6f5: jne 0x8db67f */
  if (!zf) goto L_8db67f;
L_8db6f7: /* 8db6f7: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8db6fa: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 8db6fd: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* 8db700: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 8db703: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 8db706: mov ebx, edx */
  ebx = edx;
/* 8db708: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 8db70f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8db710: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8db711: push 0xceb178 */
  { uint32_t v = 0xceb178u; esp -= 4; W32(esp, v); }
/* 8db716: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8db71bu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8db71b: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 8db71e: mov al, byte ptr [ecx + 0x7c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x7cu))) & 0xffu);
/* 8db721: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8db724: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8db726: je 0x8db732 */
  if (zf) goto L_8db732;
L_8db728: /* 8db728: mov dword ptr [0xceb178], 0 */
  W32((uint32_t)(0xceb178u), 0x0u);
L_8db732: /* 8db732: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8db735: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 8db738: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8db73b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8db73e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8db741: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8db744: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8db747: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
/* 8db74e: mov edi, edi */
  edi = edi;
L_8db750: /* 8db750: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8db753: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db756: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db75c: /* 8db75c: xor eax, eax */
  eax = 0;
/* 8db75e: mov edi, edi */
  edi = edi;
L_8db760: /* 8db760: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db762: jge 0x8db775 */
  if ((sf == of)) goto L_8db775;
L_8db764: /* 8db764: movzx edi, byte ptr [eax + ebx] */
  edi = (uint32_t)(R8((uint32_t)(eax + ebx)));
/* 8db768: mov edi, dword ptr [edi*4 + 0xceb178] */
  edi = R32((uint32_t)(edi*4 + 0xceb178u));
/* 8db76f: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 8db772: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8db773: jmp 0x8db760 */
  goto L_8db760;
L_8db775: /* 8db775: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8db778: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8db77a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8db77b: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 8db77e: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 8db781: jmp 0x8db750 */
  goto L_8db750;
L_8db783: /* 8db783: cmp esi, 0xa */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db786: jne 0x8db67f */
  if (!zf) goto L_8db67f;
L_8db78c: /* 8db78c: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db78f: jne 0x8db67f */
  if (!zf) goto L_8db67f;
L_8db795: /* 8db795: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8db798: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8db79b: mov dword ptr [ebp + 0x14], 0 */
  W32((uint32_t)(ebp + 0x14u), 0x0u);
/* 8db7a2: mov bl, 0xff */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
L_8db7a4: /* 8db7a4: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8db7a7: cmp eax, dword ptr [edi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db7aa: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db7b0: /* 8db7b0: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8db7b3: xor esi, esi */
  esi = 0;
L_8db7b5: /* 8db7b5: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db7b8: jge 0x8db7d7 */
  if ((sf == of)) goto L_8db7d7;
L_8db7ba: /* 8db7ba: mov al, byte ptr [edx + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x1u))) & 0xffu);
/* 8db7bd: mov byte ptr [ebp + 0xc], al */
  W8((uint32_t)(ebp + 0xcu), (eax & 0xffu));
/* 8db7c0: mov byte ptr [ebp + 0xd], al */
  W8((uint32_t)(ebp + 0xdu), (eax & 0xffu));
/* 8db7c3: mov byte ptr [ebp + 0xe], al */
  W8((uint32_t)(ebp + 0xeu), (eax & 0xffu));
/* 8db7c6: mov byte ptr [ebp + 0xf], bl */
  W8((uint32_t)(ebp + 0xfu), (ebx & 0xffu));
/* 8db7c9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8db7cc: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8db7ce: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8db7d1: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db7d4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8db7d5: jmp 0x8db7b5 */
  goto L_8db7b5;
L_8db7d7: /* 8db7d7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8db7da: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 8db7dd: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8db7e0: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8db7e2: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8db7e5: shr esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 8db7e8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8db7e9: lea ecx, [ecx + esi*4] */
  ecx = (uint32_t)(ecx + esi*4);
/* 8db7ec: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 8db7ef: jmp 0x8db7a4 */
  goto L_8db7a4;
L_8db7f1: /* 8db7f1: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db7f3: je 0x8db80d */
  if (zf) goto L_8db80d;
L_8db7f5: /* 8db7f5: push 0x7e8 */
  { uint32_t v = 0x7e8u; esp -= 4; W32(esp, v); }
/* 8db7fa: push 0xaed8b0 */
  { uint32_t v = 0xaed8b0u; esp -= 4; W32(esp, v); }
/* 8db7ff: push 0xaed8bc */
  { uint32_t v = 0xaed8bcu; esp -= 4; W32(esp, v); }
/* 8db804: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8db80au); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8db80a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8db80d: /* 8db80d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8db810: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8db813: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8db816: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db819: mov edi, dword ptr [edx + 0x1c] */
  edi = R32((uint32_t)(edx + 0x1cu));
/* 8db81c: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 8db81f: mov ecx, eax */
  ecx = eax;
/* 8db821: jge 0x8db828 */
  if ((sf == of)) goto L_8db828;
L_8db823: /* 8db823: mov ecx, 4 */
  ecx = 0x4u;
L_8db828: /* 8db828: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 8db82b: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db82e: jge 0x8db835 */
  if ((sf == of)) goto L_8db835;
L_8db830: /* 8db830: mov eax, 4 */
  eax = 0x4u;
L_8db835: /* 8db835: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db836: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db839: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8db83b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8db83c: mov ebx, eax */
  ebx = eax;
/* 8db83e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8db83f: sar ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 8db842: call 0x6ca52e */
  esp -= 4; W32(esp, 0x8db847u); SPILL(); f_6ca52e(); if (g_unwind) return; RELOAD();
/* 8db847: mov esi, eax */
  esi = eax;
/* 8db849: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8db84c: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8db84f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8db852: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db854: jne 0x8db864 */
  if (!zf) goto L_8db864;
L_8db856: /* 8db856: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8db859: imul esi, ebx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebx);
  esi = (uint32_t)r;
  }
/* 8db85c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8db85d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8db85e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8db85f: jmp 0x8db677 */
  goto L_8db677;
L_8db864: /* 8db864: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 8db86b: jmp 0x8db870 */
  goto L_8db870;
L_8db870: /* 8db870: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db873: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db879: /* 8db879: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8db87c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8db87d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8db87e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8db87f: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8db884u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8db884: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8db887: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8db88a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8db88d: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8db88f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8db892: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8db894: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8db895: mov dword ptr [ebp + 0x14], edx */
  W32((uint32_t)(ebp + 0x14u), edx);
/* 8db898: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8db89b: jmp 0x8db870 */
  goto L_8db870;
}

void f_8db6bd(void) {
  LOAD_REGS();
  goto L_8db6bd;
L_8db2e1: /* 8db2e1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db2e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db2eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db2ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db2ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db2ee: mov esp, ebp */
  esp = ebp;
/* 8db2f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db2f1: ret 0x14 */
  esp += 24; SPILL(); return;
L_8db67f: /* 8db67f: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 8db685: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db688: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db68e: /* 8db68e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8db691: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8db694: test byte ptr [ecx + 0x7c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x7cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8db698: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db69e: /* 8db69e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8db6a1: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 8db6a4: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db6a7: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8db6aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8db6aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db6ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db6ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db6af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db6b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db6b7: mov esp, ebp */
  esp = ebp;
/* 8db6b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db6ba: ret 0x14 */
  esp += 24; SPILL(); return;
L_8db6bd: /* 8db6bd: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
L_8db6c4: /* 8db6c4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8db6c7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8db6ca: cmp eax, dword ptr [edx + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db6cd: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db6cf: /* 8db6cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8db6d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8db6d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8db6d2: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8db6d7u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8db6d7: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8db6da: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8db6dd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8db6e0: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8db6e2: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8db6e4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8db6e5: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8db6e8: jmp 0x8db6c4 */
  goto L_8db6c4;
}

void f_8db6ea(void) {
  LOAD_REGS();
  goto L_8db6ea;
L_8db2e1: /* 8db2e1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db2e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db2eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db2ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db2ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db2ee: mov esp, ebp */
  esp = ebp;
/* 8db2f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db2f1: ret 0x14 */
  esp += 24; SPILL(); return;
L_8db67f: /* 8db67f: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 8db685: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db688: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db68e: /* 8db68e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8db691: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8db694: test byte ptr [ecx + 0x7c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x7cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8db698: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db69e: /* 8db69e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8db6a1: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 8db6a4: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db6a7: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8db6aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8db6aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db6ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db6ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db6af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db6b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db6b7: mov esp, ebp */
  esp = ebp;
/* 8db6b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db6ba: ret 0x14 */
  esp += 24; SPILL(); return;
L_8db6ea: /* 8db6ea: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8db6ec: jne 0x8db783 */
  if (!zf) goto L_8db783;
L_8db6f2: /* 8db6f2: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db6f5: jne 0x8db67f */
  if (!zf) goto L_8db67f;
L_8db6f7: /* 8db6f7: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8db6fa: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 8db6fd: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* 8db700: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 8db703: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 8db706: mov ebx, edx */
  ebx = edx;
/* 8db708: lea edx, [ecx*4] */
  edx = (uint32_t)(ecx*4);
/* 8db70f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8db710: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8db711: push 0xceb178 */
  { uint32_t v = 0xceb178u; esp -= 4; W32(esp, v); }
/* 8db716: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8db71bu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8db71b: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 8db71e: mov al, byte ptr [ecx + 0x7c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x7cu))) & 0xffu);
/* 8db721: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8db724: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8db726: je 0x8db732 */
  if (zf) goto L_8db732;
L_8db728: /* 8db728: mov dword ptr [0xceb178], 0 */
  W32((uint32_t)(0xceb178u), 0x0u);
L_8db732: /* 8db732: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8db735: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 8db738: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 8db73b: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8db73e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8db741: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8db744: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8db747: mov dword ptr [ebp + 0x10], 0 */
  W32((uint32_t)(ebp + 0x10u), 0x0u);
/* 8db74e: mov edi, edi */
  edi = edi;
L_8db750: /* 8db750: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8db753: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db756: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db75c: /* 8db75c: xor eax, eax */
  eax = 0;
/* 8db75e: mov edi, edi */
  edi = edi;
L_8db760: /* 8db760: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db762: jge 0x8db775 */
  if ((sf == of)) goto L_8db775;
L_8db764: /* 8db764: movzx edi, byte ptr [eax + ebx] */
  edi = (uint32_t)(R8((uint32_t)(eax + ebx)));
/* 8db768: mov edi, dword ptr [edi*4 + 0xceb178] */
  edi = R32((uint32_t)(edi*4 + 0xceb178u));
/* 8db76f: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 8db772: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8db773: jmp 0x8db760 */
  goto L_8db760;
L_8db775: /* 8db775: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8db778: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8db77a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8db77b: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 8db77e: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 8db781: jmp 0x8db750 */
  goto L_8db750;
L_8db783: /* 8db783: cmp esi, 0xa */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db786: jne 0x8db67f */
  if (!zf) goto L_8db67f;
L_8db78c: /* 8db78c: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db78f: jne 0x8db67f */
  if (!zf) goto L_8db67f;
L_8db795: /* 8db795: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8db798: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8db79b: mov dword ptr [ebp + 0x14], 0 */
  W32((uint32_t)(ebp + 0x14u), 0x0u);
/* 8db7a2: mov bl, 0xff */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
L_8db7a4: /* 8db7a4: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8db7a7: cmp eax, dword ptr [edi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db7aa: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db7b0: /* 8db7b0: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8db7b3: xor esi, esi */
  esi = 0;
L_8db7b5: /* 8db7b5: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db7b8: jge 0x8db7d7 */
  if ((sf == of)) goto L_8db7d7;
L_8db7ba: /* 8db7ba: mov al, byte ptr [edx + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x1u))) & 0xffu);
/* 8db7bd: mov byte ptr [ebp + 0xc], al */
  W8((uint32_t)(ebp + 0xcu), (eax & 0xffu));
/* 8db7c0: mov byte ptr [ebp + 0xd], al */
  W8((uint32_t)(ebp + 0xdu), (eax & 0xffu));
/* 8db7c3: mov byte ptr [ebp + 0xe], al */
  W8((uint32_t)(ebp + 0xeu), (eax & 0xffu));
/* 8db7c6: mov byte ptr [ebp + 0xf], bl */
  W8((uint32_t)(ebp + 0xfu), (ebx & 0xffu));
/* 8db7c9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8db7cc: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8db7ce: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8db7d1: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db7d4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8db7d5: jmp 0x8db7b5 */
  goto L_8db7b5;
L_8db7d7: /* 8db7d7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8db7da: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 8db7dd: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8db7e0: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8db7e2: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8db7e5: shr esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 8db7e8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8db7e9: lea ecx, [ecx + esi*4] */
  ecx = (uint32_t)(ecx + esi*4);
/* 8db7ec: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 8db7ef: jmp 0x8db7a4 */
  goto L_8db7a4;
}

void f_8db775(void) {
  LOAD_REGS();
  goto L_8db775;
L_8db2e1: /* 8db2e1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db2e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db2eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db2ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db2ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db2ee: mov esp, ebp */
  esp = ebp;
/* 8db2f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db2f1: ret 0x14 */
  esp += 24; SPILL(); return;
L_8db67f: /* 8db67f: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 8db685: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db688: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db68e: /* 8db68e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8db691: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8db694: test byte ptr [ecx + 0x7c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x7cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8db698: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db69e: /* 8db69e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8db6a1: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 8db6a4: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db6a7: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8db6aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8db6aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db6ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db6ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db6af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db6b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db6b7: mov esp, ebp */
  esp = ebp;
/* 8db6b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db6ba: ret 0x14 */
  esp += 24; SPILL(); return;
L_8db750: /* 8db750: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8db753: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db756: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db75c: /* 8db75c: xor eax, eax */
  eax = 0;
/* 8db75e: mov edi, edi */
  edi = edi;
L_8db760: /* 8db760: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db762: jge 0x8db775 */
  if ((sf == of)) goto L_8db775;
L_8db764: /* 8db764: movzx edi, byte ptr [eax + ebx] */
  edi = (uint32_t)(R8((uint32_t)(eax + ebx)));
/* 8db768: mov edi, dword ptr [edi*4 + 0xceb178] */
  edi = R32((uint32_t)(edi*4 + 0xceb178u));
/* 8db76f: mov dword ptr [ecx + eax*4], edi */
  W32((uint32_t)(ecx + eax*4), edi);
/* 8db772: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8db773: jmp 0x8db760 */
  goto L_8db760;
L_8db775: /* 8db775: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8db778: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8db77a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8db77b: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 8db77e: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 8db781: jmp 0x8db750 */
  goto L_8db750;
}

void f_8db783(void) {
  LOAD_REGS();
  goto L_8db783;
L_8db2e1: /* 8db2e1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db2e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db2eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db2ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db2ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db2ee: mov esp, ebp */
  esp = ebp;
/* 8db2f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db2f1: ret 0x14 */
  esp += 24; SPILL(); return;
L_8db67f: /* 8db67f: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 8db685: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db688: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db68e: /* 8db68e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8db691: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8db694: test byte ptr [ecx + 0x7c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x7cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8db698: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db69e: /* 8db69e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8db6a1: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 8db6a4: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db6a7: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8db6aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8db6aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db6ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db6ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db6af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db6b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db6b7: mov esp, ebp */
  esp = ebp;
/* 8db6b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db6ba: ret 0x14 */
  esp += 24; SPILL(); return;
L_8db783: /* 8db783: cmp esi, 0xa */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db786: jne 0x8db67f */
  if (!zf) goto L_8db67f;
L_8db78c: /* 8db78c: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db78f: jne 0x8db67f */
  if (!zf) goto L_8db67f;
L_8db795: /* 8db795: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8db798: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8db79b: mov dword ptr [ebp + 0x14], 0 */
  W32((uint32_t)(ebp + 0x14u), 0x0u);
/* 8db7a2: mov bl, 0xff */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
L_8db7a4: /* 8db7a4: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8db7a7: cmp eax, dword ptr [edi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db7aa: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db7b0: /* 8db7b0: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8db7b3: xor esi, esi */
  esi = 0;
L_8db7b5: /* 8db7b5: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db7b8: jge 0x8db7d7 */
  if ((sf == of)) goto L_8db7d7;
L_8db7ba: /* 8db7ba: mov al, byte ptr [edx + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x1u))) & 0xffu);
/* 8db7bd: mov byte ptr [ebp + 0xc], al */
  W8((uint32_t)(ebp + 0xcu), (eax & 0xffu));
/* 8db7c0: mov byte ptr [ebp + 0xd], al */
  W8((uint32_t)(ebp + 0xdu), (eax & 0xffu));
/* 8db7c3: mov byte ptr [ebp + 0xe], al */
  W8((uint32_t)(ebp + 0xeu), (eax & 0xffu));
/* 8db7c6: mov byte ptr [ebp + 0xf], bl */
  W8((uint32_t)(ebp + 0xfu), (ebx & 0xffu));
/* 8db7c9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8db7cc: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8db7ce: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8db7d1: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db7d4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8db7d5: jmp 0x8db7b5 */
  goto L_8db7b5;
L_8db7d7: /* 8db7d7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8db7da: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 8db7dd: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8db7e0: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8db7e2: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8db7e5: shr esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 8db7e8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8db7e9: lea ecx, [ecx + esi*4] */
  ecx = (uint32_t)(ecx + esi*4);
/* 8db7ec: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 8db7ef: jmp 0x8db7a4 */
  goto L_8db7a4;
}

void f_8db7d7(void) {
  LOAD_REGS();
  goto L_8db7d7;
L_8db2e1: /* 8db2e1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db2e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db2eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db2ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db2ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db2ee: mov esp, ebp */
  esp = ebp;
/* 8db2f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db2f1: ret 0x14 */
  esp += 24; SPILL(); return;
L_8db67f: /* 8db67f: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 8db685: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db688: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db68e: /* 8db68e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8db691: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8db694: test byte ptr [ecx + 0x7c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x7cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8db698: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db69e: /* 8db69e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8db6a1: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 8db6a4: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db6a7: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8db6aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8db6aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db6ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db6ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db6af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db6b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db6b7: mov esp, ebp */
  esp = ebp;
/* 8db6b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db6ba: ret 0x14 */
  esp += 24; SPILL(); return;
L_8db7a4: /* 8db7a4: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8db7a7: cmp eax, dword ptr [edi + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db7aa: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db7b0: /* 8db7b0: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8db7b3: xor esi, esi */
  esi = 0;
L_8db7b5: /* 8db7b5: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db7b8: jge 0x8db7d7 */
  if ((sf == of)) goto L_8db7d7;
L_8db7ba: /* 8db7ba: mov al, byte ptr [edx + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x1u))) & 0xffu);
/* 8db7bd: mov byte ptr [ebp + 0xc], al */
  W8((uint32_t)(ebp + 0xcu), (eax & 0xffu));
/* 8db7c0: mov byte ptr [ebp + 0xd], al */
  W8((uint32_t)(ebp + 0xdu), (eax & 0xffu));
/* 8db7c3: mov byte ptr [ebp + 0xe], al */
  W8((uint32_t)(ebp + 0xeu), (eax & 0xffu));
/* 8db7c6: mov byte ptr [ebp + 0xf], bl */
  W8((uint32_t)(ebp + 0xfu), (ebx & 0xffu));
/* 8db7c9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8db7cc: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8db7ce: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8db7d1: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db7d4: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8db7d5: jmp 0x8db7b5 */
  goto L_8db7b5;
L_8db7d7: /* 8db7d7: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 8db7da: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 8db7dd: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8db7e0: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8db7e2: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8db7e5: shr esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 8db7e8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8db7e9: lea ecx, [ecx + esi*4] */
  ecx = (uint32_t)(ecx + esi*4);
/* 8db7ec: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 8db7ef: jmp 0x8db7a4 */
  goto L_8db7a4;
}

void f_8db7f1(void) {
  LOAD_REGS();
  goto L_8db7f1;
L_8db2e1: /* 8db2e1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db2e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db2eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db2ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db2ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db2ee: mov esp, ebp */
  esp = ebp;
/* 8db2f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db2f1: ret 0x14 */
  esp += 24; SPILL(); return;
L_8db677: /* 8db677: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8db67cu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8db67c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8db67f: /* 8db67f: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 8db685: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db688: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db68e: /* 8db68e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8db691: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8db694: test byte ptr [ecx + 0x7c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x7cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8db698: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db69e: /* 8db69e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8db6a1: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 8db6a4: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db6a7: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8db6aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8db6aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db6ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db6ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db6af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db6b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db6b7: mov esp, ebp */
  esp = ebp;
/* 8db6b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db6ba: ret 0x14 */
  esp += 24; SPILL(); return;
L_8db7f1: /* 8db7f1: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db7f3: je 0x8db80d */
  if (zf) goto L_8db80d;
L_8db7f5: /* 8db7f5: push 0x7e8 */
  { uint32_t v = 0x7e8u; esp -= 4; W32(esp, v); }
/* 8db7fa: push 0xaed8b0 */
  { uint32_t v = 0xaed8b0u; esp -= 4; W32(esp, v); }
/* 8db7ff: push 0xaed8bc */
  { uint32_t v = 0xaed8bcu; esp -= 4; W32(esp, v); }
/* 8db804: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8db80au); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8db80a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8db80d: /* 8db80d: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8db810: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8db813: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8db816: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db819: mov edi, dword ptr [edx + 0x1c] */
  edi = R32((uint32_t)(edx + 0x1cu));
/* 8db81c: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 8db81f: mov ecx, eax */
  ecx = eax;
/* 8db821: jge 0x8db828 */
  if ((sf == of)) goto L_8db828;
L_8db823: /* 8db823: mov ecx, 4 */
  ecx = 0x4u;
L_8db828: /* 8db828: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 8db82b: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db82e: jge 0x8db835 */
  if ((sf == of)) goto L_8db835;
L_8db830: /* 8db830: mov eax, 4 */
  eax = 0x4u;
L_8db835: /* 8db835: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8db836: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8db839: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8db83b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8db83c: mov ebx, eax */
  ebx = eax;
/* 8db83e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8db83f: sar ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 8db842: call 0x6ca52e */
  esp -= 4; W32(esp, 0x8db847u); SPILL(); f_6ca52e(); if (g_unwind) return; RELOAD();
/* 8db847: mov esi, eax */
  esi = eax;
/* 8db849: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8db84c: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8db84f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8db852: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db854: jne 0x8db864 */
  if (!zf) goto L_8db864;
L_8db856: /* 8db856: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8db859: imul esi, ebx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebx);
  esi = (uint32_t)r;
  }
/* 8db85c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8db85d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8db85e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8db85f: jmp 0x8db677 */
  goto L_8db677;
L_8db864: /* 8db864: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 8db86b: jmp 0x8db870 */
  goto L_8db870;
L_8db870: /* 8db870: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db873: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db879: /* 8db879: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8db87c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8db87d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8db87e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8db87f: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8db884u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8db884: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8db887: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8db88a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8db88d: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8db88f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8db892: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8db894: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8db895: mov dword ptr [ebp + 0x14], edx */
  W32((uint32_t)(ebp + 0x14u), edx);
/* 8db898: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8db89b: jmp 0x8db870 */
  goto L_8db870;
}

void f_8db864(void) {
  LOAD_REGS();
  goto L_8db864;
L_8db2e1: /* 8db2e1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db2e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db2eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db2ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db2ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db2ee: mov esp, ebp */
  esp = ebp;
/* 8db2f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db2f1: ret 0x14 */
  esp += 24; SPILL(); return;
L_8db67f: /* 8db67f: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 8db685: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db688: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db68e: /* 8db68e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8db691: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8db694: test byte ptr [ecx + 0x7c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x7cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8db698: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db69e: /* 8db69e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8db6a1: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 8db6a4: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db6a7: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8db6aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8db6aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db6ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db6ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db6af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db6b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db6b7: mov esp, ebp */
  esp = ebp;
/* 8db6b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db6ba: ret 0x14 */
  esp += 24; SPILL(); return;
L_8db864: /* 8db864: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 8db86b: jmp 0x8db870 */
  goto L_8db870;
L_8db870: /* 8db870: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db873: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db879: /* 8db879: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8db87c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8db87d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8db87e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8db87f: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8db884u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8db884: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8db887: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8db88a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8db88d: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8db88f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8db892: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8db894: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8db895: mov dword ptr [ebp + 0x14], edx */
  W32((uint32_t)(ebp + 0x14u), edx);
/* 8db898: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8db89b: jmp 0x8db870 */
  goto L_8db870;
}

void f_8db86d(void) {
  LOAD_REGS();
  goto L_8db86d;
L_8db2e1: /* 8db2e1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db2e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db2eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db2ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db2ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db2ee: mov esp, ebp */
  esp = ebp;
/* 8db2f0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db2f1: ret 0x14 */
  esp += 24; SPILL(); return;
L_8db67f: /* 8db67f: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 8db685: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8db688: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db68e: /* 8db68e: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8db691: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* 8db694: test byte ptr [ecx + 0x7c], 0x40 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x7cu))); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8db698: jne 0x8db2e1 */
  if (!zf) goto L_8db2e1;
L_8db69e: /* 8db69e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8db6a1: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 8db6a4: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8db6a7: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8db6aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8db6aa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8db6ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8db6ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8db6af: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8db6b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8db6b7: mov esp, ebp */
  esp = ebp;
/* 8db6b9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8db6ba: ret 0x14 */
  esp += 24; SPILL(); return;
L_8db86d: /* 8db86d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8db870: /* 8db870: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8db873: jge 0x8db67f */
  if ((sf == of)) goto L_8db67f;
L_8db879: /* 8db879: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8db87c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8db87d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8db87e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8db87f: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8db884u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8db884: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8db887: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8db88a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8db88d: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8db88f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8db892: add edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8db894: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8db895: mov dword ptr [ebp + 0x14], edx */
  W32((uint32_t)(ebp + 0x14u), edx);
/* 8db898: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8db89b: jmp 0x8db870 */
  goto L_8db870;
}

void f_8db89d(void) {
  LOAD_REGS();
L_8db89d: /* 8db89d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8db8a0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8db8a5: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8db8a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8db8a9: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8db8ac: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8db8b1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8db8b1(); return;
}

void f_8db8b1(void) {
  LOAD_REGS();
L_8db8b1: /* 8db8b1: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 8db8b7: push 0xa1d4c8 */
  { uint32_t v = 0xa1d4c8u; esp -= 4; W32(esp, v); }
/* 8db8bc: push 0xaed8d8 */
  { uint32_t v = 0xaed8d8u; esp -= 4; W32(esp, v); }
/* 8db8c1: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8db8c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8db8c3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8db8c6: mov ecx, dword ptr [edx + 0xc] */
  ecx = R32((uint32_t)(edx + 0xcu));
/* 8db8c9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8db8cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8db8ce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8db8d0: call dword ptr [0xcfa884] */
  esp -= 4; W32(esp, 0x8db8d6u); SPILL(); f_4e2cde(); if (g_unwind) return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */ RELOAD();
/* 8db8d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8db8d7: push 0xaed8e0 */
  { uint32_t v = 0xaed8e0u; esp -= 4; W32(esp, v); }
/* 8db8dc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8db8deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8db8de: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8db8e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8db8e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8db8e5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8db8eau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8db8ea: guest_badaddr(0x8db8ea); return;
}

void f_8dbaa0(void) {
  LOAD_REGS();
L_8dbaa0: /* 8dbaa0: mov eax, ecx */
  eax = ecx;
/* 8dbaa2: mov dword ptr [eax], 0x9f47f8 */
  W32((uint32_t)(eax), 0x9f47f8u);
/* 8dbaa8: ret  */
  esp += 4; SPILL(); return;
}

void f_8dbac0(void) {
  LOAD_REGS();
L_8dbac0: /* 8dbac0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8dbac3: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8dbac7: mov ecx, dword ptr [eax + ecx*4 + 0xc8] */
  ecx = R32((uint32_t)(eax + ecx*4 + 0xc8u));
/* 8dbace: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8dbad1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dbad3: je 0x8dbb09 */
  if (zf) goto L_8dbb09;
L_8dbad5: /* 8dbad5: mov edx, dword ptr [eax + 0xc0] */
  edx = R32((uint32_t)(eax + 0xc0u));
/* 8dbadb: mov eax, dword ptr [eax + 0xc4] */
  eax = R32((uint32_t)(eax + 0xc4u));
/* 8dbae1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dbae3: mov dword ptr [esp + 4], edx */
  W32((uint32_t)(esp + 0x4u), edx);
/* 8dbae7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8dbae9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dbaea: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* 8dbaee: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8dbaf2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dbaf3: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x8dbaf9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dbaf9: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8dbafb: mov ecx, eax */
  ecx = eax;
/* 8dbafd: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x8dbb03u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dbb03: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dbb06: ret 4 */
  esp += 8; SPILL(); return;
L_8dbb09: /* 8dbb09: xor eax, eax */
  eax = 0;
/* 8dbb0b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dbb0e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8dbb40(void) {
  LOAD_REGS();
L_8dbb40: /* 8dbb40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8dbb41: mov ebp, esp */
  ebp = esp;
/* 8dbb43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8dbb45: push 0x9d85f0 */
  { uint32_t v = 0x9d85f0u; esp -= 4; W32(esp, v); }
/* 8dbb4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8dbb50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dbb51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8dbb58: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8dbb5b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dbb5c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dbb5d: mov esi, ecx */
  esi = ecx;
/* 8dbb5f: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 8dbb65: mov eax, dword ptr [esi + 0xe0] */
  eax = R32((uint32_t)(esi + 0xe0u));
/* 8dbb6b: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8dbb6d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8dbb6f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dbb70: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8dbb73: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dbb74: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8dbb7b: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8dbb7eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dbb7e: mov ecx, esi */
  ecx = esi;
/* 8dbb80: mov dword ptr [esi + 0xe0], 0 */
  W32((uint32_t)(esi + 0xe0u), 0x0u);
/* 8dbb8a: call 0x6c7db0 */
  esp -= 4; W32(esp, 0x8dbb8fu); SPILL(); f_6c7db0(); if (g_unwind) return; RELOAD();
/* 8dbb8f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8dbb92: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dbb93: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dbb94: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8dbb9b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dbb9c: mov esp, ebp */
  esp = ebp;
/* 8dbb9e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dbb9f: ret  */
  esp += 4; SPILL(); return;
}

void f_8dbba0(void) {
  LOAD_REGS();
L_8dbba0: /* 8dbba0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8dbba3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8dbba8: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8dbbab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dbbac: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8dbbaf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8dbbb4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8dbbb4(); return;
}

void f_8dbbb4(void) {
  LOAD_REGS();
L_8dbbb4: /* 8dbbb4: push 0xa1d514 */
  { uint32_t v = 0xa1d514u; esp -= 4; W32(esp, v); }
/* 8dbbb9: push 0xaed8f0 */
  { uint32_t v = 0xaed8f0u; esp -= 4; W32(esp, v); }
/* 8dbbbe: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8dbbc4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8dbbc4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dbbc7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dbbc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dbbcb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8dbbd0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8dbbd0: guest_badaddr(0x8dbbd0); return;
}

void f_8dbc10(void) {
  LOAD_REGS();
L_8dbc10: /* 8dbc10: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8dbc13: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 8dbc19: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8dbc1b: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 8dbc1e: ret  */
  esp += 4; SPILL(); return;
}

void f_8dbc30(void) {
  LOAD_REGS();
L_8dbc30: /* 8dbc30: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8dbc33: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 8dbc39: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8dbc3b: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 8dbc3e: ret  */
  esp += 4; SPILL(); return;
}

void f_8dbc50(void) {
  LOAD_REGS();
L_8dbc50: /* 8dbc50: mov eax, dword ptr [ecx + 0x50] */
  eax = R32((uint32_t)(ecx + 0x50u));
/* 8dbc53: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8dbc56: xor edx, edx */
  edx = 0;
/* 8dbc58: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8dbc5a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dbc5b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dbc5c: je 0x8dbd36 */
  if (zf) goto L_8dbd36;
L_8dbc62: /* 8dbc62: mov byte ptr [esp + 8], dl */
  W8((uint32_t)(esp + 0x8u), (edx & 0xffu));
/* 8dbc66: mov byte ptr [esp + 9], dl */
  W8((uint32_t)(esp + 0x9u), (edx & 0xffu));
/* 8dbc6a: mov byte ptr [esp + 0xa], dl */
  W8((uint32_t)(esp + 0xau), (edx & 0xffu));
/* 8dbc6e: mov byte ptr [esp + 0xb], dl */
  W8((uint32_t)(esp + 0xbu), (edx & 0xffu));
/* 8dbc72: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8dbc76: mov dword ptr [ecx + 0x60], esi */
  W32((uint32_t)(ecx + 0x60u), esi);
/* 8dbc79: mov ebx, dword ptr [eax + 0x28] */
  ebx = R32((uint32_t)(eax + 0x28u));
/* 8dbc7c: cmp dword ptr [ecx + 0xb0], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xb0u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dbc82: mov dword ptr [esp + 0xc], edx */
  W32((uint32_t)(esp + 0xcu), edx);
/* 8dbc86: jle 0x8dbd4f */
  if ((zf || sf != of)) goto L_8dbd4f;
L_8dbc8c: /* 8dbc8c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8dbc8d: mov ebp, dword ptr [ecx + 0xac] */
  ebp = R32((uint32_t)(ecx + 0xacu));
/* 8dbc93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dbc94: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* 8dbc98: add ebp, 0x1c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8dbc9b: jmp 0x8dbca0 */
  goto L_8dbca0;
L_8dbca0: /* 8dbca0: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 8dbca3: xor edi, edi */
  edi = 0;
/* 8dbca5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8dbca7: jle 0x8dbd09 */
  if ((zf || sf != of)) goto L_8dbd09;
L_8dbca9: /* 8dbca9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8dbcb0: /* 8dbcb0: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 8dbcb3: movzx edx, byte ptr [eax + edi] */
  edx = (uint32_t)(R8((uint32_t)(eax + edi)));
/* 8dbcb7: mov al, byte ptr [ebx + edx*4 + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + edx*4 + 0x2u))) & 0xffu);
/* 8dbcbb: lea esi, [ebx + edx*4] */
  esi = (uint32_t)(ebx + edx*4);
/* 8dbcbe: mov dl, byte ptr [ecx + 0x62] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x62u))) & 0xffu);
/* 8dbcc1: cmp dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 8dbcc3: jb 0x8dbcc7 */
  if (cf) goto L_8dbcc7;
L_8dbcc5: /* 8dbcc5: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_8dbcc7: /* 8dbcc7: mov dl, byte ptr [ecx + 0x61] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x61u))) & 0xffu);
/* 8dbcca: mov byte ptr [ecx + 0x62], al */
  W8((uint32_t)(ecx + 0x62u), (eax & 0xffu));
/* 8dbccd: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 8dbcd0: cmp dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 8dbcd2: jb 0x8dbcd6 */
  if (cf) goto L_8dbcd6;
L_8dbcd4: /* 8dbcd4: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_8dbcd6: /* 8dbcd6: mov dl, byte ptr [ecx + 0x60] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x60u))) & 0xffu);
/* 8dbcd9: mov byte ptr [ecx + 0x61], al */
  W8((uint32_t)(ecx + 0x61u), (eax & 0xffu));
/* 8dbcdc: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 8dbcde: cmp dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 8dbce0: jb 0x8dbce4 */
  if (cf) goto L_8dbce4;
L_8dbce2: /* 8dbce2: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_8dbce4: /* 8dbce4: mov dl, byte ptr [ecx + 0x63] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x63u))) & 0xffu);
/* 8dbce7: mov byte ptr [ecx + 0x60], al */
  W8((uint32_t)(ecx + 0x60u), (eax & 0xffu));
/* 8dbcea: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 8dbced: cmp dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 8dbcef: jb 0x8dbcf3 */
  if (cf) goto L_8dbcf3;
L_8dbcf1: /* 8dbcf1: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_8dbcf3: /* 8dbcf3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8dbcf7: mov byte ptr [ecx + 0x63], al */
  W8((uint32_t)(ecx + 0x63u), (eax & 0xffu));
/* 8dbcfa: mov eax, dword ptr [ecx + 0xac] */
  eax = R32((uint32_t)(ecx + 0xacu));
/* 8dbd00: mov esi, dword ptr [eax + edx + 0x20] */
  esi = R32((uint32_t)(eax + edx + 0x20u));
/* 8dbd04: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8dbd05: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dbd07: jl 0x8dbcb0 */
  if ((sf != of)) goto L_8dbcb0;
L_8dbd09: /* 8dbd09: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8dbd0d: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 8dbd11: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 8dbd17: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8dbd18: add edi, 0x28 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8dbd1b: add ebp, 0x28 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8dbd1e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dbd20: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 8dbd24: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 8dbd28: jl 0x8dbca0 */
  if ((sf != of)) goto L_8dbca0;
L_8dbd2e: /* 8dbd2e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dbd2f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dbd30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dbd31: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dbd32: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dbd35: ret  */
  esp += 4; SPILL(); return;
L_8dbd36: /* 8dbd36: mov al, 0xff */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
/* 8dbd38: mov byte ptr [esp + 8], al */
  W8((uint32_t)(esp + 0x8u), (eax & 0xffu));
/* 8dbd3c: mov byte ptr [esp + 9], al */
  W8((uint32_t)(esp + 0x9u), (eax & 0xffu));
/* 8dbd40: mov byte ptr [esp + 0xa], al */
  W8((uint32_t)(esp + 0xau), (eax & 0xffu));
/* 8dbd44: mov byte ptr [esp + 0xb], al */
  W8((uint32_t)(esp + 0xbu), (eax & 0xffu));
/* 8dbd48: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8dbd4c: mov dword ptr [ecx + 0x60], eax */
  W32((uint32_t)(ecx + 0x60u), eax);
L_8dbd4f: /* 8dbd4f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dbd50: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dbd51: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dbd54: ret  */
  esp += 4; SPILL(); return;
}

void f_8dbc9d(void) {
  LOAD_REGS();
L_8dbc9d: /* 8dbc9d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8dbca0: /* 8dbca0: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 8dbca3: xor edi, edi */
  edi = 0;
/* 8dbca5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8dbca7: jle 0x8dbd09 */
  if ((zf || sf != of)) goto L_8dbd09;
L_8dbca9: /* 8dbca9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8dbcb0: /* 8dbcb0: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 8dbcb3: movzx edx, byte ptr [eax + edi] */
  edx = (uint32_t)(R8((uint32_t)(eax + edi)));
/* 8dbcb7: mov al, byte ptr [ebx + edx*4 + 2] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + edx*4 + 0x2u))) & 0xffu);
/* 8dbcbb: lea esi, [ebx + edx*4] */
  esi = (uint32_t)(ebx + edx*4);
/* 8dbcbe: mov dl, byte ptr [ecx + 0x62] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x62u))) & 0xffu);
/* 8dbcc1: cmp dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 8dbcc3: jb 0x8dbcc7 */
  if (cf) goto L_8dbcc7;
L_8dbcc5: /* 8dbcc5: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_8dbcc7: /* 8dbcc7: mov dl, byte ptr [ecx + 0x61] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x61u))) & 0xffu);
/* 8dbcca: mov byte ptr [ecx + 0x62], al */
  W8((uint32_t)(ecx + 0x62u), (eax & 0xffu));
/* 8dbccd: mov al, byte ptr [esi + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* 8dbcd0: cmp dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 8dbcd2: jb 0x8dbcd6 */
  if (cf) goto L_8dbcd6;
L_8dbcd4: /* 8dbcd4: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_8dbcd6: /* 8dbcd6: mov dl, byte ptr [ecx + 0x60] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x60u))) & 0xffu);
/* 8dbcd9: mov byte ptr [ecx + 0x61], al */
  W8((uint32_t)(ecx + 0x61u), (eax & 0xffu));
/* 8dbcdc: mov al, byte ptr [esi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* 8dbcde: cmp dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 8dbce0: jb 0x8dbce4 */
  if (cf) goto L_8dbce4;
L_8dbce2: /* 8dbce2: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_8dbce4: /* 8dbce4: mov dl, byte ptr [ecx + 0x63] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x63u))) & 0xffu);
/* 8dbce7: mov byte ptr [ecx + 0x60], al */
  W8((uint32_t)(ecx + 0x60u), (eax & 0xffu));
/* 8dbcea: mov al, byte ptr [esi + 3] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3u))) & 0xffu);
/* 8dbced: cmp dl, al */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  cf = (a) < (b);
  }
/* 8dbcef: jb 0x8dbcf3 */
  if (cf) goto L_8dbcf3;
L_8dbcf1: /* 8dbcf1: mov al, dl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((edx & 0xffu)) & 0xffu);
L_8dbcf3: /* 8dbcf3: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8dbcf7: mov byte ptr [ecx + 0x63], al */
  W8((uint32_t)(ecx + 0x63u), (eax & 0xffu));
/* 8dbcfa: mov eax, dword ptr [ecx + 0xac] */
  eax = R32((uint32_t)(ecx + 0xacu));
/* 8dbd00: mov esi, dword ptr [eax + edx + 0x20] */
  esi = R32((uint32_t)(eax + edx + 0x20u));
/* 8dbd04: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8dbd05: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dbd07: jl 0x8dbcb0 */
  if ((sf != of)) goto L_8dbcb0;
L_8dbd09: /* 8dbd09: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8dbd0d: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 8dbd11: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* 8dbd17: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8dbd18: add edi, 0x28 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8dbd1b: add ebp, 0x28 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8dbd1e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dbd20: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 8dbd24: mov dword ptr [esp + 0x10], edi */
  W32((uint32_t)(esp + 0x10u), edi);
/* 8dbd28: jl 0x8dbca0 */
  if ((sf != of)) goto L_8dbca0;
L_8dbd2e: /* 8dbd2e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dbd2f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dbd30: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dbd31: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dbd32: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dbd35: ret  */
  esp += 4; SPILL(); return;
}

void f_8dbdb0(void) {
  LOAD_REGS();
L_8dbdb0: /* 8dbdb0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8dbdb1: mov ebp, esp */
  ebp = esp;
/* 8dbdb3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8dbdb5: push 0x9d8600 */
  { uint32_t v = 0x9d8600u; esp -= 4; W32(esp, v); }
/* 8dbdba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8dbdc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dbdc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8dbdc8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8dbdcb: test byte ptr [ebp + 8], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x8u))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8dbdcf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dbdd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dbdd1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dbdd2: mov edi, ecx */
  edi = ecx;
/* 8dbdd4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8dbdd7: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 8dbdda: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8dbde1: je 0x8dbe49 */
  if (zf) goto L_8dbe49;
L_8dbde3: /* 8dbde3: xor esi, esi */
  esi = 0;
L_8dbde5: /* 8dbde5: cmp esi, dword ptr [edi + 0xb0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0xb0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dbdeb: jge 0x8dbe49 */
  if ((sf == of)) goto L_8dbe49;
L_8dbded: /* 8dbded: mov ecx, dword ptr [edi + 0xac] */
  ecx = R32((uint32_t)(edi + 0xacu));
/* 8dbdf3: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 8dbdf6: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* 8dbdf9: call 0x6c7eff */
  esp -= 4; W32(esp, 0x8dbdfeu); SPILL(); f_6c7eff(); if (g_unwind) return; RELOAD();
/* 8dbdfe: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8dbdff: jmp 0x8dbde5 */
  goto L_8dbde5;
L_8dbe49: /* 8dbe49: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8dbe4c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dbe4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dbe4e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8dbe55: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dbe56: mov esp, ebp */
  esp = ebp;
/* 8dbe58: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dbe59: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8dbe01(void) {
  LOAD_REGS();
L_8dbe01: /* 8dbe01: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8dbe04: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8dbe09: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8dbe0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dbe0d: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8dbe10: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8dbe15u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8dbe15(); return;
}

void f_8dbe15(void) {
  LOAD_REGS();
L_8dbe15: /* 8dbe15: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 8dbe1b: push 0xa1d540 */
  { uint32_t v = 0xa1d540u; esp -= 4; W32(esp, v); }
/* 8dbe20: push 0xaed648 */
  { uint32_t v = 0xaed648u; esp -= 4; W32(esp, v); }
/* 8dbe25: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8dbe27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dbe27: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8dbe2a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dbe2d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dbe2f: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8dbe35u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8dbe35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dbe36: push 0xaed650 */
  { uint32_t v = 0xaed650u; esp -= 4; W32(esp, v); }
/* 8dbe3b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8dbe3du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dbe3d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dbe40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dbe42: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dbe44: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8dbe49u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8dbe49: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8dbe4c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dbe4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dbe4e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8dbe55: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dbe56: mov esp, ebp */
  esp = ebp;
/* 8dbe58: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dbe59: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8dbe90(void) {
  LOAD_REGS();
L_8dbe90: /* 8dbe90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dbe92: je 0x8dbec2 */
  if (zf) goto L_8dbec2;
L_8dbe94: /* 8dbe94: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8dbe99: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8dbe9b: push 0xaed7c8 */
  { uint32_t v = 0xaed7c8u; esp -= 4; W32(esp, v); }
/* 8dbea0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dbea1: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8dbea7u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8dbea7: push 0x4d7 */
  { uint32_t v = 0x4d7u; esp -= 4; W32(esp, v); }
/* 8dbeac: push 0xaed828 */
  { uint32_t v = 0xaed828u; esp -= 4; W32(esp, v); }
/* 8dbeb1: push 0xaed834 */
  { uint32_t v = 0xaed834u; esp -= 4; W32(esp, v); }
/* 8dbeb6: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8dbebcu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8dbebc: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dbebf: xor eax, eax */
  eax = 0;
/* 8dbec1: ret  */
  esp += 4; SPILL(); return;
L_8dbec2: /* 8dbec2: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 8dbec8: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8dbeca: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8dbecc: mov edx, edi */
  edx = edi;
/* 8dbece: imul edx, esi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(esi);
  edx = (uint32_t)r;
  }
/* 8dbed1: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 8dbed6: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8dbed9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dbeda: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8dbedcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dbedc: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 8dbee0: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8dbee4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dbee5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dbee6: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8dbee8: mov edx, eax */
  edx = eax;
/* 8dbeea: mov eax, esi */
  eax = esi;
/* 8dbeec: call 0x8da430 */
  esp -= 4; W32(esp, 0x8dbef1u); SPILL(); f_8da430(); if (g_unwind) return; RELOAD();
/* 8dbef1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dbef4: xor eax, eax */
  eax = 0;
/* 8dbef6: ret  */
  esp += 4; SPILL(); return;
}

void f_8dbf20(void) {
  LOAD_REGS();
L_8dbf20: /* 8dbf20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8dbf21: mov ebp, dword ptr [esp + 8] */
  ebp = R32((uint32_t)(esp + 0x8u));
/* 8dbf25: mov eax, ebp */
  eax = ebp;
/* 8dbf27: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8dbf28: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8dbf2b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dbf2d: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8dbf30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dbf31: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 8dbf34: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dbf37: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dbf38: mov edi, eax */
  edi = eax;
/* 8dbf3a: jge 0x8dbf41 */
  if ((sf == of)) goto L_8dbf41;
L_8dbf3c: /* 8dbf3c: mov edi, 1 */
  edi = 0x1u;
L_8dbf41: /* 8dbf41: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8dbf45: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8dbf46: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8dbf49: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dbf4b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8dbf4e: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dbf51: mov esi, eax */
  esi = eax;
/* 8dbf53: jge 0x8dbf5a */
  if ((sf == of)) goto L_8dbf5a;
L_8dbf55: /* 8dbf55: mov esi, 1 */
  esi = 0x1u;
L_8dbf5a: /* 8dbf5a: imul esi, edi */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(edi);
  esi = (uint32_t)r;
  }
/* 8dbf5d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dbf5f: mov edx, esi */
  edx = esi;
/* 8dbf61: mov eax, ebx */
  eax = ebx;
/* 8dbf63: je 0x8dbf85 */
  if (zf) goto L_8dbf85;
L_8dbf65: /* 8dbf65: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8dbf66: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8dbf69: jne 0x8dbfed */
  if (!zf) goto L_8dbfed;
L_8dbf6f: /* 8dbf6f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8dbf71: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 8dbf74: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dbf77: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8dbf79: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dbf7c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dbf7e: jne 0x8dbf65 */
  if (!zf) goto L_8dbf65;
L_8dbf80: /* 8dbf80: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8dbf83: jne 0x8dbfed */
  if (!zf) goto L_8dbfed;
L_8dbf85: /* 8dbf85: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 8dbf89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dbf8b: jne 0x8dbfed */
  if (!zf) goto L_8dbfed;
L_8dbf8d: /* 8dbf8d: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 8dbf92: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8dbf94: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8dbf96: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 8dbf9b: lea eax, [esi*8] */
  eax = (uint32_t)(esi*8);
/* 8dbfa2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dbfa3: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8dbfa5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dbfa5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8dbfa7: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 8dbfab: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8dbfad: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 8dbfb0: jle 0x8dbfe4 */
  if ((zf || sf != of)) goto L_8dbfe4;
L_8dbfb2: /* 8dbfb2: mov dx, word ptr [ecx + 2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x2u))) & 0xffffu);
/* 8dbfb6: cmp dx, word ptr [ecx] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ecx)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8dbfb9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8dbfbb: jbe 0x8dbfcf */
  if ((cf | zf)) goto L_8dbfcf;
L_8dbfbd: /* 8dbfbd: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8dbfc0: ror edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t cc = c % 32;
  uint32_t r = (uint32_t)(cc ? (((uint32_t)a >> cc) | ((uint32_t)a << (32 - cc))) : a);
  edx = r;
  }
/* 8dbfc3: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8dbfc5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8dbfc7: xor edx, 0x55555555 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x55555555u);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 8dbfcd: jmp 0x8dbfd6 */
  goto L_8dbfd6;
L_8dbfcf: /* 8dbfcf: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8dbfd2: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8dbfd4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
L_8dbfd6: /* 8dbfd6: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dbfd9: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8dbfdb: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dbfde: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8dbfe1: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 8dbfe2: jne 0x8dbfb2 */
  if (!zf) goto L_8dbfb2;
L_8dbfe4: /* 8dbfe4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dbfe5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dbfe6: mov eax, 1 */
  eax = 0x1u;
/* 8dbfeb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dbfec: ret  */
  esp += 4; SPILL(); return;
L_8dbfed: /* 8dbfed: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8dbff1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dbff3: je 0x8dc013 */
  if (zf) goto L_8dc013;
L_8dbff5: /* 8dbff5: push 0x514 */
  { uint32_t v = 0x514u; esp -= 4; W32(esp, v); }
/* 8dbffa: push 0xaed838 */
  { uint32_t v = 0xaed838u; esp -= 4; W32(esp, v); }
/* 8dbfff: push 0xaed844 */
  { uint32_t v = 0xaed844u; esp -= 4; W32(esp, v); }
/* 8dc004: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8dc00au); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8dc00a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc00d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dc00e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dc00f: xor eax, eax */
  eax = 0;
/* 8dc011: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dc012: ret  */
  esp += 4; SPILL(); return;
L_8dc013: /* 8dc013: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 8dc018: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8dc01a: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8dc01e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8dc020: mov eax, ebp */
  eax = ebp;
/* 8dc022: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 8dc025: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 8dc02a: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8dc02d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dc02e: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8dc030u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dc030: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 8dc034: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dc035: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8dc037: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8dc038: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dc039: mov eax, esi */
  eax = esi;
/* 8dc03b: call 0x8da770 */
  esp -= 4; W32(esp, 0x8dc040u); SPILL(); f_8da770(); if (g_unwind) return; RELOAD();
/* 8dc040: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc043: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dc044: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dc045: xor eax, eax */
  eax = 0;
/* 8dc047: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dc048: ret  */
  esp += 4; SPILL(); return;
}

void f_8dc0a0(void) {
  LOAD_REGS();
L_8dc0a0: /* 8dc0a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8dc0a1: mov ebp, dword ptr [esp + 8] */
  ebp = R32((uint32_t)(esp + 0x8u));
/* 8dc0a5: mov eax, ebp */
  eax = ebp;
/* 8dc0a7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8dc0a8: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8dc0ab: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dc0ad: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8dc0b0: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dc0b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dc0b4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dc0b5: mov edi, 0xffff */
  edi = 0xffffu;
/* 8dc0ba: mov ecx, eax */
  ecx = eax;
/* 8dc0bc: jge 0x8dc0c3 */
  if ((sf == of)) goto L_8dc0c3;
L_8dc0be: /* 8dc0be: mov ecx, 1 */
  ecx = 0x1u;
L_8dc0c3: /* 8dc0c3: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8dc0c7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8dc0c8: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8dc0cb: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dc0cd: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8dc0d0: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dc0d3: mov esi, eax */
  esi = eax;
/* 8dc0d5: jge 0x8dc0dc */
  if ((sf == of)) goto L_8dc0dc;
L_8dc0d7: /* 8dc0d7: mov esi, 1 */
  esi = 0x1u;
L_8dc0dc: /* 8dc0dc: imul esi, ecx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ecx);
  esi = (uint32_t)r;
  }
/* 8dc0df: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dc0e1: mov ecx, esi */
  ecx = esi;
/* 8dc0e3: mov eax, ebx */
  eax = ebx;
/* 8dc0e5: je 0x8dc100 */
  if (zf) goto L_8dc100;
L_8dc0e7: /* 8dc0e7: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8dc0e8: cmp di, 0xffff */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8dc0ed: jne 0x8dc16b */
  if (!zf) goto L_8dc16b;
L_8dc0ef: /* 8dc0ef: mov di, word ptr [eax] */
  edi = (edi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 8dc0f2: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dc0f5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dc0f7: jne 0x8dc0e7 */
  if (!zf) goto L_8dc0e7;
L_8dc0f9: /* 8dc0f9: cmp di, 0xffff */
  { uint16_t a = (uint16_t)((edi & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8dc0fe: jne 0x8dc16b */
  if (!zf) goto L_8dc16b;
L_8dc100: /* 8dc100: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 8dc104: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dc106: jne 0x8dc16b */
  if (!zf) goto L_8dc16b;
L_8dc108: /* 8dc108: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 8dc10d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8dc10f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8dc111: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 8dc116: lea eax, [esi*8] */
  eax = (uint32_t)(esi*8);
/* 8dc11d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dc11e: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8dc120u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dc120: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8dc122: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 8dc126: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8dc128: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 8dc12b: jle 0x8dc162 */
  if ((zf || sf != of)) goto L_8dc162;
L_8dc12d: /* 8dc12d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8dc130: /* 8dc130: mov dx, word ptr [ecx + 2] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x2u))) & 0xffffu);
/* 8dc134: cmp dx, word ptr [ecx] */
  { uint16_t a = (uint16_t)((edx & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ecx)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8dc137: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8dc139: jbe 0x8dc14d */
  if ((cf | zf)) goto L_8dc14d;
L_8dc13b: /* 8dc13b: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8dc13e: ror edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t cc = c % 32;
  uint32_t r = (uint32_t)(cc ? (((uint32_t)a >> cc) | ((uint32_t)a << (32 - cc))) : a);
  edx = r;
  }
/* 8dc141: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8dc143: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8dc145: xor edx, 0x55555555 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x55555555u);
  uint32_t r = (uint32_t)(a ^ b);
  edx = r;
  }
/* 8dc14b: jmp 0x8dc154 */
  goto L_8dc154;
L_8dc14d: /* 8dc14d: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8dc150: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8dc152: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
L_8dc154: /* 8dc154: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dc157: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8dc159: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dc15c: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8dc15f: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 8dc160: jne 0x8dc130 */
  if (!zf) goto L_8dc130;
L_8dc162: /* 8dc162: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dc163: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dc164: mov eax, 1 */
  eax = 0x1u;
/* 8dc169: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dc16a: ret  */
  esp += 4; SPILL(); return;
L_8dc16b: /* 8dc16b: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8dc16f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dc171: je 0x8dc191 */
  if (zf) goto L_8dc191;
L_8dc173: /* 8dc173: push 0x572 */
  { uint32_t v = 0x572u; esp -= 4; W32(esp, v); }
/* 8dc178: push 0xaed848 */
  { uint32_t v = 0xaed848u; esp -= 4; W32(esp, v); }
/* 8dc17d: push 0xaed854 */
  { uint32_t v = 0xaed854u; esp -= 4; W32(esp, v); }
/* 8dc182: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8dc188u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8dc188: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc18b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dc18c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dc18d: xor eax, eax */
  eax = 0;
/* 8dc18f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dc190: ret  */
  esp += 4; SPILL(); return;
L_8dc191: /* 8dc191: mov eax, dword ptr [0xcfa1a4] */
  eax = R32((uint32_t)(0xcfa1a4u));
/* 8dc196: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8dc198: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8dc19c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8dc19e: mov eax, ebp */
  eax = ebp;
/* 8dc1a0: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 8dc1a3: push 0xac38c4 */
  { uint32_t v = 0xac38c4u; esp -= 4; W32(esp, v); }
/* 8dc1a8: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8dc1ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dc1ac: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8dc1aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dc1ae: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 8dc1b2: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8dc1b4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8dc1b5: mov ecx, eax */
  ecx = eax;
/* 8dc1b7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dc1b8: mov eax, esi */
  eax = esi;
/* 8dc1ba: call 0x8daae0 */
  esp -= 4; W32(esp, 0x8dc1bfu); SPILL(); f_8daae0(); if (g_unwind) return; RELOAD();
/* 8dc1bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc1c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dc1c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dc1c4: xor eax, eax */
  eax = 0;
/* 8dc1c6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dc1c7: ret  */
  esp += 4; SPILL(); return;
}

void f_8dc220(void) {
  LOAD_REGS();
L_8dc220: /* 8dc220: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8dc224: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dc225: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8dc226: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dc227: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dc228: mov esi, ecx */
  esi = ecx;
/* 8dc22a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8dc22d: mov dword ptr [esi], 0x9f7cc8 */
  W32((uint32_t)(esi), 0x9f7cc8u);
/* 8dc233: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 8dc239: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 8dc23c: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 8dc23f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dc241: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 8dc246: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dc247: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dc248: call 0x99c910 */
  esp -= 4; W32(esp, 0x8dc24du); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 8dc24d: add eax, 0xe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 8dc252: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 8dc255: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 8dc258: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 8dc25b: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 8dc261: adc ebx, 0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 8dc264: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8dc267: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dc268: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 8dc26b: mov dword ptr [esi + 8], edx */
  W32((uint32_t)(esi + 0x8u), edx);
/* 8dc26e: mov dword ptr [esi + 0x10], 1 */
  W32((uint32_t)(esi + 0x10u), 0x1u);
/* 8dc275: mov eax, esi */
  eax = esi;
/* 8dc277: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dc278: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dc279: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dc27a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8dc2a0(void) {
  LOAD_REGS();
L_8dc2a0: /* 8dc2a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dc2a1: mov esi, ecx */
  esi = ecx;
/* 8dc2a3: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8dc2a7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dc2a9: mov dword ptr [esi], 0x9f7d28 */
  W32((uint32_t)(esi), 0x9f7d28u);
/* 8dc2af: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 8dc2b2: je 0x8dc2bc */
  if (zf) goto L_8dc2bc;
L_8dc2b4: /* 8dc2b4: call dword ptr [0xcfa2b4] */
  esp -= 4; W32(esp, 0x8dc2bau); SPILL(); f_4e39ae(); if (g_unwind) return; /* Core!?GetIndex@UObject@@QBEKXZ */ RELOAD();
/* 8dc2ba: jmp 0x8dc2be */
  goto L_8dc2be;
L_8dc2bc: /* 8dc2bc: xor eax, eax */
  eax = 0;
L_8dc2be: /* 8dc2be: xor ecx, ecx */
  ecx = 0;
/* 8dc2c0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dc2c1: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 8dc2c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dc2c7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dc2c8: call 0x99c910 */
  esp -= 4; W32(esp, 0x8dc2cdu); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 8dc2cd: add eax, 0xe0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe0u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 8dc2d2: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 8dc2d5: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 8dc2d8: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 8dc2db: mov dword ptr [esi + 0x10], 1 */
  W32((uint32_t)(esi + 0x10u), 0x1u);
/* 8dc2e2: mov eax, esi */
  eax = esi;
/* 8dc2e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dc2e5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8dc310(void) {
  LOAD_REGS();
L_8dc310: /* 8dc310: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8dc313: mov ecx, dword ptr [eax + 0xc8] */
  ecx = R32((uint32_t)(eax + 0xc8u));
/* 8dc319: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8dc31c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dc31e: je 0x8dc337 */
  if (zf) goto L_8dc337;
L_8dc320: /* 8dc320: mov eax, ecx */
  eax = ecx;
/* 8dc322: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dc323: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 8dc327: call 0x6c2f36 */
  esp -= 4; W32(esp, 0x8dc32cu); SPILL(); f_6c2f36(); if (g_unwind) return; RELOAD();
/* 8dc32c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8dc32e: mov ecx, eax */
  ecx = eax;
/* 8dc330: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x8dc333u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dc333: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc336: ret  */
  esp += 4; SPILL(); return;
L_8dc337: /* 8dc337: mov eax, 4 */
  eax = 0x4u;
/* 8dc33c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc33f: ret  */
  esp += 4; SPILL(); return;
}

void f_8dc350(void) {
  LOAD_REGS();
L_8dc350: /* 8dc350: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8dc353: mov ecx, dword ptr [eax + 0xc8] */
  ecx = R32((uint32_t)(eax + 0xc8u));
/* 8dc359: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8dc35c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dc35e: je 0x8dc377 */
  if (zf) goto L_8dc377;
L_8dc360: /* 8dc360: mov eax, ecx */
  eax = ecx;
/* 8dc362: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dc363: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 8dc367: call 0x6c2f36 */
  esp -= 4; W32(esp, 0x8dc36cu); SPILL(); f_6c2f36(); if (g_unwind) return; RELOAD();
/* 8dc36c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8dc36e: mov ecx, eax */
  ecx = eax;
/* 8dc370: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x8dc373u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dc373: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc376: ret  */
  esp += 4; SPILL(); return;
L_8dc377: /* 8dc377: mov eax, 4 */
  eax = 0x4u;
/* 8dc37c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc37f: ret  */
  esp += 4; SPILL(); return;
}

void f_8dc390(void) {
  LOAD_REGS();
L_8dc390: /* 8dc390: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8dc393: mov ecx, dword ptr [eax + 0xc8] */
  ecx = R32((uint32_t)(eax + 0xc8u));
/* 8dc399: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8dc39c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dc39e: je 0x8dc3b7 */
  if (zf) goto L_8dc3b7;
L_8dc3a0: /* 8dc3a0: mov eax, ecx */
  eax = ecx;
/* 8dc3a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dc3a3: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 8dc3a7: call 0x6c2f36 */
  esp -= 4; W32(esp, 0x8dc3acu); SPILL(); f_6c2f36(); if (g_unwind) return; RELOAD();
/* 8dc3ac: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8dc3ae: mov ecx, eax */
  ecx = eax;
/* 8dc3b0: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x8dc3b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dc3b3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc3b6: ret  */
  esp += 4; SPILL(); return;
L_8dc3b7: /* 8dc3b7: mov eax, 1 */
  eax = 0x1u;
/* 8dc3bc: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc3bf: ret  */
  esp += 4; SPILL(); return;
}

void f_8dc3d0(void) {
  LOAD_REGS();
L_8dc3d0: /* 8dc3d0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8dc3d3: mov ecx, dword ptr [eax + 0xc8] */
  ecx = R32((uint32_t)(eax + 0xc8u));
/* 8dc3d9: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8dc3dc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dc3de: je 0x8dc3f7 */
  if (zf) goto L_8dc3f7;
L_8dc3e0: /* 8dc3e0: mov eax, ecx */
  eax = ecx;
/* 8dc3e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dc3e3: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 8dc3e7: call 0x6c2f36 */
  esp -= 4; W32(esp, 0x8dc3ecu); SPILL(); f_6c2f36(); if (g_unwind) return; RELOAD();
/* 8dc3ec: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8dc3ee: mov ecx, eax */
  ecx = eax;
/* 8dc3f0: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x8dc3f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dc3f3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc3f6: ret  */
  esp += 4; SPILL(); return;
L_8dc3f7: /* 8dc3f7: xor eax, eax */
  eax = 0;
/* 8dc3f9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc3fc: ret  */
  esp += 4; SPILL(); return;
}

void f_8dc410(void) {
  LOAD_REGS();
L_8dc410: /* 8dc410: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8dc413: mov ecx, dword ptr [eax + 0xc8] */
  ecx = R32((uint32_t)(eax + 0xc8u));
/* 8dc419: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8dc41c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dc41e: je 0x8dc437 */
  if (zf) goto L_8dc437;
L_8dc420: /* 8dc420: mov eax, ecx */
  eax = ecx;
/* 8dc422: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dc423: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 8dc427: call 0x6c2f36 */
  esp -= 4; W32(esp, 0x8dc42cu); SPILL(); f_6c2f36(); if (g_unwind) return; RELOAD();
/* 8dc42c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8dc42e: mov ecx, eax */
  ecx = eax;
/* 8dc430: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x8dc433u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dc433: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc436: ret  */
  esp += 4; SPILL(); return;
L_8dc437: /* 8dc437: mov eax, 5 */
  eax = 0x5u;
/* 8dc43c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc43f: ret  */
  esp += 4; SPILL(); return;
}

void f_8dc450(void) {
  LOAD_REGS();
L_8dc450: /* 8dc450: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8dc453: mov ecx, dword ptr [eax + 0xc8] */
  ecx = R32((uint32_t)(eax + 0xc8u));
/* 8dc459: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8dc45c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dc45e: je 0x8dc477 */
  if (zf) goto L_8dc477;
L_8dc460: /* 8dc460: mov eax, ecx */
  eax = ecx;
/* 8dc462: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dc463: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 8dc467: call 0x6c2f36 */
  esp -= 4; W32(esp, 0x8dc46cu); SPILL(); f_6c2f36(); if (g_unwind) return; RELOAD();
/* 8dc46c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8dc46e: mov ecx, eax */
  ecx = eax;
/* 8dc470: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0x8dc473u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dc473: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc476: ret  */
  esp += 4; SPILL(); return;
L_8dc477: /* 8dc477: xor eax, eax */
  eax = 0;
/* 8dc479: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc47c: ret  */
  esp += 4; SPILL(); return;
}

void f_8dc490(void) {
  LOAD_REGS();
L_8dc490: /* 8dc490: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8dc493: mov ecx, dword ptr [eax + 0xc8] */
  ecx = R32((uint32_t)(eax + 0xc8u));
/* 8dc499: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8dc49c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dc49e: je 0x8dc4b7 */
  if (zf) goto L_8dc4b7;
L_8dc4a0: /* 8dc4a0: mov eax, ecx */
  eax = ecx;
/* 8dc4a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dc4a3: lea ecx, [esp + 4] */
  ecx = (uint32_t)(esp + 0x4u);
/* 8dc4a7: call 0x6c2f36 */
  esp -= 4; W32(esp, 0x8dc4acu); SPILL(); f_6c2f36(); if (g_unwind) return; RELOAD();
/* 8dc4ac: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8dc4ae: mov ecx, eax */
  ecx = eax;
/* 8dc4b0: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x8dc4b3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dc4b3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc4b6: ret  */
  esp += 4; SPILL(); return;
L_8dc4b7: /* 8dc4b7: xor eax, eax */
  eax = 0;
/* 8dc4b9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc4bc: ret  */
  esp += 4; SPILL(); return;
}

void f_8dc4d0(void) {
  LOAD_REGS();
L_8dc4d0: /* 8dc4d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dc4d1: mov esi, ecx */
  esi = ecx;
/* 8dc4d3: mov dword ptr [esi], 0xcea3f8 */
  W32((uint32_t)(esi), 0xcea3f8u);
/* 8dc4d9: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* 8dc4e0: call 0x6c38b4 */
  esp -= 4; W32(esp, 0x8dc4e5u); SPILL(); f_6c38b4(); if (g_unwind) return; RELOAD();
/* 8dc4e5: mov eax, esi */
  eax = esi;
/* 8dc4e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dc4e8: ret  */
  esp += 4; SPILL(); return;
}

void f_8dc500(void) {
  LOAD_REGS();
L_8dc500: /* 8dc500: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8dc501: mov ebp, esp */
  ebp = esp;
/* 8dc503: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8dc505: push 0x9d8610 */
  { uint32_t v = 0x9d8610u; esp -= 4; W32(esp, v); }
/* 8dc50a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8dc510: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dc511: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8dc518: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8dc51b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dc51c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8dc51f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dc520: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8dc523: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dc524: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8dc527: lea eax, [esi + 0x10] */
  eax = (uint32_t)(esi + 0x10u);
/* 8dc52a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dc52b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dc52c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8dc533: call 0x6c92e1 */
  esp -= 4; W32(esp, 0x8dc538u); SPILL(); f_6c92e1(); if (g_unwind) return; RELOAD();
/* 8dc538: mov edi, dword ptr [0xcfa280] */
  edi = R32((uint32_t)(0xcfa280u));
/* 8dc53e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc541: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8dc544: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dc545: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dc546: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8dc548u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dc548: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc54b: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 8dc54e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dc54f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dc550: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8dc552u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dc552: mov edi, dword ptr [0xcfa1b8] */
  edi = R32((uint32_t)(0xcfa1b8u));
/* 8dc558: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc55b: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 8dc55e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dc55f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dc560: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8dc562u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dc562: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc565: add esi, 0xd */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8dc568: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dc569: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dc56a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8dc56cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dc56c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8dc56f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc572: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dc573: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dc574: mov eax, ebx */
  eax = ebx;
/* 8dc576: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8dc57d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dc57e: mov esp, ebp */
  esp = ebp;
/* 8dc580: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dc581: ret  */
  esp += 4; SPILL(); return;
}

void f_8dc582(void) {
  LOAD_REGS();
L_8dc582: /* 8dc582: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8dc585: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8dc58a: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8dc58d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dc58e: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8dc591: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8dc596u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8dc596(); return;
}

void f_8dc596(void) {
  LOAD_REGS();
L_8dc596: /* 8dc596: push 0xa1d568 */
  { uint32_t v = 0xa1d568u; esp -= 4; W32(esp, v); }
/* 8dc59b: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8dc5a0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8dc5a6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8dc5a6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc5a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dc5ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dc5ad: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8dc5b2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8dc5b2: guest_badaddr(0x8dc5b2); return;
}

void f_8dc5f0(void) {
  LOAD_REGS();
L_8dc5f0: /* 8dc5f0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8dc5f2: push 0x9d8634 */
  { uint32_t v = 0x9d8634u; esp -= 4; W32(esp, v); }
/* 8dc5f7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8dc5fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dc5fe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8dc605: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8dc608: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dc609: mov esi, ecx */
  esi = ecx;
/* 8dc60b: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 8dc60f: call dword ptr [0xcfa264] */
  esp -= 4; W32(esp, 0x8dc615u); SPILL(); f_4e245a(); if (g_unwind) return; /* Core!??0UObject@@QAE@XZ */ RELOAD();
/* 8dc615: lea ecx, [esi + 0x28] */
  ecx = (uint32_t)(esi + 0x28u);
/* 8dc618: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 8dc620: mov dword ptr [esi], 0x9f8b48 */
  W32((uint32_t)(esi), 0x9f8b48u);
/* 8dc626: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8dc62cu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8dc62c: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8dc630: mov eax, esi */
  eax = esi;
/* 8dc632: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dc633: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8dc63a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc63d: ret  */
  esp += 4; SPILL(); return;
}

void f_8dc660(void) {
  LOAD_REGS();
L_8dc660: /* 8dc660: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8dc661: mov ebp, esp */
  ebp = esp;
/* 8dc663: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8dc665: push 0x9d8650 */
  { uint32_t v = 0x9d8650u; esp -= 4; W32(esp, v); }
/* 8dc66a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8dc670: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dc671: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8dc678: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8dc67b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dc67c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dc67d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8dc680: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dc681: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8dc684: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dc685: mov ebx, ecx */
  ebx = ecx;
/* 8dc687: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8dc68e: call dword ptr [0xcfa29c] */
  esp -= 4; W32(esp, 0x8dc694u); SPILL(); f_4e1519(); if (g_unwind) return; /* Core!?Serialize@UObject@@UAEXAAVFArchive@@@Z */ RELOAD();
/* 8dc694: lea edi, [ebx + 0x28] */
  edi = (uint32_t)(ebx + 0x28u);
/* 8dc697: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dc698: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dc699: call 0x6c7734 */
  esp -= 4; W32(esp, 0x8dc69eu); SPILL(); f_6c7734(); if (g_unwind) return; RELOAD();
/* 8dc69e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc6a1: mov ecx, esi */
  ecx = esi;
/* 8dc6a3: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8dc6a9u); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8dc6a9: cmp eax, 0x42 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x42u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dc6ac: jge 0x8dc6f0 */
  if ((sf == of)) goto L_8dc6f0;
L_8dc6ae: /* 8dc6ae: xor eax, eax */
  eax = 0;
/* 8dc6b0: mov cl, 0xff */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0xffu) & 0xffu);
L_8dc6b2: /* 8dc6b2: cmp eax, dword ptr [ebx + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dc6b5: jge 0x8dc6f0 */
  if ((sf == of)) goto L_8dc6f0;
L_8dc6b7: /* 8dc6b7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8dc6b9: mov byte ptr [edx + eax*4 + 3], cl */
  W8((uint32_t)(edx + eax*4 + 0x3u), (ecx & 0xffu));
/* 8dc6bd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8dc6be: jmp 0x8dc6b2 */
  goto L_8dc6b2;
L_8dc6f0: /* 8dc6f0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8dc6f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dc6f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dc6f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8dc6fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dc6fd: mov esp, ebp */
  esp = ebp;
/* 8dc6ff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dc700: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8dc6c0(void) {
  LOAD_REGS();
L_8dc6c0: /* 8dc6c0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8dc6c3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8dc6c8: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8dc6cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dc6cc: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8dc6cf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8dc6d4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8dc6d4(); return;
}

void f_8dc6d4(void) {
  LOAD_REGS();
L_8dc6d4: /* 8dc6d4: push 0xa1d580 */
  { uint32_t v = 0xa1d580u; esp -= 4; W32(esp, v); }
/* 8dc6d9: push 0xaed674 */
  { uint32_t v = 0xaed674u; esp -= 4; W32(esp, v); }
/* 8dc6de: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8dc6e4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8dc6e4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc6e7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dc6e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dc6eb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8dc6f0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8dc6f0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8dc6f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dc6f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dc6f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8dc6fc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dc6fd: mov esp, ebp */
  esp = ebp;
/* 8dc6ff: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dc700: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8dc740(void) {
  LOAD_REGS();
L_8dc740: /* 8dc740: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8dc741: mov ebp, esp */
  ebp = esp;
/* 8dc743: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8dc745: push 0x9d8660 */
  { uint32_t v = 0x9d8660u; esp -= 4; W32(esp, v); }
/* 8dc74a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8dc750: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dc751: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8dc758: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8dc75b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dc75c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dc75d: mov ebx, ecx */
  ebx = ecx;
/* 8dc75f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dc760: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8dc763: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8dc766: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8dc769: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8dc770: mov dword ptr [ebp - 0x28], 0xcea3f8 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0xcea3f8u);
/* 8dc777: mov dword ptr [ebp - 0x24], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffdcu), 0xffffffffu);
/* 8dc77e: call 0x6c38b4 */
  esp -= 4; W32(esp, 0x8dc783u); SPILL(); f_6c38b4(); if (g_unwind) return; RELOAD();
/* 8dc783: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8dc786: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 8dc78b: jmp 0x8dc790 */
  goto L_8dc790;
L_8dc790: /* 8dc790: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dc793: jge 0x8dc889 */
  if ((sf == of)) goto L_8dc889;
L_8dc799: /* 8dc799: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8dc79b: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 8dc79e: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8dc7a0: je 0x8dc860 */
  if (zf) goto L_8dc860;
L_8dc7a6: /* 8dc7a6: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x8dc7acu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 8dc7ac: mov ecx, ebx */
  ecx = ebx;
/* 8dc7ae: mov edi, eax */
  edi = eax;
/* 8dc7b0: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x8dc7b6u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 8dc7b6: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8dc7b8: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 8dc7bd: jne 0x8dc860 */
  if (!zf) goto L_8dc860;
L_8dc7c3: /* 8dc7c3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8dc7c5: mov edx, dword ptr [edx + esi*4] */
  edx = R32((uint32_t)(edx + esi*4));
/* 8dc7c8: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 8dc7cb: mov edx, dword ptr [edx + 0x28] */
  edx = R32((uint32_t)(edx + 0x28u));
/* 8dc7ce: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_8dc7d5: /* 8dc7d5: cmp dword ptr [ebp - 0x14], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dc7dc: jge 0x8dc7f4 */
  if ((sf == of)) goto L_8dc7f4;
L_8dc7de: /* 8dc7de: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 8dc7e0: mov edi, ecx */
  edi = ecx;
/* 8dc7e2: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8dc7e5: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8dc7e8: cmp dword ptr [edi], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8dc7ea: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8dc7ed: jne 0x8dc7f4 */
  if (!zf) goto L_8dc7f4;
L_8dc7ef: /* 8dc7ef: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 8dc7f2: jmp 0x8dc7d5 */
  goto L_8dc7d5;
L_8dc7f4: /* 8dc7f4: cmp dword ptr [ebp - 0x14], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8dc7fb: jne 0x8dc860 */
  if (!zf) goto L_8dc860;
L_8dc7fd: /* 8dc7fd: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8dc7ff: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 8dc802: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8dc808u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8dc808: mov ecx, ebx */
  ecx = ebx;
/* 8dc80a: mov edi, eax */
  edi = eax;
/* 8dc80c: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8dc812u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8dc812: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8dc818: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8dc81a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dc81b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dc81c: push 0xaed6b8 */
  { uint32_t v = 0xaed6b8u; esp -= 4; W32(esp, v); }
/* 8dc821: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 8dc826: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dc827: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8dc82du); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8dc82d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc830: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dc832: je 0x8dc83d */
  if (zf) goto L_8dc83d;
L_8dc834: /* 8dc834: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8dc836: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8dc838: mov ecx, ebx */
  ecx = ebx;
/* 8dc83a: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x8dc83du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8dc83d: /* 8dc83d: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 8dc843: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8dc845: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 8dc848: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8dc84b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8dc852: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dc853: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dc854: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dc855: mov esp, ebp */
  esp = ebp;
/* 8dc857: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dc858: ret  */
  esp += 4; SPILL(); return;
L_8dc860: /* 8dc860: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8dc863: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8dc864: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dc866: jge 0x8dc889 */
  if ((sf == of)) goto L_8dc889;
L_8dc868: /* 8dc868: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8dc86a: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 8dc86d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dc86f: je 0x8dc860 */
  if (zf) goto L_8dc860;
L_8dc871: /* 8dc871: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8dc874: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dc875: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8dc87bu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8dc87b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dc87d: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 8dc882: je 0x8dc860 */
  if (zf) goto L_8dc860;
L_8dc884: /* 8dc884: jmp 0x8dc790 */
  goto L_8dc790;
L_8dc889: /* 8dc889: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8dc88c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dc88d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dc88e: mov eax, ebx */
  eax = ebx;
/* 8dc890: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8dc897: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dc898: mov esp, ebp */
  esp = ebp;
/* 8dc89a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dc89b: ret  */
  esp += 4; SPILL(); return;
}

void f_8dc78d(void) {
  LOAD_REGS();
L_8dc78d: /* 8dc78d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8dc790: /* 8dc790: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dc793: jge 0x8dc889 */
  if ((sf == of)) goto L_8dc889;
L_8dc799: /* 8dc799: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8dc79b: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 8dc79e: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8dc7a0: je 0x8dc860 */
  if (zf) goto L_8dc860;
L_8dc7a6: /* 8dc7a6: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x8dc7acu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 8dc7ac: mov ecx, ebx */
  ecx = ebx;
/* 8dc7ae: mov edi, eax */
  edi = eax;
/* 8dc7b0: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x8dc7b6u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 8dc7b6: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8dc7b8: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 8dc7bd: jne 0x8dc860 */
  if (!zf) goto L_8dc860;
L_8dc7c3: /* 8dc7c3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8dc7c5: mov edx, dword ptr [edx + esi*4] */
  edx = R32((uint32_t)(edx + esi*4));
/* 8dc7c8: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 8dc7cb: mov edx, dword ptr [edx + 0x28] */
  edx = R32((uint32_t)(edx + 0x28u));
/* 8dc7ce: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_8dc7d5: /* 8dc7d5: cmp dword ptr [ebp - 0x14], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dc7dc: jge 0x8dc7f4 */
  if ((sf == of)) goto L_8dc7f4;
L_8dc7de: /* 8dc7de: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 8dc7e0: mov edi, ecx */
  edi = ecx;
/* 8dc7e2: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8dc7e5: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8dc7e8: cmp dword ptr [edi], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8dc7ea: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8dc7ed: jne 0x8dc7f4 */
  if (!zf) goto L_8dc7f4;
L_8dc7ef: /* 8dc7ef: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 8dc7f2: jmp 0x8dc7d5 */
  goto L_8dc7d5;
L_8dc7f4: /* 8dc7f4: cmp dword ptr [ebp - 0x14], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8dc7fb: jne 0x8dc860 */
  if (!zf) goto L_8dc860;
L_8dc7fd: /* 8dc7fd: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8dc7ff: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 8dc802: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8dc808u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8dc808: mov ecx, ebx */
  ecx = ebx;
/* 8dc80a: mov edi, eax */
  edi = eax;
/* 8dc80c: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8dc812u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8dc812: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8dc818: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8dc81a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dc81b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dc81c: push 0xaed6b8 */
  { uint32_t v = 0xaed6b8u; esp -= 4; W32(esp, v); }
/* 8dc821: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 8dc826: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dc827: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8dc82du); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8dc82d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc830: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dc832: je 0x8dc83d */
  if (zf) goto L_8dc83d;
L_8dc834: /* 8dc834: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8dc836: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8dc838: mov ecx, ebx */
  ecx = ebx;
/* 8dc83a: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x8dc83du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8dc83d: /* 8dc83d: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 8dc843: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8dc845: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 8dc848: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8dc84b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8dc852: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dc853: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dc854: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dc855: mov esp, ebp */
  esp = ebp;
/* 8dc857: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dc858: ret  */
  esp += 4; SPILL(); return;
L_8dc860: /* 8dc860: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8dc863: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8dc864: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dc866: jge 0x8dc889 */
  if ((sf == of)) goto L_8dc889;
L_8dc868: /* 8dc868: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8dc86a: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 8dc86d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dc86f: je 0x8dc860 */
  if (zf) goto L_8dc860;
L_8dc871: /* 8dc871: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8dc874: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dc875: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8dc87bu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8dc87b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dc87d: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 8dc882: je 0x8dc860 */
  if (zf) goto L_8dc860;
L_8dc884: /* 8dc884: jmp 0x8dc790 */
  goto L_8dc790;
L_8dc889: /* 8dc889: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8dc88c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dc88d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dc88e: mov eax, ebx */
  eax = ebx;
/* 8dc890: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8dc897: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dc898: mov esp, ebp */
  esp = ebp;
/* 8dc89a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dc89b: ret  */
  esp += 4; SPILL(); return;
}

void f_8dc859(void) {
  LOAD_REGS();
  goto L_8dc859;
L_8dc790: /* 8dc790: cmp esi, dword ptr [eax + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dc793: jge 0x8dc889 */
  if ((sf == of)) goto L_8dc889;
L_8dc799: /* 8dc799: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8dc79b: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 8dc79e: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8dc7a0: je 0x8dc860 */
  if (zf) goto L_8dc860;
L_8dc7a6: /* 8dc7a6: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x8dc7acu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 8dc7ac: mov ecx, ebx */
  ecx = ebx;
/* 8dc7ae: mov edi, eax */
  edi = eax;
/* 8dc7b0: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x8dc7b6u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 8dc7b6: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8dc7b8: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 8dc7bd: jne 0x8dc860 */
  if (!zf) goto L_8dc860;
L_8dc7c3: /* 8dc7c3: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8dc7c5: mov edx, dword ptr [edx + esi*4] */
  edx = R32((uint32_t)(edx + esi*4));
/* 8dc7c8: mov ecx, dword ptr [ebx + 0x28] */
  ecx = R32((uint32_t)(ebx + 0x28u));
/* 8dc7cb: mov edx, dword ptr [edx + 0x28] */
  edx = R32((uint32_t)(edx + 0x28u));
/* 8dc7ce: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_8dc7d5: /* 8dc7d5: cmp dword ptr [ebp - 0x14], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dc7dc: jge 0x8dc7f4 */
  if ((sf == of)) goto L_8dc7f4;
L_8dc7de: /* 8dc7de: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 8dc7e0: mov edi, ecx */
  edi = ecx;
/* 8dc7e2: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8dc7e5: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8dc7e8: cmp dword ptr [edi], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8dc7ea: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8dc7ed: jne 0x8dc7f4 */
  if (!zf) goto L_8dc7f4;
L_8dc7ef: /* 8dc7ef: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 8dc7f2: jmp 0x8dc7d5 */
  goto L_8dc7d5;
L_8dc7f4: /* 8dc7f4: cmp dword ptr [ebp - 0x14], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8dc7fb: jne 0x8dc860 */
  if (!zf) goto L_8dc860;
L_8dc7fd: /* 8dc7fd: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8dc7ff: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 8dc802: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8dc808u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8dc808: mov ecx, ebx */
  ecx = ebx;
/* 8dc80a: mov edi, eax */
  edi = eax;
/* 8dc80c: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8dc812u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8dc812: mov ecx, dword ptr [0xcfa3b8] */
  ecx = R32((uint32_t)(0xcfa3b8u));
/* 8dc818: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8dc81a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dc81b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dc81c: push 0xaed6b8 */
  { uint32_t v = 0xaed6b8u; esp -= 4; W32(esp, v); }
/* 8dc821: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 8dc826: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dc827: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8dc82du); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8dc82d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc830: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dc832: je 0x8dc83d */
  if (zf) goto L_8dc83d;
L_8dc834: /* 8dc834: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8dc836: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8dc838: mov ecx, ebx */
  ecx = ebx;
/* 8dc83a: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x8dc83du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8dc83d: /* 8dc83d: mov ecx, dword ptr [0xcfa1ac] */
  ecx = R32((uint32_t)(0xcfa1acu));
/* 8dc843: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8dc845: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 8dc848: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8dc84b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8dc852: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dc853: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dc854: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dc855: mov esp, ebp */
  esp = ebp;
/* 8dc857: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dc858: ret  */
  esp += 4; SPILL(); return;
L_8dc859: /* 8dc859: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8dc860: /* 8dc860: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8dc863: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8dc864: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dc866: jge 0x8dc889 */
  if ((sf == of)) goto L_8dc889;
L_8dc868: /* 8dc868: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8dc86a: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 8dc86d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dc86f: je 0x8dc860 */
  if (zf) goto L_8dc860;
L_8dc871: /* 8dc871: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8dc874: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dc875: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8dc87bu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8dc87b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dc87d: mov eax, dword ptr [0xcfa1ac] */
  eax = R32((uint32_t)(0xcfa1acu));
/* 8dc882: je 0x8dc860 */
  if (zf) goto L_8dc860;
L_8dc884: /* 8dc884: jmp 0x8dc790 */
  goto L_8dc790;
L_8dc889: /* 8dc889: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8dc88c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dc88d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dc88e: mov eax, ebx */
  eax = ebx;
/* 8dc890: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8dc897: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dc898: mov esp, ebp */
  esp = ebp;
/* 8dc89a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dc89b: ret  */
  esp += 4; SPILL(); return;
}

void f_8dc89c(void) {
  LOAD_REGS();
L_8dc89c: /* 8dc89c: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8dc89f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8dc8a4: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8dc8a7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dc8a8: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8dc8ab: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8dc8b0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8dc8b0(); return;
}

void f_8dc8b0(void) {
  LOAD_REGS();
L_8dc8b0: /* 8dc8b0: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 8dc8b6: push 0xa1d5b0 */
  { uint32_t v = 0xa1d5b0u; esp -= 4; W32(esp, v); }
/* 8dc8bb: push 0xaed6f0 */
  { uint32_t v = 0xaed6f0u; esp -= 4; W32(esp, v); }
/* 8dc8c0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8dc8c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dc8c2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8dc8c5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc8c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dc8ca: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8dc8d0u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8dc8d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dc8d1: push 0xaed6f8 */
  { uint32_t v = 0xaed6f8u; esp -= 4; W32(esp, v); }
/* 8dc8d6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8dc8d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dc8d8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc8db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dc8dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dc8df: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8dc8e4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8dc8e4: guest_badaddr(0x8dc8e4); return;
}

void f_8dc960(void) {
  LOAD_REGS();
L_8dc960: /* 8dc960: mov eax, dword ptr [0xce9ec4] */
  eax = R32((uint32_t)(0xce9ec4u));
/* 8dc965: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 8dc967: je 0x8dc9f4 */
  if (zf) goto L_8dc9f4;
L_8dc96d: /* 8dc96d: mov eax, dword ptr [eax + 0x40] */
  eax = R32((uint32_t)(eax + 0x40u));
/* 8dc970: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dc971: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8dc972: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dc973: mov esi, dword ptr [0xcfa2b0] */
  esi = R32((uint32_t)(0xcfa2b0u));
/* 8dc979: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dc97a: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 8dc97e: mov ecx, edi */
  ecx = edi;
/* 8dc980: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* 8dc982: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dc983: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8dc985u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dc985: mov ecx, dword ptr [0xce9ec4] */
  ecx = R32((uint32_t)(0xce9ec4u));
/* 8dc98b: mov edx, dword ptr [ecx + 0x44] */
  edx = R32((uint32_t)(ecx + 0x44u));
/* 8dc98e: mov ecx, edi */
  ecx = edi;
/* 8dc990: sar edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
  }
/* 8dc992: movzx ebx, al */
  ebx = (uint32_t)((eax & 0xffu));
/* 8dc995: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dc996: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8dc998u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dc998: mov esi, dword ptr [0xce9ec4] */
  esi = R32((uint32_t)(0xce9ec4u));
/* 8dc99e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc9a1: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 8dc9a3: add esi, 0xac */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8dc9a9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8dc9ab: mov ecx, esi */
  ecx = esi;
/* 8dc9ad: movzx ebp, al */
  ebp = (uint32_t)((eax & 0xffu));
/* 8dc9b0: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8dc9b6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8dc9b6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8dc9b8: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 8dc9bc: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8dc9bf: lea ecx, [ecx + eax*8] */
  ecx = (uint32_t)(ecx + eax*8);
/* 8dc9c2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dc9c4: je 0x8dc9ce */
  if (zf) goto L_8dc9ce;
L_8dc9c6: /* 8dc9c6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dc9c7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8dc9c8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dc9c9: call 0x6cc24d */
  esp -= 4; W32(esp, 0x8dc9ceu); SPILL(); f_6cc24d(); if (g_unwind) return; RELOAD();
L_8dc9ce: /* 8dc9ce: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8dc9d2: mov ecx, dword ptr [0xce9ec4] */
  ecx = R32((uint32_t)(0xce9ec4u));
/* 8dc9d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dc9d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dc9da: mov edx, dword ptr [ecx + 0xac] */
  edx = R32((uint32_t)(ecx + 0xacu));
/* 8dc9e0: lea eax, [edi + edi*4] */
  eax = (uint32_t)(edi + edi*4);
/* 8dc9e3: mov eax, dword ptr [edx + eax*8 + 0x1c] */
  eax = R32((uint32_t)(edx + eax*8 + 0x1cu));
/* 8dc9e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dc9e8: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8dc9edu); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8dc9ed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dc9f0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dc9f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dc9f2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dc9f3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_8dc9f4: /* 8dc9f4: xor eax, eax */
  eax = 0;
/* 8dc9f6: ret  */
  esp += 4; SPILL(); return;
}

void f_8dca30(void) {
  LOAD_REGS();
L_8dca30: /* 8dca30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8dca32: push 0x9d8678 */
  { uint32_t v = 0x9d8678u; esp -= 4; W32(esp, v); }
/* 8dca37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8dca3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dca3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8dca45: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8dca48: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dca49: mov ebx, ecx */
  ebx = ecx;
/* 8dca4b: cmp byte ptr [ebx + 0x38], 7 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x38u))); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8dca4f: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* 8dca53: jne 0x8dced1 */
  if (!zf) goto L_8dced1;
L_8dca59: /* 8dca59: cmp dword ptr [esp + 0x5c], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x5cu))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8dca5e: jne 0x8dced1 */
  if (!zf) goto L_8dced1;
L_8dca64: /* 8dca64: mov eax, dword ptr [ebx + 0xb0] */
  eax = R32((uint32_t)(ebx + 0xb0u));
/* 8dca6a: xor ecx, ecx */
  ecx = 0;
/* 8dca6c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8dca6e: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* 8dca72: jle 0x8dceaf */
  if ((zf || sf != of)) goto L_8dceaf;
L_8dca78: /* 8dca78: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8dca79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dca7a: xor esi, esi */
  esi = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* 8dca7c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dca7d: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 8dca81: jmp 0x8dca87 */
  goto L_8dca87;
L_8dca83: /* 8dca83: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
L_8dca87: /* 8dca87: mov edi, dword ptr [ebx + 0x44] */
  edi = R32((uint32_t)(ebx + 0x44u));
/* 8dca8a: mov ebp, dword ptr [ebx + 0x40] */
  ebp = R32((uint32_t)(ebx + 0x40u));
/* 8dca8d: sar edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  cf = ((int32_t)(int32_t)a >> (c - 1)) & 1;
  of = 0;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edi = r;
  }
  }
/* 8dca8f: sar ebp, cl */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
  }
/* 8dca91: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8dca93: lea ecx, [esp + 0x40] */
  ecx = (uint32_t)(esp + 0x40u);
/* 8dca97: mov eax, edi */
  eax = edi;
/* 8dca99: imul eax, ebp */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebp);
  eax = (uint32_t)r;
  }
/* 8dca9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dca9d: mov dword ptr [esp + 0x34], ebp */
  W32((uint32_t)(esp + 0x34u), ebp);
/* 8dcaa1: mov dword ptr [esp + 0x3c], edi */
  W32((uint32_t)(esp + 0x3cu), edi);
/* 8dcaa5: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* 8dcaa9: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x8dcaafu); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 8dcaaf: mov eax, dword ptr [ebx + 0xac] */
  eax = R32((uint32_t)(ebx + 0xacu));
/* 8dcab5: mov ecx, dword ptr [eax + esi + 0x20] */
  ecx = R32((uint32_t)(eax + esi + 0x20u));
/* 8dcab9: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dcabb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dcabd: mov dword ptr [esp + 0x60], 0 */
  W32((uint32_t)(esp + 0x60u), 0x0u);
/* 8dcac5: jne 0x8dcacf */
  if (!zf) goto L_8dcacf;
L_8dcac7: /* 8dcac7: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 8dcaca: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 8dcacd: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8dcacfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8dcacf: /* 8dcacf: xor eax, eax */
  eax = 0;
/* 8dcad1: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dcad3: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8dcad7: jle 0x8dce37 */
  if ((zf || sf != of)) goto L_8dce37;
L_8dcadd: /* 8dcadd: lea ecx, [ebp + ebp*2] */
  ecx = (uint32_t)(ebp + ebp*2);
/* 8dcae1: lea edx, [ebp + ebp] */
  edx = (uint32_t)(ebp + ebp);
/* 8dcae5: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 8dcae9: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* 8dcaed: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
L_8dcaf1: /* 8dcaf1: xor esi, esi */
  esi = 0;
/* 8dcaf3: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8dcaf5: jle 0x8dcdff */
  if ((zf || sf != of)) goto L_8dcdff;
L_8dcafb: /* 8dcafb: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8dcafc: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8dcaff: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dcb01: mov edi, eax */
  edi = eax;
/* 8dcb03: mov eax, ebp */
  eax = ebp;
/* 8dcb05: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8dcb06: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8dcb09: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dcb0b: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8dcb0e: sar edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 8dcb11: imul edi, eax */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(eax);
  edi = (uint32_t)r;
  }
/* 8dcb14: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 8dcb18: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dcb1a: mov dword ptr [esp + 0x28], edi */
  W32((uint32_t)(esp + 0x28u), edi);
/* 8dcb1e: mov byte ptr [esp + 0x4b], 0xff */
  W8((uint32_t)(esp + 0x4bu), 0xffu);
/* 8dcb23: mov byte ptr [esp + 0x4f], 0xff */
  W8((uint32_t)(esp + 0x4fu), 0xffu);
/* 8dcb28: mov byte ptr [esp + 0x53], 0xff */
  W8((uint32_t)(esp + 0x53u), 0xffu);
/* 8dcb2d: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* 8dcb31: jmp 0x8dcb37 */
  goto L_8dcb37;
L_8dcb33: /* 8dcb33: mov edi, dword ptr [esp + 0x28] */
  edi = R32((uint32_t)(esp + 0x28u));
L_8dcb37: /* 8dcb37: mov eax, esi */
  eax = esi;
/* 8dcb39: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8dcb3a: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8dcb3d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dcb3f: mov edx, dword ptr [ebx + 0xac] */
  edx = R32((uint32_t)(ebx + 0xacu));
/* 8dcb45: mov ecx, eax */
  ecx = eax;
/* 8dcb47: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 8dcb4b: mov ebx, dword ptr [edx + eax + 0x1c] */
  ebx = R32((uint32_t)(edx + eax + 0x1cu));
/* 8dcb4f: sar ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 8dcb52: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8dcb54: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8dcb57: mov al, byte ptr [ecx + ebx + 8] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + ebx + 0x8u))) & 0xffu);
/* 8dcb5b: mov edi, dword ptr [ecx + ebx + 0xa] */
  edi = R32((uint32_t)(ecx + ebx + 0xau));
/* 8dcb5f: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8dcb61: mov ebx, dword ptr [ecx + 8] */
  ebx = R32((uint32_t)(ecx + 0x8u));
/* 8dcb64: shl al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8dcb67: mov byte ptr [esp + 0x48], al */
  W8((uint32_t)(esp + 0x48u), (eax & 0xffu));
/* 8dcb6b: mov eax, edi */
  eax = edi;
/* 8dcb6d: shr eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8dcb70: shl al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8dcb73: mov byte ptr [esp + 0x4e], al */
  W8((uint32_t)(esp + 0x4eu), (eax & 0xffu));
/* 8dcb77: mov eax, edi */
  eax = edi;
/* 8dcb79: shr eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8dcb7c: shl al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8dcb7f: mov byte ptr [esp + 0x4d], al */
  W8((uint32_t)(esp + 0x4du), (eax & 0xffu));
/* 8dcb83: mov al, byte ptr [ecx + 0xa] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xau))) & 0xffu);
/* 8dcb86: mov edx, ebx */
  edx = ebx;
/* 8dcb88: shl al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8dcb8b: shr edx, 0xb */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 11;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8dcb8e: shr ebx, 5 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 8dcb91: mov byte ptr [esp + 0x4c], al */
  W8((uint32_t)(esp + 0x4cu), (eax & 0xffu));
/* 8dcb95: mov ax, word ptr [ecx + 8] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0x8u))) & 0xffffu);
/* 8dcb99: shl dl, 3 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8dcb9c: shl bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint32_t c = 2;
  uint8_t r = (uint8_t)((uint32_t)a << c);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 8dcb9f: cmp ax, di */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8dcba2: mov byte ptr [esp + 0x4a], dl */
  W8((uint32_t)(esp + 0x4au), (edx & 0xffu));
/* 8dcba6: mov byte ptr [esp + 0x49], bl */
  W8((uint32_t)(esp + 0x49u), (ebx & 0xffu));
/* 8dcbaa: jbe 0x8dcc65 */
  if ((cf | zf)) goto L_8dcc65;
L_8dcbb0: /* 8dcbb0: movzx ebp, byte ptr [esp + 0x4e] */
  ebp = (uint32_t)(R8((uint32_t)(esp + 0x4eu)));
/* 8dcbb5: movzx edi, dl */
  edi = (uint32_t)((edx & 0xffu));
/* 8dcbb8: lea edx, [ebp + edi*2] */
  edx = (uint32_t)(ebp + edi*2);
/* 8dcbbc: mov eax, 0x55555556 */
  eax = 0x55555556u;
/* 8dcbc1: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8dcbc3: mov eax, edx */
  eax = edx;
/* 8dcbc5: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8dcbc8: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8dcbca: movzx eax, byte ptr [esp + 0x4d] */
  eax = (uint32_t)(R8((uint32_t)(esp + 0x4du)));
/* 8dcbcf: mov byte ptr [esp + 0x52], dl */
  W8((uint32_t)(esp + 0x52u), (edx & 0xffu));
/* 8dcbd3: movzx ebx, bl */
  ebx = (uint32_t)((ebx & 0xffu));
/* 8dcbd6: lea edx, [eax + ebx*2] */
  edx = (uint32_t)(eax + ebx*2);
/* 8dcbd9: mov eax, 0x55555556 */
  eax = 0x55555556u;
/* 8dcbde: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8dcbe0: mov eax, edx */
  eax = edx;
/* 8dcbe2: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8dcbe5: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8dcbe7: movzx eax, byte ptr [esp + 0x48] */
  eax = (uint32_t)(R8((uint32_t)(esp + 0x48u)));
/* 8dcbec: mov byte ptr [esp + 0x51], dl */
  W8((uint32_t)(esp + 0x51u), (edx & 0xffu));
/* 8dcbf0: movzx edx, byte ptr [esp + 0x4c] */
  edx = (uint32_t)(R8((uint32_t)(esp + 0x4cu)));
/* 8dcbf5: lea edx, [edx + eax*2] */
  edx = (uint32_t)(edx + eax*2);
/* 8dcbf8: mov eax, 0x55555556 */
  eax = 0x55555556u;
/* 8dcbfd: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8dcbff: mov eax, edx */
  eax = edx;
/* 8dcc01: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8dcc04: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8dcc06: mov byte ptr [esp + 0x50], dl */
  W8((uint32_t)(esp + 0x50u), (edx & 0xffu));
/* 8dcc0a: lea edi, [edi + ebp*2] */
  edi = (uint32_t)(edi + ebp*2);
/* 8dcc0d: mov eax, 0x55555556 */
  eax = 0x55555556u;
/* 8dcc12: imul edi */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edi); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8dcc14: mov edi, edx */
  edi = edx;
/* 8dcc16: shr edx, 0x1f */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8dcc19: mov eax, edi */
  eax = edi;
/* 8dcc1b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dcc1d: mov byte ptr [esp + 0x56], al */
  W8((uint32_t)(esp + 0x56u), (eax & 0xffu));
/* 8dcc21: movzx eax, byte ptr [esp + 0x4d] */
  eax = (uint32_t)(R8((uint32_t)(esp + 0x4du)));
/* 8dcc26: lea ebx, [ebx + eax*2] */
  ebx = (uint32_t)(ebx + eax*2);
/* 8dcc29: mov eax, 0x55555556 */
  eax = 0x55555556u;
/* 8dcc2e: imul ebx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(ebx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8dcc30: mov eax, edx */
  eax = edx;
/* 8dcc32: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8dcc35: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8dcc37: movzx eax, byte ptr [esp + 0x48] */
  eax = (uint32_t)(R8((uint32_t)(esp + 0x48u)));
/* 8dcc3c: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 8dcc40: mov byte ptr [esp + 0x55], dl */
  W8((uint32_t)(esp + 0x55u), (edx & 0xffu));
/* 8dcc44: movzx edx, byte ptr [esp + 0x4c] */
  edx = (uint32_t)(R8((uint32_t)(esp + 0x4cu)));
/* 8dcc49: lea edx, [eax + edx*2] */
  edx = (uint32_t)(eax + edx*2);
/* 8dcc4c: mov eax, 0x55555556 */
  eax = 0x55555556u;
/* 8dcc51: imul edx */
  { int64_t r = (int64_t)(int32_t)eax * (int64_t)(int32_t)(edx); eax = (uint32_t)r; edx = (uint32_t)((uint64_t)r >> 32);
  cf = of = (r != (int64_t)(int32_t)r); }
/* 8dcc53: mov eax, edx */
  eax = edx;
/* 8dcc55: shr eax, 0x1f */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 31;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8dcc58: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8dcc5a: mov byte ptr [esp + 0x57], 0xff */
  W8((uint32_t)(esp + 0x57u), 0xffu);
/* 8dcc5f: mov byte ptr [esp + 0x54], dl */
  W8((uint32_t)(esp + 0x54u), (edx & 0xffu));
/* 8dcc63: jmp 0x8dccb4 */
  goto L_8dccb4;
L_8dcc65: /* 8dcc65: movzx eax, byte ptr [esp + 0x4e] */
  eax = (uint32_t)(R8((uint32_t)(esp + 0x4eu)));
/* 8dcc6a: movzx edx, dl */
  edx = (uint32_t)((edx & 0xffu));
/* 8dcc6d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dcc6f: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8dcc70: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8dcc72: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8dcc74: mov byte ptr [esp + 0x52], al */
  W8((uint32_t)(esp + 0x52u), (eax & 0xffu));
/* 8dcc78: movzx eax, byte ptr [esp + 0x4d] */
  eax = (uint32_t)(R8((uint32_t)(esp + 0x4du)));
/* 8dcc7d: movzx edx, bl */
  edx = (uint32_t)((ebx & 0xffu));
/* 8dcc80: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dcc82: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8dcc83: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8dcc85: movzx edx, byte ptr [esp + 0x48] */
  edx = (uint32_t)(R8((uint32_t)(esp + 0x48u)));
/* 8dcc8a: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8dcc8c: mov byte ptr [esp + 0x51], al */
  W8((uint32_t)(esp + 0x51u), (eax & 0xffu));
/* 8dcc90: movzx eax, byte ptr [esp + 0x4c] */
  eax = (uint32_t)(R8((uint32_t)(esp + 0x4cu)));
/* 8dcc95: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dcc97: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8dcc98: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8dcc9a: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8dcc9c: mov byte ptr [esp + 0x50], al */
  W8((uint32_t)(esp + 0x50u), (eax & 0xffu));
/* 8dcca0: mov byte ptr [esp + 0x57], 0 */
  W8((uint32_t)(esp + 0x57u), 0x0u);
/* 8dcca5: mov byte ptr [esp + 0x56], 0 */
  W8((uint32_t)(esp + 0x56u), 0x0u);
/* 8dccaa: mov byte ptr [esp + 0x55], 0xff */
  W8((uint32_t)(esp + 0x55u), 0xffu);
/* 8dccaf: mov byte ptr [esp + 0x54], 0xff */
  W8((uint32_t)(esp + 0x54u), 0xffu);
L_8dccb4: /* 8dccb4: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 8dccb8: mov eax, dword ptr [esp + 0x68] */
  eax = R32((uint32_t)(esp + 0x68u));
/* 8dccbc: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dccbe: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8dccc1: xor edx, edx */
  edx = 0;
/* 8dccc3: mov dl, byte ptr [ecx + 0xc] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xcu))) & 0xffu);
/* 8dccc6: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8dccc9: mov edx, dword ptr [esp + edx*4 + 0x48] */
  edx = R32((uint32_t)(esp + edx*4 + 0x48u));
/* 8dcccd: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8dcccf: xor edx, edx */
  edx = 0;
/* 8dccd1: mov dl, byte ptr [ecx + 0xc] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xcu))) & 0xffu);
/* 8dccd4: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8dccd7: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8dccda: mov edx, dword ptr [esp + edx*4 + 0x48] */
  edx = R32((uint32_t)(esp + edx*4 + 0x48u));
/* 8dccde: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8dcce1: xor edx, edx */
  edx = 0;
/* 8dcce3: mov dl, byte ptr [ecx + 0xc] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xcu))) & 0xffu);
/* 8dcce6: shr edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8dcce9: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8dccec: mov edx, dword ptr [esp + edx*4 + 0x48] */
  edx = R32((uint32_t)(esp + edx*4 + 0x48u));
/* 8dccf0: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8dccf3: movzx edx, byte ptr [ecx + 0xc] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0xcu)));
/* 8dccf7: shr edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8dccfa: mov edx, dword ptr [esp + edx*4 + 0x48] */
  edx = R32((uint32_t)(esp + edx*4 + 0x48u));
/* 8dccfe: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 8dcd01: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 8dcd05: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 8dcd09: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dcd0b: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8dcd0e: xor edx, edx */
  edx = 0;
/* 8dcd10: mov dl, byte ptr [ecx + 0xd] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xdu))) & 0xffu);
/* 8dcd13: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8dcd16: mov edx, dword ptr [esp + edx*4 + 0x48] */
  edx = R32((uint32_t)(esp + edx*4 + 0x48u));
/* 8dcd1a: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8dcd1c: xor edx, edx */
  edx = 0;
/* 8dcd1e: mov dl, byte ptr [ecx + 0xd] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xdu))) & 0xffu);
/* 8dcd21: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8dcd24: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8dcd27: mov edx, dword ptr [esp + edx*4 + 0x48] */
  edx = R32((uint32_t)(esp + edx*4 + 0x48u));
/* 8dcd2b: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8dcd2e: xor edx, edx */
  edx = 0;
/* 8dcd30: mov dl, byte ptr [ecx + 0xd] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xdu))) & 0xffu);
/* 8dcd33: shr edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8dcd36: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8dcd39: mov edx, dword ptr [esp + edx*4 + 0x48] */
  edx = R32((uint32_t)(esp + edx*4 + 0x48u));
/* 8dcd3d: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8dcd40: movzx edx, byte ptr [ecx + 0xd] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0xdu)));
/* 8dcd44: shr edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8dcd47: mov edx, dword ptr [esp + edx*4 + 0x48] */
  edx = R32((uint32_t)(esp + edx*4 + 0x48u));
/* 8dcd4b: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 8dcd4e: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 8dcd52: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8dcd56: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dcd58: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8dcd5b: xor edx, edx */
  edx = 0;
/* 8dcd5d: mov dl, byte ptr [ecx + 0xe] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xeu))) & 0xffu);
/* 8dcd60: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8dcd63: mov edx, dword ptr [esp + edx*4 + 0x48] */
  edx = R32((uint32_t)(esp + edx*4 + 0x48u));
/* 8dcd67: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8dcd69: xor edx, edx */
  edx = 0;
/* 8dcd6b: mov dl, byte ptr [ecx + 0xe] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xeu))) & 0xffu);
/* 8dcd6e: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8dcd71: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8dcd74: mov edx, dword ptr [esp + edx*4 + 0x48] */
  edx = R32((uint32_t)(esp + edx*4 + 0x48u));
/* 8dcd78: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8dcd7b: xor edx, edx */
  edx = 0;
/* 8dcd7d: mov dl, byte ptr [ecx + 0xe] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xeu))) & 0xffu);
/* 8dcd80: shr edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8dcd83: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8dcd86: mov edx, dword ptr [esp + edx*4 + 0x48] */
  edx = R32((uint32_t)(esp + edx*4 + 0x48u));
/* 8dcd8a: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8dcd8d: movzx edx, byte ptr [ecx + 0xe] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0xeu)));
/* 8dcd91: shr edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8dcd94: mov edx, dword ptr [esp + edx*4 + 0x48] */
  edx = R32((uint32_t)(esp + edx*4 + 0x48u));
/* 8dcd98: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 8dcd9b: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8dcd9f: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 8dcda3: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dcda5: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 8dcda8: xor edx, edx */
  edx = 0;
/* 8dcdaa: mov dl, byte ptr [ecx + 0xf] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xfu))) & 0xffu);
/* 8dcdad: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8dcdb0: mov edx, dword ptr [esp + edx*4 + 0x48] */
  edx = R32((uint32_t)(esp + edx*4 + 0x48u));
/* 8dcdb4: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 8dcdb6: xor edx, edx */
  edx = 0;
/* 8dcdb8: mov dl, byte ptr [ecx + 0xf] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xfu))) & 0xffu);
/* 8dcdbb: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
/* 8dcdbf: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8dcdc2: shr edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8dcdc5: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8dcdc8: mov edx, dword ptr [esp + edx*4 + 0x48] */
  edx = R32((uint32_t)(esp + edx*4 + 0x48u));
/* 8dcdcc: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8dcdcf: xor edx, edx */
  edx = 0;
/* 8dcdd1: mov dl, byte ptr [ecx + 0xf] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0xfu))) & 0xffu);
/* 8dcdd4: shr edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* 8dcdd7: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8dcdda: mov edx, dword ptr [esp + edx*4 + 0x48] */
  edx = R32((uint32_t)(esp + edx*4 + 0x48u));
/* 8dcdde: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8dcde1: movzx ecx, byte ptr [ecx + 0xf] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0xfu)));
/* 8dcde5: shr ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8dcde8: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dcdea: mov edx, dword ptr [esp + ecx*4 + 0x48] */
  edx = R32((uint32_t)(esp + ecx*4 + 0x48u));
/* 8dcdee: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 8dcdf1: jl 0x8dcb33 */
  if ((sf != of)) goto L_8dcb33;
L_8dcdf7: /* 8dcdf7: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 8dcdfb: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
L_8dcdff: /* 8dcdff: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* 8dce03: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 8dce07: lea ecx, [ebp*4] */
  ecx = (uint32_t)(ebp*4);
/* 8dce0e: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8dce10: mov dword ptr [esp + 0x68], edx */
  W32((uint32_t)(esp + 0x68u), edx);
/* 8dce14: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 8dce18: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dce1b: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8dce1d: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8dce1f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dce21: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* 8dce25: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 8dce29: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* 8dce2d: jl 0x8dcaf1 */
  if ((sf != of)) goto L_8dcaf1;
L_8dce33: /* 8dce33: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
L_8dce37: /* 8dce37: mov edi, dword ptr [esp + 0x38] */
  edi = R32((uint32_t)(esp + 0x38u));
/* 8dce3b: mov eax, dword ptr [ebx + 0xac] */
  eax = R32((uint32_t)(ebx + 0xacu));
/* 8dce41: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8dce44: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dce45: lea ecx, [eax + esi + 0x1c] */
  ecx = (uint32_t)(eax + esi + 0x1cu);
/* 8dce49: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8dce4b: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8dce51u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8dce51: mov ecx, dword ptr [ebx + 0xac] */
  ecx = R32((uint32_t)(ebx + 0xacu));
/* 8dce57: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8dce59: lea ecx, [ecx + esi + 0x1c] */
  ecx = (uint32_t)(ecx + esi + 0x1cu);
/* 8dce5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dce5e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8dce64u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8dce64: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 8dce68: mov eax, dword ptr [ebx + 0xac] */
  eax = R32((uint32_t)(ebx + 0xacu));
/* 8dce6e: mov ecx, dword ptr [eax + esi + 0x1c] */
  ecx = R32((uint32_t)(eax + esi + 0x1cu));
/* 8dce72: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dce73: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dce74: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dce75: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8dce7au); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8dce7a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dce7d: lea ecx, [esp + 0x3c] */
  ecx = (uint32_t)(esp + 0x3cu);
/* 8dce81: mov dword ptr [esp + 0x60], 0xffffffff */
  W32((uint32_t)(esp + 0x60u), 0xffffffffu);
/* 8dce89: call 0x6c678f */
  esp -= 4; W32(esp, 0x8dce8eu); SPILL(); f_6c678f(); if (g_unwind) return; RELOAD();
/* 8dce8e: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8dce92: mov ecx, dword ptr [ebx + 0xb0] */
  ecx = R32((uint32_t)(ebx + 0xb0u));
/* 8dce98: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8dce99: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8dce9c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dce9e: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* 8dcea2: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 8dcea6: jl 0x8dca83 */
  if ((sf != of)) goto L_8dca83;
L_8dceac: /* 8dceac: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dcead: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dceae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_8dceaf: /* 8dceaf: or dword ptr [ebx + 0x7c], 0x80 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x7cu))); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx + 0x7cu), r);
  }
/* 8dceb6: mov byte ptr [ebx + 0x38], 5 */
  W8((uint32_t)(ebx + 0x38u), 0x5u);
/* 8dceba: mov eax, 1 */
  eax = 0x1u;
/* 8dcebf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dcec0: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 8dcec4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8dcecb: add esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dcece: ret 4 */
  esp += 8; SPILL(); return;
L_8dced1: /* 8dced1: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 8dced5: xor eax, eax */
  eax = 0;
/* 8dced7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dced8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8dcedf: add esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dcee2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8dd020(void) {
  LOAD_REGS();
L_8dd020: /* 8dd020: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8dd021: mov ebp, esp */
  ebp = esp;
/* 8dd023: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8dd025: push 0x9d8690 */
  { uint32_t v = 0x9d8690u; esp -= 4; W32(esp, v); }
/* 8dd02a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8dd030: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dd031: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8dd038: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8dd03b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dd03c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8dd03f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dd040: mov esi, ecx */
  esi = ecx;
/* 8dd042: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* 8dd048: lea ebx, [ebx + ebx*4] */
  ebx = (uint32_t)(ebx + ebx*4);
/* 8dd04b: shl ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 8dd04e: mov ecx, dword ptr [eax + ebx + 0x20] */
  ecx = R32((uint32_t)(eax + ebx + 0x20u));
/* 8dd052: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dd054: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dd055: xor edi, edi */
  edi = 0;
/* 8dd057: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8dd059: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8dd05c: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 8dd05f: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8dd062: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8dd065: jne 0x8dd06f */
  if (!zf) goto L_8dd06f;
L_8dd067: /* 8dd067: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 8dd06a: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 8dd06d: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8dd06fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8dd06f: /* 8dd06f: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* 8dd075: cmp dword ptr [ebx + eax + 0x1c], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + eax + 0x1cu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8dd079: jne 0x8dd093 */
  if (!zf) goto L_8dd093;
L_8dd07b: /* 8dd07b: push 0x478 */
  { uint32_t v = 0x478u; esp -= 4; W32(esp, v); }
/* 8dd080: push 0xaed70c */
  { uint32_t v = 0xaed70cu; esp -= 4; W32(esp, v); }
/* 8dd085: push 0xaed718 */
  { uint32_t v = 0xaed718u; esp -= 4; W32(esp, v); }
/* 8dd08a: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8dd090u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8dd090: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8dd093: /* 8dd093: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* 8dd099: mov edx, dword ptr [ebx + ecx + 4] */
  edx = R32((uint32_t)(ebx + ecx + 0x4u));
/* 8dd09d: lea eax, [ebx + ecx] */
  eax = (uint32_t)(ebx + ecx);
/* 8dd0a0: movzx ecx, byte ptr [esi + 0x38] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x38u)));
/* 8dd0a4: sub ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 8dd0a7: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* 8dd0aa: mov edi, dword ptr [eax + 8] */
  edi = R32((uint32_t)(eax + 0x8u));
/* 8dd0ad: je 0x8dd10c */
  if (zf) goto L_8dd10c;
L_8dd0af: /* 8dd0af: sub ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* 8dd0b2: je 0x8dd0ee */
  if (zf) goto L_8dd0ee;
L_8dd0b4: /* 8dd0b4: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* 8dd0b5: je 0x8dd0d0 */
  if (zf) goto L_8dd0d0;
L_8dd0b7: /* 8dd0b7: mov edx, dword ptr [0xcfa1e8] */
  edx = R32((uint32_t)(0xcfa1e8u));
/* 8dd0bd: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8dd0bf: push 0xaed738 */
  { uint32_t v = 0xaed738u; esp -= 4; W32(esp, v); }
/* 8dd0c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dd0c5: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8dd0cbu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8dd0cb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dd0ce: jmp 0x8dd12d */
  goto L_8dd12d;
L_8dd0d0: /* 8dd0d0: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8dd0d3: mov ebx, dword ptr [eax + 0x1c] */
  ebx = R32((uint32_t)(eax + 0x1cu));
/* 8dd0d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dd0d7: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8dd0da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dd0db: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8dd0de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dd0df: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dd0e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dd0e1: call 0x8dc0a0 */
  esp -= 4; W32(esp, 0x8dd0e6u); SPILL(); f_8dc0a0(); if (g_unwind) return; RELOAD();
/* 8dd0e6: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8dd0e9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dd0ec: jmp 0x8dd127 */
  goto L_8dd127;
L_8dd0ee: /* 8dd0ee: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8dd0f1: mov ebx, dword ptr [eax + 0x1c] */
  ebx = R32((uint32_t)(eax + 0x1cu));
/* 8dd0f4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dd0f5: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8dd0f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dd0f9: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8dd0fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dd0fd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dd0fe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dd0ff: call 0x8dbf20 */
  esp -= 4; W32(esp, 0x8dd104u); SPILL(); f_8dbf20(); if (g_unwind) return; RELOAD();
/* 8dd104: mov ebx, dword ptr [ebp - 0x18] */
  ebx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8dd107: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dd10a: jmp 0x8dd127 */
  goto L_8dd127;
L_8dd10c: /* 8dd10c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8dd10f: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 8dd112: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dd113: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 8dd116: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dd117: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dd118: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8dd11b: mov esi, edi */
  esi = edi;
/* 8dd11d: mov edi, edx */
  edi = edx;
/* 8dd11f: call 0x8dbe90 */
  esp -= 4; W32(esp, 0x8dd124u); SPILL(); f_8dbe90(); if (g_unwind) return; RELOAD();
/* 8dd124: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8dd127: /* 8dd127: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8dd12a: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_8dd12d: /* 8dd12d: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* 8dd133: mov edx, dword ptr [ebx + ecx + 0x10] */
  edx = R32((uint32_t)(ebx + ecx + 0x10u));
/* 8dd137: lea ebx, [ebx + ecx + 0x10] */
  ebx = (uint32_t)(ebx + ecx + 0x10u);
/* 8dd13b: mov ecx, ebx */
  ecx = ebx;
/* 8dd13d: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x8dd140u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dd140: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8dd143: xor eax, eax */
  eax = 0;
/* 8dd145: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dd147: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8dd14a: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8dd14d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dd14e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dd14f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8dd156: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dd157: lea eax, [eax + eax + 3] */
  eax = (uint32_t)(eax + eax + 0x3u);
/* 8dd15b: mov esp, ebp */
  esp = ebp;
/* 8dd15d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dd15e: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8dd161(void) {
  LOAD_REGS();
L_8dd161: /* 8dd161: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8dd164: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8dd169: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8dd16c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dd16d: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8dd170: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8dd175u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8dd175(); return;
}

void f_8dd175(void) {
  LOAD_REGS();
L_8dd175: /* 8dd175: push 0xa1d5f8 */
  { uint32_t v = 0xa1d5f8u; esp -= 4; W32(esp, v); }
/* 8dd17a: push 0xaed790 */
  { uint32_t v = 0xaed790u; esp -= 4; W32(esp, v); }
/* 8dd17f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8dd185u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8dd185: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dd188: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dd18a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dd18c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8dd191u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8dd191: guest_badaddr(0x8dd191); return;
}

void f_8dd200(void) {
  LOAD_REGS();
L_8dd200: /* 8dd200: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8dd201: mov ebp, esp */
  ebp = esp;
/* 8dd203: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8dd205: push 0x9d86a0 */
  { uint32_t v = 0x9d86a0u; esp -= 4; W32(esp, v); }
/* 8dd20a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8dd210: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dd211: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8dd218: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8dd21b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dd21c: mov ebx, ecx */
  ebx = ecx;
/* 8dd21e: mov al, byte ptr [ebx + 0x38] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x38u))) & 0xffu);
/* 8dd221: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dd222: xor esi, esi */
  esi = 0;
/* 8dd224: cmp al, 7 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8dd226: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dd227: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8dd22a: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 8dd22d: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 8dd230: je 0x8dd23a */
  if (zf) goto L_8dd23a;
L_8dd232: /* 8dd232: cmp al, 8 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8dd234: jne 0x8dd3d3 */
  if (!zf) goto L_8dd3d3;
L_8dd23a: /* 8dd23a: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 8dd23d: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
L_8dd240: /* 8dd240: cmp esi, dword ptr [ebx + 0xb0] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xb0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dd246: jge 0x8dd3c4 */
  if ((sf == of)) goto L_8dd3c4;
L_8dd24c: /* 8dd24c: mov eax, dword ptr [ebx + 0xac] */
  eax = R32((uint32_t)(ebx + 0xacu));
/* 8dd252: lea esi, [esi + esi*4] */
  esi = (uint32_t)(esi + esi*4);
/* 8dd255: shl esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 3;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8dd258: mov ecx, dword ptr [eax + esi + 4] */
  ecx = R32((uint32_t)(eax + esi + 0x4u));
/* 8dd25c: mov edi, dword ptr [eax + esi + 8] */
  edi = R32((uint32_t)(eax + esi + 0x8u));
/* 8dd260: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dd262: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8dd265: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 8dd268: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dd26a: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 8dd271: jne 0x8dd27d */
  if (!zf) goto L_8dd27d;
L_8dd273: /* 8dd273: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 8dd276: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8dd279: mov ecx, eax */
  ecx = eax;
/* 8dd27b: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x8dd27du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8dd27d: /* 8dd27d: mov eax, dword ptr [ebx + 0xac] */
  eax = R32((uint32_t)(ebx + 0xacu));
/* 8dd283: mov ecx, dword ptr [esi + eax + 0x1c] */
  ecx = R32((uint32_t)(esi + eax + 0x1cu));
/* 8dd287: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dd289: jne 0x8dd2a3 */
  if (!zf) goto L_8dd2a3;
L_8dd28b: /* 8dd28b: push 0x4a5 */
  { uint32_t v = 0x4a5u; esp -= 4; W32(esp, v); }
/* 8dd290: push 0xaed798 */
  { uint32_t v = 0xaed798u; esp -= 4; W32(esp, v); }
/* 8dd295: push 0xaed7a4 */
  { uint32_t v = 0xaed7a4u; esp -= 4; W32(esp, v); }
/* 8dd29a: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8dd2a0u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8dd2a0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8dd2a3: /* 8dd2a3: cmp byte ptr [ebx + 0x38], 7 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx + 0x38u))); uint8_t b = (uint8_t)(0x7u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8dd2a7: jne 0x8dd2ca */
  if (!zf) goto L_8dd2ca;
L_8dd2a9: /* 8dd2a9: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8dd2ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dd2ad: mov ecx, dword ptr [ebx + 0xac] */
  ecx = R32((uint32_t)(ebx + 0xacu));
/* 8dd2b3: mov ebx, dword ptr [esi + ecx + 0x1c] */
  ebx = R32((uint32_t)(esi + ecx + 0x1cu));
/* 8dd2b7: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 8dd2ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dd2bb: xor eax, eax */
  eax = 0;
/* 8dd2bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dd2be: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8dd2c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dd2c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dd2c3: call 0x8dbf20 */
  esp -= 4; W32(esp, 0x8dd2c8u); SPILL(); f_8dbf20(); if (g_unwind) return; RELOAD();
/* 8dd2c8: jmp 0x8dd2e9 */
  goto L_8dd2e9;
L_8dd2ca: /* 8dd2ca: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8dd2cd: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8dd2d0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dd2d1: mov edx, dword ptr [ebx + 0xac] */
  edx = R32((uint32_t)(ebx + 0xacu));
/* 8dd2d7: mov ebx, dword ptr [esi + edx + 0x1c] */
  ebx = R32((uint32_t)(esi + edx + 0x1cu));
/* 8dd2db: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 8dd2de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dd2df: xor eax, eax */
  eax = 0;
/* 8dd2e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dd2e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dd2e3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dd2e4: call 0x8dc0a0 */
  esp -= 4; W32(esp, 0x8dd2e9u); SPILL(); f_8dc0a0(); if (g_unwind) return; RELOAD();
L_8dd2e9: /* 8dd2e9: mov ebx, eax */
  ebx = eax;
/* 8dd2eb: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8dd2ee: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dd2f1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dd2f3: jne 0x8dd300 */
  if (!zf) goto L_8dd300;
L_8dd2f5: /* 8dd2f5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dd2f7: jne 0x8dd300 */
  if (!zf) goto L_8dd300;
L_8dd2f9: /* 8dd2f9: mov dword ptr [ebp - 0x1c], 1 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x1u);
L_8dd300: /* 8dd300: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8dd303: mov ecx, dword ptr [eax + 0xac] */
  ecx = R32((uint32_t)(eax + 0xacu));
/* 8dd309: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dd30b: lea ecx, [esi + ecx + 0x1c] */
  ecx = (uint32_t)(esi + ecx + 0x1cu);
/* 8dd30f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8dd311: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8dd317u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8dd317: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dd319: je 0x8dd32a */
  if (zf) goto L_8dd32a;
L_8dd31b: /* 8dd31b: mov eax, edi */
  eax = edi;
/* 8dd31d: imul eax, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  eax = (uint32_t)r;
  }
/* 8dd321: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8dd322: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8dd324: mov edi, eax */
  edi = eax;
/* 8dd326: sar edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* 8dd328: jmp 0x8dd33b */
  goto L_8dd33b;
L_8dd32a: /* 8dd32a: imul edi, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  edi = (uint32_t)r;
  }
/* 8dd32e: xor eax, eax */
  eax = 0;
/* 8dd330: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dd332: je 0x8dd338 */
  if (zf) goto L_8dd338;
L_8dd334: /* 8dd334: shl edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8dd336: jmp 0x8dd33b */
  goto L_8dd33b;
L_8dd338: /* 8dd338: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
L_8dd33b: /* 8dd33b: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  ebx = r;
  }
/* 8dd33d: sbb ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  ebx = r;
  }
/* 8dd33f: and ebx, 8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8dd342: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dd344: mov eax, edi */
  eax = edi;
/* 8dd346: jge 0x8dd34a */
  if ((sf == of)) goto L_8dd34a;
L_8dd348: /* 8dd348: mov eax, ebx */
  eax = ebx;
L_8dd34a: /* 8dd34a: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8dd34d: mov edx, dword ptr [ebx + 0xac] */
  edx = R32((uint32_t)(ebx + 0xacu));
/* 8dd353: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8dd355: lea ecx, [esi + edx + 0x1c] */
  ecx = (uint32_t)(esi + edx + 0x1cu);
/* 8dd359: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dd35a: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8dd360u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8dd360: mov eax, dword ptr [ebx + 0xac] */
  eax = R32((uint32_t)(ebx + 0xacu));
/* 8dd366: mov ecx, dword ptr [esi + eax + 0x1c] */
  ecx = R32((uint32_t)(esi + eax + 0x1cu));
/* 8dd36a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dd36b: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8dd36e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dd36f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dd370: call 0x6ca83f */
  esp -= 4; W32(esp, 0x8dd375u); SPILL(); f_6ca83f(); if (g_unwind) return; RELOAD();
/* 8dd375: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 8dd37b: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8dd37d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8dd37f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dd382: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dd383: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x8dd386u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dd386: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8dd389: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8dd38a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8dd38d: mov esi, eax */
  esi = eax;
/* 8dd38f: jmp 0x8dd240 */
  goto L_8dd240;
L_8dd3c4: /* 8dd3c4: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8dd3c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dd3c9: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8dd3cc: lea eax, [eax + eax + 3] */
  eax = (uint32_t)(eax + eax + 0x3u);
/* 8dd3d0: mov byte ptr [ebx + 0x38], al */
  W8((uint32_t)(ebx + 0x38u), (eax & 0xffu));
L_8dd3d3: /* 8dd3d3: movzx eax, byte ptr [ebx + 0x38] */
  eax = (uint32_t)(R8((uint32_t)(ebx + 0x38u)));
/* 8dd3d7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8dd3da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dd3db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dd3dc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8dd3e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dd3e4: mov esp, ebp */
  esp = ebp;
/* 8dd3e6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dd3e7: ret  */
  esp += 4; SPILL(); return;
}

void f_8dd394(void) {
  LOAD_REGS();
L_8dd394: /* 8dd394: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8dd397: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8dd39c: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8dd39f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dd3a0: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 8dd3a3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8dd3a8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8dd3a8(); return;
}

void f_8dd3a8(void) {
  LOAD_REGS();
L_8dd3a8: /* 8dd3a8: push 0xa1d62c */
  { uint32_t v = 0xa1d62cu; esp -= 4; W32(esp, v); }
/* 8dd3ad: push 0xaed7bc */
  { uint32_t v = 0xaed7bcu; esp -= 4; W32(esp, v); }
/* 8dd3b2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8dd3b8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8dd3b8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dd3bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dd3bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dd3bf: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8dd3c4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8dd3c4: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8dd3c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dd3c9: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8dd3cc: lea eax, [eax + eax + 3] */
  eax = (uint32_t)(eax + eax + 0x3u);
/* 8dd3d0: mov byte ptr [ebx + 0x38], al */
  W8((uint32_t)(ebx + 0x38u), (eax & 0xffu));
/* 8dd3d3: movzx eax, byte ptr [ebx + 0x38] */
  eax = (uint32_t)(R8((uint32_t)(ebx + 0x38u)));
/* 8dd3d7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8dd3da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dd3db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dd3dc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8dd3e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dd3e4: mov esp, ebp */
  esp = ebp;
/* 8dd3e6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dd3e7: ret  */
  esp += 4; SPILL(); return;
}

void f_8dd470(void) {
  LOAD_REGS();
L_8dd470: /* 8dd470: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8dd471: mov ebp, esp */
  ebp = esp;
/* 8dd473: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8dd475: push 0x9d86b0 */
  { uint32_t v = 0x9d86b0u; esp -= 4; W32(esp, v); }
/* 8dd47a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8dd480: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dd481: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8dd488: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8dd48b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dd48c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8dd48f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dd490: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dd491: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8dd494: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 8dd496: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dd497: mov edi, ecx */
  edi = ecx;
/* 8dd499: mov esi, edx */
  esi = edx;
/* 8dd49b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8dd4a2: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8dd4a8u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8dd4a8: mov ecx, ebx */
  ecx = ebx;
/* 8dd4aa: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8dd4b0u); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8dd4b0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dd4b2: je 0x8dd5b5 */
  if (zf) goto L_8dd5b5;
L_8dd4b8: /* 8dd4b8: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8dd4bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dd4bc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dd4bd: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8dd4c3u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8dd4c3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8dd4c6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dd4c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dd4ca: mov ecx, edi */
  ecx = edi;
/* 8dd4cc: call 0x6c8ef4 */
  esp -= 4; W32(esp, 0x8dd4d1u); SPILL(); f_6c8ef4(); if (g_unwind) return; RELOAD();
/* 8dd4d1: mov ecx, dword ptr [0xce9ec0] */
  ecx = R32((uint32_t)(0xce9ec0u));
/* 8dd4d7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dd4d9: jne 0x8dd4e6 */
  if (!zf) goto L_8dd4e6;
L_8dd4db: /* 8dd4db: mov edx, dword ptr [esi + 0x84] */
  edx = R32((uint32_t)(esi + 0x84u));
/* 8dd4e1: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8dd4e4: jmp 0x8dd4fe */
  goto L_8dd4fe;
L_8dd4e6: /* 8dd4e6: movzx eax, byte ptr [esi + 0x80] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x80u)));
/* 8dd4ed: mov ebx, dword ptr [esi + 0x84] */
  ebx = R32((uint32_t)(esi + 0x84u));
/* 8dd4f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dd4f4: call 0x6c2e32 */
  esp -= 4; W32(esp, 0x8dd4f9u); SPILL(); f_6c2e32(); if (g_unwind) return; RELOAD();
/* 8dd4f9: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8dd4fb: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
L_8dd4fe: /* 8dd4fe: mov eax, dword ptr [esi + 0x8c] */
  eax = R32((uint32_t)(esi + 0x8cu));
/* 8dd504: mov esi, dword ptr [esi + 0x88] */
  esi = R32((uint32_t)(esi + 0x88u));
/* 8dd50a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8dd50d: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dd50f: jge 0x8dd516 */
  if ((sf == of)) goto L_8dd516;
L_8dd511: /* 8dd511: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 8dd514: jmp 0x8dd51d */
  goto L_8dd51d;
L_8dd516: /* 8dd516: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dd518: jl 0x8dd51d */
  if ((sf != of)) goto L_8dd51d;
L_8dd51a: /* 8dd51a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_8dd51d: /* 8dd51d: xor ebx, ebx */
  ebx = 0;
/* 8dd51f: nop  */
L_8dd520: /* 8dd520: cmp ebx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dd523: jge 0x8dd61a */
  if ((sf == of)) goto L_8dd61a;
L_8dd529: /* 8dd529: mov eax, dword ptr [0xcfa408] */
  eax = R32((uint32_t)(0xcfa408u));
/* 8dd52e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8dd530: mov edx, dword ptr [0xcfa40c] */
  edx = R32((uint32_t)(0xcfa40cu));
/* 8dd536: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8dd539: test byte ptr [edx], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8dd53c: je 0x8dd543 */
  if (zf) goto L_8dd543;
L_8dd53e: /* 8dd53e: cmp ebx, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dd541: jge 0x8dd54e */
  if ((sf == of)) goto L_8dd54e;
L_8dd543: /* 8dd543: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
/* 8dd549: mov eax, dword ptr [0xcfa408] */
  eax = R32((uint32_t)(0xcfa408u));
L_8dd54e: /* 8dd54e: mov ecx, dword ptr [0xcfa40c] */
  ecx = R32((uint32_t)(0xcfa40cu));
/* 8dd554: test byte ptr [ecx], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8dd557: je 0x8dd55f */
  if (zf) goto L_8dd55f;
L_8dd559: /* 8dd559: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
L_8dd55f: /* 8dd55f: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 8dd561: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8dd563: mov ecx, edi */
  ecx = edi;
/* 8dd565: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8dd56bu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8dd56b: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 8dd56e: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8dd570: lea esi, [eax + edx*8] */
  esi = (uint32_t)(eax + edx*8);
/* 8dd573: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dd575: je 0x8dd595 */
  if (zf) goto L_8dd595;
L_8dd577: /* 8dd577: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8dd579: lea ecx, [esi + 0x1c] */
  ecx = (uint32_t)(esi + 0x1cu);
/* 8dd57c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dd57e: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x8dd584u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 8dd584: xor eax, eax */
  eax = 0;
/* 8dd586: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 8dd589: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 8dd58c: mov dword ptr [esi + 0x10], 0x9f7f0c */
  W32((uint32_t)(esi + 0x10u), 0x9f7f0cu);
/* 8dd593: jmp 0x8dd597 */
  goto L_8dd597;
L_8dd595: /* 8dd595: xor esi, esi */
  esi = 0;
L_8dd597: /* 8dd597: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8dd59a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dd59b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dd59c: call 0x6cb2b7 */
  esp -= 4; W32(esp, 0x8dd5a1u); SPILL(); f_6cb2b7(); if (g_unwind) return; RELOAD();
/* 8dd5a1: mov edx, dword ptr [0xcfa408] */
  edx = R32((uint32_t)(0xcfa408u));
/* 8dd5a7: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8dd5aa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dd5ad: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8dd5af: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8dd5b0: jmp 0x8dd520 */
  goto L_8dd520;
L_8dd5b5: /* 8dd5b5: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8dd5b8: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 8dd5bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dd5bc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dd5bd: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8dd5c0: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8dd5c6u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8dd5c6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dd5c9: xor esi, esi */
  esi = 0;
/* 8dd5cb: jmp 0x8dd5d0 */
  goto L_8dd5d0;
L_8dd5d0: /* 8dd5d0: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dd5d3: jge 0x8dd61a */
  if ((sf == of)) goto L_8dd61a;
L_8dd5d5: /* 8dd5d5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8dd5d7: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 8dd5da: lea edx, [ecx + eax*8] */
  edx = (uint32_t)(ecx + eax*8);
/* 8dd5dd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dd5de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dd5df: call 0x6cb2b7 */
  esp -= 4; W32(esp, 0x8dd5e4u); SPILL(); f_6cb2b7(); if (g_unwind) return; RELOAD();
/* 8dd5e4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dd5e7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8dd5e8: jmp 0x8dd5d0 */
  goto L_8dd5d0;
L_8dd61a: /* 8dd61a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8dd61d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dd61e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dd61f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8dd626: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dd627: mov esp, ebp */
  esp = ebp;
/* 8dd629: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dd62a: ret  */
  esp += 4; SPILL(); return;
}

void f_8dd5cd(void) {
  LOAD_REGS();
L_8dd5cd: /* 8dd5cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8dd5d0: /* 8dd5d0: cmp esi, dword ptr [edi + 4] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dd5d3: jge 0x8dd61a */
  if ((sf == of)) goto L_8dd61a;
L_8dd5d5: /* 8dd5d5: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8dd5d7: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 8dd5da: lea edx, [ecx + eax*8] */
  edx = (uint32_t)(ecx + eax*8);
/* 8dd5dd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dd5de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dd5df: call 0x6cb2b7 */
  esp -= 4; W32(esp, 0x8dd5e4u); SPILL(); f_6cb2b7(); if (g_unwind) return; RELOAD();
/* 8dd5e4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dd5e7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8dd5e8: jmp 0x8dd5d0 */
  goto L_8dd5d0;
L_8dd61a: /* 8dd61a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8dd61d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dd61e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dd61f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8dd626: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dd627: mov esp, ebp */
  esp = ebp;
/* 8dd629: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dd62a: ret  */
  esp += 4; SPILL(); return;
}

void f_8dd5ea(void) {
  LOAD_REGS();
L_8dd5ea: /* 8dd5ea: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8dd5ed: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8dd5f2: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8dd5f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dd5f6: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8dd5f9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8dd5feu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8dd5fe(); return;
}

void f_8dd5fe(void) {
  LOAD_REGS();
L_8dd5fe: /* 8dd5fe: push 0xa1d660 */
  { uint32_t v = 0xa1d660u; esp -= 4; W32(esp, v); }
/* 8dd603: push 0xaed4e4 */
  { uint32_t v = 0xaed4e4u; esp -= 4; W32(esp, v); }
/* 8dd608: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8dd60eu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8dd60e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dd611: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dd613: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dd615: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8dd61au); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8dd61a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8dd61d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dd61e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dd61f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8dd626: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dd627: mov esp, ebp */
  esp = ebp;
/* 8dd629: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dd62a: ret  */
  esp += 4; SPILL(); return;
}

void f_8dd6a0(void) {
  LOAD_REGS();
L_8dd6a0: /* 8dd6a0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8dd6a1: mov ebp, esp */
  ebp = esp;
/* 8dd6a3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8dd6a5: push 0x9d86c0 */
  { uint32_t v = 0x9d86c0u; esp -= 4; W32(esp, v); }
/* 8dd6aa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8dd6b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dd6b1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8dd6b8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8dd6bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dd6bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dd6bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dd6be: xor edi, edi */
  edi = 0;
/* 8dd6c0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8dd6c3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8dd6c6: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8dd6c9: call dword ptr [0xcfa230] */
  esp -= 4; W32(esp, 0x8dd6cfu); SPILL(); f_4e4110(); if (g_unwind) return; /* Core!?PostLoad@UObject@@UAEXXZ */ RELOAD();
/* 8dd6cf: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8dd6d2: mov cl, byte ptr [eax + 0x38] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x38u))) & 0xffu);
/* 8dd6d5: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8dd6d7: jne 0x8dd76c */
  if (!zf) goto L_8dd76c;
L_8dd6dd: /* 8dd6dd: cmp dword ptr [eax + 0x50], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x50u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8dd6e0: jne 0x8dd765 */
  if (!zf) goto L_8dd765;
L_8dd6e6: /* 8dd6e6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dd6e7: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8dd6ea: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8dd6f0u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8dd6f0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8dd6f3: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x8dd6f9u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 8dd6f9: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8dd6ff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8dd701: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8dd704: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dd705: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dd706: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dd707: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dd708: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dd709: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dd70a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dd70b: push 0xcea3f8 */
  { uint32_t v = 0xcea3f8u; esp -= 4; W32(esp, v); }
/* 8dd710: call dword ptr [0xcfa1e4] */
  esp -= 4; W32(esp, 0x8dd716u); SPILL(); f_4e2b1c(); if (g_unwind) return; /* Core!?StaticAllocateObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@11@Z */ RELOAD();
/* 8dd716: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dd719: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8dd71b: je 0x8dd726 */
  if (zf) goto L_8dd726;
L_8dd71d: /* 8dd71d: mov ecx, eax */
  ecx = eax;
/* 8dd71f: call 0x6c39c2 */
  esp -= 4; W32(esp, 0x8dd724u); SPILL(); f_6c39c2(); if (g_unwind) return; RELOAD();
/* 8dd724: jmp 0x8dd728 */
  goto L_8dd728;
L_8dd726: /* 8dd726: xor eax, eax */
  eax = 0;
L_8dd728: /* 8dd728: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8dd72b: mov dword ptr [edx + 0x50], eax */
  W32((uint32_t)(edx + 0x50u), eax);
/* 8dd72e: xor ebx, ebx */
  ebx = 0;
L_8dd730: /* 8dd730: cmp ebx, 0x100 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dd736: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8dd739: jge 0x8dd765 */
  if ((sf == of)) goto L_8dd765;
L_8dd73b: /* 8dd73b: mov esi, dword ptr [eax + 0x50] */
  esi = R32((uint32_t)(eax + 0x50u));
/* 8dd73e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8dd740: add esi, 0x28 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8dd743: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8dd745: mov ecx, esi */
  ecx = esi;
/* 8dd747: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8dd74du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8dd74d: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8dd74f: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8dd752: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8dd754: je 0x8dd762 */
  if (zf) goto L_8dd762;
L_8dd756: /* 8dd756: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 8dd758: mov byte ptr [eax + 1], bl */
  W8((uint32_t)(eax + 0x1u), (ebx & 0xffu));
/* 8dd75b: mov byte ptr [eax + 2], bl */
  W8((uint32_t)(eax + 0x2u), (ebx & 0xffu));
/* 8dd75e: mov byte ptr [eax + 3], 0 */
  W8((uint32_t)(eax + 0x3u), 0x0u);
L_8dd762: /* 8dd762: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8dd763: jmp 0x8dd730 */
  goto L_8dd730;
L_8dd765: /* 8dd765: mov cl, byte ptr [eax + 0x38] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x38u))) & 0xffu);
/* 8dd768: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8dd76a: je 0x8dd777 */
  if (zf) goto L_8dd777;
L_8dd76c: /* 8dd76c: cmp dword ptr [eax + 0x50], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x50u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8dd76f: je 0x8dd777 */
  if (zf) goto L_8dd777;
L_8dd771: /* 8dd771: mov dword ptr [eax + 0x50], edi */
  W32((uint32_t)(eax + 0x50u), edi);
/* 8dd774: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_8dd777: /* 8dd777: mov ecx, dword ptr [eax + 0x48] */
  ecx = R32((uint32_t)(eax + 0x48u));
/* 8dd77a: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dd77c: mov edx, dword ptr [eax + 0x40] */
  edx = R32((uint32_t)(eax + 0x40u));
/* 8dd77f: jge 0x8dd785 */
  if ((sf == of)) goto L_8dd785;
L_8dd781: /* 8dd781: xor ecx, ecx */
  ecx = 0;
/* 8dd783: jmp 0x8dd78b */
  goto L_8dd78b;
L_8dd785: /* 8dd785: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dd787: jl 0x8dd78b */
  if ((sf != of)) goto L_8dd78b;
L_8dd789: /* 8dd789: mov ecx, edx */
  ecx = edx;
L_8dd78b: /* 8dd78b: mov dword ptr [eax + 0x48], ecx */
  W32((uint32_t)(eax + 0x48u), ecx);
/* 8dd78e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8dd791: mov eax, dword ptr [ecx + 0x4c] */
  eax = R32((uint32_t)(ecx + 0x4cu));
/* 8dd794: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dd796: mov edx, dword ptr [ecx + 0x44] */
  edx = R32((uint32_t)(ecx + 0x44u));
/* 8dd799: jge 0x8dd79f */
  if ((sf == of)) goto L_8dd79f;
L_8dd79b: /* 8dd79b: xor eax, eax */
  eax = 0;
/* 8dd79d: jmp 0x8dd7a5 */
  goto L_8dd7a5;
L_8dd79f: /* 8dd79f: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dd7a1: jl 0x8dd7a5 */
  if ((sf != of)) goto L_8dd7a5;
L_8dd7a3: /* 8dd7a3: mov eax, edx */
  eax = edx;
L_8dd7a5: /* 8dd7a5: mov dword ptr [ecx + 0x4c], eax */
  W32((uint32_t)(ecx + 0x4cu), eax);
/* 8dd7a8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8dd7ab: mov edx, dword ptr [eax + 0xb0] */
  edx = R32((uint32_t)(eax + 0xb0u));
/* 8dd7b1: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8dd7b2: mov dword ptr [eax + 0x8c], edx */
  W32((uint32_t)(eax + 0x8cu), edx);
/* 8dd7b8: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8dd7bb: xor eax, eax */
  eax = 0;
/* 8dd7bd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8dd7c0: /* 8dd7c0: cmp eax, dword ptr [esi + 0xb0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xb0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dd7c6: jge 0x8dd800 */
  if ((sf == of)) goto L_8dd800;
L_8dd7c8: /* 8dd7c8: mov edx, dword ptr [esi + 0xac] */
  edx = R32((uint32_t)(esi + 0xacu));
/* 8dd7ce: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 8dd7d1: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* 8dd7d4: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8dd7d7: cmp edx, 0x40 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dd7da: jl 0x8dd7f7 */
  if ((sf != of)) goto L_8dd7f7;
L_8dd7dc: /* 8dd7dc: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8dd7df: cmp ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dd7e2: jge 0x8dd7f4 */
  if ((sf == of)) goto L_8dd7f4;
L_8dd7e4: /* 8dd7e4: cmp edx, 0x100 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dd7ea: jge 0x8dd7f4 */
  if ((sf == of)) goto L_8dd7f4;
L_8dd7ec: /* 8dd7ec: cmp ecx, 0x100 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dd7f2: jl 0x8dd7f7 */
  if ((sf != of)) goto L_8dd7f7;
L_8dd7f4: /* 8dd7f4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8dd7f5: jmp 0x8dd7c0 */
  goto L_8dd7c0;
L_8dd7f7: /* 8dd7f7: mov dword ptr [esi + 0x8c], eax */
  W32((uint32_t)(esi + 0x8cu), eax);
/* 8dd7fd: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_8dd800: /* 8dd800: mov dword ptr [esi + 0xa8], edi */
  W32((uint32_t)(esi + 0xa8u), edi);
/* 8dd806: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8dd808: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8dd80b: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8dd80e: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8dd811: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8dd814: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8dd816: jge 0x8dd81e */
  if ((sf == of)) goto L_8dd81e;
L_8dd818: /* 8dd818: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8dd81e: /* 8dd81e: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8dd821: fmul qword ptr [0xa0c228] */
  ST0 = ST0 * (F64((uint32_t)(0xa0c228u)));
/* 8dd827: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8dd829: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8dd82c: jge 0x8dd834 */
  if ((sf == of)) goto L_8dd834;
L_8dd82e: /* 8dd82e: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8dd834: /* 8dd834: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8dd83a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8dd83c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8dd83f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8dd842: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8dd844: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dd845: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dd846: fadd qword ptr [0xa0c218] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c218u)));
/* 8dd84c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dd84d: fstp qword ptr [eax + 0xc0] */
  WF64((uint32_t)(eax + 0xc0u), ST0); FPOP();
/* 8dd853: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8dd85a: mov esp, ebp */
  esp = ebp;
/* 8dd85c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dd85d: ret  */
  esp += 4; SPILL(); return;
}

void f_8dd85e(void) {
  LOAD_REGS();
L_8dd85e: /* 8dd85e: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8dd861: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8dd866: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 8dd869: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dd86a: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8dd86d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8dd872u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8dd872(); return;
}

void f_8dd872(void) {
  LOAD_REGS();
L_8dd872: /* 8dd872: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 8dd878: push 0xa1d684 */
  { uint32_t v = 0xa1d684u; esp -= 4; W32(esp, v); }
/* 8dd87d: push 0xaed510 */
  { uint32_t v = 0xaed510u; esp -= 4; W32(esp, v); }
/* 8dd882: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8dd884u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dd884: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8dd887: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dd88a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dd88c: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8dd892u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8dd892: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dd893: push 0xaed518 */
  { uint32_t v = 0xaed518u; esp -= 4; W32(esp, v); }
/* 8dd898: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8dd89au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dd89a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dd89d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dd89f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dd8a1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8dd8a6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8dd8a6: guest_badaddr(0x8dd8a6); return;
}

void f_8dd940(void) {
  LOAD_REGS();
L_8dd940: /* 8dd940: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8dd941: mov ebp, esp */
  ebp = esp;
/* 8dd943: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8dd945: push 0x9d86d0 */
  { uint32_t v = 0x9d86d0u; esp -= 4; W32(esp, v); }
/* 8dd94a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8dd950: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dd951: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8dd958: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8dd95b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8dd95c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8dd95d: mov esi, ecx */
  esi = ecx;
/* 8dd95f: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8dd962: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
/* 8dd965: test eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dd967: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8dd968: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8dd96b: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 8dd96e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8dd975: je 0x8dd98f */
  if (zf) goto L_8dd98f;
L_8dd977: /* 8dd977: push 0x189 */
  { uint32_t v = 0x189u; esp -= 4; W32(esp, v); }
/* 8dd97c: push 0xaed548 */
  { uint32_t v = 0xaed548u; esp -= 4; W32(esp, v); }
/* 8dd981: push 0xaed554 */
  { uint32_t v = 0xaed554u; esp -= 4; W32(esp, v); }
/* 8dd986: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8dd98cu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8dd98c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8dd98f: /* 8dd98f: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 8dd992: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
/* 8dd995: test eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dd997: je 0x8dd9b1 */
  if (zf) goto L_8dd9b1;
L_8dd999: /* 8dd999: push 0x18a */
  { uint32_t v = 0x18au; esp -= 4; W32(esp, v); }
/* 8dd99e: push 0xaed56c */
  { uint32_t v = 0xaed56cu; esp -= 4; W32(esp, v); }
/* 8dd9a3: push 0xaed578 */
  { uint32_t v = 0xaed578u; esp -= 4; W32(esp, v); }
/* 8dd9a8: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8dd9aeu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8dd9ae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8dd9b1: /* 8dd9b1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8dd9b4: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8dd9b7: mov edi, dword ptr [0xcfa2b0] */
  edi = R32((uint32_t)(0xcfa2b0u));
/* 8dd9bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dd9be: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 8dd9c1: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 8dd9c4: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 8dd9c7: mov dword ptr [esi + 0x44], ecx */
  W32((uint32_t)(esi + 0x44u), ecx);
/* 8dd9ca: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8dd9ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dd9cc: mov byte ptr [esi + 0x3b], al */
  W8((uint32_t)(esi + 0x3bu), (eax & 0xffu));
/* 8dd9cf: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 8dd9d2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dd9d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dd9d6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8dd9d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dd9d8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dd9db: lea edi, [esi + 0xac] */
  edi = (uint32_t)(esi + 0xacu);
/* 8dd9e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8dd9e3: mov ecx, edi */
  ecx = edi;
/* 8dd9e5: mov byte ptr [esi + 0x3c], al */
  W8((uint32_t)(esi + 0x3cu), (eax & 0xffu));
/* 8dd9e8: call 0x6c8ef4 */
  esp -= 4; W32(esp, 0x8dd9edu); SPILL(); f_6c8ef4(); if (g_unwind) return; RELOAD();
/* 8dd9ed: mov al, byte ptr [esi + 0x38] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x38u))) & 0xffu);
/* 8dd9f0: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8dd9f2: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 8dd9f4: mov ecx, edi */
  ecx = edi;
/* 8dd9f6: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8dd9f8: jne 0x8dda18 */
  if (!zf) goto L_8dda18;
L_8dd9fa: /* 8dd9fa: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8dda00u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8dda00: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8dda02: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 8dda05: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* 8dda08: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dda0a: je 0x8dda6e */
  if (zf) goto L_8dda6e;
L_8dda0c: /* 8dda0c: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 8dda0f: imul eax, dword ptr [esi + 0x40] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x40u)));
  eax = (uint32_t)r;
  }
/* 8dda13: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8dda16: jmp 0x8dda37 */
  goto L_8dda37;
L_8dda18: /* 8dda18: cmp al, 0xa */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8dda1a: jne 0x8dda4b */
  if (!zf) goto L_8dda4b;
L_8dda1c: /* 8dda1c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8dda22u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8dda22: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8dda24: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 8dda27: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* 8dda2a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dda2c: je 0x8dda6e */
  if (zf) goto L_8dda6e;
L_8dda2e: /* 8dda2e: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 8dda31: imul eax, dword ptr [esi + 0x40] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x40u)));
  eax = (uint32_t)r;
  }
/* 8dda35: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
L_8dda37: /* 8dda37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dda38: xor edx, edx */
  edx = 0;
/* 8dda3a: mov dl, byte ptr [esi + 0x3c] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3cu))) & 0xffu);
/* 8dda3d: xor eax, eax */
  eax = 0;
/* 8dda3f: mov al, byte ptr [esi + 0x3b] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* 8dda42: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dda43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dda44: call 0x6cc24d */
  esp -= 4; W32(esp, 0x8dda49u); SPILL(); f_6cc24d(); if (g_unwind) return; RELOAD();
/* 8dda49: jmp 0x8dda6e */
  goto L_8dda6e;
L_8dda4b: /* 8dda4b: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8dda51u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8dda51: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8dda53: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 8dda56: lea ecx, [edx + ecx*8] */
  ecx = (uint32_t)(edx + ecx*8);
/* 8dda59: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dda5b: je 0x8dda6e */
  if (zf) goto L_8dda6e;
L_8dda5d: /* 8dda5d: xor eax, eax */
  eax = 0;
/* 8dda5f: mov al, byte ptr [esi + 0x3c] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3cu))) & 0xffu);
/* 8dda62: xor edx, edx */
  edx = 0;
/* 8dda64: mov dl, byte ptr [esi + 0x3b] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x3bu))) & 0xffu);
/* 8dda67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8dda68: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dda69: call 0x6cb68b */
  esp -= 4; W32(esp, 0x8dda6eu); SPILL(); f_6cb68b(); if (g_unwind) return; RELOAD();
L_8dda6e: /* 8dda6e: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8dda70: call 0x6c7eff */
  esp -= 4; W32(esp, 0x8dda75u); SPILL(); f_6c7eff(); if (g_unwind) return; RELOAD();
/* 8dda75: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8dda78: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dda79: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dda7a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8dda81: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dda82: mov esp, ebp */
  esp = ebp;
/* 8dda84: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dda85: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8dda88(void) {
  LOAD_REGS();
L_8dda88: /* 8dda88: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8dda8b: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8dda90: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8dda93: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8dda94: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8dda97: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8dda9cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8dda9c(); return;
}

void f_8dda9c(void) {
  LOAD_REGS();
L_8dda9c: /* 8dda9c: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 8ddaa2: push 0xa1d6b4 */
  { uint32_t v = 0xa1d6b4u; esp -= 4; W32(esp, v); }
/* 8ddaa7: push 0xaed590 */
  { uint32_t v = 0xaed590u; esp -= 4; W32(esp, v); }
/* 8ddaac: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8ddaaeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ddaae: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ddab1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ddab4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ddab6: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8ddabcu); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8ddabc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ddabd: push 0xaed598 */
  { uint32_t v = 0xaed598u; esp -= 4; W32(esp, v); }
/* 8ddac2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8ddac4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ddac4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ddac7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ddac9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ddacb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ddad0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8ddad0: guest_badaddr(0x8ddad0); return;
}

void f_8ddb50(void) {
  LOAD_REGS();
L_8ddb50: /* 8ddb50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ddb51: mov ebp, esp */
  ebp = esp;
/* 8ddb53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ddb55: push 0x9d86e0 */
  { uint32_t v = 0x9d86e0u; esp -= 4; W32(esp, v); }
/* 8ddb5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ddb60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ddb61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ddb68: sub esp, 0x2c0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2c0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ddb6e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ddb6f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ddb70: mov esi, ecx */
  esi = ecx;
/* 8ddb72: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* 8ddb75: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ddb76: xor edi, edi */
  edi = 0;
/* 8ddb78: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ddb7a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ddb7d: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 8ddb80: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8ddb83: je 0x8ddb8a */
  if (zf) goto L_8ddb8a;
L_8ddb85: /* 8ddb85: mov ebx, dword ptr [eax + 0x28] */
  ebx = R32((uint32_t)(eax + 0x28u));
/* 8ddb88: jmp 0x8ddb8c */
  goto L_8ddb8c;
L_8ddb8a: /* 8ddb8a: xor ebx, ebx */
  ebx = 0;
L_8ddb8c: /* 8ddb8c: movzx ecx, byte ptr [esi + 0x38] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x38u)));
/* 8ddb90: cmp ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8ddb93: mov dword ptr [ebp - 0x5c], ebx */
  W32((uint32_t)(ebp + 0xffffffa4u), ebx);
/* 8ddb96: ja 0x8de9e8 */
  if ((!cf && !zf)) goto L_8de9e8;
L_8ddb9c: /* 8ddb9c: movzx edx, byte ptr [ecx + 0x8dea74] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x8dea74u)));
/* 8ddba3: jmp dword ptr [edx*4 + 0x8dea60] */
  switch (R32((uint32_t)(edx*4 + 0x8dea60u))) {
    case 0x8ddbaau: goto L_8ddbaa;
    case 0x8ddc4cu: goto L_8ddc4c;
    case 0x8ddd01u: goto L_8ddd01;
    case 0x8de923u: goto L_8de923;
    case 0x8de9e8u: goto L_8de9e8;
    default: guest_badjump(0x8ddba3, R32((uint32_t)(edx*4 + 0x8dea60u))); return;
  }
L_8ddbaa: /* 8ddbaa: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 8ddbb1: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 8ddbb8: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8ddbbf: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 8ddbc6: jmp 0x8ddbd0 */
  goto L_8ddbd0;
L_8ddbd0: /* 8ddbd0: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* 8ddbd6: cmp edi, dword ptr [eax + 0x20] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ddbd9: jge 0x8ddc10 */
  if ((sf == of)) goto L_8ddc10;
L_8ddbdb: /* 8ddbdb: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 8ddbde: mov al, byte ptr [edi + eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + eax))) & 0xffu);
/* 8ddbe1: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8ddbe4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ddbe5: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8ddbe8: mov byte ptr [ebp - 0x1c], al */
  W8((uint32_t)(ebp + 0xffffffe4u), (eax & 0xffu));
/* 8ddbeb: mov byte ptr [ebp - 0x1b], al */
  W8((uint32_t)(ebp + 0xffffffe5u), (eax & 0xffu));
/* 8ddbee: mov byte ptr [ebp - 0x1a], al */
  W8((uint32_t)(ebp + 0xffffffe6u), (eax & 0xffu));
/* 8ddbf1: mov byte ptr [ebp - 0x19], al */
  W8((uint32_t)(ebp + 0xffffffe7u), (eax & 0xffu));
/* 8ddbf4: call 0x6c3044 */
  esp -= 4; W32(esp, 0x8ddbf9u); SPILL(); f_6c3044(); if (g_unwind) return; RELOAD();
/* 8ddbf9: lea edx, [ebp - 0x70] */
  edx = (uint32_t)(ebp + 0xffffff90u);
/* 8ddbfc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ddbfd: lea eax, [ebp - 0xa0] */
  eax = (uint32_t)(ebp + 0xffffff60u);
/* 8ddc03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ddc04: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8ddc07: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8ddc0du); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8ddc0d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8ddc0e: jmp 0x8ddbd0 */
  goto L_8ddbd0;
L_8ddc10: /* 8ddc10: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* 8ddc16: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 8ddc19: lea edi, [esi + 0xac] */
  edi = (uint32_t)(esi + 0xacu);
/* 8ddc1f: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8ddc22: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8ddc25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ddc26: lea eax, [ebp - 0xf0] */
  eax = (uint32_t)(ebp + 0xffffff10u);
/* 8ddc2c: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8ddc2f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8ddc32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ddc33: call dword ptr [0xcfac60] */
  esp -= 4; W32(esp, 0x8ddc39u); SPILL(); f_4e3701(); if (g_unwind) return; /* Core!??KFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 8ddc39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ddc3a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8ddc3d: call 0x6c576d */
  esp -= 4; W32(esp, 0x8ddc42u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 8ddc42: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8ddc44: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* 8ddc47: jmp 0x8ddd8a */
  goto L_8ddd8a;
L_8ddc4c: /* 8ddc4c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ddc4e: jne 0x8ddc68 */
  if (!zf) goto L_8ddc68;
L_8ddc50: /* 8ddc50: push 0x1b8 */
  { uint32_t v = 0x1b8u; esp -= 4; W32(esp, v); }
/* 8ddc55: push 0xaed5a4 */
  { uint32_t v = 0xaed5a4u; esp -= 4; W32(esp, v); }
/* 8ddc5a: push 0xaed5b0 */
  { uint32_t v = 0xaed5b0u; esp -= 4; W32(esp, v); }
/* 8ddc5f: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8ddc65u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8ddc65: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8ddc68: /* 8ddc68: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 8ddc6f: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 8ddc76: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8ddc7d: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 8ddc84: xor edi, edi */
  edi = 0;
/* 8ddc86: jmp 0x8ddc90 */
  goto L_8ddc90;
L_8ddc90: /* 8ddc90: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* 8ddc96: cmp edi, dword ptr [eax + 0x20] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ddc99: jge 0x8ddcc5 */
  if ((sf == of)) goto L_8ddcc5;
L_8ddc9b: /* 8ddc9b: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 8ddc9e: movzx ecx, byte ptr [eax + edi] */
  ecx = (uint32_t)(R8((uint32_t)(eax + edi)));
/* 8ddca2: lea edx, [ebp - 0xd0] */
  edx = (uint32_t)(ebp + 0xffffff30u);
/* 8ddca8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ddca9: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* 8ddcac: call 0x6c3e7c */
  esp -= 4; W32(esp, 0x8ddcb1u); SPILL(); f_6c3e7c(); if (g_unwind) return; RELOAD();
/* 8ddcb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ddcb2: lea edx, [ebp - 0xb0] */
  edx = (uint32_t)(ebp + 0xffffff50u);
/* 8ddcb8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ddcb9: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8ddcbc: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8ddcc2u); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8ddcc2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8ddcc3: jmp 0x8ddc90 */
  goto L_8ddc90;
L_8ddcc5: /* 8ddcc5: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* 8ddccb: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 8ddcce: lea edi, [esi + 0xac] */
  edi = (uint32_t)(esi + 0xacu);
/* 8ddcd4: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8ddcd7: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8ddcda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ddcdb: lea edx, [ebp - 0x90] */
  edx = (uint32_t)(ebp + 0xffffff70u);
/* 8ddce1: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8ddce4: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8ddce7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ddce8: call dword ptr [0xcfac60] */
  esp -= 4; W32(esp, 0x8ddceeu); SPILL(); f_4e3701(); if (g_unwind) return; /* Core!??KFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 8ddcee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ddcef: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8ddcf2: call 0x6c576d */
  esp -= 4; W32(esp, 0x8ddcf7u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 8ddcf7: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8ddcf9: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 8ddcfc: jmp 0x8ddd8a */
  goto L_8ddd8a;
L_8ddd01: /* 8ddd01: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 8ddd08: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 8ddd0f: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8ddd16: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 8ddd1d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8ddd20: /* 8ddd20: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* 8ddd26: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 8ddd29: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8ddd2c: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ddd2e: jge 0x8ddd53 */
  if ((sf == of)) goto L_8ddd53;
L_8ddd30: /* 8ddd30: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 8ddd33: lea edx, [ebp - 0xc0] */
  edx = (uint32_t)(ebp + 0xffffff40u);
/* 8ddd39: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ddd3a: lea ecx, [eax + edi*4] */
  ecx = (uint32_t)(eax + edi*4);
/* 8ddd3d: call 0x6c3e7c */
  esp -= 4; W32(esp, 0x8ddd42u); SPILL(); f_6c3e7c(); if (g_unwind) return; RELOAD();
/* 8ddd42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ddd43: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 8ddd46: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ddd47: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8ddd4a: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8ddd50u); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8ddd50: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8ddd51: jmp 0x8ddd20 */
  goto L_8ddd20;
L_8ddd53: /* 8ddd53: mov edx, dword ptr [esi + 0xac] */
  edx = R32((uint32_t)(esi + 0xacu));
/* 8ddd59: mov eax, dword ptr [edx + 0x20] */
  eax = R32((uint32_t)(edx + 0x20u));
/* 8ddd5c: lea edi, [esi + 0xac] */
  edi = (uint32_t)(esi + 0xacu);
/* 8ddd62: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8ddd65: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8ddd68: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ddd69: lea ecx, [ebp - 0xe0] */
  ecx = (uint32_t)(ebp + 0xffffff20u);
/* 8ddd6f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8ddd72: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ddd73: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8ddd76: call dword ptr [0xcfac60] */
  esp -= 4; W32(esp, 0x8ddd7cu); SPILL(); f_4e3701(); if (g_unwind) return; /* Core!??KFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 8ddd7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ddd7d: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8ddd80: call 0x6c576d */
  esp -= 4; W32(esp, 0x8ddd85u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 8ddd85: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8ddd87: mov dword ptr [esi + 0x5c], edx */
  W32((uint32_t)(esi + 0x5cu), edx);
L_8ddd8a: /* 8ddd8a: mov al, byte ptr [esi + 0x38] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x38u))) & 0xffu);
/* 8ddd8d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ddd8f: je 0x8ddd95 */
  if (zf) goto L_8ddd95;
L_8ddd91: /* 8ddd91: and dword ptr [esi + 0x7c], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x7cu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x7cu), r);
  }
L_8ddd95: /* 8ddd95: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 8ddd9b: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ddd9e: jle 0x8dddab */
  if ((zf || sf != of)) goto L_8dddab;
L_8ddda0: /* 8ddda0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8ddda1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ddda2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ddda4: mov ecx, edi */
  ecx = edi;
/* 8ddda6: call 0x6c982c */
  esp -= 4; W32(esp, 0x8dddabu); SPILL(); f_6c982c(); if (g_unwind) return; RELOAD();
L_8dddab: /* 8dddab: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8dddae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dddb0: je 0x8de923 */
  if (zf) goto L_8de923;
L_8dddb6: /* 8dddb6: jmp 0x8dddc0 */
  goto L_8dddc0;
L_8dddc0: /* 8dddc0: movzx eax, byte ptr [esi + 0x3b] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x3bu)));
/* 8dddc4: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 8dddca: mov edx, eax */
  edx = eax;
/* 8dddcc: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 8dddce: jns 0x8de936 */
  if (!sf) goto L_8de936;
L_8dddd4: /* 8dddd4: movzx edx, byte ptr [esi + 0x3c] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0x3cu)));
/* 8dddd8: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 8dddda: jns 0x8de936 */
  if (!sf) goto L_8de936;
L_8ddde0: /* 8ddde0: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8ddde3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ddde5: je 0x8de923 */
  if (zf) goto L_8de923;
L_8dddeb: /* 8dddeb: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 8dddf2: mov dword ptr [ebp - 0x40], 1 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x1u);
/* 8dddf9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8dde00: /* 8dde00: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8dde03: cmp eax, dword ptr [esi + 0xb0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xb0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dde09: jge 0x8de90e */
  if ((sf == of)) goto L_8de90e;
L_8dde0f: /* 8dde0f: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8dde12: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 8dde15: mov eax, dword ptr [edx + 0xac] */
  eax = R32((uint32_t)(edx + 0xacu));
/* 8dde1b: mov ebx, dword ptr [eax + ecx*8 - 0x20] */
  ebx = R32((uint32_t)(eax + ecx*8 + 0xffffffe0u));
/* 8dde1f: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 8dde25: lea esi, [eax + ecx*8] */
  esi = (uint32_t)(eax + ecx*8);
/* 8dde28: mov eax, dword ptr [esi - 0x24] */
  eax = R32((uint32_t)(esi + 0xffffffdcu));
/* 8dde2b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8dde2e: mov edi, ebx */
  edi = ebx;
/* 8dde30: imul edi, eax */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(eax);
  edi = (uint32_t)r;
  }
/* 8dde33: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8dde36: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8dde38: push 0xaed610 */
  { uint32_t v = 0xaed610u; esp -= 4; W32(esp, v); }
/* 8dde3d: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 8dde44: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 8dde47: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8dde49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dde4a: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8dde4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dde4c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dde4e: je 0x8dde63 */
  if (zf) goto L_8dde63;
L_8dde50: /* 8dde50: mov edx, 4 */
  edx = 0x4u;
/* 8dde55: mov ecx, eax */
  ecx = eax;
L_8dde57: /* 8dde57: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 8dde58: js 0x8dde5e */
  if (sf) goto L_8dde5e;
L_8dde5a: /* 8dde5a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8dde5c: jmp 0x8dde57 */
  goto L_8dde57;
L_8dde5e: /* 8dde5e: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8dde61: jmp 0x8dde6a */
  goto L_8dde6a;
L_8dde63: /* 8dde63: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
L_8dde6a: /* 8dde6a: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8dde6d: test byte ptr [eax + 0x7c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x7cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8dde71: jne 0x8de6a1 */
  if (!zf) goto L_8de6a1;
L_8dde77: /* 8dde77: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8dde7a: lea eax, [ebx - 1] */
  eax = (uint32_t)(ebx + 0xffffffffu);
/* 8dde7d: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8dde80: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 8dde83: lea ecx, [edx - 1] */
  ecx = (uint32_t)(edx + 0xffffffffu);
/* 8dde86: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8dde89: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 8dde8c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8dde8f: xor edi, edi */
  edi = 0;
L_8dde91: /* 8dde91: cmp edi, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dde94: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 8dde97: jge 0x8de8e7 */
  if ((sf == of)) goto L_8de8e7;
L_8dde9d: /* 8dde9d: xor eax, eax */
  eax = 0;
/* 8dde9f: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_8ddea2: /* 8ddea2: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ddea5: jge 0x8de69b */
  if ((sf == of)) goto L_8de69b;
L_8ddeab: /* 8ddeab: imul edi, edx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(edx);
  edi = (uint32_t)r;
  }
/* 8ddeae: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8ddeb0: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8ddeb3: shl edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8ddeb5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ddeb7: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 8ddebe: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 8ddec5: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 8ddecc: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 8dded3: je 0x8de0b0 */
  if (zf) goto L_8de0b0;
L_8dded9: /* 8dded9: mov ebx, eax */
  ebx = eax;
/* 8ddedb: movzx ecx, byte ptr [ebx + edi*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x3u)));
/* 8ddee0: movzx edx, byte ptr [ebx + edi*4] */
  edx = (uint32_t)(R8((uint32_t)(ebx + edi*4)));
/* 8ddee4: movzx eax, byte ptr [ebx + edi*4 + 1] */
  eax = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x1u)));
/* 8ddee9: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ddeec: movzx ecx, byte ptr [ebx + edi*4 + 2] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x2u)));
/* 8ddef1: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddef4: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8ddef7: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddefd: lea edx, [ebp - 0x140] */
  edx = (uint32_t)(ebp + 0xfffffec0u);
/* 8ddf03: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf06: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8ddf09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ddf0a: lea eax, [ebp - 0x19c] */
  eax = (uint32_t)(ebp + 0xfffffe64u);
/* 8ddf10: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ddf17: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf1a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ddf1d: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8ddf20: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf26: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf29: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf2f: fstp dword ptr [ebp - 0x140] */
  WF32((uint32_t)(ebp + 0xfffffec0u), ST0); FPOP();
/* 8ddf35: fstp dword ptr [ebp - 0x13c] */
  WF32((uint32_t)(ebp + 0xfffffec4u), ST0); FPOP();
/* 8ddf3b: fstp dword ptr [ebp - 0x138] */
  WF32((uint32_t)(ebp + 0xfffffec8u), ST0); FPOP();
/* 8ddf41: fstp dword ptr [ebp - 0x134] */
  WF32((uint32_t)(ebp + 0xfffffeccu), ST0); FPOP();
/* 8ddf47: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8ddf4du); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8ddf4d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8ddf50: lea edx, [edi + ecx] */
  edx = (uint32_t)(edi + ecx);
/* 8ddf53: movzx ecx, byte ptr [ebx + edx*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edx*4 + 0x3u)));
/* 8ddf58: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* 8ddf5b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8ddf5e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ddf61: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8ddf65: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf68: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8ddf6b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf71: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8ddf75: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf78: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ddf7b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf81: lea eax, [ebp - 0x160] */
  eax = (uint32_t)(ebp + 0xfffffea0u);
/* 8ddf87: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf8a: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8ddf8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ddf8e: lea ecx, [ebp - 0x1bc] */
  ecx = (uint32_t)(ebp + 0xfffffe44u);
/* 8ddf94: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ddf9b: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf9e: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8ddfa1: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddfa7: fstp dword ptr [ebp - 0x160] */
  WF32((uint32_t)(ebp + 0xfffffea0u), ST0); FPOP();
/* 8ddfad: fstp dword ptr [ebp - 0x15c] */
  WF32((uint32_t)(ebp + 0xfffffea4u), ST0); FPOP();
/* 8ddfb3: fstp dword ptr [ebp - 0x158] */
  WF32((uint32_t)(ebp + 0xfffffea8u), ST0); FPOP();
/* 8ddfb9: fstp dword ptr [ebp - 0x154] */
  WF32((uint32_t)(ebp + 0xfffffeacu), ST0); FPOP();
/* 8ddfbf: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8ddfc5u); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8ddfc5: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ddfc8: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8ddfca: movzx eax, byte ptr [ebx + edi*4 + 3] */
  eax = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x3u)));
/* 8ddfcf: movzx ecx, byte ptr [ebx + edi*4] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edi*4)));
/* 8ddfd3: movzx edx, byte ptr [ebx + edi*4 + 1] */
  edx = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x1u)));
/* 8ddfd8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8ddfdb: movzx eax, byte ptr [ebx + edi*4 + 2] */
  eax = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x2u)));
/* 8ddfe0: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddfe3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ddfe6: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddfec: lea ecx, [ebp - 0x110] */
  ecx = (uint32_t)(ebp + 0xfffffef0u);
/* 8ddff2: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddff5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8ddff8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ddff9: lea edx, [ebp - 0x2bc] */
  edx = (uint32_t)(ebp + 0xfffffd44u);
/* 8ddfff: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de005: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de008: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de00b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de011: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de014: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de01a: fstp dword ptr [ebp - 0x110] */
  WF32((uint32_t)(ebp + 0xfffffef0u), ST0); FPOP();
/* 8de020: fstp dword ptr [ebp - 0x10c] */
  WF32((uint32_t)(ebp + 0xfffffef4u), ST0); FPOP();
/* 8de026: fstp dword ptr [ebp - 0x108] */
  WF32((uint32_t)(ebp + 0xfffffef8u), ST0); FPOP();
/* 8de02c: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 8de032: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de033: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de036: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de03cu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de03c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8de03f: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de041: movzx ecx, byte ptr [ebx + edi*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x3u)));
/* 8de046: movzx edx, byte ptr [ebx + edi*4] */
  edx = (uint32_t)(R8((uint32_t)(ebx + edi*4)));
/* 8de04a: lea eax, [ebx + edi*4] */
  eax = (uint32_t)(ebx + edi*4);
/* 8de04d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de050: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de054: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de057: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de05a: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de060: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de064: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de067: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de06a: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de070: lea eax, [ebp - 0x130] */
  eax = (uint32_t)(ebp + 0xfffffed0u);
/* 8de076: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de079: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de07c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de07d: lea ecx, [ebp - 0x1dc] */
  ecx = (uint32_t)(ebp + 0xfffffe24u);
/* 8de083: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de089: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de08a: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de08d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de093: fstp dword ptr [ebp - 0x130] */
  WF32((uint32_t)(ebp + 0xfffffed0u), ST0); FPOP();
/* 8de099: fstp dword ptr [ebp - 0x12c] */
  WF32((uint32_t)(ebp + 0xfffffed4u), ST0); FPOP();
/* 8de09f: fstp dword ptr [ebp - 0x128] */
  WF32((uint32_t)(ebp + 0xfffffed8u), ST0); FPOP();
/* 8de0a5: fstp dword ptr [ebp - 0x124] */
  WF32((uint32_t)(ebp + 0xfffffedcu), ST0); FPOP();
/* 8de0ab: jmp 0x8de5d2 */
  goto L_8de5d2;
L_8de0b0: /* 8de0b0: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8de0b3: mov al, byte ptr [edx + 0x38] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x38u))) & 0xffu);
/* 8de0b6: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8de0b8: je 0x8de3e1 */
  if (zf) goto L_8de3e1;
L_8de0be: /* 8de0be: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8de0c0: je 0x8de211 */
  if (zf) goto L_8de211;
L_8de0c6: /* 8de0c6: cmp al, 9 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8de0c8: jne 0x8de5db */
  if (!zf) goto L_8de5db;
L_8de0ce: /* 8de0ce: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de0d1: movzx ecx, byte ptr [edi + eax] */
  ecx = (uint32_t)(R8((uint32_t)(edi + eax)));
/* 8de0d5: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de0d8: lea edx, [ebp - 0x150] */
  edx = (uint32_t)(ebp + 0xfffffeb0u);
/* 8de0de: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de0e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de0e2: lea eax, [ebp - 0x25c] */
  eax = (uint32_t)(ebp + 0xfffffda4u);
/* 8de0e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de0e9: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de0ef: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de0f2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8de0f4: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8de0f6: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8de0f8: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8de0fa: fstp dword ptr [ebp - 0x150] */
  WF32((uint32_t)(ebp + 0xfffffeb0u), ST0); FPOP();
/* 8de100: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8de102: fstp dword ptr [ebp - 0x14c] */
  WF32((uint32_t)(ebp + 0xfffffeb4u), ST0); FPOP();
/* 8de108: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8de10a: fstp dword ptr [ebp - 0x148] */
  WF32((uint32_t)(ebp + 0xfffffeb8u), ST0); FPOP();
/* 8de110: fstp dword ptr [ebp - 0x144] */
  WF32((uint32_t)(ebp + 0xfffffebcu), ST0); FPOP();
/* 8de116: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de11cu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de11c: mov ecx, dword ptr [esi - 0xc] */
  ecx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de11f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8de122: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de124: movzx eax, byte ptr [ecx + edx] */
  eax = (uint32_t)(R8((uint32_t)(ecx + edx)));
/* 8de128: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de12b: lea ecx, [ebp - 0x170] */
  ecx = (uint32_t)(ebp + 0xfffffe90u);
/* 8de131: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de134: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de135: lea edx, [ebp - 0x1fc] */
  edx = (uint32_t)(ebp + 0xfffffe04u);
/* 8de13b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de13c: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de142: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de145: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8de147: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8de149: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8de14b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8de14d: fstp dword ptr [ebp - 0x170] */
  WF32((uint32_t)(ebp + 0xfffffe90u), ST0); FPOP();
/* 8de153: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8de155: fstp dword ptr [ebp - 0x16c] */
  WF32((uint32_t)(ebp + 0xfffffe94u), ST0); FPOP();
/* 8de15b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8de15d: fstp dword ptr [ebp - 0x168] */
  WF32((uint32_t)(ebp + 0xfffffe98u), ST0); FPOP();
/* 8de163: fstp dword ptr [ebp - 0x164] */
  WF32((uint32_t)(ebp + 0xfffffe9cu), ST0); FPOP();
/* 8de169: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de16fu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de16f: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de172: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de175: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8de177: movzx ecx, byte ptr [eax + ebx] */
  ecx = (uint32_t)(R8((uint32_t)(eax + ebx)));
/* 8de17b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de17e: lea edx, [ebp - 0x180] */
  edx = (uint32_t)(ebp + 0xfffffe80u);
/* 8de184: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de187: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de188: lea eax, [ebp - 0x29c] */
  eax = (uint32_t)(ebp + 0xfffffd64u);
/* 8de18e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de18f: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de195: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de198: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8de19a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8de19c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8de19e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8de1a0: fstp dword ptr [ebp - 0x180] */
  WF32((uint32_t)(ebp + 0xfffffe80u), ST0); FPOP();
/* 8de1a6: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8de1a8: fstp dword ptr [ebp - 0x17c] */
  WF32((uint32_t)(ebp + 0xfffffe84u), ST0); FPOP();
/* 8de1ae: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8de1b0: fstp dword ptr [ebp - 0x178] */
  WF32((uint32_t)(ebp + 0xfffffe88u), ST0); FPOP();
/* 8de1b6: fstp dword ptr [ebp - 0x174] */
  WF32((uint32_t)(ebp + 0xfffffe8cu), ST0); FPOP();
/* 8de1bc: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de1c2u); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de1c2: mov ecx, dword ptr [esi - 0xc] */
  ecx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de1c5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8de1c8: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de1ca: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de1cc: movzx eax, byte ptr [ecx + edx] */
  eax = (uint32_t)(R8((uint32_t)(ecx + edx)));
/* 8de1d0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de1d3: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de1d6: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de1dc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8de1de: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8de1e0: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8de1e2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8de1e4: fstp dword ptr [ebp - 0x120] */
  WF32((uint32_t)(ebp + 0xfffffee0u), ST0); FPOP();
/* 8de1ea: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8de1ec: fstp dword ptr [ebp - 0x11c] */
  WF32((uint32_t)(ebp + 0xfffffee4u), ST0); FPOP();
/* 8de1f2: lea ecx, [ebp - 0x120] */
  ecx = (uint32_t)(ebp + 0xfffffee0u);
/* 8de1f8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8de1fa: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* 8de200: fstp dword ptr [ebp - 0x118] */
  WF32((uint32_t)(ebp + 0xfffffee8u), ST0); FPOP();
/* 8de206: fstp dword ptr [ebp - 0x114] */
  WF32((uint32_t)(ebp + 0xfffffeecu), ST0); FPOP();
/* 8de20c: jmp 0x8de5d0 */
  goto L_8de5d0;
L_8de211: /* 8de211: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de214: movzx ecx, byte ptr [eax + edi*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(eax + edi*4 + 0x3u)));
/* 8de219: movzx edx, byte ptr [eax + edi*4] */
  edx = (uint32_t)(R8((uint32_t)(eax + edi*4)));
/* 8de21d: lea eax, [eax + edi*4] */
  eax = (uint32_t)(eax + edi*4);
/* 8de220: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de223: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de227: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de22a: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de22d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de233: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de237: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de23a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de23d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de243: lea eax, [ebp - 0x100] */
  eax = (uint32_t)(ebp + 0xffffff00u);
/* 8de249: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de24c: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de24f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de250: lea ecx, [ebp - 0x27c] */
  ecx = (uint32_t)(ebp + 0xfffffd84u);
/* 8de256: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de25c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de25d: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de260: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de263: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de269: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 8de26f: fstp dword ptr [ebp - 0xfc] */
  WF32((uint32_t)(ebp + 0xffffff04u), ST0); FPOP();
/* 8de275: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 8de27b: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 8de281: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de287u); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de287: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8de28a: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de28d: lea edx, [edi + ebx] */
  edx = (uint32_t)(edi + ebx);
/* 8de290: movzx ecx, byte ptr [eax + edx*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(eax + edx*4 + 0x3u)));
/* 8de295: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 8de298: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de29b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de29e: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de2a2: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de2a5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de2a8: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de2ae: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de2b2: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de2b5: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de2b8: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de2be: lea eax, [ebp - 0xe0] */
  eax = (uint32_t)(ebp + 0xffffff20u);
/* 8de2c4: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de2c7: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de2ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de2cb: lea ecx, [ebp - 0x23c] */
  ecx = (uint32_t)(ebp + 0xfffffdc4u);
/* 8de2d1: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de2d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de2d8: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de2db: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de2de: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de2e4: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 8de2ea: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 8de2f0: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 8de2f6: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 8de2fc: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de302u); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de302: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de305: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de308: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de30a: movzx ecx, byte ptr [eax + edi*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(eax + edi*4 + 0x3u)));
/* 8de30f: movzx edx, byte ptr [eax + edi*4] */
  edx = (uint32_t)(R8((uint32_t)(eax + edi*4)));
/* 8de313: lea eax, [eax + edi*4] */
  eax = (uint32_t)(eax + edi*4);
/* 8de316: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de319: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de31d: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de320: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de323: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de329: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de32d: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de330: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de333: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de339: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de33c: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de33f: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de345: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de348: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de34e: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 8de351: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 8de354: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 8de357: lea eax, [ebp - 0x80] */
  eax = (uint32_t)(ebp + 0xffffff80u);
/* 8de35a: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 8de35d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de35e: lea ecx, [ebp - 0x1ac] */
  ecx = (uint32_t)(ebp + 0xfffffe54u);
/* 8de364: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de365: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de368: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de36eu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de36e: mov edx, dword ptr [esi - 0xc] */
  edx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de371: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de373: movzx ecx, byte ptr [edx + edi*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(edx + edi*4 + 0x3u)));
/* 8de378: lea eax, [edx + edi*4] */
  eax = (uint32_t)(edx + edi*4);
/* 8de37b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de37e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de381: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de385: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de388: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de38b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de391: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de395: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de398: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de39b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de3a1: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 8de3a7: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de3aa: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de3ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de3ae: lea ecx, [ebp - 0x1cc] */
  ecx = (uint32_t)(ebp + 0xfffffe34u);
/* 8de3b4: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de3ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de3bb: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de3be: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de3c4: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 8de3ca: fstp dword ptr [ebp - 0xbc] */
  WF32((uint32_t)(ebp + 0xffffff44u), ST0); FPOP();
/* 8de3d0: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 8de3d6: fstp dword ptr [ebp - 0xb4] */
  WF32((uint32_t)(ebp + 0xffffff4cu), ST0); FPOP();
/* 8de3dc: jmp 0x8de5d2 */
  goto L_8de5d2;
L_8de3e1: /* 8de3e1: mov edx, dword ptr [esi - 0xc] */
  edx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de3e4: movzx eax, byte ptr [edx + edi] */
  eax = (uint32_t)(R8((uint32_t)(edx + edi)));
/* 8de3e8: mov ebx, dword ptr [ebp - 0x5c] */
  ebx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8de3eb: movzx ecx, byte ptr [ebx + eax*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + eax*4 + 0x3u)));
/* 8de3f0: movzx edx, byte ptr [ebx + eax*4] */
  edx = (uint32_t)(R8((uint32_t)(ebx + eax*4)));
/* 8de3f4: lea eax, [ebx + eax*4] */
  eax = (uint32_t)(ebx + eax*4);
/* 8de3f7: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de3fa: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de3fe: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de401: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de404: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de40a: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de40e: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de411: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de414: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de41a: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* 8de420: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de423: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de426: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de427: lea ecx, [ebp - 0x1ec] */
  ecx = (uint32_t)(ebp + 0xfffffe14u);
/* 8de42d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de434: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de437: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de43a: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de440: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 8de446: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 8de44c: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 8de452: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 8de458: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de45eu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de45e: mov edx, dword ptr [esi - 0xc] */
  edx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de461: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8de464: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8de466: movzx ecx, byte ptr [edx + eax] */
  ecx = (uint32_t)(R8((uint32_t)(edx + eax)));
/* 8de46a: movzx edx, byte ptr [ebx + ecx*4 + 3] */
  edx = (uint32_t)(R8((uint32_t)(ebx + ecx*4 + 0x3u)));
/* 8de46f: lea eax, [ebx + ecx*4] */
  eax = (uint32_t)(ebx + ecx*4);
/* 8de472: movzx ecx, byte ptr [eax] */
  ecx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de475: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de478: movzx edx, byte ptr [eax + 1] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de47c: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de47f: movzx eax, byte ptr [eax + 2] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de483: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de489: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de48c: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8de492: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de495: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de498: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de499: lea edx, [ebp - 0x20c] */
  edx = (uint32_t)(ebp + 0xfffffdf4u);
/* 8de49f: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de4a5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de4a6: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de4a9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de4ac: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de4af: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de4b5: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de4b8: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de4be: fstp dword ptr [ebp - 0xb0] */
  WF32((uint32_t)(ebp + 0xffffff50u), ST0); FPOP();
/* 8de4c4: fstp dword ptr [ebp - 0xac] */
  WF32((uint32_t)(ebp + 0xffffff54u), ST0); FPOP();
/* 8de4ca: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* 8de4d0: fstp dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0); FPOP();
/* 8de4d6: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de4dcu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de4dc: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de4df: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de4e2: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8de4e4: movzx edx, byte ptr [eax + ecx] */
  edx = (uint32_t)(R8((uint32_t)(eax + ecx)));
/* 8de4e8: movzx ecx, byte ptr [ebx + edx*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edx*4 + 0x3u)));
/* 8de4ed: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* 8de4f0: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de4f3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de4f6: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de4fa: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de4fd: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de500: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de506: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de50a: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de50d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de510: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de516: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de519: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de51c: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de522: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de525: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de52b: lea eax, [ebp - 0xd0] */
  eax = (uint32_t)(ebp + 0xffffff30u);
/* 8de531: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de532: lea ecx, [ebp - 0x22c] */
  ecx = (uint32_t)(ebp + 0xfffffdd4u);
/* 8de538: fstp dword ptr [ebp - 0xd0] */
  WF32((uint32_t)(ebp + 0xffffff30u), ST0); FPOP();
/* 8de53e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de53f: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de542: fstp dword ptr [ebp - 0xcc] */
  WF32((uint32_t)(ebp + 0xffffff34u), ST0); FPOP();
/* 8de548: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 8de54e: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 8de554: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de55au); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de55a: mov edx, dword ptr [esi - 0xc] */
  edx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de55d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8de560: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8de562: add edx, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8de565: movzx ecx, byte ptr [edx + eax] */
  ecx = (uint32_t)(R8((uint32_t)(edx + eax)));
/* 8de569: movzx edx, byte ptr [ebx + ecx*4 + 3] */
  edx = (uint32_t)(R8((uint32_t)(ebx + ecx*4 + 0x3u)));
/* 8de56e: lea eax, [ebx + ecx*4] */
  eax = (uint32_t)(ebx + ecx*4);
/* 8de571: movzx ecx, byte ptr [eax] */
  ecx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de574: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de577: movzx edx, byte ptr [eax + 1] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de57b: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de57e: movzx eax, byte ptr [eax + 2] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de582: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de588: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de58b: lea ecx, [ebp - 0xf0] */
  ecx = (uint32_t)(ebp + 0xffffff10u);
/* 8de591: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de594: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de597: lea edx, [ebp - 0x24c] */
  edx = (uint32_t)(ebp + 0xfffffdb4u);
/* 8de59d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de5a3: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de5a6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de5a9: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de5af: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de5b2: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de5b8: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 8de5be: fstp dword ptr [ebp - 0xec] */
  WF32((uint32_t)(ebp + 0xffffff14u), ST0); FPOP();
/* 8de5c4: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 8de5ca: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
L_8de5d0: /* 8de5d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de5d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_8de5d2: /* 8de5d2: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de5d5: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de5dbu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
L_8de5db: /* 8de5db: push 0x40800000 */
  { uint32_t v = 0x40800000u; esp -= 4; W32(esp, v); }
/* 8de5e0: lea eax, [ebp - 0x26c] */
  eax = (uint32_t)(ebp + 0xfffffd94u);
/* 8de5e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de5e7: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de5ea: call dword ptr [0xcfac60] */
  esp -= 4; W32(esp, 0x8de5f0u); SPILL(); f_4e3701(); if (g_unwind) return; /* Core!??KFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 8de5f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de5f1: lea ecx, [ebp - 0x18c] */
  ecx = (uint32_t)(ebp + 0xfffffe74u);
/* 8de5f7: call 0x6c576d */
  esp -= 4; W32(esp, 0x8de5fcu); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 8de5fc: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8de5ff: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8de602: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8de605: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 8de608: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8de60a: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8de60d: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de60f: mov dword ptr [edi + ecx*4], eax */
  W32((uint32_t)(edi + ecx*4), eax);
/* 8de612: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8de615: mov cl, byte ptr [ecx + 0x38] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x38u))) & 0xffu);
/* 8de618: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8de61a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de61d: je 0x8de66d */
  if (zf) goto L_8de66d;
L_8de61f: /* 8de61f: cmp cl, 5 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8de622: je 0x8de64e */
  if (zf) goto L_8de64e;
L_8de624: /* 8de624: cmp cl, 9 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8de627: jne 0x8de68a */
  if (!zf) goto L_8de68a;
L_8de629: /* 8de629: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8de62c: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 8de62f: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 8de632: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8de635: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8de638: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8de63a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8de63d: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8de640: mov byte ptr [eax + ebx], cl */
  W8((uint32_t)(eax + ebx), (ecx & 0xffu));
/* 8de643: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de644: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 8de647: mov eax, ebx */
  eax = ebx;
/* 8de649: jmp 0x8ddea2 */
  goto L_8ddea2;
L_8de64e: /* 8de64e: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8de651: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8de654: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 8de657: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 8de65a: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de65c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de65d: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 8de660: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8de663: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 8de666: mov eax, ebx */
  eax = ebx;
/* 8de668: jmp 0x8ddea2 */
  goto L_8ddea2;
L_8de66d: /* 8de66d: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 8de670: imul edi, edx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(edx);
  edi = (uint32_t)r;
  }
/* 8de673: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 8de676: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8de678: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de679: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8de67c: mov ecx, dword ptr [eax + 0x50] */
  ecx = R32((uint32_t)(eax + 0x50u));
/* 8de67f: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de681: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de683: call 0x6cb18b */
  esp -= 4; W32(esp, 0x8de688u); SPILL(); f_6cb18b(); if (g_unwind) return; RELOAD();
/* 8de688: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
L_8de68a: /* 8de68a: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8de68d: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8de690: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de691: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 8de694: mov eax, ebx */
  eax = ebx;
/* 8de696: jmp 0x8ddea2 */
  goto L_8ddea2;
L_8de69b: /* 8de69b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8de69c: jmp 0x8dde91 */
  goto L_8dde91;
L_8de6a1: /* 8de6a1: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 8de6a2: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8de6a5: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 8de6ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8de6b0: /* 8de6b0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8de6b3: cmp ecx, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8de6b6: jge 0x8de8e7 */
  if ((sf == of)) goto L_8de8e7;
L_8de6bc: /* 8de6bc: xor eax, eax */
  eax = 0;
/* 8de6be: xor ebx, ebx */
  ebx = 0;
L_8de6c0: /* 8de6c0: cmp ebx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8de6c3: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 8de6c6: jge 0x8de8df */
  if ((sf == of)) goto L_8de8df;
L_8de6cc: /* 8de6cc: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8de6cf: imul edi, dword ptr [ebp - 0x54] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffacu)));
  edi = (uint32_t)r;
  }
/* 8de6d3: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de6d5: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8de6d8: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 8de6df: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 8de6e6: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8de6ed: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 8de6f4: shl edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
L_8de6f6: /* 8de6f6: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8de6f9: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de6fc: mov eax, 2 */
  eax = 0x2u;
/* 8de701: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8de703: jge 0x8de840 */
  if ((sf == of)) goto L_8de840;
L_8de709: /* 8de709: xor ebx, ebx */
  ebx = 0;
/* 8de70b: jmp 0x8de710 */
  goto L_8de710;
L_8de710: /* 8de710: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8de713: jge 0x8de834 */
  if ((sf == of)) goto L_8de834;
L_8de719: /* 8de719: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8de71c: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de71f: mov edx, ebx */
  edx = ebx;
/* 8de721: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8de723: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8de726: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 8de729: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8de72a: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8de72c: lea eax, [edx + ecx] */
  eax = (uint32_t)(edx + ecx);
/* 8de72f: mov edx, dword ptr [esi - 0xc] */
  edx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de732: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8de734: mov cl, byte ptr [edx + eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + eax))) & 0xffu);
/* 8de737: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8de739: je 0x8de82e */
  if (zf) goto L_8de82e;
L_8de73f: /* 8de73f: inc dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd8u), r);
  }
/* 8de742: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8de745: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8de747: je 0x8de7c5 */
  if (zf) goto L_8de7c5;
L_8de749: /* 8de749: mov ecx, edx */
  ecx = edx;
/* 8de74b: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8de74d: movzx edx, byte ptr [ecx + eax*4 + 3] */
  edx = (uint32_t)(R8((uint32_t)(ecx + eax*4 + 0x3u)));
/* 8de752: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8de755: movzx ecx, byte ptr [eax] */
  ecx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de758: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8de75b: movzx edx, byte ptr [eax + 1] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de75f: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de762: movzx eax, byte ptr [eax + 2] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de766: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de76c: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8de76f: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 8de775: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de778: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8de77b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de77c: lea edx, [ebp - 0x28c] */
  edx = (uint32_t)(ebp + 0xfffffd74u);
/* 8de782: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de788: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8de78b: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de78e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8de791: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de792: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de798: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de79b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de7a1: fstp dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0); FPOP();
/* 8de7a7: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 8de7ad: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 8de7b3: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 8de7b9: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de7bfu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de7bf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de7c0: jmp 0x8de710 */
  goto L_8de710;
L_8de7c5: /* 8de7c5: movzx eax, cl */
  eax = (uint32_t)((ecx & 0xffu));
/* 8de7c8: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8de7cb: movzx edx, byte ptr [ecx + eax*4 + 3] */
  edx = (uint32_t)(R8((uint32_t)(ecx + eax*4 + 0x3u)));
/* 8de7d0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8de7d3: movzx ecx, byte ptr [eax] */
  ecx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de7d6: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8de7d9: movzx edx, byte ptr [eax + 1] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de7dd: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de7e0: movzx eax, byte ptr [eax + 2] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de7e4: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de7ea: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8de7ed: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8de7f0: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de7f3: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8de7f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de7f7: lea edx, [ebp - 0x2ac] */
  edx = (uint32_t)(ebp + 0xfffffd54u);
/* 8de7fd: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de803: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8de806: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de809: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8de80c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de80d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de813: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de816: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de81c: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 8de81f: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 8de822: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 8de825: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 8de828: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de82eu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
L_8de82e: /* 8de82e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de82f: jmp 0x8de710 */
  goto L_8de710;
L_8de834: /* 8de834: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de837: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8de83a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8de83b: jmp 0x8de6f6 */
  goto L_8de6f6;
L_8de840: /* 8de840: cmp dword ptr [ebp - 0x28], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8de843: jl 0x8de8a6 */
  if ((sf != of)) goto L_8de8a6;
L_8de845: /* 8de845: fild dword ptr [ebp - 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8de848: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de849: lea eax, [ebp - 0x2cc] */
  eax = (uint32_t)(ebp + 0xfffffd34u);
/* 8de84f: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8de852: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8de855: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de856: call dword ptr [0xcfac60] */
  esp -= 4; W32(esp, 0x8de85cu); SPILL(); f_4e3701(); if (g_unwind) return; /* Core!??KFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 8de85c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de85d: lea ecx, [ebp - 0x188] */
  ecx = (uint32_t)(ebp + 0xfffffe78u);
/* 8de863: call 0x6c576d */
  esp -= 4; W32(esp, 0x8de868u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 8de868: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 8de86b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8de86e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8de870: imul edi, ecx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ecx);
  edi = (uint32_t)r;
  }
/* 8de873: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8de876: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de878: mov dword ptr [edx + edi*4], eax */
  W32((uint32_t)(edx + edi*4), eax);
/* 8de87b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8de87e: mov edi, dword ptr [esi + 0x1c] */
  edi = R32((uint32_t)(esi + 0x1cu));
/* 8de881: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 8de884: lea ecx, [ebx + eax] */
  ecx = (uint32_t)(ebx + eax);
/* 8de887: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 8de88a: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8de88d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8de88f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de890: mov ecx, dword ptr [edx + 0x50] */
  ecx = R32((uint32_t)(edx + 0x50u));
/* 8de893: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de895: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de897: call 0x6cb18b */
  esp -= 4; W32(esp, 0x8de89cu); SPILL(); f_6cb18b(); if (g_unwind) return; RELOAD();
/* 8de89c: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 8de89e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de89f: xor eax, eax */
  eax = 0;
/* 8de8a1: jmp 0x8de6c0 */
  goto L_8de6c0;
L_8de8a6: /* 8de8a6: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8de8a9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8de8ac: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8de8af: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 8de8b2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de8b4: mov byte ptr [ebp - 0x58], 0 */
  W8((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 8de8b8: mov byte ptr [ebp - 0x57], 0 */
  W8((uint32_t)(ebp + 0xffffffa9u), 0x0u);
/* 8de8bc: mov byte ptr [ebp - 0x56], 0 */
  W8((uint32_t)(ebp + 0xffffffaau), 0x0u);
/* 8de8c0: mov byte ptr [ebp - 0x55], 0xff */
  W8((uint32_t)(ebp + 0xffffffabu), 0xffu);
/* 8de8c4: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8de8c7: mov dword ptr [edi + ecx*4], edx */
  W32((uint32_t)(edi + ecx*4), edx);
/* 8de8ca: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8de8cd: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 8de8d0: add ecx, dword ptr [esi + 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1cu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de8d3: mov byte ptr [ecx + ebx], 0 */
  W8((uint32_t)(ecx + ebx), 0x0u);
/* 8de8d7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de8d8: xor eax, eax */
  eax = 0;
/* 8de8da: jmp 0x8de6c0 */
  goto L_8de6c0;
L_8de8df: /* 8de8df: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 8de8e2: jmp 0x8de6b0 */
  goto L_8de6b0;
L_8de8e7: /* 8de8e7: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8de8ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8de8ec: je 0x8de8ff */
  if (zf) goto L_8de8ff;
L_8de8ee: /* 8de8ee: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 8de8f4: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8de8f6: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8de8f9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8de8fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de8fc: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x8de8ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8de8ff: /* 8de8ff: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8de902: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8de905: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8de906: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 8de909: jmp 0x8dde00 */
  goto L_8dde00;
L_8de90e: /* 8de90e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8de911: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8de913: je 0x8de923 */
  if (zf) goto L_8de923;
L_8de915: /* 8de915: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 8de91b: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8de91d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8de91f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de920: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8de923u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8de923: /* 8de923: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8de926: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8de92d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8de92e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8de92f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8de930: mov esp, ebp */
  esp = ebp;
/* 8de932: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8de933: ret 8 */
  esp += 12; SPILL(); return;
L_8de936: /* 8de936: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 8de938: mov ebx, 0 */
  ebx = 0x0u;
/* 8de93d: sets bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((sf) ? 1 : 0) & 0xffu);
/* 8de940: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 8de941: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8de943: movzx eax, byte ptr [esi + 0x3c] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x3cu)));
/* 8de947: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 8de949: mov ecx, 0 */
  ecx = 0x0u;
/* 8de94e: sets cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((sf) ? 1 : 0) & 0xffu);
/* 8de951: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8de952: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8de954: mov al, byte ptr [esi + 0x38] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x38u))) & 0xffu);
/* 8de957: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8de959: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 8de95c: je 0x8de96a */
  if (zf) goto L_8de96a;
L_8de95e: /* 8de95e: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8de960: je 0x8de99b */
  if (zf) goto L_8de99b;
L_8de962: /* 8de962: cmp al, 9 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8de964: jne 0x8dddc0 */
  if (!zf) goto L_8dddc0;
L_8de96a: /* 8de96a: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 8de96c: lea edi, [esi + 0xac] */
  edi = (uint32_t)(esi + 0xacu);
/* 8de972: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8de974: mov ecx, edi */
  ecx = edi;
/* 8de976: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8de97cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8de97c: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 8de97f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8de981: lea ecx, [eax + edx*8] */
  ecx = (uint32_t)(eax + edx*8);
/* 8de984: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8de986: je 0x8dddc0 */
  if (zf) goto L_8dddc0;
L_8de98c: /* 8de98c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8de98f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de990: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8de991: call 0x6cb68b */
  esp -= 4; W32(esp, 0x8de996u); SPILL(); f_6cb68b(); if (g_unwind) return; RELOAD();
/* 8de996: jmp 0x8dddc0 */
  goto L_8dddc0;
L_8de99b: /* 8de99b: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 8de99d: lea edi, [esi + 0xac] */
  edi = (uint32_t)(esi + 0xacu);
/* 8de9a3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8de9a5: mov ecx, edi */
  ecx = edi;
/* 8de9a7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8de9adu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8de9ad: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 8de9b0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8de9b2: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 8de9b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 8de9b7: je 0x8dddc0 */
  if (zf) goto L_8dddc0;
L_8de9bd: /* 8de9bd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8de9c0: mov edx, 1 */
  edx = 0x1u;
/* 8de9c5: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = r;
  }
  }
/* 8de9c7: mov ecx, ebx */
  ecx = ebx;
/* 8de9c9: mov edi, 1 */
  edi = 0x1u;
/* 8de9ce: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 8de9d0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8de9d3: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* 8de9d6: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8de9d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de9da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de9db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8de9dc: mov ecx, eax */
  ecx = eax;
/* 8de9de: call 0x6cc24d */
  esp -= 4; W32(esp, 0x8de9e3u); SPILL(); f_6cc24d(); if (g_unwind) return; RELOAD();
/* 8de9e3: jmp 0x8dddc0 */
  goto L_8dddc0;
L_8de9e8: /* 8de9e8: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8de9ed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de9ee: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8de9f0: push 0xaed5c0 */
  { uint32_t v = 0xaed5c0u; esp -= 4; W32(esp, v); }
/* 8de9f5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de9f6: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8de9fcu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8de9fc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8de9ff: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8dea02: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8dea03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8dea04: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8dea0b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8dea0c: mov esp, ebp */
  esp = ebp;
/* 8dea0e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8dea0f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8ddbc8(void) {
  LOAD_REGS();
L_8ddbc8: /* 8ddbc8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 8ddbcf: nop  */
L_8ddbd0: /* 8ddbd0: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* 8ddbd6: cmp edi, dword ptr [eax + 0x20] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ddbd9: jge 0x8ddc10 */
  if ((sf == of)) goto L_8ddc10;
L_8ddbdb: /* 8ddbdb: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 8ddbde: mov al, byte ptr [edi + eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + eax))) & 0xffu);
/* 8ddbe1: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8ddbe4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ddbe5: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8ddbe8: mov byte ptr [ebp - 0x1c], al */
  W8((uint32_t)(ebp + 0xffffffe4u), (eax & 0xffu));
/* 8ddbeb: mov byte ptr [ebp - 0x1b], al */
  W8((uint32_t)(ebp + 0xffffffe5u), (eax & 0xffu));
/* 8ddbee: mov byte ptr [ebp - 0x1a], al */
  W8((uint32_t)(ebp + 0xffffffe6u), (eax & 0xffu));
/* 8ddbf1: mov byte ptr [ebp - 0x19], al */
  W8((uint32_t)(ebp + 0xffffffe7u), (eax & 0xffu));
/* 8ddbf4: call 0x6c3044 */
  esp -= 4; W32(esp, 0x8ddbf9u); SPILL(); f_6c3044(); if (g_unwind) return; RELOAD();
/* 8ddbf9: lea edx, [ebp - 0x70] */
  edx = (uint32_t)(ebp + 0xffffff90u);
/* 8ddbfc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ddbfd: lea eax, [ebp - 0xa0] */
  eax = (uint32_t)(ebp + 0xffffff60u);
/* 8ddc03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ddc04: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8ddc07: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8ddc0du); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8ddc0d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8ddc0e: jmp 0x8ddbd0 */
  goto L_8ddbd0;
L_8ddc10: /* 8ddc10: mov ecx, dword ptr [esi + 0xac] */
  ecx = R32((uint32_t)(esi + 0xacu));
/* 8ddc16: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 8ddc19: lea edi, [esi + 0xac] */
  edi = (uint32_t)(esi + 0xacu);
/* 8ddc1f: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8ddc22: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8ddc25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ddc26: lea eax, [ebp - 0xf0] */
  eax = (uint32_t)(ebp + 0xffffff10u);
/* 8ddc2c: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8ddc2f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8ddc32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ddc33: call dword ptr [0xcfac60] */
  esp -= 4; W32(esp, 0x8ddc39u); SPILL(); f_4e3701(); if (g_unwind) return; /* Core!??KFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 8ddc39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ddc3a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8ddc3d: call 0x6c576d */
  esp -= 4; W32(esp, 0x8ddc42u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 8ddc42: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8ddc44: mov dword ptr [esi + 0x5c], ecx */
  W32((uint32_t)(esi + 0x5cu), ecx);
/* 8ddc47: jmp 0x8ddd8a */
  goto L_8ddd8a;
L_8ddd8a: /* 8ddd8a: mov al, byte ptr [esi + 0x38] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x38u))) & 0xffu);
/* 8ddd8d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ddd8f: je 0x8ddd95 */
  if (zf) goto L_8ddd95;
L_8ddd91: /* 8ddd91: and dword ptr [esi + 0x7c], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x7cu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x7cu), r);
  }
L_8ddd95: /* 8ddd95: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 8ddd9b: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ddd9e: jle 0x8dddab */
  if ((zf || sf != of)) goto L_8dddab;
L_8ddda0: /* 8ddda0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8ddda1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ddda2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ddda4: mov ecx, edi */
  ecx = edi;
/* 8ddda6: call 0x6c982c */
  esp -= 4; W32(esp, 0x8dddabu); SPILL(); f_6c982c(); if (g_unwind) return; RELOAD();
L_8dddab: /* 8dddab: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8dddae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dddb0: je 0x8de923 */
  if (zf) goto L_8de923;
L_8dddb6: /* 8dddb6: jmp 0x8dddc0 */
  goto L_8dddc0;
L_8dddc0: /* 8dddc0: movzx eax, byte ptr [esi + 0x3b] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x3bu)));
/* 8dddc4: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 8dddca: mov edx, eax */
  edx = eax;
/* 8dddcc: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 8dddce: jns 0x8de936 */
  if (!sf) goto L_8de936;
L_8dddd4: /* 8dddd4: movzx edx, byte ptr [esi + 0x3c] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0x3cu)));
/* 8dddd8: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 8dddda: jns 0x8de936 */
  if (!sf) goto L_8de936;
L_8ddde0: /* 8ddde0: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8ddde3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ddde5: je 0x8de923 */
  if (zf) goto L_8de923;
L_8dddeb: /* 8dddeb: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 8dddf2: mov dword ptr [ebp - 0x40], 1 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x1u);
/* 8dddf9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8dde00: /* 8dde00: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8dde03: cmp eax, dword ptr [esi + 0xb0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xb0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dde09: jge 0x8de90e */
  if ((sf == of)) goto L_8de90e;
L_8dde0f: /* 8dde0f: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8dde12: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 8dde15: mov eax, dword ptr [edx + 0xac] */
  eax = R32((uint32_t)(edx + 0xacu));
/* 8dde1b: mov ebx, dword ptr [eax + ecx*8 - 0x20] */
  ebx = R32((uint32_t)(eax + ecx*8 + 0xffffffe0u));
/* 8dde1f: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 8dde25: lea esi, [eax + ecx*8] */
  esi = (uint32_t)(eax + ecx*8);
/* 8dde28: mov eax, dword ptr [esi - 0x24] */
  eax = R32((uint32_t)(esi + 0xffffffdcu));
/* 8dde2b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8dde2e: mov edi, ebx */
  edi = ebx;
/* 8dde30: imul edi, eax */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(eax);
  edi = (uint32_t)r;
  }
/* 8dde33: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8dde36: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8dde38: push 0xaed610 */
  { uint32_t v = 0xaed610u; esp -= 4; W32(esp, v); }
/* 8dde3d: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 8dde44: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 8dde47: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8dde49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dde4a: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8dde4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dde4c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dde4e: je 0x8dde63 */
  if (zf) goto L_8dde63;
L_8dde50: /* 8dde50: mov edx, 4 */
  edx = 0x4u;
/* 8dde55: mov ecx, eax */
  ecx = eax;
L_8dde57: /* 8dde57: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 8dde58: js 0x8dde5e */
  if (sf) goto L_8dde5e;
L_8dde5a: /* 8dde5a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8dde5c: jmp 0x8dde57 */
  goto L_8dde57;
L_8dde5e: /* 8dde5e: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8dde61: jmp 0x8dde6a */
  goto L_8dde6a;
L_8dde63: /* 8dde63: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
L_8dde6a: /* 8dde6a: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8dde6d: test byte ptr [eax + 0x7c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x7cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8dde71: jne 0x8de6a1 */
  if (!zf) goto L_8de6a1;
L_8dde77: /* 8dde77: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8dde7a: lea eax, [ebx - 1] */
  eax = (uint32_t)(ebx + 0xffffffffu);
/* 8dde7d: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8dde80: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 8dde83: lea ecx, [edx - 1] */
  ecx = (uint32_t)(edx + 0xffffffffu);
/* 8dde86: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8dde89: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 8dde8c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8dde8f: xor edi, edi */
  edi = 0;
L_8dde91: /* 8dde91: cmp edi, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dde94: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 8dde97: jge 0x8de8e7 */
  if ((sf == of)) goto L_8de8e7;
L_8dde9d: /* 8dde9d: xor eax, eax */
  eax = 0;
/* 8dde9f: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_8ddea2: /* 8ddea2: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ddea5: jge 0x8de69b */
  if ((sf == of)) goto L_8de69b;
L_8ddeab: /* 8ddeab: imul edi, edx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(edx);
  edi = (uint32_t)r;
  }
/* 8ddeae: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8ddeb0: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8ddeb3: shl edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8ddeb5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ddeb7: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 8ddebe: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 8ddec5: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 8ddecc: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 8dded3: je 0x8de0b0 */
  if (zf) goto L_8de0b0;
L_8dded9: /* 8dded9: mov ebx, eax */
  ebx = eax;
/* 8ddedb: movzx ecx, byte ptr [ebx + edi*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x3u)));
/* 8ddee0: movzx edx, byte ptr [ebx + edi*4] */
  edx = (uint32_t)(R8((uint32_t)(ebx + edi*4)));
/* 8ddee4: movzx eax, byte ptr [ebx + edi*4 + 1] */
  eax = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x1u)));
/* 8ddee9: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ddeec: movzx ecx, byte ptr [ebx + edi*4 + 2] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x2u)));
/* 8ddef1: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddef4: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8ddef7: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddefd: lea edx, [ebp - 0x140] */
  edx = (uint32_t)(ebp + 0xfffffec0u);
/* 8ddf03: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf06: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8ddf09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ddf0a: lea eax, [ebp - 0x19c] */
  eax = (uint32_t)(ebp + 0xfffffe64u);
/* 8ddf10: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ddf17: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf1a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ddf1d: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8ddf20: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf26: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf29: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf2f: fstp dword ptr [ebp - 0x140] */
  WF32((uint32_t)(ebp + 0xfffffec0u), ST0); FPOP();
/* 8ddf35: fstp dword ptr [ebp - 0x13c] */
  WF32((uint32_t)(ebp + 0xfffffec4u), ST0); FPOP();
/* 8ddf3b: fstp dword ptr [ebp - 0x138] */
  WF32((uint32_t)(ebp + 0xfffffec8u), ST0); FPOP();
/* 8ddf41: fstp dword ptr [ebp - 0x134] */
  WF32((uint32_t)(ebp + 0xfffffeccu), ST0); FPOP();
/* 8ddf47: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8ddf4du); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8ddf4d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8ddf50: lea edx, [edi + ecx] */
  edx = (uint32_t)(edi + ecx);
/* 8ddf53: movzx ecx, byte ptr [ebx + edx*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edx*4 + 0x3u)));
/* 8ddf58: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* 8ddf5b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8ddf5e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ddf61: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8ddf65: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf68: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8ddf6b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf71: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8ddf75: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf78: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ddf7b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf81: lea eax, [ebp - 0x160] */
  eax = (uint32_t)(ebp + 0xfffffea0u);
/* 8ddf87: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf8a: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8ddf8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ddf8e: lea ecx, [ebp - 0x1bc] */
  ecx = (uint32_t)(ebp + 0xfffffe44u);
/* 8ddf94: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ddf9b: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf9e: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8ddfa1: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddfa7: fstp dword ptr [ebp - 0x160] */
  WF32((uint32_t)(ebp + 0xfffffea0u), ST0); FPOP();
/* 8ddfad: fstp dword ptr [ebp - 0x15c] */
  WF32((uint32_t)(ebp + 0xfffffea4u), ST0); FPOP();
/* 8ddfb3: fstp dword ptr [ebp - 0x158] */
  WF32((uint32_t)(ebp + 0xfffffea8u), ST0); FPOP();
/* 8ddfb9: fstp dword ptr [ebp - 0x154] */
  WF32((uint32_t)(ebp + 0xfffffeacu), ST0); FPOP();
/* 8ddfbf: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8ddfc5u); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8ddfc5: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ddfc8: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8ddfca: movzx eax, byte ptr [ebx + edi*4 + 3] */
  eax = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x3u)));
/* 8ddfcf: movzx ecx, byte ptr [ebx + edi*4] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edi*4)));
/* 8ddfd3: movzx edx, byte ptr [ebx + edi*4 + 1] */
  edx = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x1u)));
/* 8ddfd8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8ddfdb: movzx eax, byte ptr [ebx + edi*4 + 2] */
  eax = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x2u)));
/* 8ddfe0: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddfe3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ddfe6: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddfec: lea ecx, [ebp - 0x110] */
  ecx = (uint32_t)(ebp + 0xfffffef0u);
/* 8ddff2: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddff5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8ddff8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ddff9: lea edx, [ebp - 0x2bc] */
  edx = (uint32_t)(ebp + 0xfffffd44u);
/* 8ddfff: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de005: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de008: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de00b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de011: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de014: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de01a: fstp dword ptr [ebp - 0x110] */
  WF32((uint32_t)(ebp + 0xfffffef0u), ST0); FPOP();
/* 8de020: fstp dword ptr [ebp - 0x10c] */
  WF32((uint32_t)(ebp + 0xfffffef4u), ST0); FPOP();
/* 8de026: fstp dword ptr [ebp - 0x108] */
  WF32((uint32_t)(ebp + 0xfffffef8u), ST0); FPOP();
/* 8de02c: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 8de032: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de033: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de036: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de03cu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de03c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8de03f: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de041: movzx ecx, byte ptr [ebx + edi*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x3u)));
/* 8de046: movzx edx, byte ptr [ebx + edi*4] */
  edx = (uint32_t)(R8((uint32_t)(ebx + edi*4)));
/* 8de04a: lea eax, [ebx + edi*4] */
  eax = (uint32_t)(ebx + edi*4);
/* 8de04d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de050: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de054: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de057: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de05a: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de060: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de064: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de067: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de06a: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de070: lea eax, [ebp - 0x130] */
  eax = (uint32_t)(ebp + 0xfffffed0u);
/* 8de076: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de079: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de07c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de07d: lea ecx, [ebp - 0x1dc] */
  ecx = (uint32_t)(ebp + 0xfffffe24u);
/* 8de083: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de089: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de08a: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de08d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de093: fstp dword ptr [ebp - 0x130] */
  WF32((uint32_t)(ebp + 0xfffffed0u), ST0); FPOP();
/* 8de099: fstp dword ptr [ebp - 0x12c] */
  WF32((uint32_t)(ebp + 0xfffffed4u), ST0); FPOP();
/* 8de09f: fstp dword ptr [ebp - 0x128] */
  WF32((uint32_t)(ebp + 0xfffffed8u), ST0); FPOP();
/* 8de0a5: fstp dword ptr [ebp - 0x124] */
  WF32((uint32_t)(ebp + 0xfffffedcu), ST0); FPOP();
/* 8de0ab: jmp 0x8de5d2 */
  goto L_8de5d2;
L_8de0b0: /* 8de0b0: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8de0b3: mov al, byte ptr [edx + 0x38] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x38u))) & 0xffu);
/* 8de0b6: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8de0b8: je 0x8de3e1 */
  if (zf) goto L_8de3e1;
L_8de0be: /* 8de0be: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8de0c0: je 0x8de211 */
  if (zf) goto L_8de211;
L_8de0c6: /* 8de0c6: cmp al, 9 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8de0c8: jne 0x8de5db */
  if (!zf) goto L_8de5db;
L_8de0ce: /* 8de0ce: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de0d1: movzx ecx, byte ptr [edi + eax] */
  ecx = (uint32_t)(R8((uint32_t)(edi + eax)));
/* 8de0d5: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de0d8: lea edx, [ebp - 0x150] */
  edx = (uint32_t)(ebp + 0xfffffeb0u);
/* 8de0de: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de0e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de0e2: lea eax, [ebp - 0x25c] */
  eax = (uint32_t)(ebp + 0xfffffda4u);
/* 8de0e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de0e9: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de0ef: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de0f2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8de0f4: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8de0f6: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8de0f8: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8de0fa: fstp dword ptr [ebp - 0x150] */
  WF32((uint32_t)(ebp + 0xfffffeb0u), ST0); FPOP();
/* 8de100: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8de102: fstp dword ptr [ebp - 0x14c] */
  WF32((uint32_t)(ebp + 0xfffffeb4u), ST0); FPOP();
/* 8de108: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8de10a: fstp dword ptr [ebp - 0x148] */
  WF32((uint32_t)(ebp + 0xfffffeb8u), ST0); FPOP();
/* 8de110: fstp dword ptr [ebp - 0x144] */
  WF32((uint32_t)(ebp + 0xfffffebcu), ST0); FPOP();
/* 8de116: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de11cu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de11c: mov ecx, dword ptr [esi - 0xc] */
  ecx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de11f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8de122: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de124: movzx eax, byte ptr [ecx + edx] */
  eax = (uint32_t)(R8((uint32_t)(ecx + edx)));
/* 8de128: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de12b: lea ecx, [ebp - 0x170] */
  ecx = (uint32_t)(ebp + 0xfffffe90u);
/* 8de131: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de134: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de135: lea edx, [ebp - 0x1fc] */
  edx = (uint32_t)(ebp + 0xfffffe04u);
/* 8de13b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de13c: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de142: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de145: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8de147: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8de149: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8de14b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8de14d: fstp dword ptr [ebp - 0x170] */
  WF32((uint32_t)(ebp + 0xfffffe90u), ST0); FPOP();
/* 8de153: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8de155: fstp dword ptr [ebp - 0x16c] */
  WF32((uint32_t)(ebp + 0xfffffe94u), ST0); FPOP();
/* 8de15b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8de15d: fstp dword ptr [ebp - 0x168] */
  WF32((uint32_t)(ebp + 0xfffffe98u), ST0); FPOP();
/* 8de163: fstp dword ptr [ebp - 0x164] */
  WF32((uint32_t)(ebp + 0xfffffe9cu), ST0); FPOP();
/* 8de169: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de16fu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de16f: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de172: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de175: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8de177: movzx ecx, byte ptr [eax + ebx] */
  ecx = (uint32_t)(R8((uint32_t)(eax + ebx)));
/* 8de17b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de17e: lea edx, [ebp - 0x180] */
  edx = (uint32_t)(ebp + 0xfffffe80u);
/* 8de184: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de187: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de188: lea eax, [ebp - 0x29c] */
  eax = (uint32_t)(ebp + 0xfffffd64u);
/* 8de18e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de18f: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de195: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de198: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8de19a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8de19c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8de19e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8de1a0: fstp dword ptr [ebp - 0x180] */
  WF32((uint32_t)(ebp + 0xfffffe80u), ST0); FPOP();
/* 8de1a6: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8de1a8: fstp dword ptr [ebp - 0x17c] */
  WF32((uint32_t)(ebp + 0xfffffe84u), ST0); FPOP();
/* 8de1ae: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8de1b0: fstp dword ptr [ebp - 0x178] */
  WF32((uint32_t)(ebp + 0xfffffe88u), ST0); FPOP();
/* 8de1b6: fstp dword ptr [ebp - 0x174] */
  WF32((uint32_t)(ebp + 0xfffffe8cu), ST0); FPOP();
/* 8de1bc: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de1c2u); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de1c2: mov ecx, dword ptr [esi - 0xc] */
  ecx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de1c5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8de1c8: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de1ca: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de1cc: movzx eax, byte ptr [ecx + edx] */
  eax = (uint32_t)(R8((uint32_t)(ecx + edx)));
/* 8de1d0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de1d3: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de1d6: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de1dc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8de1de: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8de1e0: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8de1e2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8de1e4: fstp dword ptr [ebp - 0x120] */
  WF32((uint32_t)(ebp + 0xfffffee0u), ST0); FPOP();
/* 8de1ea: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8de1ec: fstp dword ptr [ebp - 0x11c] */
  WF32((uint32_t)(ebp + 0xfffffee4u), ST0); FPOP();
/* 8de1f2: lea ecx, [ebp - 0x120] */
  ecx = (uint32_t)(ebp + 0xfffffee0u);
/* 8de1f8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8de1fa: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* 8de200: fstp dword ptr [ebp - 0x118] */
  WF32((uint32_t)(ebp + 0xfffffee8u), ST0); FPOP();
/* 8de206: fstp dword ptr [ebp - 0x114] */
  WF32((uint32_t)(ebp + 0xfffffeecu), ST0); FPOP();
/* 8de20c: jmp 0x8de5d0 */
  goto L_8de5d0;
L_8de211: /* 8de211: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de214: movzx ecx, byte ptr [eax + edi*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(eax + edi*4 + 0x3u)));
/* 8de219: movzx edx, byte ptr [eax + edi*4] */
  edx = (uint32_t)(R8((uint32_t)(eax + edi*4)));
/* 8de21d: lea eax, [eax + edi*4] */
  eax = (uint32_t)(eax + edi*4);
/* 8de220: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de223: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de227: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de22a: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de22d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de233: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de237: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de23a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de23d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de243: lea eax, [ebp - 0x100] */
  eax = (uint32_t)(ebp + 0xffffff00u);
/* 8de249: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de24c: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de24f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de250: lea ecx, [ebp - 0x27c] */
  ecx = (uint32_t)(ebp + 0xfffffd84u);
/* 8de256: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de25c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de25d: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de260: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de263: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de269: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 8de26f: fstp dword ptr [ebp - 0xfc] */
  WF32((uint32_t)(ebp + 0xffffff04u), ST0); FPOP();
/* 8de275: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 8de27b: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 8de281: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de287u); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de287: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8de28a: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de28d: lea edx, [edi + ebx] */
  edx = (uint32_t)(edi + ebx);
/* 8de290: movzx ecx, byte ptr [eax + edx*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(eax + edx*4 + 0x3u)));
/* 8de295: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 8de298: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de29b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de29e: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de2a2: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de2a5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de2a8: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de2ae: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de2b2: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de2b5: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de2b8: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de2be: lea eax, [ebp - 0xe0] */
  eax = (uint32_t)(ebp + 0xffffff20u);
/* 8de2c4: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de2c7: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de2ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de2cb: lea ecx, [ebp - 0x23c] */
  ecx = (uint32_t)(ebp + 0xfffffdc4u);
/* 8de2d1: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de2d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de2d8: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de2db: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de2de: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de2e4: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 8de2ea: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 8de2f0: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 8de2f6: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 8de2fc: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de302u); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de302: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de305: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de308: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de30a: movzx ecx, byte ptr [eax + edi*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(eax + edi*4 + 0x3u)));
/* 8de30f: movzx edx, byte ptr [eax + edi*4] */
  edx = (uint32_t)(R8((uint32_t)(eax + edi*4)));
/* 8de313: lea eax, [eax + edi*4] */
  eax = (uint32_t)(eax + edi*4);
/* 8de316: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de319: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de31d: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de320: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de323: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de329: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de32d: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de330: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de333: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de339: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de33c: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de33f: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de345: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de348: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de34e: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 8de351: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 8de354: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 8de357: lea eax, [ebp - 0x80] */
  eax = (uint32_t)(ebp + 0xffffff80u);
/* 8de35a: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 8de35d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de35e: lea ecx, [ebp - 0x1ac] */
  ecx = (uint32_t)(ebp + 0xfffffe54u);
/* 8de364: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de365: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de368: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de36eu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de36e: mov edx, dword ptr [esi - 0xc] */
  edx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de371: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de373: movzx ecx, byte ptr [edx + edi*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(edx + edi*4 + 0x3u)));
/* 8de378: lea eax, [edx + edi*4] */
  eax = (uint32_t)(edx + edi*4);
/* 8de37b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de37e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de381: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de385: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de388: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de38b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de391: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de395: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de398: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de39b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de3a1: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 8de3a7: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de3aa: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de3ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de3ae: lea ecx, [ebp - 0x1cc] */
  ecx = (uint32_t)(ebp + 0xfffffe34u);
/* 8de3b4: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de3ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de3bb: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de3be: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de3c4: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 8de3ca: fstp dword ptr [ebp - 0xbc] */
  WF32((uint32_t)(ebp + 0xffffff44u), ST0); FPOP();
/* 8de3d0: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 8de3d6: fstp dword ptr [ebp - 0xb4] */
  WF32((uint32_t)(ebp + 0xffffff4cu), ST0); FPOP();
/* 8de3dc: jmp 0x8de5d2 */
  goto L_8de5d2;
L_8de3e1: /* 8de3e1: mov edx, dword ptr [esi - 0xc] */
  edx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de3e4: movzx eax, byte ptr [edx + edi] */
  eax = (uint32_t)(R8((uint32_t)(edx + edi)));
/* 8de3e8: mov ebx, dword ptr [ebp - 0x5c] */
  ebx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8de3eb: movzx ecx, byte ptr [ebx + eax*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + eax*4 + 0x3u)));
/* 8de3f0: movzx edx, byte ptr [ebx + eax*4] */
  edx = (uint32_t)(R8((uint32_t)(ebx + eax*4)));
/* 8de3f4: lea eax, [ebx + eax*4] */
  eax = (uint32_t)(ebx + eax*4);
/* 8de3f7: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de3fa: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de3fe: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de401: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de404: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de40a: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de40e: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de411: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de414: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de41a: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* 8de420: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de423: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de426: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de427: lea ecx, [ebp - 0x1ec] */
  ecx = (uint32_t)(ebp + 0xfffffe14u);
/* 8de42d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de434: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de437: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de43a: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de440: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 8de446: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 8de44c: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 8de452: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 8de458: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de45eu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de45e: mov edx, dword ptr [esi - 0xc] */
  edx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de461: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8de464: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8de466: movzx ecx, byte ptr [edx + eax] */
  ecx = (uint32_t)(R8((uint32_t)(edx + eax)));
/* 8de46a: movzx edx, byte ptr [ebx + ecx*4 + 3] */
  edx = (uint32_t)(R8((uint32_t)(ebx + ecx*4 + 0x3u)));
/* 8de46f: lea eax, [ebx + ecx*4] */
  eax = (uint32_t)(ebx + ecx*4);
/* 8de472: movzx ecx, byte ptr [eax] */
  ecx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de475: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de478: movzx edx, byte ptr [eax + 1] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de47c: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de47f: movzx eax, byte ptr [eax + 2] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de483: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de489: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de48c: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8de492: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de495: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de498: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de499: lea edx, [ebp - 0x20c] */
  edx = (uint32_t)(ebp + 0xfffffdf4u);
/* 8de49f: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de4a5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de4a6: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de4a9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de4ac: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de4af: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de4b5: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de4b8: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de4be: fstp dword ptr [ebp - 0xb0] */
  WF32((uint32_t)(ebp + 0xffffff50u), ST0); FPOP();
/* 8de4c4: fstp dword ptr [ebp - 0xac] */
  WF32((uint32_t)(ebp + 0xffffff54u), ST0); FPOP();
/* 8de4ca: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* 8de4d0: fstp dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0); FPOP();
/* 8de4d6: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de4dcu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de4dc: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de4df: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de4e2: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8de4e4: movzx edx, byte ptr [eax + ecx] */
  edx = (uint32_t)(R8((uint32_t)(eax + ecx)));
/* 8de4e8: movzx ecx, byte ptr [ebx + edx*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edx*4 + 0x3u)));
/* 8de4ed: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* 8de4f0: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de4f3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de4f6: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de4fa: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de4fd: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de500: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de506: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de50a: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de50d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de510: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de516: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de519: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de51c: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de522: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de525: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de52b: lea eax, [ebp - 0xd0] */
  eax = (uint32_t)(ebp + 0xffffff30u);
/* 8de531: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de532: lea ecx, [ebp - 0x22c] */
  ecx = (uint32_t)(ebp + 0xfffffdd4u);
/* 8de538: fstp dword ptr [ebp - 0xd0] */
  WF32((uint32_t)(ebp + 0xffffff30u), ST0); FPOP();
/* 8de53e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de53f: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de542: fstp dword ptr [ebp - 0xcc] */
  WF32((uint32_t)(ebp + 0xffffff34u), ST0); FPOP();
/* 8de548: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 8de54e: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 8de554: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de55au); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de55a: mov edx, dword ptr [esi - 0xc] */
  edx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de55d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8de560: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8de562: add edx, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8de565: movzx ecx, byte ptr [edx + eax] */
  ecx = (uint32_t)(R8((uint32_t)(edx + eax)));
/* 8de569: movzx edx, byte ptr [ebx + ecx*4 + 3] */
  edx = (uint32_t)(R8((uint32_t)(ebx + ecx*4 + 0x3u)));
/* 8de56e: lea eax, [ebx + ecx*4] */
  eax = (uint32_t)(ebx + ecx*4);
/* 8de571: movzx ecx, byte ptr [eax] */
  ecx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de574: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de577: movzx edx, byte ptr [eax + 1] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de57b: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de57e: movzx eax, byte ptr [eax + 2] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de582: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de588: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de58b: lea ecx, [ebp - 0xf0] */
  ecx = (uint32_t)(ebp + 0xffffff10u);
/* 8de591: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de594: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de597: lea edx, [ebp - 0x24c] */
  edx = (uint32_t)(ebp + 0xfffffdb4u);
/* 8de59d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de5a3: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de5a6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de5a9: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de5af: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de5b2: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de5b8: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 8de5be: fstp dword ptr [ebp - 0xec] */
  WF32((uint32_t)(ebp + 0xffffff14u), ST0); FPOP();
/* 8de5c4: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 8de5ca: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
L_8de5d0: /* 8de5d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de5d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_8de5d2: /* 8de5d2: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de5d5: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de5dbu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
L_8de5db: /* 8de5db: push 0x40800000 */
  { uint32_t v = 0x40800000u; esp -= 4; W32(esp, v); }
/* 8de5e0: lea eax, [ebp - 0x26c] */
  eax = (uint32_t)(ebp + 0xfffffd94u);
/* 8de5e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de5e7: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de5ea: call dword ptr [0xcfac60] */
  esp -= 4; W32(esp, 0x8de5f0u); SPILL(); f_4e3701(); if (g_unwind) return; /* Core!??KFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 8de5f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de5f1: lea ecx, [ebp - 0x18c] */
  ecx = (uint32_t)(ebp + 0xfffffe74u);
/* 8de5f7: call 0x6c576d */
  esp -= 4; W32(esp, 0x8de5fcu); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 8de5fc: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8de5ff: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8de602: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8de605: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 8de608: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8de60a: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8de60d: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de60f: mov dword ptr [edi + ecx*4], eax */
  W32((uint32_t)(edi + ecx*4), eax);
/* 8de612: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8de615: mov cl, byte ptr [ecx + 0x38] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x38u))) & 0xffu);
/* 8de618: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8de61a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de61d: je 0x8de66d */
  if (zf) goto L_8de66d;
L_8de61f: /* 8de61f: cmp cl, 5 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8de622: je 0x8de64e */
  if (zf) goto L_8de64e;
L_8de624: /* 8de624: cmp cl, 9 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8de627: jne 0x8de68a */
  if (!zf) goto L_8de68a;
L_8de629: /* 8de629: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8de62c: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 8de62f: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 8de632: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8de635: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8de638: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8de63a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8de63d: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8de640: mov byte ptr [eax + ebx], cl */
  W8((uint32_t)(eax + ebx), (ecx & 0xffu));
/* 8de643: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de644: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 8de647: mov eax, ebx */
  eax = ebx;
/* 8de649: jmp 0x8ddea2 */
  goto L_8ddea2;
L_8de64e: /* 8de64e: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8de651: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8de654: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 8de657: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 8de65a: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de65c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de65d: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 8de660: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8de663: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 8de666: mov eax, ebx */
  eax = ebx;
/* 8de668: jmp 0x8ddea2 */
  goto L_8ddea2;
L_8de66d: /* 8de66d: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 8de670: imul edi, edx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(edx);
  edi = (uint32_t)r;
  }
/* 8de673: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 8de676: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8de678: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de679: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8de67c: mov ecx, dword ptr [eax + 0x50] */
  ecx = R32((uint32_t)(eax + 0x50u));
/* 8de67f: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de681: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de683: call 0x6cb18b */
  esp -= 4; W32(esp, 0x8de688u); SPILL(); f_6cb18b(); if (g_unwind) return; RELOAD();
/* 8de688: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
L_8de68a: /* 8de68a: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8de68d: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8de690: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de691: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 8de694: mov eax, ebx */
  eax = ebx;
/* 8de696: jmp 0x8ddea2 */
  goto L_8ddea2;
L_8de69b: /* 8de69b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8de69c: jmp 0x8dde91 */
  goto L_8dde91;
L_8de6a1: /* 8de6a1: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 8de6a2: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8de6a5: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 8de6ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8de6b0: /* 8de6b0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8de6b3: cmp ecx, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8de6b6: jge 0x8de8e7 */
  if ((sf == of)) goto L_8de8e7;
L_8de6bc: /* 8de6bc: xor eax, eax */
  eax = 0;
/* 8de6be: xor ebx, ebx */
  ebx = 0;
L_8de6c0: /* 8de6c0: cmp ebx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8de6c3: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 8de6c6: jge 0x8de8df */
  if ((sf == of)) goto L_8de8df;
L_8de6cc: /* 8de6cc: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8de6cf: imul edi, dword ptr [ebp - 0x54] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffacu)));
  edi = (uint32_t)r;
  }
/* 8de6d3: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de6d5: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8de6d8: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 8de6df: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 8de6e6: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8de6ed: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 8de6f4: shl edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
L_8de6f6: /* 8de6f6: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8de6f9: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de6fc: mov eax, 2 */
  eax = 0x2u;
/* 8de701: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8de703: jge 0x8de840 */
  if ((sf == of)) goto L_8de840;
L_8de709: /* 8de709: xor ebx, ebx */
  ebx = 0;
/* 8de70b: jmp 0x8de710 */
  goto L_8de710;
L_8de710: /* 8de710: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8de713: jge 0x8de834 */
  if ((sf == of)) goto L_8de834;
L_8de719: /* 8de719: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8de71c: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de71f: mov edx, ebx */
  edx = ebx;
/* 8de721: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8de723: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8de726: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 8de729: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8de72a: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8de72c: lea eax, [edx + ecx] */
  eax = (uint32_t)(edx + ecx);
/* 8de72f: mov edx, dword ptr [esi - 0xc] */
  edx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de732: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8de734: mov cl, byte ptr [edx + eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + eax))) & 0xffu);
/* 8de737: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8de739: je 0x8de82e */
  if (zf) goto L_8de82e;
L_8de73f: /* 8de73f: inc dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd8u), r);
  }
/* 8de742: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8de745: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8de747: je 0x8de7c5 */
  if (zf) goto L_8de7c5;
L_8de749: /* 8de749: mov ecx, edx */
  ecx = edx;
/* 8de74b: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8de74d: movzx edx, byte ptr [ecx + eax*4 + 3] */
  edx = (uint32_t)(R8((uint32_t)(ecx + eax*4 + 0x3u)));
/* 8de752: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8de755: movzx ecx, byte ptr [eax] */
  ecx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de758: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8de75b: movzx edx, byte ptr [eax + 1] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de75f: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de762: movzx eax, byte ptr [eax + 2] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de766: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de76c: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8de76f: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 8de775: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de778: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8de77b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de77c: lea edx, [ebp - 0x28c] */
  edx = (uint32_t)(ebp + 0xfffffd74u);
/* 8de782: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de788: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8de78b: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de78e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8de791: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de792: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de798: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de79b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de7a1: fstp dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0); FPOP();
/* 8de7a7: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 8de7ad: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 8de7b3: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 8de7b9: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de7bfu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de7bf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de7c0: jmp 0x8de710 */
  goto L_8de710;
L_8de7c5: /* 8de7c5: movzx eax, cl */
  eax = (uint32_t)((ecx & 0xffu));
/* 8de7c8: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8de7cb: movzx edx, byte ptr [ecx + eax*4 + 3] */
  edx = (uint32_t)(R8((uint32_t)(ecx + eax*4 + 0x3u)));
/* 8de7d0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8de7d3: movzx ecx, byte ptr [eax] */
  ecx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de7d6: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8de7d9: movzx edx, byte ptr [eax + 1] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de7dd: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de7e0: movzx eax, byte ptr [eax + 2] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de7e4: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de7ea: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8de7ed: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8de7f0: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de7f3: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8de7f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de7f7: lea edx, [ebp - 0x2ac] */
  edx = (uint32_t)(ebp + 0xfffffd54u);
/* 8de7fd: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de803: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8de806: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de809: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8de80c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de80d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de813: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de816: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de81c: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 8de81f: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 8de822: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 8de825: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 8de828: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de82eu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
L_8de82e: /* 8de82e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de82f: jmp 0x8de710 */
  goto L_8de710;
L_8de834: /* 8de834: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de837: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8de83a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8de83b: jmp 0x8de6f6 */
  goto L_8de6f6;
L_8de840: /* 8de840: cmp dword ptr [ebp - 0x28], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8de843: jl 0x8de8a6 */
  if ((sf != of)) goto L_8de8a6;
L_8de845: /* 8de845: fild dword ptr [ebp - 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8de848: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de849: lea eax, [ebp - 0x2cc] */
  eax = (uint32_t)(ebp + 0xfffffd34u);
/* 8de84f: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8de852: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8de855: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de856: call dword ptr [0xcfac60] */
  esp -= 4; W32(esp, 0x8de85cu); SPILL(); f_4e3701(); if (g_unwind) return; /* Core!??KFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 8de85c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de85d: lea ecx, [ebp - 0x188] */
  ecx = (uint32_t)(ebp + 0xfffffe78u);
/* 8de863: call 0x6c576d */
  esp -= 4; W32(esp, 0x8de868u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 8de868: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 8de86b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8de86e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8de870: imul edi, ecx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ecx);
  edi = (uint32_t)r;
  }
/* 8de873: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8de876: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de878: mov dword ptr [edx + edi*4], eax */
  W32((uint32_t)(edx + edi*4), eax);
/* 8de87b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8de87e: mov edi, dword ptr [esi + 0x1c] */
  edi = R32((uint32_t)(esi + 0x1cu));
/* 8de881: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 8de884: lea ecx, [ebx + eax] */
  ecx = (uint32_t)(ebx + eax);
/* 8de887: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 8de88a: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8de88d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8de88f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de890: mov ecx, dword ptr [edx + 0x50] */
  ecx = R32((uint32_t)(edx + 0x50u));
/* 8de893: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de895: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de897: call 0x6cb18b */
  esp -= 4; W32(esp, 0x8de89cu); SPILL(); f_6cb18b(); if (g_unwind) return; RELOAD();
/* 8de89c: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 8de89e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de89f: xor eax, eax */
  eax = 0;
/* 8de8a1: jmp 0x8de6c0 */
  goto L_8de6c0;
L_8de8a6: /* 8de8a6: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8de8a9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8de8ac: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8de8af: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 8de8b2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de8b4: mov byte ptr [ebp - 0x58], 0 */
  W8((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 8de8b8: mov byte ptr [ebp - 0x57], 0 */
  W8((uint32_t)(ebp + 0xffffffa9u), 0x0u);
/* 8de8bc: mov byte ptr [ebp - 0x56], 0 */
  W8((uint32_t)(ebp + 0xffffffaau), 0x0u);
/* 8de8c0: mov byte ptr [ebp - 0x55], 0xff */
  W8((uint32_t)(ebp + 0xffffffabu), 0xffu);
/* 8de8c4: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8de8c7: mov dword ptr [edi + ecx*4], edx */
  W32((uint32_t)(edi + ecx*4), edx);
/* 8de8ca: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8de8cd: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 8de8d0: add ecx, dword ptr [esi + 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1cu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de8d3: mov byte ptr [ecx + ebx], 0 */
  W8((uint32_t)(ecx + ebx), 0x0u);
/* 8de8d7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de8d8: xor eax, eax */
  eax = 0;
/* 8de8da: jmp 0x8de6c0 */
  goto L_8de6c0;
L_8de8df: /* 8de8df: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 8de8e2: jmp 0x8de6b0 */
  goto L_8de6b0;
L_8de8e7: /* 8de8e7: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8de8ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8de8ec: je 0x8de8ff */
  if (zf) goto L_8de8ff;
L_8de8ee: /* 8de8ee: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 8de8f4: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8de8f6: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8de8f9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8de8fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de8fc: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x8de8ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8de8ff: /* 8de8ff: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8de902: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8de905: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8de906: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 8de909: jmp 0x8dde00 */
  goto L_8dde00;
L_8de90e: /* 8de90e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8de911: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8de913: je 0x8de923 */
  if (zf) goto L_8de923;
L_8de915: /* 8de915: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 8de91b: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8de91d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8de91f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de920: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8de923u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8de923: /* 8de923: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8de926: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8de92d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8de92e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8de92f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8de930: mov esp, ebp */
  esp = ebp;
/* 8de932: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8de933: ret 8 */
  esp += 12; SPILL(); return;
L_8de936: /* 8de936: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 8de938: mov ebx, 0 */
  ebx = 0x0u;
/* 8de93d: sets bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((sf) ? 1 : 0) & 0xffu);
/* 8de940: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 8de941: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8de943: movzx eax, byte ptr [esi + 0x3c] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x3cu)));
/* 8de947: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 8de949: mov ecx, 0 */
  ecx = 0x0u;
/* 8de94e: sets cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((sf) ? 1 : 0) & 0xffu);
/* 8de951: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8de952: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8de954: mov al, byte ptr [esi + 0x38] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x38u))) & 0xffu);
/* 8de957: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8de959: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 8de95c: je 0x8de96a */
  if (zf) goto L_8de96a;
L_8de95e: /* 8de95e: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8de960: je 0x8de99b */
  if (zf) goto L_8de99b;
L_8de962: /* 8de962: cmp al, 9 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8de964: jne 0x8dddc0 */
  if (!zf) goto L_8dddc0;
L_8de96a: /* 8de96a: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 8de96c: lea edi, [esi + 0xac] */
  edi = (uint32_t)(esi + 0xacu);
/* 8de972: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8de974: mov ecx, edi */
  ecx = edi;
/* 8de976: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8de97cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8de97c: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 8de97f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8de981: lea ecx, [eax + edx*8] */
  ecx = (uint32_t)(eax + edx*8);
/* 8de984: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8de986: je 0x8dddc0 */
  if (zf) goto L_8dddc0;
L_8de98c: /* 8de98c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8de98f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de990: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8de991: call 0x6cb68b */
  esp -= 4; W32(esp, 0x8de996u); SPILL(); f_6cb68b(); if (g_unwind) return; RELOAD();
/* 8de996: jmp 0x8dddc0 */
  goto L_8dddc0;
L_8de99b: /* 8de99b: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 8de99d: lea edi, [esi + 0xac] */
  edi = (uint32_t)(esi + 0xacu);
/* 8de9a3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8de9a5: mov ecx, edi */
  ecx = edi;
/* 8de9a7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8de9adu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8de9ad: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 8de9b0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8de9b2: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 8de9b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 8de9b7: je 0x8dddc0 */
  if (zf) goto L_8dddc0;
L_8de9bd: /* 8de9bd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8de9c0: mov edx, 1 */
  edx = 0x1u;
/* 8de9c5: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = r;
  }
  }
/* 8de9c7: mov ecx, ebx */
  ecx = ebx;
/* 8de9c9: mov edi, 1 */
  edi = 0x1u;
/* 8de9ce: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 8de9d0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8de9d3: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* 8de9d6: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8de9d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de9da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de9db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8de9dc: mov ecx, eax */
  ecx = eax;
/* 8de9de: call 0x6cc24d */
  esp -= 4; W32(esp, 0x8de9e3u); SPILL(); f_6cc24d(); if (g_unwind) return; RELOAD();
/* 8de9e3: jmp 0x8dddc0 */
  goto L_8dddc0;
}

void f_8ddc88(void) {
  LOAD_REGS();
L_8ddc88: /* 8ddc88: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 8ddc8f: nop  */
L_8ddc90: /* 8ddc90: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* 8ddc96: cmp edi, dword ptr [eax + 0x20] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ddc99: jge 0x8ddcc5 */
  if ((sf == of)) goto L_8ddcc5;
L_8ddc9b: /* 8ddc9b: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 8ddc9e: movzx ecx, byte ptr [eax + edi] */
  ecx = (uint32_t)(R8((uint32_t)(eax + edi)));
/* 8ddca2: lea edx, [ebp - 0xd0] */
  edx = (uint32_t)(ebp + 0xffffff30u);
/* 8ddca8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ddca9: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* 8ddcac: call 0x6c3e7c */
  esp -= 4; W32(esp, 0x8ddcb1u); SPILL(); f_6c3e7c(); if (g_unwind) return; RELOAD();
/* 8ddcb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ddcb2: lea edx, [ebp - 0xb0] */
  edx = (uint32_t)(ebp + 0xffffff50u);
/* 8ddcb8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ddcb9: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8ddcbc: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8ddcc2u); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8ddcc2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8ddcc3: jmp 0x8ddc90 */
  goto L_8ddc90;
L_8ddcc5: /* 8ddcc5: mov eax, dword ptr [esi + 0xac] */
  eax = R32((uint32_t)(esi + 0xacu));
/* 8ddccb: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* 8ddcce: lea edi, [esi + 0xac] */
  edi = (uint32_t)(esi + 0xacu);
/* 8ddcd4: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8ddcd7: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8ddcda: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ddcdb: lea edx, [ebp - 0x90] */
  edx = (uint32_t)(ebp + 0xffffff70u);
/* 8ddce1: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8ddce4: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8ddce7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ddce8: call dword ptr [0xcfac60] */
  esp -= 4; W32(esp, 0x8ddceeu); SPILL(); f_4e3701(); if (g_unwind) return; /* Core!??KFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 8ddcee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ddcef: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8ddcf2: call 0x6c576d */
  esp -= 4; W32(esp, 0x8ddcf7u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 8ddcf7: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8ddcf9: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 8ddcfc: jmp 0x8ddd8a */
  goto L_8ddd8a;
L_8ddd8a: /* 8ddd8a: mov al, byte ptr [esi + 0x38] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x38u))) & 0xffu);
/* 8ddd8d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ddd8f: je 0x8ddd95 */
  if (zf) goto L_8ddd95;
L_8ddd91: /* 8ddd91: and dword ptr [esi + 0x7c], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x7cu))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x7cu), r);
  }
L_8ddd95: /* 8ddd95: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 8ddd9b: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ddd9e: jle 0x8dddab */
  if ((zf || sf != of)) goto L_8dddab;
L_8ddda0: /* 8ddda0: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8ddda1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ddda2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ddda4: mov ecx, edi */
  ecx = edi;
/* 8ddda6: call 0x6c982c */
  esp -= 4; W32(esp, 0x8dddabu); SPILL(); f_6c982c(); if (g_unwind) return; RELOAD();
L_8dddab: /* 8dddab: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8dddae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dddb0: je 0x8de923 */
  if (zf) goto L_8de923;
L_8dddb6: /* 8dddb6: jmp 0x8dddc0 */
  goto L_8dddc0;
L_8dddc0: /* 8dddc0: movzx eax, byte ptr [esi + 0x3b] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x3bu)));
/* 8dddc4: mov ecx, dword ptr [esi + 0xb0] */
  ecx = R32((uint32_t)(esi + 0xb0u));
/* 8dddca: mov edx, eax */
  edx = eax;
/* 8dddcc: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 8dddce: jns 0x8de936 */
  if (!sf) goto L_8de936;
L_8dddd4: /* 8dddd4: movzx edx, byte ptr [esi + 0x3c] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0x3cu)));
/* 8dddd8: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 8dddda: jns 0x8de936 */
  if (!sf) goto L_8de936;
L_8ddde0: /* 8ddde0: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8ddde3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ddde5: je 0x8de923 */
  if (zf) goto L_8de923;
L_8dddeb: /* 8dddeb: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 8dddf2: mov dword ptr [ebp - 0x40], 1 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x1u);
/* 8dddf9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8dde00: /* 8dde00: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8dde03: cmp eax, dword ptr [esi + 0xb0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xb0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dde09: jge 0x8de90e */
  if ((sf == of)) goto L_8de90e;
L_8dde0f: /* 8dde0f: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8dde12: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 8dde15: mov eax, dword ptr [edx + 0xac] */
  eax = R32((uint32_t)(edx + 0xacu));
/* 8dde1b: mov ebx, dword ptr [eax + ecx*8 - 0x20] */
  ebx = R32((uint32_t)(eax + ecx*8 + 0xffffffe0u));
/* 8dde1f: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 8dde25: lea esi, [eax + ecx*8] */
  esi = (uint32_t)(eax + ecx*8);
/* 8dde28: mov eax, dword ptr [esi - 0x24] */
  eax = R32((uint32_t)(esi + 0xffffffdcu));
/* 8dde2b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8dde2e: mov edi, ebx */
  edi = ebx;
/* 8dde30: imul edi, eax */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(eax);
  edi = (uint32_t)r;
  }
/* 8dde33: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8dde36: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8dde38: push 0xaed610 */
  { uint32_t v = 0xaed610u; esp -= 4; W32(esp, v); }
/* 8dde3d: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
/* 8dde44: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 8dde47: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8dde49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8dde4a: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x8dde4cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8dde4c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8dde4e: je 0x8dde63 */
  if (zf) goto L_8dde63;
L_8dde50: /* 8dde50: mov edx, 4 */
  edx = 0x4u;
/* 8dde55: mov ecx, eax */
  ecx = eax;
L_8dde57: /* 8dde57: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edi = r;
  }
/* 8dde58: js 0x8dde5e */
  if (sf) goto L_8dde5e;
L_8dde5a: /* 8dde5a: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8dde5c: jmp 0x8dde57 */
  goto L_8dde57;
L_8dde5e: /* 8dde5e: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8dde61: jmp 0x8dde6a */
  goto L_8dde6a;
L_8dde63: /* 8dde63: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
L_8dde6a: /* 8dde6a: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8dde6d: test byte ptr [eax + 0x7c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x7cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8dde71: jne 0x8de6a1 */
  if (!zf) goto L_8de6a1;
L_8dde77: /* 8dde77: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8dde7a: lea eax, [ebx - 1] */
  eax = (uint32_t)(ebx + 0xffffffffu);
/* 8dde7d: and eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8dde80: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 8dde83: lea ecx, [edx - 1] */
  ecx = (uint32_t)(edx + 0xffffffffu);
/* 8dde86: and ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8dde89: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 8dde8c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8dde8f: xor edi, edi */
  edi = 0;
L_8dde91: /* 8dde91: cmp edi, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8dde94: mov dword ptr [ebp - 0x20], edi */
  W32((uint32_t)(ebp + 0xffffffe0u), edi);
/* 8dde97: jge 0x8de8e7 */
  if ((sf == of)) goto L_8de8e7;
L_8dde9d: /* 8dde9d: xor eax, eax */
  eax = 0;
/* 8dde9f: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_8ddea2: /* 8ddea2: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ddea5: jge 0x8de69b */
  if ((sf == of)) goto L_8de69b;
L_8ddeab: /* 8ddeab: imul edi, edx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(edx);
  edi = (uint32_t)r;
  }
/* 8ddeae: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8ddeb0: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8ddeb3: shl edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8ddeb5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ddeb7: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 8ddebe: mov dword ptr [ebp - 0x4c], 0 */
  W32((uint32_t)(ebp + 0xffffffb4u), 0x0u);
/* 8ddec5: mov dword ptr [ebp - 0x48], 0 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x0u);
/* 8ddecc: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 8dded3: je 0x8de0b0 */
  if (zf) goto L_8de0b0;
L_8dded9: /* 8dded9: mov ebx, eax */
  ebx = eax;
/* 8ddedb: movzx ecx, byte ptr [ebx + edi*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x3u)));
/* 8ddee0: movzx edx, byte ptr [ebx + edi*4] */
  edx = (uint32_t)(R8((uint32_t)(ebx + edi*4)));
/* 8ddee4: movzx eax, byte ptr [ebx + edi*4 + 1] */
  eax = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x1u)));
/* 8ddee9: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ddeec: movzx ecx, byte ptr [ebx + edi*4 + 2] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x2u)));
/* 8ddef1: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddef4: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8ddef7: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddefd: lea edx, [ebp - 0x140] */
  edx = (uint32_t)(ebp + 0xfffffec0u);
/* 8ddf03: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf06: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8ddf09: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ddf0a: lea eax, [ebp - 0x19c] */
  eax = (uint32_t)(ebp + 0xfffffe64u);
/* 8ddf10: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ddf17: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf1a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ddf1d: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8ddf20: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf26: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf29: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf2f: fstp dword ptr [ebp - 0x140] */
  WF32((uint32_t)(ebp + 0xfffffec0u), ST0); FPOP();
/* 8ddf35: fstp dword ptr [ebp - 0x13c] */
  WF32((uint32_t)(ebp + 0xfffffec4u), ST0); FPOP();
/* 8ddf3b: fstp dword ptr [ebp - 0x138] */
  WF32((uint32_t)(ebp + 0xfffffec8u), ST0); FPOP();
/* 8ddf41: fstp dword ptr [ebp - 0x134] */
  WF32((uint32_t)(ebp + 0xfffffeccu), ST0); FPOP();
/* 8ddf47: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8ddf4du); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8ddf4d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8ddf50: lea edx, [edi + ecx] */
  edx = (uint32_t)(edi + ecx);
/* 8ddf53: movzx ecx, byte ptr [ebx + edx*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edx*4 + 0x3u)));
/* 8ddf58: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* 8ddf5b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8ddf5e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ddf61: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8ddf65: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf68: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8ddf6b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf71: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8ddf75: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf78: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ddf7b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf81: lea eax, [ebp - 0x160] */
  eax = (uint32_t)(ebp + 0xfffffea0u);
/* 8ddf87: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf8a: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8ddf8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ddf8e: lea ecx, [ebp - 0x1bc] */
  ecx = (uint32_t)(ebp + 0xfffffe44u);
/* 8ddf94: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddf9a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ddf9b: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddf9e: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8ddfa1: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddfa7: fstp dword ptr [ebp - 0x160] */
  WF32((uint32_t)(ebp + 0xfffffea0u), ST0); FPOP();
/* 8ddfad: fstp dword ptr [ebp - 0x15c] */
  WF32((uint32_t)(ebp + 0xfffffea4u), ST0); FPOP();
/* 8ddfb3: fstp dword ptr [ebp - 0x158] */
  WF32((uint32_t)(ebp + 0xfffffea8u), ST0); FPOP();
/* 8ddfb9: fstp dword ptr [ebp - 0x154] */
  WF32((uint32_t)(ebp + 0xfffffeacu), ST0); FPOP();
/* 8ddfbf: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8ddfc5u); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8ddfc5: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ddfc8: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8ddfca: movzx eax, byte ptr [ebx + edi*4 + 3] */
  eax = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x3u)));
/* 8ddfcf: movzx ecx, byte ptr [ebx + edi*4] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edi*4)));
/* 8ddfd3: movzx edx, byte ptr [ebx + edi*4 + 1] */
  edx = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x1u)));
/* 8ddfd8: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8ddfdb: movzx eax, byte ptr [ebx + edi*4 + 2] */
  eax = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x2u)));
/* 8ddfe0: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddfe3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ddfe6: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8ddfec: lea ecx, [ebp - 0x110] */
  ecx = (uint32_t)(ebp + 0xfffffef0u);
/* 8ddff2: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ddff5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8ddff8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ddff9: lea edx, [ebp - 0x2bc] */
  edx = (uint32_t)(ebp + 0xfffffd44u);
/* 8ddfff: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de005: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de008: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de00b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de011: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de014: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de01a: fstp dword ptr [ebp - 0x110] */
  WF32((uint32_t)(ebp + 0xfffffef0u), ST0); FPOP();
/* 8de020: fstp dword ptr [ebp - 0x10c] */
  WF32((uint32_t)(ebp + 0xfffffef4u), ST0); FPOP();
/* 8de026: fstp dword ptr [ebp - 0x108] */
  WF32((uint32_t)(ebp + 0xfffffef8u), ST0); FPOP();
/* 8de02c: fstp dword ptr [ebp - 0x104] */
  WF32((uint32_t)(ebp + 0xfffffefcu), ST0); FPOP();
/* 8de032: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de033: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de036: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de03cu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de03c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8de03f: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de041: movzx ecx, byte ptr [ebx + edi*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edi*4 + 0x3u)));
/* 8de046: movzx edx, byte ptr [ebx + edi*4] */
  edx = (uint32_t)(R8((uint32_t)(ebx + edi*4)));
/* 8de04a: lea eax, [ebx + edi*4] */
  eax = (uint32_t)(ebx + edi*4);
/* 8de04d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de050: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de054: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de057: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de05a: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de060: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de064: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de067: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de06a: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de070: lea eax, [ebp - 0x130] */
  eax = (uint32_t)(ebp + 0xfffffed0u);
/* 8de076: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de079: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de07c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de07d: lea ecx, [ebp - 0x1dc] */
  ecx = (uint32_t)(ebp + 0xfffffe24u);
/* 8de083: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de089: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de08a: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de08d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de093: fstp dword ptr [ebp - 0x130] */
  WF32((uint32_t)(ebp + 0xfffffed0u), ST0); FPOP();
/* 8de099: fstp dword ptr [ebp - 0x12c] */
  WF32((uint32_t)(ebp + 0xfffffed4u), ST0); FPOP();
/* 8de09f: fstp dword ptr [ebp - 0x128] */
  WF32((uint32_t)(ebp + 0xfffffed8u), ST0); FPOP();
/* 8de0a5: fstp dword ptr [ebp - 0x124] */
  WF32((uint32_t)(ebp + 0xfffffedcu), ST0); FPOP();
/* 8de0ab: jmp 0x8de5d2 */
  goto L_8de5d2;
L_8de0b0: /* 8de0b0: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8de0b3: mov al, byte ptr [edx + 0x38] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + 0x38u))) & 0xffu);
/* 8de0b6: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8de0b8: je 0x8de3e1 */
  if (zf) goto L_8de3e1;
L_8de0be: /* 8de0be: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8de0c0: je 0x8de211 */
  if (zf) goto L_8de211;
L_8de0c6: /* 8de0c6: cmp al, 9 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8de0c8: jne 0x8de5db */
  if (!zf) goto L_8de5db;
L_8de0ce: /* 8de0ce: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de0d1: movzx ecx, byte ptr [edi + eax] */
  ecx = (uint32_t)(R8((uint32_t)(edi + eax)));
/* 8de0d5: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de0d8: lea edx, [ebp - 0x150] */
  edx = (uint32_t)(ebp + 0xfffffeb0u);
/* 8de0de: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de0e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de0e2: lea eax, [ebp - 0x25c] */
  eax = (uint32_t)(ebp + 0xfffffda4u);
/* 8de0e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de0e9: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de0ef: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de0f2: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8de0f4: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8de0f6: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8de0f8: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8de0fa: fstp dword ptr [ebp - 0x150] */
  WF32((uint32_t)(ebp + 0xfffffeb0u), ST0); FPOP();
/* 8de100: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8de102: fstp dword ptr [ebp - 0x14c] */
  WF32((uint32_t)(ebp + 0xfffffeb4u), ST0); FPOP();
/* 8de108: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8de10a: fstp dword ptr [ebp - 0x148] */
  WF32((uint32_t)(ebp + 0xfffffeb8u), ST0); FPOP();
/* 8de110: fstp dword ptr [ebp - 0x144] */
  WF32((uint32_t)(ebp + 0xfffffebcu), ST0); FPOP();
/* 8de116: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de11cu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de11c: mov ecx, dword ptr [esi - 0xc] */
  ecx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de11f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8de122: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de124: movzx eax, byte ptr [ecx + edx] */
  eax = (uint32_t)(R8((uint32_t)(ecx + edx)));
/* 8de128: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de12b: lea ecx, [ebp - 0x170] */
  ecx = (uint32_t)(ebp + 0xfffffe90u);
/* 8de131: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de134: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de135: lea edx, [ebp - 0x1fc] */
  edx = (uint32_t)(ebp + 0xfffffe04u);
/* 8de13b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de13c: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de142: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de145: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8de147: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8de149: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8de14b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8de14d: fstp dword ptr [ebp - 0x170] */
  WF32((uint32_t)(ebp + 0xfffffe90u), ST0); FPOP();
/* 8de153: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8de155: fstp dword ptr [ebp - 0x16c] */
  WF32((uint32_t)(ebp + 0xfffffe94u), ST0); FPOP();
/* 8de15b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8de15d: fstp dword ptr [ebp - 0x168] */
  WF32((uint32_t)(ebp + 0xfffffe98u), ST0); FPOP();
/* 8de163: fstp dword ptr [ebp - 0x164] */
  WF32((uint32_t)(ebp + 0xfffffe9cu), ST0); FPOP();
/* 8de169: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de16fu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de16f: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de172: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de175: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8de177: movzx ecx, byte ptr [eax + ebx] */
  ecx = (uint32_t)(R8((uint32_t)(eax + ebx)));
/* 8de17b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de17e: lea edx, [ebp - 0x180] */
  edx = (uint32_t)(ebp + 0xfffffe80u);
/* 8de184: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de187: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de188: lea eax, [ebp - 0x29c] */
  eax = (uint32_t)(ebp + 0xfffffd64u);
/* 8de18e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de18f: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de195: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de198: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8de19a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8de19c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8de19e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8de1a0: fstp dword ptr [ebp - 0x180] */
  WF32((uint32_t)(ebp + 0xfffffe80u), ST0); FPOP();
/* 8de1a6: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8de1a8: fstp dword ptr [ebp - 0x17c] */
  WF32((uint32_t)(ebp + 0xfffffe84u), ST0); FPOP();
/* 8de1ae: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8de1b0: fstp dword ptr [ebp - 0x178] */
  WF32((uint32_t)(ebp + 0xfffffe88u), ST0); FPOP();
/* 8de1b6: fstp dword ptr [ebp - 0x174] */
  WF32((uint32_t)(ebp + 0xfffffe8cu), ST0); FPOP();
/* 8de1bc: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de1c2u); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de1c2: mov ecx, dword ptr [esi - 0xc] */
  ecx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de1c5: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8de1c8: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de1ca: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de1cc: movzx eax, byte ptr [ecx + edx] */
  eax = (uint32_t)(R8((uint32_t)(ecx + edx)));
/* 8de1d0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de1d3: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de1d6: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de1dc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8de1de: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8de1e0: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8de1e2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8de1e4: fstp dword ptr [ebp - 0x120] */
  WF32((uint32_t)(ebp + 0xfffffee0u), ST0); FPOP();
/* 8de1ea: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 8de1ec: fstp dword ptr [ebp - 0x11c] */
  WF32((uint32_t)(ebp + 0xfffffee4u), ST0); FPOP();
/* 8de1f2: lea ecx, [ebp - 0x120] */
  ecx = (uint32_t)(ebp + 0xfffffee0u);
/* 8de1f8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8de1fa: lea edx, [ebp - 0x21c] */
  edx = (uint32_t)(ebp + 0xfffffde4u);
/* 8de200: fstp dword ptr [ebp - 0x118] */
  WF32((uint32_t)(ebp + 0xfffffee8u), ST0); FPOP();
/* 8de206: fstp dword ptr [ebp - 0x114] */
  WF32((uint32_t)(ebp + 0xfffffeecu), ST0); FPOP();
/* 8de20c: jmp 0x8de5d0 */
  goto L_8de5d0;
L_8de211: /* 8de211: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de214: movzx ecx, byte ptr [eax + edi*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(eax + edi*4 + 0x3u)));
/* 8de219: movzx edx, byte ptr [eax + edi*4] */
  edx = (uint32_t)(R8((uint32_t)(eax + edi*4)));
/* 8de21d: lea eax, [eax + edi*4] */
  eax = (uint32_t)(eax + edi*4);
/* 8de220: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de223: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de227: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de22a: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de22d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de233: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de237: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de23a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de23d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de243: lea eax, [ebp - 0x100] */
  eax = (uint32_t)(ebp + 0xffffff00u);
/* 8de249: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de24c: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de24f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de250: lea ecx, [ebp - 0x27c] */
  ecx = (uint32_t)(ebp + 0xfffffd84u);
/* 8de256: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de25c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de25d: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de260: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de263: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de269: fstp dword ptr [ebp - 0x100] */
  WF32((uint32_t)(ebp + 0xffffff00u), ST0); FPOP();
/* 8de26f: fstp dword ptr [ebp - 0xfc] */
  WF32((uint32_t)(ebp + 0xffffff04u), ST0); FPOP();
/* 8de275: fstp dword ptr [ebp - 0xf8] */
  WF32((uint32_t)(ebp + 0xffffff08u), ST0); FPOP();
/* 8de27b: fstp dword ptr [ebp - 0xf4] */
  WF32((uint32_t)(ebp + 0xffffff0cu), ST0); FPOP();
/* 8de281: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de287u); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de287: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8de28a: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de28d: lea edx, [edi + ebx] */
  edx = (uint32_t)(edi + ebx);
/* 8de290: movzx ecx, byte ptr [eax + edx*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(eax + edx*4 + 0x3u)));
/* 8de295: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 8de298: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de29b: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de29e: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de2a2: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de2a5: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de2a8: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de2ae: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de2b2: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de2b5: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de2b8: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de2be: lea eax, [ebp - 0xe0] */
  eax = (uint32_t)(ebp + 0xffffff20u);
/* 8de2c4: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de2c7: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de2ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de2cb: lea ecx, [ebp - 0x23c] */
  ecx = (uint32_t)(ebp + 0xfffffdc4u);
/* 8de2d1: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de2d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de2d8: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de2db: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de2de: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de2e4: fstp dword ptr [ebp - 0xe0] */
  WF32((uint32_t)(ebp + 0xffffff20u), ST0); FPOP();
/* 8de2ea: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 8de2f0: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 8de2f6: fstp dword ptr [ebp - 0xd4] */
  WF32((uint32_t)(ebp + 0xffffff2cu), ST0); FPOP();
/* 8de2fc: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de302u); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de302: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de305: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de308: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de30a: movzx ecx, byte ptr [eax + edi*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(eax + edi*4 + 0x3u)));
/* 8de30f: movzx edx, byte ptr [eax + edi*4] */
  edx = (uint32_t)(R8((uint32_t)(eax + edi*4)));
/* 8de313: lea eax, [eax + edi*4] */
  eax = (uint32_t)(eax + edi*4);
/* 8de316: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de319: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de31d: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de320: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de323: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de329: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de32d: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de330: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de333: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de339: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de33c: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de33f: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de345: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de348: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de34e: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 8de351: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 8de354: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 8de357: lea eax, [ebp - 0x80] */
  eax = (uint32_t)(ebp + 0xffffff80u);
/* 8de35a: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 8de35d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de35e: lea ecx, [ebp - 0x1ac] */
  ecx = (uint32_t)(ebp + 0xfffffe54u);
/* 8de364: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de365: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de368: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de36eu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de36e: mov edx, dword ptr [esi - 0xc] */
  edx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de371: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de373: movzx ecx, byte ptr [edx + edi*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(edx + edi*4 + 0x3u)));
/* 8de378: lea eax, [edx + edi*4] */
  eax = (uint32_t)(edx + edi*4);
/* 8de37b: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de37e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de381: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de385: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de388: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de38b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de391: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de395: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de398: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de39b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de3a1: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 8de3a7: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de3aa: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de3ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de3ae: lea ecx, [ebp - 0x1cc] */
  ecx = (uint32_t)(ebp + 0xfffffe34u);
/* 8de3b4: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de3ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de3bb: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de3be: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de3c4: fstp dword ptr [ebp - 0xc0] */
  WF32((uint32_t)(ebp + 0xffffff40u), ST0); FPOP();
/* 8de3ca: fstp dword ptr [ebp - 0xbc] */
  WF32((uint32_t)(ebp + 0xffffff44u), ST0); FPOP();
/* 8de3d0: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 8de3d6: fstp dword ptr [ebp - 0xb4] */
  WF32((uint32_t)(ebp + 0xffffff4cu), ST0); FPOP();
/* 8de3dc: jmp 0x8de5d2 */
  goto L_8de5d2;
L_8de3e1: /* 8de3e1: mov edx, dword ptr [esi - 0xc] */
  edx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de3e4: movzx eax, byte ptr [edx + edi] */
  eax = (uint32_t)(R8((uint32_t)(edx + edi)));
/* 8de3e8: mov ebx, dword ptr [ebp - 0x5c] */
  ebx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8de3eb: movzx ecx, byte ptr [ebx + eax*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + eax*4 + 0x3u)));
/* 8de3f0: movzx edx, byte ptr [ebx + eax*4] */
  edx = (uint32_t)(R8((uint32_t)(ebx + eax*4)));
/* 8de3f4: lea eax, [ebx + eax*4] */
  eax = (uint32_t)(ebx + eax*4);
/* 8de3f7: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de3fa: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de3fe: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de401: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de404: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de40a: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de40e: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de411: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de414: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de41a: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* 8de420: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de423: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de426: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de427: lea ecx, [ebp - 0x1ec] */
  ecx = (uint32_t)(ebp + 0xfffffe14u);
/* 8de42d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de433: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de434: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de437: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de43a: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de440: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 8de446: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 8de44c: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 8de452: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 8de458: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de45eu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de45e: mov edx, dword ptr [esi - 0xc] */
  edx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de461: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8de464: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8de466: movzx ecx, byte ptr [edx + eax] */
  ecx = (uint32_t)(R8((uint32_t)(edx + eax)));
/* 8de46a: movzx edx, byte ptr [ebx + ecx*4 + 3] */
  edx = (uint32_t)(R8((uint32_t)(ebx + ecx*4 + 0x3u)));
/* 8de46f: lea eax, [ebx + ecx*4] */
  eax = (uint32_t)(ebx + ecx*4);
/* 8de472: movzx ecx, byte ptr [eax] */
  ecx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de475: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de478: movzx edx, byte ptr [eax + 1] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de47c: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de47f: movzx eax, byte ptr [eax + 2] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de483: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de489: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de48c: lea ecx, [ebp - 0xb0] */
  ecx = (uint32_t)(ebp + 0xffffff50u);
/* 8de492: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de495: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de498: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de499: lea edx, [ebp - 0x20c] */
  edx = (uint32_t)(ebp + 0xfffffdf4u);
/* 8de49f: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de4a5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de4a6: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de4a9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de4ac: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de4af: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de4b5: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de4b8: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de4be: fstp dword ptr [ebp - 0xb0] */
  WF32((uint32_t)(ebp + 0xffffff50u), ST0); FPOP();
/* 8de4c4: fstp dword ptr [ebp - 0xac] */
  WF32((uint32_t)(ebp + 0xffffff54u), ST0); FPOP();
/* 8de4ca: fstp dword ptr [ebp - 0xa8] */
  WF32((uint32_t)(ebp + 0xffffff58u), ST0); FPOP();
/* 8de4d0: fstp dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0); FPOP();
/* 8de4d6: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de4dcu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de4dc: mov eax, dword ptr [esi - 0xc] */
  eax = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de4df: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de4e2: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8de4e4: movzx edx, byte ptr [eax + ecx] */
  edx = (uint32_t)(R8((uint32_t)(eax + ecx)));
/* 8de4e8: movzx ecx, byte ptr [ebx + edx*4 + 3] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + edx*4 + 0x3u)));
/* 8de4ed: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* 8de4f0: movzx edx, byte ptr [eax] */
  edx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de4f3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de4f6: movzx ecx, byte ptr [eax + 1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de4fa: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de4fd: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de500: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de506: movzx edx, byte ptr [eax + 2] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de50a: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de50d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de510: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de516: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de519: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de51c: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de522: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de525: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de52b: lea eax, [ebp - 0xd0] */
  eax = (uint32_t)(ebp + 0xffffff30u);
/* 8de531: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de532: lea ecx, [ebp - 0x22c] */
  ecx = (uint32_t)(ebp + 0xfffffdd4u);
/* 8de538: fstp dword ptr [ebp - 0xd0] */
  WF32((uint32_t)(ebp + 0xffffff30u), ST0); FPOP();
/* 8de53e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de53f: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de542: fstp dword ptr [ebp - 0xcc] */
  WF32((uint32_t)(ebp + 0xffffff34u), ST0); FPOP();
/* 8de548: fstp dword ptr [ebp - 0xc8] */
  WF32((uint32_t)(ebp + 0xffffff38u), ST0); FPOP();
/* 8de54e: fstp dword ptr [ebp - 0xc4] */
  WF32((uint32_t)(ebp + 0xffffff3cu), ST0); FPOP();
/* 8de554: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de55au); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de55a: mov edx, dword ptr [esi - 0xc] */
  edx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de55d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8de560: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8de562: add edx, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8de565: movzx ecx, byte ptr [edx + eax] */
  ecx = (uint32_t)(R8((uint32_t)(edx + eax)));
/* 8de569: movzx edx, byte ptr [ebx + ecx*4 + 3] */
  edx = (uint32_t)(R8((uint32_t)(ebx + ecx*4 + 0x3u)));
/* 8de56e: lea eax, [ebx + ecx*4] */
  eax = (uint32_t)(ebx + ecx*4);
/* 8de571: movzx ecx, byte ptr [eax] */
  ecx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de574: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de577: movzx edx, byte ptr [eax + 1] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de57b: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de57e: movzx eax, byte ptr [eax + 2] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de582: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de588: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8de58b: lea ecx, [ebp - 0xf0] */
  ecx = (uint32_t)(ebp + 0xffffff10u);
/* 8de591: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de594: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8de597: lea edx, [ebp - 0x24c] */
  edx = (uint32_t)(ebp + 0xfffffdb4u);
/* 8de59d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de5a3: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de5a6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de5a9: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de5af: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8de5b2: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de5b8: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 8de5be: fstp dword ptr [ebp - 0xec] */
  WF32((uint32_t)(ebp + 0xffffff14u), ST0); FPOP();
/* 8de5c4: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 8de5ca: fstp dword ptr [ebp - 0xe4] */
  WF32((uint32_t)(ebp + 0xffffff1cu), ST0); FPOP();
L_8de5d0: /* 8de5d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de5d1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
L_8de5d2: /* 8de5d2: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de5d5: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de5dbu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
L_8de5db: /* 8de5db: push 0x40800000 */
  { uint32_t v = 0x40800000u; esp -= 4; W32(esp, v); }
/* 8de5e0: lea eax, [ebp - 0x26c] */
  eax = (uint32_t)(ebp + 0xfffffd94u);
/* 8de5e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de5e7: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8de5ea: call dword ptr [0xcfac60] */
  esp -= 4; W32(esp, 0x8de5f0u); SPILL(); f_4e3701(); if (g_unwind) return; /* Core!??KFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 8de5f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de5f1: lea ecx, [ebp - 0x18c] */
  ecx = (uint32_t)(ebp + 0xfffffe74u);
/* 8de5f7: call 0x6c576d */
  esp -= 4; W32(esp, 0x8de5fcu); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 8de5fc: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8de5ff: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8de602: mov ebx, dword ptr [ebp - 0x28] */
  ebx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8de605: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 8de608: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8de60a: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8de60d: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de60f: mov dword ptr [edi + ecx*4], eax */
  W32((uint32_t)(edi + ecx*4), eax);
/* 8de612: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8de615: mov cl, byte ptr [ecx + 0x38] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x38u))) & 0xffu);
/* 8de618: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8de61a: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8de61d: je 0x8de66d */
  if (zf) goto L_8de66d;
L_8de61f: /* 8de61f: cmp cl, 5 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8de622: je 0x8de64e */
  if (zf) goto L_8de64e;
L_8de624: /* 8de624: cmp cl, 9 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8de627: jne 0x8de68a */
  if (!zf) goto L_8de68a;
L_8de629: /* 8de629: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8de62c: mov ecx, dword ptr [esi + 0x1c] */
  ecx = R32((uint32_t)(esi + 0x1cu));
/* 8de62f: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 8de632: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8de635: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8de638: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8de63a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8de63d: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8de640: mov byte ptr [eax + ebx], cl */
  W8((uint32_t)(eax + ebx), (ecx & 0xffu));
/* 8de643: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de644: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 8de647: mov eax, ebx */
  eax = ebx;
/* 8de649: jmp 0x8ddea2 */
  goto L_8ddea2;
L_8de64e: /* 8de64e: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8de651: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8de654: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 8de657: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 8de65a: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de65c: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de65d: mov dword ptr [edx + ecx*4], eax */
  W32((uint32_t)(edx + ecx*4), eax);
/* 8de660: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8de663: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 8de666: mov eax, ebx */
  eax = ebx;
/* 8de668: jmp 0x8ddea2 */
  goto L_8ddea2;
L_8de66d: /* 8de66d: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 8de670: imul edi, edx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(edx);
  edi = (uint32_t)r;
  }
/* 8de673: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 8de676: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8de678: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de679: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8de67c: mov ecx, dword ptr [eax + 0x50] */
  ecx = R32((uint32_t)(eax + 0x50u));
/* 8de67f: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de681: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de683: call 0x6cb18b */
  esp -= 4; W32(esp, 0x8de688u); SPILL(); f_6cb18b(); if (g_unwind) return; RELOAD();
/* 8de688: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
L_8de68a: /* 8de68a: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8de68d: mov edi, dword ptr [ebp - 0x20] */
  edi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8de690: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de691: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 8de694: mov eax, ebx */
  eax = ebx;
/* 8de696: jmp 0x8ddea2 */
  goto L_8ddea2;
L_8de69b: /* 8de69b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8de69c: jmp 0x8dde91 */
  goto L_8dde91;
L_8de6a1: /* 8de6a1: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 8de6a2: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8de6a5: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 8de6ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8de6b0: /* 8de6b0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8de6b3: cmp ecx, dword ptr [esi + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8de6b6: jge 0x8de8e7 */
  if ((sf == of)) goto L_8de8e7;
L_8de6bc: /* 8de6bc: xor eax, eax */
  eax = 0;
/* 8de6be: xor ebx, ebx */
  ebx = 0;
L_8de6c0: /* 8de6c0: cmp ebx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8de6c3: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 8de6c6: jge 0x8de8df */
  if ((sf == of)) goto L_8de8df;
L_8de6cc: /* 8de6cc: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8de6cf: imul edi, dword ptr [ebp - 0x54] */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffacu)));
  edi = (uint32_t)r;
  }
/* 8de6d3: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de6d5: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8de6d8: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 8de6df: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 8de6e6: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8de6ed: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 8de6f4: shl edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
L_8de6f6: /* 8de6f6: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8de6f9: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de6fc: mov eax, 2 */
  eax = 0x2u;
/* 8de701: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8de703: jge 0x8de840 */
  if ((sf == of)) goto L_8de840;
L_8de709: /* 8de709: xor ebx, ebx */
  ebx = 0;
/* 8de70b: jmp 0x8de710 */
  goto L_8de710;
L_8de710: /* 8de710: cmp ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8de713: jge 0x8de834 */
  if ((sf == of)) goto L_8de834;
L_8de719: /* 8de719: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8de71c: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de71f: mov edx, ebx */
  edx = ebx;
/* 8de721: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8de723: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8de726: imul edx, eax */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(eax);
  edx = (uint32_t)r;
  }
/* 8de729: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8de72a: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8de72c: lea eax, [edx + ecx] */
  eax = (uint32_t)(edx + ecx);
/* 8de72f: mov edx, dword ptr [esi - 0xc] */
  edx = R32((uint32_t)(esi + 0xfffffff4u));
/* 8de732: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8de734: mov cl, byte ptr [edx + eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx + eax))) & 0xffu);
/* 8de737: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8de739: je 0x8de82e */
  if (zf) goto L_8de82e;
L_8de73f: /* 8de73f: inc dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd8u), r);
  }
/* 8de742: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8de745: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8de747: je 0x8de7c5 */
  if (zf) goto L_8de7c5;
L_8de749: /* 8de749: mov ecx, edx */
  ecx = edx;
/* 8de74b: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8de74d: movzx edx, byte ptr [ecx + eax*4 + 3] */
  edx = (uint32_t)(R8((uint32_t)(ecx + eax*4 + 0x3u)));
/* 8de752: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8de755: movzx ecx, byte ptr [eax] */
  ecx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de758: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8de75b: movzx edx, byte ptr [eax + 1] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de75f: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de762: movzx eax, byte ptr [eax + 2] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de766: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de76c: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8de76f: lea ecx, [ebp - 0xa0] */
  ecx = (uint32_t)(ebp + 0xffffff60u);
/* 8de775: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de778: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8de77b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de77c: lea edx, [ebp - 0x28c] */
  edx = (uint32_t)(ebp + 0xfffffd74u);
/* 8de782: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de788: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8de78b: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de78e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8de791: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de792: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de798: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de79b: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de7a1: fstp dword ptr [ebp - 0xa0] */
  WF32((uint32_t)(ebp + 0xffffff60u), ST0); FPOP();
/* 8de7a7: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 8de7ad: fstp dword ptr [ebp - 0x98] */
  WF32((uint32_t)(ebp + 0xffffff68u), ST0); FPOP();
/* 8de7b3: fstp dword ptr [ebp - 0x94] */
  WF32((uint32_t)(ebp + 0xffffff6cu), ST0); FPOP();
/* 8de7b9: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de7bfu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
/* 8de7bf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de7c0: jmp 0x8de710 */
  goto L_8de710;
L_8de7c5: /* 8de7c5: movzx eax, cl */
  eax = (uint32_t)((ecx & 0xffu));
/* 8de7c8: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8de7cb: movzx edx, byte ptr [ecx + eax*4 + 3] */
  edx = (uint32_t)(R8((uint32_t)(ecx + eax*4 + 0x3u)));
/* 8de7d0: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8de7d3: movzx ecx, byte ptr [eax] */
  ecx = (uint32_t)(R8((uint32_t)(eax)));
/* 8de7d6: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8de7d9: movzx edx, byte ptr [eax + 1] */
  edx = (uint32_t)(R8((uint32_t)(eax + 0x1u)));
/* 8de7dd: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de7e0: movzx eax, byte ptr [eax + 2] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0x2u)));
/* 8de7e4: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de7ea: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8de7ed: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8de7f0: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de7f3: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8de7f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de7f7: lea edx, [ebp - 0x2ac] */
  edx = (uint32_t)(ebp + 0xfffffd54u);
/* 8de7fd: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de803: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8de806: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de809: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8de80c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de80d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de813: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8de816: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 8de81c: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
/* 8de81f: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 8de822: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 8de825: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 8de828: call dword ptr [0xcfab40] */
  esp -= 4; W32(esp, 0x8de82eu); SPILL(); f_4e37e7(); if (g_unwind) return; /* Core!??YFPlane@@QAE?AV0@ABV0@@Z */ RELOAD();
L_8de82e: /* 8de82e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de82f: jmp 0x8de710 */
  goto L_8de710;
L_8de834: /* 8de834: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8de837: mov ebx, dword ptr [ebp - 0x20] */
  ebx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8de83a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8de83b: jmp 0x8de6f6 */
  goto L_8de6f6;
L_8de840: /* 8de840: cmp dword ptr [ebp - 0x28], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8de843: jl 0x8de8a6 */
  if ((sf != of)) goto L_8de8a6;
L_8de845: /* 8de845: fild dword ptr [ebp - 0x28] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8de848: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de849: lea eax, [ebp - 0x2cc] */
  eax = (uint32_t)(ebp + 0xfffffd34u);
/* 8de84f: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8de852: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8de855: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de856: call dword ptr [0xcfac60] */
  esp -= 4; W32(esp, 0x8de85cu); SPILL(); f_4e3701(); if (g_unwind) return; /* Core!??KFPlane@@QBE?AV0@M@Z */ RELOAD();
/* 8de85c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de85d: lea ecx, [ebp - 0x188] */
  ecx = (uint32_t)(ebp + 0xfffffe78u);
/* 8de863: call 0x6c576d */
  esp -= 4; W32(esp, 0x8de868u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 8de868: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 8de86b: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8de86e: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8de870: imul edi, ecx */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ecx);
  edi = (uint32_t)r;
  }
/* 8de873: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8de876: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de878: mov dword ptr [edx + edi*4], eax */
  W32((uint32_t)(edx + edi*4), eax);
/* 8de87b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8de87e: mov edi, dword ptr [esi + 0x1c] */
  edi = R32((uint32_t)(esi + 0x1cu));
/* 8de881: imul eax, ecx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ecx);
  eax = (uint32_t)r;
  }
/* 8de884: lea ecx, [ebx + eax] */
  ecx = (uint32_t)(ebx + eax);
/* 8de887: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 8de88a: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8de88d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8de88f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de890: mov ecx, dword ptr [edx + 0x50] */
  ecx = R32((uint32_t)(edx + 0x50u));
/* 8de893: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de895: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8de897: call 0x6cb18b */
  esp -= 4; W32(esp, 0x8de89cu); SPILL(); f_6cb18b(); if (g_unwind) return; RELOAD();
/* 8de89c: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 8de89e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de89f: xor eax, eax */
  eax = 0;
/* 8de8a1: jmp 0x8de6c0 */
  goto L_8de6c0;
L_8de8a6: /* 8de8a6: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8de8a9: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8de8ac: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8de8af: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 8de8b2: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de8b4: mov byte ptr [ebp - 0x58], 0 */
  W8((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 8de8b8: mov byte ptr [ebp - 0x57], 0 */
  W8((uint32_t)(ebp + 0xffffffa9u), 0x0u);
/* 8de8bc: mov byte ptr [ebp - 0x56], 0 */
  W8((uint32_t)(ebp + 0xffffffaau), 0x0u);
/* 8de8c0: mov byte ptr [ebp - 0x55], 0xff */
  W8((uint32_t)(ebp + 0xffffffabu), 0xffu);
/* 8de8c4: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8de8c7: mov dword ptr [edi + ecx*4], edx */
  W32((uint32_t)(edi + ecx*4), edx);
/* 8de8ca: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8de8cd: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 8de8d0: add ecx, dword ptr [esi + 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1cu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8de8d3: mov byte ptr [ecx + ebx], 0 */
  W8((uint32_t)(ecx + ebx), 0x0u);
/* 8de8d7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8de8d8: xor eax, eax */
  eax = 0;
/* 8de8da: jmp 0x8de6c0 */
  goto L_8de6c0;
L_8de8df: /* 8de8df: inc dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 8de8e2: jmp 0x8de6b0 */
  goto L_8de6b0;
L_8de8e7: /* 8de8e7: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8de8ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8de8ec: je 0x8de8ff */
  if (zf) goto L_8de8ff;
L_8de8ee: /* 8de8ee: mov edx, dword ptr [0xcfa1a4] */
  edx = R32((uint32_t)(0xcfa1a4u));
/* 8de8f4: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8de8f6: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8de8f9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8de8fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de8fc: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x8de8ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8de8ff: /* 8de8ff: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8de902: mov esi, dword ptr [ebp - 0x24] */
  esi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8de905: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8de906: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 8de909: jmp 0x8dde00 */
  goto L_8dde00;
L_8de90e: /* 8de90e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8de911: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8de913: je 0x8de923 */
  if (zf) goto L_8de923;
L_8de915: /* 8de915: mov ecx, dword ptr [0xcfa1a4] */
  ecx = R32((uint32_t)(0xcfa1a4u));
/* 8de91b: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8de91d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8de91f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8de920: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x8de923u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8de923: /* 8de923: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8de926: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8de92d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8de92e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8de92f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8de930: mov esp, ebp */
  esp = ebp;
/* 8de932: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8de933: ret 8 */
  esp += 12; SPILL(); return;
L_8de936: /* 8de936: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 8de938: mov ebx, 0 */
  ebx = 0x0u;
/* 8de93d: sets bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((sf) ? 1 : 0) & 0xffu);
/* 8de940: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 8de941: and ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8de943: movzx eax, byte ptr [esi + 0x3c] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x3cu)));
/* 8de947: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 8de949: mov ecx, 0 */
  ecx = 0x0u;
/* 8de94e: sets cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((sf) ? 1 : 0) & 0xffu);
/* 8de951: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8de952: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8de954: mov al, byte ptr [esi + 0x38] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x38u))) & 0xffu);
/* 8de957: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8de959: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 8de95c: je 0x8de96a */
  if (zf) goto L_8de96a;
L_8de95e: /* 8de95e: cmp al, 5 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8de960: je 0x8de99b */
  if (zf) goto L_8de99b;
L_8de962: /* 8de962: cmp al, 9 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8de964: jne 0x8dddc0 */
  if (!zf) goto L_8dddc0;
L_8de96a: /* 8de96a: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 8de96c: lea edi, [esi + 0xac] */
  edi = (uint32_t)(esi + 0xacu);
/* 8de972: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8de974: mov ecx, edi */
  ecx = edi;
/* 8de976: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8de97cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8de97c: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 8de97f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8de981: lea ecx, [eax + edx*8] */
  ecx = (uint32_t)(eax + edx*8);
/* 8de984: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8de986: je 0x8dddc0 */
  if (zf) goto L_8dddc0;
L_8de98c: /* 8de98c: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8de98f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de990: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8de991: call 0x6cb68b */
  esp -= 4; W32(esp, 0x8de996u); SPILL(); f_6cb68b(); if (g_unwind) return; RELOAD();
/* 8de996: jmp 0x8dddc0 */
  goto L_8dddc0;
L_8de99b: /* 8de99b: push 0x28 */
  { uint32_t v = 0x28u; esp -= 4; W32(esp, v); }
/* 8de99d: lea edi, [esi + 0xac] */
  edi = (uint32_t)(esi + 0xacu);
/* 8de9a3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8de9a5: mov ecx, edi */
  ecx = edi;
/* 8de9a7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8de9adu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8de9ad: lea edx, [eax + eax*4] */
  edx = (uint32_t)(eax + eax*4);
/* 8de9b0: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8de9b2: lea eax, [eax + edx*8] */
  eax = (uint32_t)(eax + edx*8);
/* 8de9b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* 8de9b7: je 0x8dddc0 */
  if (zf) goto L_8dddc0;
L_8de9bd: /* 8de9bd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8de9c0: mov edx, 1 */
  edx = 0x1u;
/* 8de9c5: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  cf = (c <= 32) ? (((uint32_t)a >> (32 - c)) & 1) : 0;
  of = ((r >> 31) & 1) ^ (((uint32_t)a >> (32 - c)) & 1);
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  edx = r;
  }
  }
/* 8de9c7: mov ecx, ebx */
  ecx = ebx;
/* 8de9c9: mov edi, 1 */
  edi = 0x1u;
/* 8de9ce: shl edi, cl */
  { uint32_t a = (uint32_t)(edi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
  }
/* 8de9d0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8de9d3: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* 8de9d6: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8de9d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8de9da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8de9db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8de9dc: mov ecx, eax */
  ecx = eax;
/* 8de9de: call 0x6cc24d */
  esp -= 4; W32(esp, 0x8de9e3u); SPILL(); f_6cc24d(); if (g_unwind) return; RELOAD();
/* 8de9e3: jmp 0x8dddc0 */
  goto L_8dddc0;
}
