#include "recomp.h"
#include "rec_mod.h"

void f_47b10f(void) {
  LOAD_REGS();
L_47b10f: /* 47b10f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47b110: mov ebp, esp */
  ebp = esp;
/* 47b112: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47b115: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47b116: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47b117: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47b118: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 47b11a: call 0x461d6f */
  esp -= 4; W32(esp, 0x47b11fu); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47b11f: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 47b122: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47b125: call 0x479941 */
  esp -= 4; W32(esp, 0x47b12au); SPILL(); f_479941(); if (g_unwind) return; RELOAD();
/* 47b12a: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 47b12d: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 47b130: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47b131: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47b132: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47b135: mov ecx, esi */
  ecx = esi;
/* 47b137: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 47b13a: call 0x46e77f */
  esp -= 4; W32(esp, 0x47b13fu); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47b13f: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47b141: jne 0x47b182 */
  if (!zf) goto L_47b182;
L_47b143: /* 47b143: push 0x2b */
  { uint32_t v = 0x2bu; esp -= 4; W32(esp, v); }
/* 47b145: call 0x461d6f */
  esp -= 4; W32(esp, 0x47b14au); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47b14a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47b14b: mov ecx, esi */
  ecx = esi;
/* 47b14d: mov ebx, eax */
  ebx = eax;
/* 47b14f: call 0x472198 */
  esp -= 4; W32(esp, 0x47b154u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47b154: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47b157: jne 0x47b15e */
  if (!zf) goto L_47b15e;
L_47b159: /* 47b159: mov byte ptr [edi], 0x2b */
  W8((uint32_t)(edi), 0x2bu);
/* 47b15c: jmp 0x47b17a */
  goto L_47b17a;
L_47b15e: /* 47b15e: push 0x2d */
  { uint32_t v = 0x2du; esp -= 4; W32(esp, v); }
/* 47b160: call 0x461d6f */
  esp -= 4; W32(esp, 0x47b165u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47b165: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47b166: mov ecx, esi */
  ecx = esi;
/* 47b168: mov ebx, eax */
  ebx = eax;
/* 47b16a: call 0x472198 */
  esp -= 4; W32(esp, 0x47b16fu); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47b16f: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47b172: jne 0x47b182 */
  if (!zf) goto L_47b182;
L_47b174: /* 47b174: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 47b177: mov byte ptr [edi], 0x2d */
  W8((uint32_t)(edi), 0x2du);
L_47b17a: /* 47b17a: mov ecx, esi */
  ecx = esi;
/* 47b17c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47b17d: call 0x46c756 */
  esp -= 4; W32(esp, 0x47b182u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
L_47b182: /* 47b182: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 47b185: and byte ptr [ebp - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffffu), r);
  }
/* 47b189: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47b18a: mov ecx, esi */
  ecx = esi;
/* 47b18c: call 0x46e77f */
  esp -= 4; W32(esp, 0x47b191u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47b191: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47b193: jne 0x47b1c3 */
  if (!zf) goto L_47b1c3;
L_47b195: /* 47b195: mov ecx, esi */
  ecx = esi;
/* 47b197: call 0x472198 */
  esp -= 4; W32(esp, 0x47b19cu); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47b19c: cmp ax, word ptr [ebp - 0x10] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebp + 0xfffffff0u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47b1a0: jne 0x47b1b9 */
  if (!zf) goto L_47b1b9;
L_47b1a2: /* 47b1a2: mov ecx, esi */
  ecx = esi;
/* 47b1a4: mov byte ptr [ebp - 1], 1 */
  W8((uint32_t)(ebp + 0xffffffffu), 0x1u);
/* 47b1a8: call 0x46c756 */
  esp -= 4; W32(esp, 0x47b1adu); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 47b1ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47b1ae: mov ecx, esi */
  ecx = esi;
/* 47b1b0: call 0x46e77f */
  esp -= 4; W32(esp, 0x47b1b5u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47b1b5: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47b1b7: je 0x47b195 */
  if (zf) goto L_47b195;
L_47b1b9: /* 47b1b9: cmp byte ptr [ebp - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47b1bd: je 0x47b1c3 */
  if (zf) goto L_47b1c3;
L_47b1bf: /* 47b1bf: mov byte ptr [edi], 0x30 */
  W8((uint32_t)(edi), 0x30u);
/* 47b1c2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
L_47b1c3: /* 47b1c3: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 47b1c7: and dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 47b1cb: jmp 0x47b206 */
  goto L_47b206;
L_47b1cd: /* 47b1cd: mov ecx, esi */
  ecx = esi;
/* 47b1cf: call 0x472198 */
  esp -= 4; W32(esp, 0x47b1d4u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47b1d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b1d5: call 0x488a88 */
  esp -= 4; W32(esp, 0x47b1dau); SPILL(); f_488a88(); if (g_unwind) return; RELOAD();
/* 47b1da: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 47b1dc: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 47b1df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b1e0: call dword ptr [0x48e0b8] */
  esp -= 4; W32(esp, 0x47b1e6u); SPILL(); f_40152b(); if (g_unwind) return; /* MSVCR70!isdigit */ RELOAD();
/* 47b1e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47b1e8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47b1e9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47b1ea: je 0x47b212 */
  if (zf) goto L_47b212;
L_47b1ec: /* 47b1ec: cmp dword ptr [ebp - 8], 0x24 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47b1f0: jge 0x47b1f8 */
  if ((sf == of)) goto L_47b1f8;
L_47b1f2: /* 47b1f2: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47b1f3: inc dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 47b1f6: jmp 0x47b1fb */
  goto L_47b1fb;
L_47b1f8: /* 47b1f8: inc dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
L_47b1fb: /* 47b1fb: mov ecx, esi */
  ecx = esi;
/* 47b1fd: mov byte ptr [ebp - 1], 1 */
  W8((uint32_t)(ebp + 0xffffffffu), 0x1u);
/* 47b201: call 0x46c756 */
  esp -= 4; W32(esp, 0x47b206u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
L_47b206: /* 47b206: mov ecx, esi */
  ecx = esi;
/* 47b208: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47b209: call 0x46e77f */
  esp -= 4; W32(esp, 0x47b20eu); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47b20e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47b210: je 0x47b1cd */
  if (zf) goto L_47b1cd;
L_47b212: /* 47b212: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47b213: mov ecx, esi */
  ecx = esi;
/* 47b215: call 0x46e77f */
  esp -= 4; W32(esp, 0x47b21au); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47b21a: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47b21c: jne 0x47b248 */
  if (!zf) goto L_47b248;
L_47b21e: /* 47b21e: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 47b221: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 47b223: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x47b226u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47b226: mov ecx, esi */
  ecx = esi;
/* 47b228: mov ebx, eax */
  ebx = eax;
/* 47b22a: call 0x472198 */
  esp -= 4; W32(esp, 0x47b22fu); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47b22f: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47b232: jne 0x47b248 */
  if (!zf) goto L_47b248;
L_47b234: /* 47b234: call dword ptr [0x48e18c] */
  esp -= 4; W32(esp, 0x47b23au); SPILL(); f_412cf8(); if (g_unwind) return; /* MSVCR70!localeconv */ RELOAD();
/* 47b23a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 47b23c: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 47b23e: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 47b240: mov ecx, esi */
  ecx = esi;
/* 47b242: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47b243: call 0x46c756 */
  esp -= 4; W32(esp, 0x47b248u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
L_47b248: /* 47b248: cmp dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47b24c: jne 0x47b2bc */
  if (!zf) goto L_47b2bc;
L_47b24e: /* 47b24e: jmp 0x47b26b */
  goto L_47b26b;
L_47b250: /* 47b250: mov ecx, esi */
  ecx = esi;
/* 47b252: call 0x472198 */
  esp -= 4; W32(esp, 0x47b257u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47b257: cmp ax, word ptr [ebp - 0x10] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebp + 0xfffffff0u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47b25b: jne 0x47b279 */
  if (!zf) goto L_47b279;
L_47b25d: /* 47b25d: dec dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 47b260: mov ecx, esi */
  ecx = esi;
/* 47b262: mov byte ptr [ebp - 1], 1 */
  W8((uint32_t)(ebp + 0xffffffffu), 0x1u);
/* 47b266: call 0x46c756 */
  esp -= 4; W32(esp, 0x47b26bu); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
L_47b26b: /* 47b26b: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47b26e: mov ecx, esi */
  ecx = esi;
/* 47b270: call 0x46e77f */
  esp -= 4; W32(esp, 0x47b275u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47b275: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47b277: je 0x47b250 */
  if (zf) goto L_47b250;
L_47b279: /* 47b279: cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47b27d: jge 0x47b2bc */
  if ((sf == of)) goto L_47b2bc;
L_47b27f: /* 47b27f: mov byte ptr [edi], 0x30 */
  W8((uint32_t)(edi), 0x30u);
/* 47b282: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47b283: inc dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff4u), r);
  }
/* 47b286: jmp 0x47b2bc */
  goto L_47b2bc;
L_47b288: /* 47b288: mov ecx, esi */
  ecx = esi;
/* 47b28a: call 0x472198 */
  esp -= 4; W32(esp, 0x47b28fu); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47b28f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b290: call 0x488a88 */
  esp -= 4; W32(esp, 0x47b295u); SPILL(); f_488a88(); if (g_unwind) return; RELOAD();
/* 47b295: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 47b297: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 47b29a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b29b: call dword ptr [0x48e0b8] */
  esp -= 4; W32(esp, 0x47b2a1u); SPILL(); f_40152b(); if (g_unwind) return; /* MSVCR70!isdigit */ RELOAD();
/* 47b2a1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47b2a3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47b2a4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47b2a5: je 0x47b2ca */
  if (zf) goto L_47b2ca;
L_47b2a7: /* 47b2a7: cmp dword ptr [ebp - 8], 0x24 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47b2ab: jge 0x47b2b1 */
  if ((sf == of)) goto L_47b2b1;
L_47b2ad: /* 47b2ad: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47b2ae: inc dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
L_47b2b1: /* 47b2b1: mov ecx, esi */
  ecx = esi;
/* 47b2b3: mov byte ptr [ebp - 1], 1 */
  W8((uint32_t)(ebp + 0xffffffffu), 0x1u);
/* 47b2b7: call 0x46c756 */
  esp -= 4; W32(esp, 0x47b2bcu); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
L_47b2bc: /* 47b2bc: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47b2bf: mov ecx, esi */
  ecx = esi;
/* 47b2c1: call 0x46e77f */
  esp -= 4; W32(esp, 0x47b2c6u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47b2c6: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47b2c8: je 0x47b288 */
  if (zf) goto L_47b288;
L_47b2ca: /* 47b2ca: cmp byte ptr [ebp - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47b2ce: je 0x47b3f8 */
  if (zf) goto L_47b3f8;
L_47b2d4: /* 47b2d4: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47b2d7: mov ecx, esi */
  ecx = esi;
/* 47b2d9: call 0x46e77f */
  esp -= 4; W32(esp, 0x47b2deu); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47b2de: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47b2e0: jne 0x47b3f2 */
  if (!zf) goto L_47b3f2;
L_47b2e6: /* 47b2e6: push 0x65 */
  { uint32_t v = 0x65u; esp -= 4; W32(esp, v); }
/* 47b2e8: call 0x461d6f */
  esp -= 4; W32(esp, 0x47b2edu); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47b2ed: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47b2ee: mov ecx, esi */
  ecx = esi;
/* 47b2f0: mov ebx, eax */
  ebx = eax;
/* 47b2f2: call 0x472198 */
  esp -= 4; W32(esp, 0x47b2f7u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47b2f7: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47b2fa: je 0x47b316 */
  if (zf) goto L_47b316;
L_47b2fc: /* 47b2fc: push 0x45 */
  { uint32_t v = 0x45u; esp -= 4; W32(esp, v); }
/* 47b2fe: call 0x461d6f */
  esp -= 4; W32(esp, 0x47b303u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47b303: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47b304: mov ecx, esi */
  ecx = esi;
/* 47b306: mov ebx, eax */
  ebx = eax;
/* 47b308: call 0x472198 */
  esp -= 4; W32(esp, 0x47b30du); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47b30d: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47b310: jne 0x47b3f2 */
  if (!zf) goto L_47b3f2;
L_47b316: /* 47b316: mov byte ptr [edi], 0x65 */
  W8((uint32_t)(edi), 0x65u);
/* 47b319: mov ecx, esi */
  ecx = esi;
/* 47b31b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47b31c: call 0x46c756 */
  esp -= 4; W32(esp, 0x47b321u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 47b321: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47b324: and byte ptr [ebp - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffffu), r);
  }
/* 47b328: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* 47b32c: mov ecx, esi */
  ecx = esi;
/* 47b32e: call 0x46e77f */
  esp -= 4; W32(esp, 0x47b333u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47b333: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47b335: jne 0x47b373 */
  if (!zf) goto L_47b373;
L_47b337: /* 47b337: push 0x2b */
  { uint32_t v = 0x2bu; esp -= 4; W32(esp, v); }
/* 47b339: call 0x461d6f */
  esp -= 4; W32(esp, 0x47b33eu); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47b33e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47b33f: mov ecx, esi */
  ecx = esi;
/* 47b341: mov ebx, eax */
  ebx = eax;
/* 47b343: call 0x472198 */
  esp -= 4; W32(esp, 0x47b348u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47b348: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47b34b: jne 0x47b352 */
  if (!zf) goto L_47b352;
L_47b34d: /* 47b34d: mov byte ptr [edi], 0x2b */
  W8((uint32_t)(edi), 0x2bu);
/* 47b350: jmp 0x47b36b */
  goto L_47b36b;
L_47b352: /* 47b352: push 0x2d */
  { uint32_t v = 0x2du; esp -= 4; W32(esp, v); }
/* 47b354: call 0x461d6f */
  esp -= 4; W32(esp, 0x47b359u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47b359: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47b35a: mov ecx, esi */
  ecx = esi;
/* 47b35c: mov ebx, eax */
  ebx = eax;
/* 47b35e: call 0x472198 */
  esp -= 4; W32(esp, 0x47b363u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47b363: cmp ax, bx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ebx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47b366: jne 0x47b373 */
  if (!zf) goto L_47b373;
L_47b368: /* 47b368: mov byte ptr [edi], 0x2d */
  W8((uint32_t)(edi), 0x2du);
L_47b36b: /* 47b36b: mov ecx, esi */
  ecx = esi;
/* 47b36d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47b36e: call 0x46c756 */
  esp -= 4; W32(esp, 0x47b373u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
L_47b373: /* 47b373: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 47b376: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47b377: mov ecx, esi */
  ecx = esi;
/* 47b379: call 0x46e77f */
  esp -= 4; W32(esp, 0x47b37eu); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47b37e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47b380: jne 0x47b3e6 */
  if (!zf) goto L_47b3e6;
L_47b382: /* 47b382: mov ecx, esi */
  ecx = esi;
/* 47b384: call 0x472198 */
  esp -= 4; W32(esp, 0x47b389u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47b389: cmp ax, word ptr [ebp - 0x10] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebp + 0xfffffff0u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47b38d: jne 0x47b3a6 */
  if (!zf) goto L_47b3a6;
L_47b38f: /* 47b38f: mov ecx, esi */
  ecx = esi;
/* 47b391: mov byte ptr [ebp - 1], 1 */
  W8((uint32_t)(ebp + 0xffffffffu), 0x1u);
/* 47b395: call 0x46c756 */
  esp -= 4; W32(esp, 0x47b39au); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 47b39a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47b39b: mov ecx, esi */
  ecx = esi;
/* 47b39d: call 0x46e77f */
  esp -= 4; W32(esp, 0x47b3a2u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47b3a2: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47b3a4: je 0x47b382 */
  if (zf) goto L_47b382;
L_47b3a6: /* 47b3a6: cmp byte ptr [ebp - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47b3aa: je 0x47b3e6 */
  if (zf) goto L_47b3e6;
L_47b3ac: /* 47b3ac: mov byte ptr [edi], 0x30 */
  W8((uint32_t)(edi), 0x30u);
/* 47b3af: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47b3b0: jmp 0x47b3e6 */
  goto L_47b3e6;
L_47b3b2: /* 47b3b2: mov ecx, esi */
  ecx = esi;
/* 47b3b4: call 0x472198 */
  esp -= 4; W32(esp, 0x47b3b9u); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47b3b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b3ba: call 0x488a88 */
  esp -= 4; W32(esp, 0x47b3bfu); SPILL(); f_488a88(); if (g_unwind) return; RELOAD();
/* 47b3bf: mov byte ptr [edi], al */
  W8((uint32_t)(edi), (eax & 0xffu));
/* 47b3c1: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 47b3c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b3c5: call dword ptr [0x48e0b8] */
  esp -= 4; W32(esp, 0x47b3cbu); SPILL(); f_40152b(); if (g_unwind) return; /* MSVCR70!isdigit */ RELOAD();
/* 47b3cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47b3cd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47b3ce: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47b3cf: je 0x47b3f2 */
  if (zf) goto L_47b3f2;
L_47b3d1: /* 47b3d1: cmp dword ptr [ebp - 8], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47b3d5: jge 0x47b3db */
  if ((sf == of)) goto L_47b3db;
L_47b3d7: /* 47b3d7: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47b3d8: inc dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
L_47b3db: /* 47b3db: mov ecx, esi */
  ecx = esi;
/* 47b3dd: mov byte ptr [ebp - 1], 1 */
  W8((uint32_t)(ebp + 0xffffffffu), 0x1u);
/* 47b3e1: call 0x46c756 */
  esp -= 4; W32(esp, 0x47b3e6u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
L_47b3e6: /* 47b3e6: mov ecx, esi */
  ecx = esi;
/* 47b3e8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47b3e9: call 0x46e77f */
  esp -= 4; W32(esp, 0x47b3eeu); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47b3ee: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47b3f0: je 0x47b3b2 */
  if (zf) goto L_47b3b2;
L_47b3f2: /* 47b3f2: cmp byte ptr [ebp - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47b3f6: jne 0x47b3fb */
  if (!zf) goto L_47b3fb;
L_47b3f8: /* 47b3f8: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_47b3fb: /* 47b3fb: and byte ptr [edi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(edi), r);
  }
/* 47b3fe: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47b401: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47b402: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47b403: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47b404: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47b405: ret  */
  esp += 4; SPILL(); return;
}

void f_47b406(void) {
  LOAD_REGS();
L_47b406: /* 47b406: mov eax, 0x48d0eb */
  eax = 0x48d0ebu;
/* 47b40b: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47b410u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47b410: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47b413: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 47b416: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 47b419: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 47b41c: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47b41e: add eax, dword ptr [ebp + 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47b421: mov ecx, dword ptr [edx + 0x14] */
  ecx = R32((uint32_t)(edx + 0x14u));
/* 47b424: add eax, dword ptr [ebp + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47b427: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47b428: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47b429: xor esi, esi */
  esi = 0;
/* 47b42b: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47b42d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47b42e: jle 0x47b43b */
  if ((zf || sf != of)) goto L_47b43b;
L_47b430: /* 47b430: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 47b432: jbe 0x47b43b */
  if ((cf | zf)) goto L_47b43b;
L_47b434: /* 47b434: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 47b436: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 47b439: jmp 0x47b43e */
  goto L_47b43e;
L_47b43b: /* 47b43b: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
L_47b43e: /* 47b43e: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 47b441: and eax, 0x1c0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1c0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 47b446: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47b449: je 0x47b4ae */
  if (zf) goto L_47b4ae;
L_47b44b: /* 47b44b: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47b450: jne 0x47b48c */
  if (!zf) goto L_47b48c;
L_47b452: /* 47b452: cmp dword ptr [ebp + 0x2c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x2cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 47b455: jbe 0x47b48c */
  if ((cf | zf)) goto L_47b48c;
L_47b457: /* 47b457: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 47b45a: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 47b45c: cmp al, 0x2b */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47b45e: je 0x47b464 */
  if (zf) goto L_47b464;
L_47b460: /* 47b460: cmp al, 0x2d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47b462: jne 0x47b48c */
  if (!zf) goto L_47b48c;
L_47b464: /* 47b464: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47b466: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47b469: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47b46c: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47b46f: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47b472: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b473: call 0x46f2aa */
  esp -= 4; W32(esp, 0x47b478u); SPILL(); f_46f2aa(); if (g_unwind) return; RELOAD();
/* 47b478: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47b47a: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47b47d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47b480: inc dword ptr [ebp + 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x1cu), r);
  }
/* 47b483: dec dword ptr [ebp + 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x2cu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0x2cu), r);
  }
/* 47b486: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 47b489: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_47b48c: /* 47b48c: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 47b48f: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47b492: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47b495: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47b498: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47b49b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b49c: call 0x472063 */
  esp -= 4; W32(esp, 0x47b4a1u); SPILL(); f_472063(); if (g_unwind) return; RELOAD();
/* 47b4a1: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 47b4a3: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 47b4a6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47b4a9: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 47b4ac: jmp 0x47b4b4 */
  goto L_47b4b4;
L_47b4ae: /* 47b4ae: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 47b4b1: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_47b4b4: /* 47b4b4: call dword ptr [0x48e18c] */
  esp -= 4; W32(esp, 0x47b4bau); SPILL(); f_412cf8(); if (g_unwind) return; /* MSVCR70!localeconv */ RELOAD();
/* 47b4ba: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 47b4bc: movsx eax, byte ptr [eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 47b4bf: push dword ptr [ebp + 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x2cu)); esp -= 4; W32(esp, v); }
/* 47b4c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b4c3: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47b4c6: call dword ptr [0x48e198] */
  esp -= 4; W32(esp, 0x47b4ccu); SPILL(); f_407d4d(); if (g_unwind) return; /* MSVCR70!memchr */ RELOAD();
/* 47b4cc: mov esi, eax */
  esi = eax;
/* 47b4ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47b4d1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47b4d3: je 0x47b567 */
  if (zf) goto L_47b567;
L_47b4d9: /* 47b4d9: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 47b4dc: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47b4df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b4e0: call 0x464a5a */
  esp -= 4; W32(esp, 0x47b4e5u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47b4e5: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47b4e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b4ea: call 0x4797fd */
  esp -= 4; W32(esp, 0x47b4efu); SPILL(); f_4797fd(); if (g_unwind) return; RELOAD();
/* 47b4ef: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47b4f3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47b4f4: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 47b4f7: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 47b4fa: call 0x461389 */
  esp -= 4; W32(esp, 0x47b4ffu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47b4ff: sub esi, dword ptr [ebp + 0x1c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 47b502: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 47b503: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
/* 47b506: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b507: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47b50a: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 47b50d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47b50e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47b50f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b510: call 0x46f2aa */
  esp -= 4; W32(esp, 0x47b515u); SPILL(); f_46f2aa(); if (g_unwind) return; RELOAD();
/* 47b515: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 47b518: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 47b51a: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 47b51d: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 47b51f: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 47b522: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b523: call 0x472063 */
  esp -= 4; W32(esp, 0x47b528u); SPILL(); f_472063(); if (g_unwind) return; RELOAD();
/* 47b528: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47b52b: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 47b52d: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 47b530: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 47b532: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47b535: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47b537: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x47b53au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47b53a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b53b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47b53c: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 47b53f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47b540: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b541: call 0x472063 */
  esp -= 4; W32(esp, 0x47b546u); SPILL(); f_472063(); if (g_unwind) return; RELOAD();
/* 47b546: push dword ptr [ebp + 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0x24u)); esp -= 4; W32(esp, v); }
/* 47b549: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 47b54b: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 47b54e: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 47b550: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 47b553: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b554: call 0x472063 */
  esp -= 4; W32(esp, 0x47b559u); SPILL(); f_472063(); if (g_unwind) return; RELOAD();
/* 47b559: add dword ptr [ebp + 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x1cu), r);
  }
/* 47b55c: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 47b55e: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 47b561: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47b564: sub dword ptr [ebp + 0x2c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x2cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x2cu), r);
  }
L_47b567: /* 47b567: push dword ptr [ebp + 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x2cu)); esp -= 4; W32(esp, v); }
/* 47b56a: push 0x65 */
  { uint32_t v = 0x65u; esp -= 4; W32(esp, v); }
/* 47b56c: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47b56f: call dword ptr [0x48e198] */
  esp -= 4; W32(esp, 0x47b575u); SPILL(); f_407d4d(); if (g_unwind) return; /* MSVCR70!memchr */ RELOAD();
/* 47b575: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47b578: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47b57a: je 0x47b5e0 */
  if (zf) goto L_47b5e0;
L_47b57c: /* 47b57c: sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 47b57f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 47b580: mov esi, eax */
  esi = eax;
/* 47b582: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
/* 47b585: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b586: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47b589: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 47b58c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47b58d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47b58e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b58f: call 0x46f2aa */
  esp -= 4; W32(esp, 0x47b594u); SPILL(); f_46f2aa(); if (g_unwind) return; RELOAD();
/* 47b594: push dword ptr [ebp + 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0x28u)); esp -= 4; W32(esp, v); }
/* 47b597: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 47b599: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 47b59c: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 47b59e: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 47b5a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b5a2: call 0x472063 */
  esp -= 4; W32(esp, 0x47b5a7u); SPILL(); f_472063(); if (g_unwind) return; RELOAD();
/* 47b5a7: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 47b5aa: and dword ptr [ebp + 0x28], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x28u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x28u), r);
  }
/* 47b5ae: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47b5b1: test byte ptr [ecx + 0xc], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0xcu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47b5b5: mov ecx, 0x4c8ec8 */
  ecx = 0x4c8ec8u;
/* 47b5ba: jne 0x47b5c1 */
  if (!zf) goto L_47b5c1;
L_47b5bc: /* 47b5bc: mov ecx, 0x4c8ec4 */
  ecx = 0x4c8ec4u;
L_47b5c1: /* 47b5c1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47b5c3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47b5c4: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 47b5c7: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 47b5c9: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 47b5cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b5cd: call 0x46f2aa */
  esp -= 4; W32(esp, 0x47b5d2u); SPILL(); f_46f2aa(); if (g_unwind) return; RELOAD();
/* 47b5d2: add dword ptr [ebp + 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x1cu), r);
  }
/* 47b5d5: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 47b5d7: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 47b5da: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47b5dd: sub dword ptr [ebp + 0x2c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x2cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x2cu), r);
  }
L_47b5e0: /* 47b5e0: push dword ptr [ebp + 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x2cu)); esp -= 4; W32(esp, v); }
/* 47b5e3: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 47b5e6: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47b5e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47b5ea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47b5eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b5ec: call 0x46f2aa */
  esp -= 4; W32(esp, 0x47b5f1u); SPILL(); f_46f2aa(); if (g_unwind) return; RELOAD();
/* 47b5f1: push dword ptr [ebp + 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0x28u)); esp -= 4; W32(esp, v); }
/* 47b5f4: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 47b5f6: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 47b5f9: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 47b5fb: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 47b5fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b5ff: call 0x472063 */
  esp -= 4; W32(esp, 0x47b604u); SPILL(); f_472063(); if (g_unwind) return; RELOAD();
/* 47b604: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 47b607: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47b609: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47b60c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47b60f: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 47b612: and dword ptr [edx + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(edx + 0x14u), r);
  }
/* 47b616: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b617: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47b618: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47b61b: call 0x472063 */
  esp -= 4; W32(esp, 0x47b620u); SPILL(); f_472063(); if (g_unwind) return; RELOAD();
/* 47b620: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47b623: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47b626: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47b629: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47b62a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47b62b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47b62c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47b633: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47b634: ret  */
  esp += 4; SPILL(); return;
}

void f_47b635(void) {
  LOAD_REGS();
L_47b635: /* 47b635: mov eax, 0x48d117 */
  eax = 0x48d117u;
/* 47b63a: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47b63fu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47b63f: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47b642: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47b647: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47b64a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47b64b: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 47b64e: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47b651: mov al, byte ptr [ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 47b653: cmp al, 0x2b */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47b655: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47b656: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47b657: je 0x47b67b */
  if (zf) goto L_47b67b;
L_47b659: /* 47b659: cmp al, 0x2d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47b65b: je 0x47b67b */
  if (zf) goto L_47b67b;
L_47b65d: /* 47b65d: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47b65f: jne 0x47b675 */
  if (!zf) goto L_47b675;
L_47b661: /* 47b661: mov al, byte ptr [ebx + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x1u))) & 0xffu);
/* 47b664: cmp al, 0x78 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x78u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47b666: je 0x47b66c */
  if (zf) goto L_47b66c;
L_47b668: /* 47b668: cmp al, 0x58 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x58u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47b66a: jne 0x47b675 */
  if (!zf) goto L_47b675;
L_47b66c: /* 47b66c: mov dword ptr [ebp - 0x18], 2 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x2u);
/* 47b673: jmp 0x47b682 */
  goto L_47b682;
L_47b675: /* 47b675: and dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 47b679: jmp 0x47b682 */
  goto L_47b682;
L_47b67b: /* 47b67b: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
L_47b682: /* 47b682: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 47b685: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47b688: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b689: mov ecx, edi */
  ecx = edi;
/* 47b68b: call 0x464a5a */
  esp -= 4; W32(esp, 0x47b690u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47b690: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47b694: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b695: call 0x4797fd */
  esp -= 4; W32(esp, 0x47b69au); SPILL(); f_4797fd(); if (g_unwind) return; RELOAD();
/* 47b69a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47b69e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47b69f: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47b6a2: mov esi, eax */
  esi = eax;
/* 47b6a4: call 0x461389 */
  esp -= 4; W32(esp, 0x47b6a9u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47b6a9: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 47b6ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b6ad: mov ecx, esi */
  ecx = esi;
/* 47b6af: call 0x471e93 */
  esp -= 4; W32(esp, 0x47b6b4u); SPILL(); f_471e93(); if (g_unwind) return; RELOAD();
/* 47b6b4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47b6b6: mov ecx, esi */
  ecx = esi;
/* 47b6b8: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 47b6bf: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x47b6c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47b6c2: cmp dword ptr [ebp - 0x30], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47b6c6: mov byte ptr [ebp - 0x20], al */
  W8((uint32_t)(ebp + 0xffffffe0u), (eax & 0xffu));
/* 47b6c9: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 47b6cc: jae 0x47b6d1 */
  if (!cf) goto L_47b6d1;
L_47b6ce: /* 47b6ce: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
L_47b6d1: /* 47b6d1: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 47b6d4: setg byte ptr [ebp + 0x1f] */
  W8((uint32_t)(ebp + 0x1fu), ((!zf && sf == of)) ? 1 : 0);
/* 47b6d8: cmp byte ptr [ebp + 0x1f], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x1fu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47b6dc: je 0x47b741 */
  if (zf) goto L_47b741;
L_47b6de: /* 47b6de: cmp dword ptr [ebp - 0x30], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47b6e2: mov edi, dword ptr [ebp - 0x44] */
  edi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 47b6e5: jae 0x47b6ea */
  if (!cf) goto L_47b6ea;
L_47b6e7: /* 47b6e7: lea edi, [ebp - 0x44] */
  edi = (uint32_t)(ebp + 0xffffffbcu);
L_47b6ea: /* 47b6ea: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 47b6ed: and byte ptr [ebp + 0x1f], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x1fu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0x1fu), r);
  }
/* 47b6f1: jmp 0x47b738 */
  goto L_47b738;
L_47b6f3: /* 47b6f3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = 0;
  }
/* 47b6f5: jle 0x47b73e */
  if ((zf || sf != of)) goto L_47b73e;
L_47b6f7: /* 47b6f7: mov ecx, esi */
  ecx = esi;
/* 47b6f9: sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 47b6fc: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 47b6ff: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47b701: jae 0x47b73e */
  if (!cf) goto L_47b73e;
L_47b703: /* 47b703: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 47b706: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 47b708: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 47b70a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 47b70b: lea eax, [esi + ebx] */
  eax = (uint32_t)(esi + ebx);
/* 47b70e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47b70f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b710: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 47b713: lea eax, [esi + ebx + 1] */
  eax = (uint32_t)(esi + ebx + 0x1u);
/* 47b717: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b718: call dword ptr [0x48e1a8] */
  esp -= 4; W32(esp, 0x47b71eu); SPILL(); hle_memcpy(); if (g_unwind) return; /* MSVCR70!memmove */ RELOAD();
/* 47b71e: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 47b721: mov byte ptr [eax], 0x2c */
  W8((uint32_t)(eax), 0x2cu);
/* 47b724: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47b727: inc dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x20u), r);
  }
/* 47b72a: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 47b72d: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 47b730: jle 0x47b734 */
  if ((zf || sf != of)) goto L_47b734;
L_47b732: /* 47b732: mov edi, eax */
  edi = eax;
L_47b734: /* 47b734: mov byte ptr [ebp + 0x1f], 1 */
  W8((uint32_t)(ebp + 0x1fu), 0x1u);
L_47b738: /* 47b738: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 47b73a: cmp al, 0x7f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47b73c: jne 0x47b6f3 */
  if (!zf) goto L_47b6f3;
L_47b73e: /* 47b73e: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
L_47b741: /* 47b741: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 47b744: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 47b746: jle 0x47b755 */
  if ((zf || sf != of)) goto L_47b755;
L_47b748: /* 47b748: cmp eax, dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 47b74b: jbe 0x47b755 */
  if ((cf | zf)) goto L_47b755;
L_47b74d: /* 47b74d: sub eax, dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 47b750: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 47b753: jmp 0x47b759 */
  goto L_47b759;
L_47b755: /* 47b755: and dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_47b759: /* 47b759: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 47b75c: and eax, 0x1c0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1c0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 47b761: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47b764: je 0x47b7bf */
  if (zf) goto L_47b7bf;
L_47b766: /* 47b766: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47b76b: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47b76e: je 0x47b787 */
  if (zf) goto L_47b787;
L_47b770: /* 47b770: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47b773: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47b776: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47b779: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47b77c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b77d: call 0x472063 */
  esp -= 4; W32(esp, 0x47b782u); SPILL(); f_472063(); if (g_unwind) return; RELOAD();
/* 47b782: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47b785: jmp 0x47b7b4 */
  goto L_47b7b4;
L_47b787: /* 47b787: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47b78a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47b78b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47b78c: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47b78f: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47b792: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b793: call 0x46f2aa */
  esp -= 4; W32(esp, 0x47b798u); SPILL(); f_46f2aa(); if (g_unwind) return; RELOAD();
/* 47b798: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47b79b: sub dword ptr [ebp + 0x20], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x20u), r);
  }
/* 47b79e: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47b7a1: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 47b7a3: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 47b7a6: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 47b7a8: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47b7ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b7ac: call 0x472063 */
  esp -= 4; W32(esp, 0x47b7b1u); SPILL(); f_472063(); if (g_unwind) return; RELOAD();
/* 47b7b1: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_47b7b4: /* 47b7b4: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 47b7b6: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 47b7b9: and dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 47b7bd: jmp 0x47b7c5 */
  goto L_47b7c5;
L_47b7bf: /* 47b7bf: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 47b7c2: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_47b7c5: /* 47b7c5: cmp byte ptr [ebp + 0x1f], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x1fu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47b7c9: jne 0x47b7e4 */
  if (!zf) goto L_47b7e4;
L_47b7cb: /* 47b7cb: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 47b7ce: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 47b7d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47b7d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47b7d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47b7d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b7d5: call 0x46f2aa */
  esp -= 4; W32(esp, 0x47b7dau); SPILL(); f_46f2aa(); if (g_unwind) return; RELOAD();
/* 47b7da: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 47b7dc: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 47b7df: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47b7e2: jmp 0x47b863 */
  goto L_47b863;
L_47b7e4: /* 47b7e4: push 0x4c8ecc */
  { uint32_t v = 0x4c8eccu; esp -= 4; W32(esp, v); }
/* 47b7e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47b7ea: call dword ptr [0x48e0bc] */
  esp -= 4; W32(esp, 0x47b7f0u); SPILL(); f_407848(); if (g_unwind) return; /* MSVCR70!strcspn */ RELOAD();
/* 47b7f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b7f1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47b7f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47b7f3: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 47b7f6: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47b7f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47b7fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b7fb: call 0x46f2aa */
  esp -= 4; W32(esp, 0x47b800u); SPILL(); f_46f2aa(); if (g_unwind) return; RELOAD();
/* 47b800: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 47b802: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 47b805: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 47b808: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47b80b: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 47b80d: sub dword ptr [ebp + 0x20], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0x20u), r);
  }
/* 47b810: je 0x47b863 */
  if (zf) goto L_47b863;
L_47b812: /* 47b812: cmp byte ptr [ebp - 0x20], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe0u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47b816: je 0x47b830 */
  if (zf) goto L_47b830;
L_47b818: /* 47b818: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47b81a: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 47b81d: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 47b820: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47b821: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47b822: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b823: call 0x472063 */
  esp -= 4; W32(esp, 0x47b828u); SPILL(); f_472063(); if (g_unwind) return; RELOAD();
/* 47b828: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 47b82a: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 47b82d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_47b830: /* 47b830: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 47b831: push 0x4c8ecc */
  { uint32_t v = 0x4c8eccu; esp -= 4; W32(esp, v); }
/* 47b836: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47b837: call dword ptr [0x48e0bc] */
  esp -= 4; W32(esp, 0x47b83du); SPILL(); f_407848(); if (g_unwind) return; /* MSVCR70!strcspn */ RELOAD();
/* 47b83d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b83e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47b83f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47b840: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 47b843: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47b846: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47b847: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b848: call 0x46f2aa */
  esp -= 4; W32(esp, 0x47b84du); SPILL(); f_46f2aa(); if (g_unwind) return; RELOAD();
/* 47b84d: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 47b84f: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 47b852: add ebx, dword ptr [ebp + 0x1c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x1cu)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 47b855: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 47b858: sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 47b85b: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47b85e: add dword ptr [ebp + 0x20], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0x20u), r);
  }
/* 47b861: jne 0x47b812 */
  if (!zf) goto L_47b812;
L_47b863: /* 47b863: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47b866: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 47b869: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47b86c: and dword ptr [eax + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x14u), r);
  }
/* 47b870: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47b871: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47b872: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47b875: call 0x472063 */
  esp -= 4; W32(esp, 0x47b87au); SPILL(); f_472063(); if (g_unwind) return; RELOAD();
/* 47b87a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47b87d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47b87f: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 47b882: call 0x461ea8 */
  esp -= 4; W32(esp, 0x47b887u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 47b887: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47b88a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47b88d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47b894: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47b897: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47b89a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47b89b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47b89c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47b89d: call 0x46190c */
  esp -= 4; W32(esp, 0x47b8a2u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47b8a2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47b8a3: ret  */
  esp += 4; SPILL(); return;
}

void f_47b8a4(void) {
  LOAD_REGS();
L_47b8a4: /* 47b8a4: mov eax, 0x48d0fd */
  eax = 0x48d0fdu;
/* 47b8a9: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47b8aeu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47b8ae: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47b8b1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47b8b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47b8b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47b8b4: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 47b8b6: call 0x461d6f */
  esp -= 4; W32(esp, 0x47b8bbu); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47b8bb: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 47b8be: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47b8bf: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 47b8c2: xor esi, esi */
  esi = 0;
/* 47b8c4: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 47b8c7: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 47b8ca: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47b8cc: add eax, dword ptr [ebp + 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47b8cf: mov ecx, dword ptr [edx + 0x14] */
  ecx = R32((uint32_t)(edx + 0x14u));
/* 47b8d2: add eax, dword ptr [ebp + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47b8d5: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47b8d7: jle 0x47b8e4 */
  if ((zf || sf != of)) goto L_47b8e4;
L_47b8d9: /* 47b8d9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 47b8db: jbe 0x47b8e4 */
  if ((cf | zf)) goto L_47b8e4;
L_47b8dd: /* 47b8dd: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 47b8df: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 47b8e2: jmp 0x47b8e7 */
  goto L_47b8e7;
L_47b8e4: /* 47b8e4: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
L_47b8e7: /* 47b8e7: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 47b8ea: and eax, 0x1c0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1c0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 47b8ef: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47b8f2: je 0x47b957 */
  if (zf) goto L_47b957;
L_47b8f4: /* 47b8f4: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47b8f9: jne 0x47b935 */
  if (!zf) goto L_47b935;
L_47b8fb: /* 47b8fb: cmp dword ptr [ebp + 0x2c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x2cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 47b8fe: jbe 0x47b935 */
  if ((cf | zf)) goto L_47b935;
L_47b900: /* 47b900: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 47b903: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 47b905: cmp al, 0x2b */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47b907: je 0x47b90d */
  if (zf) goto L_47b90d;
L_47b909: /* 47b909: cmp al, 0x2d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47b90b: jne 0x47b935 */
  if (!zf) goto L_47b935;
L_47b90d: /* 47b90d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47b90f: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47b912: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 47b915: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47b918: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47b91b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b91c: call 0x46f2dc */
  esp -= 4; W32(esp, 0x47b921u); SPILL(); f_46f2dc(); if (g_unwind) return; RELOAD();
/* 47b921: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47b923: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47b926: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47b929: inc dword ptr [ebp + 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x1cu), r);
  }
/* 47b92c: dec dword ptr [ebp + 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x2cu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0x2cu), r);
  }
/* 47b92f: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 47b932: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_47b935: /* 47b935: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 47b938: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 47b93b: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47b93e: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47b941: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47b944: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b945: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x47b94au); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 47b94a: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 47b94c: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 47b94f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47b952: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 47b955: jmp 0x47b95d */
  goto L_47b95d;
L_47b957: /* 47b957: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 47b95a: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_47b95d: /* 47b95d: call dword ptr [0x48e18c] */
  esp -= 4; W32(esp, 0x47b963u); SPILL(); f_412cf8(); if (g_unwind) return; /* MSVCR70!localeconv */ RELOAD();
/* 47b963: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 47b965: movsx eax, byte ptr [eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 47b968: push dword ptr [ebp + 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x2cu)); esp -= 4; W32(esp, v); }
/* 47b96b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b96c: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47b96f: call dword ptr [0x48e198] */
  esp -= 4; W32(esp, 0x47b975u); SPILL(); f_407d4d(); if (g_unwind) return; /* MSVCR70!memchr */ RELOAD();
/* 47b975: mov esi, eax */
  esi = eax;
/* 47b977: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47b97a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47b97c: je 0x47ba12 */
  if (zf) goto L_47ba12;
L_47b982: /* 47b982: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 47b985: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47b988: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b989: call 0x464a5a */
  esp -= 4; W32(esp, 0x47b98eu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47b98e: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47b992: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b993: call 0x47989f */
  esp -= 4; W32(esp, 0x47b998u); SPILL(); f_47989f(); if (g_unwind) return; RELOAD();
/* 47b998: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47b99c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47b99d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 47b9a0: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 47b9a3: call 0x461389 */
  esp -= 4; W32(esp, 0x47b9a8u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47b9a8: sub esi, dword ptr [ebp + 0x1c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 47b9ab: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 47b9ac: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
/* 47b9af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b9b0: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47b9b3: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 47b9b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47b9b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47b9b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b9b9: call 0x46f2dc */
  esp -= 4; W32(esp, 0x47b9beu); SPILL(); f_46f2dc(); if (g_unwind) return; RELOAD();
/* 47b9be: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 47b9c1: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47b9c4: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 47b9c7: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 47b9c9: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 47b9cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b9cd: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x47b9d2u); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 47b9d2: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 47b9d5: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 47b9d7: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 47b9da: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 47b9dc: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47b9df: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47b9e1: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x47b9e4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47b9e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b9e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47b9e6: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 47b9e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47b9ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b9eb: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x47b9f0u); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 47b9f0: push dword ptr [ebp + 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0x24u)); esp -= 4; W32(esp, v); }
/* 47b9f3: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47b9f6: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 47b9f9: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 47b9fb: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 47b9fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47b9ff: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x47ba04u); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 47ba04: add dword ptr [ebp + 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x1cu), r);
  }
/* 47ba07: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 47ba09: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 47ba0c: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47ba0f: sub dword ptr [ebp + 0x2c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x2cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x2cu), r);
  }
L_47ba12: /* 47ba12: push dword ptr [ebp + 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x2cu)); esp -= 4; W32(esp, v); }
/* 47ba15: push 0x65 */
  { uint32_t v = 0x65u; esp -= 4; W32(esp, v); }
/* 47ba17: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47ba1a: call dword ptr [0x48e198] */
  esp -= 4; W32(esp, 0x47ba20u); SPILL(); f_407d4d(); if (g_unwind) return; /* MSVCR70!memchr */ RELOAD();
/* 47ba20: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47ba23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47ba25: je 0x47ba8c */
  if (zf) goto L_47ba8c;
L_47ba27: /* 47ba27: sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 47ba2a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 47ba2b: mov esi, eax */
  esi = eax;
/* 47ba2d: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
/* 47ba30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ba31: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47ba34: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 47ba37: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47ba38: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47ba39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ba3a: call 0x46f2dc */
  esp -= 4; W32(esp, 0x47ba3fu); SPILL(); f_46f2dc(); if (g_unwind) return; RELOAD();
/* 47ba3f: push dword ptr [ebp + 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0x28u)); esp -= 4; W32(esp, v); }
/* 47ba42: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47ba45: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 47ba48: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 47ba4a: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 47ba4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ba4e: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x47ba53u); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 47ba53: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 47ba56: and dword ptr [ebp + 0x28], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x28u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x28u), r);
  }
/* 47ba5a: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47ba5d: test byte ptr [ecx + 0xc], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0xcu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47ba61: mov ecx, 0x4c8ec8 */
  ecx = 0x4c8ec8u;
/* 47ba66: jne 0x47ba6d */
  if (!zf) goto L_47ba6d;
L_47ba68: /* 47ba68: mov ecx, 0x4c8ec4 */
  ecx = 0x4c8ec4u;
L_47ba6d: /* 47ba6d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47ba6f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47ba70: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 47ba73: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 47ba75: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 47ba78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ba79: call 0x46f2dc */
  esp -= 4; W32(esp, 0x47ba7eu); SPILL(); f_46f2dc(); if (g_unwind) return; RELOAD();
/* 47ba7e: add dword ptr [ebp + 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x1cu), r);
  }
/* 47ba81: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 47ba83: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 47ba86: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47ba89: sub dword ptr [ebp + 0x2c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x2cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x2cu), r);
  }
L_47ba8c: /* 47ba8c: push dword ptr [ebp + 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x2cu)); esp -= 4; W32(esp, v); }
/* 47ba8f: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 47ba92: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47ba95: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47ba96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47ba97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ba98: call 0x46f2dc */
  esp -= 4; W32(esp, 0x47ba9du); SPILL(); f_46f2dc(); if (g_unwind) return; RELOAD();
/* 47ba9d: push dword ptr [ebp + 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0x28u)); esp -= 4; W32(esp, v); }
/* 47baa0: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47baa3: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 47baa6: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 47baa8: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 47baab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47baac: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x47bab1u); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 47bab1: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 47bab4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47bab6: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47bab9: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47babc: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 47babf: and dword ptr [edx + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(edx + 0x14u), r);
  }
/* 47bac3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47bac4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47bac5: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47bac8: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x47bacdu); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 47bacd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47bad0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47bad3: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47bad6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47bad7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47bad8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47bad9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47bae0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47bae1: ret  */
  esp += 4; SPILL(); return;
}

void f_47bae2(void) {
  LOAD_REGS();
L_47bae2: /* 47bae2: mov eax, 0x48d117 */
  eax = 0x48d117u;
/* 47bae7: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47baecu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47baec: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47baef: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47baf4: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47baf7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47baf8: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 47bafb: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47bafe: mov al, byte ptr [ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 47bb00: cmp al, 0x2b */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47bb02: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47bb03: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47bb04: je 0x47bb28 */
  if (zf) goto L_47bb28;
L_47bb06: /* 47bb06: cmp al, 0x2d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47bb08: je 0x47bb28 */
  if (zf) goto L_47bb28;
L_47bb0a: /* 47bb0a: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47bb0c: jne 0x47bb22 */
  if (!zf) goto L_47bb22;
L_47bb0e: /* 47bb0e: mov al, byte ptr [ebx + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x1u))) & 0xffu);
/* 47bb11: cmp al, 0x78 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x78u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47bb13: je 0x47bb19 */
  if (zf) goto L_47bb19;
L_47bb15: /* 47bb15: cmp al, 0x58 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x58u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47bb17: jne 0x47bb22 */
  if (!zf) goto L_47bb22;
L_47bb19: /* 47bb19: mov dword ptr [ebp - 0x18], 2 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x2u);
/* 47bb20: jmp 0x47bb2f */
  goto L_47bb2f;
L_47bb22: /* 47bb22: and dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 47bb26: jmp 0x47bb2f */
  goto L_47bb2f;
L_47bb28: /* 47bb28: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
L_47bb2f: /* 47bb2f: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 47bb32: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47bb35: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47bb36: mov ecx, edi */
  ecx = edi;
/* 47bb38: call 0x464a5a */
  esp -= 4; W32(esp, 0x47bb3du); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47bb3d: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47bb41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47bb42: call 0x47989f */
  esp -= 4; W32(esp, 0x47bb47u); SPILL(); f_47989f(); if (g_unwind) return; RELOAD();
/* 47bb47: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47bb4b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47bb4c: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47bb4f: mov esi, eax */
  esi = eax;
/* 47bb51: call 0x461389 */
  esp -= 4; W32(esp, 0x47bb56u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47bb56: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 47bb59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47bb5a: mov ecx, esi */
  ecx = esi;
/* 47bb5c: call 0x471e93 */
  esp -= 4; W32(esp, 0x47bb61u); SPILL(); f_471e93(); if (g_unwind) return; RELOAD();
/* 47bb61: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47bb63: mov ecx, esi */
  ecx = esi;
/* 47bb65: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 47bb6c: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x47bb6fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47bb6f: cmp dword ptr [ebp - 0x30], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47bb73: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 47bb76: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 47bb79: jae 0x47bb7e */
  if (!cf) goto L_47bb7e;
L_47bb7b: /* 47bb7b: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
L_47bb7e: /* 47bb7e: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 47bb81: setg byte ptr [ebp + 0x1f] */
  W8((uint32_t)(ebp + 0x1fu), ((!zf && sf == of)) ? 1 : 0);
/* 47bb85: cmp byte ptr [ebp + 0x1f], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x1fu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47bb89: je 0x47bbee */
  if (zf) goto L_47bbee;
L_47bb8b: /* 47bb8b: cmp dword ptr [ebp - 0x30], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47bb8f: mov edi, dword ptr [ebp - 0x44] */
  edi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 47bb92: jae 0x47bb97 */
  if (!cf) goto L_47bb97;
L_47bb94: /* 47bb94: lea edi, [ebp - 0x44] */
  edi = (uint32_t)(ebp + 0xffffffbcu);
L_47bb97: /* 47bb97: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 47bb9a: and byte ptr [ebp + 0x1f], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x1fu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0x1fu), r);
  }
/* 47bb9e: jmp 0x47bbe5 */
  goto L_47bbe5;
L_47bba0: /* 47bba0: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = 0;
  }
/* 47bba2: jle 0x47bbeb */
  if ((zf || sf != of)) goto L_47bbeb;
L_47bba4: /* 47bba4: mov ecx, esi */
  ecx = esi;
/* 47bba6: sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 47bba9: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 47bbac: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47bbae: jae 0x47bbeb */
  if (!cf) goto L_47bbeb;
L_47bbb0: /* 47bbb0: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 47bbb3: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 47bbb5: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 47bbb7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 47bbb8: lea eax, [esi + ebx] */
  eax = (uint32_t)(esi + ebx);
/* 47bbbb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47bbbc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47bbbd: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 47bbc0: lea eax, [esi + ebx + 1] */
  eax = (uint32_t)(esi + ebx + 0x1u);
/* 47bbc4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47bbc5: call dword ptr [0x48e1a8] */
  esp -= 4; W32(esp, 0x47bbcbu); SPILL(); hle_memcpy(); if (g_unwind) return; /* MSVCR70!memmove */ RELOAD();
/* 47bbcb: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 47bbce: mov byte ptr [eax], 0x2c */
  W8((uint32_t)(eax), 0x2cu);
/* 47bbd1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47bbd4: inc dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x20u), r);
  }
/* 47bbd7: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 47bbda: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 47bbdd: jle 0x47bbe1 */
  if ((zf || sf != of)) goto L_47bbe1;
L_47bbdf: /* 47bbdf: mov edi, eax */
  edi = eax;
L_47bbe1: /* 47bbe1: mov byte ptr [ebp + 0x1f], 1 */
  W8((uint32_t)(ebp + 0x1fu), 0x1u);
L_47bbe5: /* 47bbe5: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 47bbe7: cmp al, 0x7f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47bbe9: jne 0x47bba0 */
  if (!zf) goto L_47bba0;
L_47bbeb: /* 47bbeb: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
L_47bbee: /* 47bbee: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 47bbf1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 47bbf3: jle 0x47bc02 */
  if ((zf || sf != of)) goto L_47bc02;
L_47bbf5: /* 47bbf5: cmp eax, dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 47bbf8: jbe 0x47bc02 */
  if ((cf | zf)) goto L_47bc02;
L_47bbfa: /* 47bbfa: sub eax, dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 47bbfd: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 47bc00: jmp 0x47bc06 */
  goto L_47bc06;
L_47bc02: /* 47bc02: and dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_47bc06: /* 47bc06: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 47bc09: and eax, 0x1c0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1c0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 47bc0e: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47bc11: je 0x47bc6c */
  if (zf) goto L_47bc6c;
L_47bc13: /* 47bc13: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47bc18: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47bc1b: je 0x47bc34 */
  if (zf) goto L_47bc34;
L_47bc1d: /* 47bc1d: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47bc20: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47bc23: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47bc26: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47bc29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47bc2a: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x47bc2fu); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 47bc2f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47bc32: jmp 0x47bc61 */
  goto L_47bc61;
L_47bc34: /* 47bc34: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47bc37: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47bc38: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47bc39: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47bc3c: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47bc3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47bc40: call 0x46f2dc */
  esp -= 4; W32(esp, 0x47bc45u); SPILL(); f_46f2dc(); if (g_unwind) return; RELOAD();
/* 47bc45: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47bc48: sub dword ptr [ebp + 0x20], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x20u), r);
  }
/* 47bc4b: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47bc4e: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 47bc50: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 47bc53: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 47bc55: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47bc58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47bc59: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x47bc5eu); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 47bc5e: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_47bc61: /* 47bc61: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 47bc63: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 47bc66: and dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 47bc6a: jmp 0x47bc72 */
  goto L_47bc72;
L_47bc6c: /* 47bc6c: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 47bc6f: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_47bc72: /* 47bc72: cmp byte ptr [ebp + 0x1f], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x1fu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47bc76: jne 0x47bc94 */
  if (!zf) goto L_47bc94;
L_47bc78: /* 47bc78: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 47bc7b: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 47bc7e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47bc7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47bc80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47bc81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47bc82: call 0x46f2dc */
  esp -= 4; W32(esp, 0x47bc87u); SPILL(); f_46f2dc(); if (g_unwind) return; RELOAD();
/* 47bc87: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 47bc89: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 47bc8c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47bc8f: jmp 0x47bd14 */
  goto L_47bd14;
L_47bc94: /* 47bc94: push 0x4c8ecc */
  { uint32_t v = 0x4c8eccu; esp -= 4; W32(esp, v); }
/* 47bc99: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47bc9a: call dword ptr [0x48e0bc] */
  esp -= 4; W32(esp, 0x47bca0u); SPILL(); f_407848(); if (g_unwind) return; /* MSVCR70!strcspn */ RELOAD();
/* 47bca0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47bca1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47bca2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47bca3: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 47bca6: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47bca9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47bcaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47bcab: call 0x46f2dc */
  esp -= 4; W32(esp, 0x47bcb0u); SPILL(); f_46f2dc(); if (g_unwind) return; RELOAD();
/* 47bcb0: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 47bcb2: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 47bcb5: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 47bcb8: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47bcbb: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 47bcbd: sub dword ptr [ebp + 0x20], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0x20u), r);
  }
/* 47bcc0: je 0x47bd14 */
  if (zf) goto L_47bd14;
L_47bcc2: /* 47bcc2: cmp word ptr [ebp - 0x20], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffe0u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47bcc7: je 0x47bce1 */
  if (zf) goto L_47bce1;
L_47bcc9: /* 47bcc9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47bccb: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 47bcce: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 47bcd1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47bcd2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47bcd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47bcd4: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x47bcd9u); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 47bcd9: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 47bcdb: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 47bcde: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_47bce1: /* 47bce1: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 47bce2: push 0x4c8ecc */
  { uint32_t v = 0x4c8eccu; esp -= 4; W32(esp, v); }
/* 47bce7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47bce8: call dword ptr [0x48e0bc] */
  esp -= 4; W32(esp, 0x47bceeu); SPILL(); f_407848(); if (g_unwind) return; /* MSVCR70!strcspn */ RELOAD();
/* 47bcee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47bcef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47bcf0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47bcf1: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 47bcf4: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47bcf7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47bcf8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47bcf9: call 0x46f2dc */
  esp -= 4; W32(esp, 0x47bcfeu); SPILL(); f_46f2dc(); if (g_unwind) return; RELOAD();
/* 47bcfe: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 47bd00: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 47bd03: add ebx, dword ptr [ebp + 0x1c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x1cu)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 47bd06: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 47bd09: sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 47bd0c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47bd0f: add dword ptr [ebp + 0x20], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0x20u), r);
  }
/* 47bd12: jne 0x47bcc2 */
  if (!zf) goto L_47bcc2;
L_47bd14: /* 47bd14: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47bd17: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 47bd1a: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47bd1d: and dword ptr [eax + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x14u), r);
  }
/* 47bd21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47bd22: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47bd23: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47bd26: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x47bd2bu); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 47bd2b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47bd2e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47bd30: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 47bd33: call 0x461ea8 */
  esp -= 4; W32(esp, 0x47bd38u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 47bd38: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47bd3b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47bd3e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47bd45: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47bd48: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47bd4b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47bd4c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47bd4d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47bd4e: call 0x46190c */
  esp -= 4; W32(esp, 0x47bd53u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47bd53: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47bd54: ret  */
  esp += 4; SPILL(); return;
}

void f_47bd55(void) {
  LOAD_REGS();
L_47bd55: /* 47bd55: mov eax, 0x48d0fd */
  eax = 0x48d0fdu;
/* 47bd5a: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47bd5fu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47bd5f: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47bd62: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47bd63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47bd64: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47bd65: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 47bd67: call 0x461d6f */
  esp -= 4; W32(esp, 0x47bd6cu); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47bd6c: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 47bd6f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47bd70: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 47bd73: xor esi, esi */
  esi = 0;
/* 47bd75: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 47bd78: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 47bd7b: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47bd7d: add eax, dword ptr [ebp + 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x28u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47bd80: mov ecx, dword ptr [edx + 0x14] */
  ecx = R32((uint32_t)(edx + 0x14u));
/* 47bd83: add eax, dword ptr [ebp + 0x2c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x2cu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 47bd86: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47bd88: jle 0x47bd95 */
  if ((zf || sf != of)) goto L_47bd95;
L_47bd8a: /* 47bd8a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 47bd8c: jbe 0x47bd95 */
  if ((cf | zf)) goto L_47bd95;
L_47bd8e: /* 47bd8e: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 47bd90: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 47bd93: jmp 0x47bd98 */
  goto L_47bd98;
L_47bd95: /* 47bd95: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
L_47bd98: /* 47bd98: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 47bd9b: and eax, 0x1c0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1c0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 47bda0: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47bda3: je 0x47be08 */
  if (zf) goto L_47be08;
L_47bda5: /* 47bda5: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47bdaa: jne 0x47bde6 */
  if (!zf) goto L_47bde6;
L_47bdac: /* 47bdac: cmp dword ptr [ebp + 0x2c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x2cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 47bdaf: jbe 0x47bde6 */
  if ((cf | zf)) goto L_47bde6;
L_47bdb1: /* 47bdb1: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 47bdb4: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* 47bdb6: cmp al, 0x2b */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47bdb8: je 0x47bdbe */
  if (zf) goto L_47bdbe;
L_47bdba: /* 47bdba: cmp al, 0x2d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47bdbc: jne 0x47bde6 */
  if (!zf) goto L_47bde6;
L_47bdbe: /* 47bdbe: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47bdc0: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47bdc3: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 47bdc6: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47bdc9: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47bdcc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47bdcd: call 0x46f2dc */
  esp -= 4; W32(esp, 0x47bdd2u); SPILL(); f_46f2dc(); if (g_unwind) return; RELOAD();
/* 47bdd2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47bdd4: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47bdd7: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47bdda: inc dword ptr [ebp + 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x1cu), r);
  }
/* 47bddd: dec dword ptr [ebp + 0x2c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x2cu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0x2cu), r);
  }
/* 47bde0: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 47bde3: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_47bde6: /* 47bde6: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 47bde9: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 47bdec: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47bdef: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47bdf2: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47bdf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47bdf6: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x47bdfbu); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 47bdfb: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 47bdfd: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 47be00: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47be03: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 47be06: jmp 0x47be0e */
  goto L_47be0e;
L_47be08: /* 47be08: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 47be0b: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_47be0e: /* 47be0e: call dword ptr [0x48e18c] */
  esp -= 4; W32(esp, 0x47be14u); SPILL(); f_412cf8(); if (g_unwind) return; /* MSVCR70!localeconv */ RELOAD();
/* 47be14: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 47be16: movsx eax, byte ptr [eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* 47be19: push dword ptr [ebp + 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x2cu)); esp -= 4; W32(esp, v); }
/* 47be1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47be1d: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47be20: call dword ptr [0x48e198] */
  esp -= 4; W32(esp, 0x47be26u); SPILL(); f_407d4d(); if (g_unwind) return; /* MSVCR70!memchr */ RELOAD();
/* 47be26: mov esi, eax */
  esi = eax;
/* 47be28: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47be2b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47be2d: je 0x47bec3 */
  if (zf) goto L_47bec3;
L_47be33: /* 47be33: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 47be36: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47be39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47be3a: call 0x464a5a */
  esp -= 4; W32(esp, 0x47be3fu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47be3f: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47be43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47be44: call 0x479941 */
  esp -= 4; W32(esp, 0x47be49u); SPILL(); f_479941(); if (g_unwind) return; RELOAD();
/* 47be49: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47be4d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47be4e: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 47be51: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 47be54: call 0x461389 */
  esp -= 4; W32(esp, 0x47be59u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47be59: sub esi, dword ptr [ebp + 0x1c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 47be5c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 47be5d: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
/* 47be60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47be61: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47be64: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 47be67: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47be68: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47be69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47be6a: call 0x46f2dc */
  esp -= 4; W32(esp, 0x47be6fu); SPILL(); f_46f2dc(); if (g_unwind) return; RELOAD();
/* 47be6f: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 47be72: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47be75: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 47be78: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 47be7a: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 47be7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47be7e: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x47be83u); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 47be83: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 47be86: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 47be88: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 47be8b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 47be8d: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47be90: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47be92: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x47be95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47be95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47be96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47be97: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 47be9a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47be9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47be9c: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x47bea1u); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 47bea1: push dword ptr [ebp + 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0x24u)); esp -= 4; W32(esp, v); }
/* 47bea4: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47bea7: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 47beaa: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 47beac: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 47beaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47beb0: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x47beb5u); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 47beb5: add dword ptr [ebp + 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x1cu), r);
  }
/* 47beb8: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 47beba: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 47bebd: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47bec0: sub dword ptr [ebp + 0x2c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x2cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x2cu), r);
  }
L_47bec3: /* 47bec3: push dword ptr [ebp + 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x2cu)); esp -= 4; W32(esp, v); }
/* 47bec6: push 0x65 */
  { uint32_t v = 0x65u; esp -= 4; W32(esp, v); }
/* 47bec8: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47becb: call dword ptr [0x48e198] */
  esp -= 4; W32(esp, 0x47bed1u); SPILL(); f_407d4d(); if (g_unwind) return; /* MSVCR70!memchr */ RELOAD();
/* 47bed1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47bed4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47bed6: je 0x47bf3d */
  if (zf) goto L_47bf3d;
L_47bed8: /* 47bed8: sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 47bedb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 47bedc: mov esi, eax */
  esi = eax;
/* 47bede: lea eax, [esi - 1] */
  eax = (uint32_t)(esi + 0xffffffffu);
/* 47bee1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47bee2: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47bee5: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 47bee8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47bee9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47beea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47beeb: call 0x46f2dc */
  esp -= 4; W32(esp, 0x47bef0u); SPILL(); f_46f2dc(); if (g_unwind) return; RELOAD();
/* 47bef0: push dword ptr [ebp + 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0x28u)); esp -= 4; W32(esp, v); }
/* 47bef3: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47bef6: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 47bef9: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 47befb: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 47befe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47beff: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x47bf04u); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 47bf04: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 47bf07: and dword ptr [ebp + 0x28], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x28u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x28u), r);
  }
/* 47bf0b: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47bf0e: test byte ptr [ecx + 0xc], 4 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0xcu))); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47bf12: mov ecx, 0x4c8ec8 */
  ecx = 0x4c8ec8u;
/* 47bf17: jne 0x47bf1e */
  if (!zf) goto L_47bf1e;
L_47bf19: /* 47bf19: mov ecx, 0x4c8ec4 */
  ecx = 0x4c8ec4u;
L_47bf1e: /* 47bf1e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47bf20: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47bf21: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 47bf24: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 47bf26: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 47bf29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47bf2a: call 0x46f2dc */
  esp -= 4; W32(esp, 0x47bf2fu); SPILL(); f_46f2dc(); if (g_unwind) return; RELOAD();
/* 47bf2f: add dword ptr [ebp + 0x1c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x1cu), r);
  }
/* 47bf32: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 47bf34: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 47bf37: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47bf3a: sub dword ptr [ebp + 0x2c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x2cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x2cu), r);
  }
L_47bf3d: /* 47bf3d: push dword ptr [ebp + 0x2c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x2cu)); esp -= 4; W32(esp, v); }
/* 47bf40: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 47bf43: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47bf46: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47bf47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47bf48: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47bf49: call 0x46f2dc */
  esp -= 4; W32(esp, 0x47bf4eu); SPILL(); f_46f2dc(); if (g_unwind) return; RELOAD();
/* 47bf4e: push dword ptr [ebp + 0x28] */
  { uint32_t v = R32((uint32_t)(ebp + 0x28u)); esp -= 4; W32(esp, v); }
/* 47bf51: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47bf54: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 47bf57: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 47bf59: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 47bf5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47bf5d: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x47bf62u); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 47bf62: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* 47bf65: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47bf67: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47bf6a: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47bf6d: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 47bf70: and dword ptr [edx + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(edx + 0x14u), r);
  }
/* 47bf74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47bf75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47bf76: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47bf79: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x47bf7eu); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 47bf7e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47bf81: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47bf84: add esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47bf87: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47bf88: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47bf89: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47bf8a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47bf91: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47bf92: ret  */
  esp += 4; SPILL(); return;
}

void f_47bf93(void) {
  LOAD_REGS();
L_47bf93: /* 47bf93: mov eax, 0x48d117 */
  eax = 0x48d117u;
/* 47bf98: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47bf9du); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47bf9d: sub esp, 0x3c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47bfa0: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47bfa5: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47bfa8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47bfa9: mov ebx, dword ptr [ebp + 0x1c] */
  ebx = R32((uint32_t)(ebp + 0x1cu));
/* 47bfac: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47bfaf: mov al, byte ptr [ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 47bfb1: cmp al, 0x2b */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47bfb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47bfb4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47bfb5: je 0x47bfd9 */
  if (zf) goto L_47bfd9;
L_47bfb7: /* 47bfb7: cmp al, 0x2d */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47bfb9: je 0x47bfd9 */
  if (zf) goto L_47bfd9;
L_47bfbb: /* 47bfbb: cmp al, 0x30 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47bfbd: jne 0x47bfd3 */
  if (!zf) goto L_47bfd3;
L_47bfbf: /* 47bfbf: mov al, byte ptr [ebx + 1] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x1u))) & 0xffu);
/* 47bfc2: cmp al, 0x78 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x78u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47bfc4: je 0x47bfca */
  if (zf) goto L_47bfca;
L_47bfc6: /* 47bfc6: cmp al, 0x58 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x58u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47bfc8: jne 0x47bfd3 */
  if (!zf) goto L_47bfd3;
L_47bfca: /* 47bfca: mov dword ptr [ebp - 0x18], 2 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x2u);
/* 47bfd1: jmp 0x47bfe0 */
  goto L_47bfe0;
L_47bfd3: /* 47bfd3: and dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 47bfd7: jmp 0x47bfe0 */
  goto L_47bfe0;
L_47bfd9: /* 47bfd9: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
L_47bfe0: /* 47bfe0: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 47bfe3: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47bfe6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47bfe7: mov ecx, edi */
  ecx = edi;
/* 47bfe9: call 0x464a5a */
  esp -= 4; W32(esp, 0x47bfeeu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47bfee: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47bff2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47bff3: call 0x479941 */
  esp -= 4; W32(esp, 0x47bff8u); SPILL(); f_479941(); if (g_unwind) return; RELOAD();
/* 47bff8: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47bffc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47bffd: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47c000: mov esi, eax */
  esi = eax;
/* 47c002: call 0x461389 */
  esp -= 4; W32(esp, 0x47c007u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47c007: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 47c00a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c00b: mov ecx, esi */
  ecx = esi;
/* 47c00d: call 0x471e93 */
  esp -= 4; W32(esp, 0x47c012u); SPILL(); f_471e93(); if (g_unwind) return; RELOAD();
/* 47c012: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47c014: mov ecx, esi */
  ecx = esi;
/* 47c016: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 47c01d: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x47c020u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47c020: cmp dword ptr [ebp - 0x30], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47c024: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 47c027: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 47c02a: jae 0x47c02f */
  if (!cf) goto L_47c02f;
L_47c02c: /* 47c02c: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
L_47c02f: /* 47c02f: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 47c032: setg byte ptr [ebp + 0x1f] */
  W8((uint32_t)(ebp + 0x1fu), ((!zf && sf == of)) ? 1 : 0);
/* 47c036: cmp byte ptr [ebp + 0x1f], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x1fu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c03a: je 0x47c09f */
  if (zf) goto L_47c09f;
L_47c03c: /* 47c03c: cmp dword ptr [ebp - 0x30], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47c040: mov edi, dword ptr [ebp - 0x44] */
  edi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 47c043: jae 0x47c048 */
  if (!cf) goto L_47c048;
L_47c045: /* 47c045: lea edi, [ebp - 0x44] */
  edi = (uint32_t)(ebp + 0xffffffbcu);
L_47c048: /* 47c048: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 47c04b: and byte ptr [ebp + 0x1f], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x1fu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0x1fu), r);
  }
/* 47c04f: jmp 0x47c096 */
  goto L_47c096;
L_47c051: /* 47c051: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = 0;
  }
/* 47c053: jle 0x47c09c */
  if ((zf || sf != of)) goto L_47c09c;
L_47c055: /* 47c055: mov ecx, esi */
  ecx = esi;
/* 47c057: sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 47c05a: movsx eax, al */
  eax = (uint32_t)(int32_t)(int8_t)((eax & 0xffu));
/* 47c05d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47c05f: jae 0x47c09c */
  if (!cf) goto L_47c09c;
L_47c061: /* 47c061: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 47c064: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 47c066: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 47c068: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 47c069: lea eax, [esi + ebx] */
  eax = (uint32_t)(esi + ebx);
/* 47c06c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47c06d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c06e: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 47c071: lea eax, [esi + ebx + 1] */
  eax = (uint32_t)(esi + ebx + 0x1u);
/* 47c075: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c076: call dword ptr [0x48e1a8] */
  esp -= 4; W32(esp, 0x47c07cu); SPILL(); hle_memcpy(); if (g_unwind) return; /* MSVCR70!memmove */ RELOAD();
/* 47c07c: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 47c07f: mov byte ptr [eax], 0x2c */
  W8((uint32_t)(eax), 0x2cu);
/* 47c082: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47c085: inc dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x20u), r);
  }
/* 47c088: lea eax, [edi + 1] */
  eax = (uint32_t)(edi + 0x1u);
/* 47c08b: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 47c08e: jle 0x47c092 */
  if ((zf || sf != of)) goto L_47c092;
L_47c090: /* 47c090: mov edi, eax */
  edi = eax;
L_47c092: /* 47c092: mov byte ptr [ebp + 0x1f], 1 */
  W8((uint32_t)(ebp + 0x1fu), 0x1u);
L_47c096: /* 47c096: mov al, byte ptr [edi] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* 47c098: cmp al, 0x7f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c09a: jne 0x47c051 */
  if (!zf) goto L_47c051;
L_47c09c: /* 47c09c: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
L_47c09f: /* 47c09f: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 47c0a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 47c0a4: jle 0x47c0b3 */
  if ((zf || sf != of)) goto L_47c0b3;
L_47c0a6: /* 47c0a6: cmp eax, dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 47c0a9: jbe 0x47c0b3 */
  if ((cf | zf)) goto L_47c0b3;
L_47c0ab: /* 47c0ab: sub eax, dword ptr [ebp + 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 47c0ae: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 47c0b1: jmp 0x47c0b7 */
  goto L_47c0b7;
L_47c0b3: /* 47c0b3: and dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_47c0b7: /* 47c0b7: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* 47c0ba: and eax, 0x1c0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1c0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 47c0bf: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47c0c2: je 0x47c11d */
  if (zf) goto L_47c11d;
L_47c0c4: /* 47c0c4: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47c0c9: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47c0cc: je 0x47c0e5 */
  if (zf) goto L_47c0e5;
L_47c0ce: /* 47c0ce: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47c0d1: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47c0d4: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47c0d7: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47c0da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c0db: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x47c0e0u); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 47c0e0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47c0e3: jmp 0x47c112 */
  goto L_47c112;
L_47c0e5: /* 47c0e5: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47c0e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c0e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47c0ea: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47c0ed: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47c0f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c0f1: call 0x46f2dc */
  esp -= 4; W32(esp, 0x47c0f6u); SPILL(); f_46f2dc(); if (g_unwind) return; RELOAD();
/* 47c0f6: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47c0f9: sub dword ptr [ebp + 0x20], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0x20u), r);
  }
/* 47c0fc: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47c0ff: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 47c101: push dword ptr [eax + 4] */
  { uint32_t v = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, v); }
/* 47c104: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 47c106: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47c109: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c10a: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x47c10fu); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 47c10f: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_47c112: /* 47c112: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 47c114: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 47c117: and dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 47c11b: jmp 0x47c123 */
  goto L_47c123;
L_47c11d: /* 47c11d: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 47c120: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_47c123: /* 47c123: cmp byte ptr [ebp + 0x1f], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x1fu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c127: jne 0x47c145 */
  if (!zf) goto L_47c145;
L_47c129: /* 47c129: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 47c12c: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 47c12f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47c130: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c131: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47c132: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c133: call 0x46f2dc */
  esp -= 4; W32(esp, 0x47c138u); SPILL(); f_46f2dc(); if (g_unwind) return; RELOAD();
/* 47c138: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 47c13a: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 47c13d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47c140: jmp 0x47c1c5 */
  goto L_47c1c5;
L_47c145: /* 47c145: push 0x4c8ecc */
  { uint32_t v = 0x4c8eccu; esp -= 4; W32(esp, v); }
/* 47c14a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47c14b: call dword ptr [0x48e0bc] */
  esp -= 4; W32(esp, 0x47c151u); SPILL(); f_407848(); if (g_unwind) return; /* MSVCR70!strcspn */ RELOAD();
/* 47c151: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c152: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47c153: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c154: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 47c157: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47c15a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47c15b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c15c: call 0x46f2dc */
  esp -= 4; W32(esp, 0x47c161u); SPILL(); f_46f2dc(); if (g_unwind) return; RELOAD();
/* 47c161: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 47c163: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 47c166: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 47c169: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47c16c: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 47c16e: sub dword ptr [ebp + 0x20], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0x20u), r);
  }
/* 47c171: je 0x47c1c5 */
  if (zf) goto L_47c1c5;
L_47c173: /* 47c173: cmp word ptr [ebp - 0x20], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffe0u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47c178: je 0x47c192 */
  if (zf) goto L_47c192;
L_47c17a: /* 47c17a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47c17c: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* 47c17f: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* 47c182: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47c183: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c184: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c185: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x47c18au); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 47c18a: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 47c18c: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 47c18f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_47c192: /* 47c192: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 47c193: push 0x4c8ecc */
  { uint32_t v = 0x4c8eccu; esp -= 4; W32(esp, v); }
/* 47c198: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47c199: call dword ptr [0x48e0bc] */
  esp -= 4; W32(esp, 0x47c19fu); SPILL(); f_407848(); if (g_unwind) return; /* MSVCR70!strcspn */ RELOAD();
/* 47c19f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c1a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47c1a1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47c1a2: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 47c1a5: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47c1a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c1a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c1aa: call 0x46f2dc */
  esp -= 4; W32(esp, 0x47c1afu); SPILL(); f_46f2dc(); if (g_unwind) return; RELOAD();
/* 47c1af: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 47c1b1: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 47c1b4: add ebx, dword ptr [ebp + 0x1c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x1cu)));
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 47c1b7: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 47c1ba: sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 47c1bd: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47c1c0: add dword ptr [ebp + 0x20], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x20u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0x20u), r);
  }
/* 47c1c3: jne 0x47c173 */
  if (!zf) goto L_47c173;
L_47c1c5: /* 47c1c5: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 47c1c8: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 47c1cb: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47c1ce: and dword ptr [eax + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x14u), r);
  }
/* 47c1d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47c1d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c1d4: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47c1d7: call 0x46c1c2 */
  esp -= 4; W32(esp, 0x47c1dcu); SPILL(); f_46c1c2(); if (g_unwind) return; RELOAD();
/* 47c1dc: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47c1df: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47c1e1: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 47c1e4: call 0x461ea8 */
  esp -= 4; W32(esp, 0x47c1e9u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 47c1e9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47c1ec: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47c1ef: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47c1f6: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47c1f9: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47c1fc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47c1fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47c1fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47c1ff: call 0x46190c */
  esp -= 4; W32(esp, 0x47c204u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47c204: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47c205: ret  */
  esp += 4; SPILL(); return;
}

void f_47c206(void) {
  LOAD_REGS();
L_47c206: /* 47c206: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c207: mov esi, ecx */
  esi = ecx;
/* 47c209: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47c20b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47c20e: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 47c210: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47c212: call 0x46f3cb */
  esp -= 4; W32(esp, 0x47c217u); SPILL(); f_46f3cb(); if (g_unwind) return; RELOAD();
/* 47c217: mov ecx, esi */
  ecx = esi;
/* 47c219: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c21a: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47c21e: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47c222: call 0x474af2 */
  esp -= 4; W32(esp, 0x47c227u); SPILL(); f_474af2(); if (g_unwind) return; RELOAD();
/* 47c227: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47c228: ret 8 */
  esp += 12; SPILL(); return;
}

void f_47c22b(void) {
  LOAD_REGS();
L_47c22b: /* 47c22b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c22c: mov esi, ecx */
  esi = ecx;
/* 47c22e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47c230: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47c233: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 47c235: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47c237: call 0x46f3cb */
  esp -= 4; W32(esp, 0x47c23cu); SPILL(); f_46f3cb(); if (g_unwind) return; RELOAD();
/* 47c23c: mov ecx, esi */
  ecx = esi;
/* 47c23e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c23f: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47c243: call 0x474bee */
  esp -= 4; W32(esp, 0x47c248u); SPILL(); f_474bee(); if (g_unwind) return; RELOAD();
/* 47c248: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47c249: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47c24c(void) {
  LOAD_REGS();
L_47c24c: /* 47c24c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c24d: mov esi, ecx */
  esi = ecx;
/* 47c24f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47c251: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47c254: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 47c256: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47c258: call 0x46f3cb */
  esp -= 4; W32(esp, 0x47c25du); SPILL(); f_46f3cb(); if (g_unwind) return; RELOAD();
/* 47c25d: mov ecx, esi */
  ecx = esi;
/* 47c25f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c260: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47c264: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47c268: call 0x474cd0 */
  esp -= 4; W32(esp, 0x47c26du); SPILL(); f_474cd0(); if (g_unwind) return; RELOAD();
/* 47c26d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47c26e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_47c271(void) {
  LOAD_REGS();
L_47c271: /* 47c271: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c272: mov esi, ecx */
  esi = ecx;
/* 47c274: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47c276: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47c279: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 47c27b: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47c27d: call 0x46f45c */
  esp -= 4; W32(esp, 0x47c282u); SPILL(); f_46f45c(); if (g_unwind) return; RELOAD();
/* 47c282: mov ecx, esi */
  ecx = esi;
/* 47c284: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c285: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47c289: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47c28d: call 0x475f48 */
  esp -= 4; W32(esp, 0x47c292u); SPILL(); f_475f48(); if (g_unwind) return; RELOAD();
/* 47c292: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47c293: ret 8 */
  esp += 12; SPILL(); return;
}

void f_47c296(void) {
  LOAD_REGS();
L_47c296: /* 47c296: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c297: mov esi, ecx */
  esi = ecx;
/* 47c299: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47c29b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47c29e: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 47c2a0: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47c2a2: call 0x46f45c */
  esp -= 4; W32(esp, 0x47c2a7u); SPILL(); f_46f45c(); if (g_unwind) return; RELOAD();
/* 47c2a7: mov ecx, esi */
  ecx = esi;
/* 47c2a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c2aa: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47c2ae: call 0x47604b */
  esp -= 4; W32(esp, 0x47c2b3u); SPILL(); f_47604b(); if (g_unwind) return; RELOAD();
/* 47c2b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47c2b4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47c2b7(void) {
  LOAD_REGS();
L_47c2b7: /* 47c2b7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c2b8: mov esi, ecx */
  esi = ecx;
/* 47c2ba: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47c2bc: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47c2bf: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 47c2c1: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47c2c3: call 0x46f45c */
  esp -= 4; W32(esp, 0x47c2c8u); SPILL(); f_46f45c(); if (g_unwind) return; RELOAD();
/* 47c2c8: mov ecx, esi */
  ecx = esi;
/* 47c2ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c2cb: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47c2cf: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47c2d3: call 0x476130 */
  esp -= 4; W32(esp, 0x47c2d8u); SPILL(); f_476130(); if (g_unwind) return; RELOAD();
/* 47c2d8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47c2d9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_47c2dc(void) {
  LOAD_REGS();
L_47c2dc: /* 47c2dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c2dd: mov esi, ecx */
  esi = ecx;
/* 47c2df: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47c2e1: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47c2e4: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 47c2e6: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47c2e8: call 0x46f4ed */
  esp -= 4; W32(esp, 0x47c2edu); SPILL(); f_46f4ed(); if (g_unwind) return; RELOAD();
/* 47c2ed: mov ecx, esi */
  ecx = esi;
/* 47c2ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c2f0: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47c2f4: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47c2f8: call 0x4773b4 */
  esp -= 4; W32(esp, 0x47c2fdu); SPILL(); f_4773b4(); if (g_unwind) return; RELOAD();
/* 47c2fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47c2fe: ret 8 */
  esp += 12; SPILL(); return;
}

void f_47c301(void) {
  LOAD_REGS();
L_47c301: /* 47c301: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c302: mov esi, ecx */
  esi = ecx;
/* 47c304: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47c306: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47c309: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 47c30b: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47c30d: call 0x46f4ed */
  esp -= 4; W32(esp, 0x47c312u); SPILL(); f_46f4ed(); if (g_unwind) return; RELOAD();
/* 47c312: mov ecx, esi */
  ecx = esi;
/* 47c314: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c315: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47c319: call 0x4774b7 */
  esp -= 4; W32(esp, 0x47c31eu); SPILL(); f_4774b7(); if (g_unwind) return; RELOAD();
/* 47c31e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47c31f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47c322(void) {
  LOAD_REGS();
L_47c322: /* 47c322: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c323: mov esi, ecx */
  esi = ecx;
/* 47c325: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47c327: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47c32a: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* 47c32c: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47c32e: call 0x46f4ed */
  esp -= 4; W32(esp, 0x47c333u); SPILL(); f_46f4ed(); if (g_unwind) return; RELOAD();
/* 47c333: mov ecx, esi */
  ecx = esi;
/* 47c335: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c336: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47c33a: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47c33e: call 0x47759c */
  esp -= 4; W32(esp, 0x47c343u); SPILL(); f_47759c(); if (g_unwind) return; RELOAD();
/* 47c343: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47c344: ret 8 */
  esp += 12; SPILL(); return;
}

void f_47c347(void) {
  LOAD_REGS();
L_47c347: /* 47c347: mov eax, 0x48d04d */
  eax = 0x48d04du;
/* 47c34c: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47c351u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47c351: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47c354: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47c359: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47c35c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47c35d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c35e: mov esi, ecx */
  esi = ecx;
/* 47c360: xor ebx, ebx */
  ebx = 0;
/* 47c362: cmp dword ptr [esi + 0x3c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47c365: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47c368: je 0x47c435 */
  if (zf) goto L_47c435;
L_47c36e: /* 47c36e: cmp byte ptr [esi + 0x4c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4cu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c371: je 0x47c435 */
  if (zf) goto L_47c435;
L_47c377: /* 47c377: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47c379: push 0xffff */
  { uint32_t v = 0xffffu; esp -= 4; W32(esp, v); }
/* 47c37e: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x47c381u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47c381: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47c382: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 47c385: mov dword ptr [ebp - 0x1c], 0xf */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xfu);
/* 47c38c: call 0x461ed0 */
  esp -= 4; W32(esp, 0x47c391u); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
/* 47c391: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47c392: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 47c394: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 47c397: call 0x4661b6 */
  esp -= 4; W32(esp, 0x47c39cu); SPILL(); f_4661b6(); if (g_unwind) return; RELOAD();
/* 47c39c: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47c39f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_47c3a0: /* 47c3a0: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 47c3a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c3a4: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 47c3a7: call 0x465162 */
  esp -= 4; W32(esp, 0x47c3acu); SPILL(); f_465162(); if (g_unwind) return; RELOAD();
/* 47c3ac: cmp dword ptr [ebp - 0x1c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47c3b0: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 47c3b2: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 47c3b5: jae 0x47c3ba */
  if (!cf) goto L_47c3ba;
L_47c3b7: /* 47c3b7: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
L_47c3ba: /* 47c3ba: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 47c3bd: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 47c3bf: lea ebx, [ebp - 0x14] */
  ebx = (uint32_t)(ebp + 0xffffffecu);
/* 47c3c2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47c3c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c3c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 47c3c5: lea eax, [esi + 0x50] */
  eax = (uint32_t)(esi + 0x50u);
/* 47c3c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c3c9: call dword ptr [edi + 0x18] */
  { uint32_t t = R32((uint32_t)(edi + 0x18u)); esp -= 4; W32(esp, 0x47c3ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47c3cc: xor ebx, ebx */
  ebx = 0;
/* 47c3ce: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 47c3d0: je 0x47c3ea */
  if (zf) goto L_47c3ea;
L_47c3d2: /* 47c3d2: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 47c3d3: je 0x47c3ed */
  if (zf) goto L_47c3ed;
L_47c3d5: /* 47c3d5: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 47c3d6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 47c3d7: jne 0x47c3db */
  if (!zf) goto L_47c3db;
L_47c3d9: /* 47c3d9: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_47c3db: /* 47c3db: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47c3dd: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 47c3e0: call 0x461ea8 */
  esp -= 4; W32(esp, 0x47c3e5u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 47c3e5: mov al, bl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 47c3e7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47c3e8: jmp 0x47c437 */
  goto L_47c437;
L_47c3ea: /* 47c3ea: mov byte ptr [esi + 0x4c], bl */
  W8((uint32_t)(esi + 0x4cu), (ebx & 0xffu));
L_47c3ed: /* 47c3ed: cmp dword ptr [ebp - 0x1c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47c3f1: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 47c3f4: jae 0x47c3f9 */
  if (!cf) goto L_47c3f9;
L_47c3f6: /* 47c3f6: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
L_47c3f9: /* 47c3f9: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 47c3fc: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  edi = r;
  }
/* 47c3fe: je 0x47c420 */
  if (zf) goto L_47c420;
L_47c400: /* 47c400: cmp dword ptr [ebp - 0x1c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47c404: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 47c407: jae 0x47c40c */
  if (!cf) goto L_47c40c;
L_47c409: /* 47c409: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
L_47c40c: /* 47c40c: push dword ptr [esi + 0x5c] */
  { uint32_t v = R32((uint32_t)(esi + 0x5cu)); esp -= 4; W32(esp, v); }
/* 47c40f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47c411: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47c412: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c413: call dword ptr [0x48e054] */
  esp -= 4; W32(esp, 0x47c419u); SPILL(); f_42cf72(); if (g_unwind) return; /* MSVCR70!fwrite */ RELOAD();
/* 47c419: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47c41c: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47c41e: jne 0x47c3db */
  if (!zf) goto L_47c3db;
L_47c420: /* 47c420: cmp byte ptr [esi + 0x4c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4cu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c423: je 0x47c3d9 */
  if (zf) goto L_47c3d9;
L_47c425: /* 47c425: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47c426: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 47c428: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 47c42b: call 0x466156 */
  esp -= 4; W32(esp, 0x47c430u); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
/* 47c430: jmp 0x47c3a0 */
  goto L_47c3a0;
L_47c435: /* 47c435: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_47c437: /* 47c437: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47c43a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47c441: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47c444: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47c447: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47c448: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47c449: call 0x46190c */
  esp -= 4; W32(esp, 0x47c44eu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47c44e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47c44f: ret  */
  esp += 4; SPILL(); return;
}

void f_47c450(void) {
  LOAD_REGS();
L_47c450: /* 47c450: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c451: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47c453: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47c457: mov esi, ecx */
  esi = ecx;
/* 47c459: call 0x47867c */
  esp -= 4; W32(esp, 0x47c45eu); SPILL(); f_47867c(); if (g_unwind) return; RELOAD();
/* 47c45e: mov dword ptr [esi], 0x4c86dc */
  W32((uint32_t)(esi), 0x4c86dcu);
/* 47c464: mov eax, esi */
  eax = esi;
/* 47c466: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47c467: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47c46a(void) {
  LOAD_REGS();
L_47c46a: /* 47c46a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c46b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47c46d: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47c471: mov esi, ecx */
  esi = ecx;
/* 47c473: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47c477: call 0x4786e1 */
  esp -= 4; W32(esp, 0x47c47cu); SPILL(); f_4786e1(); if (g_unwind) return; RELOAD();
/* 47c47c: mov dword ptr [esi], 0x4c86dc */
  W32((uint32_t)(esi), 0x4c86dcu);
/* 47c482: mov eax, esi */
  eax = esi;
/* 47c484: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47c485: ret 8 */
  esp += 12; SPILL(); return;
}

void f_47c488(void) {
  LOAD_REGS();
L_47c488: /* 47c488: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 47c48d: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47c492u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47c492: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c493: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 47c496: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47c498: je 0x47c4c1 */
  if (zf) goto L_47c4c1;
L_47c49a: /* 47c49a: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47c49d: jne 0x47c4c1 */
  if (!zf) goto L_47c4c1;
L_47c49f: /* 47c49f: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 47c4a1: call 0x4620da */
  esp -= 4; W32(esp, 0x47c4a6u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 47c4a6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47c4a7: mov ecx, eax */
  ecx = eax;
/* 47c4a9: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 47c4ac: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47c4b0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47c4b2: je 0x47c4bd */
  if (zf) goto L_47c4bd;
L_47c4b4: /* 47c4b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47c4b6: call 0x47c450 */
  esp -= 4; W32(esp, 0x47c4bbu); SPILL(); f_47c450(); if (g_unwind) return; RELOAD();
/* 47c4bb: jmp 0x47c4bf */
  goto L_47c4bf;
L_47c4bd: /* 47c4bd: xor eax, eax */
  eax = 0;
L_47c4bf: /* 47c4bf: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_47c4c1: /* 47c4c1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47c4c4: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 47c4c6: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 47c4c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47c4c8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47c4cf: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47c4d0: ret  */
  esp += 4; SPILL(); return;
}

void f_47c4d1(void) {
  LOAD_REGS();
L_47c4d1: /* 47c4d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c4d2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47c4d4: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47c4d8: mov esi, ecx */
  esi = ecx;
/* 47c4da: call 0x4787a2 */
  esp -= 4; W32(esp, 0x47c4dfu); SPILL(); f_4787a2(); if (g_unwind) return; RELOAD();
/* 47c4df: mov dword ptr [esi], 0x4c8758 */
  W32((uint32_t)(esi), 0x4c8758u);
/* 47c4e5: mov eax, esi */
  eax = esi;
/* 47c4e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47c4e8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47c4eb(void) {
  LOAD_REGS();
L_47c4eb: /* 47c4eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c4ec: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47c4ee: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47c4f2: mov esi, ecx */
  esi = ecx;
/* 47c4f4: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47c4f8: call 0x478807 */
  esp -= 4; W32(esp, 0x47c4fdu); SPILL(); f_478807(); if (g_unwind) return; RELOAD();
/* 47c4fd: mov dword ptr [esi], 0x4c8758 */
  W32((uint32_t)(esi), 0x4c8758u);
/* 47c503: mov eax, esi */
  eax = esi;
/* 47c505: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47c506: ret 8 */
  esp += 12; SPILL(); return;
}

void f_47c509(void) {
  LOAD_REGS();
L_47c509: /* 47c509: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 47c50e: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47c513u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47c513: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c514: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 47c517: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47c519: je 0x47c542 */
  if (zf) goto L_47c542;
L_47c51b: /* 47c51b: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47c51e: jne 0x47c542 */
  if (!zf) goto L_47c542;
L_47c520: /* 47c520: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 47c522: call 0x4620da */
  esp -= 4; W32(esp, 0x47c527u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 47c527: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47c528: mov ecx, eax */
  ecx = eax;
/* 47c52a: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 47c52d: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47c531: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47c533: je 0x47c53e */
  if (zf) goto L_47c53e;
L_47c535: /* 47c535: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47c537: call 0x47c4d1 */
  esp -= 4; W32(esp, 0x47c53cu); SPILL(); f_47c4d1(); if (g_unwind) return; RELOAD();
/* 47c53c: jmp 0x47c540 */
  goto L_47c540;
L_47c53e: /* 47c53e: xor eax, eax */
  eax = 0;
L_47c540: /* 47c540: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_47c542: /* 47c542: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47c545: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 47c547: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 47c548: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47c549: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47c550: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47c551: ret  */
  esp += 4; SPILL(); return;
}

void f_47c552(void) {
  LOAD_REGS();
L_47c552: /* 47c552: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c553: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47c555: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47c559: mov esi, ecx */
  esi = ecx;
/* 47c55b: call 0x4788c8 */
  esp -= 4; W32(esp, 0x47c560u); SPILL(); f_4788c8(); if (g_unwind) return; RELOAD();
/* 47c560: mov dword ptr [esi], 0x4c87d4 */
  W32((uint32_t)(esi), 0x4c87d4u);
/* 47c566: mov eax, esi */
  eax = esi;
/* 47c568: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47c569: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47c56c(void) {
  LOAD_REGS();
L_47c56c: /* 47c56c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c56d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47c56f: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47c573: mov esi, ecx */
  esi = ecx;
/* 47c575: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47c579: call 0x47892d */
  esp -= 4; W32(esp, 0x47c57eu); SPILL(); f_47892d(); if (g_unwind) return; RELOAD();
/* 47c57e: mov dword ptr [esi], 0x4c87d4 */
  W32((uint32_t)(esi), 0x4c87d4u);
/* 47c584: mov eax, esi */
  eax = esi;
/* 47c586: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47c587: ret 8 */
  esp += 12; SPILL(); return;
}

void f_47c58a(void) {
  LOAD_REGS();
L_47c58a: /* 47c58a: mov eax, 0x48da75 */
  eax = 0x48da75u;
/* 47c58f: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47c594u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47c594: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c595: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 47c598: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47c59a: je 0x47c5c3 */
  if (zf) goto L_47c5c3;
L_47c59c: /* 47c59c: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47c59f: jne 0x47c5c3 */
  if (!zf) goto L_47c5c3;
L_47c5a1: /* 47c5a1: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 47c5a3: call 0x4620da */
  esp -= 4; W32(esp, 0x47c5a8u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 47c5a8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47c5a9: mov ecx, eax */
  ecx = eax;
/* 47c5ab: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 47c5ae: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47c5b2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47c5b4: je 0x47c5bf */
  if (zf) goto L_47c5bf;
L_47c5b6: /* 47c5b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47c5b8: call 0x47c552 */
  esp -= 4; W32(esp, 0x47c5bdu); SPILL(); f_47c552(); if (g_unwind) return; RELOAD();
/* 47c5bd: jmp 0x47c5c1 */
  goto L_47c5c1;
L_47c5bf: /* 47c5bf: xor eax, eax */
  eax = 0;
L_47c5c1: /* 47c5c1: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_47c5c3: /* 47c5c3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47c5c6: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 47c5c8: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 47c5c9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47c5ca: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47c5d1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47c5d2: ret  */
  esp += 4; SPILL(); return;
}

void f_47c5d3(void) {
  LOAD_REGS();
L_47c5d3: /* 47c5d3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47c5d4: mov ebp, esp */
  ebp = esp;
/* 47c5d6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47c5d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c5d8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47c5d9: mov edi, dword ptr [ebp + 0x24] */
  edi = R32((uint32_t)(ebp + 0x24u));
/* 47c5dc: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* 47c5df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c5e0: push 0x17 */
  { uint32_t v = 0x17u; esp -= 4; W32(esp, v); }
/* 47c5e2: xor ebx, ebx */
  ebx = 0;
/* 47c5e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47c5e5: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47c5e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c5e9: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47c5ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c5ed: call 0x4789ee */
  esp -= 4; W32(esp, 0x47c5f2u); SPILL(); f_4789ee(); if (g_unwind) return; RELOAD();
/* 47c5f2: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 47c5f5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47c5f8: or dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  W32((uint32_t)(esi), r);
  }
/* 47c5fa: jne 0x47c632 */
  if (!zf) goto L_47c632;
L_47c5fc: /* 47c5fc: cmp byte ptr [ebp + 0x10], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c5ff: jne 0x47c609 */
  if (!zf) goto L_47c609;
L_47c601: /* 47c601: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47c604: call 0x46c732 */
  esp -= 4; W32(esp, 0x47c609u); SPILL(); f_46c732(); if (g_unwind) return; RELOAD();
L_47c609: /* 47c609: cmp byte ptr [ebp + 0x11], 0x3a */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x11u))); uint8_t b = (uint8_t)(0x3au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c60d: jne 0x47c632 */
  if (!zf) goto L_47c632;
L_47c60f: /* 47c60f: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47c612: call 0x46c710 */
  esp -= 4; W32(esp, 0x47c617u); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
/* 47c617: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 47c61a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c61b: push 0x3b */
  { uint32_t v = 0x3bu; esp -= 4; W32(esp, v); }
/* 47c61d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47c61e: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47c621: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c622: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47c625: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c626: call 0x4789ee */
  esp -= 4; W32(esp, 0x47c62bu); SPILL(); f_4789ee(); if (g_unwind) return; RELOAD();
/* 47c62b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47c62e: or dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 47c630: jmp 0x47c635 */
  goto L_47c635;
L_47c632: /* 47c632: or dword ptr [esi], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
L_47c635: /* 47c635: cmp dword ptr [esi], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47c637: jne 0x47c66c */
  if (!zf) goto L_47c66c;
L_47c639: /* 47c639: cmp byte ptr [ebp + 0x10], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c63c: jne 0x47c646 */
  if (!zf) goto L_47c646;
L_47c63e: /* 47c63e: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47c641: call 0x46c732 */
  esp -= 4; W32(esp, 0x47c646u); SPILL(); f_46c732(); if (g_unwind) return; RELOAD();
L_47c646: /* 47c646: cmp byte ptr [ebp + 0x11], 0x3a */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x11u))); uint8_t b = (uint8_t)(0x3au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c64a: jne 0x47c66c */
  if (!zf) goto L_47c66c;
L_47c64c: /* 47c64c: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47c64f: call 0x46c710 */
  esp -= 4; W32(esp, 0x47c654u); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
/* 47c654: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47c655: push 0x3b */
  { uint32_t v = 0x3bu; esp -= 4; W32(esp, v); }
/* 47c657: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47c658: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47c65b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c65c: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47c65f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c660: call 0x4789ee */
  esp -= 4; W32(esp, 0x47c665u); SPILL(); f_4789ee(); if (g_unwind) return; RELOAD();
/* 47c665: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47c668: or dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 47c66a: jmp 0x47c66f */
  goto L_47c66f;
L_47c66c: /* 47c66c: or dword ptr [esi], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
L_47c66f: /* 47c66f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47c672: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47c675: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47c676: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47c678: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47c67b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47c67c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47c67f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47c680: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 47c681: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47c684(void) {
  LOAD_REGS();
L_47c684: /* 47c684: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47c685: mov ebp, esp */
  ebp = esp;
/* 47c687: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47c68a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47c68b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c68c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47c68d: mov edi, ecx */
  edi = ecx;
/* 47c68f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 47c691: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
/* 47c694: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x47c697u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47c697: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47c699: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 47c69c: jne 0x47c6a5 */
  if (!zf) goto L_47c6a5;
L_47c69e: /* 47c69e: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
L_47c6a5: /* 47c6a5: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c6a9: jne 0x47c6b3 */
  if (!zf) goto L_47c6b3;
L_47c6ab: /* 47c6ab: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47c6ae: call 0x46c732 */
  esp -= 4; W32(esp, 0x47c6b3u); SPILL(); f_46c732(); if (g_unwind) return; RELOAD();
L_47c6b3: /* 47c6b3: cmp byte ptr [ebp + 0x11], 0x30 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x11u))); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 47c6b7: jl 0x47c744 */
  if ((sf != of)) goto L_47c744;
L_47c6bd: /* 47c6bd: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c6c1: jne 0x47c6cb */
  if (!zf) goto L_47c6cb;
L_47c6c3: /* 47c6c3: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47c6c6: call 0x46c732 */
  esp -= 4; W32(esp, 0x47c6cbu); SPILL(); f_46c732(); if (g_unwind) return; RELOAD();
L_47c6cb: /* 47c6cb: cmp byte ptr [ebp + 0x11], 0x39 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x11u))); uint8_t b = (uint8_t)(0x39u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 47c6cf: jg 0x47c744 */
  if ((!zf && sf == of)) goto L_47c744;
L_47c6d1: /* 47c6d1: cmp dword ptr [ebp - 4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47c6d5: mov ebx, dword ptr [ebp + 0x24] */
  ebx = R32((uint32_t)(ebp + 0x24u));
/* 47c6d8: jne 0x47c6fe */
  if (!zf) goto L_47c6fe;
L_47c6da: /* 47c6da: lea edi, [ebx + 0x10] */
  edi = (uint32_t)(ebx + 0x10u);
/* 47c6dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47c6de: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 47c6e0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47c6e2: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47c6e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c6e6: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47c6e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c6ea: call 0x4789ee */
  esp -= 4; W32(esp, 0x47c6efu); SPILL(); f_4789ee(); if (g_unwind) return; RELOAD();
/* 47c6ef: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 47c6f2: or dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 47c6f4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47c6f7: dec dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(edi), r);
  }
/* 47c6f9: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
/* 47c6fc: jmp 0x47c778 */
  goto L_47c778;
L_47c6fe: /* 47c6fe: cmp dword ptr [ebp - 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47c702: jne 0x47c723 */
  if (!zf) goto L_47c723;
L_47c704: /* 47c704: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 47c707: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c708: push 0x1f */
  { uint32_t v = 0x1fu; esp -= 4; W32(esp, v); }
/* 47c70a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47c70c: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47c70f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c710: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47c713: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c714: call 0x4789ee */
  esp -= 4; W32(esp, 0x47c719u); SPILL(); f_4789ee(); if (g_unwind) return; RELOAD();
/* 47c719: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 47c71c: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47c71f: or dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 47c721: jmp 0x47c778 */
  goto L_47c778;
L_47c723: /* 47c723: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 47c726: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47c727: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c728: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47c72b: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 47c72e: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47c731: mov ecx, edi */
  ecx = edi;
/* 47c733: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 47c736: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47c739: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47c73c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c73d: call 0x46885d */
  esp -= 4; W32(esp, 0x47c742u); SPILL(); f_46885d(); if (g_unwind) return; RELOAD();
/* 47c742: jmp 0x47c76d */
  goto L_47c76d;
L_47c744: /* 47c744: mov ebx, dword ptr [ebp + 0x24] */
  ebx = R32((uint32_t)(ebp + 0x24u));
/* 47c747: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 47c74a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47c74b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c74c: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47c74f: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 47c752: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47c755: mov ecx, edi */
  ecx = edi;
/* 47c757: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 47c75a: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47c75d: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47c760: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c761: call 0x4696e7 */
  esp -= 4; W32(esp, 0x47c766u); SPILL(); f_4696e7(); if (g_unwind) return; RELOAD();
/* 47c766: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
L_47c76d: /* 47c76d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47c76f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47c772: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 47c775: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_47c778: /* 47c778: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47c77b: jne 0x47c9f6 */
  if (!zf) goto L_47c9f6;
L_47c781: /* 47c781: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c785: jne 0x47c78f */
  if (!zf) goto L_47c78f;
L_47c787: /* 47c787: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47c78a: call 0x46c732 */
  esp -= 4; W32(esp, 0x47c78fu); SPILL(); f_46c732(); if (g_unwind) return; RELOAD();
L_47c78f: /* 47c78f: cmp byte ptr [ebp + 0x11], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x11u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c793: jne 0x47c79f */
  if (!zf) goto L_47c79f;
L_47c795: /* 47c795: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47c798: call 0x46c710 */
  esp -= 4; W32(esp, 0x47c79du); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
/* 47c79d: jmp 0x47c781 */
  goto L_47c781;
L_47c79f: /* 47c79f: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c7a3: jne 0x47c7ad */
  if (!zf) goto L_47c7ad;
L_47c7a5: /* 47c7a5: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47c7a8: call 0x46c732 */
  esp -= 4; W32(esp, 0x47c7adu); SPILL(); f_46c732(); if (g_unwind) return; RELOAD();
L_47c7ad: /* 47c7ad: cmp byte ptr [ebp + 0x11], 0x3a */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x11u))); uint8_t b = (uint8_t)(0x3au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c7b1: je 0x47c7db */
  if (zf) goto L_47c7db;
L_47c7b3: /* 47c7b3: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c7b7: jne 0x47c7c1 */
  if (!zf) goto L_47c7c1;
L_47c7b9: /* 47c7b9: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47c7bc: call 0x46c732 */
  esp -= 4; W32(esp, 0x47c7c1u); SPILL(); f_46c732(); if (g_unwind) return; RELOAD();
L_47c7c1: /* 47c7c1: cmp byte ptr [ebp + 0x11], 0x2c */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x11u))); uint8_t b = (uint8_t)(0x2cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c7c5: je 0x47c7db */
  if (zf) goto L_47c7db;
L_47c7c7: /* 47c7c7: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c7cb: jne 0x47c7d5 */
  if (!zf) goto L_47c7d5;
L_47c7cd: /* 47c7cd: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47c7d0: call 0x46c732 */
  esp -= 4; W32(esp, 0x47c7d5u); SPILL(); f_46c732(); if (g_unwind) return; RELOAD();
L_47c7d5: /* 47c7d5: cmp byte ptr [ebp + 0x11], 0x2f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x11u))); uint8_t b = (uint8_t)(0x2fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c7d9: jne 0x47c7e3 */
  if (!zf) goto L_47c7e3;
L_47c7db: /* 47c7db: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47c7de: call 0x46c710 */
  esp -= 4; W32(esp, 0x47c7e3u); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
L_47c7e3: /* 47c7e3: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c7e7: jne 0x47c7f1 */
  if (!zf) goto L_47c7f1;
L_47c7e9: /* 47c7e9: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47c7ec: call 0x46c732 */
  esp -= 4; W32(esp, 0x47c7f1u); SPILL(); f_46c732(); if (g_unwind) return; RELOAD();
L_47c7f1: /* 47c7f1: cmp byte ptr [ebp + 0x11], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x11u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c7f5: je 0x47c7db */
  if (zf) goto L_47c7db;
L_47c7f7: /* 47c7f7: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47c7fa: jne 0x47c9f6 */
  if (!zf) goto L_47c9f6;
L_47c800: /* 47c800: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c804: jne 0x47c80e */
  if (!zf) goto L_47c80e;
L_47c806: /* 47c806: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47c809: call 0x46c732 */
  esp -= 4; W32(esp, 0x47c80eu); SPILL(); f_46c732(); if (g_unwind) return; RELOAD();
L_47c80e: /* 47c80e: cmp byte ptr [ebp + 0x11], 0x30 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x11u))); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 47c812: jl 0x47c871 */
  if ((sf != of)) goto L_47c871;
L_47c814: /* 47c814: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c818: jne 0x47c822 */
  if (!zf) goto L_47c822;
L_47c81a: /* 47c81a: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47c81d: call 0x46c732 */
  esp -= 4; W32(esp, 0x47c822u); SPILL(); f_46c732(); if (g_unwind) return; RELOAD();
L_47c822: /* 47c822: cmp byte ptr [ebp + 0x11], 0x39 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x11u))); uint8_t b = (uint8_t)(0x39u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 47c826: jg 0x47c871 */
  if ((!zf && sf == of)) goto L_47c871;
L_47c828: /* 47c828: cmp dword ptr [ebp - 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47c82c: je 0x47c850 */
  if (zf) goto L_47c850;
L_47c82e: /* 47c82e: cmp dword ptr [ebp - 4], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47c832: je 0x47c850 */
  if (zf) goto L_47c850;
L_47c834: /* 47c834: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 47c837: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c838: push 0x1f */
  { uint32_t v = 0x1fu; esp -= 4; W32(esp, v); }
/* 47c83a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47c83c: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47c83f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c840: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47c843: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c844: call 0x4789ee */
  esp -= 4; W32(esp, 0x47c849u); SPILL(); f_4789ee(); if (g_unwind) return; RELOAD();
/* 47c849: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47c84c: or dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 47c84e: jmp 0x47c8b0 */
  goto L_47c8b0;
L_47c850: /* 47c850: lea edi, [ebx + 0x10] */
  edi = (uint32_t)(ebx + 0x10u);
/* 47c853: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47c854: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 47c856: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47c858: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47c85b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c85c: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47c85f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c860: call 0x4789ee */
  esp -= 4; W32(esp, 0x47c865u); SPILL(); f_4789ee(); if (g_unwind) return; RELOAD();
/* 47c865: or dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 47c867: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47c86a: dec dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(edi), r);
  }
/* 47c86c: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
/* 47c86f: jmp 0x47c8b0 */
  goto L_47c8b0;
L_47c871: /* 47c871: cmp dword ptr [ebp - 4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47c875: jne 0x47c87c */
  if (!zf) goto L_47c87c;
L_47c877: /* 47c877: or dword ptr [esi], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 47c87a: jmp 0x47c8b0 */
  goto L_47c8b0;
L_47c87c: /* 47c87c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47c87d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c87e: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47c881: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 47c884: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47c887: mov ecx, edi */
  ecx = edi;
/* 47c889: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 47c88c: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47c88f: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47c892: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c893: call 0x4696e7 */
  esp -= 4; W32(esp, 0x47c898u); SPILL(); f_4696e7(); if (g_unwind) return; RELOAD();
/* 47c898: cmp dword ptr [ebp - 4], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47c89c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47c89e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47c8a1: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 47c8a4: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 47c8a7: jne 0x47c8b0 */
  if (!zf) goto L_47c8b0;
L_47c8a9: /* 47c8a9: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
L_47c8b0: /* 47c8b0: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47c8b3: jne 0x47c9f6 */
  if (!zf) goto L_47c9f6;
L_47c8b9: /* 47c8b9: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c8bd: jne 0x47c8c7 */
  if (!zf) goto L_47c8c7;
L_47c8bf: /* 47c8bf: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47c8c2: call 0x46c732 */
  esp -= 4; W32(esp, 0x47c8c7u); SPILL(); f_46c732(); if (g_unwind) return; RELOAD();
L_47c8c7: /* 47c8c7: cmp byte ptr [ebp + 0x11], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x11u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c8cb: jne 0x47c8d7 */
  if (!zf) goto L_47c8d7;
L_47c8cd: /* 47c8cd: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47c8d0: call 0x46c710 */
  esp -= 4; W32(esp, 0x47c8d5u); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
/* 47c8d5: jmp 0x47c8b9 */
  goto L_47c8b9;
L_47c8d7: /* 47c8d7: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c8db: jne 0x47c8e5 */
  if (!zf) goto L_47c8e5;
L_47c8dd: /* 47c8dd: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47c8e0: call 0x46c732 */
  esp -= 4; W32(esp, 0x47c8e5u); SPILL(); f_46c732(); if (g_unwind) return; RELOAD();
L_47c8e5: /* 47c8e5: cmp byte ptr [ebp + 0x11], 0x3a */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x11u))); uint8_t b = (uint8_t)(0x3au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c8e9: je 0x47c913 */
  if (zf) goto L_47c913;
L_47c8eb: /* 47c8eb: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c8ef: jne 0x47c8f9 */
  if (!zf) goto L_47c8f9;
L_47c8f1: /* 47c8f1: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47c8f4: call 0x46c732 */
  esp -= 4; W32(esp, 0x47c8f9u); SPILL(); f_46c732(); if (g_unwind) return; RELOAD();
L_47c8f9: /* 47c8f9: cmp byte ptr [ebp + 0x11], 0x2c */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x11u))); uint8_t b = (uint8_t)(0x2cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c8fd: je 0x47c913 */
  if (zf) goto L_47c913;
L_47c8ff: /* 47c8ff: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c903: jne 0x47c90d */
  if (!zf) goto L_47c90d;
L_47c905: /* 47c905: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47c908: call 0x46c732 */
  esp -= 4; W32(esp, 0x47c90du); SPILL(); f_46c732(); if (g_unwind) return; RELOAD();
L_47c90d: /* 47c90d: cmp byte ptr [ebp + 0x11], 0x2f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x11u))); uint8_t b = (uint8_t)(0x2fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c911: jne 0x47c91b */
  if (!zf) goto L_47c91b;
L_47c913: /* 47c913: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47c916: call 0x46c710 */
  esp -= 4; W32(esp, 0x47c91bu); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
L_47c91b: /* 47c91b: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c91f: jne 0x47c929 */
  if (!zf) goto L_47c929;
L_47c921: /* 47c921: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47c924: call 0x46c732 */
  esp -= 4; W32(esp, 0x47c929u); SPILL(); f_46c732(); if (g_unwind) return; RELOAD();
L_47c929: /* 47c929: cmp byte ptr [ebp + 0x11], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x11u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c92d: je 0x47c913 */
  if (zf) goto L_47c913;
L_47c92f: /* 47c92f: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47c932: jne 0x47c9f6 */
  if (!zf) goto L_47c9f6;
L_47c938: /* 47c938: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c93c: jne 0x47c946 */
  if (!zf) goto L_47c946;
L_47c93e: /* 47c93e: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47c941: call 0x46c732 */
  esp -= 4; W32(esp, 0x47c946u); SPILL(); f_46c732(); if (g_unwind) return; RELOAD();
L_47c946: /* 47c946: cmp byte ptr [ebp + 0x11], 0x30 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x11u))); uint8_t b = (uint8_t)(0x30u);
  uint8_t r = (uint8_t)(a - b);
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 47c94a: jl 0x47c9c4 */
  if ((sf != of)) goto L_47c9c4;
L_47c94c: /* 47c94c: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47c950: jne 0x47c95a */
  if (!zf) goto L_47c95a;
L_47c952: /* 47c952: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47c955: call 0x46c732 */
  esp -= 4; W32(esp, 0x47c95au); SPILL(); f_46c732(); if (g_unwind) return; RELOAD();
L_47c95a: /* 47c95a: cmp byte ptr [ebp + 0x11], 0x39 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x11u))); uint8_t b = (uint8_t)(0x39u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 7) & 1;
  }
/* 47c95e: jg 0x47c9c4 */
  if ((!zf && sf == of)) goto L_47c9c4;
L_47c960: /* 47c960: cmp dword ptr [ebp - 4], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47c964: jne 0x47c984 */
  if (!zf) goto L_47c984;
L_47c966: /* 47c966: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 47c969: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47c96a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 47c96c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47c96e: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47c971: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c972: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47c975: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c976: call 0x4789ee */
  esp -= 4; W32(esp, 0x47c97bu); SPILL(); f_4789ee(); if (g_unwind) return; RELOAD();
/* 47c97b: or dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 47c97d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47c980: dec dword ptr [ebx] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebx), r);
  }
/* 47c982: jmp 0x47c9f6 */
  goto L_47c9f6;
L_47c984: /* 47c984: cmp dword ptr [ebp - 4], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47c988: jne 0x47c9a6 */
  if (!zf) goto L_47c9a6;
L_47c98a: /* 47c98a: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 47c98d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47c98e: push 0x1f */
  { uint32_t v = 0x1fu; esp -= 4; W32(esp, v); }
/* 47c990: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47c992: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47c995: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c996: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47c999: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c99a: call 0x4789ee */
  esp -= 4; W32(esp, 0x47c99fu); SPILL(); f_4789ee(); if (g_unwind) return; RELOAD();
/* 47c99f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47c9a2: or dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 47c9a4: jmp 0x47c9f6 */
  goto L_47c9f6;
L_47c9a6: /* 47c9a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47c9a7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c9a8: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47c9ab: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 47c9ae: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47c9b1: mov ecx, edi */
  ecx = edi;
/* 47c9b3: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 47c9b6: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47c9b9: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47c9bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c9bd: call 0x46885d */
  esp -= 4; W32(esp, 0x47c9c2u); SPILL(); f_46885d(); if (g_unwind) return; RELOAD();
/* 47c9c2: jmp 0x47c9eb */
  goto L_47c9eb;
L_47c9c4: /* 47c9c4: cmp dword ptr [ebp - 4], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47c9c8: je 0x47c9cf */
  if (zf) goto L_47c9cf;
L_47c9ca: /* 47c9ca: or dword ptr [esi], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 47c9cd: jmp 0x47c9f6 */
  goto L_47c9f6;
L_47c9cf: /* 47c9cf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47c9d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47c9d1: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47c9d4: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* 47c9d7: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47c9da: mov ecx, edi */
  ecx = edi;
/* 47c9dc: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 47c9df: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47c9e2: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47c9e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c9e6: call 0x4696e7 */
  esp -= 4; W32(esp, 0x47c9ebu); SPILL(); f_4696e7(); if (g_unwind) return; RELOAD();
L_47c9eb: /* 47c9eb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47c9ed: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47c9f0: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 47c9f3: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_47c9f6: /* 47c9f6: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47c9f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47c9fa: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47c9fd: call 0x46e745 */
  esp -= 4; W32(esp, 0x47ca02u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47ca02: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47ca04: je 0x47ca09 */
  if (zf) goto L_47ca09;
L_47ca06: /* 47ca06: or dword ptr [esi], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
L_47ca09: /* 47ca09: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47ca0c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47ca0f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47ca10: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47ca12: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47ca15: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47ca16: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47ca19: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47ca1a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47ca1b: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47ca1e(void) {
  LOAD_REGS();
L_47ca1e: /* 47ca1e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47ca1f: mov ebp, esp */
  ebp = esp;
/* 47ca21: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47ca22: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47ca26: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 47ca29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ca2a: push 0x7f3 */
  { uint32_t v = 0x7f3u; esp -= 4; W32(esp, v); }
/* 47ca2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47ca31: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47ca34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ca35: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47ca38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ca39: call 0x4789ee */
  esp -= 4; W32(esp, 0x47ca3eu); SPILL(); f_4789ee(); if (g_unwind) return; RELOAD();
/* 47ca3e: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 47ca41: or dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx), r);
  }
/* 47ca43: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 47ca45: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47ca48: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47ca4a: jne 0x47ca69 */
  if (!zf) goto L_47ca69;
L_47ca4c: /* 47ca4c: mov edx, 0x76c */
  edx = 0x76cu;
/* 47ca51: cmp dword ptr [ebp - 4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47ca54: jl 0x47ca5b */
  if ((sf != of)) goto L_47ca5b;
L_47ca56: /* 47ca56: sub dword ptr [ebp - 4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47ca59: jmp 0x47ca69 */
  goto L_47ca69;
L_47ca5b: /* 47ca5b: cmp dword ptr [ebp - 4], 0x87 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x87u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47ca62: jle 0x47ca69 */
  if ((zf || sf != of)) goto L_47ca69;
L_47ca64: /* 47ca64: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 47ca67: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_47ca69: /* 47ca69: test byte ptr [ecx], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47ca6c: jne 0x47ca77 */
  if (!zf) goto L_47ca77;
L_47ca6e: /* 47ca6e: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47ca71: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 47ca74: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
L_47ca77: /* 47ca77: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47ca7a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47ca7d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47ca7f: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47ca82: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47ca85: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47ca86: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47ca89(void) {
  LOAD_REGS();
L_47ca89: /* 47ca89: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47ca8a: mov ebp, esp */
  ebp = esp;
/* 47ca8c: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47ca8f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47ca90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47ca91: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47ca92: mov edi, ecx */
  edi = ecx;
/* 47ca94: push 0x30 */
  { uint32_t v = 0x30u; esp -= 4; W32(esp, v); }
/* 47ca96: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 47ca99: call 0x461d6f */
  esp -= 4; W32(esp, 0x47ca9eu); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47ca9e: push 0x39 */
  { uint32_t v = 0x39u; esp -= 4; W32(esp, v); }
/* 47caa0: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* 47caa3: call 0x461d6f */
  esp -= 4; W32(esp, 0x47caa8u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47caa8: push 0x3a */
  { uint32_t v = 0x3au; esp -= 4; W32(esp, v); }
/* 47caaa: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47caad: call 0x461d6f */
  esp -= 4; W32(esp, 0x47cab2u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47cab2: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 47cab4: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 47cab7: call 0x461d6f */
  esp -= 4; W32(esp, 0x47cabcu); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47cabc: push 0x2f */
  { uint32_t v = 0x2fu; esp -= 4; W32(esp, v); }
/* 47cabe: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 47cac1: call 0x461d6f */
  esp -= 4; W32(esp, 0x47cac6u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47cac6: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 47cac8: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 47cacb: call 0x461d6f */
  esp -= 4; W32(esp, 0x47cad0u); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47cad0: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47cad3: mov ecx, edi */
  ecx = edi;
/* 47cad5: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 47cad8: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 47cada: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x47caddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47cadd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47cadf: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 47cae2: jne 0x47caeb */
  if (!zf) goto L_47caeb;
L_47cae4: /* 47cae4: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
L_47caeb: /* 47caeb: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47caef: jne 0x47caf9 */
  if (!zf) goto L_47caf9;
L_47caf1: /* 47caf1: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47caf4: call 0x46c779 */
  esp -= 4; W32(esp, 0x47caf9u); SPILL(); f_46c779(); if (g_unwind) return; RELOAD();
L_47caf9: /* 47caf9: mov ax, word ptr [ebp + 0x12] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x12u))) & 0xffffu);
/* 47cafd: cmp ax, word ptr [ebp - 0xc] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebp + 0xfffffff4u)));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 47cb01: jb 0x47cb92 */
  if (cf) goto L_47cb92;
L_47cb07: /* 47cb07: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47cb0b: jne 0x47cb15 */
  if (!zf) goto L_47cb15;
L_47cb0d: /* 47cb0d: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47cb10: call 0x46c779 */
  esp -= 4; W32(esp, 0x47cb15u); SPILL(); f_46c779(); if (g_unwind) return; RELOAD();
L_47cb15: /* 47cb15: mov ax, word ptr [ebp + 0x12] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x12u))) & 0xffffu);
/* 47cb19: cmp word ptr [ebp - 0x10], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffff0u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 47cb1d: jb 0x47cb92 */
  if (cf) goto L_47cb92;
L_47cb1f: /* 47cb1f: cmp dword ptr [ebp - 4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47cb23: mov ebx, dword ptr [ebp + 0x24] */
  ebx = R32((uint32_t)(ebp + 0x24u));
/* 47cb26: jne 0x47cb4c */
  if (!zf) goto L_47cb4c;
L_47cb28: /* 47cb28: lea edi, [ebx + 0x10] */
  edi = (uint32_t)(ebx + 0x10u);
/* 47cb2b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47cb2c: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 47cb2e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47cb30: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47cb33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47cb34: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47cb37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47cb38: call 0x478b24 */
  esp -= 4; W32(esp, 0x47cb3du); SPILL(); f_478b24(); if (g_unwind) return; RELOAD();
/* 47cb3d: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 47cb40: or dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 47cb42: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47cb45: dec dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(edi), r);
  }
/* 47cb47: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 47cb4a: jmp 0x47cbc6 */
  goto L_47cbc6;
L_47cb4c: /* 47cb4c: cmp dword ptr [ebp - 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47cb50: jne 0x47cb71 */
  if (!zf) goto L_47cb71;
L_47cb52: /* 47cb52: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 47cb55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47cb56: push 0x1f */
  { uint32_t v = 0x1fu; esp -= 4; W32(esp, v); }
/* 47cb58: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47cb5a: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47cb5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47cb5e: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47cb61: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47cb62: call 0x478b24 */
  esp -= 4; W32(esp, 0x47cb67u); SPILL(); f_478b24(); if (g_unwind) return; RELOAD();
/* 47cb67: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 47cb6a: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47cb6d: or dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 47cb6f: jmp 0x47cbc6 */
  goto L_47cbc6;
L_47cb71: /* 47cb71: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 47cb74: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47cb75: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47cb76: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47cb79: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 47cb7c: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47cb7f: mov ecx, edi */
  ecx = edi;
/* 47cb81: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 47cb84: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47cb87: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47cb8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47cb8b: call 0x46885d */
  esp -= 4; W32(esp, 0x47cb90u); SPILL(); f_46885d(); if (g_unwind) return; RELOAD();
/* 47cb90: jmp 0x47cbbb */
  goto L_47cbbb;
L_47cb92: /* 47cb92: mov ebx, dword ptr [ebp + 0x24] */
  ebx = R32((uint32_t)(ebp + 0x24u));
/* 47cb95: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 47cb98: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47cb99: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47cb9a: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47cb9d: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 47cba0: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47cba3: mov ecx, edi */
  ecx = edi;
/* 47cba5: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 47cba8: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47cbab: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47cbae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47cbaf: call 0x4696e7 */
  esp -= 4; W32(esp, 0x47cbb4u); SPILL(); f_4696e7(); if (g_unwind) return; RELOAD();
/* 47cbb4: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
L_47cbbb: /* 47cbbb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47cbbd: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47cbc0: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 47cbc3: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_47cbc6: /* 47cbc6: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47cbc9: jne 0x47ce7b */
  if (!zf) goto L_47ce7b;
L_47cbcf: /* 47cbcf: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47cbd3: jne 0x47cbdd */
  if (!zf) goto L_47cbdd;
L_47cbd5: /* 47cbd5: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47cbd8: call 0x46c779 */
  esp -= 4; W32(esp, 0x47cbddu); SPILL(); f_46c779(); if (g_unwind) return; RELOAD();
L_47cbdd: /* 47cbdd: mov ax, word ptr [ebp + 0x12] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x12u))) & 0xffffu);
/* 47cbe1: cmp ax, word ptr [ebp - 8] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebp + 0xfffffff8u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47cbe5: jne 0x47cbf1 */
  if (!zf) goto L_47cbf1;
L_47cbe7: /* 47cbe7: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47cbea: call 0x46c756 */
  esp -= 4; W32(esp, 0x47cbefu); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 47cbef: jmp 0x47cbcf */
  goto L_47cbcf;
L_47cbf1: /* 47cbf1: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47cbf5: jne 0x47cbff */
  if (!zf) goto L_47cbff;
L_47cbf7: /* 47cbf7: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47cbfa: call 0x46c779 */
  esp -= 4; W32(esp, 0x47cbffu); SPILL(); f_46c779(); if (g_unwind) return; RELOAD();
L_47cbff: /* 47cbff: mov ax, word ptr [ebp + 0x12] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x12u))) & 0xffffu);
/* 47cc03: cmp ax, word ptr [ebp - 0x18] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebp + 0xffffffe8u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47cc07: je 0x47cc39 */
  if (zf) goto L_47cc39;
L_47cc09: /* 47cc09: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47cc0d: jne 0x47cc17 */
  if (!zf) goto L_47cc17;
L_47cc0f: /* 47cc0f: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47cc12: call 0x46c779 */
  esp -= 4; W32(esp, 0x47cc17u); SPILL(); f_46c779(); if (g_unwind) return; RELOAD();
L_47cc17: /* 47cc17: mov ax, word ptr [ebp + 0x12] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x12u))) & 0xffffu);
/* 47cc1b: cmp ax, word ptr [ebp - 0x1c] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebp + 0xffffffe4u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47cc1f: je 0x47cc39 */
  if (zf) goto L_47cc39;
L_47cc21: /* 47cc21: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47cc25: jne 0x47cc2f */
  if (!zf) goto L_47cc2f;
L_47cc27: /* 47cc27: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47cc2a: call 0x46c779 */
  esp -= 4; W32(esp, 0x47cc2fu); SPILL(); f_46c779(); if (g_unwind) return; RELOAD();
L_47cc2f: /* 47cc2f: mov ax, word ptr [ebp + 0x12] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x12u))) & 0xffffu);
/* 47cc33: cmp ax, word ptr [ebp - 0x20] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebp + 0xffffffe0u)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47cc37: jne 0x47cc41 */
  if (!zf) goto L_47cc41;
L_47cc39: /* 47cc39: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47cc3c: call 0x46c756 */
  esp -= 4; W32(esp, 0x47cc41u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
L_47cc41: /* 47cc41: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47cc45: jne 0x47cc4f */
  if (!zf) goto L_47cc4f;
L_47cc47: /* 47cc47: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47cc4a: call 0x46c779 */
  esp -= 4; W32(esp, 0x47cc4fu); SPILL(); f_46c779(); if (g_unwind) return; RELOAD();
L_47cc4f: /* 47cc4f: mov ax, word ptr [ebp - 8] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u))) & 0xffffu);
/* 47cc53: cmp word ptr [ebp + 0x12], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x12u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47cc57: je 0x47cc39 */
  if (zf) goto L_47cc39;
L_47cc59: /* 47cc59: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47cc5c: jne 0x47ce7b */
  if (!zf) goto L_47ce7b;
L_47cc62: /* 47cc62: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47cc66: jne 0x47cc70 */
  if (!zf) goto L_47cc70;
L_47cc68: /* 47cc68: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47cc6b: call 0x46c779 */
  esp -= 4; W32(esp, 0x47cc70u); SPILL(); f_46c779(); if (g_unwind) return; RELOAD();
L_47cc70: /* 47cc70: mov ax, word ptr [ebp + 0x12] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x12u))) & 0xffffu);
/* 47cc74: cmp ax, word ptr [ebp - 0xc] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebp + 0xfffffff4u)));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 47cc78: jb 0x47ccda */
  if (cf) goto L_47ccda;
L_47cc7a: /* 47cc7a: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47cc7e: jne 0x47cc88 */
  if (!zf) goto L_47cc88;
L_47cc80: /* 47cc80: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47cc83: call 0x46c779 */
  esp -= 4; W32(esp, 0x47cc88u); SPILL(); f_46c779(); if (g_unwind) return; RELOAD();
L_47cc88: /* 47cc88: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47cc8b: cmp ax, word ptr [ebp + 0x12] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebp + 0x12u)));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 47cc8f: jb 0x47ccda */
  if (cf) goto L_47ccda;
L_47cc91: /* 47cc91: cmp dword ptr [ebp - 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47cc95: je 0x47ccb9 */
  if (zf) goto L_47ccb9;
L_47cc97: /* 47cc97: cmp dword ptr [ebp - 4], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47cc9b: je 0x47ccb9 */
  if (zf) goto L_47ccb9;
L_47cc9d: /* 47cc9d: lea eax, [ebx + 0xc] */
  eax = (uint32_t)(ebx + 0xcu);
/* 47cca0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47cca1: push 0x1f */
  { uint32_t v = 0x1fu; esp -= 4; W32(esp, v); }
/* 47cca3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47cca5: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47cca8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47cca9: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47ccac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ccad: call 0x478b24 */
  esp -= 4; W32(esp, 0x47ccb2u); SPILL(); f_478b24(); if (g_unwind) return; RELOAD();
/* 47ccb2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47ccb5: or dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 47ccb7: jmp 0x47cd19 */
  goto L_47cd19;
L_47ccb9: /* 47ccb9: lea edi, [ebx + 0x10] */
  edi = (uint32_t)(ebx + 0x10u);
/* 47ccbc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47ccbd: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 47ccbf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47ccc1: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47ccc4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ccc5: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47ccc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ccc9: call 0x478b24 */
  esp -= 4; W32(esp, 0x47ccceu); SPILL(); f_478b24(); if (g_unwind) return; RELOAD();
/* 47ccce: or dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 47ccd0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47ccd3: dec dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(edi), r);
  }
/* 47ccd5: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 47ccd8: jmp 0x47cd19 */
  goto L_47cd19;
L_47ccda: /* 47ccda: cmp dword ptr [ebp - 4], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47ccde: jne 0x47cce5 */
  if (!zf) goto L_47cce5;
L_47cce0: /* 47cce0: or dword ptr [esi], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 47cce3: jmp 0x47cd19 */
  goto L_47cd19;
L_47cce5: /* 47cce5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47cce6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47cce7: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47ccea: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 47cced: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47ccf0: mov ecx, edi */
  ecx = edi;
/* 47ccf2: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 47ccf5: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47ccf8: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47ccfb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ccfc: call 0x4696e7 */
  esp -= 4; W32(esp, 0x47cd01u); SPILL(); f_4696e7(); if (g_unwind) return; RELOAD();
/* 47cd01: cmp dword ptr [ebp - 4], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47cd05: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47cd07: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47cd0a: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 47cd0d: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 47cd10: jne 0x47cd19 */
  if (!zf) goto L_47cd19;
L_47cd12: /* 47cd12: mov dword ptr [ebp - 4], 3 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3u);
L_47cd19: /* 47cd19: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47cd1c: jne 0x47ce7b */
  if (!zf) goto L_47ce7b;
L_47cd22: /* 47cd22: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47cd26: jne 0x47cd30 */
  if (!zf) goto L_47cd30;
L_47cd28: /* 47cd28: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47cd2b: call 0x46c779 */
  esp -= 4; W32(esp, 0x47cd30u); SPILL(); f_46c779(); if (g_unwind) return; RELOAD();
L_47cd30: /* 47cd30: mov ax, word ptr [ebp - 8] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u))) & 0xffffu);
/* 47cd34: cmp word ptr [ebp + 0x12], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x12u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47cd38: jne 0x47cd44 */
  if (!zf) goto L_47cd44;
L_47cd3a: /* 47cd3a: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47cd3d: call 0x46c756 */
  esp -= 4; W32(esp, 0x47cd42u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 47cd42: jmp 0x47cd22 */
  goto L_47cd22;
L_47cd44: /* 47cd44: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47cd48: jne 0x47cd52 */
  if (!zf) goto L_47cd52;
L_47cd4a: /* 47cd4a: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47cd4d: call 0x46c779 */
  esp -= 4; W32(esp, 0x47cd52u); SPILL(); f_46c779(); if (g_unwind) return; RELOAD();
L_47cd52: /* 47cd52: mov ax, word ptr [ebp - 0x18] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffe8u))) & 0xffffu);
/* 47cd56: cmp word ptr [ebp + 0x12], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x12u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47cd5a: je 0x47cd8c */
  if (zf) goto L_47cd8c;
L_47cd5c: /* 47cd5c: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47cd60: jne 0x47cd6a */
  if (!zf) goto L_47cd6a;
L_47cd62: /* 47cd62: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47cd65: call 0x46c779 */
  esp -= 4; W32(esp, 0x47cd6au); SPILL(); f_46c779(); if (g_unwind) return; RELOAD();
L_47cd6a: /* 47cd6a: mov ax, word ptr [ebp - 0x1c] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffe4u))) & 0xffffu);
/* 47cd6e: cmp word ptr [ebp + 0x12], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x12u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47cd72: je 0x47cd8c */
  if (zf) goto L_47cd8c;
L_47cd74: /* 47cd74: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47cd78: jne 0x47cd82 */
  if (!zf) goto L_47cd82;
L_47cd7a: /* 47cd7a: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47cd7d: call 0x46c779 */
  esp -= 4; W32(esp, 0x47cd82u); SPILL(); f_46c779(); if (g_unwind) return; RELOAD();
L_47cd82: /* 47cd82: mov ax, word ptr [ebp - 0x20] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffe0u))) & 0xffffu);
/* 47cd86: cmp word ptr [ebp + 0x12], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x12u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47cd8a: jne 0x47cd94 */
  if (!zf) goto L_47cd94;
L_47cd8c: /* 47cd8c: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47cd8f: call 0x46c756 */
  esp -= 4; W32(esp, 0x47cd94u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
L_47cd94: /* 47cd94: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47cd98: jne 0x47cda2 */
  if (!zf) goto L_47cda2;
L_47cd9a: /* 47cd9a: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47cd9d: call 0x46c779 */
  esp -= 4; W32(esp, 0x47cda2u); SPILL(); f_46c779(); if (g_unwind) return; RELOAD();
L_47cda2: /* 47cda2: mov ax, word ptr [ebp - 8] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xfffffff8u))) & 0xffffu);
/* 47cda6: cmp word ptr [ebp + 0x12], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x12u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47cdaa: je 0x47cd8c */
  if (zf) goto L_47cd8c;
L_47cdac: /* 47cdac: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47cdaf: jne 0x47ce7b */
  if (!zf) goto L_47ce7b;
L_47cdb5: /* 47cdb5: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47cdb9: jne 0x47cdc3 */
  if (!zf) goto L_47cdc3;
L_47cdbb: /* 47cdbb: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47cdbe: call 0x46c779 */
  esp -= 4; W32(esp, 0x47cdc3u); SPILL(); f_46c779(); if (g_unwind) return; RELOAD();
L_47cdc3: /* 47cdc3: mov ax, word ptr [ebp - 0xc] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xfffffff4u))) & 0xffffu);
/* 47cdc7: cmp word ptr [ebp + 0x12], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x12u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 47cdcb: jb 0x47ce49 */
  if (cf) goto L_47ce49;
L_47cdcd: /* 47cdcd: cmp byte ptr [ebp + 0x10], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47cdd1: jne 0x47cddb */
  if (!zf) goto L_47cddb;
L_47cdd3: /* 47cdd3: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47cdd6: call 0x46c779 */
  esp -= 4; W32(esp, 0x47cddbu); SPILL(); f_46c779(); if (g_unwind) return; RELOAD();
L_47cddb: /* 47cddb: mov ax, word ptr [ebp + 0x12] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x12u))) & 0xffffu);
/* 47cddf: cmp word ptr [ebp - 0x10], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xfffffff0u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 47cde3: jb 0x47ce49 */
  if (cf) goto L_47ce49;
L_47cde5: /* 47cde5: cmp dword ptr [ebp - 4], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47cde9: jne 0x47ce09 */
  if (!zf) goto L_47ce09;
L_47cdeb: /* 47cdeb: lea edi, [ebx + 0x10] */
  edi = (uint32_t)(ebx + 0x10u);
/* 47cdee: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47cdef: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 47cdf1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47cdf3: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47cdf6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47cdf7: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47cdfa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47cdfb: call 0x478b24 */
  esp -= 4; W32(esp, 0x47ce00u); SPILL(); f_478b24(); if (g_unwind) return; RELOAD();
/* 47ce00: or dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 47ce02: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47ce05: dec dword ptr [edi] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(edi), r);
  }
/* 47ce07: jmp 0x47ce7b */
  goto L_47ce7b;
L_47ce09: /* 47ce09: cmp dword ptr [ebp - 4], 3 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47ce0d: jne 0x47ce2b */
  if (!zf) goto L_47ce2b;
L_47ce0f: /* 47ce0f: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 47ce12: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47ce13: push 0x1f */
  { uint32_t v = 0x1fu; esp -= 4; W32(esp, v); }
/* 47ce15: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47ce17: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47ce1a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ce1b: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47ce1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ce1f: call 0x478b24 */
  esp -= 4; W32(esp, 0x47ce24u); SPILL(); f_478b24(); if (g_unwind) return; RELOAD();
/* 47ce24: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47ce27: or dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 47ce29: jmp 0x47ce7b */
  goto L_47ce7b;
L_47ce2b: /* 47ce2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47ce2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47ce2d: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47ce30: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 47ce33: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47ce36: mov ecx, edi */
  ecx = edi;
/* 47ce38: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 47ce3b: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47ce3e: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47ce41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ce42: call 0x46885d */
  esp -= 4; W32(esp, 0x47ce47u); SPILL(); f_46885d(); if (g_unwind) return; RELOAD();
/* 47ce47: jmp 0x47ce70 */
  goto L_47ce70;
L_47ce49: /* 47ce49: cmp dword ptr [ebp - 4], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47ce4d: je 0x47ce54 */
  if (zf) goto L_47ce54;
L_47ce4f: /* 47ce4f: or dword ptr [esi], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 47ce52: jmp 0x47ce7b */
  goto L_47ce7b;
L_47ce54: /* 47ce54: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47ce55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47ce56: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47ce59: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 47ce5c: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 47ce5f: mov ecx, edi */
  ecx = edi;
/* 47ce61: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 47ce64: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47ce67: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47ce6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ce6b: call 0x4696e7 */
  esp -= 4; W32(esp, 0x47ce70u); SPILL(); f_4696e7(); if (g_unwind) return; RELOAD();
L_47ce70: /* 47ce70: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47ce72: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47ce75: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 47ce78: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_47ce7b: /* 47ce7b: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47ce7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ce7f: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47ce82: call 0x46e77f */
  esp -= 4; W32(esp, 0x47ce87u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47ce87: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47ce89: je 0x47ce8e */
  if (zf) goto L_47ce8e;
L_47ce8b: /* 47ce8b: or dword ptr [esi], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
L_47ce8e: /* 47ce8e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47ce91: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47ce94: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47ce95: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47ce97: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47ce9a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47ce9b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47ce9e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47ce9f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47cea0: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47cea3(void) {
  LOAD_REGS();
L_47cea3: /* 47cea3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47cea4: mov ebp, esp */
  ebp = esp;
/* 47cea6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47cea7: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47ceab: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 47ceae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ceaf: push 0x7f3 */
  { uint32_t v = 0x7f3u; esp -= 4; W32(esp, v); }
/* 47ceb4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47ceb6: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47ceb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ceba: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47cebd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47cebe: call 0x478b24 */
  esp -= 4; W32(esp, 0x47cec3u); SPILL(); f_478b24(); if (g_unwind) return; RELOAD();
/* 47cec3: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 47cec6: or dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ecx), r);
  }
/* 47cec8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 47ceca: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47cecd: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47cecf: jne 0x47ceee */
  if (!zf) goto L_47ceee;
L_47ced1: /* 47ced1: mov edx, 0x76c */
  edx = 0x76cu;
/* 47ced6: cmp dword ptr [ebp - 4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47ced9: jl 0x47cee0 */
  if ((sf != of)) goto L_47cee0;
L_47cedb: /* 47cedb: sub dword ptr [ebp - 4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47cede: jmp 0x47ceee */
  goto L_47ceee;
L_47cee0: /* 47cee0: cmp dword ptr [ebp - 4], 0x87 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x87u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47cee7: jle 0x47ceee */
  if ((zf || sf != of)) goto L_47ceee;
L_47cee9: /* 47cee9: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 47ceec: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_47ceee: /* 47ceee: test byte ptr [ecx], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47cef1: jne 0x47cefc */
  if (!zf) goto L_47cefc;
L_47cef3: /* 47cef3: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47cef6: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 47cef9: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
L_47cefc: /* 47cefc: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47ceff: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47cf02: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47cf04: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47cf07: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47cf0a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47cf0b: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47cf0e(void) {
  LOAD_REGS();
L_47cf0e: /* 47cf0e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47cf0f: mov ebp, esp */
  ebp = esp;
/* 47cf11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47cf12: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47cf13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47cf14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47cf15: push 0x3a */
  { uint32_t v = 0x3au; esp -= 4; W32(esp, v); }
/* 47cf17: call 0x461d6f */
  esp -= 4; W32(esp, 0x47cf1cu); SPILL(); f_461d6f(); if (g_unwind) return; RELOAD();
/* 47cf1c: mov edi, dword ptr [ebp + 0x24] */
  edi = R32((uint32_t)(ebp + 0x24u));
/* 47cf1f: xor ebx, ebx */
  ebx = 0;
/* 47cf21: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 47cf24: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* 47cf27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47cf28: push 0x17 */
  { uint32_t v = 0x17u; esp -= 4; W32(esp, v); }
/* 47cf2a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47cf2b: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47cf2e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47cf2f: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47cf32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47cf33: call 0x478b24 */
  esp -= 4; W32(esp, 0x47cf38u); SPILL(); f_478b24(); if (g_unwind) return; RELOAD();
/* 47cf38: mov esi, dword ptr [ebp + 0x20] */
  esi = R32((uint32_t)(ebp + 0x20u));
/* 47cf3b: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47cf3e: or dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  zf = (r) == 0;
  W32((uint32_t)(esi), r);
  }
/* 47cf40: jne 0x47cf7c */
  if (!zf) goto L_47cf7c;
L_47cf42: /* 47cf42: cmp byte ptr [ebp + 0x10], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47cf45: jne 0x47cf4f */
  if (!zf) goto L_47cf4f;
L_47cf47: /* 47cf47: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47cf4a: call 0x46c779 */
  esp -= 4; W32(esp, 0x47cf4fu); SPILL(); f_46c779(); if (g_unwind) return; RELOAD();
L_47cf4f: /* 47cf4f: mov ax, word ptr [ebp + 0x12] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0x12u))) & 0xffffu);
/* 47cf53: cmp ax, word ptr [ebp - 4] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebp + 0xfffffffcu)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47cf57: jne 0x47cf7c */
  if (!zf) goto L_47cf7c;
L_47cf59: /* 47cf59: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47cf5c: call 0x46c756 */
  esp -= 4; W32(esp, 0x47cf61u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 47cf61: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* 47cf64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47cf65: push 0x3b */
  { uint32_t v = 0x3bu; esp -= 4; W32(esp, v); }
/* 47cf67: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47cf68: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47cf6b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47cf6c: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47cf6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47cf70: call 0x478b24 */
  esp -= 4; W32(esp, 0x47cf75u); SPILL(); f_478b24(); if (g_unwind) return; RELOAD();
/* 47cf75: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47cf78: or dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 47cf7a: jmp 0x47cf7f */
  goto L_47cf7f;
L_47cf7c: /* 47cf7c: or dword ptr [esi], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
L_47cf7f: /* 47cf7f: cmp dword ptr [esi], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47cf81: jne 0x47cfba */
  if (!zf) goto L_47cfba;
L_47cf83: /* 47cf83: cmp byte ptr [ebp + 0x10], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x10u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47cf86: jne 0x47cf90 */
  if (!zf) goto L_47cf90;
L_47cf88: /* 47cf88: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47cf8b: call 0x46c779 */
  esp -= 4; W32(esp, 0x47cf90u); SPILL(); f_46c779(); if (g_unwind) return; RELOAD();
L_47cf90: /* 47cf90: mov ax, word ptr [ebp - 4] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xfffffffcu))) & 0xffffu);
/* 47cf94: cmp word ptr [ebp + 0x12], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0x12u))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47cf98: jne 0x47cfba */
  if (!zf) goto L_47cfba;
L_47cf9a: /* 47cf9a: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47cf9d: call 0x46c756 */
  esp -= 4; W32(esp, 0x47cfa2u); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 47cfa2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47cfa3: push 0x3b */
  { uint32_t v = 0x3bu; esp -= 4; W32(esp, v); }
/* 47cfa5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47cfa6: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47cfa9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47cfaa: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47cfad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47cfae: call 0x478b24 */
  esp -= 4; W32(esp, 0x47cfb3u); SPILL(); f_478b24(); if (g_unwind) return; RELOAD();
/* 47cfb3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47cfb6: or dword ptr [esi], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
/* 47cfb8: jmp 0x47cfbd */
  goto L_47cfbd;
L_47cfba: /* 47cfba: or dword ptr [esi], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi), r);
  }
L_47cfbd: /* 47cfbd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47cfc0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47cfc3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47cfc4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47cfc6: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47cfc9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47cfca: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47cfcd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47cfce: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47cfcf: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47cfd2(void) {
  LOAD_REGS();
L_47cfd2: /* 47cfd2: mov eax, 0x48d129 */
  eax = 0x48d129u;
/* 47cfd7: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47cfdcu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47cfdc: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47cfdf: and byte ptr [ebp - 0x11], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffefu), r);
  }
/* 47cfe3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47cfe4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47cfe5: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 47cfe8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47cfe9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 47cfec: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47cfee: xor edi, edi */
  edi = 0;
/* 47cff0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47cff1: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 47cff4: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 47cff7: call 0x466d1b */
  esp -= 4; W32(esp, 0x47cffcu); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 47cffc: cmp byte ptr [ebp - 0x1c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47d000: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 47d003: je 0x47d09a */
  if (zf) goto L_47d09a;
L_47d009: /* 47d009: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 47d00c: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 47d00e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47d00f: mov ecx, ebx */
  ecx = ebx;
/* 47d011: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 47d015: call 0x466522 */
  esp -= 4; W32(esp, 0x47d01au); SPILL(); f_466522(); if (g_unwind) return; RELOAD();
/* 47d01a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47d01c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47d01f: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 47d023: movzx edi, byte ptr [ebp + 0x10] */
  edi = (uint32_t)(R8((uint32_t)(ebp + 0x10u)));
/* 47d027: call 0x46567c */
  esp -= 4; W32(esp, 0x47d02cu); SPILL(); f_46567c(); if (g_unwind) return; RELOAD();
L_47d02c: /* 47d02c: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47d02f: jne 0x47d037 */
  if (!zf) goto L_47d037;
L_47d031: /* 47d031: or dword ptr [ebp - 0x18], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 47d035: jmp 0x47d09a */
  goto L_47d09a;
L_47d037: /* 47d037: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47d039: jne 0x47d04f */
  if (!zf) goto L_47d04f;
L_47d03b: /* 47d03b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47d03d: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47d040: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 47d044: mov byte ptr [ebp - 0x11], 1 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x1u);
/* 47d048: call 0x46581a */
  esp -= 4; W32(esp, 0x47d04du); SPILL(); f_46581a(); if (g_unwind) return; RELOAD();
/* 47d04d: jmp 0x47d09a */
  goto L_47d09a;
L_47d04f: /* 47d04f: cmp dword ptr [ebx + 0x14], -2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x14u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47d053: jb 0x47d05b */
  if (cf) goto L_47d05b;
L_47d055: /* 47d055: or dword ptr [ebp - 0x18], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 47d059: jmp 0x47d09a */
  goto L_47d09a;
L_47d05b: /* 47d05b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47d05c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47d05e: mov ecx, ebx */
  ecx = ebx;
/* 47d060: call 0x466156 */
  esp -= 4; W32(esp, 0x47d065u); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
/* 47d065: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47d067: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47d06a: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 47d06e: mov byte ptr [ebp - 0x11], 1 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x1u);
/* 47d072: call 0x465c50 */
  esp -= 4; W32(esp, 0x47d077u); SPILL(); f_465c50(); if (g_unwind) return; RELOAD();
/* 47d077: jmp 0x47d02c */
  goto L_47d02c;
L_47d09a: /* 47d09a: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47d09e: cmp byte ptr [ebp - 0x11], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47d0a2: jne 0x47d0a8 */
  if (!zf) goto L_47d0a8;
L_47d0a4: /* 47d0a4: or dword ptr [ebp - 0x18], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
L_47d0a8: /* 47d0a8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47d0aa: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47d0ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47d0af: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47d0b2: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47d0b4: call 0x461453 */
  esp -= 4; W32(esp, 0x47d0b9u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 47d0b9: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47d0bd: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 47d0c0: call 0x46228e */
  esp -= 4; W32(esp, 0x47d0c5u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 47d0c5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47d0c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47d0c9: mov eax, esi */
  eax = esi;
/* 47d0cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47d0cc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47d0d3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47d0d4: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47d0d5: ret  */
  esp += 4; SPILL(); return;
}

void f_47d079(void) {
  LOAD_REGS();
L_47d079: /* 47d079: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47d07c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47d07e: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 47d081: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47d083: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47d086: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47d088: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 47d08b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47d08c: call 0x464bb2 */
  esp -= 4; W32(esp, 0x47d091u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 47d091: mov eax, 0x47d097 */
  eax = 0x47d097u;
/* 47d096: ret  */
  esp += 4; SPILL(); return;
}

void f_47d097(void) {
  LOAD_REGS();
L_47d097: /* 47d097: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 47d09a: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47d09e: cmp byte ptr [ebp - 0x11], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47d0a2: jne 0x47d0a8 */
  if (!zf) goto L_47d0a8;
L_47d0a4: /* 47d0a4: or dword ptr [ebp - 0x18], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
L_47d0a8: /* 47d0a8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47d0aa: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47d0ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47d0af: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47d0b2: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47d0b4: call 0x461453 */
  esp -= 4; W32(esp, 0x47d0b9u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47d097u: guest_unwind_done(); RELOAD(); goto L_47d097; } return; } RELOAD();
/* 47d0b9: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47d0bd: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 47d0c0: call 0x46228e */
  esp -= 4; W32(esp, 0x47d0c5u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47d097u: guest_unwind_done(); RELOAD(); goto L_47d097; } return; } RELOAD();
/* 47d0c5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47d0c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47d0c9: mov eax, esi */
  eax = esi;
/* 47d0cb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47d0cc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47d0d3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47d0d4: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47d0d5: ret  */
  esp += 4; SPILL(); return;
}

void f_47d0d6(void) {
  LOAD_REGS();
L_47d0d6: /* 47d0d6: mov eax, 0x48d13b */
  eax = 0x48d13bu;
/* 47d0db: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47d0e0u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47d0e0: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47d0e3: and byte ptr [ebp - 0x11], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffefu), r);
  }
/* 47d0e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47d0e8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47d0e9: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 47d0ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47d0ed: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 47d0f0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47d0f2: xor edi, edi */
  edi = 0;
/* 47d0f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47d0f5: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 47d0f8: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 47d0fb: call 0x466d56 */
  esp -= 4; W32(esp, 0x47d100u); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 47d100: cmp byte ptr [ebp - 0x1c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47d104: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 47d107: je 0x47d1a2 */
  if (zf) goto L_47d1a2;
L_47d10d: /* 47d10d: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 47d110: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 47d112: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47d113: mov ecx, ebx */
  ecx = ebx;
/* 47d115: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 47d119: call 0x47349c */
  esp -= 4; W32(esp, 0x47d11eu); SPILL(); f_47349c(); if (g_unwind) return; RELOAD();
/* 47d11e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47d120: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47d123: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 47d127: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 47d12a: call 0x4657fc */
  esp -= 4; W32(esp, 0x47d12fu); SPILL(); f_4657fc(); if (g_unwind) return; RELOAD();
L_47d12f: /* 47d12f: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47d133: jne 0x47d13b */
  if (!zf) goto L_47d13b;
L_47d135: /* 47d135: or dword ptr [ebp - 0x18], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 47d139: jmp 0x47d1a2 */
  goto L_47d1a2;
L_47d13b: /* 47d13b: cmp ax, di */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47d13e: jne 0x47d154 */
  if (!zf) goto L_47d154;
L_47d140: /* 47d140: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47d142: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47d145: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 47d149: mov byte ptr [ebp - 0x11], 1 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x1u);
/* 47d14d: call 0x46584a */
  esp -= 4; W32(esp, 0x47d152u); SPILL(); f_46584a(); if (g_unwind) return; RELOAD();
/* 47d152: jmp 0x47d1a2 */
  goto L_47d1a2;
L_47d154: /* 47d154: cmp dword ptr [ebx + 0x14], 0x7ffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x14u))); uint32_t b = (uint32_t)(0x7ffffffeu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47d15b: jb 0x47d163 */
  if (cf) goto L_47d163;
L_47d15d: /* 47d15d: or dword ptr [ebp - 0x18], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 47d161: jmp 0x47d1a2 */
  goto L_47d1a2;
L_47d163: /* 47d163: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47d164: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47d166: mov ecx, ebx */
  ecx = ebx;
/* 47d168: call 0x473236 */
  esp -= 4; W32(esp, 0x47d16du); SPILL(); f_473236(); if (g_unwind) return; RELOAD();
/* 47d16d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47d16f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47d172: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 47d176: mov byte ptr [ebp - 0x11], 1 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x1u);
/* 47d17a: call 0x465c69 */
  esp -= 4; W32(esp, 0x47d17fu); SPILL(); f_465c69(); if (g_unwind) return; RELOAD();
/* 47d17f: jmp 0x47d12f */
  goto L_47d12f;
L_47d1a2: /* 47d1a2: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47d1a6: cmp byte ptr [ebp - 0x11], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47d1aa: jne 0x47d1b0 */
  if (!zf) goto L_47d1b0;
L_47d1ac: /* 47d1ac: or dword ptr [ebp - 0x18], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
L_47d1b0: /* 47d1b0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47d1b2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47d1b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47d1b7: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47d1ba: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47d1bc: call 0x461453 */
  esp -= 4; W32(esp, 0x47d1c1u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 47d1c1: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47d1c5: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 47d1c8: call 0x46228e */
  esp -= 4; W32(esp, 0x47d1cdu); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 47d1cd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47d1d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47d1d1: mov eax, esi */
  eax = esi;
/* 47d1d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47d1d4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47d1db: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47d1dc: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47d1dd: ret  */
  esp += 4; SPILL(); return;
}

void f_47d181(void) {
  LOAD_REGS();
L_47d181: /* 47d181: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47d184: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47d186: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 47d189: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47d18b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47d18e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47d190: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 47d193: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47d194: call 0x464bb2 */
  esp -= 4; W32(esp, 0x47d199u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 47d199: mov eax, 0x47d19f */
  eax = 0x47d19fu;
/* 47d19e: ret  */
  esp += 4; SPILL(); return;
}

void f_47d19f(void) {
  LOAD_REGS();
L_47d19f: /* 47d19f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 47d1a2: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47d1a6: cmp byte ptr [ebp - 0x11], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47d1aa: jne 0x47d1b0 */
  if (!zf) goto L_47d1b0;
L_47d1ac: /* 47d1ac: or dword ptr [ebp - 0x18], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
L_47d1b0: /* 47d1b0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47d1b2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47d1b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47d1b7: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47d1ba: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47d1bc: call 0x461453 */
  esp -= 4; W32(esp, 0x47d1c1u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47d19fu: guest_unwind_done(); RELOAD(); goto L_47d19f; } return; } RELOAD();
/* 47d1c1: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47d1c5: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 47d1c8: call 0x46228e */
  esp -= 4; W32(esp, 0x47d1cdu); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47d19fu: guest_unwind_done(); RELOAD(); goto L_47d19f; } return; } RELOAD();
/* 47d1cd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47d1d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47d1d1: mov eax, esi */
  eax = esi;
/* 47d1d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47d1d4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47d1db: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47d1dc: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47d1dd: ret  */
  esp += 4; SPILL(); return;
}

void f_47d1de(void) {
  LOAD_REGS();
L_47d1de: /* 47d1de: mov eax, 0x48d14d */
  eax = 0x48d14du;
/* 47d1e3: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47d1e8u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47d1e8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47d1eb: and byte ptr [ebp - 0x11], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffefu), r);
  }
/* 47d1ef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47d1f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47d1f1: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 47d1f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47d1f5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 47d1f8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47d1fa: xor edi, edi */
  edi = 0;
/* 47d1fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47d1fd: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 47d200: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 47d203: call 0x466d91 */
  esp -= 4; W32(esp, 0x47d208u); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 47d208: cmp byte ptr [ebp - 0x1c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47d20c: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 47d20f: je 0x47d2aa */
  if (zf) goto L_47d2aa;
L_47d215: /* 47d215: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 47d218: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 47d21a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47d21b: mov ecx, ebx */
  ecx = ebx;
/* 47d21d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 47d221: call 0x47349c */
  esp -= 4; W32(esp, 0x47d226u); SPILL(); f_47349c(); if (g_unwind) return; RELOAD();
/* 47d226: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47d228: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47d22b: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 47d22f: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 47d232: call 0x4657fc */
  esp -= 4; W32(esp, 0x47d237u); SPILL(); f_4657fc(); if (g_unwind) return; RELOAD();
L_47d237: /* 47d237: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47d23b: jne 0x47d243 */
  if (!zf) goto L_47d243;
L_47d23d: /* 47d23d: or dword ptr [ebp - 0x18], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 47d241: jmp 0x47d2aa */
  goto L_47d2aa;
L_47d243: /* 47d243: cmp ax, di */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47d246: jne 0x47d25c */
  if (!zf) goto L_47d25c;
L_47d248: /* 47d248: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47d24a: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47d24d: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 47d251: mov byte ptr [ebp - 0x11], 1 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x1u);
/* 47d255: call 0x46584a */
  esp -= 4; W32(esp, 0x47d25au); SPILL(); f_46584a(); if (g_unwind) return; RELOAD();
/* 47d25a: jmp 0x47d2aa */
  goto L_47d2aa;
L_47d25c: /* 47d25c: cmp dword ptr [ebx + 0x14], 0x7ffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x14u))); uint32_t b = (uint32_t)(0x7ffffffeu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47d263: jb 0x47d26b */
  if (cf) goto L_47d26b;
L_47d265: /* 47d265: or dword ptr [ebp - 0x18], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 47d269: jmp 0x47d2aa */
  goto L_47d2aa;
L_47d26b: /* 47d26b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47d26c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47d26e: mov ecx, ebx */
  ecx = ebx;
/* 47d270: call 0x473236 */
  esp -= 4; W32(esp, 0x47d275u); SPILL(); f_473236(); if (g_unwind) return; RELOAD();
/* 47d275: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47d277: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 47d27a: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 47d27e: mov byte ptr [ebp - 0x11], 1 */
  W8((uint32_t)(ebp + 0xffffffefu), 0x1u);
/* 47d282: call 0x465c69 */
  esp -= 4; W32(esp, 0x47d287u); SPILL(); f_465c69(); if (g_unwind) return; RELOAD();
/* 47d287: jmp 0x47d237 */
  goto L_47d237;
L_47d2aa: /* 47d2aa: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47d2ae: cmp byte ptr [ebp - 0x11], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47d2b2: jne 0x47d2b8 */
  if (!zf) goto L_47d2b8;
L_47d2b4: /* 47d2b4: or dword ptr [ebp - 0x18], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
L_47d2b8: /* 47d2b8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47d2ba: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47d2bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47d2bf: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47d2c2: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47d2c4: call 0x461453 */
  esp -= 4; W32(esp, 0x47d2c9u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 47d2c9: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47d2cd: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 47d2d0: call 0x46228e */
  esp -= 4; W32(esp, 0x47d2d5u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 47d2d5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47d2d8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47d2d9: mov eax, esi */
  eax = esi;
/* 47d2db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47d2dc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47d2e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47d2e4: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47d2e5: ret  */
  esp += 4; SPILL(); return;
}

void f_47d289(void) {
  LOAD_REGS();
L_47d289: /* 47d289: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47d28c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 47d28e: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 47d291: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47d293: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 47d296: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47d298: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 47d29b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47d29c: call 0x464bb2 */
  esp -= 4; W32(esp, 0x47d2a1u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 47d2a1: mov eax, 0x47d2a7 */
  eax = 0x47d2a7u;
/* 47d2a6: ret  */
  esp += 4; SPILL(); return;
}

void f_47d2a7(void) {
  LOAD_REGS();
L_47d2a7: /* 47d2a7: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 47d2aa: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47d2ae: cmp byte ptr [ebp - 0x11], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffefu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47d2b2: jne 0x47d2b8 */
  if (!zf) goto L_47d2b8;
L_47d2b4: /* 47d2b4: or dword ptr [ebp - 0x18], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
L_47d2b8: /* 47d2b8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 47d2ba: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 47d2bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47d2bf: push dword ptr [ebp - 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe8u)); esp -= 4; W32(esp, v); }
/* 47d2c2: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 47d2c4: call 0x461453 */
  esp -= 4; W32(esp, 0x47d2c9u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47d2a7u: guest_unwind_done(); RELOAD(); goto L_47d2a7; } return; } RELOAD();
/* 47d2c9: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47d2cd: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 47d2d0: call 0x46228e */
  esp -= 4; W32(esp, 0x47d2d5u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x47d2a7u: guest_unwind_done(); RELOAD(); goto L_47d2a7; } return; } RELOAD();
/* 47d2d5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47d2d8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47d2d9: mov eax, esi */
  eax = esi;
/* 47d2db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47d2dc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47d2e3: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47d2e4: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47d2e5: ret  */
  esp += 4; SPILL(); return;
}

void f_47d2e6(void) {
  LOAD_REGS();
L_47d2e6: /* 47d2e6: mov eax, 0x48d04d */
  eax = 0x48d04du;
/* 47d2eb: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47d2f0u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47d2f0: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47d2f3: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47d2f8: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47d2fb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47d2fc: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 47d2ff: mov cl, byte ptr [ebx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 47d301: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47d303: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47d304: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47d307: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47d308: je 0x47d31c */
  if (zf) goto L_47d31c;
L_47d30a: /* 47d30a: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 47d30c: mov edx, ebx */
  edx = ebx;
L_47d30e: /* 47d30e: cmp al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47d310: jne 0x47d315 */
  if (!zf) goto L_47d315;
L_47d312: /* 47d312: inc dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
L_47d315: /* 47d315: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 47d316: mov al, byte ptr [edx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* 47d318: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47d31a: jne 0x47d30e */
  if (!zf) goto L_47d30e;
L_47d31c: /* 47d31c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47d31e: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47d321: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 47d324: call 0x46729b */
  esp -= 4; W32(esp, 0x47d329u); SPILL(); f_46729b(); if (g_unwind) return; RELOAD();
/* 47d329: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47d32d: mov dword ptr [ebp - 0x18], 0xfffffffe */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xfffffffeu);
/* 47d334: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
L_47d33b: /* 47d33b: and byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0x17u), r);
  }
/* 47d33f: xor esi, esi */
  esi = 0;
/* 47d341: xor edi, edi */
  edi = 0;
/* 47d343: cmp dword ptr [ebp + 0x10], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 47d346: jbe 0x47d420 */
  if ((cf | zf)) goto L_47d420;
L_47d34c: /* 47d34c: mov al, byte ptr [edi + ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + ebx))) & 0xffu);
/* 47d34f: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47d351: je 0x47d361 */
  if (zf) goto L_47d361;
L_47d353: /* 47d353: mov cl, byte ptr [ebx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
L_47d355: /* 47d355: cmp al, cl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47d357: je 0x47d361 */
  if (zf) goto L_47d361;
L_47d359: /* 47d359: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47d35a: mov al, byte ptr [edi + ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + ebx))) & 0xffu);
/* 47d35d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47d35f: jne 0x47d355 */
  if (!zf) goto L_47d355;
L_47d361: /* 47d361: cmp dword ptr [ebp - 0x1c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47d365: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 47d368: jae 0x47d36d */
  if (!cf) goto L_47d36d;
L_47d36a: /* 47d36a: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
L_47d36d: /* 47d36d: cmp byte ptr [eax + esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47d371: je 0x47d387 */
  if (zf) goto L_47d387;
L_47d373: /* 47d373: cmp dword ptr [ebp - 0x1c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47d377: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 47d37a: jae 0x47d37f */
  if (!cf) goto L_47d37f;
L_47d37c: /* 47d37c: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
L_47d37f: /* 47d37f: movsx eax, byte ptr [eax + esi] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + esi)));
/* 47d383: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 47d385: jmp 0x47d3ed */
  goto L_47d3ed;
L_47d387: /* 47d387: add edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 47d38a: mov al, byte ptr [edi + ebx] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi + ebx))) & 0xffu);
/* 47d38d: cmp al, byte ptr [ebx] */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(ebx)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47d38f: je 0x47d3d0 */
  if (zf) goto L_47d3d0;
L_47d391: /* 47d391: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47d393: je 0x47d3d0 */
  if (zf) goto L_47d3d0;
L_47d395: /* 47d395: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47d398: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 47d39b: call 0x46e745 */
  esp -= 4; W32(esp, 0x47d3a0u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47d3a0: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47d3a2: jne 0x47d3b7 */
  if (!zf) goto L_47d3b7;
L_47d3a4: /* 47d3a4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 47d3a7: call 0x47215a */
  esp -= 4; W32(esp, 0x47d3acu); SPILL(); f_47215a(); if (g_unwind) return; RELOAD();
/* 47d3ac: cmp byte ptr [edi + ebx], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + ebx))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47d3af: jne 0x47d3b7 */
  if (!zf) goto L_47d3b7;
L_47d3b1: /* 47d3b1: mov byte ptr [ebp + 0x17], 1 */
  W8((uint32_t)(ebp + 0x17u), 0x1u);
/* 47d3b5: jmp 0x47d3ed */
  goto L_47d3ed;
L_47d3b7: /* 47d3b7: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 47d3ba: cmp ecx, 0x7f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47d3bd: jb 0x47d3c2 */
  if (cf) goto L_47d3c2;
L_47d3bf: /* 47d3bf: push 0x7f */
  { uint32_t v = 0x7fu; esp -= 4; W32(esp, v); }
/* 47d3c1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_47d3c2: /* 47d3c2: cmp dword ptr [ebp - 0x1c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47d3c6: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 47d3c9: jae 0x47d3ea */
  if (!cf) goto L_47d3ea;
L_47d3cb: /* 47d3cb: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 47d3ce: jmp 0x47d3ea */
  goto L_47d3ea;
L_47d3d0: /* 47d3d0: push 0x7f */
  { uint32_t v = 0x7fu; esp -= 4; W32(esp, v); }
/* 47d3d2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47d3d3: cmp dword ptr [ebp - 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47d3d6: jae 0x47d3db */
  if (!cf) goto L_47d3db;
L_47d3d8: /* 47d3d8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_47d3db: /* 47d3db: cmp dword ptr [ebp - 0x1c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47d3df: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 47d3e2: jae 0x47d3e7 */
  if (!cf) goto L_47d3e7;
L_47d3e4: /* 47d3e4: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
L_47d3e7: /* 47d3e7: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
L_47d3ea: /* 47d3ea: mov byte ptr [eax + esi], cl */
  W8((uint32_t)(eax + esi), (ecx & 0xffu));
L_47d3ed: /* 47d3ed: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 47d3ee: cmp esi, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47d3f1: jb 0x47d34c */
  if (cf) goto L_47d34c;
L_47d3f7: /* 47d3f7: cmp byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47d3fb: je 0x47d420 */
  if (zf) goto L_47d420;
L_47d3fd: /* 47d3fd: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47d400: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 47d403: call 0x46e745 */
  esp -= 4; W32(esp, 0x47d408u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47d408: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47d40a: jne 0x47d420 */
  if (!zf) goto L_47d420;
L_47d40c: /* 47d40c: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 47d40f: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 47d412: call 0x46c710 */
  esp -= 4; W32(esp, 0x47d417u); SPILL(); f_46c710(); if (g_unwind) return; RELOAD();
/* 47d417: or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 47d41b: jmp 0x47d33b */
  goto L_47d33b;
L_47d420: /* 47d420: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47d422: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 47d425: call 0x461ea8 */
  esp -= 4; W32(esp, 0x47d42au); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 47d42a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47d42d: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47d430: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47d437: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47d43a: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47d43d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47d43e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47d43f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47d440: call 0x46190c */
  esp -= 4; W32(esp, 0x47d445u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47d445: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47d446: ret  */
  esp += 4; SPILL(); return;
}

void f_47d447(void) {
  LOAD_REGS();
L_47d447: /* 47d447: mov eax, 0x48d04d */
  eax = 0x48d04du;
/* 47d44c: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47d451u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47d451: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47d454: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47d459: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47d45c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47d45d: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 47d460: xor ecx, ecx */
  ecx = 0;
/* 47d462: mov cx, word ptr [ebx] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 47d465: test cx, cx */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 47d468: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47d469: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47d46c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47d46d: je 0x47d485 */
  if (zf) goto L_47d485;
L_47d46f: /* 47d46f: mov eax, ecx */
  eax = ecx;
/* 47d471: mov edx, ebx */
  edx = ebx;
L_47d473: /* 47d473: cmp ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47d476: jne 0x47d47b */
  if (!zf) goto L_47d47b;
L_47d478: /* 47d478: inc dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0x10u), r);
  }
L_47d47b: /* 47d47b: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 47d47c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 47d47d: mov ax, word ptr [edx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(edx))) & 0xffffu);
/* 47d480: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 47d483: jne 0x47d473 */
  if (!zf) goto L_47d473;
L_47d485: /* 47d485: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47d487: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47d48a: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 47d48d: call 0x46729b */
  esp -= 4; W32(esp, 0x47d492u); SPILL(); f_46729b(); if (g_unwind) return; RELOAD();
/* 47d492: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47d496: mov dword ptr [ebp - 0x18], 0xfffffffe */
  W32((uint32_t)(ebp + 0xffffffe8u), 0xfffffffeu);
/* 47d49d: mov dword ptr [ebp - 0x14], 1 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x1u);
L_47d4a4: /* 47d4a4: and byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0x17u), r);
  }
/* 47d4a8: xor esi, esi */
  esi = 0;
/* 47d4aa: xor edi, edi */
  edi = 0;
/* 47d4ac: cmp dword ptr [ebp + 0x10], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 47d4af: jbe 0x47d593 */
  if ((cf | zf)) goto L_47d593;
L_47d4b5: /* 47d4b5: mov ax, word ptr [ebx + edi*2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + edi*2))) & 0xffffu);
/* 47d4b9: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 47d4bc: je 0x47d4d0 */
  if (zf) goto L_47d4d0;
L_47d4be: /* 47d4be: mov cx, word ptr [ebx] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
L_47d4c1: /* 47d4c1: cmp ax, cx */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((ecx & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47d4c4: je 0x47d4d0 */
  if (zf) goto L_47d4d0;
L_47d4c6: /* 47d4c6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 47d4c7: mov ax, word ptr [ebx + edi*2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + edi*2))) & 0xffffu);
/* 47d4cb: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 47d4ce: jne 0x47d4c1 */
  if (!zf) goto L_47d4c1;
L_47d4d0: /* 47d4d0: cmp dword ptr [ebp - 0x1c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47d4d4: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 47d4d7: jae 0x47d4dc */
  if (!cf) goto L_47d4dc;
L_47d4d9: /* 47d4d9: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
L_47d4dc: /* 47d4dc: cmp byte ptr [eax + esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47d4e0: je 0x47d4f6 */
  if (zf) goto L_47d4f6;
L_47d4e2: /* 47d4e2: cmp dword ptr [ebp - 0x1c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47d4e6: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 47d4e9: jae 0x47d4ee */
  if (!cf) goto L_47d4ee;
L_47d4eb: /* 47d4eb: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
L_47d4ee: /* 47d4ee: movsx eax, byte ptr [eax + esi] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax + esi)));
/* 47d4f2: add edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 47d4f4: jmp 0x47d560 */
  goto L_47d560;
L_47d4f6: /* 47d4f6: add edi, dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 47d4f9: mov ax, word ptr [ebx + edi*2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + edi*2))) & 0xffffu);
/* 47d4fd: cmp ax, word ptr [ebx] */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(R16((uint32_t)(ebx)));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47d500: je 0x47d543 */
  if (zf) goto L_47d543;
L_47d502: /* 47d502: test ax, ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a & b);
  zf = (r) == 0;
  }
/* 47d505: je 0x47d543 */
  if (zf) goto L_47d543;
L_47d507: /* 47d507: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47d50a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 47d50d: call 0x46e77f */
  esp -= 4; W32(esp, 0x47d512u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47d512: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47d514: jne 0x47d52a */
  if (!zf) goto L_47d52a;
L_47d516: /* 47d516: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 47d519: call 0x472198 */
  esp -= 4; W32(esp, 0x47d51eu); SPILL(); f_472198(); if (g_unwind) return; RELOAD();
/* 47d51e: cmp word ptr [ebx + edi*2], ax */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx + edi*2))); uint16_t b = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 47d522: jne 0x47d52a */
  if (!zf) goto L_47d52a;
L_47d524: /* 47d524: mov byte ptr [ebp + 0x17], 1 */
  W8((uint32_t)(ebp + 0x17u), 0x1u);
/* 47d528: jmp 0x47d560 */
  goto L_47d560;
L_47d52a: /* 47d52a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 47d52d: cmp ecx, 0x7f */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7fu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47d530: jb 0x47d535 */
  if (cf) goto L_47d535;
L_47d532: /* 47d532: push 0x7f */
  { uint32_t v = 0x7fu; esp -= 4; W32(esp, v); }
/* 47d534: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_47d535: /* 47d535: cmp dword ptr [ebp - 0x1c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47d539: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 47d53c: jae 0x47d55d */
  if (!cf) goto L_47d55d;
L_47d53e: /* 47d53e: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 47d541: jmp 0x47d55d */
  goto L_47d55d;
L_47d543: /* 47d543: push 0x7f */
  { uint32_t v = 0x7fu; esp -= 4; W32(esp, v); }
/* 47d545: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47d546: cmp dword ptr [ebp - 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47d549: jae 0x47d54e */
  if (!cf) goto L_47d54e;
L_47d54b: /* 47d54b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_47d54e: /* 47d54e: cmp dword ptr [ebp - 0x1c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47d552: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 47d555: jae 0x47d55a */
  if (!cf) goto L_47d55a;
L_47d557: /* 47d557: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
L_47d55a: /* 47d55a: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
L_47d55d: /* 47d55d: mov byte ptr [eax + esi], cl */
  W8((uint32_t)(eax + esi), (ecx & 0xffu));
L_47d560: /* 47d560: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 47d561: cmp esi, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47d564: jb 0x47d4b5 */
  if (cf) goto L_47d4b5;
L_47d56a: /* 47d56a: cmp byte ptr [ebp + 0x17], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x17u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47d56e: je 0x47d593 */
  if (zf) goto L_47d593;
L_47d570: /* 47d570: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47d573: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 47d576: call 0x46e77f */
  esp -= 4; W32(esp, 0x47d57bu); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47d57b: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47d57d: jne 0x47d593 */
  if (!zf) goto L_47d593;
L_47d57f: /* 47d57f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 47d582: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 47d585: call 0x46c756 */
  esp -= 4; W32(esp, 0x47d58au); SPILL(); f_46c756(); if (g_unwind) return; RELOAD();
/* 47d58a: or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 47d58e: jmp 0x47d4a4 */
  goto L_47d4a4;
L_47d593: /* 47d593: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 47d595: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 47d598: call 0x461ea8 */
  esp -= 4; W32(esp, 0x47d59du); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 47d59d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47d5a0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47d5a3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47d5aa: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47d5ad: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47d5b0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47d5b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47d5b2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47d5b3: call 0x46190c */
  esp -= 4; W32(esp, 0x47d5b8u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47d5b8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47d5b9: ret  */
  esp += 4; SPILL(); return;
}

void f_47d5ba(void) {
  LOAD_REGS();
L_47d5ba: /* 47d5ba: mov eax, 0x48d0ad */
  eax = 0x48d0adu;
/* 47d5bf: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47d5c4u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47d5c4: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47d5c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47d5c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47d5ca: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 47d5cd: call 0x4612ba */
  esp -= 4; W32(esp, 0x47d5d2u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 47d5d2: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47d5d6: mov ecx, 0x4d08a0 */
  ecx = 0x4d08a0u;
/* 47d5db: call 0x464006 */
  esp -= 4; W32(esp, 0x47d5e0u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 47d5e0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 47d5e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47d5e4: call 0x488d6c */
  esp -= 4; W32(esp, 0x47d5e9u); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 47d5e9: mov esi, eax */
  esi = eax;
/* 47d5eb: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47d5ed: jne 0x47d641 */
  if (!zf) goto L_47d641;
L_47d5ef: /* 47d5ef: mov eax, dword ptr [0x4d10e0] */
  eax = R32((uint32_t)(0x4d10e0u));
/* 47d5f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47d5f6: je 0x47d5fc */
  if (zf) goto L_47d5fc;
L_47d5f8: /* 47d5f8: mov esi, eax */
  esi = eax;
/* 47d5fa: jmp 0x47d641 */
  goto L_47d641;
L_47d5fc: /* 47d5fc: push 0x4d10e0 */
  { uint32_t v = 0x4d10e0u; esp -= 4; W32(esp, v); }
/* 47d601: call 0x47c488 */
  esp -= 4; W32(esp, 0x47d606u); SPILL(); f_47c488(); if (g_unwind) return; RELOAD();
/* 47d606: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47d609: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47d60a: jne 0x47d628 */
  if (!zf) goto L_47d628;
L_47d60c: /* 47d60c: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 47d611: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 47d614: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x47d61au); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 47d61a: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 47d61f: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47d622: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47d623: call 0x48bed8 */
  esp -= 4; W32(esp, 0x47d628u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_47d628: /* 47d628: mov eax, dword ptr [0x4d10e0] */
  eax = R32((uint32_t)(0x4d10e0u));
/* 47d62d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47d62e: mov edi, eax */
  edi = eax;
/* 47d630: mov ecx, edi */
  ecx = edi;
/* 47d632: mov esi, eax */
  esi = eax;
/* 47d634: call 0x461292 */
  esp -= 4; W32(esp, 0x47d639u); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 47d639: mov ecx, edi */
  ecx = edi;
/* 47d63b: call 0x488de4 */
  esp -= 4; W32(esp, 0x47d640u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 47d640: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_47d641: /* 47d641: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47d645: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 47d648: call 0x4613d8 */
  esp -= 4; W32(esp, 0x47d64du); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 47d64d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47d650: mov eax, esi */
  eax = esi;
/* 47d652: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47d653: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47d65a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47d65b: ret  */
  esp += 4; SPILL(); return;
}

void f_47d65c(void) {
  LOAD_REGS();
L_47d65c: /* 47d65c: mov eax, 0x48d0ad */
  eax = 0x48d0adu;
/* 47d661: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47d666u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47d666: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47d669: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47d66a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47d66c: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 47d66f: call 0x4612ba */
  esp -= 4; W32(esp, 0x47d674u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 47d674: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47d678: mov ecx, 0x4d087c */
  ecx = 0x4d087cu;
/* 47d67d: call 0x464006 */
  esp -= 4; W32(esp, 0x47d682u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 47d682: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 47d685: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47d686: call 0x488d6c */
  esp -= 4; W32(esp, 0x47d68bu); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 47d68b: mov esi, eax */
  esi = eax;
/* 47d68d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47d68f: jne 0x47d6e3 */
  if (!zf) goto L_47d6e3;
L_47d691: /* 47d691: mov eax, dword ptr [0x4d10e4] */
  eax = R32((uint32_t)(0x4d10e4u));
/* 47d696: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47d698: je 0x47d69e */
  if (zf) goto L_47d69e;
L_47d69a: /* 47d69a: mov esi, eax */
  esi = eax;
/* 47d69c: jmp 0x47d6e3 */
  goto L_47d6e3;
L_47d69e: /* 47d69e: push 0x4d10e4 */
  { uint32_t v = 0x4d10e4u; esp -= 4; W32(esp, v); }
/* 47d6a3: call 0x47c509 */
  esp -= 4; W32(esp, 0x47d6a8u); SPILL(); f_47c509(); if (g_unwind) return; RELOAD();
/* 47d6a8: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47d6ab: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47d6ac: jne 0x47d6ca */
  if (!zf) goto L_47d6ca;
L_47d6ae: /* 47d6ae: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 47d6b3: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 47d6b6: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x47d6bcu); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 47d6bc: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 47d6c1: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47d6c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47d6c5: call 0x48bed8 */
  esp -= 4; W32(esp, 0x47d6cau); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_47d6ca: /* 47d6ca: mov eax, dword ptr [0x4d10e4] */
  eax = R32((uint32_t)(0x4d10e4u));
/* 47d6cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47d6d0: mov edi, eax */
  edi = eax;
/* 47d6d2: mov ecx, edi */
  ecx = edi;
/* 47d6d4: mov esi, eax */
  esi = eax;
/* 47d6d6: call 0x461292 */
  esp -= 4; W32(esp, 0x47d6dbu); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 47d6db: mov ecx, edi */
  ecx = edi;
/* 47d6dd: call 0x488de4 */
  esp -= 4; W32(esp, 0x47d6e2u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 47d6e2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_47d6e3: /* 47d6e3: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47d6e7: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 47d6ea: call 0x4613d8 */
  esp -= 4; W32(esp, 0x47d6efu); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 47d6ef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47d6f2: mov eax, esi */
  eax = esi;
/* 47d6f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47d6f5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47d6fc: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47d6fd: ret  */
  esp += 4; SPILL(); return;
}

void f_47d6fe(void) {
  LOAD_REGS();
L_47d6fe: /* 47d6fe: mov eax, 0x48d0ad */
  eax = 0x48d0adu;
/* 47d703: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47d708u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47d708: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47d70b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47d70c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47d70e: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 47d711: call 0x4612ba */
  esp -= 4; W32(esp, 0x47d716u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 47d716: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47d71a: mov ecx, 0x4d0864 */
  ecx = 0x4d0864u;
/* 47d71f: call 0x464006 */
  esp -= 4; W32(esp, 0x47d724u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 47d724: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 47d727: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47d728: call 0x488d6c */
  esp -= 4; W32(esp, 0x47d72du); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 47d72d: mov esi, eax */
  esi = eax;
/* 47d72f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47d731: jne 0x47d785 */
  if (!zf) goto L_47d785;
L_47d733: /* 47d733: mov eax, dword ptr [0x4d10e8] */
  eax = R32((uint32_t)(0x4d10e8u));
/* 47d738: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 47d73a: je 0x47d740 */
  if (zf) goto L_47d740;
L_47d73c: /* 47d73c: mov esi, eax */
  esi = eax;
/* 47d73e: jmp 0x47d785 */
  goto L_47d785;
L_47d740: /* 47d740: push 0x4d10e8 */
  { uint32_t v = 0x4d10e8u; esp -= 4; W32(esp, v); }
/* 47d745: call 0x47c58a */
  esp -= 4; W32(esp, 0x47d74au); SPILL(); f_47c58a(); if (g_unwind) return; RELOAD();
/* 47d74a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47d74d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47d74e: jne 0x47d76c */
  if (!zf) goto L_47d76c;
L_47d750: /* 47d750: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 47d755: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 47d758: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x47d75eu); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 47d75e: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 47d763: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47d766: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47d767: call 0x48bed8 */
  esp -= 4; W32(esp, 0x47d76cu); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_47d76c: /* 47d76c: mov eax, dword ptr [0x4d10e8] */
  eax = R32((uint32_t)(0x4d10e8u));
/* 47d771: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47d772: mov edi, eax */
  edi = eax;
/* 47d774: mov ecx, edi */
  ecx = edi;
/* 47d776: mov esi, eax */
  esi = eax;
/* 47d778: call 0x461292 */
  esp -= 4; W32(esp, 0x47d77du); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 47d77d: mov ecx, edi */
  ecx = edi;
/* 47d77f: call 0x488de4 */
  esp -= 4; W32(esp, 0x47d784u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 47d784: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_47d785: /* 47d785: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47d789: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 47d78c: call 0x4613d8 */
  esp -= 4; W32(esp, 0x47d791u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 47d791: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47d794: mov eax, esi */
  eax = esi;
/* 47d796: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47d797: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47d79e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47d79f: ret  */
  esp += 4; SPILL(); return;
}

void f_47d7a0(void) {
  LOAD_REGS();
L_47d7a0: /* 47d7a0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47d7a2: call 0x47c450 */
  esp -= 4; W32(esp, 0x47d7a7u); SPILL(); f_47c450(); if (g_unwind) return; RELOAD();
/* 47d7a7: ret  */
  esp += 4; SPILL(); return;
}

void f_47d7a8(void) {
  LOAD_REGS();
L_47d7a8: /* 47d7a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47d7aa: call 0x47c4d1 */
  esp -= 4; W32(esp, 0x47d7afu); SPILL(); f_47c4d1(); if (g_unwind) return; RELOAD();
/* 47d7af: ret  */
  esp += 4; SPILL(); return;
}

void f_47d7b0(void) {
  LOAD_REGS();
L_47d7b0: /* 47d7b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47d7b2: call 0x47c552 */
  esp -= 4; W32(esp, 0x47d7b7u); SPILL(); f_47c552(); if (g_unwind) return; RELOAD();
/* 47d7b7: ret  */
  esp += 4; SPILL(); return;
}

void f_47d7b8(void) {
  LOAD_REGS();
L_47d7b8: /* 47d7b8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47d7b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47d7bb: mov esi, ecx */
  esi = ecx;
/* 47d7bd: call 0x4624b0 */
  esp -= 4; W32(esp, 0x47d7c2u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 47d7c2: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47d7c6: mov ecx, esi */
  ecx = esi;
/* 47d7c8: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47d7cc: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47d7d0: call 0x47a171 */
  esp -= 4; W32(esp, 0x47d7d5u); SPILL(); f_47a171(); if (g_unwind) return; RELOAD();
/* 47d7d5: mov eax, esi */
  eax = esi;
/* 47d7d7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47d7d8: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_47d7db(void) {
  LOAD_REGS();
L_47d7db: /* 47d7db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47d7dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47d7de: mov esi, ecx */
  esi = ecx;
/* 47d7e0: call 0x4624b0 */
  esp -= 4; W32(esp, 0x47d7e5u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 47d7e5: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47d7e9: mov ecx, esi */
  ecx = esi;
/* 47d7eb: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47d7ef: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47d7f3: call 0x47a171 */
  esp -= 4; W32(esp, 0x47d7f8u); SPILL(); f_47a171(); if (g_unwind) return; RELOAD();
/* 47d7f8: mov eax, esi */
  eax = esi;
/* 47d7fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47d7fb: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_47d7fe(void) {
  LOAD_REGS();
L_47d7fe: /* 47d7fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47d7ff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47d801: mov esi, ecx */
  esi = ecx;
/* 47d803: call 0x4624b0 */
  esp -= 4; W32(esp, 0x47d808u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 47d808: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 47d80c: mov ecx, esi */
  ecx = esi;
/* 47d80e: call 0x462c3d */
  esp -= 4; W32(esp, 0x47d813u); SPILL(); f_462c3d(); if (g_unwind) return; RELOAD();
/* 47d813: mov eax, esi */
  eax = esi;
/* 47d815: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47d816: ret 8 */
  esp += 12; SPILL(); return;
}

void f_47d819(void) {
  LOAD_REGS();
L_47d819: /* 47d819: jmp 0x462c3d */
  SPILL(); f_462c3d(); return;
}

void f_47d81e(void) {
  LOAD_REGS();
L_47d81e: /* 47d81e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47d81f: mov ebp, esp */
  ebp = esp;
/* 47d821: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47d822: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47d825: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47d829: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47d82c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47d82d: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 47d830: call 0x47d7b8 */
  esp -= 4; W32(esp, 0x47d835u); SPILL(); f_47d7b8(); if (g_unwind) return; RELOAD();
/* 47d835: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47d838: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47d839: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_47d83c(void) {
  LOAD_REGS();
L_47d83c: /* 47d83c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47d83d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47d83f: mov esi, ecx */
  esi = ecx;
/* 47d841: call 0x4624b0 */
  esp -= 4; W32(esp, 0x47d846u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 47d846: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 47d848: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47d84a: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 47d84e: mov ecx, esi */
  ecx = esi;
/* 47d850: call 0x47a171 */
  esp -= 4; W32(esp, 0x47d855u); SPILL(); f_47a171(); if (g_unwind) return; RELOAD();
/* 47d855: mov eax, esi */
  eax = esi;
/* 47d857: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47d858: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47d85b(void) {
  LOAD_REGS();
L_47d85b: /* 47d85b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47d85c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47d85e: mov esi, ecx */
  esi = ecx;
/* 47d860: call 0x4624b0 */
  esp -= 4; W32(esp, 0x47d865u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 47d865: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47d869: mov ecx, esi */
  ecx = esi;
/* 47d86b: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47d86f: call 0x462c5b */
  esp -= 4; W32(esp, 0x47d874u); SPILL(); f_462c5b(); if (g_unwind) return; RELOAD();
/* 47d874: mov eax, esi */
  eax = esi;
/* 47d876: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47d877: ret 8 */
  esp += 12; SPILL(); return;
}

void f_47d87a(void) {
  LOAD_REGS();
L_47d87a: /* 47d87a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47d87b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47d87d: mov esi, ecx */
  esi = ecx;
/* 47d87f: call 0x4624b0 */
  esp -= 4; W32(esp, 0x47d884u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 47d884: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47d888: mov ecx, esi */
  ecx = esi;
/* 47d88a: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47d88e: call 0x462c5b */
  esp -= 4; W32(esp, 0x47d893u); SPILL(); f_462c5b(); if (g_unwind) return; RELOAD();
/* 47d893: mov eax, esi */
  eax = esi;
/* 47d895: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47d896: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_47d899(void) {
  LOAD_REGS();
L_47d899: /* 47d899: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47d89a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 47d89c: mov esi, ecx */
  esi = ecx;
/* 47d89e: call 0x4624b0 */
  esp -= 4; W32(esp, 0x47d8a3u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 47d8a3: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 47d8a7: cmp dword ptr [esp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47d8ab: je 0x47d8bf */
  if (zf) goto L_47d8bf;
L_47d8ad: /* 47d8ad: sub eax, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 47d8b1: mov ecx, esi */
  ecx = esi;
/* 47d8b3: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 47d8b5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47d8b6: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 47d8ba: call 0x462c5b */
  esp -= 4; W32(esp, 0x47d8bfu); SPILL(); f_462c5b(); if (g_unwind) return; RELOAD();
L_47d8bf: /* 47d8bf: mov eax, esi */
  eax = esi;
/* 47d8c1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47d8c2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_47d8c5(void) {
  LOAD_REGS();
L_47d8c5: /* 47d8c5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47d8c6: mov ebp, esp */
  ebp = esp;
/* 47d8c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47d8c9: push dword ptr [ecx + 0x10] */
  { uint32_t v = R32((uint32_t)(ecx + 0x10u)); esp -= 4; W32(esp, v); }
/* 47d8cc: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 47d8cf: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47d8d3: call 0x46172f */
  esp -= 4; W32(esp, 0x47d8d8u); SPILL(); f_46172f(); if (g_unwind) return; RELOAD();
/* 47d8d8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47d8db: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47d8dc: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47d8df(void) {
  LOAD_REGS();
L_47d8df: /* 47d8df: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47d8e0: mov ebp, esp */
  ebp = esp;
/* 47d8e2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47d8e3: push dword ptr [ecx + 0x10] */
  { uint32_t v = R32((uint32_t)(ecx + 0x10u)); esp -= 4; W32(esp, v); }
/* 47d8e6: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 47d8e9: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47d8ed: call 0x462c22 */
  esp -= 4; W32(esp, 0x47d8f2u); SPILL(); f_462c22(); if (g_unwind) return; RELOAD();
/* 47d8f2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47d8f5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47d8f6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47d8f9(void) {
  LOAD_REGS();
L_47d8f9: /* 47d8f9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 47d8fa: mov ebp, esp */
  ebp = esp;
/* 47d8fc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 47d8fd: push dword ptr [ecx + 0x14] */
  { uint32_t v = R32((uint32_t)(ecx + 0x14u)); esp -= 4; W32(esp, v); }
/* 47d900: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 47d903: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47d907: call 0x462c22 */
  esp -= 4; W32(esp, 0x47d90cu); SPILL(); f_462c22(); if (g_unwind) return; RELOAD();
/* 47d90c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47d90f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47d910: ret 4 */
  esp += 8; SPILL(); return;
}

void f_47d913(void) {
  LOAD_REGS();
L_47d913: /* 47d913: mov eax, 0x48d17f */
  eax = 0x48d17fu;
/* 47d918: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47d91du); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47d91d: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47d920: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47d925: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47d928: or dword ptr [ebp - 0x14], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 47d92c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47d92d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47d92e: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 47d931: xor ebx, ebx */
  ebx = 0;
/* 47d933: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47d936: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 47d939: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 47d93a: test ah, 0x40 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47d93d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47d93e: je 0x47da0f */
  if (zf) goto L_47da0f;
L_47d944: /* 47d944: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47d947: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47d948: mov ecx, esi */
  ecx = esi;
/* 47d94a: call 0x464a5a */
  esp -= 4; W32(esp, 0x47d94fu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47d94f: xor edi, edi */
  edi = 0;
/* 47d951: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47d952: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 47d955: call 0x4797fd */
  esp -= 4; W32(esp, 0x47d95au); SPILL(); f_4797fd(); if (g_unwind) return; RELOAD();
/* 47d95a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47d95e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47d95f: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47d962: mov esi, eax */
  esi = eax;
/* 47d964: call 0x461389 */
  esp -= 4; W32(esp, 0x47d969u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47d969: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47d96a: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 47d96d: mov dword ptr [ebp - 0x20], 0xf */
  W32((uint32_t)(ebp + 0xffffffe0u), 0xfu);
/* 47d974: call 0x461ed0 */
  esp -= 4; W32(esp, 0x47d979u); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
/* 47d979: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47d97a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47d97b: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 47d97e: call 0x4661b6 */
  esp -= 4; W32(esp, 0x47d983u); SPILL(); f_4661b6(); if (g_unwind) return; RELOAD();
/* 47d983: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 47d986: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47d987: mov ecx, esi */
  ecx = esi;
/* 47d989: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47d98c: call 0x471eaa */
  esp -= 4; W32(esp, 0x47d991u); SPILL(); f_471eaa(); if (g_unwind) return; RELOAD();
/* 47d991: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 47d993: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47d994: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47d995: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 47d998: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 47d99c: call 0x466014 */
  esp -= 4; W32(esp, 0x47d9a1u); SPILL(); f_466014(); if (g_unwind) return; RELOAD();
/* 47d9a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47d9a2: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 47d9a5: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 47d9a8: call 0x461ea8 */
  esp -= 4; W32(esp, 0x47d9adu); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 47d9ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47d9ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47d9af: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 47d9b2: call 0x466156 */
  esp -= 4; W32(esp, 0x47d9b7u); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
/* 47d9b7: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 47d9ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47d9bb: mov ecx, esi */
  ecx = esi;
/* 47d9bd: call 0x471ec1 */
  esp -= 4; W32(esp, 0x47d9c2u); SPILL(); f_471ec1(); if (g_unwind) return; RELOAD();
/* 47d9c2: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 47d9c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47d9c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47d9c6: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 47d9c9: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 47d9cd: call 0x466014 */
  esp -= 4; W32(esp, 0x47d9d2u); SPILL(); f_466014(); if (g_unwind) return; RELOAD();
/* 47d9d2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47d9d3: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 47d9d6: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 47d9d9: call 0x461ea8 */
  esp -= 4; W32(esp, 0x47d9deu); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 47d9de: cmp dword ptr [ebp - 0x20], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47d9e2: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 47d9e5: jae 0x47d9ea */
  if (!cf) goto L_47d9ea;
L_47d9e7: /* 47d9e7: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
L_47d9ea: /* 47d9ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47d9eb: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 47d9ed: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47d9f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47d9f1: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47d9f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47d9f5: call 0x47d2e6 */
  esp -= 4; W32(esp, 0x47d9fau); SPILL(); f_47d2e6(); if (g_unwind) return; RELOAD();
/* 47d9fa: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47d9fe: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47da01: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47da02: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 47da05: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 47da08: call 0x461ea8 */
  esp -= 4; W32(esp, 0x47da0du); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 47da0d: jmp 0x47da7a */
  goto L_47da7a;
L_47da0f: /* 47da0f: call dword ptr [0x48e0b0] */
  esp -= 4; W32(esp, 0x47da15u); SPILL(); f_4102a5(); if (g_unwind) return; /* MSVCR70!_errno */ RELOAD();
/* 47da15: xor edi, edi */
  edi = 0;
/* 47da17: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 47da19: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 47da1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47da1d: mov ecx, esi */
  ecx = esi;
/* 47da1f: call 0x464a5a */
  esp -= 4; W32(esp, 0x47da24u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47da24: mov esi, dword ptr [esi + 0xc] */
  esi = R32((uint32_t)(esi + 0xcu));
/* 47da27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47da28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47da29: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47da2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47da2d: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47da30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47da31: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 47da34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47da35: mov dword ptr [ebp - 4], 4 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 47da3c: call 0x47a24d */
  esp -= 4; W32(esp, 0x47da41u); SPILL(); f_47a24d(); if (g_unwind) return; RELOAD();
/* 47da41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47da42: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47da45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47da46: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 47da49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47da4a: call dword ptr [0x48e0c0] */
  esp -= 4; W32(esp, 0x47da50u); SPILL(); f_417982(); if (g_unwind) return; /* MSVCR70!strtoul */ RELOAD();
/* 47da50: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47da54: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47da57: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 47da5a: mov esi, eax */
  esi = eax;
/* 47da5c: call 0x461389 */
  esp -= 4; W32(esp, 0x47da61u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47da61: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 47da64: cmp dword ptr [ebp - 0x1c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47da67: je 0x47da7a */
  if (zf) goto L_47da7a;
L_47da69: /* 47da69: call dword ptr [0x48e0b0] */
  esp -= 4; W32(esp, 0x47da6fu); SPILL(); f_4102a5(); if (g_unwind) return; /* MSVCR70!_errno */ RELOAD();
/* 47da6f: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47da71: jne 0x47da7a */
  if (!zf) goto L_47da7a;
L_47da73: /* 47da73: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 47da75: ja 0x47da7a */
  if ((!cf && !zf)) goto L_47da7a;
L_47da77: /* 47da77: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
L_47da7a: /* 47da7a: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47da7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47da7e: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47da81: call 0x46e745 */
  esp -= 4; W32(esp, 0x47da86u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47da86: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47da88: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 47da8b: je 0x47da8f */
  if (zf) goto L_47da8f;
L_47da8d: /* 47da8d: or dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_47da8f: /* 47da8f: cmp dword ptr [ebp - 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47da92: jge 0x47da99 */
  if ((sf == of)) goto L_47da99;
L_47da94: /* 47da94: or dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
/* 47da97: jmp 0x47daa1 */
  goto L_47daa1;
L_47da99: /* 47da99: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 47da9c: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 47da9f: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
L_47daa1: /* 47daa1: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47daa4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47daa7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47daa9: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47daac: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47daaf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47dab2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47dab9: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47dabc: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47dabf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47dac0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47dac1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47dac2: call 0x46190c */
  esp -= 4; W32(esp, 0x47dac7u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47dac7: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47dac8: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47dacb(void) {
  LOAD_REGS();
L_47dacb: /* 47dacb: mov eax, 0x48d1c3 */
  eax = 0x48d1c3u;
/* 47dad0: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47dad5u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47dad5: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47dad8: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47dadd: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47dae0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47dae1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47dae2: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47dae8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47dae9: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47daec: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47daeeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47daee: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47daf1: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 47daf4: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47daf7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47daf8: mov ecx, edi */
  ecx = edi;
/* 47dafa: call 0x464a5a */
  esp -= 4; W32(esp, 0x47daffu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47daff: mov edi, dword ptr [edi + 0xc] */
  edi = R32((uint32_t)(edi + 0xcu));
/* 47db02: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47db06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47db07: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47db08: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47db0b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47db0c: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47db0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47db10: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 47db13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47db14: call 0x47a24d */
  esp -= 4; W32(esp, 0x47db19u); SPILL(); f_47a24d(); if (g_unwind) return; RELOAD();
/* 47db19: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47db1d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47db20: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47db23: mov edi, eax */
  edi = eax;
/* 47db25: call 0x461389 */
  esp -= 4; W32(esp, 0x47db2au); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47db2a: cmp byte ptr [ebp - 0x34], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffccu))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47db2e: lea ebx, [ebp - 0x33] */
  ebx = (uint32_t)(ebp + 0xffffffcdu);
/* 47db31: je 0x47db36 */
  if (zf) goto L_47db36;
L_47db33: /* 47db33: lea ebx, [ebp - 0x34] */
  ebx = (uint32_t)(ebp + 0xffffffccu);
L_47db36: /* 47db36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47db37: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47db3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47db3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47db3c: call dword ptr [0x48e0c0] */
  esp -= 4; W32(esp, 0x47db42u); SPILL(); f_417982(); if (g_unwind) return; /* MSVCR70!strtoul */ RELOAD();
/* 47db42: mov edi, eax */
  edi = eax;
/* 47db44: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47db47: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47db4a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47db4b: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47db4e: call 0x46e745 */
  esp -= 4; W32(esp, 0x47db53u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47db53: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47db55: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 47db58: je 0x47db5d */
  if (zf) goto L_47db5d;
L_47db5a: /* 47db5a: or dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_47db5d: /* 47db5d: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47db60: je 0x47db84 */
  if (zf) goto L_47db84;
L_47db62: /* 47db62: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47db64u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47db64: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47db67: jne 0x47db81 */
  if (!zf) goto L_47db81;
L_47db69: /* 47db69: cmp edi, 0xffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 47db6f: ja 0x47db81 */
  if ((!cf && !zf)) goto L_47db81;
L_47db71: /* 47db71: cmp byte ptr [ebp - 0x34], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffccu))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47db75: jne 0x47db79 */
  if (!zf) goto L_47db79;
L_47db77: /* 47db77: neg edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(0 - a);
  edi = r;
  }
L_47db79: /* 47db79: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47db7c: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
/* 47db7f: jmp 0x47db87 */
  goto L_47db87;
L_47db81: /* 47db81: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
L_47db84: /* 47db84: or dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_47db87: /* 47db87: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47db8a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47db8d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47db8f: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47db92: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47db95: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47db98: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47db9f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47dba2: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47dba5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47dba6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47dba7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47dba8: call 0x46190c */
  esp -= 4; W32(esp, 0x47dbadu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47dbad: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47dbae: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47dbb1(void) {
  LOAD_REGS();
L_47dbb1: /* 47dbb1: mov eax, 0x48d0eb */
  eax = 0x48d0ebu;
/* 47dbb6: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47dbbbu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47dbbb: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47dbbe: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47dbc3: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47dbc6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47dbc7: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47dbcd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47dbce: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47dbd1: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47dbd3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47dbd3: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47dbd6: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 47dbd9: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47dbdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47dbdd: mov ecx, edi */
  ecx = edi;
/* 47dbdf: call 0x464a5a */
  esp -= 4; W32(esp, 0x47dbe4u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47dbe4: mov edi, dword ptr [edi + 0xc] */
  edi = R32((uint32_t)(edi + 0xcu));
/* 47dbe7: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47dbeb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47dbec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47dbed: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47dbf0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47dbf1: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47dbf4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47dbf5: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 47dbf8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47dbf9: call 0x47a24d */
  esp -= 4; W32(esp, 0x47dbfeu); SPILL(); f_47a24d(); if (g_unwind) return; RELOAD();
/* 47dbfe: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47dc02: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47dc05: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 47dc08: mov edi, eax */
  edi = eax;
/* 47dc0a: call 0x461389 */
  esp -= 4; W32(esp, 0x47dc0fu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47dc0f: cmp byte ptr [ebp - 0x38], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffc8u))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47dc13: lea eax, [ebp - 0x37] */
  eax = (uint32_t)(ebp + 0xffffffc9u);
/* 47dc16: je 0x47dc1b */
  if (zf) goto L_47dc1b;
L_47dc18: /* 47dc18: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
L_47dc1b: /* 47dc1b: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 47dc1e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47dc1f: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 47dc22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47dc23: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47dc26: call dword ptr [0x48e0c0] */
  esp -= 4; W32(esp, 0x47dc2cu); SPILL(); f_417982(); if (g_unwind) return; /* MSVCR70!strtoul */ RELOAD();
/* 47dc2c: mov edi, eax */
  edi = eax;
/* 47dc2e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47dc31: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47dc34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47dc35: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47dc38: call 0x46e745 */
  esp -= 4; W32(esp, 0x47dc3du); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47dc3d: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47dc3f: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 47dc42: je 0x47dc47 */
  if (zf) goto L_47dc47;
L_47dc44: /* 47dc44: or dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_47dc47: /* 47dc47: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 47dc4a: cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47dc4d: je 0x47dc6d */
  if (zf) goto L_47dc6d;
L_47dc4f: /* 47dc4f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47dc51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47dc51: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47dc54: jne 0x47dc6a */
  if (!zf) goto L_47dc6a;
L_47dc56: /* 47dc56: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 47dc59: ja 0x47dc6a */
  if ((!cf && !zf)) goto L_47dc6a;
L_47dc5b: /* 47dc5b: cmp byte ptr [ebp - 0x38], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffc8u))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47dc5f: jne 0x47dc63 */
  if (!zf) goto L_47dc63;
L_47dc61: /* 47dc61: neg edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(0 - a);
  edi = r;
  }
L_47dc63: /* 47dc63: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47dc66: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 47dc68: jmp 0x47dc70 */
  goto L_47dc70;
L_47dc6a: /* 47dc6a: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
L_47dc6d: /* 47dc6d: or dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_47dc70: /* 47dc70: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47dc73: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47dc76: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47dc78: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47dc7b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47dc7e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47dc81: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47dc88: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47dc8b: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47dc8e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47dc8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47dc90: call 0x46190c */
  esp -= 4; W32(esp, 0x47dc95u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47dc95: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47dc96: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47dc99(void) {
  LOAD_REGS();
L_47dc99: /* 47dc99: mov eax, 0x48d1c3 */
  eax = 0x48d1c3u;
/* 47dc9e: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47dca3u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47dca3: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47dca6: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47dcab: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47dcae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47dcaf: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47dcb5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47dcb6: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47dcb9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47dcbbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47dcbb: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47dcbe: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 47dcc1: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47dcc4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47dcc5: mov ecx, edi */
  ecx = edi;
/* 47dcc7: call 0x464a5a */
  esp -= 4; W32(esp, 0x47dcccu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47dccc: mov edi, dword ptr [edi + 0xc] */
  edi = R32((uint32_t)(edi + 0xcu));
/* 47dccf: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47dcd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47dcd4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47dcd5: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47dcd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47dcd9: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47dcdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47dcdd: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 47dce0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47dce1: call 0x47a24d */
  esp -= 4; W32(esp, 0x47dce6u); SPILL(); f_47a24d(); if (g_unwind) return; RELOAD();
/* 47dce6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47dce7: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47dcea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47dceb: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 47dcee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47dcef: call dword ptr [0x48e0ac] */
  esp -= 4; W32(esp, 0x47dcf5u); SPILL(); f_41796b(); if (g_unwind) return; /* MSVCR70!strtol */ RELOAD();
/* 47dcf5: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47dcf9: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47dcfc: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47dcff: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 47dd02: call 0x461389 */
  esp -= 4; W32(esp, 0x47dd07u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47dd07: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47dd0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47dd0b: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47dd0e: call 0x46e745 */
  esp -= 4; W32(esp, 0x47dd13u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47dd13: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47dd15: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 47dd18: je 0x47dd1d */
  if (zf) goto L_47dd1d;
L_47dd1a: /* 47dd1a: or dword ptr [edi], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi), r);
  }
L_47dd1d: /* 47dd1d: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 47dd20: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47dd23: je 0x47dd36 */
  if (zf) goto L_47dd36;
L_47dd25: /* 47dd25: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47dd27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47dd27: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47dd2a: jne 0x47dd36 */
  if (!zf) goto L_47dd36;
L_47dd2c: /* 47dd2c: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47dd2f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47dd32: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47dd34: jmp 0x47dd39 */
  goto L_47dd39;
L_47dd36: /* 47dd36: or dword ptr [edi], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi), r);
  }
L_47dd39: /* 47dd39: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47dd3c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47dd3f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47dd41: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47dd44: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47dd47: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47dd4a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47dd51: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47dd54: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47dd57: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47dd58: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47dd59: call 0x46190c */
  esp -= 4; W32(esp, 0x47dd5eu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47dd5e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47dd5f: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47dd62(void) {
  LOAD_REGS();
L_47dd62: /* 47dd62: mov eax, 0x48d1c3 */
  eax = 0x48d1c3u;
/* 47dd67: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47dd6cu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47dd6c: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47dd6f: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47dd74: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47dd77: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47dd78: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47dd7e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47dd7f: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47dd82: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47dd84u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47dd84: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47dd87: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 47dd8a: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47dd8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47dd8e: mov ecx, edi */
  ecx = edi;
/* 47dd90: call 0x464a5a */
  esp -= 4; W32(esp, 0x47dd95u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47dd95: mov edi, dword ptr [edi + 0xc] */
  edi = R32((uint32_t)(edi + 0xcu));
/* 47dd98: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47dd9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47dd9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47dd9e: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47dda1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47dda2: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47dda5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47dda6: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 47dda9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ddaa: call 0x47a24d */
  esp -= 4; W32(esp, 0x47ddafu); SPILL(); f_47a24d(); if (g_unwind) return; RELOAD();
/* 47ddaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ddb0: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47ddb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ddb4: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 47ddb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ddb8: call dword ptr [0x48e0c0] */
  esp -= 4; W32(esp, 0x47ddbeu); SPILL(); f_417982(); if (g_unwind) return; /* MSVCR70!strtoul */ RELOAD();
/* 47ddbe: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47ddc2: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47ddc5: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47ddc8: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 47ddcb: call 0x461389 */
  esp -= 4; W32(esp, 0x47ddd0u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47ddd0: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47ddd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ddd4: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47ddd7: call 0x46e745 */
  esp -= 4; W32(esp, 0x47dddcu); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47dddc: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47ddde: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 47dde1: je 0x47dde6 */
  if (zf) goto L_47dde6;
L_47dde3: /* 47dde3: or dword ptr [edi], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi), r);
  }
L_47dde6: /* 47dde6: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 47dde9: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47ddec: je 0x47ddff */
  if (zf) goto L_47ddff;
L_47ddee: /* 47ddee: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47ddf0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47ddf0: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47ddf3: jne 0x47ddff */
  if (!zf) goto L_47ddff;
L_47ddf5: /* 47ddf5: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47ddf8: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47ddfb: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47ddfd: jmp 0x47de02 */
  goto L_47de02;
L_47ddff: /* 47ddff: or dword ptr [edi], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi), r);
  }
L_47de02: /* 47de02: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47de05: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47de08: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47de0a: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47de0d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47de10: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47de13: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47de1a: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47de1d: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47de20: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47de21: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47de22: call 0x46190c */
  esp -= 4; W32(esp, 0x47de27u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47de27: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47de28: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47de2b(void) {
  LOAD_REGS();
L_47de2b: /* 47de2b: mov eax, 0x48d1c3 */
  eax = 0x48d1c3u;
/* 47de30: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47de35u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47de35: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47de38: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47de3d: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47de40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47de41: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47de47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47de48: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47de4b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47de4du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47de4d: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47de50: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 47de53: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47de56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47de57: mov ecx, edi */
  ecx = edi;
/* 47de59: call 0x464a5a */
  esp -= 4; W32(esp, 0x47de5eu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47de5e: mov edi, dword ptr [edi + 0xc] */
  edi = R32((uint32_t)(edi + 0xcu));
/* 47de61: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47de65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47de66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47de67: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47de6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47de6b: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47de6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47de6f: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 47de72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47de73: call 0x47a24d */
  esp -= 4; W32(esp, 0x47de78u); SPILL(); f_47a24d(); if (g_unwind) return; RELOAD();
/* 47de78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47de79: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47de7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47de7d: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 47de80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47de81: call dword ptr [0x48e0c4] */
  esp -= 4; W32(esp, 0x47de87u); SPILL(); f_417026(); if (g_unwind) return; /* MSVCR70!_strtoi64 */ RELOAD();
/* 47de87: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47de8b: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47de8e: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47de91: mov edi, eax */
  edi = eax;
/* 47de93: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 47de96: call 0x461389 */
  esp -= 4; W32(esp, 0x47de9bu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47de9b: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47de9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47de9f: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47dea2: call 0x46e745 */
  esp -= 4; W32(esp, 0x47dea7u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47dea7: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47dea9: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 47deac: je 0x47deb1 */
  if (zf) goto L_47deb1;
L_47deae: /* 47deae: or dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_47deb1: /* 47deb1: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 47deb4: cmp dword ptr [ebp - 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47deb7: je 0x47ded0 */
  if (zf) goto L_47ded0;
L_47deb9: /* 47deb9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47debbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47debb: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47debe: jne 0x47decd */
  if (!zf) goto L_47decd;
L_47dec0: /* 47dec0: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47dec3: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47dec6: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 47dec8: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47decb: jmp 0x47ded3 */
  goto L_47ded3;
L_47decd: /* 47decd: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
L_47ded0: /* 47ded0: or dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_47ded3: /* 47ded3: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47ded6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47ded9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47dedb: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47dede: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47dee1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47dee4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47deeb: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47deee: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47def1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47def2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47def3: call 0x46190c */
  esp -= 4; W32(esp, 0x47def8u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47def8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47def9: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47defc(void) {
  LOAD_REGS();
L_47defc: /* 47defc: mov eax, 0x48d1c3 */
  eax = 0x48d1c3u;
/* 47df01: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47df06u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47df06: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47df09: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47df0e: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47df11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47df12: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47df18: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47df19: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47df1c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47df1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47df1e: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47df21: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 47df24: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47df27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47df28: mov ecx, edi */
  ecx = edi;
/* 47df2a: call 0x464a5a */
  esp -= 4; W32(esp, 0x47df2fu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47df2f: mov edi, dword ptr [edi + 0xc] */
  edi = R32((uint32_t)(edi + 0xcu));
/* 47df32: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47df36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47df37: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47df38: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47df3b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47df3c: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47df3f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47df40: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 47df43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47df44: call 0x47a24d */
  esp -= 4; W32(esp, 0x47df49u); SPILL(); f_47a24d(); if (g_unwind) return; RELOAD();
/* 47df49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47df4a: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47df4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47df4e: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 47df51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47df52: call dword ptr [0x48e0c8] */
  esp -= 4; W32(esp, 0x47df58u); SPILL(); f_41703d(); if (g_unwind) return; /* MSVCR70!_strtoui64 */ RELOAD();
/* 47df58: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47df5c: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47df5f: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47df62: mov edi, eax */
  edi = eax;
/* 47df64: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 47df67: call 0x461389 */
  esp -= 4; W32(esp, 0x47df6cu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47df6c: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47df6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47df70: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47df73: call 0x46e745 */
  esp -= 4; W32(esp, 0x47df78u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47df78: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47df7a: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 47df7d: je 0x47df82 */
  if (zf) goto L_47df82;
L_47df7f: /* 47df7f: or dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_47df82: /* 47df82: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 47df85: cmp dword ptr [ebp - 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47df88: je 0x47dfa1 */
  if (zf) goto L_47dfa1;
L_47df8a: /* 47df8a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47df8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47df8c: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47df8f: jne 0x47df9e */
  if (!zf) goto L_47df9e;
L_47df91: /* 47df91: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47df94: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47df97: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 47df99: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47df9c: jmp 0x47dfa4 */
  goto L_47dfa4;
L_47df9e: /* 47df9e: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
L_47dfa1: /* 47dfa1: or dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_47dfa4: /* 47dfa4: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47dfa7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47dfaa: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47dfac: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47dfaf: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47dfb2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47dfb5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47dfbc: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47dfbf: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47dfc2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47dfc3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47dfc4: call 0x46190c */
  esp -= 4; W32(esp, 0x47dfc9u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47dfc9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47dfca: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47dfcd(void) {
  LOAD_REGS();
L_47dfcd: /* 47dfcd: mov eax, 0x48d1c3 */
  eax = 0x48d1c3u;
/* 47dfd2: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47dfd7u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47dfd7: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47dfda: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47dfdf: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47dfe2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47dfe3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47dfe4: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47dfea: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47dfed: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47dfefu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47dfef: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47dff2: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 47dff5: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47dff8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47dff9: call 0x464a5a */
  esp -= 4; W32(esp, 0x47dffeu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47dffe: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47e002: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e003: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47e006: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e007: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47e00a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e00b: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 47e00e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e00f: call 0x47a532 */
  esp -= 4; W32(esp, 0x47e014u); SPILL(); f_47a532(); if (g_unwind) return; RELOAD();
/* 47e014: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e015: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47e018: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e019: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 47e01c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e01d: call 0x48b1c6 */
  esp -= 4; W32(esp, 0x47e022u); SPILL(); f_48b1c6(); if (g_unwind) return; RELOAD();
/* 47e022: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 47e025: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47e029: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47e02c: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47e02f: call 0x461389 */
  esp -= 4; W32(esp, 0x47e034u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47e034: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47e037: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e038: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47e03b: call 0x46e745 */
  esp -= 4; W32(esp, 0x47e040u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47e040: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47e042: mov ebx, dword ptr [ebp + 0x20] */
  ebx = R32((uint32_t)(ebp + 0x20u));
/* 47e045: je 0x47e04a */
  if (zf) goto L_47e04a;
L_47e047: /* 47e047: or dword ptr [ebx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx), r);
  }
L_47e04a: /* 47e04a: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 47e04d: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47e050: je 0x47e063 */
  if (zf) goto L_47e063;
L_47e052: /* 47e052: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47e054u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47e054: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47e057: jne 0x47e063 */
  if (!zf) goto L_47e063;
L_47e059: /* 47e059: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 47e05c: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47e05f: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 47e061: jmp 0x47e066 */
  goto L_47e066;
L_47e063: /* 47e063: or dword ptr [ebx], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx), r);
  }
L_47e066: /* 47e066: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47e069: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47e06c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47e06e: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47e071: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47e074: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47e077: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47e07e: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47e081: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47e084: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47e085: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47e086: call 0x46190c */
  esp -= 4; W32(esp, 0x47e08bu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47e08b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47e08c: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47e08f(void) {
  LOAD_REGS();
L_47e08f: /* 47e08f: mov eax, 0x48d1c3 */
  eax = 0x48d1c3u;
/* 47e094: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47e099u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47e099: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47e09c: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47e0a1: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47e0a4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47e0a5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47e0a6: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47e0ac: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47e0af: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47e0b1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47e0b1: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47e0b4: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 47e0b7: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47e0ba: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e0bb: call 0x464a5a */
  esp -= 4; W32(esp, 0x47e0c0u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47e0c0: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47e0c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e0c5: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47e0c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e0c9: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47e0cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e0cd: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 47e0d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e0d1: call 0x47a532 */
  esp -= 4; W32(esp, 0x47e0d6u); SPILL(); f_47a532(); if (g_unwind) return; RELOAD();
/* 47e0d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e0d7: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47e0da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e0db: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 47e0de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e0df: call 0x48b191 */
  esp -= 4; W32(esp, 0x47e0e4u); SPILL(); f_48b191(); if (g_unwind) return; RELOAD();
/* 47e0e4: fstp qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 47e0e7: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47e0eb: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47e0ee: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47e0f1: call 0x461389 */
  esp -= 4; W32(esp, 0x47e0f6u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47e0f6: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47e0f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e0fa: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47e0fd: call 0x46e745 */
  esp -= 4; W32(esp, 0x47e102u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47e102: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47e104: mov ebx, dword ptr [ebp + 0x20] */
  ebx = R32((uint32_t)(ebp + 0x20u));
/* 47e107: je 0x47e10c */
  if (zf) goto L_47e10c;
L_47e109: /* 47e109: or dword ptr [ebx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx), r);
  }
L_47e10c: /* 47e10c: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 47e10f: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47e112: je 0x47e125 */
  if (zf) goto L_47e125;
L_47e114: /* 47e114: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47e116u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47e116: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47e119: jne 0x47e125 */
  if (!zf) goto L_47e125;
L_47e11b: /* 47e11b: fld qword ptr [ebp - 0x1c] */
  { double v = F64((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 47e11e: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47e121: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 47e123: jmp 0x47e128 */
  goto L_47e128;
L_47e125: /* 47e125: or dword ptr [ebx], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx), r);
  }
L_47e128: /* 47e128: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47e12b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47e12e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47e130: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47e133: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47e136: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47e139: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47e140: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47e143: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47e146: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47e147: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47e148: call 0x46190c */
  esp -= 4; W32(esp, 0x47e14du); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47e14d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47e14e: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47e151(void) {
  LOAD_REGS();
L_47e151: /* 47e151: mov eax, 0x48d1c3 */
  eax = 0x48d1c3u;
/* 47e156: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47e15bu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47e15b: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47e15e: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47e163: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47e166: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47e167: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47e168: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47e16e: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47e171: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47e173u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47e173: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47e176: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 47e179: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47e17c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e17d: call 0x464a5a */
  esp -= 4; W32(esp, 0x47e182u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47e182: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47e186: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e187: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47e18a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e18b: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47e18e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e18f: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 47e192: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e193: call 0x47a532 */
  esp -= 4; W32(esp, 0x47e198u); SPILL(); f_47a532(); if (g_unwind) return; RELOAD();
/* 47e198: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e199: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47e19c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e19d: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 47e1a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e1a1: call 0x48b1c6 */
  esp -= 4; W32(esp, 0x47e1a6u); SPILL(); f_48b1c6(); if (g_unwind) return; RELOAD();
/* 47e1a6: fstp qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 47e1a9: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47e1ad: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47e1b0: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47e1b3: call 0x461389 */
  esp -= 4; W32(esp, 0x47e1b8u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47e1b8: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47e1bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e1bc: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47e1bf: call 0x46e745 */
  esp -= 4; W32(esp, 0x47e1c4u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47e1c4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47e1c6: mov ebx, dword ptr [ebp + 0x20] */
  ebx = R32((uint32_t)(ebp + 0x20u));
/* 47e1c9: je 0x47e1ce */
  if (zf) goto L_47e1ce;
L_47e1cb: /* 47e1cb: or dword ptr [ebx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx), r);
  }
L_47e1ce: /* 47e1ce: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 47e1d1: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47e1d4: je 0x47e1e7 */
  if (zf) goto L_47e1e7;
L_47e1d6: /* 47e1d6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47e1d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47e1d8: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47e1db: jne 0x47e1e7 */
  if (!zf) goto L_47e1e7;
L_47e1dd: /* 47e1dd: fld qword ptr [ebp - 0x1c] */
  { double v = F64((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 47e1e0: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47e1e3: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 47e1e5: jmp 0x47e1ea */
  goto L_47e1ea;
L_47e1e7: /* 47e1e7: or dword ptr [ebx], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx), r);
  }
L_47e1ea: /* 47e1ea: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47e1ed: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47e1f0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47e1f2: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47e1f5: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47e1f8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47e1fb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47e202: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47e205: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47e208: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47e209: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47e20a: call 0x46190c */
  esp -= 4; W32(esp, 0x47e20fu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47e20f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47e210: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47e213(void) {
  LOAD_REGS();
L_47e213: /* 47e213: mov eax, 0x48d1c3 */
  eax = 0x48d1c3u;
/* 47e218: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47e21du); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47e21d: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47e220: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47e225: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47e228: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47e229: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47e22a: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47e230: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47e233: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47e235u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47e235: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47e238: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 47e23b: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47e23e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e23f: call 0x464a5a */
  esp -= 4; W32(esp, 0x47e244u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47e244: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47e248: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e249: push 0x800 */
  { uint32_t v = 0x800u; esp -= 4; W32(esp, v); }
/* 47e24e: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47e251: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e252: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47e255: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e256: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 47e259: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e25a: call 0x47a24d */
  esp -= 4; W32(esp, 0x47e25fu); SPILL(); f_47a24d(); if (g_unwind) return; RELOAD();
/* 47e25f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47e263: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47e266: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47e269: mov ebx, eax */
  ebx = eax;
/* 47e26b: call 0x461389 */
  esp -= 4; W32(esp, 0x47e270u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47e270: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47e271: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47e274: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e275: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 47e278: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e279: call dword ptr [0x48e0c0] */
  esp -= 4; W32(esp, 0x47e27fu); SPILL(); f_417982(); if (g_unwind) return; /* MSVCR70!strtoul */ RELOAD();
/* 47e27f: and dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 47e283: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 47e286: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47e289: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47e28c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e28d: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47e290: call 0x46e745 */
  esp -= 4; W32(esp, 0x47e295u); SPILL(); f_46e745(); if (g_unwind) return; RELOAD();
/* 47e295: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47e297: mov ebx, dword ptr [ebp + 0x20] */
  ebx = R32((uint32_t)(ebp + 0x20u));
/* 47e29a: je 0x47e29f */
  if (zf) goto L_47e29f;
L_47e29c: /* 47e29c: or dword ptr [ebx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx), r);
  }
L_47e29f: /* 47e29f: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 47e2a2: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47e2a5: je 0x47e2b8 */
  if (zf) goto L_47e2b8;
L_47e2a7: /* 47e2a7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47e2a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47e2a9: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47e2ac: jne 0x47e2b8 */
  if (!zf) goto L_47e2b8;
L_47e2ae: /* 47e2ae: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47e2b1: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 47e2b4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47e2b6: jmp 0x47e2bb */
  goto L_47e2bb;
L_47e2b8: /* 47e2b8: or dword ptr [ebx], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx), r);
  }
L_47e2bb: /* 47e2bb: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47e2be: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47e2c1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47e2c3: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47e2c6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47e2c9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47e2cc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47e2d3: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47e2d6: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47e2d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47e2da: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47e2db: call 0x46190c */
  esp -= 4; W32(esp, 0x47e2e0u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47e2e0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47e2e1: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47e2e4(void) {
  LOAD_REGS();
L_47e2e4: /* 47e2e4: mov eax, 0x48d1b1 */
  eax = 0x48d1b1u;
/* 47e2e9: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47e2eeu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47e2ee: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47e2f1: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47e2f6: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47e2f9: or dword ptr [ebp - 0x14], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 47e2fd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47e2fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47e2ff: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 47e302: xor ebx, ebx */
  ebx = 0;
/* 47e304: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47e307: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 47e30a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 47e30b: test ah, 0x40 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47e30e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47e30f: je 0x47e3e0 */
  if (zf) goto L_47e3e0;
L_47e315: /* 47e315: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47e318: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e319: mov ecx, esi */
  ecx = esi;
/* 47e31b: call 0x464a5a */
  esp -= 4; W32(esp, 0x47e320u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47e320: xor edi, edi */
  edi = 0;
/* 47e322: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e323: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 47e326: call 0x47989f */
  esp -= 4; W32(esp, 0x47e32bu); SPILL(); f_47989f(); if (g_unwind) return; RELOAD();
/* 47e32b: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47e32f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47e330: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47e333: mov esi, eax */
  esi = eax;
/* 47e335: call 0x461389 */
  esp -= 4; W32(esp, 0x47e33au); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47e33a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47e33b: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 47e33e: mov dword ptr [ebp - 0x20], 7 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x7u);
/* 47e345: call 0x4624dd */
  esp -= 4; W32(esp, 0x47e34au); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
/* 47e34a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47e34b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47e34c: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 47e34f: call 0x473297 */
  esp -= 4; W32(esp, 0x47e354u); SPILL(); f_473297(); if (g_unwind) return; RELOAD();
/* 47e354: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 47e357: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e358: mov ecx, esi */
  ecx = esi;
/* 47e35a: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47e35d: call 0x471eaa */
  esp -= 4; W32(esp, 0x47e362u); SPILL(); f_471eaa(); if (g_unwind) return; RELOAD();
/* 47e362: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 47e364: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47e365: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e366: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 47e369: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 47e36d: call 0x472d70 */
  esp -= 4; W32(esp, 0x47e372u); SPILL(); f_472d70(); if (g_unwind) return; RELOAD();
/* 47e372: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47e373: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 47e376: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 47e379: call 0x4624b0 */
  esp -= 4; W32(esp, 0x47e37eu); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 47e37e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47e37f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47e380: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 47e383: call 0x473236 */
  esp -= 4; W32(esp, 0x47e388u); SPILL(); f_473236(); if (g_unwind) return; RELOAD();
/* 47e388: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 47e38b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e38c: mov ecx, esi */
  ecx = esi;
/* 47e38e: call 0x471ec1 */
  esp -= 4; W32(esp, 0x47e393u); SPILL(); f_471ec1(); if (g_unwind) return; RELOAD();
/* 47e393: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 47e395: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47e396: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e397: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 47e39a: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 47e39e: call 0x472d70 */
  esp -= 4; W32(esp, 0x47e3a3u); SPILL(); f_472d70(); if (g_unwind) return; RELOAD();
/* 47e3a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47e3a4: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 47e3a7: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 47e3aa: call 0x4624b0 */
  esp -= 4; W32(esp, 0x47e3afu); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 47e3af: cmp dword ptr [ebp - 0x20], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47e3b3: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 47e3b6: jae 0x47e3bb */
  if (!cf) goto L_47e3bb;
L_47e3b8: /* 47e3b8: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
L_47e3bb: /* 47e3bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e3bc: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 47e3be: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47e3c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e3c2: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47e3c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e3c6: call 0x47d447 */
  esp -= 4; W32(esp, 0x47e3cbu); SPILL(); f_47d447(); if (g_unwind) return; RELOAD();
/* 47e3cb: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47e3cf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47e3d2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47e3d3: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 47e3d6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 47e3d9: call 0x4624b0 */
  esp -= 4; W32(esp, 0x47e3deu); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 47e3de: jmp 0x47e44b */
  goto L_47e44b;
L_47e3e0: /* 47e3e0: call dword ptr [0x48e0b0] */
  esp -= 4; W32(esp, 0x47e3e6u); SPILL(); f_4102a5(); if (g_unwind) return; /* MSVCR70!_errno */ RELOAD();
/* 47e3e6: xor edi, edi */
  edi = 0;
/* 47e3e8: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 47e3ea: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 47e3ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e3ee: mov ecx, esi */
  ecx = esi;
/* 47e3f0: call 0x464a5a */
  esp -= 4; W32(esp, 0x47e3f5u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47e3f5: mov esi, dword ptr [esi + 0xc] */
  esi = R32((uint32_t)(esi + 0xcu));
/* 47e3f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e3f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47e3fa: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47e3fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e3fe: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47e401: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e402: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 47e405: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e406: mov dword ptr [ebp - 4], 4 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 47e40d: call 0x47a7b2 */
  esp -= 4; W32(esp, 0x47e412u); SPILL(); f_47a7b2(); if (g_unwind) return; RELOAD();
/* 47e412: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e413: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47e416: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e417: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 47e41a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e41b: call dword ptr [0x48e0c0] */
  esp -= 4; W32(esp, 0x47e421u); SPILL(); f_417982(); if (g_unwind) return; /* MSVCR70!strtoul */ RELOAD();
/* 47e421: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47e425: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47e428: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 47e42b: mov esi, eax */
  esi = eax;
/* 47e42d: call 0x461389 */
  esp -= 4; W32(esp, 0x47e432u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47e432: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 47e435: cmp dword ptr [ebp - 0x1c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47e438: je 0x47e44b */
  if (zf) goto L_47e44b;
L_47e43a: /* 47e43a: call dword ptr [0x48e0b0] */
  esp -= 4; W32(esp, 0x47e440u); SPILL(); f_4102a5(); if (g_unwind) return; /* MSVCR70!_errno */ RELOAD();
/* 47e440: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47e442: jne 0x47e44b */
  if (!zf) goto L_47e44b;
L_47e444: /* 47e444: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 47e446: ja 0x47e44b */
  if ((!cf && !zf)) goto L_47e44b;
L_47e448: /* 47e448: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
L_47e44b: /* 47e44b: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47e44e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e44f: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47e452: call 0x46e77f */
  esp -= 4; W32(esp, 0x47e457u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47e457: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47e459: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 47e45c: je 0x47e460 */
  if (zf) goto L_47e460;
L_47e45e: /* 47e45e: or dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_47e460: /* 47e460: cmp dword ptr [ebp - 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47e463: jge 0x47e46a */
  if ((sf == of)) goto L_47e46a;
L_47e465: /* 47e465: or dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
/* 47e468: jmp 0x47e472 */
  goto L_47e472;
L_47e46a: /* 47e46a: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 47e46d: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 47e470: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
L_47e472: /* 47e472: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47e475: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47e478: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47e47a: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47e47d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47e480: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47e483: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47e48a: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47e48d: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47e490: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47e491: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47e492: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47e493: call 0x46190c */
  esp -= 4; W32(esp, 0x47e498u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47e498: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47e499: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47e49c(void) {
  LOAD_REGS();
L_47e49c: /* 47e49c: mov eax, 0x48d1c3 */
  eax = 0x48d1c3u;
/* 47e4a1: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47e4a6u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47e4a6: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47e4a9: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47e4ae: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47e4b1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47e4b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47e4b3: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47e4b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47e4ba: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47e4bd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47e4bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47e4bf: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47e4c2: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 47e4c5: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47e4c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e4c9: mov ecx, edi */
  ecx = edi;
/* 47e4cb: call 0x464a5a */
  esp -= 4; W32(esp, 0x47e4d0u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47e4d0: mov edi, dword ptr [edi + 0xc] */
  edi = R32((uint32_t)(edi + 0xcu));
/* 47e4d3: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47e4d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e4d8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47e4d9: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47e4dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e4dd: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47e4e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e4e1: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 47e4e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e4e5: call 0x47a7b2 */
  esp -= 4; W32(esp, 0x47e4eau); SPILL(); f_47a7b2(); if (g_unwind) return; RELOAD();
/* 47e4ea: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47e4ee: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47e4f1: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47e4f4: mov edi, eax */
  edi = eax;
/* 47e4f6: call 0x461389 */
  esp -= 4; W32(esp, 0x47e4fbu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47e4fb: cmp byte ptr [ebp - 0x34], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffccu))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47e4ff: lea ebx, [ebp - 0x33] */
  ebx = (uint32_t)(ebp + 0xffffffcdu);
/* 47e502: je 0x47e507 */
  if (zf) goto L_47e507;
L_47e504: /* 47e504: lea ebx, [ebp - 0x34] */
  ebx = (uint32_t)(ebp + 0xffffffccu);
L_47e507: /* 47e507: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47e508: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47e50b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e50c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47e50d: call dword ptr [0x48e0c0] */
  esp -= 4; W32(esp, 0x47e513u); SPILL(); f_417982(); if (g_unwind) return; /* MSVCR70!strtoul */ RELOAD();
/* 47e513: mov edi, eax */
  edi = eax;
/* 47e515: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47e518: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47e51b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e51c: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47e51f: call 0x46e77f */
  esp -= 4; W32(esp, 0x47e524u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47e524: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47e526: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 47e529: je 0x47e52e */
  if (zf) goto L_47e52e;
L_47e52b: /* 47e52b: or dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_47e52e: /* 47e52e: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47e531: je 0x47e555 */
  if (zf) goto L_47e555;
L_47e533: /* 47e533: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47e535u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47e535: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47e538: jne 0x47e552 */
  if (!zf) goto L_47e552;
L_47e53a: /* 47e53a: cmp edi, 0xffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 47e540: ja 0x47e552 */
  if ((!cf && !zf)) goto L_47e552;
L_47e542: /* 47e542: cmp byte ptr [ebp - 0x34], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffccu))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47e546: jne 0x47e54a */
  if (!zf) goto L_47e54a;
L_47e548: /* 47e548: neg edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(0 - a);
  edi = r;
  }
L_47e54a: /* 47e54a: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47e54d: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
/* 47e550: jmp 0x47e558 */
  goto L_47e558;
L_47e552: /* 47e552: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
L_47e555: /* 47e555: or dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_47e558: /* 47e558: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47e55b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47e55e: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47e560: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47e563: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47e566: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47e569: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47e570: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47e573: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47e576: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47e577: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47e578: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47e579: call 0x46190c */
  esp -= 4; W32(esp, 0x47e57eu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47e57e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47e57f: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47e582(void) {
  LOAD_REGS();
L_47e582: /* 47e582: mov eax, 0x48d0eb */
  eax = 0x48d0ebu;
/* 47e587: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47e58cu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47e58c: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47e58f: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47e594: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47e597: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47e598: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47e59e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47e59f: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47e5a2: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47e5a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47e5a4: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47e5a7: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 47e5aa: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47e5ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e5ae: mov ecx, edi */
  ecx = edi;
/* 47e5b0: call 0x464a5a */
  esp -= 4; W32(esp, 0x47e5b5u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47e5b5: mov edi, dword ptr [edi + 0xc] */
  edi = R32((uint32_t)(edi + 0xcu));
/* 47e5b8: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47e5bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e5bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47e5be: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47e5c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e5c2: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47e5c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e5c6: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 47e5c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e5ca: call 0x47a7b2 */
  esp -= 4; W32(esp, 0x47e5cfu); SPILL(); f_47a7b2(); if (g_unwind) return; RELOAD();
/* 47e5cf: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47e5d3: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47e5d6: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 47e5d9: mov edi, eax */
  edi = eax;
/* 47e5db: call 0x461389 */
  esp -= 4; W32(esp, 0x47e5e0u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47e5e0: cmp byte ptr [ebp - 0x38], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffc8u))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47e5e4: lea eax, [ebp - 0x37] */
  eax = (uint32_t)(ebp + 0xffffffc9u);
/* 47e5e7: je 0x47e5ec */
  if (zf) goto L_47e5ec;
L_47e5e9: /* 47e5e9: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
L_47e5ec: /* 47e5ec: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 47e5ef: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47e5f0: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 47e5f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e5f4: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47e5f7: call dword ptr [0x48e0c0] */
  esp -= 4; W32(esp, 0x47e5fdu); SPILL(); f_417982(); if (g_unwind) return; /* MSVCR70!strtoul */ RELOAD();
/* 47e5fd: mov edi, eax */
  edi = eax;
/* 47e5ff: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47e602: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47e605: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e606: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47e609: call 0x46e77f */
  esp -= 4; W32(esp, 0x47e60eu); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47e60e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47e610: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 47e613: je 0x47e618 */
  if (zf) goto L_47e618;
L_47e615: /* 47e615: or dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_47e618: /* 47e618: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 47e61b: cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47e61e: je 0x47e63e */
  if (zf) goto L_47e63e;
L_47e620: /* 47e620: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47e622u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47e622: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47e625: jne 0x47e63b */
  if (!zf) goto L_47e63b;
L_47e627: /* 47e627: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 47e62a: ja 0x47e63b */
  if ((!cf && !zf)) goto L_47e63b;
L_47e62c: /* 47e62c: cmp byte ptr [ebp - 0x38], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffc8u))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47e630: jne 0x47e634 */
  if (!zf) goto L_47e634;
L_47e632: /* 47e632: neg edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(0 - a);
  edi = r;
  }
L_47e634: /* 47e634: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47e637: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 47e639: jmp 0x47e641 */
  goto L_47e641;
L_47e63b: /* 47e63b: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
L_47e63e: /* 47e63e: or dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_47e641: /* 47e641: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47e644: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47e647: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47e649: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47e64c: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47e64f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47e652: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47e659: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47e65c: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47e65f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47e660: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47e661: call 0x46190c */
  esp -= 4; W32(esp, 0x47e666u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47e666: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47e667: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47e66a(void) {
  LOAD_REGS();
L_47e66a: /* 47e66a: mov eax, 0x48d1c3 */
  eax = 0x48d1c3u;
/* 47e66f: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47e674u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47e674: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47e677: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47e67c: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47e67f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47e680: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47e686: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47e687: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47e68a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47e68cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47e68c: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47e68f: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 47e692: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47e695: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e696: mov ecx, edi */
  ecx = edi;
/* 47e698: call 0x464a5a */
  esp -= 4; W32(esp, 0x47e69du); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47e69d: mov edi, dword ptr [edi + 0xc] */
  edi = R32((uint32_t)(edi + 0xcu));
/* 47e6a0: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47e6a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e6a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47e6a6: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47e6a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e6aa: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47e6ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e6ae: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 47e6b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e6b2: call 0x47a7b2 */
  esp -= 4; W32(esp, 0x47e6b7u); SPILL(); f_47a7b2(); if (g_unwind) return; RELOAD();
/* 47e6b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e6b8: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47e6bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e6bc: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 47e6bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e6c0: call dword ptr [0x48e0ac] */
  esp -= 4; W32(esp, 0x47e6c6u); SPILL(); f_41796b(); if (g_unwind) return; /* MSVCR70!strtol */ RELOAD();
/* 47e6c6: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47e6ca: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47e6cd: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47e6d0: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 47e6d3: call 0x461389 */
  esp -= 4; W32(esp, 0x47e6d8u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47e6d8: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47e6db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e6dc: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47e6df: call 0x46e77f */
  esp -= 4; W32(esp, 0x47e6e4u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47e6e4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47e6e6: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 47e6e9: je 0x47e6ee */
  if (zf) goto L_47e6ee;
L_47e6eb: /* 47e6eb: or dword ptr [edi], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi), r);
  }
L_47e6ee: /* 47e6ee: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 47e6f1: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47e6f4: je 0x47e707 */
  if (zf) goto L_47e707;
L_47e6f6: /* 47e6f6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47e6f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47e6f8: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47e6fb: jne 0x47e707 */
  if (!zf) goto L_47e707;
L_47e6fd: /* 47e6fd: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47e700: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47e703: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47e705: jmp 0x47e70a */
  goto L_47e70a;
L_47e707: /* 47e707: or dword ptr [edi], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi), r);
  }
L_47e70a: /* 47e70a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47e70d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47e710: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47e712: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47e715: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47e718: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47e71b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47e722: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47e725: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47e728: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47e729: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47e72a: call 0x46190c */
  esp -= 4; W32(esp, 0x47e72fu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47e72f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47e730: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47e733(void) {
  LOAD_REGS();
L_47e733: /* 47e733: mov eax, 0x48d1c3 */
  eax = 0x48d1c3u;
/* 47e738: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47e73du); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47e73d: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47e740: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47e745: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47e748: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47e749: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47e74f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47e750: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47e753: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47e755u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47e755: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47e758: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 47e75b: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47e75e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e75f: mov ecx, edi */
  ecx = edi;
/* 47e761: call 0x464a5a */
  esp -= 4; W32(esp, 0x47e766u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47e766: mov edi, dword ptr [edi + 0xc] */
  edi = R32((uint32_t)(edi + 0xcu));
/* 47e769: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47e76d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e76e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47e76f: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47e772: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e773: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47e776: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e777: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 47e77a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e77b: call 0x47a7b2 */
  esp -= 4; W32(esp, 0x47e780u); SPILL(); f_47a7b2(); if (g_unwind) return; RELOAD();
/* 47e780: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e781: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47e784: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e785: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 47e788: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e789: call dword ptr [0x48e0c0] */
  esp -= 4; W32(esp, 0x47e78fu); SPILL(); f_417982(); if (g_unwind) return; /* MSVCR70!strtoul */ RELOAD();
/* 47e78f: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47e793: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47e796: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47e799: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 47e79c: call 0x461389 */
  esp -= 4; W32(esp, 0x47e7a1u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47e7a1: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47e7a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e7a5: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47e7a8: call 0x46e77f */
  esp -= 4; W32(esp, 0x47e7adu); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47e7ad: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47e7af: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 47e7b2: je 0x47e7b7 */
  if (zf) goto L_47e7b7;
L_47e7b4: /* 47e7b4: or dword ptr [edi], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi), r);
  }
L_47e7b7: /* 47e7b7: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 47e7ba: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47e7bd: je 0x47e7d0 */
  if (zf) goto L_47e7d0;
L_47e7bf: /* 47e7bf: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47e7c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47e7c1: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47e7c4: jne 0x47e7d0 */
  if (!zf) goto L_47e7d0;
L_47e7c6: /* 47e7c6: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47e7c9: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47e7cc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47e7ce: jmp 0x47e7d3 */
  goto L_47e7d3;
L_47e7d0: /* 47e7d0: or dword ptr [edi], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi), r);
  }
L_47e7d3: /* 47e7d3: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47e7d6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47e7d9: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47e7db: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47e7de: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47e7e1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47e7e4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47e7eb: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47e7ee: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47e7f1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47e7f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47e7f3: call 0x46190c */
  esp -= 4; W32(esp, 0x47e7f8u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47e7f8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47e7f9: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47e7fc(void) {
  LOAD_REGS();
L_47e7fc: /* 47e7fc: mov eax, 0x48d1c3 */
  eax = 0x48d1c3u;
/* 47e801: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47e806u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47e806: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47e809: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47e80e: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47e811: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47e812: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47e818: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47e819: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47e81c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47e81eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47e81e: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47e821: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 47e824: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47e827: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e828: mov ecx, edi */
  ecx = edi;
/* 47e82a: call 0x464a5a */
  esp -= 4; W32(esp, 0x47e82fu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47e82f: mov edi, dword ptr [edi + 0xc] */
  edi = R32((uint32_t)(edi + 0xcu));
/* 47e832: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47e836: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e837: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47e838: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47e83b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e83c: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47e83f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e840: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 47e843: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e844: call 0x47a7b2 */
  esp -= 4; W32(esp, 0x47e849u); SPILL(); f_47a7b2(); if (g_unwind) return; RELOAD();
/* 47e849: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e84a: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47e84d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e84e: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 47e851: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e852: call dword ptr [0x48e0c4] */
  esp -= 4; W32(esp, 0x47e858u); SPILL(); f_417026(); if (g_unwind) return; /* MSVCR70!_strtoi64 */ RELOAD();
/* 47e858: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47e85c: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47e85f: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47e862: mov edi, eax */
  edi = eax;
/* 47e864: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 47e867: call 0x461389 */
  esp -= 4; W32(esp, 0x47e86cu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47e86c: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47e86f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e870: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47e873: call 0x46e77f */
  esp -= 4; W32(esp, 0x47e878u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47e878: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47e87a: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 47e87d: je 0x47e882 */
  if (zf) goto L_47e882;
L_47e87f: /* 47e87f: or dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_47e882: /* 47e882: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 47e885: cmp dword ptr [ebp - 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47e888: je 0x47e8a1 */
  if (zf) goto L_47e8a1;
L_47e88a: /* 47e88a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47e88cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47e88c: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47e88f: jne 0x47e89e */
  if (!zf) goto L_47e89e;
L_47e891: /* 47e891: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47e894: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47e897: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 47e899: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47e89c: jmp 0x47e8a4 */
  goto L_47e8a4;
L_47e89e: /* 47e89e: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
L_47e8a1: /* 47e8a1: or dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_47e8a4: /* 47e8a4: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47e8a7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47e8aa: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47e8ac: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47e8af: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47e8b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47e8b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47e8bc: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47e8bf: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47e8c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47e8c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47e8c4: call 0x46190c */
  esp -= 4; W32(esp, 0x47e8c9u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47e8c9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47e8ca: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47e8cd(void) {
  LOAD_REGS();
L_47e8cd: /* 47e8cd: mov eax, 0x48d1c3 */
  eax = 0x48d1c3u;
/* 47e8d2: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47e8d7u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47e8d7: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47e8da: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47e8df: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47e8e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47e8e3: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47e8e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47e8ea: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47e8ed: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47e8efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47e8ef: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47e8f2: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 47e8f5: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47e8f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e8f9: mov ecx, edi */
  ecx = edi;
/* 47e8fb: call 0x464a5a */
  esp -= 4; W32(esp, 0x47e900u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47e900: mov edi, dword ptr [edi + 0xc] */
  edi = R32((uint32_t)(edi + 0xcu));
/* 47e903: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47e907: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e908: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47e909: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47e90c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e90d: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47e910: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e911: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 47e914: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e915: call 0x47a7b2 */
  esp -= 4; W32(esp, 0x47e91au); SPILL(); f_47a7b2(); if (g_unwind) return; RELOAD();
/* 47e91a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e91b: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47e91e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e91f: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 47e922: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e923: call dword ptr [0x48e0c8] */
  esp -= 4; W32(esp, 0x47e929u); SPILL(); f_41703d(); if (g_unwind) return; /* MSVCR70!_strtoui64 */ RELOAD();
/* 47e929: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47e92d: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47e930: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47e933: mov edi, eax */
  edi = eax;
/* 47e935: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 47e938: call 0x461389 */
  esp -= 4; W32(esp, 0x47e93du); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47e93d: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47e940: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e941: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47e944: call 0x46e77f */
  esp -= 4; W32(esp, 0x47e949u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47e949: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47e94b: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 47e94e: je 0x47e953 */
  if (zf) goto L_47e953;
L_47e950: /* 47e950: or dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_47e953: /* 47e953: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 47e956: cmp dword ptr [ebp - 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47e959: je 0x47e972 */
  if (zf) goto L_47e972;
L_47e95b: /* 47e95b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47e95du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47e95d: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47e960: jne 0x47e96f */
  if (!zf) goto L_47e96f;
L_47e962: /* 47e962: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47e965: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47e968: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 47e96a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47e96d: jmp 0x47e975 */
  goto L_47e975;
L_47e96f: /* 47e96f: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
L_47e972: /* 47e972: or dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_47e975: /* 47e975: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47e978: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47e97b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47e97d: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47e980: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47e983: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47e986: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47e98d: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47e990: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47e993: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47e994: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47e995: call 0x46190c */
  esp -= 4; W32(esp, 0x47e99au); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47e99a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47e99b: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47e99e(void) {
  LOAD_REGS();
L_47e99e: /* 47e99e: mov eax, 0x48d1c3 */
  eax = 0x48d1c3u;
/* 47e9a3: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47e9a8u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47e9a8: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47e9ab: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47e9b0: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47e9b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47e9b4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47e9b5: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47e9bb: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47e9be: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47e9c0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47e9c0: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47e9c3: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 47e9c6: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47e9c9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e9ca: call 0x464a5a */
  esp -= 4; W32(esp, 0x47e9cfu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47e9cf: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47e9d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e9d4: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47e9d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e9d8: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47e9db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e9dc: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 47e9df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e9e0: call 0x47aae5 */
  esp -= 4; W32(esp, 0x47e9e5u); SPILL(); f_47aae5(); if (g_unwind) return; RELOAD();
/* 47e9e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e9e6: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47e9e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e9ea: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 47e9ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47e9ee: call 0x48b1c6 */
  esp -= 4; W32(esp, 0x47e9f3u); SPILL(); f_48b1c6(); if (g_unwind) return; RELOAD();
/* 47e9f3: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 47e9f6: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47e9fa: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47e9fd: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47ea00: call 0x461389 */
  esp -= 4; W32(esp, 0x47ea05u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47ea05: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47ea08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ea09: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47ea0c: call 0x46e77f */
  esp -= 4; W32(esp, 0x47ea11u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47ea11: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47ea13: mov ebx, dword ptr [ebp + 0x20] */
  ebx = R32((uint32_t)(ebp + 0x20u));
/* 47ea16: je 0x47ea1b */
  if (zf) goto L_47ea1b;
L_47ea18: /* 47ea18: or dword ptr [ebx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx), r);
  }
L_47ea1b: /* 47ea1b: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 47ea1e: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47ea21: je 0x47ea34 */
  if (zf) goto L_47ea34;
L_47ea23: /* 47ea23: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47ea25u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47ea25: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47ea28: jne 0x47ea34 */
  if (!zf) goto L_47ea34;
L_47ea2a: /* 47ea2a: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 47ea2d: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47ea30: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 47ea32: jmp 0x47ea37 */
  goto L_47ea37;
L_47ea34: /* 47ea34: or dword ptr [ebx], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx), r);
  }
L_47ea37: /* 47ea37: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47ea3a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47ea3d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47ea3f: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47ea42: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47ea45: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47ea48: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47ea4f: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47ea52: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47ea55: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47ea56: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47ea57: call 0x46190c */
  esp -= 4; W32(esp, 0x47ea5cu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47ea5c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47ea5d: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47ea60(void) {
  LOAD_REGS();
L_47ea60: /* 47ea60: mov eax, 0x48d1c3 */
  eax = 0x48d1c3u;
/* 47ea65: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47ea6au); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47ea6a: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47ea6d: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47ea72: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47ea75: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47ea76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47ea77: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47ea7d: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47ea80: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47ea82u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47ea82: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47ea85: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 47ea88: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47ea8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ea8c: call 0x464a5a */
  esp -= 4; W32(esp, 0x47ea91u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47ea91: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47ea95: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ea96: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47ea99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ea9a: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47ea9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ea9e: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 47eaa1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47eaa2: call 0x47aae5 */
  esp -= 4; W32(esp, 0x47eaa7u); SPILL(); f_47aae5(); if (g_unwind) return; RELOAD();
/* 47eaa7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47eaa8: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47eaab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47eaac: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 47eaaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47eab0: call 0x48b191 */
  esp -= 4; W32(esp, 0x47eab5u); SPILL(); f_48b191(); if (g_unwind) return; RELOAD();
/* 47eab5: fstp qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 47eab8: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47eabc: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47eabf: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47eac2: call 0x461389 */
  esp -= 4; W32(esp, 0x47eac7u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47eac7: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47eaca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47eacb: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47eace: call 0x46e77f */
  esp -= 4; W32(esp, 0x47ead3u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47ead3: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47ead5: mov ebx, dword ptr [ebp + 0x20] */
  ebx = R32((uint32_t)(ebp + 0x20u));
/* 47ead8: je 0x47eadd */
  if (zf) goto L_47eadd;
L_47eada: /* 47eada: or dword ptr [ebx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx), r);
  }
L_47eadd: /* 47eadd: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 47eae0: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47eae3: je 0x47eaf6 */
  if (zf) goto L_47eaf6;
L_47eae5: /* 47eae5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47eae7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47eae7: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47eaea: jne 0x47eaf6 */
  if (!zf) goto L_47eaf6;
L_47eaec: /* 47eaec: fld qword ptr [ebp - 0x1c] */
  { double v = F64((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 47eaef: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47eaf2: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 47eaf4: jmp 0x47eaf9 */
  goto L_47eaf9;
L_47eaf6: /* 47eaf6: or dword ptr [ebx], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx), r);
  }
L_47eaf9: /* 47eaf9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47eafc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47eaff: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47eb01: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47eb04: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47eb07: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47eb0a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47eb11: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47eb14: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47eb17: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47eb18: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47eb19: call 0x46190c */
  esp -= 4; W32(esp, 0x47eb1eu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47eb1e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47eb1f: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47eb22(void) {
  LOAD_REGS();
L_47eb22: /* 47eb22: mov eax, 0x48d1c3 */
  eax = 0x48d1c3u;
/* 47eb27: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47eb2cu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47eb2c: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47eb2f: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47eb34: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47eb37: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47eb38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47eb39: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47eb3f: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47eb42: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47eb44u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47eb44: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47eb47: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 47eb4a: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47eb4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47eb4e: call 0x464a5a */
  esp -= 4; W32(esp, 0x47eb53u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47eb53: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47eb57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47eb58: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47eb5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47eb5c: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47eb5f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47eb60: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 47eb63: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47eb64: call 0x47aae5 */
  esp -= 4; W32(esp, 0x47eb69u); SPILL(); f_47aae5(); if (g_unwind) return; RELOAD();
/* 47eb69: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47eb6a: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47eb6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47eb6e: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 47eb71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47eb72: call 0x48b1c6 */
  esp -= 4; W32(esp, 0x47eb77u); SPILL(); f_48b1c6(); if (g_unwind) return; RELOAD();
/* 47eb77: fstp qword ptr [ebp - 0x1c] */
  WF64((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 47eb7a: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47eb7e: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47eb81: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47eb84: call 0x461389 */
  esp -= 4; W32(esp, 0x47eb89u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47eb89: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47eb8c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47eb8d: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47eb90: call 0x46e77f */
  esp -= 4; W32(esp, 0x47eb95u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47eb95: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47eb97: mov ebx, dword ptr [ebp + 0x20] */
  ebx = R32((uint32_t)(ebp + 0x20u));
/* 47eb9a: je 0x47eb9f */
  if (zf) goto L_47eb9f;
L_47eb9c: /* 47eb9c: or dword ptr [ebx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx), r);
  }
L_47eb9f: /* 47eb9f: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 47eba2: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47eba5: je 0x47ebb8 */
  if (zf) goto L_47ebb8;
L_47eba7: /* 47eba7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47eba9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47eba9: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47ebac: jne 0x47ebb8 */
  if (!zf) goto L_47ebb8;
L_47ebae: /* 47ebae: fld qword ptr [ebp - 0x1c] */
  { double v = F64((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 47ebb1: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47ebb4: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 47ebb6: jmp 0x47ebbb */
  goto L_47ebbb;
L_47ebb8: /* 47ebb8: or dword ptr [ebx], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx), r);
  }
L_47ebbb: /* 47ebbb: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47ebbe: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47ebc1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47ebc3: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47ebc6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47ebc9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47ebcc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47ebd3: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47ebd6: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47ebd9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47ebda: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47ebdb: call 0x46190c */
  esp -= 4; W32(esp, 0x47ebe0u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47ebe0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47ebe1: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47ebe4(void) {
  LOAD_REGS();
L_47ebe4: /* 47ebe4: mov eax, 0x48d1c3 */
  eax = 0x48d1c3u;
/* 47ebe9: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47ebeeu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47ebee: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47ebf1: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47ebf6: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47ebf9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47ebfa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47ebfb: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47ec01: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47ec04: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47ec06u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47ec06: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47ec09: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 47ec0c: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47ec0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ec10: call 0x464a5a */
  esp -= 4; W32(esp, 0x47ec15u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47ec15: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47ec19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ec1a: push 0x800 */
  { uint32_t v = 0x800u; esp -= 4; W32(esp, v); }
/* 47ec1f: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47ec22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ec23: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47ec26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ec27: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 47ec2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ec2b: call 0x47a7b2 */
  esp -= 4; W32(esp, 0x47ec30u); SPILL(); f_47a7b2(); if (g_unwind) return; RELOAD();
/* 47ec30: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47ec34: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47ec37: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47ec3a: mov ebx, eax */
  ebx = eax;
/* 47ec3c: call 0x461389 */
  esp -= 4; W32(esp, 0x47ec41u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47ec41: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47ec42: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47ec45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ec46: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 47ec49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ec4a: call dword ptr [0x48e0c0] */
  esp -= 4; W32(esp, 0x47ec50u); SPILL(); f_417982(); if (g_unwind) return; /* MSVCR70!strtoul */ RELOAD();
/* 47ec50: and dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 47ec54: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 47ec57: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47ec5a: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47ec5d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ec5e: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47ec61: call 0x46e77f */
  esp -= 4; W32(esp, 0x47ec66u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47ec66: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47ec68: mov ebx, dword ptr [ebp + 0x20] */
  ebx = R32((uint32_t)(ebp + 0x20u));
/* 47ec6b: je 0x47ec70 */
  if (zf) goto L_47ec70;
L_47ec6d: /* 47ec6d: or dword ptr [ebx], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx), r);
  }
L_47ec70: /* 47ec70: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 47ec73: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47ec76: je 0x47ec89 */
  if (zf) goto L_47ec89;
L_47ec78: /* 47ec78: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47ec7au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47ec7a: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47ec7d: jne 0x47ec89 */
  if (!zf) goto L_47ec89;
L_47ec7f: /* 47ec7f: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47ec82: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 47ec85: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47ec87: jmp 0x47ec8c */
  goto L_47ec8c;
L_47ec89: /* 47ec89: or dword ptr [ebx], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebx), r);
  }
L_47ec8c: /* 47ec8c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47ec8f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47ec92: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47ec94: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47ec97: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47ec9a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47ec9d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47eca4: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47eca7: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47ecaa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47ecab: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47ecac: call 0x46190c */
  esp -= 4; W32(esp, 0x47ecb1u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47ecb1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47ecb2: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47ecb5(void) {
  LOAD_REGS();
L_47ecb5: /* 47ecb5: mov eax, 0x48d1b1 */
  eax = 0x48d1b1u;
/* 47ecba: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47ecbfu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47ecbf: sub esp, 0x4c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47ecc2: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47ecc7: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47ecca: or dword ptr [ebp - 0x14], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 47ecce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47eccf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47ecd0: mov esi, dword ptr [ebp + 0x1c] */
  esi = R32((uint32_t)(ebp + 0x1cu));
/* 47ecd3: xor ebx, ebx */
  ebx = 0;
/* 47ecd5: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47ecd8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 47ecdb: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 47ecdc: test ah, 0x40 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47ecdf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47ece0: je 0x47edb1 */
  if (zf) goto L_47edb1;
L_47ece6: /* 47ece6: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47ece9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ecea: mov ecx, esi */
  ecx = esi;
/* 47ecec: call 0x464a5a */
  esp -= 4; W32(esp, 0x47ecf1u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47ecf1: xor edi, edi */
  edi = 0;
/* 47ecf3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ecf4: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 47ecf7: call 0x479941 */
  esp -= 4; W32(esp, 0x47ecfcu); SPILL(); f_479941(); if (g_unwind) return; RELOAD();
/* 47ecfc: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47ed00: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 47ed01: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47ed04: mov esi, eax */
  esi = eax;
/* 47ed06: call 0x461389 */
  esp -= 4; W32(esp, 0x47ed0bu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47ed0b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47ed0c: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 47ed0f: mov dword ptr [ebp - 0x20], 7 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x7u);
/* 47ed16: call 0x4624dd */
  esp -= 4; W32(esp, 0x47ed1bu); SPILL(); f_4624dd(); if (g_unwind) return; RELOAD();
/* 47ed1b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47ed1c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47ed1d: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 47ed20: call 0x473297 */
  esp -= 4; W32(esp, 0x47ed25u); SPILL(); f_473297(); if (g_unwind) return; RELOAD();
/* 47ed25: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 47ed28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ed29: mov ecx, esi */
  ecx = esi;
/* 47ed2b: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 47ed2e: call 0x471eaa */
  esp -= 4; W32(esp, 0x47ed33u); SPILL(); f_471eaa(); if (g_unwind) return; RELOAD();
/* 47ed33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 47ed35: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47ed36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ed37: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 47ed3a: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 47ed3e: call 0x472d70 */
  esp -= 4; W32(esp, 0x47ed43u); SPILL(); f_472d70(); if (g_unwind) return; RELOAD();
/* 47ed43: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47ed44: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 47ed47: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 47ed4a: call 0x4624b0 */
  esp -= 4; W32(esp, 0x47ed4fu); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 47ed4f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47ed50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47ed51: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 47ed54: call 0x473236 */
  esp -= 4; W32(esp, 0x47ed59u); SPILL(); f_473236(); if (g_unwind) return; RELOAD();
/* 47ed59: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 47ed5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ed5d: mov ecx, esi */
  ecx = esi;
/* 47ed5f: call 0x471ec1 */
  esp -= 4; W32(esp, 0x47ed64u); SPILL(); f_471ec1(); if (g_unwind) return; RELOAD();
/* 47ed64: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 47ed66: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47ed67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ed68: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 47ed6b: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 47ed6f: call 0x472d70 */
  esp -= 4; W32(esp, 0x47ed74u); SPILL(); f_472d70(); if (g_unwind) return; RELOAD();
/* 47ed74: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47ed75: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 47ed78: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 47ed7b: call 0x4624b0 */
  esp -= 4; W32(esp, 0x47ed80u); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 47ed80: cmp dword ptr [ebp - 0x20], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 47ed84: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 47ed87: jae 0x47ed8c */
  if (!cf) goto L_47ed8c;
L_47ed89: /* 47ed89: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
L_47ed8c: /* 47ed8c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ed8d: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 47ed8f: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47ed92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ed93: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47ed96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ed97: call 0x47d447 */
  esp -= 4; W32(esp, 0x47ed9cu); SPILL(); f_47d447(); if (g_unwind) return; RELOAD();
/* 47ed9c: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47eda0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47eda3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47eda4: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 47eda7: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 47edaa: call 0x4624b0 */
  esp -= 4; W32(esp, 0x47edafu); SPILL(); f_4624b0(); if (g_unwind) return; RELOAD();
/* 47edaf: jmp 0x47ee1c */
  goto L_47ee1c;
L_47edb1: /* 47edb1: call dword ptr [0x48e0b0] */
  esp -= 4; W32(esp, 0x47edb7u); SPILL(); f_4102a5(); if (g_unwind) return; /* MSVCR70!_errno */ RELOAD();
/* 47edb7: xor edi, edi */
  edi = 0;
/* 47edb9: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 47edbb: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 47edbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47edbf: mov ecx, esi */
  ecx = esi;
/* 47edc1: call 0x464a5a */
  esp -= 4; W32(esp, 0x47edc6u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47edc6: mov esi, dword ptr [esi + 0xc] */
  esi = R32((uint32_t)(esi + 0xcu));
/* 47edc9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47edca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47edcb: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47edce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47edcf: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47edd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47edd3: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 47edd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47edd7: mov dword ptr [ebp - 4], 4 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 47edde: call 0x47addc */
  esp -= 4; W32(esp, 0x47ede3u); SPILL(); f_47addc(); if (g_unwind) return; RELOAD();
/* 47ede3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ede4: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 47ede7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ede8: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 47edeb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47edec: call dword ptr [0x48e0c0] */
  esp -= 4; W32(esp, 0x47edf2u); SPILL(); f_417982(); if (g_unwind) return; /* MSVCR70!strtoul */ RELOAD();
/* 47edf2: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47edf6: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47edf9: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 47edfc: mov esi, eax */
  esi = eax;
/* 47edfe: call 0x461389 */
  esp -= 4; W32(esp, 0x47ee03u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47ee03: lea eax, [ebp - 0x58] */
  eax = (uint32_t)(ebp + 0xffffffa8u);
/* 47ee06: cmp dword ptr [ebp - 0x1c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47ee09: je 0x47ee1c */
  if (zf) goto L_47ee1c;
L_47ee0b: /* 47ee0b: call dword ptr [0x48e0b0] */
  esp -= 4; W32(esp, 0x47ee11u); SPILL(); f_4102a5(); if (g_unwind) return; /* MSVCR70!_errno */ RELOAD();
/* 47ee11: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47ee13: jne 0x47ee1c */
  if (!zf) goto L_47ee1c;
L_47ee15: /* 47ee15: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 47ee17: ja 0x47ee1c */
  if ((!cf && !zf)) goto L_47ee1c;
L_47ee19: /* 47ee19: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
L_47ee1c: /* 47ee1c: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47ee1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ee20: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47ee23: call 0x46e77f */
  esp -= 4; W32(esp, 0x47ee28u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47ee28: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47ee2a: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 47ee2d: je 0x47ee31 */
  if (zf) goto L_47ee31;
L_47ee2f: /* 47ee2f: or dword ptr [eax], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_47ee31: /* 47ee31: cmp dword ptr [ebp - 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 47ee34: jge 0x47ee3b */
  if ((sf == of)) goto L_47ee3b;
L_47ee36: /* 47ee36: or dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
/* 47ee39: jmp 0x47ee43 */
  goto L_47ee43;
L_47ee3b: /* 47ee3b: mov ecx, dword ptr [ebp + 0x24] */
  ecx = R32((uint32_t)(ebp + 0x24u));
/* 47ee3e: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 47ee41: mov byte ptr [ecx], al */
  W8((uint32_t)(ecx), (eax & 0xffu));
L_47ee43: /* 47ee43: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47ee46: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47ee49: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47ee4b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47ee4e: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47ee51: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47ee54: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47ee5b: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47ee5e: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47ee61: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47ee62: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47ee63: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47ee64: call 0x46190c */
  esp -= 4; W32(esp, 0x47ee69u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47ee69: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47ee6a: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47ee6d(void) {
  LOAD_REGS();
L_47ee6d: /* 47ee6d: mov eax, 0x48d1c3 */
  eax = 0x48d1c3u;
/* 47ee72: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47ee77u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47ee77: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47ee7a: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47ee7f: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47ee82: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47ee83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47ee84: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47ee8a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47ee8b: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47ee8e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47ee90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47ee90: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47ee93: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 47ee96: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47ee99: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ee9a: mov ecx, edi */
  ecx = edi;
/* 47ee9c: call 0x464a5a */
  esp -= 4; W32(esp, 0x47eea1u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47eea1: mov edi, dword ptr [edi + 0xc] */
  edi = R32((uint32_t)(edi + 0xcu));
/* 47eea4: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47eea8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47eea9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47eeaa: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47eead: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47eeae: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47eeb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47eeb2: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 47eeb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47eeb6: call 0x47addc */
  esp -= 4; W32(esp, 0x47eebbu); SPILL(); f_47addc(); if (g_unwind) return; RELOAD();
/* 47eebb: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47eebf: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47eec2: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47eec5: mov edi, eax */
  edi = eax;
/* 47eec7: call 0x461389 */
  esp -= 4; W32(esp, 0x47eeccu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47eecc: cmp byte ptr [ebp - 0x34], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffccu))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47eed0: lea ebx, [ebp - 0x33] */
  ebx = (uint32_t)(ebp + 0xffffffcdu);
/* 47eed3: je 0x47eed8 */
  if (zf) goto L_47eed8;
L_47eed5: /* 47eed5: lea ebx, [ebp - 0x34] */
  ebx = (uint32_t)(ebp + 0xffffffccu);
L_47eed8: /* 47eed8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47eed9: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47eedc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47eedd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 47eede: call dword ptr [0x48e0c0] */
  esp -= 4; W32(esp, 0x47eee4u); SPILL(); f_417982(); if (g_unwind) return; /* MSVCR70!strtoul */ RELOAD();
/* 47eee4: mov edi, eax */
  edi = eax;
/* 47eee6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47eee9: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47eeec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47eeed: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47eef0: call 0x46e77f */
  esp -= 4; W32(esp, 0x47eef5u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47eef5: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47eef7: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 47eefa: je 0x47eeff */
  if (zf) goto L_47eeff;
L_47eefc: /* 47eefc: or dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_47eeff: /* 47eeff: cmp dword ptr [ebp - 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47ef02: je 0x47ef26 */
  if (zf) goto L_47ef26;
L_47ef04: /* 47ef04: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47ef06u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47ef06: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47ef09: jne 0x47ef23 */
  if (!zf) goto L_47ef23;
L_47ef0b: /* 47ef0b: cmp edi, 0xffff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 47ef11: ja 0x47ef23 */
  if ((!cf && !zf)) goto L_47ef23;
L_47ef13: /* 47ef13: cmp byte ptr [ebp - 0x34], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffccu))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47ef17: jne 0x47ef1b */
  if (!zf) goto L_47ef1b;
L_47ef19: /* 47ef19: neg edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(0 - a);
  edi = r;
  }
L_47ef1b: /* 47ef1b: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47ef1e: mov word ptr [eax], di */
  W16((uint32_t)(eax), (edi & 0xffffu));
/* 47ef21: jmp 0x47ef29 */
  goto L_47ef29;
L_47ef23: /* 47ef23: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
L_47ef26: /* 47ef26: or dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_47ef29: /* 47ef29: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47ef2c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47ef2f: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47ef31: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47ef34: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47ef37: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47ef3a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47ef41: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47ef44: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47ef47: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47ef48: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47ef49: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 47ef4a: call 0x46190c */
  esp -= 4; W32(esp, 0x47ef4fu); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47ef4f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47ef50: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47ef53(void) {
  LOAD_REGS();
L_47ef53: /* 47ef53: mov eax, 0x48d0eb */
  eax = 0x48d0ebu;
/* 47ef58: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47ef5du); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47ef5d: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47ef60: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47ef65: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47ef68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47ef69: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47ef6f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47ef70: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47ef73: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47ef75u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47ef75: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47ef78: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 47ef7b: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47ef7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ef7f: mov ecx, edi */
  ecx = edi;
/* 47ef81: call 0x464a5a */
  esp -= 4; W32(esp, 0x47ef86u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47ef86: mov edi, dword ptr [edi + 0xc] */
  edi = R32((uint32_t)(edi + 0xcu));
/* 47ef89: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47ef8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ef8e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47ef8f: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47ef92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ef93: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47ef96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ef97: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 47ef9a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47ef9b: call 0x47addc */
  esp -= 4; W32(esp, 0x47efa0u); SPILL(); f_47addc(); if (g_unwind) return; RELOAD();
/* 47efa0: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47efa4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47efa7: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 47efaa: mov edi, eax */
  edi = eax;
/* 47efac: call 0x461389 */
  esp -= 4; W32(esp, 0x47efb1u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47efb1: cmp byte ptr [ebp - 0x38], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffc8u))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47efb5: lea eax, [ebp - 0x37] */
  eax = (uint32_t)(ebp + 0xffffffc9u);
/* 47efb8: je 0x47efbd */
  if (zf) goto L_47efbd;
L_47efba: /* 47efba: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
L_47efbd: /* 47efbd: mov dword ptr [ebp + 0x1c], eax */
  W32((uint32_t)(ebp + 0x1cu), eax);
/* 47efc0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47efc1: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 47efc4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47efc5: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 47efc8: call dword ptr [0x48e0c0] */
  esp -= 4; W32(esp, 0x47efceu); SPILL(); f_417982(); if (g_unwind) return; /* MSVCR70!strtoul */ RELOAD();
/* 47efce: mov edi, eax */
  edi = eax;
/* 47efd0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47efd3: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47efd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47efd7: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47efda: call 0x46e77f */
  esp -= 4; W32(esp, 0x47efdfu); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47efdf: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47efe1: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 47efe4: je 0x47efe9 */
  if (zf) goto L_47efe9;
L_47efe6: /* 47efe6: or dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_47efe9: /* 47efe9: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 47efec: cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47efef: je 0x47f00f */
  if (zf) goto L_47f00f;
L_47eff1: /* 47eff1: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47eff3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47eff3: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47eff6: jne 0x47f00c */
  if (!zf) goto L_47f00c;
L_47eff8: /* 47eff8: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 47effb: ja 0x47f00c */
  if ((!cf && !zf)) goto L_47f00c;
L_47effd: /* 47effd: cmp byte ptr [ebp - 0x38], 0x2d */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffc8u))); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 47f001: jne 0x47f005 */
  if (!zf) goto L_47f005;
L_47f003: /* 47f003: neg edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(0 - a);
  edi = r;
  }
L_47f005: /* 47f005: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47f008: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 47f00a: jmp 0x47f012 */
  goto L_47f012;
L_47f00c: /* 47f00c: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
L_47f00f: /* 47f00f: or dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_47f012: /* 47f012: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47f015: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47f018: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47f01a: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47f01d: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47f020: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47f023: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47f02a: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47f02d: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47f030: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47f031: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47f032: call 0x46190c */
  esp -= 4; W32(esp, 0x47f037u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47f037: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47f038: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47f03b(void) {
  LOAD_REGS();
L_47f03b: /* 47f03b: mov eax, 0x48d1c3 */
  eax = 0x48d1c3u;
/* 47f040: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47f045u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47f045: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47f048: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47f04d: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47f050: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47f051: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47f057: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47f058: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47f05b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47f05du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47f05d: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47f060: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 47f063: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47f066: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f067: mov ecx, edi */
  ecx = edi;
/* 47f069: call 0x464a5a */
  esp -= 4; W32(esp, 0x47f06eu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47f06e: mov edi, dword ptr [edi + 0xc] */
  edi = R32((uint32_t)(edi + 0xcu));
/* 47f071: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47f075: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f076: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47f077: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47f07a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f07b: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47f07e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f07f: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 47f082: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f083: call 0x47addc */
  esp -= 4; W32(esp, 0x47f088u); SPILL(); f_47addc(); if (g_unwind) return; RELOAD();
/* 47f088: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f089: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47f08c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f08d: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 47f090: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f091: call dword ptr [0x48e0ac] */
  esp -= 4; W32(esp, 0x47f097u); SPILL(); f_41796b(); if (g_unwind) return; /* MSVCR70!strtol */ RELOAD();
/* 47f097: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47f09b: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47f09e: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47f0a1: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 47f0a4: call 0x461389 */
  esp -= 4; W32(esp, 0x47f0a9u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47f0a9: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47f0ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f0ad: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47f0b0: call 0x46e77f */
  esp -= 4; W32(esp, 0x47f0b5u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47f0b5: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47f0b7: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 47f0ba: je 0x47f0bf */
  if (zf) goto L_47f0bf;
L_47f0bc: /* 47f0bc: or dword ptr [edi], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi), r);
  }
L_47f0bf: /* 47f0bf: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 47f0c2: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47f0c5: je 0x47f0d8 */
  if (zf) goto L_47f0d8;
L_47f0c7: /* 47f0c7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47f0c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47f0c9: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47f0cc: jne 0x47f0d8 */
  if (!zf) goto L_47f0d8;
L_47f0ce: /* 47f0ce: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47f0d1: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47f0d4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47f0d6: jmp 0x47f0db */
  goto L_47f0db;
L_47f0d8: /* 47f0d8: or dword ptr [edi], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi), r);
  }
L_47f0db: /* 47f0db: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47f0de: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47f0e1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47f0e3: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47f0e6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47f0e9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47f0ec: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47f0f3: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47f0f6: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47f0f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47f0fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47f0fb: call 0x46190c */
  esp -= 4; W32(esp, 0x47f100u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47f100: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47f101: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47f104(void) {
  LOAD_REGS();
L_47f104: /* 47f104: mov eax, 0x48d1c3 */
  eax = 0x48d1c3u;
/* 47f109: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47f10eu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47f10e: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47f111: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47f116: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47f119: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47f11a: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47f120: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47f121: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47f124: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47f126u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47f126: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47f129: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 47f12c: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47f12f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f130: mov ecx, edi */
  ecx = edi;
/* 47f132: call 0x464a5a */
  esp -= 4; W32(esp, 0x47f137u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47f137: mov edi, dword ptr [edi + 0xc] */
  edi = R32((uint32_t)(edi + 0xcu));
/* 47f13a: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47f13e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f13f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47f140: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47f143: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f144: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47f147: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f148: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 47f14b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f14c: call 0x47addc */
  esp -= 4; W32(esp, 0x47f151u); SPILL(); f_47addc(); if (g_unwind) return; RELOAD();
/* 47f151: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f152: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47f155: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f156: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 47f159: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f15a: call dword ptr [0x48e0c0] */
  esp -= 4; W32(esp, 0x47f160u); SPILL(); f_417982(); if (g_unwind) return; /* MSVCR70!strtoul */ RELOAD();
/* 47f160: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47f164: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47f167: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47f16a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 47f16d: call 0x461389 */
  esp -= 4; W32(esp, 0x47f172u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47f172: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47f175: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f176: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47f179: call 0x46e77f */
  esp -= 4; W32(esp, 0x47f17eu); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47f17e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47f180: mov edi, dword ptr [ebp + 0x20] */
  edi = R32((uint32_t)(ebp + 0x20u));
/* 47f183: je 0x47f188 */
  if (zf) goto L_47f188;
L_47f185: /* 47f185: or dword ptr [edi], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi), r);
  }
L_47f188: /* 47f188: lea eax, [ebp - 0x38] */
  eax = (uint32_t)(ebp + 0xffffffc8u);
/* 47f18b: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47f18e: je 0x47f1a1 */
  if (zf) goto L_47f1a1;
L_47f190: /* 47f190: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47f192u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47f192: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47f195: jne 0x47f1a1 */
  if (!zf) goto L_47f1a1;
L_47f197: /* 47f197: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47f19a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47f19d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47f19f: jmp 0x47f1a4 */
  goto L_47f1a4;
L_47f1a1: /* 47f1a1: or dword ptr [edi], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(edi), r);
  }
L_47f1a4: /* 47f1a4: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47f1a7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47f1aa: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47f1ac: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47f1af: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47f1b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47f1b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47f1bc: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47f1bf: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47f1c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47f1c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47f1c4: call 0x46190c */
  esp -= 4; W32(esp, 0x47f1c9u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47f1c9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47f1ca: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_47f1cd(void) {
  LOAD_REGS();
L_47f1cd: /* 47f1cd: mov eax, 0x48d1c3 */
  eax = 0x48d1c3u;
/* 47f1d2: call 0x4616c0 */
  esp -= 4; W32(esp, 0x47f1d7u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 47f1d7: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 47f1da: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 47f1df: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 47f1e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 47f1e3: mov esi, dword ptr [0x48e0b0] */
  esi = R32((uint32_t)(0x48e0b0u));
/* 47f1e9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47f1ea: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 47f1ed: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47f1efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47f1ef: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 47f1f2: mov edi, dword ptr [ebp + 0x1c] */
  edi = R32((uint32_t)(ebp + 0x1cu));
/* 47f1f5: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* 47f1f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f1f9: mov ecx, edi */
  ecx = edi;
/* 47f1fb: call 0x464a5a */
  esp -= 4; W32(esp, 0x47f200u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 47f200: mov edi, dword ptr [edi + 0xc] */
  edi = R32((uint32_t)(edi + 0xcu));
/* 47f203: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47f207: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f208: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 47f209: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47f20c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f20d: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* 47f210: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f211: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 47f214: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f215: call 0x47addc */
  esp -= 4; W32(esp, 0x47f21au); SPILL(); f_47addc(); if (g_unwind) return; RELOAD();
/* 47f21a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f21b: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 47f21e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f21f: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 47f222: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f223: call dword ptr [0x48e0c4] */
  esp -= 4; W32(esp, 0x47f229u); SPILL(); f_417026(); if (g_unwind) return; /* MSVCR70!_strtoi64 */ RELOAD();
/* 47f229: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 47f22d: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 47f230: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 47f233: mov edi, eax */
  edi = eax;
/* 47f235: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 47f238: call 0x461389 */
  esp -= 4; W32(esp, 0x47f23du); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 47f23d: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* 47f240: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 47f241: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 47f244: call 0x46e77f */
  esp -= 4; W32(esp, 0x47f249u); SPILL(); f_46e77f(); if (g_unwind) return; RELOAD();
/* 47f249: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 47f24b: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 47f24e: je 0x47f253 */
  if (zf) goto L_47f253;
L_47f250: /* 47f250: or dword ptr [eax], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_47f253: /* 47f253: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 47f256: cmp dword ptr [ebp - 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47f259: je 0x47f272 */
  if (zf) goto L_47f272;
L_47f25b: /* 47f25b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x47f25du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 47f25d: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 47f260: jne 0x47f26f */
  if (!zf) goto L_47f26f;
L_47f262: /* 47f262: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* 47f265: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 47f268: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 47f26a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47f26d: jmp 0x47f275 */
  goto L_47f275;
L_47f26f: /* 47f26f: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
L_47f272: /* 47f272: or dword ptr [eax], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax), r);
  }
L_47f275: /* 47f275: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 47f278: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 47f27b: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 47f27d: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 47f280: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 47f283: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 47f286: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 47f28d: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 47f290: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 47f293: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 47f294: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 47f295: call 0x46190c */
  esp -= 4; W32(esp, 0x47f29au); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 47f29a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 47f29b: ret 0x20 */
  esp += 36; SPILL(); return;
}
