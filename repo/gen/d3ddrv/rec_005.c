#include "recomp.h"
#include "rec_mod.h"

void f_e98260(void) {
  LOAD_REGS();
L_e98260: /* e98260: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e98266: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e98268: push 0xead0b9 */
  { uint32_t v = 0xead0b9u; esp -= 4; W32(esp, v); }
/* e9826d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9826e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e98275: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e98278: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e98279: mov esi, ecx */
  esi = ecx;
/* e9827b: mov eax, dword ptr [esi + 0xe3c] */
  eax = R32((uint32_t)(esi + 0xe3cu));
/* e98281: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e98282: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* e98286: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e98288: jne 0xe982a7 */
  if (!zf) goto L_e982a7;
L_e9828a: /* e9828a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e9828c: mov dword ptr [esi + 0xe3c], 2 */
  W32((uint32_t)(esi + 0xe3cu), 0x2u);
/* e98296: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e9829c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9829e: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e982a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e982a1: call dword ptr [ecx + 0x130] */
  { uint32_t t = R32((uint32_t)(ecx + 0x130u)); esp -= 4; W32(esp, 0xe982a7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e982a7: /* e982a7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e982a9: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e982af: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e982b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e982b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e982b3: call dword ptr [ecx + 0x138] */
  { uint32_t t = R32((uint32_t)(ecx + 0x138u)); esp -= 4; W32(esp, 0xe982b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e982b9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e982bb: jge 0xe98300 */
  if ((sf == of)) goto L_e98300;
L_e982bd: /* e982bd: lea esi, [esp + 8] */
  esi = (uint32_t)(esp + 0x8u);
/* e982c1: call 0xe95f10 */
  esp -= 4; W32(esp, 0xe982c6u); SPILL(); f_e95f10(); if (g_unwind) return; RELOAD();
/* e982c6: mov ecx, eax */
  ecx = eax;
/* e982c8: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* e982d0: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe982d6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e982d6: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e982dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e982dd: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e982df: push 0xeb2c5c */
  { uint32_t v = 0xeb2c5cu; esp -= 4; W32(esp, v); }
/* e982e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e982e5: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe982ebu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e982eb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e982ee: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* e982f2: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* e982fa: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe98300u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e98300: /* e98300: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e98304: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e98305: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e98306: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e9830d: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e98310: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e98320(void) {
  LOAD_REGS();
L_e98320: /* e98320: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e98326: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e98328: push 0xead0cc */
  { uint32_t v = 0xead0ccu; esp -= 4; W32(esp, v); }
/* e9832d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9832e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e98335: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e98338: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e98339: mov esi, ecx */
  esi = ecx;
/* e9833b: mov eax, dword ptr [esi + 0xe40] */
  eax = R32((uint32_t)(esi + 0xe40u));
/* e98341: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e98342: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* e98346: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e98348: jne 0xe98367 */
  if (!zf) goto L_e98367;
L_e9834a: /* e9834a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e9834c: mov dword ptr [esi + 0xe40], 0 */
  W32((uint32_t)(esi + 0xe40u), 0x0u);
/* e98356: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e9835c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9835e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e98360: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e98361: call dword ptr [ecx + 0x160] */
  { uint32_t t = R32((uint32_t)(ecx + 0x160u)); esp -= 4; W32(esp, 0xe98367u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e98367: /* e98367: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e98369: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e9836f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e98371: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e98372: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e98373: call dword ptr [ecx + 0x168] */
  { uint32_t t = R32((uint32_t)(ecx + 0x168u)); esp -= 4; W32(esp, 0xe98379u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e98379: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9837b: jge 0xe983c0 */
  if ((sf == of)) goto L_e983c0;
L_e9837d: /* e9837d: lea esi, [esp + 8] */
  esi = (uint32_t)(esp + 0x8u);
/* e98381: call 0xe95f10 */
  esp -= 4; W32(esp, 0xe98386u); SPILL(); f_e95f10(); if (g_unwind) return; RELOAD();
/* e98386: mov ecx, eax */
  ecx = eax;
/* e98388: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* e98390: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe98396u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e98396: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e9839c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9839d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e9839f: push 0xeb2c9c */
  { uint32_t v = 0xeb2c9cu; esp -= 4; W32(esp, v); }
/* e983a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e983a5: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe983abu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e983ab: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e983ae: lea ecx, [esp + 8] */
  ecx = (uint32_t)(esp + 0x8u);
/* e983b2: mov dword ptr [esp + 0x1c], 0xffffffff */
  W32((uint32_t)(esp + 0x1cu), 0xffffffffu);
/* e983ba: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe983c0u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e983c0: /* e983c0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e983c4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e983c5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e983c6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e983cd: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e983d0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e983e0(void) {
  LOAD_REGS();
L_e983e0: /* e983e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e983e1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e983e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e983e3: mov ebx, ecx */
  ebx = ecx;
/* e983e5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e983e6: xor ebp, ebp */
  ebp = 0;
/* e983e8: xor edi, edi */
  edi = 0;
/* e983ea: lea esi, [ebx + 0xe44] */
  esi = (uint32_t)(ebx + 0xe44u);
L_e983f0: /* e983f0: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* e983f2: mov eax, dword ptr [eax + 0x4208] */
  eax = R32((uint32_t)(eax + 0x4208u));
/* e983f8: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e983fb: jl 0xe98402 */
  if ((sf != of)) goto L_e98402;
L_e983fd: /* e983fd: mov eax, 0x10 */
  eax = 0x10u;
L_e98402: /* e98402: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e98404: jge 0xe98445 */
  if ((sf == of)) goto L_e98445;
L_e98406: /* e98406: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* e98408: cmp ecx, dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9840c: jne 0xe98427 */
  if (!zf) goto L_e98427;
L_e9840e: /* e9840e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9840f: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* e98411: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* e98414: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* e98416: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e9841c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9841e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9841f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e98420: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e98421: call dword ptr [ecx + 0x14c] */
  { uint32_t t = R32((uint32_t)(ecx + 0x14cu)); esp -= 4; W32(esp, 0xe98427u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e98427: /* e98427: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e9842b: cmp dword ptr [esi - 0x924], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xfffff6dcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e98431: jne 0xe9843f */
  if (!zf) goto L_e9843f;
L_e98433: /* e98433: mov dword ptr [esi - 0x924], ebp */
  W32((uint32_t)(esi + 0xfffff6dcu), ebp);
/* e98439: mov dword ptr [esi - 0x920], ebp */
  W32((uint32_t)(esi + 0xfffff6e0u), ebp);
L_e9843f: /* e9843f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e98440: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e98443: jmp 0xe983f0 */
  goto L_e983f0;
L_e98445: /* e98445: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e98446: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e98447: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e98448: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e98449: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e98450(void) {
  LOAD_REGS();
L_e98450: /* e98450: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* e98454: mov eax, ecx */
  eax = ecx;
/* e98456: mov edx, ecx */
  edx = ecx;
/* e98458: shr eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e9845b: shr edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e9845e: and eax, 0xff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xff0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e98463: and edx, 0xf */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e98466: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e98468: and ecx, 0xfff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e9846e: xor eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* e98470: ret  */
  esp += 4; SPILL(); return;
}

void f_e98480(void) {
  LOAD_REGS();
L_e98480: /* e98480: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* e98484: mov eax, ecx */
  eax = ecx;
/* e98486: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* e9848a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* e9848d: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* e98490: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* e98494: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* e98497: mov dword ptr [eax], 0xeb2cd8 */
  W32((uint32_t)(eax), 0xeb2cd8u);
/* e9849d: mov dword ptr [eax + 0x10], 0 */
  W32((uint32_t)(eax + 0x10u), 0x0u);
/* e984a4: mov edx, dword ptr [ecx + 0xb0] */
  edx = R32((uint32_t)(ecx + 0xb0u));
/* e984aa: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* e984ad: mov dword ptr [ecx + 0xb0], eax */
  W32((uint32_t)(ecx + 0xb0u), eax);
/* e984b3: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* e984b6: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* e984b9: mov dword ptr [esp + 0xc], ecx */
  W32((uint32_t)(esp + 0xcu), ecx);
/* e984bd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e984be: mov ecx, edx */
  ecx = edx;
/* e984c0: mov edi, edx */
  edi = edx;
/* e984c2: shr ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e984c5: shr edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edi = r;
  }
/* e984c8: and ecx, 0xff0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xff0u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e984ce: and edi, 0xf */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* e984d1: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e984d3: and edx, 0xfff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e984d9: xor ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* e984db: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* e984de: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* e984e1: lea ecx, [edx + ecx*4 + 0xb4] */
  ecx = (uint32_t)(edx + ecx*4 + 0xb4u);
/* e984e8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e984ea: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* e984ed: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* e984ef: mov dword ptr [eax + 0x20], 0 */
  W32((uint32_t)(eax + 0x20u), 0x0u);
/* e984f6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e984f7: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e98500(void) {
  LOAD_REGS();
L_e98500: /* e98500: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e98503: mov dword ptr [ecx], 0xeb2cd8 */
  W32((uint32_t)(ecx), 0xeb2cd8u);
/* e98509: mov eax, dword ptr [edx + 0xb0] */
  eax = R32((uint32_t)(edx + 0xb0u));
/* e9850f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e98511: je 0xe9852e */
  if (zf) goto L_e9852e;
L_e98513: /* e98513: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e98515: je 0xe98537 */
  if (zf) goto L_e98537;
L_e98517: /* e98517: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* e9851a: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9851c: je 0xe98526 */
  if (zf) goto L_e98526;
L_e9851e: /* e9851e: mov eax, edx */
  eax = edx;
/* e98520: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e98522: jne 0xe98517 */
  if (!zf) goto L_e98517;
L_e98524: /* e98524: jmp 0xe98537 */
  goto L_e98537;
L_e98526: /* e98526: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* e98529: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* e9852c: jmp 0xe98537 */
  goto L_e98537;
L_e9852e: /* e9852e: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* e98531: mov dword ptr [edx + 0xb0], eax */
  W32((uint32_t)(edx + 0xb0u), eax);
L_e98537: /* e98537: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* e9853a: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* e9853d: lea edx, [eax + edx*4 + 0xb4] */
  edx = (uint32_t)(eax + edx*4 + 0xb4u);
/* e98544: mov dword ptr [ecx + 0x18], 0 */
  W32((uint32_t)(ecx + 0x18u), 0x0u);
/* e9854b: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e9854d: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9854f: je 0xe98574 */
  if (zf) goto L_e98574;
L_e98551: /* e98551: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e98553: je 0xe98579 */
  if (zf) goto L_e98579;
L_e98555: /* e98555: mov edx, dword ptr [eax + 0x1c] */
  edx = R32((uint32_t)(eax + 0x1cu));
/* e98558: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9855a: je 0xe98566 */
  if (zf) goto L_e98566;
L_e9855c: /* e9855c: mov eax, edx */
  eax = edx;
/* e9855e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e98560: jne 0xe98555 */
  if (!zf) goto L_e98555;
L_e98562: /* e98562: mov dword ptr [ecx + 0x1c], edx */
  W32((uint32_t)(ecx + 0x1cu), edx);
/* e98565: ret  */
  esp += 4; SPILL(); return;
L_e98566: /* e98566: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* e98569: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* e9856c: mov dword ptr [ecx + 0x1c], 0 */
  W32((uint32_t)(ecx + 0x1cu), 0x0u);
/* e98573: ret  */
  esp += 4; SPILL(); return;
L_e98574: /* e98574: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* e98577: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
L_e98579: /* e98579: mov dword ptr [ecx + 0x1c], 0 */
  W32((uint32_t)(ecx + 0x1cu), 0x0u);
/* e98580: ret  */
  esp += 4; SPILL(); return;
}

void f_e98590(void) {
  LOAD_REGS();
L_e98590: /* e98590: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e98594: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* e98598: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e98599: mov esi, ecx */
  esi = ecx;
/* e9859b: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e9859f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e985a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e985a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e985a2: mov ecx, esi */
  ecx = esi;
/* e985a4: call 0xe98480 */
  esp -= 4; W32(esp, 0xe985a9u); SPILL(); f_e98480(); if (g_unwind) return; RELOAD();
/* e985a9: mov dword ptr [esi], 0xeb2cec */
  W32((uint32_t)(esi), 0xeb2cecu);
/* e985af: mov dword ptr [esi + 0x24], 0 */
  W32((uint32_t)(esi + 0x24u), 0x0u);
/* e985b6: mov eax, esi */
  eax = esi;
/* e985b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e985b9: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e985c0(void) {
  LOAD_REGS();
L_e985c0: /* e985c0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e985c2: push 0xead0e8 */
  { uint32_t v = 0xead0e8u; esp -= 4; W32(esp, v); }
/* e985c7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e985cd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e985ce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e985d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e985d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e985d7: mov esi, ecx */
  esi = ecx;
/* e985d9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* e985dd: mov dword ptr [esi], 0xeb2cec */
  W32((uint32_t)(esi), 0xeb2cecu);
/* e985e3: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* e985e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e985e8: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* e985f0: je 0xe985f8 */
  if (zf) goto L_e985f8;
L_e985f2: /* e985f2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e985f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e985f5: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0xe985f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e985f8: /* e985f8: mov ecx, esi */
  ecx = esi;
/* e985fa: call 0xe98500 */
  esp -= 4; W32(esp, 0xe985ffu); SPILL(); f_e98500(); if (g_unwind) return; RELOAD();
/* e985ff: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e98603: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e98604: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e9860b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9860e: ret  */
  esp += 4; SPILL(); return;
}

void f_e98610(void) {
  LOAD_REGS();
L_e98610: /* e98610: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* e98613: ret  */
  esp += 4; SPILL(); return;
}

void f_e98620(void) {
  LOAD_REGS();
L_e98620: /* e98620: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e98624: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* e98628: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e98629: mov esi, ecx */
  esi = ecx;
/* e9862b: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e9862f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e98630: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e98631: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e98632: mov ecx, esi */
  ecx = esi;
/* e98634: call 0xe98480 */
  esp -= 4; W32(esp, 0xe98639u); SPILL(); f_e98480(); if (g_unwind) return; RELOAD();
/* e98639: mov dword ptr [esi], 0xeb2d00 */
  W32((uint32_t)(esi), 0xeb2d00u);
/* e9863f: mov dword ptr [esi + 0x24], 0 */
  W32((uint32_t)(esi + 0x24u), 0x0u);
/* e98646: mov eax, esi */
  eax = esi;
/* e98648: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e98649: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e98650(void) {
  LOAD_REGS();
L_e98650: /* e98650: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e98652: push 0xead0fa */
  { uint32_t v = 0xead0fau; esp -= 4; W32(esp, v); }
/* e98657: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e9865d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9865e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e98665: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e98666: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e98667: mov esi, ecx */
  esi = ecx;
/* e98669: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* e9866d: mov dword ptr [esi], 0xeb2d00 */
  W32((uint32_t)(esi), 0xeb2d00u);
/* e98673: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* e98676: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e98678: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* e98680: je 0xe98688 */
  if (zf) goto L_e98688;
L_e98682: /* e98682: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e98684: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e98685: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0xe98688u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e98688: /* e98688: mov ecx, esi */
  ecx = esi;
/* e9868a: call 0xe98500 */
  esp -= 4; W32(esp, 0xe9868fu); SPILL(); f_e98500(); if (g_unwind) return; RELOAD();
/* e9868f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e98693: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e98694: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e9869b: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9869e: ret  */
  esp += 4; SPILL(); return;
}

void f_e986a0(void) {
  LOAD_REGS();
L_e986a0: /* e986a0: mov eax, dword ptr [ecx + 0x28] */
  eax = R32((uint32_t)(ecx + 0x28u));
/* e986a3: ret  */
  esp += 4; SPILL(); return;
}

void f_e986b0(void) {
  LOAD_REGS();
L_e986b0: /* e986b0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* e986b4: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* e986b6: xor eax, eax */
  eax = 0;
/* e986b8: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e986ba: je 0xe986c9 */
  if (zf) goto L_e986c9;
L_e986bc: /* e986bc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e986c0: /* e986c0: mov dl, byte ptr [eax + ecx + 1] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + ecx + 0x1u))) & 0xffu);
/* e986c4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e986c5: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e986c7: jne 0xe986c0 */
  if (!zf) goto L_e986c0;
L_e986c9: /* e986c9: ret  */
  esp += 4; SPILL(); return;
}

void f_e986d0(void) {
  LOAD_REGS();
L_e986d0: /* e986d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e986d1: mov esi, ecx */
  esi = ecx;
/* e986d3: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* e986d6: mov eax, dword ptr [ecx + 0x40b8] */
  eax = R32((uint32_t)(ecx + 0x40b8u));
/* e986dc: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e986de: je 0xe986fb */
  if (zf) goto L_e986fb;
L_e986e0: /* e986e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e986e2: je 0xe98704 */
  if (zf) goto L_e98704;
L_e986e4: /* e986e4: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* e986e7: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e986e9: je 0xe986f3 */
  if (zf) goto L_e986f3;
L_e986eb: /* e986eb: mov eax, ecx */
  eax = ecx;
/* e986ed: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e986ef: jne 0xe986e4 */
  if (!zf) goto L_e986e4;
L_e986f1: /* e986f1: jmp 0xe98704 */
  goto L_e98704;
L_e986f3: /* e986f3: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* e986f6: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* e986f9: jmp 0xe98704 */
  goto L_e98704;
L_e986fb: /* e986fb: mov edx, dword ptr [esi + 0x10] */
  edx = R32((uint32_t)(esi + 0x10u));
/* e986fe: mov dword ptr [ecx + 0x40b8], edx */
  W32((uint32_t)(ecx + 0x40b8u), edx);
L_e98704: /* e98704: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* e98707: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e98709: mov dword ptr [esi + 0x10], 0 */
  W32((uint32_t)(esi + 0x10u), 0x0u);
/* e98710: je 0xe98721 */
  if (zf) goto L_e98721;
L_e98712: /* e98712: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* e98715: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e98716: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9871c: call 0xe98320 */
  esp -= 4; W32(esp, 0xe98721u); SPILL(); f_e98320(); if (g_unwind) return; RELOAD();
L_e98721: /* e98721: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* e98728: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e98729: ret  */
  esp += 4; SPILL(); return;
}

void f_e98730(void) {
  LOAD_REGS();
L_e98730: /* e98730: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e98731: cmp eax, 0x88760826 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760826u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e98736: mov dword ptr [esp], 0 */
  W32((uint32_t)(esp), 0x0u);
/* e9873e: jg 0xe9886a */
  if ((!zf && sf == of)) goto L_e9886a;
L_e98744: /* e98744: je 0xe98859 */
  if (zf) goto L_e98859;
L_e9874a: /* e9874a: cmp eax, 0x8876081c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876081cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9874f: jg 0xe987ee */
  if ((!zf && sf == of)) goto L_e987ee;
L_e98755: /* e98755: je 0xe987dd */
  if (zf) goto L_e987dd;
L_e9875b: /* e9875b: cmp eax, 0x88760819 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760819u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e98760: jg 0xe987a9 */
  if ((!zf && sf == of)) goto L_e987a9;
L_e98762: /* e98762: je 0xe98798 */
  if (zf) goto L_e98798;
L_e98764: /* e98764: cmp eax, 0x8876017c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876017cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e98769: je 0xe98787 */
  if (zf) goto L_e98787;
L_e9876b: /* e9876b: cmp eax, 0x88760818 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x88760818u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e98770: jne 0xe98948 */
  if (!zf) goto L_e98948;
L_e98776: /* e98776: push 0xeb043c */
  { uint32_t v = 0xeb043cu; esp -= 4; W32(esp, v); }
/* e9877b: mov ecx, esi */
  ecx = esi;
/* e9877d: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe98783u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e98783: mov eax, esi */
  eax = esi;
/* e98785: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e98786: ret  */
  esp += 4; SPILL(); return;
L_e98787: /* e98787: push 0xeb040c */
  { uint32_t v = 0xeb040cu; esp -= 4; W32(esp, v); }
/* e9878c: mov ecx, esi */
  ecx = esi;
/* e9878e: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe98794u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e98794: mov eax, esi */
  eax = esi;
/* e98796: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e98797: ret  */
  esp += 4; SPILL(); return;
L_e98798: /* e98798: push 0xeb03c8 */
  { uint32_t v = 0xeb03c8u; esp -= 4; W32(esp, v); }
/* e9879d: mov ecx, esi */
  ecx = esi;
/* e9879f: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe987a5u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e987a5: mov eax, esi */
  eax = esi;
/* e987a7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e987a8: ret  */
  esp += 4; SPILL(); return;
L_e987a9: /* e987a9: cmp eax, 0x8876081a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876081au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e987ae: je 0xe987cc */
  if (zf) goto L_e987cc;
L_e987b0: /* e987b0: cmp eax, 0x8876081b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876081bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e987b5: jne 0xe98948 */
  if (!zf) goto L_e98948;
L_e987bb: /* e987bb: push 0xeb0380 */
  { uint32_t v = 0xeb0380u; esp -= 4; W32(esp, v); }
/* e987c0: mov ecx, esi */
  ecx = esi;
/* e987c2: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe987c8u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e987c8: mov eax, esi */
  eax = esi;
/* e987ca: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e987cb: ret  */
  esp += 4; SPILL(); return;
L_e987cc: /* e987cc: push 0xeb0344 */
  { uint32_t v = 0xeb0344u; esp -= 4; W32(esp, v); }
/* e987d1: mov ecx, esi */
  ecx = esi;
/* e987d3: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe987d9u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e987d9: mov eax, esi */
  eax = esi;
/* e987db: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e987dc: ret  */
  esp += 4; SPILL(); return;
L_e987dd: /* e987dd: push 0xeb030c */
  { uint32_t v = 0xeb030cu; esp -= 4; W32(esp, v); }
/* e987e2: mov ecx, esi */
  ecx = esi;
/* e987e4: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe987eau); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e987ea: mov eax, esi */
  eax = esi;
/* e987ec: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e987ed: ret  */
  esp += 4; SPILL(); return;
L_e987ee: /* e987ee: lea ecx, [eax + 0x7789f7e3] */
  ecx = (uint32_t)(eax + 0x7789f7e3u);
/* e987f4: cmp ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e987f7: ja 0xe98948 */
  if ((!cf && !zf)) goto L_e98948;
L_e987fd: /* e987fd: jmp dword ptr [ecx*4 + 0xe98970] */
  switch (R32((uint32_t)(ecx*4 + 0xe98970u))) {
    case 0xe98804u: goto L_e98804;
    case 0xe98815u: goto L_e98815;
    case 0xe98826u: goto L_e98826;
    case 0xe98837u: goto L_e98837;
    case 0xe98848u: goto L_e98848;
    case 0xe98894u: goto L_e98894;
    case 0xe988a5u: goto L_e988a5;
    case 0xe988b6u: goto L_e988b6;
    case 0xe988c7u: goto L_e988c7;
    case 0xe988d8u: goto L_e988d8;
    case 0xe98948u: goto L_e98948;
    default: guest_badjump(0xe987fd, R32((uint32_t)(ecx*4 + 0xe98970u))); return;
  }
L_e98804: /* e98804: push 0xeb02d8 */
  { uint32_t v = 0xeb02d8u; esp -= 4; W32(esp, v); }
/* e98809: mov ecx, esi */
  ecx = esi;
/* e9880b: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe98811u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e98811: mov eax, esi */
  eax = esi;
/* e98813: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e98814: ret  */
  esp += 4; SPILL(); return;
L_e98815: /* e98815: push 0xeb0298 */
  { uint32_t v = 0xeb0298u; esp -= 4; W32(esp, v); }
/* e9881a: mov ecx, esi */
  ecx = esi;
/* e9881c: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe98822u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e98822: mov eax, esi */
  eax = esi;
/* e98824: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e98825: ret  */
  esp += 4; SPILL(); return;
L_e98826: /* e98826: push 0xeb025c */
  { uint32_t v = 0xeb025cu; esp -= 4; W32(esp, v); }
/* e9882b: mov ecx, esi */
  ecx = esi;
/* e9882d: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe98833u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e98833: mov eax, esi */
  eax = esi;
/* e98835: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e98836: ret  */
  esp += 4; SPILL(); return;
L_e98837: /* e98837: push 0xeb0220 */
  { uint32_t v = 0xeb0220u; esp -= 4; W32(esp, v); }
/* e9883c: mov ecx, esi */
  ecx = esi;
/* e9883e: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe98844u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e98844: mov eax, esi */
  eax = esi;
/* e98846: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e98847: ret  */
  esp += 4; SPILL(); return;
L_e98848: /* e98848: push 0xeb01e0 */
  { uint32_t v = 0xeb01e0u; esp -= 4; W32(esp, v); }
/* e9884d: mov ecx, esi */
  ecx = esi;
/* e9884f: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe98855u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e98855: mov eax, esi */
  eax = esi;
/* e98857: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e98858: ret  */
  esp += 4; SPILL(); return;
L_e98859: /* e98859: push 0xeb0198 */
  { uint32_t v = 0xeb0198u; esp -= 4; W32(esp, v); }
/* e9885e: mov ecx, esi */
  ecx = esi;
/* e98860: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe98866u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e98866: mov eax, esi */
  eax = esi;
/* e98868: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e98869: ret  */
  esp += 4; SPILL(); return;
L_e9886a: /* e9886a: cmp eax, 0x8876086a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876086au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9886f: jg 0xe988fa */
  if ((!zf && sf == of)) goto L_e988fa;
L_e98875: /* e98875: je 0xe988e9 */
  if (zf) goto L_e988e9;
L_e98877: /* e98877: lea ecx, [eax + 0x7789f7d9] */
  ecx = (uint32_t)(eax + 0x7789f7d9u);
/* e9887d: cmp ecx, 0x42 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x42u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e98880: ja 0xe98948 */
  if ((!cf && !zf)) goto L_e98948;
L_e98886: /* e98886: movzx ecx, byte ptr [ecx + 0xe989a0] */
  ecx = (uint32_t)(R8((uint32_t)(ecx + 0xe989a0u)));
/* e9888d: jmp dword ptr [ecx*4 + 0xe98988] */
  switch (R32((uint32_t)(ecx*4 + 0xe98988u))) {
    case 0xe98894u: goto L_e98894;
    case 0xe988a5u: goto L_e988a5;
    case 0xe988b6u: goto L_e988b6;
    case 0xe988c7u: goto L_e988c7;
    case 0xe988d8u: goto L_e988d8;
    case 0xe98948u: goto L_e98948;
    default: guest_badjump(0xe9888d, R32((uint32_t)(ecx*4 + 0xe98988u))); return;
  }
L_e98894: /* e98894: push 0xeb0160 */
  { uint32_t v = 0xeb0160u; esp -= 4; W32(esp, v); }
/* e98899: mov ecx, esi */
  ecx = esi;
/* e9889b: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe988a1u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e988a1: mov eax, esi */
  eax = esi;
/* e988a3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e988a4: ret  */
  esp += 4; SPILL(); return;
L_e988a5: /* e988a5: push 0xeb0140 */
  { uint32_t v = 0xeb0140u; esp -= 4; W32(esp, v); }
/* e988aa: mov ecx, esi */
  ecx = esi;
/* e988ac: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe988b2u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e988b2: mov eax, esi */
  eax = esi;
/* e988b4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e988b5: ret  */
  esp += 4; SPILL(); return;
L_e988b6: /* e988b6: push 0xeb0120 */
  { uint32_t v = 0xeb0120u; esp -= 4; W32(esp, v); }
/* e988bb: mov ecx, esi */
  ecx = esi;
/* e988bd: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe988c3u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e988c3: mov eax, esi */
  eax = esi;
/* e988c5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e988c6: ret  */
  esp += 4; SPILL(); return;
L_e988c7: /* e988c7: push 0xeb00fc */
  { uint32_t v = 0xeb00fcu; esp -= 4; W32(esp, v); }
/* e988cc: mov ecx, esi */
  ecx = esi;
/* e988ce: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe988d4u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e988d4: mov eax, esi */
  eax = esi;
/* e988d6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e988d7: ret  */
  esp += 4; SPILL(); return;
L_e988d8: /* e988d8: push 0xeb00d0 */
  { uint32_t v = 0xeb00d0u; esp -= 4; W32(esp, v); }
/* e988dd: mov ecx, esi */
  ecx = esi;
/* e988df: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe988e5u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e988e5: mov eax, esi */
  eax = esi;
/* e988e7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e988e8: ret  */
  esp += 4; SPILL(); return;
L_e988e9: /* e988e9: push 0xeb00a8 */
  { uint32_t v = 0xeb00a8u; esp -= 4; W32(esp, v); }
/* e988ee: mov ecx, esi */
  ecx = esi;
/* e988f0: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe988f6u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e988f6: mov eax, esi */
  eax = esi;
/* e988f8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e988f9: ret  */
  esp += 4; SPILL(); return;
L_e988fa: /* e988fa: cmp eax, 0x8876086d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876086du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e988ff: jg 0xe98944 */
  if ((!zf && sf == of)) goto L_e98944;
L_e98901: /* e98901: je 0xe98933 */
  if (zf) goto L_e98933;
L_e98903: /* e98903: cmp eax, 0x8876086b */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876086bu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e98908: je 0xe98922 */
  if (zf) goto L_e98922;
L_e9890a: /* e9890a: cmp eax, 0x8876086c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8876086cu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9890f: jne 0xe98948 */
  if (!zf) goto L_e98948;
L_e98911: /* e98911: push 0xeb0080 */
  { uint32_t v = 0xeb0080u; esp -= 4; W32(esp, v); }
/* e98916: mov ecx, esi */
  ecx = esi;
/* e98918: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe9891eu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e9891e: mov eax, esi */
  eax = esi;
/* e98920: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e98921: ret  */
  esp += 4; SPILL(); return;
L_e98922: /* e98922: push 0xeb0054 */
  { uint32_t v = 0xeb0054u; esp -= 4; W32(esp, v); }
/* e98927: mov ecx, esi */
  ecx = esi;
/* e98929: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe9892fu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e9892f: mov eax, esi */
  eax = esi;
/* e98931: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e98932: ret  */
  esp += 4; SPILL(); return;
L_e98933: /* e98933: push 0xeb0020 */
  { uint32_t v = 0xeb0020u; esp -= 4; W32(esp, v); }
/* e98938: mov ecx, esi */
  ecx = esi;
/* e9893a: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe98940u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e98940: mov eax, esi */
  eax = esi;
/* e98942: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e98943: ret  */
  esp += 4; SPILL(); return;
L_e98944: /* e98944: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e98946: je 0xe9895c */
  if (zf) goto L_e9895c;
L_e98948: /* e98948: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e98949: push 0xeb0014 */
  { uint32_t v = 0xeb0014u; esp -= 4; W32(esp, v); }
/* e9894e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9894f: call dword ptr [0xeae0d8] */
  esp -= 4; W32(esp, 0xe98955u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* e98955: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e98958: mov eax, esi */
  eax = esi;
/* e9895a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9895b: ret  */
  esp += 4; SPILL(); return;
L_e9895c: /* e9895c: push 0xeb0004 */
  { uint32_t v = 0xeb0004u; esp -= 4; W32(esp, v); }
/* e98961: mov ecx, esi */
  ecx = esi;
/* e98963: call dword ptr [0xeae1bc] */
  esp -= 4; W32(esp, 0xe98969u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* e98969: mov eax, esi */
  eax = esi;
/* e9896b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9896c: ret  */
  esp += 4; SPILL(); return;
}

void f_e989b0(void) {
  LOAD_REGS();
L_e989b0: /* e989b0: add eax, 0x5050505 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5050505u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e989b5: add eax, 0x5050505 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5050505u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e989ba: add eax, 0x5050505 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5050505u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e989bf: add eax, 0x5050505 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5050505u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e989c4: add eax, 0x5050505 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5050505u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e989c9: add eax, 0x5050505 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5050505u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e989ce: add eax, 0x5050505 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5050505u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e989d3: add eax, 0x5050505 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5050505u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e989d8: add eax, 0x5050505 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5050505u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e989dd: add eax, 0x3020105 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3020105u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e989e2: add al, 0x90 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x90u);
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* e989e4: nop  */
/* e989e5: nop  */
/* e989e6: nop  */
/* e989e7: nop  */
/* e989e8: nop  */
/* e989e9: nop  */
/* e989ea: nop  */
/* e989eb: nop  */
/* e989ec: nop  */
/* e989ed: nop  */
/* e989ee: nop  */
/* e989ef: nop  */
  SPILL(); f_e989f0(); return;
}

void f_e989f0(void) {
  LOAD_REGS();
L_e989f0: /* e989f0: cmp eax, 0x32 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x32u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e989f3: jg 0xe98a13 */
  if ((!zf && sf == of)) goto L_e98a13;
L_e989f5: /* e989f5: je 0xe98a72 */
  if (zf) goto L_e98a72;
L_e989f7: /* e989f7: add eax, -0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffecu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e989fa: cmp eax, 0x15 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x15u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e989fd: ja 0xe98a6f */
  if ((!cf && !zf)) goto L_e98a6f;
L_e989ff: /* e989ff: movzx eax, byte ptr [eax + 0xe98a8c] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0xe98a8cu)));
/* e98a06: jmp dword ptr [eax*4 + 0xe98a78] */
  switch (R32((uint32_t)(eax*4 + 0xe98a78u))) {
    case 0xe98a0du: goto L_e98a0d;
    case 0xe98a4eu: goto L_e98a4e;
    case 0xe98a54u: goto L_e98a54;
    case 0xe98a6fu: goto L_e98a6f;
    case 0xe98a72u: goto L_e98a72;
    default: guest_badjump(0xe98a06, R32((uint32_t)(eax*4 + 0xe98a78u))); return;
  }
L_e98a0d: /* e98a0d: mov eax, 0x18 */
  eax = 0x18u;
/* e98a12: ret  */
  esp += 4; SPILL(); return;
L_e98a13: /* e98a13: cmp eax, 0x4d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e98a16: jg 0xe98a30 */
  if ((!zf && sf == of)) goto L_e98a30;
L_e98a18: /* e98a18: je 0xe98a54 */
  if (zf) goto L_e98a54;
L_e98a1a: /* e98a1a: add eax, -0x33 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffcdu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e98a1d: cmp eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e98a20: ja 0xe98a6f */
  if ((!cf && !zf)) goto L_e98a6f;
L_e98a22: /* e98a22: movzx ecx, byte ptr [eax + 0xe98ab4] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0xe98ab4u)));
/* e98a29: jmp dword ptr [ecx*4 + 0xe98aa4] */
  switch (R32((uint32_t)(ecx*4 + 0xe98aa4u))) {
    case 0xe98a4eu: goto L_e98a4e;
    case 0xe98a54u: goto L_e98a54;
    case 0xe98a6fu: goto L_e98a6f;
    case 0xe98a72u: goto L_e98a72;
    default: guest_badjump(0xe98a29, R32((uint32_t)(ecx*4 + 0xe98aa4u))); return;
  }
L_e98a30: /* e98a30: cmp eax, 0x32545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x32545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e98a35: jg 0xe98a5a */
  if ((!zf && sf == of)) goto L_e98a5a;
L_e98a37: /* e98a37: je 0xe98a72 */
  if (zf) goto L_e98a72;
L_e98a39: /* e98a39: sub eax, 0x4f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e98a3c: je 0xe98a54 */
  if (zf) goto L_e98a54;
L_e98a3e: /* e98a3e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e98a3f: je 0xe98a4e */
  if (zf) goto L_e98a4e;
L_e98a41: /* e98a41: sub eax, 0x315457f4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x315457f4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e98a46: jne 0xe98a6f */
  if (!zf) goto L_e98a6f;
L_e98a48: /* e98a48: mov eax, 4 */
  eax = 0x4u;
/* e98a4d: ret  */
  esp += 4; SPILL(); return;
L_e98a4e: /* e98a4e: mov eax, 0x10 */
  eax = 0x10u;
/* e98a53: ret  */
  esp += 4; SPILL(); return;
L_e98a54: /* e98a54: mov eax, 0x20 */
  eax = 0x20u;
/* e98a59: ret  */
  esp += 4; SPILL(); return;
L_e98a5a: /* e98a5a: cmp eax, 0x33545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x33545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e98a5f: je 0xe98a72 */
  if (zf) goto L_e98a72;
L_e98a61: /* e98a61: cmp eax, 0x34545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x34545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e98a66: je 0xe98a72 */
  if (zf) goto L_e98a72;
L_e98a68: /* e98a68: cmp eax, 0x35545844 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x35545844u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e98a6d: je 0xe98a72 */
  if (zf) goto L_e98a72;
L_e98a6f: /* e98a6f: xor eax, eax */
  eax = 0;
/* e98a71: ret  */
  esp += 4; SPILL(); return;
L_e98a72: /* e98a72: mov eax, 8 */
  eax = 0x8u;
/* e98a77: ret  */
  esp += 4; SPILL(); return;
}

void f_e98ad0(void) {
  LOAD_REGS();
L_e98ad0: /* e98ad0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e98ad3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e98ad4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e98ad5: mov edx, ecx */
  edx = ecx;
/* e98ad7: mov esi, dword ptr [edx + 0x3c] */
  esi = R32((uint32_t)(edx + 0x3cu));
/* e98ada: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e98adb: mov edi, dword ptr [edx + 0x40] */
  edi = R32((uint32_t)(edx + 0x40u));
/* e98ade: xor ebx, ebx */
  ebx = 0;
/* e98ae0: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e98ae2: jge 0xe98b25 */
  if ((sf == of)) goto L_e98b25;
L_e98ae4: /* e98ae4: mov eax, dword ptr [edx + 0x44] */
  eax = R32((uint32_t)(edx + 0x44u));
/* e98ae7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e98ae8: call 0xe989f0 */
  esp -= 4; W32(esp, 0xe98aedu); SPILL(); f_e989f0(); if (g_unwind) return; RELOAD();
/* e98aed: mov ecx, dword ptr [edx + 0x38] */
  ecx = R32((uint32_t)(edx + 0x38u));
/* e98af0: mov ebp, eax */
  ebp = eax;
/* e98af2: mov eax, dword ptr [edx + 0x34] */
  eax = R32((uint32_t)(edx + 0x34u));
/* e98af5: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* e98af9: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* e98afd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e98b00: /* e98b00: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e98b04: mov ecx, esi */
  ecx = esi;
/* e98b06: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* e98b08: imul eax, ebp */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebp);
  eax = (uint32_t)r;
  }
/* e98b0b: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* e98b0c: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e98b0f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  eax = r;
  }
/* e98b11: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e98b15: sar edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
  }
/* e98b17: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* e98b1a: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* e98b1d: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e98b1f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e98b20: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e98b22: jl 0xe98b00 */
  if ((sf != of)) goto L_e98b00;
L_e98b24: /* e98b24: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_e98b25: /* e98b25: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e98b26: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e98b27: mov eax, ebx */
  eax = ebx;
/* e98b29: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e98b2a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e98b2d: ret  */
  esp += 4; SPILL(); return;
}

void f_e98b30(void) {
  LOAD_REGS();
L_e98b30: /* e98b30: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e98b32: push 0xead14c */
  { uint32_t v = 0xead14cu; esp -= 4; W32(esp, v); }
/* e98b37: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e98b3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e98b3e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e98b45: sub esp, 0x94 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x94u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e98b4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e98b4c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e98b4d: mov ebp, dword ptr [esp + 0xac] */
  ebp = R32((uint32_t)(esp + 0xacu));
/* e98b54: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* e98b57: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e98b58: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e98b59: mov edi, ecx */
  edi = ecx;
/* e98b5b: mov ecx, ebp */
  ecx = ebp;
/* e98b5d: mov dword ptr [esp + 0x44], edi */
  W32((uint32_t)(esp + 0x44u), edi);
/* e98b61: mov dword ptr [esp + 0x74], 0 */
  W32((uint32_t)(esp + 0x74u), 0x0u);
/* e98b69: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0xe98b6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e98b6c: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e98b6f: mov ecx, ebp */
  ecx = ebp;
/* e98b71: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* e98b75: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0xe98b78u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e98b78: mov esi, eax */
  esi = eax;
/* e98b7a: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* e98b7d: mov ecx, ebp */
  ecx = ebp;
/* e98b7f: mov dword ptr [esp + 0x4c], esi */
  W32((uint32_t)(esp + 0x4cu), esi);
/* e98b83: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0xe98b86u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e98b86: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e98b89: mov ebx, eax */
  ebx = eax;
/* e98b8b: mov ecx, ebp */
  ecx = ebp;
/* e98b8d: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* e98b91: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0xe98b94u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e98b94: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* e98b98: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* e98b9b: mov ecx, ebp */
  ecx = ebp;
/* e98b9d: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0xe98ba0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e98ba0: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e98ba3: mov ecx, ebp */
  ecx = ebp;
/* e98ba5: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0xe98ba8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e98ba8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e98baa: mov ecx, 5 */
  ecx = 0x5u;
/* e98baf: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* e98bb3: je 0xe98bc3 */
  if (zf) goto L_e98bc3;
L_e98bb5: /* e98bb5: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e98bb8: je 0xe98bc3 */
  if (zf) goto L_e98bc3;
L_e98bba: /* e98bba: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e98bbd: je 0xe98bc3 */
  if (zf) goto L_e98bc3;
L_e98bbf: /* e98bbf: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
L_e98bc3: /* e98bc3: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* e98bc6: mov ecx, ebp */
  ecx = ebp;
/* e98bc8: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0xe98bcbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e98bcb: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e98bce: mov ecx, ebp */
  ecx = ebp;
/* e98bd0: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e98bd4: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xe98bd7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e98bd7: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* e98bdb: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* e98bde: mov ecx, ebp */
  ecx = ebp;
/* e98be0: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0xe98be3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e98be3: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e98be6: mov ecx, ebp */
  ecx = ebp;
/* e98be8: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* e98bec: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0xe98befu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e98bef: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e98bf1: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* e98bf5: mov eax, esi */
  eax = esi;
/* e98bf7: jle 0xe98bfb */
  if ((zf || sf != of)) goto L_e98bfb;
L_e98bf9: /* e98bf9: mov eax, ebx */
  eax = ebx;
L_e98bfb: /* e98bfb: xor ecx, ecx */
  ecx = 0;
/* e98bfd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e98bff: jle 0xe98c08 */
  if ((zf || sf != of)) goto L_e98c08;
L_e98c01: /* e98c01: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* e98c03: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e98c04: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e98c06: jg 0xe98c01 */
  if ((!zf && sf == of)) goto L_e98c01;
L_e98c08: /* e98c08: cmp dword ptr [esp + 0x2c], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x2cu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e98c0c: jle 0xe98c12 */
  if ((zf || sf != of)) goto L_e98c12;
L_e98c0e: /* e98c0e: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
L_e98c12: /* e98c12: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e98c15: mov eax, dword ptr [eax + 0x4694] */
  eax = R32((uint32_t)(eax + 0x4694u));
/* e98c1b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e98c1d: je 0xe98c27 */
  if (zf) goto L_e98c27;
L_e98c1f: /* e98c1f: mov eax, dword ptr [eax + 0x154] */
  eax = R32((uint32_t)(eax + 0x154u));
/* e98c25: jmp 0xe98c29 */
  goto L_e98c29;
L_e98c27: /* e98c27: xor eax, eax */
  eax = 0;
L_e98c29: /* e98c29: mov ecx, dword ptr [0xeae1a0] */
  ecx = R32((uint32_t)(0xeae1a0u));
/* e98c2f: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e98c32: jne 0xe98ca9 */
  if (!zf) goto L_e98ca9;
L_e98c34: /* e98c34: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e98c36: jne 0xe98ca9 */
  if (!zf) goto L_e98ca9;
L_e98c38: /* e98c38: mov edx, dword ptr [0xeae2d0] */
  edx = R32((uint32_t)(0xeae2d0u));
/* e98c3e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e98c40: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e98c42: je 0xe98ca9 */
  if (zf) goto L_e98ca9;
L_e98c44: /* e98c44: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* e98c47: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e98c49: je 0xe98ca9 */
  if (zf) goto L_e98ca9;
L_e98c4b: /* e98c4b: mov esi, dword ptr [esp + 0x24] */
  esi = R32((uint32_t)(esp + 0x24u));
/* e98c4f: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* e98c53: xor ebx, ebx */
  ebx = 0;
/* e98c55: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e98c57: jge 0xe98c8a */
  if ((sf == of)) goto L_e98c8a;
L_e98c59: /* e98c59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e98c60: /* e98c60: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* e98c64: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* e98c68: mov ecx, esi */
  ecx = esi;
/* e98c6a: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  cf = ((int32_t)(int32_t)a >> (c - 1)) & 1;
  of = 0;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  eax = r;
  }
  }
/* e98c6c: sar edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
  }
/* e98c6e: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* e98c71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e98c72: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* e98c76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e98c77: call 0xe9b0b0 */
  esp -= 4; W32(esp, 0xe98c7cu); SPILL(); f_e9b0b0(); if (g_unwind) return; RELOAD();
/* e98c7c: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e98c7e: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* e98c82: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e98c85: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e98c86: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e98c88: jl 0xe98c60 */
  if ((sf != of)) goto L_e98c60;
L_e98c8a: /* e98c8a: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e98c8e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e98c90: je 0xe98cfa */
  if (zf) goto L_e98cfa;
L_e98c92: /* e98c92: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e98c98: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e98c9a: push 0xeb2fc8 */
  { uint32_t v = 0xeb2fc8u; esp -= 4; W32(esp, v); }
/* e98c9f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e98ca0: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe98ca6u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e98ca6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e98ca9: /* e98ca9: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* e98cad: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e98caf: je 0xe98cce */
  if (zf) goto L_e98cce;
L_e98cb1: /* e98cb1: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* e98cb4: mov eax, dword ptr [edx + 0x48] */
  eax = R32((uint32_t)(edx + 0x48u));
/* e98cb7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e98cb9: jne 0xe98cce */
  if (!zf) goto L_e98cce;
L_e98cbb: /* e98cbb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e98cbd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e98cbf: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0xe98cc2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e98cc2: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* e98cc6: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
L_e98cce: /* e98cce: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e98cd2: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e98cd5: jne 0xe98d74 */
  if (!zf) goto L_e98d74;
L_e98cdb: /* e98cdb: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* e98cde: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e98ce0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e98ce1: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0xe98ce7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e98ce7: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* e98ce9: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* e98ceb: and eax, 0xfffffffb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e98cee: add eax, 0x1a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1au);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (r) < (a);
  of = ((((a) ^ (r)) & ((b) ^ (r))) >> 31) & 1;
  eax = r;
  }
/* e98cf1: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* e98cf5: jmp 0xe98da5 */
  goto L_e98da5;
L_e98cfa: /* e98cfa: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* e98cfe: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e98d00: je 0xe98d3e */
  if (zf) goto L_e98d3e;
L_e98d02: /* e98d02: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e98d04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e98d06: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0xe98d09u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e98d09: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e98d0b: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* e98d0e: shl ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* e98d10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e98d11: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e98d13: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e98d15: mov ecx, eax */
  ecx = eax;
/* e98d17: call dword ptr [edx + 0x48] */
  { uint32_t t = R32((uint32_t)(edx + 0x48u)); esp -= 4; W32(esp, 0xe98d1au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e98d1a: mov ecx, eax */
  ecx = eax;
/* e98d1c: call dword ptr [0xeae234] */
  esp -= 4; W32(esp, 0xe98d22u); SPILL(); f_4e2cde(); if (g_unwind) return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */ RELOAD();
/* e98d22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e98d23: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e98d28: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e98d2a: push 0xeb2f70 */
  { uint32_t v = 0xeb2f70u; esp -= 4; W32(esp, v); }
/* e98d2f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e98d30: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe98d36u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e98d36: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e98d39: jmp 0xe98ca9 */
  goto L_e98ca9;
L_e98d3e: /* e98d3e: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* e98d42: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e98d44: je 0xe98cce */
  if (zf) goto L_e98cce;
L_e98d46: /* e98d46: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e98d48: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e98d49: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e98d4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e98d4d: call dword ptr [edx + 0x48] */
  { uint32_t t = R32((uint32_t)(edx + 0x48u)); esp -= 4; W32(esp, 0xe98d50u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e98d50: mov ecx, eax */
  ecx = eax;
/* e98d52: call dword ptr [0xeae234] */
  esp -= 4; W32(esp, 0xe98d58u); SPILL(); f_4e2cde(); if (g_unwind) return; /* Core!?GetPathName@UObject@@QBEPBGPAV1@PAG@Z */ RELOAD();
/* e98d58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e98d59: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e98d5e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e98d60: push 0xeb2f18 */
  { uint32_t v = 0xeb2f18u; esp -= 4; W32(esp, v); }
/* e98d65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e98d66: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe98d6cu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e98d6c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e98d6f: jmp 0xe98cce */
  goto L_e98cce;
L_e98d74: /* e98d74: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e98d77: jne 0xe98d83 */
  if (!zf) goto L_e98d83;
L_e98d79: /* e98d79: mov dword ptr [esp + 0x18], 0x31545844 */
  W32((uint32_t)(esp + 0x18u), 0x31545844u);
/* e98d81: jmp 0xe98da5 */
  goto L_e98da5;
L_e98d83: /* e98d83: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e98d86: jne 0xe98d92 */
  if (!zf) goto L_e98d92;
L_e98d88: /* e98d88: mov dword ptr [esp + 0x18], 0x33545844 */
  W32((uint32_t)(esp + 0x18u), 0x33545844u);
/* e98d90: jmp 0xe98da5 */
  goto L_e98da5;
L_e98d92: /* e98d92: xor ecx, ecx */
  ecx = 0;
/* e98d94: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e98d97: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e98d9a: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* e98d9b: and ecx, 0x35545844 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x35545844u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  ecx = r;
  }
/* e98da1: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
L_e98da5: /* e98da5: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e98da8: mov edx, dword ptr [eax + 0x41a4] */
  edx = R32((uint32_t)(eax + 0x41a4u));
/* e98dae: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* e98db2: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* e98db6: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* e98dbe: mov edi, edi */
  edi = edi;
L_e98dc0: /* e98dc0: mov eax, esi */
  eax = esi;
/* e98dc2: sar eax, cl */
  { uint32_t a = (uint32_t)(eax); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
  }
/* e98dc4: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e98dc6: jg 0xe98dd9 */
  if ((!zf && sf == of)) goto L_e98dd9;
L_e98dc8: /* e98dc8: mov ebx, dword ptr [esp + 0x38] */
  ebx = R32((uint32_t)(esp + 0x38u));
/* e98dcc: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e98dcf: sar ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
  }
/* e98dd1: cmp ebx, dword ptr [eax + 0x41a8] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x41a8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e98dd7: jle 0xe98dec */
  if ((zf || sf != of)) goto L_e98dec;
L_e98dd9: /* e98dd9: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* e98ddd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e98dde: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e98de0: jl 0xe98dc0 */
  if ((sf != of)) goto L_e98dc0;
L_e98de2: /* e98de2: mov dword ptr [esp + 0x1c], 1 */
  W32((uint32_t)(esp + 0x1cu), 0x1u);
/* e98dea: jmp 0xe98dc0 */
  goto L_e98dc0;
L_e98dec: /* e98dec: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* e98df0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* e98df2: mov dword ptr [esp + 0x24], ecx */
  W32((uint32_t)(esp + 0x24u), ecx);
/* e98df6: je 0xe98e00 */
  if (zf) goto L_e98e00;
L_e98df8: /* e98df8: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
L_e98e00: /* e98e00: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* e98e04: mov ebx, dword ptr [esp + 0x4c] */
  ebx = R32((uint32_t)(esp + 0x4cu));
/* e98e08: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* e98e0c: mov eax, 1 */
  eax = 0x1u;
/* e98e11: sar ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  cf = ((int32_t)(int32_t)a >> (c - 1)) & 1;
  of = 0;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  ebx = r;
  }
  }
/* e98e13: sar esi, cl */
  { uint32_t a = (uint32_t)(esi); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
  }
/* e98e15: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* e98e1c: mov dword ptr [esp + 0x84], eax */
  W32((uint32_t)(esp + 0x84u), eax);
/* e98e23: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* e98e27: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e98e29: mov dword ptr [esp + 0x48], ebx */
  W32((uint32_t)(esp + 0x48u), ebx);
/* e98e2d: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
/* e98e31: je 0xe98e6c */
  if (zf) goto L_e98e6c;
L_e98e33: /* e98e33: cmp ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e98e35: jle 0xe98e3d */
  if ((zf || sf != of)) goto L_e98e3d;
L_e98e37: /* e98e37: mov ebx, edx */
  ebx = edx;
/* e98e39: mov dword ptr [esp + 0x48], ebx */
  W32((uint32_t)(esp + 0x48u), ebx);
L_e98e3d: /* e98e3d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e98e40: mov eax, dword ptr [eax + 0x41a8] */
  eax = R32((uint32_t)(eax + 0x41a8u));
/* e98e46: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e98e48: jle 0xe98e50 */
  if ((zf || sf != of)) goto L_e98e50;
L_e98e4a: /* e98e4a: mov esi, eax */
  esi = eax;
/* e98e4c: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
L_e98e50: /* e98e50: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* e98e54: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* e98e55: idiv ebx */
  { int32_t d = (int32_t)ebx; if (!d) d = (int32_t)guest_divzero(0xe98e55);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* e98e57: mov dword ptr [esp + 0x80], eax */
  W32((uint32_t)(esp + 0x80u), eax);
/* e98e5e: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* e98e62: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* e98e63: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0xe98e63);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* e98e65: mov dword ptr [esp + 0x84], eax */
  W32((uint32_t)(esp + 0x84u), eax);
L_e98e6c: /* e98e6c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e98e6e: je 0xe99c8d */
  if (zf) goto L_e99c8d;
L_e98e74: /* e98e74: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e98e76: je 0xe99c8d */
  if (zf) goto L_e99c8d;
L_e98e7c: /* e98e7c: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e98e80: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e98e82: je 0xe9928c */
  if (zf) goto L_e9928c;
L_e98e88: /* e98e88: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e98e8a: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0xe98e8du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e98e8d: lea ebp, [edi + 0x2c] */
  ebp = (uint32_t)(edi + 0x2cu);
/* e98e90: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* e98e94: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* e98e97: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e98e99: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* e98e9d: je 0xe98ecd */
  if (zf) goto L_e98ecd;
L_e98e9f: /* e98e9f: cmp dword ptr [edi + 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x34u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e98ea2: jne 0xe98ec3 */
  if (!zf) goto L_e98ec3;
L_e98ea4: /* e98ea4: cmp dword ptr [edi + 0x38], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x38u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e98ea7: jne 0xe98ec3 */
  if (!zf) goto L_e98ec3;
L_e98ea9: /* e98ea9: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* e98eac: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e98eae: jne 0xe98ec3 */
  if (!zf) goto L_e98ec3;
L_e98eb0: /* e98eb0: cmp dword ptr [edi + 0x40], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x40u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e98eb4: jne 0xe98ec3 */
  if (!zf) goto L_e98ec3;
L_e98eb6: /* e98eb6: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* e98eb9: cmp ecx, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e98ebd: je 0xe98f70 */
  if (zf) goto L_e98f70;
L_e98ec3: /* e98ec3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e98ec5: je 0xe98ecd */
  if (zf) goto L_e98ecd;
L_e98ec7: /* e98ec7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e98ec9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e98eca: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xe98ecdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e98ecd: /* e98ecd: cmp dword ptr [esp + 0x28], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e98ed2: jne 0xe98eed */
  if (!zf) goto L_e98eed;
L_e98ed4: /* e98ed4: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* e98ed7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e98ed9: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* e98edb: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0xe98ee1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e98ee1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e98ee3: jne 0xe98eed */
  if (!zf) goto L_e98eed;
L_e98ee5: /* e98ee5: mov dword ptr [esp + 0x18], 0x17 */
  W32((uint32_t)(esp + 0x18u), 0x17u);
L_e98eed: /* e98eed: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* e98ef0: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e98ef6: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* e98efa: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e98efc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e98efd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e98eff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e98f00: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e98f02: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e98f04: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e98f05: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e98f06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e98f07: call dword ptr [edx + 0x50] */
  { uint32_t t = R32((uint32_t)(edx + 0x50u)); esp -= 4; W32(esp, 0xe98f0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e98f0a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e98f0c: jge 0xe98f57 */
  if ((sf == of)) goto L_e98f57;
L_e98f0e: /* e98f0e: lea esi, [esp + 0x64] */
  esi = (uint32_t)(esp + 0x64u);
/* e98f12: call 0xe98730 */
  esp -= 4; W32(esp, 0xe98f17u); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e98f17: mov ecx, eax */
  ecx = eax;
/* e98f19: mov dword ptr [esp + 0xac], 0 */
  W32((uint32_t)(esp + 0xacu), 0x0u);
/* e98f24: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe98f2au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e98f2a: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e98f30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e98f31: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e98f33: push 0xeb2ee0 */
  { uint32_t v = 0xeb2ee0u; esp -= 4; W32(esp, v); }
/* e98f38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e98f39: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe98f3fu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e98f3f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e98f42: lea ecx, [esp + 0x64] */
  ecx = (uint32_t)(esp + 0x64u);
/* e98f46: mov dword ptr [esp + 0xac], 0xffffffff */
  W32((uint32_t)(esp + 0xacu), 0xffffffffu);
/* e98f51: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe98f57u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e98f57: /* e98f57: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e98f5b: lea ecx, [edi + 0x48] */
  ecx = (uint32_t)(edi + 0x48u);
/* e98f5e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e98f60: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* e98f67: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* e98f6a: call dword ptr [0xeae028] */
  esp -= 4; W32(esp, 0xe98f70u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
L_e98f70: /* e98f70: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e98f74: cmp dword ptr [edi + 0x4c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e98f77: je 0xe9915f */
  if (zf) goto L_e9915f;
L_e98f7d: /* e98f7d: lea ebp, [edi + 0x48] */
  ebp = (uint32_t)(edi + 0x48u);
/* e98f80: mov esi, eax */
  esi = eax;
/* e98f82: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e98f84: mov ecx, ebp */
  ecx = ebp;
/* e98f86: mov dword ptr [ebp + 4], 0 */
  W32((uint32_t)(ebp + 0x4u), 0x0u);
/* e98f8d: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* e98f90: call dword ptr [0xeae028] */
  esp -= 4; W32(esp, 0xe98f96u); SPILL(); f_4e4502(); if (g_unwind) return; /* Core!?Realloc@FArray@@IAEXH@Z */ RELOAD();
/* e98f96: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e98f97: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e98f99: mov ecx, ebp */
  ecx = ebp;
/* e98f9b: call dword ptr [0xeae230] */
  esp -= 4; W32(esp, 0xe98fa1u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* e98fa1: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* e98fa5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* e98fa7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e98fa9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e98fab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e98fad: lea edx, [esp + 0x6c] */
  edx = (uint32_t)(esp + 0x6cu);
/* e98fb1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e98fb2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e98fb4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e98fb5: call dword ptr [ecx + 0x40] */
  { uint32_t t = R32((uint32_t)(ecx + 0x40u)); esp -= 4; W32(esp, 0xe98fb8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e98fb8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e98fba: jge 0xe99004 */
  if ((sf == of)) goto L_e99004;
L_e98fbc: /* e98fbc: lea esi, [esp + 0x58] */
  esi = (uint32_t)(esp + 0x58u);
/* e98fc0: call 0xe98730 */
  esp -= 4; W32(esp, 0xe98fc5u); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e98fc5: mov ecx, eax */
  ecx = eax;
/* e98fc7: mov dword ptr [esp + 0xac], 1 */
  W32((uint32_t)(esp + 0xacu), 0x1u);
/* e98fd2: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe98fd8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e98fd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e98fd9: mov eax, dword ptr [0xeae020] */
  eax = R32((uint32_t)(0xeae020u));
/* e98fde: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e98fe0: push 0xeb2eb4 */
  { uint32_t v = 0xeb2eb4u; esp -= 4; W32(esp, v); }
/* e98fe5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e98fe6: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe98fecu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e98fec: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e98fef: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* e98ff3: mov dword ptr [esp + 0xac], 0xffffffff */
  W32((uint32_t)(esp + 0xacu), 0xffffffffu);
/* e98ffe: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe99004u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e99004: /* e99004: cmp dword ptr [esp + 0x18], 0x17 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(0x17u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e99009: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* e9900d: mov ebx, dword ptr [esp + 0x64] */
  ebx = R32((uint32_t)(esp + 0x64u));
/* e99011: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* e99015: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* e99019: jne 0xe9903a */
  if (!zf) goto L_e9903a;
L_e9901b: /* e9901b: mov ebx, dword ptr [esp + 0x4c] */
  ebx = R32((uint32_t)(esp + 0x4cu));
/* e9901f: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* e99022: mov eax, ebx */
  eax = ebx;
/* e99024: imul eax, dword ptr [esp + 0x38] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x38u)));
  eax = (uint32_t)r;
  }
/* e99029: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9902a: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* e9902e: call 0xe9b060 */
  esp -= 4; W32(esp, 0xe99033u); SPILL(); f_e9b060(); if (g_unwind) return; RELOAD();
/* e99033: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e99036: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
L_e9903a: /* e9903a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9903e: xor edi, edi */
  edi = 0;
/* e99040: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99042: jle 0xe990c1 */
  if ((zf || sf != of)) goto L_e990c1;
L_e99044: /* e99044: jmp 0xe99050 */
  goto L_e99050;
L_e99046: /* e99046: mov ebx, dword ptr [esp + 0x34] */
  ebx = R32((uint32_t)(esp + 0x34u));
/* e9904a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e99050: /* e99050: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e99054: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e99056: xor eax, eax */
  eax = 0;
/* e99058: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* e9905c: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* e99060: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* e99064: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99065: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* e99069: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9906a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9906b: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0xe9906eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9906e: mov esi, eax */
  esi = eax;
/* e99070: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e99072: mov ecx, esi */
  ecx = esi;
/* e99074: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xe99077u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99077: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* e9907b: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* e9907f: mov dword ptr [esp + 0x50], eax */
  W32((uint32_t)(esp + 0x50u), eax);
/* e99083: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e99085: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99087: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
/* e9908b: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* e9908f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99090: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e99091: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e99092: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e99093: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e99094: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99095: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* e99099: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9909a: call 0xe9b120 */
  esp -= 4; W32(esp, 0xe9909fu); SPILL(); f_e9b120(); if (g_unwind) return; RELOAD();
/* e9909f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e990a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e990a3: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* e990a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e990a9: mov ecx, esi */
  ecx = esi;
/* e990ab: call dword ptr [eax + 0x40] */
  { uint32_t t = R32((uint32_t)(eax + 0x40u)); esp -= 4; W32(esp, 0xe990aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e990ae: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* e990b1: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* e990b5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e990b9: mov dword ptr [ecx + edi*4], edx */
  W32((uint32_t)(ecx + edi*4), edx);
/* e990bc: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e990bd: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e990bf: jl 0xe99046 */
  if ((sf != of)) goto L_e99046;
L_e990c1: /* e990c1: cmp dword ptr [esp + 0x18], 0x17 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(0x17u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e990c6: jne 0xe99149 */
  if (!zf) goto L_e99149;
L_e990cc: /* e990cc: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* e990d0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e990d2: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e990d6: mov edx, dword ptr [esp + 0x68] */
  edx = R32((uint32_t)(esp + 0x68u));
/* e990da: jle 0xe99137 */
  if ((zf || sf != of)) goto L_e99137;
L_e990dc: /* e990dc: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* e990e0: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
L_e990e4: /* e990e4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e990e6: jle 0xe99128 */
  if ((zf || sf != of)) goto L_e99128;
L_e990e8: /* e990e8: mov esi, edi */
  esi = edi;
/* e990ea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e990f0: /* e990f0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e990f2: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* e990f6: movzx bx, byte ptr [esp + 0x3e] */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(esp + 0x3eu)))) & 0xffffu);
/* e990fc: movzx bp, ah */
  ebp = (ebp & 0xffff0000u) | ((uint32_t)((uint32_t)(((eax >> 8) & 0xffu))) & 0xffffu);
/* e99100: shr al, 3 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 3;
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* e99103: movzx ax, al */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)((eax & 0xffu))) & 0xffffu);
/* e99107: and ebx, 0xfff8 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfff8u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* e9910d: shl ebx, 5 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* e99110: and ebp, 0xfffc */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffcu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* e99116: add ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e99118: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e9911b: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9911e: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* e9911f: lea eax, [eax + ebx*8] */
  eax = (uint32_t)(eax + ebx*8);
/* e99122: mov word ptr [edx - 2], ax */
  W16((uint32_t)(edx + 0xfffffffeu), (eax & 0xffffu));
/* e99126: jne 0xe990f0 */
  if (!zf) goto L_e990f0;
L_e99128: /* e99128: lea eax, [edi*8] */
  eax = (uint32_t)(edi*8);
/* e9912f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e99131: dec dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x34u), r);
  }
/* e99135: jne 0xe990e4 */
  if (!zf) goto L_e990e4;
L_e99137: /* e99137: mov ecx, dword ptr [0xeae014] */
  ecx = R32((uint32_t)(0xeae014u));
/* e9913d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* e9913f: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* e99143: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e99145: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99146: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xe99149u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e99149: /* e99149: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* e9914d: add eax, 0x2c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e99150: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* e99152: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e99154: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99156: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99157: call dword ptr [ecx + 0x44] */
  { uint32_t t = R32((uint32_t)(ecx + 0x44u)); esp -= 4; W32(esp, 0xe9915au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9915a: jmp 0xe99ce4 */
  goto L_e99ce4;
L_e9915f: /* e9915f: xor ebx, ebx */
  ebx = 0;
/* e99161: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99163: jle 0xe99ce4 */
  if ((zf || sf != of)) goto L_e99ce4;
L_e99169: /* e99169: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* e9916d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e99170: /* e99170: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e99174: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e99176: xor eax, eax */
  eax = 0;
/* e99178: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* e9917c: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* e99180: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* e99184: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99185: lea eax, [esp + 0x20] */
  eax = (uint32_t)(esp + 0x20u);
/* e99189: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9918a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9918b: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0xe9918eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9918e: mov edi, eax */
  edi = eax;
/* e99190: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* e99192: mov ecx, edi */
  ecx = edi;
/* e99194: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xe99197u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99197: mov esi, eax */
  esi = eax;
/* e99199: mov eax, dword ptr [ebp + 0x48] */
  eax = R32((uint32_t)(ebp + 0x48u));
/* e9919c: cmp dword ptr [eax + ebx*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ebx*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9919f: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* e991a3: je 0xe9927a */
  if (zf) goto L_e9927a;
L_e991a9: /* e991a9: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e991ad: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* e991b1: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e991b3: mov dword ptr [esp + 0x94], ecx */
  W32((uint32_t)(esp + 0x94u), ecx);
/* e991ba: mov ecx, edi */
  ecx = edi;
/* e991bc: mov dword ptr [esp + 0x98], edx */
  W32((uint32_t)(esp + 0x98u), edx);
/* e991c3: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0xe991c6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e991c6: add eax, dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e991ca: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* e991cc: mov ecx, edi */
  ecx = edi;
/* e991ce: mov dword ptr [esp + 0x9c], eax */
  W32((uint32_t)(esp + 0x9cu), eax);
/* e991d5: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0xe991d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e991d8: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* e991dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e991de: lea edx, [esp + 0x98] */
  edx = (uint32_t)(esp + 0x98u);
/* e991e5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e991e6: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e991e8: lea edx, [esp + 0x6c] */
  edx = (uint32_t)(esp + 0x6cu);
/* e991ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e991ed: mov dword ptr [esp + 0xac], eax */
  W32((uint32_t)(esp + 0xacu), eax);
/* e991f4: mov eax, dword ptr [ebp + 0x2c] */
  eax = R32((uint32_t)(ebp + 0x2cu));
/* e991f7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e991f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e991fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e991fc: call dword ptr [ecx + 0x40] */
  { uint32_t t = R32((uint32_t)(ecx + 0x40u)); esp -= 4; W32(esp, 0xe991ffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e991ff: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99201: jge 0xe9924f */
  if ((sf == of)) goto L_e9924f;
L_e99203: /* e99203: lea esi, [esp + 0x58] */
  esi = (uint32_t)(esp + 0x58u);
/* e99207: call 0xe98730 */
  esp -= 4; W32(esp, 0xe9920cu); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e9920c: mov ecx, eax */
  ecx = eax;
/* e9920e: mov dword ptr [esp + 0xac], 2 */
  W32((uint32_t)(esp + 0xacu), 0x2u);
/* e99219: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe9921fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e9921f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99220: mov eax, dword ptr [0xeae020] */
  eax = R32((uint32_t)(0xeae020u));
/* e99225: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e99227: push 0xeb2eb4 */
  { uint32_t v = 0xeb2eb4u; esp -= 4; W32(esp, v); }
/* e9922c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9922d: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe99233u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e99233: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e99236: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* e9923a: mov dword ptr [esp + 0xac], 0xffffffff */
  W32((uint32_t)(esp + 0xacu), 0xffffffffu);
/* e99245: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe9924bu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e9924b: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
L_e9924f: /* e9924f: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e99253: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* e99257: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* e99259: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e9925b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9925c: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* e99260: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e99261: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99262: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99264: mov ecx, edi */
  ecx = edi;
/* e99266: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0xe99269u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99269: mov eax, dword ptr [ebp + 0x2c] */
  eax = R32((uint32_t)(ebp + 0x2cu));
/* e9926c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9926e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99270: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99271: call dword ptr [ecx + 0x44] */
  { uint32_t t = R32((uint32_t)(ecx + 0x44u)); esp -= 4; W32(esp, 0xe99274u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99274: mov edx, dword ptr [ebp + 0x48] */
  edx = R32((uint32_t)(ebp + 0x48u));
/* e99277: mov dword ptr [edx + ebx*4], esi */
  W32((uint32_t)(edx + ebx*4), esi);
L_e9927a: /* e9927a: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9927e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* e9927f: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e99281: jl 0xe99170 */
  if ((sf != of)) goto L_e99170;
L_e99287: /* e99287: jmp 0xe99ce4 */
  goto L_e99ce4;
L_e9928c: /* e9928c: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* e99290: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e99292: je 0xe994a6 */
  if (zf) goto L_e994a6;
L_e99298: /* e99298: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e9929b: mov ecx, dword ptr [eax + 0x48] */
  ecx = R32((uint32_t)(eax + 0x48u));
/* e9929e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e992a0: je 0xe994a6 */
  if (zf) goto L_e994a6;
L_e992a6: /* e992a6: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* e992aa: mov ecx, eax */
  ecx = eax;
/* e992ac: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e992ae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e992af: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0xe992b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e992b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e992b7: je 0xe994a6 */
  if (zf) goto L_e994a6;
L_e992bd: /* e992bd: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* e992c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e992c2: lea esi, [edi + 0x30] */
  esi = (uint32_t)(edi + 0x30u);
/* e992c5: mov dword ptr [esp + 0x34], esi */
  W32((uint32_t)(esp + 0x34u), esi);
/* e992c9: je 0xe992fa */
  if (zf) goto L_e992fa;
L_e992cb: /* e992cb: cmp dword ptr [edi + 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x34u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e992ce: jne 0xe992fa */
  if (!zf) goto L_e992fa;
L_e992d0: /* e992d0: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* e992d4: cmp dword ptr [edi + 0x38], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x38u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e992d7: jne 0xe992fa */
  if (!zf) goto L_e992fa;
L_e992d9: /* e992d9: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* e992dd: cmp dword ptr [edi + 0x3c], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x3cu))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e992e0: jne 0xe992fe */
  if (!zf) goto L_e992fe;
L_e992e2: /* e992e2: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* e992e5: cmp edx, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e992e9: jne 0xe992fe */
  if (!zf) goto L_e992fe;
L_e992eb: /* e992eb: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* e992ee: cmp ecx, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e992f2: je 0xe993ae */
  if (zf) goto L_e993ae;
L_e992f8: /* e992f8: jmp 0xe992fe */
  goto L_e992fe;
L_e992fa: /* e992fa: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
L_e992fe: /* e992fe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e99300: je 0xe99308 */
  if (zf) goto L_e99308;
L_e99302: /* e99302: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e99304: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99305: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xe99308u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e99308: /* e99308: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* e9930c: cmp dword ptr [esp + 0x4c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x4cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e99310: je 0xe99329 */
  if (zf) goto L_e99329;
L_e99312: /* e99312: mov ecx, dword ptr [0xeae020] */
  ecx = R32((uint32_t)(0xeae020u));
/* e99318: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9931a: push 0xeb2e84 */
  { uint32_t v = 0xeb2e84u; esp -= 4; W32(esp, v); }
/* e9931f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e99320: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe99326u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e99326: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e99329: /* e99329: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e9932c: mov ecx, dword ptr [eax + 0x40e4] */
  ecx = R32((uint32_t)(eax + 0x40e4u));
/* e99332: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e99334: je 0xe9933e */
  if (zf) goto L_e9933e;
L_e99336: /* e99336: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* e9933a: sub ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* e9933c: jmp 0xe99343 */
  goto L_e99343;
L_e9933e: /* e9933e: mov ecx, 1 */
  ecx = 0x1u;
L_e99343: /* e99343: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e99349: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9934b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9934c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9934e: push dword ptr [esp + 0x20] */
  { uint32_t v = R32((uint32_t)(esp + 0x20u)); esp -= 4; W32(esp, v); }
/* e99352: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99354: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e99355: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e99356: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99357: call dword ptr [edx + 0x58] */
  { uint32_t t = R32((uint32_t)(edx + 0x58u)); esp -= 4; W32(esp, 0xe9935au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9935a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9935c: jge 0xe993ae */
  if ((sf == of)) goto L_e993ae;
L_e9935e: /* e9935e: lea esi, [esp + 0x58] */
  esi = (uint32_t)(esp + 0x58u);
/* e99362: call 0xe98730 */
  esp -= 4; W32(esp, 0xe99367u); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e99367: mov ecx, eax */
  ecx = eax;
/* e99369: mov dword ptr [esp + 0xac], 3 */
  W32((uint32_t)(esp + 0xacu), 0x3u);
/* e99374: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe9937au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e9937a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9937b: mov eax, dword ptr [0xeae020] */
  eax = R32((uint32_t)(0xeae020u));
/* e99380: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e99382: push 0xeb2e48 */
  { uint32_t v = 0xeb2e48u; esp -= 4; W32(esp, v); }
/* e99387: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e99388: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe9938eu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e9938e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e99391: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* e99395: mov dword ptr [esp + 0xac], 0xffffffff */
  W32((uint32_t)(esp + 0xacu), 0xffffffffu);
/* e993a0: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe993a6u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e993a6: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* e993aa: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
L_e993ae: /* e993ae: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* e993b1: mov eax, dword ptr [edx + 0x40e4] */
  eax = R32((uint32_t)(edx + 0x40e4u));
/* e993b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e993b9: je 0xe993c5 */
  if (zf) goto L_e993c5;
L_e993bb: /* e993bb: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* e993bf: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* e993c3: jmp 0xe993cc */
  goto L_e993cc;
L_e993c5: /* e993c5: lea ecx, [ebp + 1] */
  ecx = (uint32_t)(ebp + 0x1u);
/* e993c8: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
L_e993cc: /* e993cc: cmp ebp, dword ptr [esp + 0x1c] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x1cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e993d0: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* e993d4: jge 0xe99ce4 */
  if ((sf == of)) goto L_e99ce4;
L_e993da: /* e993da: xor ebx, ebx */
  ebx = 0;
/* e993dc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e993e0: /* e993e0: xor edi, edi */
  edi = 0;
L_e993e2: /* e993e2: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* e993e6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e993e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e993e9: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0xe993ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e993ec: mov ebp, eax */
  ebp = eax;
/* e993ee: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e993f0: je 0xe99481 */
  if (zf) goto L_e99481;
L_e993f6: /* e993f6: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e993f8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e993fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e993fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e993fe: lea edx, [esp + 0x6c] */
  edx = (uint32_t)(esp + 0x6cu);
/* e99402: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e99403: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e99404: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e99405: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99406: call dword ptr [ecx + 0x40] */
  { uint32_t t = R32((uint32_t)(ecx + 0x40u)); esp -= 4; W32(esp, 0xe99409u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99409: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9940b: je 0xe99459 */
  if (zf) goto L_e99459;
L_e9940d: /* e9940d: lea esi, [esp + 0x58] */
  esi = (uint32_t)(esp + 0x58u);
/* e99411: call 0xe98730 */
  esp -= 4; W32(esp, 0xe99416u); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e99416: mov ecx, eax */
  ecx = eax;
/* e99418: mov dword ptr [esp + 0xac], 4 */
  W32((uint32_t)(esp + 0xacu), 0x4u);
/* e99423: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe99429u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e99429: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9942a: mov eax, dword ptr [0xeae020] */
  eax = R32((uint32_t)(0xeae020u));
/* e9942f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e99431: push 0xeb2eb4 */
  { uint32_t v = 0xeb2eb4u; esp -= 4; W32(esp, v); }
/* e99436: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e99437: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe9943du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e9943d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e99440: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* e99444: mov dword ptr [esp + 0xac], 0xffffffff */
  W32((uint32_t)(esp + 0xacu), 0xffffffffu);
/* e9944f: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe99455u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e99455: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
L_e99459: /* e99459: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e9945d: mov ecx, dword ptr [esp + 0x64] */
  ecx = R32((uint32_t)(esp + 0x64u));
/* e99461: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e99464: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99466: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99467: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* e9946b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9946c: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* e99470: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99471: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e99472: mov ecx, ebp */
  ecx = ebp;
/* e99474: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0xe99477u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99477: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e99479: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9947b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9947c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9947d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9947e: call dword ptr [edx + 0x44] */
  { uint32_t t = R32((uint32_t)(edx + 0x44u)); esp -= 4; W32(esp, 0xe99481u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e99481: /* e99481: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e99482: cmp edi, 6 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e99485: jl 0xe993e2 */
  if ((sf != of)) goto L_e993e2;
L_e9948b: /* e9948b: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e9948f: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e99493: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e99494: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* e99495: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e99497: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e9949b: jl 0xe993e0 */
  if ((sf != of)) goto L_e993e0;
L_e994a1: /* e994a1: jmp 0xe99ce4 */
  goto L_e99ce4;
L_e994a6: /* e994a6: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* e994aa: xor eax, eax */
  eax = 0;
/* e994ac: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e994ae: je 0xe996df */
  if (zf) goto L_e996df;
L_e994b4: /* e994b4: lea eax, [edi + 0x2c] */
  eax = (uint32_t)(edi + 0x2cu);
/* e994b7: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* e994bb: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* e994bd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e994bf: je 0xe994f4 */
  if (zf) goto L_e994f4;
L_e994c1: /* e994c1: cmp dword ptr [edi + 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x34u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e994c4: jne 0xe994ea */
  if (!zf) goto L_e994ea;
L_e994c6: /* e994c6: cmp dword ptr [edi + 0x38], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x38u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e994c9: jne 0xe994ea */
  if (!zf) goto L_e994ea;
L_e994cb: /* e994cb: mov ecx, dword ptr [edi + 0x3c] */
  ecx = R32((uint32_t)(edi + 0x3cu));
/* e994ce: cmp ecx, dword ptr [esp + 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x24u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e994d2: jne 0xe994ea */
  if (!zf) goto L_e994ea;
L_e994d4: /* e994d4: mov edx, dword ptr [edi + 0x40] */
  edx = R32((uint32_t)(edi + 0x40u));
/* e994d7: cmp edx, dword ptr [esp + 0x2c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e994db: jne 0xe994ea */
  if (!zf) goto L_e994ea;
L_e994dd: /* e994dd: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* e994e1: cmp dword ptr [edi + 0x44], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x44u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e994e4: je 0xe995e2 */
  if (zf) goto L_e995e2;
L_e994ea: /* e994ea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e994ec: je 0xe994f4 */
  if (zf) goto L_e994f4;
L_e994ee: /* e994ee: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e994f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e994f1: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xe994f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e994f4: /* e994f4: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* e994f8: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* e994fc: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* e99504: sub ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* e99506: jmp 0xe99510 */
  goto L_e99510;
L_e99510: /* e99510: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* e99514: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e99517: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e9951d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9951f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e99520: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* e99524: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99526: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e99527: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e99529: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9952a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9952b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9952c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9952d: call dword ptr [ecx + 0x50] */
  { uint32_t t = R32((uint32_t)(ecx + 0x50u)); esp -= 4; W32(esp, 0xe99530u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99530: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99532: jge 0xe99583 */
  if ((sf == of)) goto L_e99583;
L_e99534: /* e99534: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e99537: mov ecx, dword ptr [eax + 0x411c] */
  ecx = R32((uint32_t)(eax + 0x411cu));
/* e9953d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9953f: je 0xe99547 */
  if (zf) goto L_e99547;
L_e99541: /* e99541: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* e99545: jmp 0xe99570 */
  goto L_e99570;
L_e99547: /* e99547: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e9954d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9954f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99551: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99552: call dword ptr [ecx + 0x14] */
  { uint32_t t = R32((uint32_t)(ecx + 0x14u)); esp -= 4; W32(esp, 0xe99555u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99555: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99557: jge 0xe99570 */
  if ((sf == of)) goto L_e99570;
L_e99559: /* e99559: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e9955f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e99561: push 0xeb2e00 */
  { uint32_t v = 0xeb2e00u; esp -= 4; W32(esp, v); }
/* e99566: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99567: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe9956du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e9956d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e99570: /* e99570: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e99574: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e99575: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e99578: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e9957c: jl 0xe99510 */
  if ((sf != of)) goto L_e99510;
L_e9957e: /* e9957e: jmp 0xe9969a */
  goto L_e9969a;
L_e99583: /* e99583: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* e99587: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e99589: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9958b: lea ecx, [edi + 0x24] */
  ecx = (uint32_t)(edi + 0x24u);
/* e9958e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9958f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99591: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99592: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0xe99595u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99595: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99597: jge 0xe995e2 */
  if ((sf == of)) goto L_e995e2;
L_e99599: /* e99599: lea esi, [esp + 0x58] */
  esi = (uint32_t)(esp + 0x58u);
/* e9959d: call 0xe98730 */
  esp -= 4; W32(esp, 0xe995a2u); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e995a2: mov ecx, eax */
  ecx = eax;
/* e995a4: mov dword ptr [esp + 0xac], 5 */
  W32((uint32_t)(esp + 0xacu), 0x5u);
/* e995af: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe995b5u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e995b5: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e995bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e995bc: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e995be: push 0xeb2dc8 */
  { uint32_t v = 0xeb2dc8u; esp -= 4; W32(esp, v); }
/* e995c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e995c4: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe995cau); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e995ca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e995cd: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* e995d1: mov dword ptr [esp + 0xac], 0xffffffff */
  W32((uint32_t)(esp + 0xacu), 0xffffffffu);
/* e995dc: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe995e2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e995e2: /* e995e2: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* e995e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e995e7: lea esi, [edi + 0x28] */
  esi = (uint32_t)(edi + 0x28u);
/* e995ea: je 0xe99622 */
  if (zf) goto L_e99622;
L_e995ec: /* e995ec: cmp dword ptr [edi + 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x34u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e995ef: jne 0xe99618 */
  if (!zf) goto L_e99618;
L_e995f1: /* e995f1: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* e995f5: cmp dword ptr [edi + 0x38], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x38u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e995f8: jne 0xe99618 */
  if (!zf) goto L_e99618;
L_e995fa: /* e995fa: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* e995fe: cmp dword ptr [edi + 0x3c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x3cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e99601: jne 0xe99618 */
  if (!zf) goto L_e99618;
L_e99603: /* e99603: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* e99607: cmp dword ptr [edi + 0x40], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x40u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9960a: je 0xe99ce4 */
  if (zf) goto L_e99ce4;
L_e99610: /* e99610: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* e99614: mov ebx, dword ptr [esp + 0x48] */
  ebx = R32((uint32_t)(esp + 0x48u));
L_e99618: /* e99618: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9961a: je 0xe99622 */
  if (zf) goto L_e99622;
L_e9961c: /* e9961c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9961e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9961f: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xe99622u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e99622: /* e99622: xor ebp, ebp */
  ebp = 0;
/* e99624: jmp 0xe99630 */
  goto L_e99630;
L_e99626: /* e99626: mov ebx, dword ptr [esp + 0x48] */
  ebx = R32((uint32_t)(esp + 0x48u));
/* e9962a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e99630: /* e99630: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e99633: mov ecx, dword ptr [eax + 0x46b4] */
  ecx = R32((uint32_t)(eax + 0x46b4u));
/* e99639: mov eax, dword ptr [eax + 0x4664] */
  eax = R32((uint32_t)(eax + 0x4664u));
/* e9963f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e99641: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e99642: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99644: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99645: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* e99649: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9964a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9964b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9964c: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0xe9964fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9964f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99651: jge 0xe99ce4 */
  if ((sf == of)) goto L_e99ce4;
L_e99657: /* e99657: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* e9965b: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e9965e: mov ecx, dword ptr [eax + 0x411c] */
  ecx = R32((uint32_t)(eax + 0x411cu));
/* e99664: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e99666: je 0xe9966b */
  if (zf) goto L_e9966b;
L_e99668: /* e99668: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* e99669: jmp 0xe99694 */
  goto L_e99694;
L_e9966b: /* e9966b: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e99671: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e99673: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99675: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99676: call dword ptr [ecx + 0x14] */
  { uint32_t t = R32((uint32_t)(ecx + 0x14u)); esp -= 4; W32(esp, 0xe99679u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99679: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9967b: jge 0xe99694 */
  if ((sf == of)) goto L_e99694;
L_e9967d: /* e9967d: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e99683: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e99685: push 0xeb2e00 */
  { uint32_t v = 0xeb2e00u; esp -= 4; W32(esp, v); }
/* e9968a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9968b: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe99691u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e99691: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e99694: /* e99694: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* e99695: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e99698: jl 0xe99626 */
  if ((sf != of)) goto L_e99626;
L_e9969a: /* e9969a: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* e9969d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9969f: mov dword ptr [esp + 0x74], 1 */
  W32((uint32_t)(esp + 0x74u), 0x1u);
/* e996a7: je 0xe996af */
  if (zf) goto L_e996af;
L_e996a9: /* e996a9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e996ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e996ac: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0xe996afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e996af: /* e996af: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* e996b3: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e996b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e996b7: je 0xe996bf */
  if (zf) goto L_e996bf;
L_e996b9: /* e996b9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e996bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e996bc: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0xe996bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e996bf: /* e996bf: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* e996c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e996c4: je 0xe996cc */
  if (zf) goto L_e996cc;
L_e996c6: /* e996c6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e996c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e996c9: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xe996ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e996cc: /* e996cc: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* e996d0: xor eax, eax */
  eax = 0;
/* e996d2: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* e996d4: mov dword ptr [edi + 0x24], eax */
  W32((uint32_t)(edi + 0x24u), eax);
/* e996d7: mov dword ptr [edi + 0x28], eax */
  W32((uint32_t)(edi + 0x28u), eax);
/* e996da: jmp 0xe99ce1 */
  goto L_e99ce1;
L_e996df: /* e996df: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* e996e3: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e996e5: je 0xe99cde */
  if (zf) goto L_e99cde;
L_e996eb: /* e996eb: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* e996ee: xor eax, eax */
  eax = 0;
/* e996f0: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* e996f4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e996f6: mov dword ptr [esp + 0x54], eax */
  W32((uint32_t)(esp + 0x54u), eax);
/* e996fa: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* e996fe: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e99702: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99703: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0xe99709u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99709: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9970b: jne 0xe9982a */
  if (!zf) goto L_e9982a;
L_e99711: /* e99711: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* e99715: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e99716: call 0xe9b090 */
  esp -= 4; W32(esp, 0xe9971bu); SPILL(); f_e9b090(); if (g_unwind) return; RELOAD();
/* e9971b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9971e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e99720: jne 0xe99730 */
  if (!zf) goto L_e99730;
L_e99722: /* e99722: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* e99725: mov eax, dword ptr [edx + 0x5c] */
  eax = R32((uint32_t)(edx + 0x5cu));
/* e99728: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9972a: je 0xe9982a */
  if (zf) goto L_e9982a;
L_e99730: /* e99730: cmp dword ptr [esp + 0x28], 5 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x28u))); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e99735: jne 0xe9979e */
  if (!zf) goto L_e9979e;
L_e99737: /* e99737: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* e9973b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9973d: mov dword ptr [esp + 0x18], 0x1a */
  W32((uint32_t)(esp + 0x18u), 0x1au);
/* e99745: je 0xe99764 */
  if (zf) goto L_e99764;
L_e99747: /* e99747: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* e9974b: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* e9974f: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* e99752: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* e99755: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99756: call 0xe9b060 */
  esp -= 4; W32(esp, 0xe9975bu); SPILL(); f_e9b060(); if (g_unwind) return; RELOAD();
/* e9975b: lea ecx, [esi*4] */
  ecx = (uint32_t)(esi*4);
/* e99762: jmp 0xe99777 */
  goto L_e99777;
L_e99764: /* e99764: imul esi, ebx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebx);
  esi = (uint32_t)r;
  }
/* e99767: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* e9976a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9976b: call 0xe9b060 */
  esp -= 4; W32(esp, 0xe99770u); SPILL(); f_e9b060(); if (g_unwind) return; RELOAD();
/* e99770: lea ecx, [ebx*4] */
  ecx = (uint32_t)(ebx*4);
L_e99777: /* e99777: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e9977a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9977d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e9977f: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* e99781: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e99782: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99783: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* e99787: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* e9978b: mov ecx, ebp */
  ecx = ebp;
/* e9978d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9978e: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0xe99791u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99791: mov dword ptr [esp + 0x3c], 1 */
  W32((uint32_t)(esp + 0x3cu), 0x1u);
/* e99799: jmp 0xe9982a */
  goto L_e9982a;
L_e9979e: /* e9979e: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* e997a1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e997a3: lea edx, [esp + 0x10] */
  edx = (uint32_t)(esp + 0x10u);
/* e997a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e997a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e997aa: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e997ac: call dword ptr [eax + 0xa4] */
  { uint32_t t = R32((uint32_t)(eax + 0xa4u)); esp -= 4; W32(esp, 0xe997b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e997b2: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* e997b6: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e997b9: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* e997bb: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* e997bd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e997be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e997bf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e997c0: mov ecx, ebp */
  ecx = ebp;
/* e997c2: call dword ptr [edx + 0x48] */
  { uint32_t t = R32((uint32_t)(edx + 0x48u)); esp -= 4; W32(esp, 0xe997c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e997c5: mov ecx, eax */
  ecx = eax;
/* e997c7: call dword ptr [0xeae2cc] */
  esp -= 4; W32(esp, 0xe997cdu); SPILL(); f_6c248c(); if (g_unwind) return; /* Engine!?ConvertDXT@UTexture@@QAE?AW4ETextureFormat@@HHHPAPAE@Z */ RELOAD();
/* e997cd: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* e997d1: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e997d4: je 0xe9981a */
  if (zf) goto L_e9981a;
L_e997d6: /* e997d6: sub eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e997d9: je 0xe997f3 */
  if (zf) goto L_e997f3;
L_e997db: /* e997db: mov eax, dword ptr [0xeae020] */
  eax = R32((uint32_t)(0xeae020u));
/* e997e0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e997e2: push 0xeb2d70 */
  { uint32_t v = 0xeb2d70u; esp -= 4; W32(esp, v); }
/* e997e7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e997e8: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe997eeu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e997ee: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e997f1: jmp 0xe9982a */
  goto L_e9982a;
L_e997f3: /* e997f3: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* e997f6: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* e997f8: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* e997fa: mov ecx, edi */
  ecx = edi;
/* e997fc: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0xe99802u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99802: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* e99804: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* e99806: and eax, 0xfffffffb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e99809: add eax, 0x1a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1au);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9980c: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* e99810: mov dword ptr [esp + 0x54], 1 */
  W32((uint32_t)(esp + 0x54u), 0x1u);
/* e99818: jmp 0xe9982a */
  goto L_e9982a;
L_e9981a: /* e9981a: mov dword ptr [esp + 0x18], 0x31545844 */
  W32((uint32_t)(esp + 0x18u), 0x31545844u);
/* e99822: mov dword ptr [esp + 0x54], 0 */
  W32((uint32_t)(esp + 0x54u), 0x0u);
L_e9982a: /* e9982a: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* e9982e: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* e99831: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e99833: lea edi, [esi + 0x2c] */
  edi = (uint32_t)(esi + 0x2cu);
/* e99836: je 0xe99873 */
  if (zf) goto L_e99873;
L_e99838: /* e99838: mov ecx, dword ptr [esi + 0x34] */
  ecx = R32((uint32_t)(esi + 0x34u));
/* e9983b: cmp ecx, dword ptr [esp + 0x48] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x48u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9983f: jne 0xe99869 */
  if (!zf) goto L_e99869;
L_e99841: /* e99841: mov edx, dword ptr [esi + 0x38] */
  edx = R32((uint32_t)(esi + 0x38u));
/* e99844: cmp edx, dword ptr [esp + 0x40] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e99848: jne 0xe99869 */
  if (!zf) goto L_e99869;
L_e9984a: /* e9984a: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* e9984e: cmp dword ptr [esi + 0x3c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e99851: jne 0xe99869 */
  if (!zf) goto L_e99869;
L_e99853: /* e99853: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* e99857: cmp dword ptr [esi + 0x40], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x40u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9985a: jne 0xe99869 */
  if (!zf) goto L_e99869;
L_e9985c: /* e9985c: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* e9985f: cmp ecx, dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e99863: je 0xe998ef */
  if (zf) goto L_e998ef;
L_e99869: /* e99869: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9986b: je 0xe99873 */
  if (zf) goto L_e99873;
L_e9986d: /* e9986d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9986f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99870: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xe99873u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e99873: /* e99873: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* e99877: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* e9987b: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* e9987f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* e99882: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e99888: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9988a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9988b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9988d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9988e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99890: mov edx, ebp */
  edx = ebp;
/* e99892: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* e99894: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e99895: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* e99899: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9989a: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* e9989e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9989f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e998a0: call dword ptr [ecx + 0x50] */
  { uint32_t t = R32((uint32_t)(ecx + 0x50u)); esp -= 4; W32(esp, 0xe998a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e998a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e998a5: jge 0xe998ef */
  if ((sf == of)) goto L_e998ef;
L_e998a7: /* e998a7: lea esi, [esp + 0x58] */
  esi = (uint32_t)(esp + 0x58u);
/* e998ab: call 0xe98730 */
  esp -= 4; W32(esp, 0xe998b0u); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e998b0: mov ecx, eax */
  ecx = eax;
/* e998b2: mov dword ptr [esp + 0xac], 6 */
  W32((uint32_t)(esp + 0xacu), 0x6u);
/* e998bd: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe998c3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e998c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e998c4: mov eax, dword ptr [0xeae020] */
  eax = R32((uint32_t)(0xeae020u));
/* e998c9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e998cb: push 0xeb2ee0 */
  { uint32_t v = 0xeb2ee0u; esp -= 4; W32(esp, v); }
/* e998d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e998d1: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe998d7u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e998d7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e998da: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* e998de: mov dword ptr [esp + 0xac], 0xffffffff */
  W32((uint32_t)(esp + 0xacu), 0xffffffffu);
/* e998e9: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe998efu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e998ef: /* e998ef: cmp ebx, ebp */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e998f1: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* e998f5: jge 0xe99c79 */
  if ((sf == of)) goto L_e99c79;
L_e998fb: /* e998fb: xor ecx, ecx */
  ecx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e998fd: mov dword ptr [esp + 0x34], ecx */
  W32((uint32_t)(esp + 0x34u), ecx);
/* e99901: jmp 0xe99910 */
  goto L_e99910;
L_e99903: /* e99903: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* e99907: jmp 0xe99910 */
  goto L_e99910;
L_e99910: /* e99910: mov ebx, dword ptr [esp + 0x48] */
  ebx = R32((uint32_t)(esp + 0x48u));
/* e99914: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* e99918: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e9991a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9991c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e9991e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99920: lea esi, [esp + 0x80] */
  esi = (uint32_t)(esp + 0x80u);
/* e99927: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e99928: sar ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  cf = ((int32_t)(int32_t)a >> (c - 1)) & 1;
  of = 0;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  ebx = r;
  }
  }
/* e9992a: sar ebp, cl */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
  }
/* e9992c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9992d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9992e: mov dword ptr [esp + 0x78], ebx */
  W32((uint32_t)(esp + 0x78u), ebx);
/* e99932: mov dword ptr [esp + 0x9c], ebp */
  W32((uint32_t)(esp + 0x9cu), ebp);
/* e99939: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0xe9993cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9993c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9993e: jge 0xe99988 */
  if ((sf == of)) goto L_e99988;
L_e99940: /* e99940: lea esi, [esp + 0x58] */
  esi = (uint32_t)(esp + 0x58u);
/* e99944: call 0xe98730 */
  esp -= 4; W32(esp, 0xe99949u); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e99949: mov ecx, eax */
  ecx = eax;
/* e9994b: mov dword ptr [esp + 0xac], 7 */
  W32((uint32_t)(esp + 0xacu), 0x7u);
/* e99956: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe9995cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e9995c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9995d: mov eax, dword ptr [0xeae020] */
  eax = R32((uint32_t)(0xeae020u));
/* e99962: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e99964: push 0xeb2eb4 */
  { uint32_t v = 0xeb2eb4u; esp -= 4; W32(esp, v); }
/* e99969: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9996a: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe99970u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e99970: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e99973: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* e99977: mov dword ptr [esp + 0xac], 0xffffffff */
  W32((uint32_t)(esp + 0xacu), 0xffffffffu);
/* e99982: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe99988u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e99988: /* e99988: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9998c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9998e: je 0xe99b73 */
  if (zf) goto L_e99b73;
L_e99994: /* e99994: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* e99998: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9999b: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* e9999f: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* e999a3: je 0xe999af */
  if (zf) goto L_e999af;
L_e999a5: /* e999a5: cmp ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e999a8: je 0xe999af */
  if (zf) goto L_e999af;
L_e999aa: /* e999aa: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e999ad: jne 0xe999e4 */
  if (!zf) goto L_e999e4;
L_e999af: /* e999af: mov eax, 4 */
  eax = 0x4u;
/* e999b4: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e999b6: jge 0xe999be */
  if ((sf == of)) goto L_e999be;
L_e999b8: /* e999b8: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* e999bc: mov ebx, eax */
  ebx = eax;
L_e999be: /* e999be: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e999c0: jl 0xe999c4 */
  if ((sf != of)) goto L_e999c4;
L_e999c2: /* e999c2: mov eax, ebp */
  eax = ebp;
L_e999c4: /* e999c4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* e999c5: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e999c8: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e999ca: mov ebp, eax */
  ebp = eax;
/* e999cc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e999cd: sar ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
/* e999d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e999d1: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* e999d5: call 0xe9b0b0 */
  esp -= 4; W32(esp, 0xe999dau); SPILL(); f_e9b0b0(); if (g_unwind) return; RELOAD();
/* e999da: mov edi, eax */
  edi = eax;
/* e999dc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e999df: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* e999e2: jmp 0xe999f0 */
  goto L_e999f0;
L_e999e4: /* e999e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e999e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e999e6: call 0xe9b0b0 */
  esp -= 4; W32(esp, 0xe999ebu); SPILL(); f_e9b0b0(); if (g_unwind) return; RELOAD();
/* e999eb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e999ee: mov edi, eax */
  edi = eax;
L_e999f0: /* e999f0: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* e999f4: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e999f7: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* e999fa: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e999fc: je 0xe99b2e */
  if (zf) goto L_e99b2e;
L_e99a02: /* e99a02: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e99a06: mov eax, edi */
  eax = edi;
/* e99a08: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* e99a09: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* e99a0b: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* e99a0d: mov edi, eax */
  edi = eax;
/* e99a0f: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* e99a13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e99a15: mov dword ptr [esp + 0x8c], edi */
  W32((uint32_t)(esp + 0x8cu), edi);
/* e99a1c: mov esi, ecx */
  esi = ecx;
/* e99a1e: je 0xe99ac7 */
  if (zf) goto L_e99ac7;
L_e99a24: /* e99a24: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99a26: jle 0xe99b2e */
  if ((zf || sf != of)) goto L_e99b2e;
L_e99a2c: /* e99a2c: mov eax, dword ptr [esp + 0x84] */
  eax = R32((uint32_t)(esp + 0x84u));
/* e99a33: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* e99a34: imul eax, dword ptr [esp + 0x4c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x4cu)));
  eax = (uint32_t)r;
  }
/* e99a39: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* e99a3c: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* e99a40: mov dword ptr [esp + 0x50], ebp */
  W32((uint32_t)(esp + 0x50u), ebp);
L_e99a44: /* e99a44: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99a46: jle 0xe99ab4 */
  if ((zf || sf != of)) goto L_e99ab4;
L_e99a48: /* e99a48: mov ebx, dword ptr [esp + 0x80] */
  ebx = R32((uint32_t)(esp + 0x80u));
/* e99a4f: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* e99a53: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
L_e99a56: /* e99a56: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e99a58: mov edx, eax */
  edx = eax;
/* e99a5a: shr edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e99a5d: movzx bp, dh */
  ebp = (ebp & 0xffff0000u) | ((uint32_t)((uint32_t)(((edx >> 8) & 0xffu))) & 0xffffu);
/* e99a61: movzx dx, dl */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)((edx & 0xffu))) & 0xffffu);
/* e99a65: mov dword ptr [esp + 0x90], eax */
  W32((uint32_t)(esp + 0x90u), eax);
/* e99a6c: shr al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 4;
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* e99a6f: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e99a72: and ebp, 0xfff0 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfff0u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* e99a78: shl ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* e99a7b: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e99a7d: and edx, 0xfff0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfff0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e99a83: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* e99a85: movzx dx, ah */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(((eax >> 8) & 0xffu))) & 0xffffu);
/* e99a89: movzx ax, al */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)((eax & 0xffu))) & 0xffffu);
/* e99a8d: shl ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* e99a90: and edx, 0xfff0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfff0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e99a96: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* e99a98: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* e99a9a: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* e99a9b: mov word ptr [esi - 2], bp */
  W16((uint32_t)(esi + 0xfffffffeu), (ebp & 0xffffu));
/* e99a9f: jne 0xe99a56 */
  if (!zf) goto L_e99a56;
L_e99aa1: /* e99aa1: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* e99aa5: mov edi, dword ptr [esp + 0x8c] */
  edi = R32((uint32_t)(esp + 0x8cu));
/* e99aac: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* e99ab0: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
L_e99ab4: /* e99ab4: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* e99ab8: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e99aba: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* e99abb: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* e99abf: jne 0xe99a44 */
  if (!zf) goto L_e99a44;
L_e99ac5: /* e99ac5: jmp 0xe99b2e */
  goto L_e99b2e;
L_e99ac7: /* e99ac7: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99ac9: jle 0xe99b2e */
  if ((zf || sf != of)) goto L_e99b2e;
L_e99acb: /* e99acb: mov dword ptr [esp + 0x50], ebp */
  W32((uint32_t)(esp + 0x50u), ebp);
/* e99acf: nop  */
L_e99ad0: /* e99ad0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99ad2: jle 0xe99b28 */
  if ((zf || sf != of)) goto L_e99b28;
L_e99ad4: /* e99ad4: mov ebp, ebx */
  ebp = ebx;
L_e99ad6: /* e99ad6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e99ad8: mov edx, eax */
  edx = eax;
/* e99ada: shr edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e99add: movzx bx, dh */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)((uint32_t)(((edx >> 8) & 0xffu))) & 0xffffu);
/* e99ae1: movzx dx, dl */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)((edx & 0xffu))) & 0xffffu);
/* e99ae5: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* e99ae9: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e99aec: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e99aef: and ebx, 0xfff0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfff0u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* e99af5: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* e99af8: and edx, 0xfff0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfff0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e99afe: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e99b00: mov dl, al */
  edx = (edx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* e99b02: shr dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = 4;
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* e99b05: movzx dx, dl */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)((edx & 0xffu))) & 0xffffu);
/* e99b09: movzx ax, ah */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(((eax >> 8) & 0xffu))) & 0xffffu);
/* e99b0d: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* e99b10: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e99b12: and eax, 0xfff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfff0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e99b17: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e99b19: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* e99b1a: mov word ptr [esi - 2], bx */
  W16((uint32_t)(esi + 0xfffffffeu), (ebx & 0xffffu));
/* e99b1e: jne 0xe99ad6 */
  if (!zf) goto L_e99ad6;
L_e99b20: /* e99b20: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* e99b24: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
L_e99b28: /* e99b28: dec dword ptr [esp + 0x50] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x50u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x50u), r);
  }
/* e99b2c: jne 0xe99ad0 */
  if (!zf) goto L_e99ad0;
L_e99b2e: /* e99b2e: cmp dword ptr [esp + 0x78], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x78u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e99b32: jne 0xe99b4c */
  if (!zf) goto L_e99b4c;
L_e99b34: /* e99b34: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e99b38: imul edi, ebp */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebp);
  edi = (uint32_t)r;
  }
/* e99b3b: mov edx, dword ptr [esp + 0x7c] */
  edx = R32((uint32_t)(esp + 0x7cu));
/* e99b3f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e99b40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e99b41: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e99b42: call 0xe81020 */
  esp -= 4; W32(esp, 0xe99b47u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e99b47: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e99b4a: jmp 0xe99bb5 */
  goto L_e99bb5;
L_e99b4c: /* e99b4c: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99b4e: mov esi, dword ptr [esp + 0x7c] */
  esi = R32((uint32_t)(esp + 0x7cu));
/* e99b52: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* e99b56: jle 0xe99bb5 */
  if ((zf || sf != of)) goto L_e99bb5;
L_e99b58: /* e99b58: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e99b59: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e99b5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e99b5b: call 0xe81020 */
  esp -= 4; W32(esp, 0xe99b60u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e99b60: mov edx, dword ptr [esp + 0x84] */
  edx = R32((uint32_t)(esp + 0x84u));
/* e99b67: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e99b6a: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e99b6c: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e99b6e: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* e99b6f: jne 0xe99b58 */
  if (!zf) goto L_e99b58;
L_e99b71: /* e99b71: jmp 0xe99bb5 */
  goto L_e99bb5;
L_e99b73: /* e99b73: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* e99b77: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* e99b7a: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* e99b7d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e99b7f: jne 0xe99c4a */
  if (!zf) goto L_e99c4a;
L_e99b85: /* e99b85: mov ebx, dword ptr [eax + 0x4130] */
  ebx = R32((uint32_t)(eax + 0x4130u));
/* e99b8b: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e99b8f: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e99b93: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* e99b97: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* e99b99: xor ecx, ecx */
  ecx = 0;
/* e99b9b: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e99b9d: setge cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* e99ba0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e99ba1: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* e99ba5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99ba6: mov eax, dword ptr [esp + 0x84] */
  eax = R32((uint32_t)(esp + 0x84u));
/* e99bad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e99bae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99baf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e99bb0: mov ecx, esi */
  ecx = esi;
/* e99bb2: call dword ptr [edi + 0x40] */
  { uint32_t t = R32((uint32_t)(edi + 0x40u)); esp -= 4; W32(esp, 0xe99bb5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e99bb5: /* e99bb5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e99bb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e99bbb: je 0xe99c4a */
  if (zf) goto L_e99c4a;
L_e99bc1: /* e99bc1: mov ecx, dword ptr [0xeae014] */
  ecx = R32((uint32_t)(0xeae014u));
/* e99bc7: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* e99bc9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e99bcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99bcc: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xe99bcfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99bcf: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* e99bd3: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* e99bd7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* e99bd8: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e99bda: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* e99be2: jge 0xe99c4a */
  if ((sf == of)) goto L_e99c4a;
L_e99be4: /* e99be4: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* e99be8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e99bea: je 0xe99c2b */
  if (zf) goto L_e99c2b;
L_e99bec: /* e99bec: mov eax, dword ptr [esp + 0x88] */
  eax = R32((uint32_t)(esp + 0x88u));
/* e99bf3: mov esi, dword ptr [esp + 0x64] */
  esi = R32((uint32_t)(esp + 0x64u));
/* e99bf7: mov ecx, dword ptr [0xeae014] */
  ecx = R32((uint32_t)(0xeae014u));
/* e99bfd: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* e99c00: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* e99c02: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e99c04: push 0xeae380 */
  { uint32_t v = 0xeae380u; esp -= 4; W32(esp, v); }
/* e99c09: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* e99c0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99c0d: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xe99c0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99c0f: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* e99c13: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* e99c17: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e99c19: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99c1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e99c1c: add esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e99c1e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e99c1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99c20: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e99c21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e99c22: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* e99c26: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0xe99c29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99c29: jmp 0xe99c4a */
  goto L_e99c4a;
L_e99c2b: /* e99c2b: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* e99c2f: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* e99c33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99c34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99c36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e99c37: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* e99c3b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e99c3d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e99c3e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e99c3f: call dword ptr [edx + 0x48] */
  { uint32_t t = R32((uint32_t)(edx + 0x48u)); esp -= 4; W32(esp, 0xe99c42u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99c42: mov ecx, eax */
  ecx = eax;
/* e99c44: call dword ptr [0xeae2cc] */
  esp -= 4; W32(esp, 0xe99c4au); SPILL(); f_6c248c(); if (g_unwind) return; /* Engine!?ConvertDXT@UTexture@@QAE?AW4ETextureFormat@@HHHPAPAE@Z */ RELOAD();
L_e99c4a: /* e99c4a: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* e99c4e: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* e99c51: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* e99c55: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e99c57: add edi, 0x2c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e99c5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e99c5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99c5c: call dword ptr [ecx + 0x44] */
  { uint32_t t = R32((uint32_t)(ecx + 0x44u)); esp -= 4; W32(esp, 0xe99c5fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99c5f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e99c63: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* e99c67: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e99c68: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e99c69: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e99c6b: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e99c6f: mov dword ptr [esp + 0x34], esi */
  W32((uint32_t)(esp + 0x34u), esi);
/* e99c73: jl 0xe99903 */
  if ((sf != of)) goto L_e99903;
L_e99c79: /* e99c79: mov edx, dword ptr [0xeae014] */
  edx = R32((uint32_t)(0xeae014u));
/* e99c7f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* e99c81: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e99c85: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e99c87: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e99c88: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0xe99c8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99c8b: jmp 0xe99ce4 */
  goto L_e99ce4;
L_e99c8d: /* e99c8d: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* e99c90: mov ecx, ebp */
  ecx = ebp;
/* e99c92: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0xe99c95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99c95: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e99c97: je 0xe99cdc */
  if (zf) goto L_e99cdc;
L_e99c99: /* e99c99: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e99c9c: mov ecx, ebp */
  ecx = ebp;
/* e99c9e: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xe99ca1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99ca1: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e99ca3: mov ecx, eax */
  ecx = eax;
/* e99ca5: call dword ptr [edx + 0x48] */
  { uint32_t t = R32((uint32_t)(edx + 0x48u)); esp -= 4; W32(esp, 0xe99ca8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99ca8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e99caa: je 0xe99cdc */
  if (zf) goto L_e99cdc;
L_e99cac: /* e99cac: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* e99caf: mov ecx, ebp */
  ecx = ebp;
/* e99cb1: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0xe99cb4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99cb4: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e99cb6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99cb8: mov ecx, eax */
  ecx = eax;
/* e99cba: call dword ptr [edx + 0x48] */
  { uint32_t t = R32((uint32_t)(edx + 0x48u)); esp -= 4; W32(esp, 0xe99cbdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99cbd: mov ecx, eax */
  ecx = eax;
/* e99cbf: call dword ptr [0xeae224] */
  esp -= 4; W32(esp, 0xe99cc5u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* e99cc5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99cc6: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e99ccb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e99ccd: push 0xeb2d18 */
  { uint32_t v = 0xeb2d18u; esp -= 4; W32(esp, v); }
/* e99cd2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e99cd3: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe99cd9u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e99cd9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e99cdc: /* e99cdc: xor eax, eax */
  eax = 0;
L_e99cde: /* e99cde: mov dword ptr [edi + 0x2c], eax */
  W32((uint32_t)(edi + 0x2cu), eax);
L_e99ce1: /* e99ce1: mov dword ptr [edi + 0x30], eax */
  W32((uint32_t)(edi + 0x30u), eax);
L_e99ce4: /* e99ce4: mov ecx, dword ptr [esp + 0xb4] */
  ecx = R32((uint32_t)(esp + 0xb4u));
/* e99ceb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e99ced: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xe99cf0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99cf0: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* e99cf4: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* e99cf8: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* e99cfb: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* e99cff: mov dword ptr [ecx + 0x34], eax */
  W32((uint32_t)(ecx + 0x34u), eax);
/* e99d02: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* e99d06: mov dword ptr [ecx + 0x3c], eax */
  W32((uint32_t)(ecx + 0x3cu), eax);
/* e99d09: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* e99d0d: mov dword ptr [ecx + 0x38], edx */
  W32((uint32_t)(ecx + 0x38u), edx);
/* e99d10: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* e99d14: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e99d15: mov dword ptr [ecx + 0x44], eax */
  W32((uint32_t)(ecx + 0x44u), eax);
/* e99d18: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* e99d1c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e99d1d: mov dword ptr [ecx + 0x40], edx */
  W32((uint32_t)(ecx + 0x40u), edx);
/* e99d20: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* e99d27: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e99d28: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e99d29: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e99d30: add esp, 0xa0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e99d36: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e99508(void) {
  LOAD_REGS();
L_e99508: /* e99508: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* e9950f: nop  */
L_e99510: /* e99510: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* e99514: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e99517: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e9951d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9951f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e99520: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* e99524: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99526: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e99527: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e99529: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9952a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9952b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9952c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9952d: call dword ptr [ecx + 0x50] */
  { uint32_t t = R32((uint32_t)(ecx + 0x50u)); esp -= 4; W32(esp, 0xe99530u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99530: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99532: jge 0xe99583 */
  if ((sf == of)) goto L_e99583;
L_e99534: /* e99534: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e99537: mov ecx, dword ptr [eax + 0x411c] */
  ecx = R32((uint32_t)(eax + 0x411cu));
/* e9953d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9953f: je 0xe99547 */
  if (zf) goto L_e99547;
L_e99541: /* e99541: inc dword ptr [esp + 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x14u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x14u), r);
  }
/* e99545: jmp 0xe99570 */
  goto L_e99570;
L_e99547: /* e99547: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e9954d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9954f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99551: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99552: call dword ptr [ecx + 0x14] */
  { uint32_t t = R32((uint32_t)(ecx + 0x14u)); esp -= 4; W32(esp, 0xe99555u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99555: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99557: jge 0xe99570 */
  if ((sf == of)) goto L_e99570;
L_e99559: /* e99559: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e9955f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e99561: push 0xeb2e00 */
  { uint32_t v = 0xeb2e00u; esp -= 4; W32(esp, v); }
/* e99566: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99567: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe9956du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e9956d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e99570: /* e99570: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e99574: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e99575: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e99578: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e9957c: jl 0xe99510 */
  if ((sf != of)) goto L_e99510;
L_e9957e: /* e9957e: jmp 0xe9969a */
  goto L_e9969a;
L_e99583: /* e99583: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* e99587: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e99589: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9958b: lea ecx, [edi + 0x24] */
  ecx = (uint32_t)(edi + 0x24u);
/* e9958e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9958f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99591: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99592: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0xe99595u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99595: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99597: jge 0xe995e2 */
  if ((sf == of)) goto L_e995e2;
L_e99599: /* e99599: lea esi, [esp + 0x58] */
  esi = (uint32_t)(esp + 0x58u);
/* e9959d: call 0xe98730 */
  esp -= 4; W32(esp, 0xe995a2u); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e995a2: mov ecx, eax */
  ecx = eax;
/* e995a4: mov dword ptr [esp + 0xac], 5 */
  W32((uint32_t)(esp + 0xacu), 0x5u);
/* e995af: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe995b5u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e995b5: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e995bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e995bc: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e995be: push 0xeb2dc8 */
  { uint32_t v = 0xeb2dc8u; esp -= 4; W32(esp, v); }
/* e995c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e995c4: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe995cau); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e995ca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e995cd: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* e995d1: mov dword ptr [esp + 0xac], 0xffffffff */
  W32((uint32_t)(esp + 0xacu), 0xffffffffu);
/* e995dc: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe995e2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e995e2: /* e995e2: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* e995e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e995e7: lea esi, [edi + 0x28] */
  esi = (uint32_t)(edi + 0x28u);
/* e995ea: je 0xe99622 */
  if (zf) goto L_e99622;
L_e995ec: /* e995ec: cmp dword ptr [edi + 0x34], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x34u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e995ef: jne 0xe99618 */
  if (!zf) goto L_e99618;
L_e995f1: /* e995f1: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* e995f5: cmp dword ptr [edi + 0x38], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x38u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e995f8: jne 0xe99618 */
  if (!zf) goto L_e99618;
L_e995fa: /* e995fa: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* e995fe: cmp dword ptr [edi + 0x3c], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x3cu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e99601: jne 0xe99618 */
  if (!zf) goto L_e99618;
L_e99603: /* e99603: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* e99607: cmp dword ptr [edi + 0x40], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x40u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9960a: je 0xe99ce4 */
  if (zf) goto L_e99ce4;
L_e99610: /* e99610: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* e99614: mov ebx, dword ptr [esp + 0x48] */
  ebx = R32((uint32_t)(esp + 0x48u));
L_e99618: /* e99618: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9961a: je 0xe99622 */
  if (zf) goto L_e99622;
L_e9961c: /* e9961c: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9961e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9961f: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xe99622u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e99622: /* e99622: xor ebp, ebp */
  ebp = 0;
/* e99624: jmp 0xe99630 */
  goto L_e99630;
L_e99626: /* e99626: mov ebx, dword ptr [esp + 0x48] */
  ebx = R32((uint32_t)(esp + 0x48u));
/* e9962a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_e99630: /* e99630: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e99633: mov ecx, dword ptr [eax + 0x46b4] */
  ecx = R32((uint32_t)(eax + 0x46b4u));
/* e99639: mov eax, dword ptr [eax + 0x4664] */
  eax = R32((uint32_t)(eax + 0x4664u));
/* e9963f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e99641: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e99642: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99644: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99645: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* e99649: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9964a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9964b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9964c: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0xe9964fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9964f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99651: jge 0xe99ce4 */
  if ((sf == of)) goto L_e99ce4;
L_e99657: /* e99657: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* e9965b: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e9965e: mov ecx, dword ptr [eax + 0x411c] */
  ecx = R32((uint32_t)(eax + 0x411cu));
/* e99664: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e99666: je 0xe9966b */
  if (zf) goto L_e9966b;
L_e99668: /* e99668: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* e99669: jmp 0xe99694 */
  goto L_e99694;
L_e9966b: /* e9966b: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e99671: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e99673: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99675: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99676: call dword ptr [ecx + 0x14] */
  { uint32_t t = R32((uint32_t)(ecx + 0x14u)); esp -= 4; W32(esp, 0xe99679u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99679: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9967b: jge 0xe99694 */
  if ((sf == of)) goto L_e99694;
L_e9967d: /* e9967d: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e99683: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e99685: push 0xeb2e00 */
  { uint32_t v = 0xeb2e00u; esp -= 4; W32(esp, v); }
/* e9968a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9968b: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe99691u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e99691: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e99694: /* e99694: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* e99695: cmp ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e99698: jl 0xe99626 */
  if ((sf != of)) goto L_e99626;
L_e9969a: /* e9969a: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* e9969d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9969f: mov dword ptr [esp + 0x74], 1 */
  W32((uint32_t)(esp + 0x74u), 0x1u);
/* e996a7: je 0xe996af */
  if (zf) goto L_e996af;
L_e996a9: /* e996a9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e996ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e996ac: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0xe996afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e996af: /* e996af: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* e996b3: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e996b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e996b7: je 0xe996bf */
  if (zf) goto L_e996bf;
L_e996b9: /* e996b9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e996bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e996bc: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0xe996bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e996bf: /* e996bf: mov eax, dword ptr [edi + 0x28] */
  eax = R32((uint32_t)(edi + 0x28u));
/* e996c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e996c4: je 0xe996cc */
  if (zf) goto L_e996cc;
L_e996c6: /* e996c6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e996c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e996c9: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xe996ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e996cc: /* e996cc: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* e996d0: xor eax, eax */
  eax = 0;
/* e996d2: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* e996d4: mov dword ptr [edi + 0x24], eax */
  W32((uint32_t)(edi + 0x24u), eax);
/* e996d7: mov dword ptr [edi + 0x28], eax */
  W32((uint32_t)(edi + 0x28u), eax);
/* e996da: jmp 0xe99ce1 */
  goto L_e99ce1;
L_e99ce1: /* e99ce1: mov dword ptr [edi + 0x30], eax */
  W32((uint32_t)(edi + 0x30u), eax);
L_e99ce4: /* e99ce4: mov ecx, dword ptr [esp + 0xb4] */
  ecx = R32((uint32_t)(esp + 0xb4u));
/* e99ceb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e99ced: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xe99cf0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99cf0: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* e99cf4: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* e99cf8: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* e99cfb: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* e99cff: mov dword ptr [ecx + 0x34], eax */
  W32((uint32_t)(ecx + 0x34u), eax);
/* e99d02: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* e99d06: mov dword ptr [ecx + 0x3c], eax */
  W32((uint32_t)(ecx + 0x3cu), eax);
/* e99d09: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* e99d0d: mov dword ptr [ecx + 0x38], edx */
  W32((uint32_t)(ecx + 0x38u), edx);
/* e99d10: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* e99d14: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e99d15: mov dword ptr [ecx + 0x44], eax */
  W32((uint32_t)(ecx + 0x44u), eax);
/* e99d18: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* e99d1c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e99d1d: mov dword ptr [ecx + 0x40], edx */
  W32((uint32_t)(ecx + 0x40u), edx);
/* e99d20: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* e99d27: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e99d28: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e99d29: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e99d30: add esp, 0xa0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e99d36: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e99909(void) {
  LOAD_REGS();
  goto L_e99909;
L_e99903: /* e99903: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* e99907: jmp 0xe99910 */
  goto L_e99910;
L_e99909: /* e99909: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e99910: /* e99910: mov ebx, dword ptr [esp + 0x48] */
  ebx = R32((uint32_t)(esp + 0x48u));
/* e99914: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* e99918: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e9991a: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9991c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e9991e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99920: lea esi, [esp + 0x80] */
  esi = (uint32_t)(esp + 0x80u);
/* e99927: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e99928: sar ebx, cl */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  cf = ((int32_t)(int32_t)a >> (c - 1)) & 1;
  of = 0;
  zf = r == 0;
  sf = (r >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  ebx = r;
  }
  }
/* e9992a: sar ebp, cl */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
  }
/* e9992c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9992d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9992e: mov dword ptr [esp + 0x78], ebx */
  W32((uint32_t)(esp + 0x78u), ebx);
/* e99932: mov dword ptr [esp + 0x9c], ebp */
  W32((uint32_t)(esp + 0x9cu), ebp);
/* e99939: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0xe9993cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9993c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9993e: jge 0xe99988 */
  if ((sf == of)) goto L_e99988;
L_e99940: /* e99940: lea esi, [esp + 0x58] */
  esi = (uint32_t)(esp + 0x58u);
/* e99944: call 0xe98730 */
  esp -= 4; W32(esp, 0xe99949u); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e99949: mov ecx, eax */
  ecx = eax;
/* e9994b: mov dword ptr [esp + 0xac], 7 */
  W32((uint32_t)(esp + 0xacu), 0x7u);
/* e99956: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe9995cu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e9995c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9995d: mov eax, dword ptr [0xeae020] */
  eax = R32((uint32_t)(0xeae020u));
/* e99962: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e99964: push 0xeb2eb4 */
  { uint32_t v = 0xeb2eb4u; esp -= 4; W32(esp, v); }
/* e99969: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9996a: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe99970u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e99970: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e99973: lea ecx, [esp + 0x58] */
  ecx = (uint32_t)(esp + 0x58u);
/* e99977: mov dword ptr [esp + 0xac], 0xffffffff */
  W32((uint32_t)(esp + 0xacu), 0xffffffffu);
/* e99982: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe99988u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e99988: /* e99988: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9998c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9998e: je 0xe99b73 */
  if (zf) goto L_e99b73;
L_e99994: /* e99994: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* e99998: cmp ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9999b: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* e9999f: mov dword ptr [esp + 0x38], ebp */
  W32((uint32_t)(esp + 0x38u), ebp);
/* e999a3: je 0xe999af */
  if (zf) goto L_e999af;
L_e999a5: /* e999a5: cmp ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e999a8: je 0xe999af */
  if (zf) goto L_e999af;
L_e999aa: /* e999aa: cmp ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e999ad: jne 0xe999e4 */
  if (!zf) goto L_e999e4;
L_e999af: /* e999af: mov eax, 4 */
  eax = 0x4u;
/* e999b4: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e999b6: jge 0xe999be */
  if ((sf == of)) goto L_e999be;
L_e999b8: /* e999b8: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* e999bc: mov ebx, eax */
  ebx = eax;
L_e999be: /* e999be: cmp ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e999c0: jl 0xe999c4 */
  if ((sf != of)) goto L_e999c4;
L_e999c2: /* e999c2: mov eax, ebp */
  eax = ebp;
L_e999c4: /* e999c4: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* e999c5: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e999c8: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e999ca: mov ebp, eax */
  ebp = eax;
/* e999cc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e999cd: sar ebp, 2 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebp = r;
  }
/* e999d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e999d1: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* e999d5: call 0xe9b0b0 */
  esp -= 4; W32(esp, 0xe999dau); SPILL(); f_e9b0b0(); if (g_unwind) return; RELOAD();
/* e999da: mov edi, eax */
  edi = eax;
/* e999dc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e999df: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* e999e2: jmp 0xe999f0 */
  goto L_e999f0;
L_e999e4: /* e999e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e999e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e999e6: call 0xe9b0b0 */
  esp -= 4; W32(esp, 0xe999ebu); SPILL(); f_e9b0b0(); if (g_unwind) return; RELOAD();
/* e999eb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e999ee: mov edi, eax */
  edi = eax;
L_e999f0: /* e999f0: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* e999f4: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* e999f7: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* e999fa: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e999fc: je 0xe99b2e */
  if (zf) goto L_e99b2e;
L_e99a02: /* e99a02: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e99a06: mov eax, edi */
  eax = edi;
/* e99a08: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* e99a09: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* e99a0b: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* e99a0d: mov edi, eax */
  edi = eax;
/* e99a0f: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* e99a13: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e99a15: mov dword ptr [esp + 0x8c], edi */
  W32((uint32_t)(esp + 0x8cu), edi);
/* e99a1c: mov esi, ecx */
  esi = ecx;
/* e99a1e: je 0xe99ac7 */
  if (zf) goto L_e99ac7;
L_e99a24: /* e99a24: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99a26: jle 0xe99b2e */
  if ((zf || sf != of)) goto L_e99b2e;
L_e99a2c: /* e99a2c: mov eax, dword ptr [esp + 0x84] */
  eax = R32((uint32_t)(esp + 0x84u));
/* e99a33: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* e99a34: imul eax, dword ptr [esp + 0x4c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x4cu)));
  eax = (uint32_t)r;
  }
/* e99a39: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* e99a3c: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* e99a40: mov dword ptr [esp + 0x50], ebp */
  W32((uint32_t)(esp + 0x50u), ebp);
L_e99a44: /* e99a44: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99a46: jle 0xe99ab4 */
  if ((zf || sf != of)) goto L_e99ab4;
L_e99a48: /* e99a48: mov ebx, dword ptr [esp + 0x80] */
  ebx = R32((uint32_t)(esp + 0x80u));
/* e99a4f: mov edi, dword ptr [esp + 0x20] */
  edi = R32((uint32_t)(esp + 0x20u));
/* e99a53: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
L_e99a56: /* e99a56: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e99a58: mov edx, eax */
  edx = eax;
/* e99a5a: shr edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e99a5d: movzx bp, dh */
  ebp = (ebp & 0xffff0000u) | ((uint32_t)((uint32_t)(((edx >> 8) & 0xffu))) & 0xffffu);
/* e99a61: movzx dx, dl */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)((edx & 0xffu))) & 0xffffu);
/* e99a65: mov dword ptr [esp + 0x90], eax */
  W32((uint32_t)(esp + 0x90u), eax);
/* e99a6c: shr al, 4 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint32_t c = 4;
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* e99a6f: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e99a72: and ebp, 0xfff0 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfff0u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* e99a78: shl ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* e99a7b: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e99a7d: and edx, 0xfff0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfff0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e99a83: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* e99a85: movzx dx, ah */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)(((eax >> 8) & 0xffu))) & 0xffffu);
/* e99a89: movzx ax, al */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)((eax & 0xffu))) & 0xffffu);
/* e99a8d: shl ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebp = r;
  }
/* e99a90: and edx, 0xfff0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfff0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e99a96: add ebp, edx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* e99a98: add ebp, eax */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* e99a9a: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* e99a9b: mov word ptr [esi - 2], bp */
  W16((uint32_t)(esi + 0xfffffffeu), (ebp & 0xffffu));
/* e99a9f: jne 0xe99a56 */
  if (!zf) goto L_e99a56;
L_e99aa1: /* e99aa1: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* e99aa5: mov edi, dword ptr [esp + 0x8c] */
  edi = R32((uint32_t)(esp + 0x8cu));
/* e99aac: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* e99ab0: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
L_e99ab4: /* e99ab4: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* e99ab8: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e99aba: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* e99abb: mov dword ptr [esp + 0x50], edx */
  W32((uint32_t)(esp + 0x50u), edx);
/* e99abf: jne 0xe99a44 */
  if (!zf) goto L_e99a44;
L_e99ac5: /* e99ac5: jmp 0xe99b2e */
  goto L_e99b2e;
L_e99ac7: /* e99ac7: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99ac9: jle 0xe99b2e */
  if ((zf || sf != of)) goto L_e99b2e;
L_e99acb: /* e99acb: mov dword ptr [esp + 0x50], ebp */
  W32((uint32_t)(esp + 0x50u), ebp);
/* e99acf: nop  */
L_e99ad0: /* e99ad0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99ad2: jle 0xe99b28 */
  if ((zf || sf != of)) goto L_e99b28;
L_e99ad4: /* e99ad4: mov ebp, ebx */
  ebp = ebx;
L_e99ad6: /* e99ad6: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e99ad8: mov edx, eax */
  edx = eax;
/* e99ada: shr edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  edx = r;
  }
/* e99add: movzx bx, dh */
  ebx = (ebx & 0xffff0000u) | ((uint32_t)((uint32_t)(((edx >> 8) & 0xffu))) & 0xffffu);
/* e99ae1: movzx dx, dl */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)((edx & 0xffu))) & 0xffffu);
/* e99ae5: mov dword ptr [esp + 0x70], eax */
  W32((uint32_t)(esp + 0x70u), eax);
/* e99ae9: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e99aec: add esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e99aef: and ebx, 0xfff0 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfff0u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* e99af5: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* e99af8: and edx, 0xfff0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfff0u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e99afe: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e99b00: mov dl, al */
  edx = (edx & 0xffffff00u) | ((uint32_t)((eax & 0xffu)) & 0xffu);
/* e99b02: shr dl, 4 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint32_t c = 4;
  uint8_t r = (uint8_t)((uint32_t)a >> c);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* e99b05: movzx dx, dl */
  edx = (edx & 0xffff0000u) | ((uint32_t)((uint32_t)((edx & 0xffu))) & 0xffffu);
/* e99b09: movzx ax, ah */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(((eax >> 8) & 0xffu))) & 0xffffu);
/* e99b0d: shl ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* e99b10: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e99b12: and eax, 0xfff0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfff0u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e99b17: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e99b19: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* e99b1a: mov word ptr [esi - 2], bx */
  W16((uint32_t)(esi + 0xfffffffeu), (ebx & 0xffffu));
/* e99b1e: jne 0xe99ad6 */
  if (!zf) goto L_e99ad6;
L_e99b20: /* e99b20: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* e99b24: mov ebx, dword ptr [esp + 0x20] */
  ebx = R32((uint32_t)(esp + 0x20u));
L_e99b28: /* e99b28: dec dword ptr [esp + 0x50] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x50u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(esp + 0x50u), r);
  }
/* e99b2c: jne 0xe99ad0 */
  if (!zf) goto L_e99ad0;
L_e99b2e: /* e99b2e: cmp dword ptr [esp + 0x78], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x78u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e99b32: jne 0xe99b4c */
  if (!zf) goto L_e99b4c;
L_e99b34: /* e99b34: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e99b38: imul edi, ebp */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebp);
  edi = (uint32_t)r;
  }
/* e99b3b: mov edx, dword ptr [esp + 0x7c] */
  edx = R32((uint32_t)(esp + 0x7cu));
/* e99b3f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e99b40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e99b41: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e99b42: call 0xe81020 */
  esp -= 4; W32(esp, 0xe99b47u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e99b47: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e99b4a: jmp 0xe99bb5 */
  goto L_e99bb5;
L_e99b4c: /* e99b4c: test ebp, ebp */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99b4e: mov esi, dword ptr [esp + 0x7c] */
  esi = R32((uint32_t)(esp + 0x7cu));
/* e99b52: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* e99b56: jle 0xe99bb5 */
  if ((zf || sf != of)) goto L_e99bb5;
L_e99b58: /* e99b58: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e99b59: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e99b5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e99b5b: call 0xe81020 */
  esp -= 4; W32(esp, 0xe99b60u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e99b60: mov edx, dword ptr [esp + 0x84] */
  edx = R32((uint32_t)(esp + 0x84u));
/* e99b67: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e99b6a: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e99b6c: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e99b6e: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ebp = r;
  }
/* e99b6f: jne 0xe99b58 */
  if (!zf) goto L_e99b58;
L_e99b71: /* e99b71: jmp 0xe99bb5 */
  goto L_e99bb5;
L_e99b73: /* e99b73: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* e99b77: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* e99b7a: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* e99b7d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e99b7f: jne 0xe99c4a */
  if (!zf) goto L_e99c4a;
L_e99b85: /* e99b85: mov ebx, dword ptr [eax + 0x4130] */
  ebx = R32((uint32_t)(eax + 0x4130u));
/* e99b8b: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e99b8f: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e99b93: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* e99b97: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* e99b99: xor ecx, ecx */
  ecx = 0;
/* e99b9b: cmp edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e99b9d: setge cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* e99ba0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e99ba1: mov ecx, dword ptr [esp + 0x7c] */
  ecx = R32((uint32_t)(esp + 0x7cu));
/* e99ba5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99ba6: mov eax, dword ptr [esp + 0x84] */
  eax = R32((uint32_t)(esp + 0x84u));
/* e99bad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e99bae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99baf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e99bb0: mov ecx, esi */
  ecx = esi;
/* e99bb2: call dword ptr [edi + 0x40] */
  { uint32_t t = R32((uint32_t)(edi + 0x40u)); esp -= 4; W32(esp, 0xe99bb5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e99bb5: /* e99bb5: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e99bb9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e99bbb: je 0xe99c4a */
  if (zf) goto L_e99c4a;
L_e99bc1: /* e99bc1: mov ecx, dword ptr [0xeae014] */
  ecx = R32((uint32_t)(0xeae014u));
/* e99bc7: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* e99bc9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e99bcb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99bcc: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xe99bcfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99bcf: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* e99bd3: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* e99bd7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* e99bd8: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e99bda: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* e99be2: jge 0xe99c4a */
  if ((sf == of)) goto L_e99c4a;
L_e99be4: /* e99be4: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* e99be8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e99bea: je 0xe99c2b */
  if (zf) goto L_e99c2b;
L_e99bec: /* e99bec: mov eax, dword ptr [esp + 0x88] */
  eax = R32((uint32_t)(esp + 0x88u));
/* e99bf3: mov esi, dword ptr [esp + 0x64] */
  esi = R32((uint32_t)(esp + 0x64u));
/* e99bf7: mov ecx, dword ptr [0xeae014] */
  ecx = R32((uint32_t)(0xeae014u));
/* e99bfd: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* e99c00: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* e99c02: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e99c04: push 0xeae380 */
  { uint32_t v = 0xeae380u; esp -= 4; W32(esp, v); }
/* e99c09: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* e99c0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99c0d: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xe99c0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99c0f: mov ebx, dword ptr [esp + 0x28] */
  ebx = R32((uint32_t)(esp + 0x28u));
/* e99c13: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* e99c17: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e99c19: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99c1b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e99c1c: add esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e99c1e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e99c1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99c20: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e99c21: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e99c22: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* e99c26: call dword ptr [edx + 0x40] */
  { uint32_t t = R32((uint32_t)(edx + 0x40u)); esp -= 4; W32(esp, 0xe99c29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99c29: jmp 0xe99c4a */
  goto L_e99c4a;
L_e99c2b: /* e99c2b: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* e99c2f: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* e99c33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99c34: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99c36: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e99c37: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* e99c3b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e99c3d: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e99c3e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e99c3f: call dword ptr [edx + 0x48] */
  { uint32_t t = R32((uint32_t)(edx + 0x48u)); esp -= 4; W32(esp, 0xe99c42u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99c42: mov ecx, eax */
  ecx = eax;
/* e99c44: call dword ptr [0xeae2cc] */
  esp -= 4; W32(esp, 0xe99c4au); SPILL(); f_6c248c(); if (g_unwind) return; /* Engine!?ConvertDXT@UTexture@@QAE?AW4ETextureFormat@@HHHPAPAE@Z */ RELOAD();
L_e99c4a: /* e99c4a: mov edi, dword ptr [esp + 0x44] */
  edi = R32((uint32_t)(esp + 0x44u));
/* e99c4e: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* e99c51: mov esi, dword ptr [esp + 0x34] */
  esi = R32((uint32_t)(esp + 0x34u));
/* e99c55: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e99c57: add edi, 0x2c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e99c5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e99c5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99c5c: call dword ptr [ecx + 0x44] */
  { uint32_t t = R32((uint32_t)(ecx + 0x44u)); esp -= 4; W32(esp, 0xe99c5fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99c5f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e99c63: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* e99c67: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e99c68: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e99c69: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e99c6b: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e99c6f: mov dword ptr [esp + 0x34], esi */
  W32((uint32_t)(esp + 0x34u), esi);
/* e99c73: jl 0xe99903 */
  if ((sf != of)) goto L_e99903;
L_e99c79: /* e99c79: mov edx, dword ptr [0xeae014] */
  edx = R32((uint32_t)(0xeae014u));
/* e99c7f: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* e99c81: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e99c85: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e99c87: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e99c88: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0xe99c8bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99c8b: jmp 0xe99ce4 */
  goto L_e99ce4;
L_e99ce4: /* e99ce4: mov ecx, dword ptr [esp + 0xb4] */
  ecx = R32((uint32_t)(esp + 0xb4u));
/* e99ceb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e99ced: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xe99cf0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99cf0: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* e99cf4: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* e99cf8: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* e99cfb: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* e99cff: mov dword ptr [ecx + 0x34], eax */
  W32((uint32_t)(ecx + 0x34u), eax);
/* e99d02: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* e99d06: mov dword ptr [ecx + 0x3c], eax */
  W32((uint32_t)(ecx + 0x3cu), eax);
/* e99d09: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* e99d0d: mov dword ptr [ecx + 0x38], edx */
  W32((uint32_t)(ecx + 0x38u), edx);
/* e99d10: mov edx, dword ptr [esp + 0x2c] */
  edx = R32((uint32_t)(esp + 0x2cu));
/* e99d14: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e99d15: mov dword ptr [ecx + 0x44], eax */
  W32((uint32_t)(ecx + 0x44u), eax);
/* e99d18: mov eax, dword ptr [esp + 0x70] */
  eax = R32((uint32_t)(esp + 0x70u));
/* e99d1c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e99d1d: mov dword ptr [ecx + 0x40], edx */
  W32((uint32_t)(ecx + 0x40u), edx);
/* e99d20: mov ecx, dword ptr [esp + 0x9c] */
  ecx = R32((uint32_t)(esp + 0x9cu));
/* e99d27: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e99d28: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e99d29: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e99d30: add esp, 0xa0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e99d36: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e99d40(void) {
  LOAD_REGS();
L_e99d40: /* e99d40: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e99d42: push 0xead179 */
  { uint32_t v = 0xead179u; esp -= 4; W32(esp, v); }
/* e99d47: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e99d4d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99d4e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e99d55: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e99d58: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e99d59: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e99d5a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e99d5b: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
/* e99d5f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e99d61: mov ebp, ecx */
  ebp = ecx;
/* e99d63: mov ecx, esi */
  ecx = esi;
/* e99d65: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0xe99d68u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99d68: mov ebx, eax */
  ebx = eax;
/* e99d6a: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99d6c: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
/* e99d70: mov dword ptr [esp + 0xc], 8 */
  W32((uint32_t)(esp + 0xcu), 0x8u);
/* e99d78: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* e99d80: jl 0xe99d8f */
  if ((sf != of)) goto L_e99d8f;
L_e99d82: /* e99d82: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e99d84: mov ecx, esi */
  ecx = esi;
/* e99d86: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xe99d89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99d89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e99d8b: je 0xe99da5 */
  if (zf) goto L_e99da5;
L_e99d8d: /* e99d8d: jmp 0xe99d95 */
  goto L_e99d95;
L_e99d8f: /* e99d8f: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  ebx = r;
  }
/* e99d91: mov dword ptr [esp + 0x10], ebx */
  W32((uint32_t)(esp + 0x10u), ebx);
L_e99d95: /* e99d95: mov dword ptr [esp + 0xc], 0x208 */
  W32((uint32_t)(esp + 0xcu), 0x208u);
/* e99d9d: mov dword ptr [esp + 0x18], 0x2000 */
  W32((uint32_t)(esp + 0x18u), 0x2000u);
L_e99da5: /* e99da5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e99da7: mov ecx, esi */
  ecx = esi;
/* e99da9: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0xe99dacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99dac: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e99dae: je 0xe99dc5 */
  if (zf) goto L_e99dc5;
L_e99db0: /* e99db0: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* e99db3: mov eax, dword ptr [ecx + 0x4114] */
  eax = R32((uint32_t)(ecx + 0x4114u));
/* e99db9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e99dbb: je 0xe99dc5 */
  if (zf) goto L_e99dc5;
L_e99dbd: /* e99dbd: or dword ptr [esp + 0xc], 0x100 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esp + 0xcu), r);
  }
L_e99dc5: /* e99dc5: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* e99dc8: mov eax, dword ptr [edx + 0x40d8] */
  eax = R32((uint32_t)(edx + 0x40d8u));
/* e99dce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e99dd0: jne 0xe99dd7 */
  if (!zf) goto L_e99dd7;
L_e99dd2: /* e99dd2: or dword ptr [esp + 0xc], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esp + 0xcu), r);
  }
L_e99dd7: /* e99dd7: mov eax, dword ptr [ebp + 0x24] */
  eax = R32((uint32_t)(ebp + 0x24u));
/* e99dda: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e99ddc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e99ddd: lea edi, [ebp + 0x24] */
  edi = (uint32_t)(ebp + 0x24u);
/* e99de0: je 0xe99df5 */
  if (zf) goto L_e99df5;
L_e99de2: /* e99de2: cmp dword ptr [ebp + 0x28], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x28u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e99de5: je 0xe99eca */
  if (zf) goto L_e99eca;
L_e99deb: /* e99deb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e99ded: je 0xe99df5 */
  if (zf) goto L_e99df5;
L_e99def: /* e99def: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e99df1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99df2: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0xe99df5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e99df5: /* e99df5: xor ebx, ebx */
  ebx = 0;
/* e99df7: mov dword ptr [esp + 0x18], ebx */
  W32((uint32_t)(esp + 0x18u), ebx);
/* e99dfb: jmp 0xe99e00 */
  goto L_e99e00;
L_e99e00: /* e99e00: cmp dword ptr [esp + 0x18], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e99e05: jne 0xe99e0c */
  if (!zf) goto L_e99e0c;
L_e99e07: /* e99e07: mov ebx, 2 */
  ebx = 0x2u;
L_e99e0c: /* e99e0c: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* e99e0f: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e99e15: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e99e19: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e99e1b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e99e1c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e99e1d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99e1f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e99e20: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* e99e24: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e99e25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99e26: call dword ptr [ecx + 0x5c] */
  { uint32_t t = R32((uint32_t)(ecx + 0x5cu)); esp -= 4; W32(esp, 0xe99e29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99e29: mov esi, eax */
  esi = eax;
/* e99e2b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99e2d: jge 0xe99ec2 */
  if ((sf == of)) goto L_e99ec2;
L_e99e33: /* e99e33: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* e99e36: mov ecx, dword ptr [eax + 0x411c] */
  ecx = R32((uint32_t)(eax + 0x411cu));
/* e99e3c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e99e3e: je 0xe99e46 */
  if (zf) goto L_e99e46;
L_e99e40: /* e99e40: inc dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x18u), r);
  }
/* e99e44: jmp 0xe99e6f */
  goto L_e99e6f;
L_e99e46: /* e99e46: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e99e4c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e99e4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99e50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99e51: call dword ptr [ecx + 0x14] */
  { uint32_t t = R32((uint32_t)(ecx + 0x14u)); esp -= 4; W32(esp, 0xe99e54u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99e54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99e56: jge 0xe99e6f */
  if ((sf == of)) goto L_e99e6f;
L_e99e58: /* e99e58: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e99e5e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e99e60: push 0xeb2e00 */
  { uint32_t v = 0xeb2e00u; esp -= 4; W32(esp, v); }
/* e99e65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99e66: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe99e6cu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e99e6c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e99e6f: /* e99e6f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* e99e73: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e99e74: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e99e77: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* e99e7b: jl 0xe99e00 */
  if ((sf != of)) goto L_e99e00;
L_e99e7d: /* e99e7d: mov eax, esi */
  eax = esi;
/* e99e7f: lea esi, [esp + 0x24] */
  esi = (uint32_t)(esp + 0x24u);
/* e99e83: call 0xe98730 */
  esp -= 4; W32(esp, 0xe99e88u); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e99e88: mov ecx, eax */
  ecx = eax;
/* e99e8a: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* e99e92: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe99e98u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e99e98: mov ecx, dword ptr [0xeae020] */
  ecx = R32((uint32_t)(0xeae020u));
/* e99e9e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e99ea0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99ea1: push 0xeb30a4 */
  { uint32_t v = 0xeb30a4u; esp -= 4; W32(esp, v); }
/* e99ea6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e99ea7: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe99eadu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e99ead: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e99eb0: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* e99eb4: mov dword ptr [esp + 0x44], 0xffffffff */
  W32((uint32_t)(esp + 0x44u), 0xffffffffu);
/* e99ebc: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe99ec2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e99ec2: /* e99ec2: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* e99ec6: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
L_e99eca: /* e99eca: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* e99ece: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e99ed0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e99ed2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e99ed3: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* e99ed7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e99ed8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e99ed9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99edb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99edc: call dword ptr [ecx + 0x2c] */
  { uint32_t t = R32((uint32_t)(ecx + 0x2cu)); esp -= 4; W32(esp, 0xe99edfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99edf: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* e99ee1: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* e99ee5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99ee7: mov ebx, 1 */
  ebx = 0x1u;
/* e99eec: mov dword ptr [esp + 0x44], ebx */
  W32((uint32_t)(esp + 0x44u), ebx);
/* e99ef0: jge 0xe99f32 */
  if ((sf == of)) goto L_e99f32;
L_e99ef2: /* e99ef2: lea esi, [esp + 0x24] */
  esi = (uint32_t)(esp + 0x24u);
/* e99ef6: call 0xe98730 */
  esp -= 4; W32(esp, 0xe99efbu); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e99efb: mov ecx, eax */
  ecx = eax;
/* e99efd: mov byte ptr [esp + 0x44], 2 */
  W8((uint32_t)(esp + 0x44u), 0x2u);
/* e99f02: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe99f08u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e99f08: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e99f0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99f0f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e99f11: push 0xeb3050 */
  { uint32_t v = 0xeb3050u; esp -= 4; W32(esp, v); }
/* e99f16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99f17: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe99f1du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e99f1d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e99f20: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* e99f24: mov byte ptr [esp + 0x44], bl */
  W8((uint32_t)(esp + 0x44u), (ebx & 0xffu));
/* e99f28: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe99f2eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e99f2e: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
L_e99f32: /* e99f32: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* e99f36: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e99f38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99f39: mov ecx, esi */
  ecx = esi;
/* e99f3b: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0xe99f3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99f3e: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* e99f40: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* e99f42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e99f43: call dword ptr [ecx + 0x30] */
  { uint32_t t = R32((uint32_t)(ecx + 0x30u)); esp -= 4; W32(esp, 0xe99f46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99f46: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99f48: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* e99f50: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e99f51: jge 0xe99f93 */
  if ((sf == of)) goto L_e99f93;
L_e99f53: /* e99f53: lea esi, [esp + 0x2c] */
  esi = (uint32_t)(esp + 0x2cu);
/* e99f57: call 0xe98730 */
  esp -= 4; W32(esp, 0xe99f5cu); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e99f5c: mov ecx, eax */
  ecx = eax;
/* e99f5e: mov byte ptr [esp + 0x40], 3 */
  W8((uint32_t)(esp + 0x40u), 0x3u);
/* e99f63: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe99f69u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e99f69: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e99f6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99f70: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e99f72: push 0xeb2ff8 */
  { uint32_t v = 0xeb2ff8u; esp -= 4; W32(esp, v); }
/* e99f77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99f78: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe99f7eu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e99f7e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e99f81: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* e99f85: mov byte ptr [esp + 0x40], bl */
  W8((uint32_t)(esp + 0x40u), (ebx & 0xffu));
/* e99f89: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe99f8fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e99f8f: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
L_e99f93: /* e99f93: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e99f95: mov ecx, esi */
  ecx = esi;
/* e99f97: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xe99f9au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99f9a: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* e99f9e: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* e99fa1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e99fa5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e99fa6: mov dword ptr [ebp + 0x28], eax */
  W32((uint32_t)(ebp + 0x28u), eax);
/* e99fa9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e99faa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e99fab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e99fb2: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e99fb5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e99dfd(void) {
  LOAD_REGS();
L_e99dfd: /* e99dfd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_e99e00: /* e99e00: cmp dword ptr [esp + 0x18], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e99e05: jne 0xe99e0c */
  if (!zf) goto L_e99e0c;
L_e99e07: /* e99e07: mov ebx, 2 */
  ebx = 0x2u;
L_e99e0c: /* e99e0c: mov edx, dword ptr [ebp + 4] */
  edx = R32((uint32_t)(ebp + 0x4u));
/* e99e0f: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e99e15: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e99e19: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e99e1b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e99e1c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e99e1d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99e1f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e99e20: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* e99e24: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e99e25: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99e26: call dword ptr [ecx + 0x5c] */
  { uint32_t t = R32((uint32_t)(ecx + 0x5cu)); esp -= 4; W32(esp, 0xe99e29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99e29: mov esi, eax */
  esi = eax;
/* e99e2b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99e2d: jge 0xe99ec2 */
  if ((sf == of)) goto L_e99ec2;
L_e99e33: /* e99e33: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* e99e36: mov ecx, dword ptr [eax + 0x411c] */
  ecx = R32((uint32_t)(eax + 0x411cu));
/* e99e3c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e99e3e: je 0xe99e46 */
  if (zf) goto L_e99e46;
L_e99e40: /* e99e40: inc dword ptr [esp + 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x18u), r);
  }
/* e99e44: jmp 0xe99e6f */
  goto L_e99e6f;
L_e99e46: /* e99e46: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e99e4c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e99e4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99e50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99e51: call dword ptr [ecx + 0x14] */
  { uint32_t t = R32((uint32_t)(ecx + 0x14u)); esp -= 4; W32(esp, 0xe99e54u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99e54: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99e56: jge 0xe99e6f */
  if ((sf == of)) goto L_e99e6f;
L_e99e58: /* e99e58: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e99e5e: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e99e60: push 0xeb2e00 */
  { uint32_t v = 0xeb2e00u; esp -= 4; W32(esp, v); }
/* e99e65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99e66: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe99e6cu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e99e6c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e99e6f: /* e99e6f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* e99e73: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e99e74: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e99e77: mov dword ptr [esp + 0x18], eax */
  W32((uint32_t)(esp + 0x18u), eax);
/* e99e7b: jl 0xe99e00 */
  if ((sf != of)) goto L_e99e00;
L_e99e7d: /* e99e7d: mov eax, esi */
  eax = esi;
/* e99e7f: lea esi, [esp + 0x24] */
  esi = (uint32_t)(esp + 0x24u);
/* e99e83: call 0xe98730 */
  esp -= 4; W32(esp, 0xe99e88u); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e99e88: mov ecx, eax */
  ecx = eax;
/* e99e8a: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* e99e92: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe99e98u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e99e98: mov ecx, dword ptr [0xeae020] */
  ecx = R32((uint32_t)(0xeae020u));
/* e99e9e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e99ea0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99ea1: push 0xeb30a4 */
  { uint32_t v = 0xeb30a4u; esp -= 4; W32(esp, v); }
/* e99ea6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e99ea7: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe99eadu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e99ead: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e99eb0: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* e99eb4: mov dword ptr [esp + 0x44], 0xffffffff */
  W32((uint32_t)(esp + 0x44u), 0xffffffffu);
/* e99ebc: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe99ec2u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e99ec2: /* e99ec2: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
/* e99ec6: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* e99eca: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* e99ece: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e99ed0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e99ed2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e99ed3: lea edx, [esp + 0x24] */
  edx = (uint32_t)(esp + 0x24u);
/* e99ed7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e99ed8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e99ed9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e99edb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99edc: call dword ptr [ecx + 0x2c] */
  { uint32_t t = R32((uint32_t)(ecx + 0x2cu)); esp -= 4; W32(esp, 0xe99edfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99edf: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* e99ee1: mov dword ptr [esp + 0x1c], ecx */
  W32((uint32_t)(esp + 0x1cu), ecx);
/* e99ee5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99ee7: mov ebx, 1 */
  ebx = 0x1u;
/* e99eec: mov dword ptr [esp + 0x44], ebx */
  W32((uint32_t)(esp + 0x44u), ebx);
/* e99ef0: jge 0xe99f32 */
  if ((sf == of)) goto L_e99f32;
L_e99ef2: /* e99ef2: lea esi, [esp + 0x24] */
  esi = (uint32_t)(esp + 0x24u);
/* e99ef6: call 0xe98730 */
  esp -= 4; W32(esp, 0xe99efbu); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e99efb: mov ecx, eax */
  ecx = eax;
/* e99efd: mov byte ptr [esp + 0x44], 2 */
  W8((uint32_t)(esp + 0x44u), 0x2u);
/* e99f02: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe99f08u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e99f08: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e99f0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99f0f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e99f11: push 0xeb3050 */
  { uint32_t v = 0xeb3050u; esp -= 4; W32(esp, v); }
/* e99f16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99f17: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe99f1du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e99f1d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e99f20: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* e99f24: mov byte ptr [esp + 0x44], bl */
  W8((uint32_t)(esp + 0x44u), (ebx & 0xffu));
/* e99f28: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe99f2eu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e99f2e: mov esi, dword ptr [esp + 0x4c] */
  esi = R32((uint32_t)(esp + 0x4cu));
L_e99f32: /* e99f32: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* e99f36: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e99f38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99f39: mov ecx, esi */
  ecx = esi;
/* e99f3b: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0xe99f3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99f3e: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* e99f40: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* e99f42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e99f43: call dword ptr [ecx + 0x30] */
  { uint32_t t = R32((uint32_t)(ecx + 0x30u)); esp -= 4; W32(esp, 0xe99f46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99f46: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e99f48: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* e99f50: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e99f51: jge 0xe99f93 */
  if ((sf == of)) goto L_e99f93;
L_e99f53: /* e99f53: lea esi, [esp + 0x2c] */
  esi = (uint32_t)(esp + 0x2cu);
/* e99f57: call 0xe98730 */
  esp -= 4; W32(esp, 0xe99f5cu); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e99f5c: mov ecx, eax */
  ecx = eax;
/* e99f5e: mov byte ptr [esp + 0x40], 3 */
  W8((uint32_t)(esp + 0x40u), 0x3u);
/* e99f63: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe99f69u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e99f69: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e99f6f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99f70: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e99f72: push 0xeb2ff8 */
  { uint32_t v = 0xeb2ff8u; esp -= 4; W32(esp, v); }
/* e99f77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99f78: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe99f7eu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e99f7e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e99f81: lea ecx, [esp + 0x2c] */
  ecx = (uint32_t)(esp + 0x2cu);
/* e99f85: mov byte ptr [esp + 0x40], bl */
  W8((uint32_t)(esp + 0x40u), (ebx & 0xffu));
/* e99f89: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe99f8fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* e99f8f: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
L_e99f93: /* e99f93: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e99f95: mov ecx, esi */
  ecx = esi;
/* e99f97: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xe99f9au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e99f9a: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* e99f9e: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* e99fa1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e99fa5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e99fa6: mov dword ptr [ebp + 0x28], eax */
  W32((uint32_t)(ebp + 0x28u), eax);
/* e99fa9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e99faa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e99fab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e99fb2: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e99fb5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e99fc0(void) {
  LOAD_REGS();
L_e99fc0: /* e99fc0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e99fc2: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e99fc8: push 0xead18c */
  { uint32_t v = 0xead18cu; esp -= 4; W32(esp, v); }
/* e99fcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99fce: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e99fd5: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e99fd8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e99fd9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e99fda: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e99fdb: mov esi, ecx */
  esi = ecx;
/* e99fdd: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* e99fe0: lea ebx, [esi + 0x24] */
  ebx = (uint32_t)(esi + 0x24u);
/* e99fe3: xor ebp, ebp */
  ebp = 0;
/* e99fe5: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e99fe7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e99fe8: je 0xe9a003 */
  if (zf) goto L_e9a003;
L_e99fea: /* e99fea: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* e99fed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99fee: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e99ff4: call 0xe983e0 */
  esp -= 4; W32(esp, 0xe99ff9u); SPILL(); f_e983e0(); if (g_unwind) return; RELOAD();
/* e99ff9: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* e99ffb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e99ffd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e99ffe: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0xe9a001u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9a001: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
L_e9a003: /* e9a003: mov edx, dword ptr [esp + 0x30] */
  edx = R32((uint32_t)(esp + 0x30u));
/* e9a007: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* e9a00a: mov dword ptr [esi + 0x28], edx */
  W32((uint32_t)(esi + 0x28u), edx);
/* e9a00d: mov dword ptr [esi + 0x2c], ebp */
  W32((uint32_t)(esi + 0x2cu), ebp);
/* e9a010: cmp dword ptr [eax + 0x40d8], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40d8u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9a016: mov dword ptr [esp + 0x10], 0x208 */
  W32((uint32_t)(esp + 0x10u), 0x208u);
/* e9a01e: jne 0xe9a028 */
  if (!zf) goto L_e9a028;
L_e9a020: /* e9a020: mov dword ptr [esp + 0x10], 0x218 */
  W32((uint32_t)(esp + 0x10u), 0x218u);
L_e9a028: /* e9a028: mov dword ptr [esp + 0x30], ebp */
  W32((uint32_t)(esp + 0x30u), ebp);
/* e9a02c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e9a030: /* e9a030: cmp dword ptr [esp + 0x30], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9a035: jne 0xe9a03c */
  if (!zf) goto L_e9a03c;
L_e9a037: /* e9a037: mov ebp, 2 */
  ebp = 0x2u;
L_e9a03c: /* e9a03c: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* e9a03f: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e9a045: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9a049: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9a04b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9a04c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9a04d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e9a04f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9a050: mov ecx, dword ptr [esi + 0x28] */
  ecx = R32((uint32_t)(esi + 0x28u));
/* e9a053: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9a054: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a055: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0xe9a058u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9a058: mov edi, eax */
  edi = eax;
/* e9a05a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9a05c: jge 0xe9a0f0 */
  if ((sf == of)) goto L_e9a0f0;
L_e9a062: /* e9a062: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* e9a065: mov ecx, dword ptr [eax + 0x411c] */
  ecx = R32((uint32_t)(eax + 0x411cu));
/* e9a06b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9a06d: je 0xe9a075 */
  if (zf) goto L_e9a075;
L_e9a06f: /* e9a06f: inc dword ptr [esp + 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x30u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x30u), r);
  }
/* e9a073: jmp 0xe9a09d */
  goto L_e9a09d;
L_e9a075: /* e9a075: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e9a07b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9a07d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e9a07f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a080: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0xe9a083u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9a083: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9a085: jge 0xe9a09d */
  if ((sf == of)) goto L_e9a09d;
L_e9a087: /* e9a087: mov eax, dword ptr [0xeae020] */
  eax = R32((uint32_t)(0xeae020u));
/* e9a08c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9a08e: push 0xeb2e00 */
  { uint32_t v = 0xeb2e00u; esp -= 4; W32(esp, v); }
/* e9a093: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9a094: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe9a09au); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e9a09a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e9a09d: /* e9a09d: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* e9a0a1: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e9a0a2: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9a0a5: mov dword ptr [esp + 0x30], eax */
  W32((uint32_t)(esp + 0x30u), eax);
/* e9a0a9: jl 0xe9a030 */
  if ((sf != of)) goto L_e9a030;
L_e9a0ab: /* e9a0ab: mov eax, edi */
  eax = edi;
/* e9a0ad: lea esi, [esp + 0x14] */
  esi = (uint32_t)(esp + 0x14u);
/* e9a0b1: call 0xe98730 */
  esp -= 4; W32(esp, 0xe9a0b6u); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e9a0b6: mov ecx, eax */
  ecx = eax;
/* e9a0b8: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* e9a0c0: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe9a0c6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e9a0c6: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e9a0cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a0cd: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e9a0cf: push 0xeb30a4 */
  { uint32_t v = 0xeb30a4u; esp -= 4; W32(esp, v); }
/* e9a0d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a0d5: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe9a0dbu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e9a0db: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9a0de: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* e9a0e2: mov dword ptr [esp + 0x28], 0xffffffff */
  W32((uint32_t)(esp + 0x28u), 0xffffffffu);
/* e9a0ea: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe9a0f0u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e9a0f0: /* e9a0f0: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* e9a0f4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9a0f5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9a0f6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9a0f7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9a0f8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e9a0ff: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9a102: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e9a110(void) {
  LOAD_REGS();
L_e9a110: /* e9a110: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e9a112: push 0xead1b0 */
  { uint32_t v = 0xead1b0u; esp -= 4; W32(esp, v); }
/* e9a117: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e9a11d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a11e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e9a125: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9a128: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9a129: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9a12a: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* e9a12e: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* e9a132: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e9a134: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9a135: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9a136: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0xe9a139u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9a139: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9a13b: jge 0xe9a13f */
  if ((sf == of)) goto L_e9a13f;
L_e9a13d: /* e9a13d: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
L_e9a13f: /* e9a13f: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* e9a143: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9a145: mov ebx, eax */
  ebx = eax;
/* e9a147: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xe9a14au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9a14a: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9a14e: mov ebp, eax */
  ebp = eax;
/* e9a150: cmp ebx, dword ptr [ecx + 0x28] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9a153: mov esi, 0x1000 */
  esi = 0x1000u;
/* e9a158: jle 0xe9a182 */
  if ((zf || sf != of)) goto L_e9a182;
L_e9a15a: /* e9a15a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9a15b: call 0xe99fc0 */
  esp -= 4; W32(esp, 0xe9a160u); SPILL(); f_e99fc0(); if (g_unwind) return; RELOAD();
/* e9a160: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9a164: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e9a167: mov edx, dword ptr [ecx + 0x30fac] */
  edx = R32((uint32_t)(ecx + 0x30facu));
/* e9a16d: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e9a172: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e9a175: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e9a178: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9a17a: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e9a17b: mov esi, 0x2000 */
  esi = 0x2000u;
/* e9a180: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_e9a182: /* e9a182: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* e9a186: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9a188: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xe9a18bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9a18b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9a18d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9a191: jl 0xe9a1b0 */
  if ((sf != of)) goto L_e9a1b0;
L_e9a193: /* e9a193: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* e9a196: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* e9a199: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9a19b: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9a19d: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9a19f: jg 0xe9a1b0 */
  if ((!zf && sf == of)) goto L_e9a1b0;
L_e9a1a1: /* e9a1a1: xor edx, edx */
  edx = 0;
/* e9a1a3: div ebp */
  { uint32_t d = ebp; if (!d) d = guest_divzero(0xe9a1a3);
  uint64_t n = ((uint64_t)edx << 32) | eax; eax = (uint32_t)(n / d); edx = (uint32_t)(n % d); }
/* e9a1a5: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* e9a1a8: cmp eax, dword ptr [edi + 0x4204] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x4204u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e9a1ae: jbe 0xe9a1df */
  if ((cf | zf)) goto L_e9a1df;
L_e9a1b0: /* e9a1b0: mov dword ptr [ecx + 0x2c], 0 */
  W32((uint32_t)(ecx + 0x2cu), 0x0u);
/* e9a1b7: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9a1bb: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e9a1be: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e9a1c4: mov eax, dword ptr [edx + 0x30fac] */
  eax = R32((uint32_t)(edx + 0x30facu));
/* e9a1ca: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e9a1cd: mov ecx, dword ptr [edx + eax*4] */
  ecx = R32((uint32_t)(edx + eax*4));
/* e9a1d0: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* e9a1d3: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e9a1d4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* e9a1d6: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9a1da: mov esi, 0x2000 */
  esi = 0x2000u;
L_e9a1df: /* e9a1df: mov eax, dword ptr [ecx + 0x2c] */
  eax = R32((uint32_t)(ecx + 0x2cu));
/* e9a1e2: lea eax, [eax + ebp - 1] */
  eax = (uint32_t)(eax + ebp + 0xffffffffu);
/* e9a1e6: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* e9a1e7: idiv ebp */
  { int32_t d = (int32_t)ebp; if (!d) d = (int32_t)guest_divzero(0xe9a1e7);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* e9a1e9: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* e9a1f1: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e9a1f4: mov edx, dword ptr [ecx + 0x30fa4] */
  edx = R32((uint32_t)(ecx + 0x30fa4u));
/* e9a1fa: mov edi, eax */
  edi = eax;
/* e9a1fc: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e9a201: imul edi, ebp */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(ebp);
  edi = (uint32_t)r;
  }
/* e9a204: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e9a207: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* e9a20a: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e9a20c: sub dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ecx), r);
  }
/* e9a20e: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e9a212: mov eax, dword ptr [edx + 0x24] */
  eax = R32((uint32_t)(edx + 0x24u));
/* e9a215: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9a217: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9a218: lea edx, [esp + 0x18] */
  edx = (uint32_t)(esp + 0x18u);
/* e9a21c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9a21d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9a21e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9a21f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a220: call dword ptr [ecx + 0x2c] */
  { uint32_t t = R32((uint32_t)(ecx + 0x2cu)); esp -= 4; W32(esp, 0xe9a223u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9a223: mov esi, eax */
  esi = eax;
/* e9a225: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9a229: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e9a22c: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* e9a230: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* e9a233: mov ecx, dword ptr [0xeae2a0] */
  ecx = R32((uint32_t)(0xeae2a0u));
/* e9a239: mov eax, dword ptr [edx + 0x30fa4] */
  eax = R32((uint32_t)(edx + 0x30fa4u));
/* e9a23f: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e9a242: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* e9a24a: lea ecx, [edx + eax*4] */
  ecx = (uint32_t)(edx + eax*4);
/* e9a24d: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* e9a24f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9a251: add eax, -0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9a254: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e9a256: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* e9a258: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9a25c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e9a25f: mov edx, dword ptr [ecx + 0x30fa8] */
  edx = R32((uint32_t)(ecx + 0x30fa8u));
/* e9a265: mov eax, dword ptr [0xeae2a0] */
  eax = R32((uint32_t)(0xeae2a0u));
/* e9a26a: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e9a26d: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e9a270: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9a272: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e9a273: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9a275: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* e9a277: jge 0xe9a2b8 */
  if ((sf == of)) goto L_e9a2b8;
L_e9a279: /* e9a279: mov eax, esi */
  eax = esi;
/* e9a27b: lea esi, [esp + 0x1c] */
  esi = (uint32_t)(esp + 0x1cu);
/* e9a27f: call 0xe98730 */
  esp -= 4; W32(esp, 0xe9a284u); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e9a284: mov ecx, eax */
  ecx = eax;
/* e9a286: mov byte ptr [esp + 0x30], 1 */
  W8((uint32_t)(esp + 0x30u), 0x1u);
/* e9a28b: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe9a291u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e9a291: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e9a297: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a298: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e9a29a: push 0xeb3050 */
  { uint32_t v = 0xeb3050u; esp -= 4; W32(esp, v); }
/* e9a29f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a2a0: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe9a2a6u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e9a2a6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9a2a9: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* e9a2ad: mov byte ptr [esp + 0x30], 0 */
  W8((uint32_t)(esp + 0x30u), 0x0u);
/* e9a2b2: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe9a2b8u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e9a2b8: /* e9a2b8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9a2bc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* e9a2bf: mov ecx, dword ptr [eax + 0x4110] */
  ecx = R32((uint32_t)(eax + 0x4110u));
/* e9a2c5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9a2c7: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* e9a2cb: je 0xe9a334 */
  if (zf) goto L_e9a334;
L_e9a2cd: /* e9a2cd: mov ecx, dword ptr [eax + 0x2fc94] */
  ecx = R32((uint32_t)(eax + 0x2fc94u));
/* e9a2d3: lea edx, [ebx + 4] */
  edx = (uint32_t)(ebx + 0x4u);
/* e9a2d6: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9a2d8: jle 0xe9a310 */
  if ((zf || sf != of)) goto L_e9a310;
L_e9a2da: /* e9a2da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e9a2dc: lea ecx, [eax + 0x2fc90] */
  ecx = (uint32_t)(eax + 0x2fc90u);
/* e9a2e2: call dword ptr [0xeae2ac] */
  esp -= 4; W32(esp, 0xe9a2e8u); SPILL(); f_6c2685(); if (g_unwind) return; /* Engine!?Empty@?$TArray@E@@QAEXH@Z */ RELOAD();
/* e9a2e8: cmp ebx, 0xffff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9a2ee: mov eax, ebx */
  eax = ebx;
/* e9a2f0: jge 0xe9a2f7 */
  if ((sf == of)) goto L_e9a2f7;
L_e9a2f2: /* e9a2f2: mov eax, 0xffff */
  eax = 0xffffu;
L_e9a2f7: /* e9a2f7: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9a2fb: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* e9a2fe: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9a300: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* e9a303: add ecx, 0x2fc90 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc90u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9a309: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9a30a: call dword ptr [0xeae018] */
  esp -= 4; W32(esp, 0xe9a310u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
L_e9a310: /* e9a310: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9a314: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e9a317: mov edx, dword ptr [ecx + 0x2fc90] */
  edx = R32((uint32_t)(ecx + 0x2fc90u));
/* e9a31d: lea eax, [edx + ebx + 1] */
  eax = (uint32_t)(edx + ebx + 0x1u);
/* e9a321: mov dword ptr [eax], 0x3221977 */
  W32((uint32_t)(eax), 0x3221977u);
/* e9a327: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9a32b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e9a32e: mov esi, dword ptr [ecx + 0x2fc90] */
  esi = R32((uint32_t)(ecx + 0x2fc90u));
L_e9a334: /* e9a334: mov ecx, dword ptr [esp + 0x38] */
  ecx = R32((uint32_t)(esp + 0x38u));
/* e9a338: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9a33a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9a33b: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0xe9a33eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9a33e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9a342: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e9a345: mov eax, dword ptr [ecx + 0x4110] */
  eax = R32((uint32_t)(ecx + 0x4110u));
/* e9a34b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9a34d: je 0xe9a35e */
  if (zf) goto L_e9a35e;
L_e9a34f: /* e9a34f: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e9a353: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9a354: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9a355: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9a356: call 0xe81020 */
  esp -= 4; W32(esp, 0xe9a35bu); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e9a35b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e9a35e: /* e9a35e: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9a362: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* e9a365: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9a367: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a368: call dword ptr [ecx + 0x30] */
  { uint32_t t = R32((uint32_t)(ecx + 0x30u)); esp -= 4; W32(esp, 0xe9a36bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9a36b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9a36d: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* e9a375: jge 0xe9a3b4 */
  if ((sf == of)) goto L_e9a3b4;
L_e9a377: /* e9a377: lea esi, [esp + 0x1c] */
  esi = (uint32_t)(esp + 0x1cu);
/* e9a37b: call 0xe98730 */
  esp -= 4; W32(esp, 0xe9a380u); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e9a380: mov ecx, eax */
  ecx = eax;
/* e9a382: mov byte ptr [esp + 0x30], 2 */
  W8((uint32_t)(esp + 0x30u), 0x2u);
/* e9a387: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe9a38du); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e9a38d: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e9a393: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a394: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e9a396: push 0xeb2ff8 */
  { uint32_t v = 0xeb2ff8u; esp -= 4; W32(esp, v); }
/* e9a39b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a39c: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe9a3a2u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e9a3a2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9a3a5: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* e9a3a9: mov byte ptr [esp + 0x30], 0 */
  W8((uint32_t)(esp + 0x30u), 0x0u);
/* e9a3ae: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe9a3b4u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e9a3b4: /* e9a3b4: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e9a3b8: lea ecx, [edi + ebx] */
  ecx = (uint32_t)(edi + ebx);
/* e9a3bb: mov dword ptr [edx + 0x2c], ecx */
  W32((uint32_t)(edx + 0x2cu), ecx);
/* e9a3be: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* e9a3c2: mov eax, edi */
  eax = edi;
/* e9a3c4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9a3c5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* e9a3c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9a3c7: idiv ebp */
  { int32_t d = (int32_t)ebp; if (!d) d = (int32_t)guest_divzero(0xe9a3c7);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* e9a3c9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9a3ca: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9a3cb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e9a3d2: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9a3d5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e9a3e0(void) {
  LOAD_REGS();
L_e9a3e0: /* e9a3e0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e9a3e2: push 0xead1dd */
  { uint32_t v = 0xead1ddu; esp -= 4; W32(esp, v); }
/* e9a3e7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e9a3ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a3ee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e9a3f5: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9a3f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9a3f9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9a3fa: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* e9a3fe: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* e9a401: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9a402: mov ebx, ecx */
  ebx = ecx;
/* e9a404: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9a405: mov ecx, ebp */
  ecx = ebp;
/* e9a407: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0xe9a40au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9a40a: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9a40d: mov dword ptr [esp + 0x40], 2 */
  W32((uint32_t)(esp + 0x40u), 0x2u);
/* e9a415: jle 0xe9a41b */
  if ((zf || sf != of)) goto L_e9a41b;
L_e9a417: /* e9a417: mov dword ptr [esp + 0x40], eax */
  W32((uint32_t)(esp + 0x40u), eax);
L_e9a41b: /* e9a41b: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* e9a41e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9a420: lea edi, [ebx + 0x24] */
  edi = (uint32_t)(ebx + 0x24u);
/* e9a423: je 0xe9a43c */
  if (zf) goto L_e9a43c;
L_e9a425: /* e9a425: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* e9a429: cmp dword ptr [ebx + 0x28], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x28u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9a42c: je 0xe9a4c1 */
  if (zf) goto L_e9a4c1;
L_e9a432: /* e9a432: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9a434: je 0xe9a43c */
  if (zf) goto L_e9a43c;
L_e9a436: /* e9a436: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9a438: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a439: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xe9a43cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e9a43c: /* e9a43c: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* e9a43f: mov ecx, ebp */
  ecx = ebp;
/* e9a441: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0xe9a444u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9a444: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* e9a447: mov esi, dword ptr [ecx + 0x40d8] */
  esi = R32((uint32_t)(ecx + 0x40d8u));
/* e9a44d: sub eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* e9a450: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* e9a452: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* e9a454: add eax, 0x66 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x66u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9a457: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9a459: mov edx, 8 */
  edx = 0x8u;
/* e9a45e: jne 0xe9a465 */
  if (!zf) goto L_e9a465;
L_e9a460: /* e9a460: mov edx, 0x18 */
  edx = 0x18u;
L_e9a465: /* e9a465: mov ecx, dword ptr [ecx + 0x46b4] */
  ecx = R32((uint32_t)(ecx + 0x46b4u));
/* e9a46b: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* e9a46d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9a46e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9a470: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a471: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9a472: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* e9a476: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9a477: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9a478: call dword ptr [esi + 0x60] */
  { uint32_t t = R32((uint32_t)(esi + 0x60u)); esp -= 4; W32(esp, 0xe9a47bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9a47b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9a47d: jge 0xe9a4c1 */
  if ((sf == of)) goto L_e9a4c1;
L_e9a47f: /* e9a47f: lea esi, [esp + 0x18] */
  esi = (uint32_t)(esp + 0x18u);
/* e9a483: call 0xe98730 */
  esp -= 4; W32(esp, 0xe9a488u); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e9a488: mov ecx, eax */
  ecx = eax;
/* e9a48a: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* e9a492: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe9a498u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e9a498: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a499: mov eax, dword ptr [0xeae020] */
  eax = R32((uint32_t)(0xeae020u));
/* e9a49e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9a4a0: push 0xeb3190 */
  { uint32_t v = 0xeb3190u; esp -= 4; W32(esp, v); }
/* e9a4a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9a4a6: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe9a4acu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e9a4ac: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9a4af: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e9a4b3: mov dword ptr [esp + 0x38], 0xffffffff */
  W32((uint32_t)(esp + 0x38u), 0xffffffffu);
/* e9a4bb: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe9a4c1u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e9a4c1: /* e9a4c1: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e9a4c4: mov ecx, ebp */
  ecx = ebp;
/* e9a4c6: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xe9a4c9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9a4c9: cmp dword ptr [ebx + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9a4cc: je 0xe9a5a5 */
  if (zf) goto L_e9a5a5;
L_e9a4d2: /* e9a4d2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e9a4d4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e9a4d6: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* e9a4da: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9a4db: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* e9a4df: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9a4e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e9a4e2: mov dword ptr [esp + 0x20], 0 */
  W32((uint32_t)(esp + 0x20u), 0x0u);
/* e9a4ea: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9a4ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a4ed: call dword ptr [ecx + 0x2c] */
  { uint32_t t = R32((uint32_t)(ecx + 0x2cu)); esp -= 4; W32(esp, 0xe9a4f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9a4f0: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* e9a4f2: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* e9a4f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9a4f8: mov dword ptr [esp + 0x38], 1 */
  W32((uint32_t)(esp + 0x38u), 0x1u);
/* e9a500: jge 0xe9a53f */
  if ((sf == of)) goto L_e9a53f;
L_e9a502: /* e9a502: lea esi, [esp + 0x18] */
  esi = (uint32_t)(esp + 0x18u);
/* e9a506: call 0xe98730 */
  esp -= 4; W32(esp, 0xe9a50bu); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e9a50b: mov ecx, eax */
  ecx = eax;
/* e9a50d: mov byte ptr [esp + 0x38], 2 */
  W8((uint32_t)(esp + 0x38u), 0x2u);
/* e9a512: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe9a518u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e9a518: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e9a51e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a51f: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e9a521: push 0xeb3140 */
  { uint32_t v = 0xeb3140u; esp -= 4; W32(esp, v); }
/* e9a526: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a527: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe9a52du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e9a52d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9a530: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e9a534: mov byte ptr [esp + 0x38], 1 */
  W8((uint32_t)(esp + 0x38u), 0x1u);
/* e9a539: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe9a53fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e9a53f: /* e9a53f: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9a543: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e9a546: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a547: mov ecx, ebp */
  ecx = ebp;
/* e9a549: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xe9a54cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9a54c: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
/* e9a54e: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* e9a550: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9a551: call dword ptr [ecx + 0x30] */
  { uint32_t t = R32((uint32_t)(ecx + 0x30u)); esp -= 4; W32(esp, 0xe9a554u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9a554: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9a556: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* e9a55e: jge 0xe9a59d */
  if ((sf == of)) goto L_e9a59d;
L_e9a560: /* e9a560: lea esi, [esp + 0x24] */
  esi = (uint32_t)(esp + 0x24u);
/* e9a564: call 0xe98730 */
  esp -= 4; W32(esp, 0xe9a569u); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e9a569: mov ecx, eax */
  ecx = eax;
/* e9a56b: mov byte ptr [esp + 0x38], 3 */
  W8((uint32_t)(esp + 0x38u), 0x3u);
/* e9a570: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe9a576u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e9a576: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e9a57c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a57d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e9a57f: push 0xeb30e8 */
  { uint32_t v = 0xeb30e8u; esp -= 4; W32(esp, v); }
/* e9a584: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a585: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe9a58bu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e9a58b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9a58e: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* e9a592: mov byte ptr [esp + 0x38], 1 */
  W8((uint32_t)(esp + 0x38u), 0x1u);
/* e9a597: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe9a59du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e9a59d: /* e9a59d: mov dword ptr [esp + 0x38], 0xffffffff */
  W32((uint32_t)(esp + 0x38u), 0xffffffffu);
L_e9a5a5: /* e9a5a5: mov edx, dword ptr [ebp] */
  edx = R32((uint32_t)(ebp));
/* e9a5a8: mov ecx, ebp */
  ecx = ebp;
/* e9a5aa: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0xe9a5adu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9a5ad: mov ecx, dword ptr [esp + 0x30] */
  ecx = R32((uint32_t)(esp + 0x30u));
/* e9a5b1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9a5b2: mov dword ptr [ebx + 0x10], eax */
  W32((uint32_t)(ebx + 0x10u), eax);
/* e9a5b5: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* e9a5b9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9a5ba: mov dword ptr [ebx + 0x28], eax */
  W32((uint32_t)(ebx + 0x28u), eax);
/* e9a5bd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9a5be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9a5bf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e9a5c6: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9a5c9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e9a5d0(void) {
  LOAD_REGS();
L_e9a5d0: /* e9a5d0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e9a5d2: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e9a5d8: push 0xead1f0 */
  { uint32_t v = 0xead1f0u; esp -= 4; W32(esp, v); }
/* e9a5dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a5de: mov eax, dword ptr [0xeae1c4] */
  eax = R32((uint32_t)(0xeae1c4u));
/* e9a5e3: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e9a5ea: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9a5ed: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9a5ee: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9a5ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9a5f0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9a5f1: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* e9a5f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9a5f6: mov esi, ecx */
  esi = ecx;
/* e9a5f8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9a5fa: push 0xeb31d0 */
  { uint32_t v = 0xeb31d0u; esp -= 4; W32(esp, v); }
/* e9a5ff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9a600: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe9a606u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e9a606: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* e9a609: lea ebx, [esi + 0x24] */
  ebx = (uint32_t)(esi + 0x24u);
/* e9a60c: xor ebp, ebp */
  ebp = 0;
/* e9a60e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9a611: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9a613: je 0xe9a61d */
  if (zf) goto L_e9a61d;
L_e9a615: /* e9a615: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9a617: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a618: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0xe9a61bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9a61b: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
L_e9a61d: /* e9a61d: mov edx, dword ptr [esi + 0x30] */
  edx = R32((uint32_t)(esi + 0x30u));
/* e9a620: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* e9a623: xor eax, eax */
  eax = 0;
/* e9a625: cmp edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9a628: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* e9a62b: mov dword ptr [esi + 0x28], edi */
  W32((uint32_t)(esi + 0x28u), edi);
/* e9a62e: mov dword ptr [esi + 0x2c], ebp */
  W32((uint32_t)(esi + 0x2cu), ebp);
/* e9a631: mov dword ptr [esp + 0x10], 0x208 */
  W32((uint32_t)(esp + 0x10u), 0x208u);
/* e9a639: add eax, 0x65 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x65u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9a63c: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* e9a640: cmp dword ptr [ecx + 0x40d8], ebp */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x40d8u))); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9a646: jne 0xe9a650 */
  if (!zf) goto L_e9a650;
L_e9a648: /* e9a648: mov dword ptr [esp + 0x10], 0x218 */
  W32((uint32_t)(esp + 0x10u), 0x218u);
L_e9a650: /* e9a650: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
L_e9a658: /* e9a658: cmp dword ptr [esp + 0x34], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x34u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9a65d: jne 0xe9a664 */
  if (!zf) goto L_e9a664;
L_e9a65f: /* e9a65f: mov ebp, 2 */
  ebp = 0x2u;
L_e9a664: /* e9a664: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* e9a667: mov eax, dword ptr [edx + 0x46b4] */
  eax = R32((uint32_t)(edx + 0x46b4u));
/* e9a66d: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* e9a671: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9a673: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9a674: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9a675: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9a676: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* e9a67a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9a67b: mov edx, dword ptr [esi + 0x28] */
  edx = R32((uint32_t)(esi + 0x28u));
/* e9a67e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9a67f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a680: call dword ptr [ecx + 0x60] */
  { uint32_t t = R32((uint32_t)(ecx + 0x60u)); esp -= 4; W32(esp, 0xe9a683u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9a683: mov edi, eax */
  edi = eax;
/* e9a685: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9a687: jge 0xe9a71c */
  if ((sf == of)) goto L_e9a71c;
L_e9a68d: /* e9a68d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* e9a690: mov ecx, dword ptr [eax + 0x411c] */
  ecx = R32((uint32_t)(eax + 0x411cu));
/* e9a696: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9a698: je 0xe9a6a0 */
  if (zf) goto L_e9a6a0;
L_e9a69a: /* e9a69a: inc dword ptr [esp + 0x34] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x34u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esp + 0x34u), r);
  }
/* e9a69e: jmp 0xe9a6c9 */
  goto L_e9a6c9;
L_e9a6a0: /* e9a6a0: mov eax, dword ptr [eax + 0x46b4] */
  eax = R32((uint32_t)(eax + 0x46b4u));
/* e9a6a6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9a6a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e9a6aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a6ab: call dword ptr [ecx + 0x14] */
  { uint32_t t = R32((uint32_t)(ecx + 0x14u)); esp -= 4; W32(esp, 0xe9a6aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9a6ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9a6b0: jge 0xe9a6c9 */
  if ((sf == of)) goto L_e9a6c9;
L_e9a6b2: /* e9a6b2: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e9a6b8: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e9a6ba: push 0xeb2e00 */
  { uint32_t v = 0xeb2e00u; esp -= 4; W32(esp, v); }
/* e9a6bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a6c0: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe9a6c6u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e9a6c6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e9a6c9: /* e9a6c9: mov eax, dword ptr [esp + 0x34] */
  eax = R32((uint32_t)(esp + 0x34u));
/* e9a6cd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e9a6ce: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9a6d1: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* e9a6d5: jl 0xe9a658 */
  if ((sf != of)) goto L_e9a658;
L_e9a6d7: /* e9a6d7: mov eax, edi */
  eax = edi;
/* e9a6d9: lea esi, [esp + 0x18] */
  esi = (uint32_t)(esp + 0x18u);
/* e9a6dd: call 0xe98730 */
  esp -= 4; W32(esp, 0xe9a6e2u); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e9a6e2: mov ecx, eax */
  ecx = eax;
/* e9a6e4: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* e9a6ec: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe9a6f2u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e9a6f2: mov ecx, dword ptr [0xeae020] */
  ecx = R32((uint32_t)(0xeae020u));
/* e9a6f8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9a6fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a6fb: push 0xeb3190 */
  { uint32_t v = 0xeb3190u; esp -= 4; W32(esp, v); }
/* e9a700: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9a701: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe9a707u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e9a707: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9a70a: lea ecx, [esp + 0x18] */
  ecx = (uint32_t)(esp + 0x18u);
/* e9a70e: mov dword ptr [esp + 0x2c], 0xffffffff */
  W32((uint32_t)(esp + 0x2cu), 0xffffffffu);
/* e9a716: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe9a71cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e9a71c: /* e9a71c: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* e9a720: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9a721: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9a722: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9a723: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9a724: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e9a72b: add esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9a72e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e9a740(void) {
  LOAD_REGS();
L_e9a740: /* e9a740: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e9a742: push 0xead214 */
  { uint32_t v = 0xead214u; esp -= 4; W32(esp, v); }
/* e9a747: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e9a74d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a74e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e9a755: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9a758: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9a759: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9a75a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9a75b: mov esi, dword ptr [esp + 0x38] */
  esi = R32((uint32_t)(esp + 0x38u));
/* e9a75f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e9a761: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9a762: mov edi, ecx */
  edi = ecx;
/* e9a764: mov ecx, esi */
  ecx = esi;
/* e9a766: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0xe9a769u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9a769: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* e9a76b: mov ecx, esi */
  ecx = esi;
/* e9a76d: mov ebp, eax */
  ebp = eax;
/* e9a76f: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0xe9a772u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9a772: mov dword ptr [esp + 0x1c], eax */
  W32((uint32_t)(esp + 0x1cu), eax);
/* e9a776: cmp ebp, dword ptr [edi + 0x28] */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x28u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9a779: mov ecx, 0x1000 */
  ecx = 0x1000u;
/* e9a77e: jle 0xe9a78d */
  if ((zf || sf != of)) goto L_e9a78d;
L_e9a780: /* e9a780: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9a781: mov ecx, edi */
  ecx = edi;
/* e9a783: call 0xe9a5d0 */
  esp -= 4; W32(esp, 0xe9a788u); SPILL(); f_e9a5d0(); if (g_unwind) return; RELOAD();
/* e9a788: mov ecx, 0x2000 */
  ecx = 0x2000u;
L_e9a78d: /* e9a78d: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* e9a790: mov edx, dword ptr [edi + 0x28] */
  edx = R32((uint32_t)(edi + 0x28u));
/* e9a793: add eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9a795: xor ebx, ebx */
  ebx = 0;
/* e9a797: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9a799: jle 0xe9a7a3 */
  if ((zf || sf != of)) goto L_e9a7a3;
L_e9a79b: /* e9a79b: mov dword ptr [edi + 0x2c], ebx */
  W32((uint32_t)(edi + 0x2cu), ebx);
/* e9a79e: mov ecx, 0x2000 */
  ecx = 0x2000u;
L_e9a7a3: /* e9a7a3: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* e9a7a6: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* e9a7a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9a7aa: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* e9a7ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9a7af: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9a7b0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9a7b1: mov dword ptr [esp + 0x20], ebx */
  W32((uint32_t)(esp + 0x20u), ebx);
/* e9a7b5: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* e9a7b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a7b8: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* e9a7bc: call dword ptr [esi + 0x2c] */
  { uint32_t t = R32((uint32_t)(esi + 0x2cu)); esp -= 4; W32(esp, 0xe9a7bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9a7bf: mov edx, dword ptr [edi + 0x24] */
  edx = R32((uint32_t)(edi + 0x24u));
/* e9a7c2: mov dword ptr [esp + 0x14], edx */
  W32((uint32_t)(esp + 0x14u), edx);
/* e9a7c6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9a7c8: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* e9a7cc: jge 0xe9a809 */
  if ((sf == of)) goto L_e9a809;
L_e9a7ce: /* e9a7ce: lea esi, [esp + 0x20] */
  esi = (uint32_t)(esp + 0x20u);
/* e9a7d2: call 0xe98730 */
  esp -= 4; W32(esp, 0xe9a7d7u); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e9a7d7: mov ecx, eax */
  ecx = eax;
/* e9a7d9: mov byte ptr [esp + 0x34], 1 */
  W8((uint32_t)(esp + 0x34u), 0x1u);
/* e9a7de: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe9a7e4u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e9a7e4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a7e5: mov eax, dword ptr [0xeae020] */
  eax = R32((uint32_t)(0xeae020u));
/* e9a7ea: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9a7ec: push 0xeb3140 */
  { uint32_t v = 0xeb3140u; esp -= 4; W32(esp, v); }
/* e9a7f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9a7f2: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe9a7f8u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e9a7f8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9a7fb: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* e9a7ff: mov byte ptr [esp + 0x34], bl */
  W8((uint32_t)(esp + 0x34u), (ebx & 0xffu));
/* e9a803: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe9a809u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e9a809: /* e9a809: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e9a80c: cmp dword ptr [eax + 0x4110], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4110u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9a812: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* e9a816: je 0xe9a871 */
  if (zf) goto L_e9a871;
L_e9a818: /* e9a818: mov ecx, dword ptr [eax + 0x2fc94] */
  ecx = R32((uint32_t)(eax + 0x2fc94u));
/* e9a81e: lea edx, [ebp + 4] */
  edx = (uint32_t)(ebp + 0x4u);
/* e9a821: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9a823: jle 0xe9a855 */
  if ((zf || sf != of)) goto L_e9a855;
L_e9a825: /* e9a825: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9a826: lea ecx, [eax + 0x2fc90] */
  ecx = (uint32_t)(eax + 0x2fc90u);
/* e9a82c: call dword ptr [0xeae2ac] */
  esp -= 4; W32(esp, 0xe9a832u); SPILL(); f_6c2685(); if (g_unwind) return; /* Engine!?Empty@?$TArray@E@@QAEXH@Z */ RELOAD();
/* e9a832: cmp ebp, 0xffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9a838: mov eax, ebp */
  eax = ebp;
/* e9a83a: jge 0xe9a841 */
  if ((sf == of)) goto L_e9a841;
L_e9a83c: /* e9a83c: mov eax, 0xffff */
  eax = 0xffffu;
L_e9a841: /* e9a841: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* e9a844: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9a846: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9a848: add ecx, 0x2fc90 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc90u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9a84e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a84f: call dword ptr [0xeae018] */
  esp -= 4; W32(esp, 0xe9a855u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
L_e9a855: /* e9a855: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* e9a858: mov edx, dword ptr [ecx + 0x2fc90] */
  edx = R32((uint32_t)(ecx + 0x2fc90u));
/* e9a85e: lea eax, [edx + ebp + 1] */
  eax = (uint32_t)(edx + ebp + 0x1u);
/* e9a862: mov dword ptr [eax], 0x3221977 */
  W32((uint32_t)(eax), 0x3221977u);
/* e9a868: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e9a86b: mov esi, dword ptr [eax + 0x2fc90] */
  esi = R32((uint32_t)(eax + 0x2fc90u));
L_e9a871: /* e9a871: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* e9a875: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9a877: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9a878: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xe9a87bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9a87b: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* e9a87e: cmp dword ptr [eax + 0x4110], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4110u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9a884: je 0xe9a895 */
  if (zf) goto L_e9a895;
L_e9a886: /* e9a886: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9a88a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9a88b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9a88c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9a88d: call 0xe81020 */
  esp -= 4; W32(esp, 0xe9a892u); SPILL(); f_e81020(); if (g_unwind) return; RELOAD();
/* e9a892: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e9a895: /* e9a895: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* e9a898: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9a89a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a89b: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0xe9a89eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9a89e: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9a8a0: mov dword ptr [esp + 0x14], ebx */
  W32((uint32_t)(esp + 0x14u), ebx);
/* e9a8a4: jge 0xe9a8e1 */
  if ((sf == of)) goto L_e9a8e1;
L_e9a8a6: /* e9a8a6: lea esi, [esp + 0x20] */
  esi = (uint32_t)(esp + 0x20u);
/* e9a8aa: call 0xe98730 */
  esp -= 4; W32(esp, 0xe9a8afu); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e9a8af: mov ecx, eax */
  ecx = eax;
/* e9a8b1: mov byte ptr [esp + 0x34], 2 */
  W8((uint32_t)(esp + 0x34u), 0x2u);
/* e9a8b6: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe9a8bcu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e9a8bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a8bd: mov eax, dword ptr [0xeae020] */
  eax = R32((uint32_t)(0xeae020u));
/* e9a8c2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9a8c4: push 0xeb30e8 */
  { uint32_t v = 0xeb30e8u; esp -= 4; W32(esp, v); }
/* e9a8c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9a8ca: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe9a8d0u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e9a8d0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9a8d3: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* e9a8d7: mov byte ptr [esp + 0x34], bl */
  W8((uint32_t)(esp + 0x34u), (ebx & 0xffu));
/* e9a8db: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe9a8e1u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e9a8e1: /* e9a8e1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* e9a8e5: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* e9a8e9: lea edx, [eax + ebp] */
  edx = (uint32_t)(eax + ebp);
/* e9a8ec: mov dword ptr [edi + 0x2c], edx */
  W32((uint32_t)(edi + 0x2cu), edx);
/* e9a8ef: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9a8f0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9a8f1: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* e9a8f2: idiv dword ptr [esp + 0x14] */
  { int32_t d = (int32_t)R32((uint32_t)(esp + 0x14u)); if (!d) d = (int32_t)guest_divzero(0xe9a8f2);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* e9a8f6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9a8f7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9a8f8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e9a8ff: add esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9a902: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e9a910(void) {
  LOAD_REGS();
L_e9a910: /* e9a910: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e9a912: push 0xead239 */
  { uint32_t v = 0xead239u; esp -= 4; W32(esp, v); }
/* e9a917: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e9a91d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a91e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e9a925: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9a928: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* e9a92c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9a92d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9a92e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9a92f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9a930: mov edi, ecx */
  edi = ecx;
/* e9a932: mov ecx, dword ptr [esp + 0x3c] */
  ecx = R32((uint32_t)(esp + 0x3cu));
/* e9a936: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* e9a939: mov ecx, dword ptr [esp + 0x40] */
  ecx = R32((uint32_t)(esp + 0x40u));
/* e9a93d: xor ebx, ebx */
  ebx = 0;
/* e9a93f: mov dword ptr [edi + 0xc], eax */
  W32((uint32_t)(edi + 0xcu), eax);
/* e9a942: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* e9a944: mov dword ptr [esp + 0x3c], ebx */
  W32((uint32_t)(esp + 0x3cu), ebx);
/* e9a948: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* e9a94c: mov dl, byte ptr [ecx] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* e9a94e: xor eax, eax */
  eax = 0;
/* e9a950: cmp dl, bl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e9a952: je 0xe9a95c */
  if (zf) goto L_e9a95c;
L_e9a954: /* e9a954: mov edx, ecx */
  edx = ecx;
L_e9a956: /* e9a956: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e9a957: cmp byte ptr [edx + eax], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edx + eax))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e9a95a: jne 0xe9a956 */
  if (!zf) goto L_e9a956;
L_e9a95c: /* e9a95c: lea edx, [esp + 0x38] */
  edx = (uint32_t)(esp + 0x38u);
/* e9a960: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9a961: lea edx, [esp + 0x40] */
  edx = (uint32_t)(esp + 0x40u);
/* e9a965: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9a966: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9a967: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9a968: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a969: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9a96a: call 0xe9e8ed */
  esp -= 4; W32(esp, 0xe9a96fu); SPILL(); f_e9e8ed(); if (g_unwind) return; RELOAD();
/* e9a96f: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9a971: mov ebp, dword ptr [0xeae0b4] */
  ebp = R32((uint32_t)(0xeae0b4u));
/* e9a977: jge 0xe9aa08 */
  if ((sf == of)) goto L_e9aa08;
L_e9a97d: /* e9a97d: cmp dword ptr [esp + 0x38], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x38u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9a981: lea esi, [esp + 0x10] */
  esi = (uint32_t)(esp + 0x10u);
/* e9a985: je 0xe9a9b8 */
  if (zf) goto L_e9a9b8;
L_e9a987: /* e9a987: call 0xe98730 */
  esp -= 4; W32(esp, 0xe9a98cu); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e9a98c: mov esi, eax */
  esi = eax;
/* e9a98e: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* e9a992: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9a994: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9a995: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a996: mov dword ptr [esp + 0x38], ebx */
  W32((uint32_t)(esp + 0x38u), ebx);
/* e9a99a: call dword ptr [ecx + 0xc] */
  { uint32_t t = R32((uint32_t)(ecx + 0xcu)); esp -= 4; W32(esp, 0xe9a99du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9a99d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a99e: call dword ptr [0xeae1f8] */
  esp -= 4; W32(esp, 0xe9a9a4u); SPILL(); f_4e161d(); if (g_unwind) return; /* Core!?appFromAnsi@@YAPBGPBDPAG@Z */ RELOAD();
/* e9a9a4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9a9a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a9a8: mov ecx, esi */
  ecx = esi;
/* e9a9aa: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe9a9b0u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e9a9b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a9b1: push 0xeb32b8 */
  { uint32_t v = 0xeb32b8u; esp -= 4; W32(esp, v); }
/* e9a9b6: jmp 0xe9a9e8 */
  goto L_e9a9e8;
L_e9a9b8: /* e9a9b8: call 0xe98730 */
  esp -= 4; W32(esp, 0xe9a9bdu); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e9a9bd: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* e9a9bf: xor edx, edx */
  edx = 0;
/* e9a9c1: cmp byte ptr [ecx], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e9a9c3: mov dword ptr [esp + 0x30], 1 */
  W32((uint32_t)(esp + 0x30u), 0x1u);
/* e9a9cb: je 0xe9a9d9 */
  if (zf) goto L_e9a9d9;
L_e9a9cd: /* e9a9cd: mov esi, ecx */
  esi = ecx;
/* e9a9cf: nop  */
L_e9a9d0: /* e9a9d0: mov cl, byte ptr [esi + edx + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + edx + 0x1u))) & 0xffu);
/* e9a9d4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* e9a9d5: cmp cl, bl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e9a9d7: jne 0xe9a9d0 */
  if (!zf) goto L_e9a9d0;
L_e9a9d9: /* e9a9d9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9a9da: mov ecx, eax */
  ecx = eax;
/* e9a9dc: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe9a9e2u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e9a9e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a9e3: push 0xeb3260 */
  { uint32_t v = 0xeb3260u; esp -= 4; W32(esp, v); }
L_e9a9e8: /* e9a9e8: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e9a9ee: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e9a9f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9a9f1: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe9a9f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9a9f3: lea ecx, [esp + 0x20] */
  ecx = (uint32_t)(esp + 0x20u);
/* e9a9f7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9a9fa: mov dword ptr [esp + 0x30], 0xffffffff */
  W32((uint32_t)(esp + 0x30u), 0xffffffffu);
/* e9aa02: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe9aa08u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e9aa08: /* e9aa08: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* e9aa0b: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* e9aa0f: mov esi, dword ptr [ecx + 0x46b4] */
  esi = R32((uint32_t)(ecx + 0x46b4u));
/* e9aa15: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9aa17: mov ebx, dword ptr [esi] */
  ebx = R32((uint32_t)(esi));
/* e9aa19: lea edx, [edi + 4] */
  edx = (uint32_t)(edi + 0x4u);
/* e9aa1c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9aa1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9aa1e: call dword ptr [ecx + 0xc] */
  { uint32_t t = R32((uint32_t)(ecx + 0xcu)); esp -= 4; W32(esp, 0xe9aa21u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9aa21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9aa22: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9aa23: call dword ptr [ebx + 0x15c] */
  { uint32_t t = R32((uint32_t)(ebx + 0x15cu)); esp -= 4; W32(esp, 0xe9aa29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9aa29: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9aa2b: jge 0xe9aa6c */
  if ((sf == of)) goto L_e9aa6c;
L_e9aa2d: /* e9aa2d: lea esi, [esp + 0x1c] */
  esi = (uint32_t)(esp + 0x1cu);
/* e9aa31: call 0xe98730 */
  esp -= 4; W32(esp, 0xe9aa36u); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e9aa36: mov ecx, eax */
  ecx = eax;
/* e9aa38: mov dword ptr [esp + 0x30], 2 */
  W32((uint32_t)(esp + 0x30u), 0x2u);
/* e9aa40: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe9aa46u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e9aa46: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e9aa4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9aa4d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e9aa4f: push 0xeb3224 */
  { uint32_t v = 0xeb3224u; esp -= 4; W32(esp, v); }
/* e9aa54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9aa55: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xe9aa57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9aa57: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9aa5a: lea ecx, [esp + 0x1c] */
  ecx = (uint32_t)(esp + 0x1cu);
/* e9aa5e: mov dword ptr [esp + 0x30], 0xffffffff */
  W32((uint32_t)(esp + 0x30u), 0xffffffffu);
/* e9aa66: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe9aa6cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e9aa6c: /* e9aa6c: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* e9aa70: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9aa72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9aa73: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0xe9aa76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9aa76: mov eax, dword ptr [edi + 0xc] */
  eax = R32((uint32_t)(edi + 0xcu));
/* e9aa79: mov edx, dword ptr [eax + 0x40b8] */
  edx = R32((uint32_t)(eax + 0x40b8u));
/* e9aa7f: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* e9aa83: mov dword ptr [edi + 0x10], edx */
  W32((uint32_t)(edi + 0x10u), edx);
/* e9aa86: mov dword ptr [eax + 0x40b8], edi */
  W32((uint32_t)(eax + 0x40b8u), edi);
/* e9aa8c: mov eax, edi */
  eax = edi;
/* e9aa8e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9aa8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9aa90: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9aa91: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9aa92: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e9aa99: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9aa9c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e9aaa0(void) {
  LOAD_REGS();
L_e9aaa0: /* e9aaa0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e9aaa4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* e9aaa8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9aaa9: mov esi, ecx */
  esi = ecx;
/* e9aaab: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e9aaaf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9aab0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9aab1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9aab2: mov ecx, esi */
  ecx = esi;
/* e9aab4: call 0xe98480 */
  esp -= 4; W32(esp, 0xe9aab9u); SPILL(); f_e98480(); if (g_unwind) return; RELOAD();
/* e9aab9: xor eax, eax */
  eax = 0;
/* e9aabb: mov dword ptr [esi], 0xeb32f8 */
  W32((uint32_t)(esi), 0xeb32f8u);
/* e9aac1: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* e9aac4: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* e9aac7: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* e9aaca: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* e9aacd: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* e9aad0: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* e9aad3: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* e9aad6: mov eax, esi */
  eax = esi;
/* e9aad8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9aad9: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e9aae0(void) {
  LOAD_REGS();
L_e9aae0: /* e9aae0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e9aae2: push 0xead256 */
  { uint32_t v = 0xead256u; esp -= 4; W32(esp, v); }
/* e9aae7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e9aaed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9aaee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e9aaf5: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9aaf8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9aaf9: mov esi, ecx */
  esi = ecx;
/* e9aafb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9aafc: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* e9ab00: mov dword ptr [esi], 0xeb32f8 */
  W32((uint32_t)(esi), 0xeb32f8u);
/* e9ab06: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* e9ab09: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9ab0b: mov edi, dword ptr [0xeae0b4] */
  edi = R32((uint32_t)(0xeae0b4u));
/* e9ab11: mov dword ptr [esp + 0x18], 1 */
  W32((uint32_t)(esp + 0x18u), 0x1u);
/* e9ab19: je 0xe9ab42 */
  if (zf) goto L_e9ab42;
L_e9ab1b: /* e9ab1b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9ab1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9ab1e: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0xe9ab21u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9ab21: xor edx, edx */
  edx = 0;
/* e9ab23: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e9ab25: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* e9ab27: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  zf = (r) == 0;
  eax = r;
  }
/* e9ab29: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* e9ab2d: je 0xe9ab42 */
  if (zf) goto L_e9ab42;
L_e9ab2f: /* e9ab2f: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e9ab35: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9ab37: push 0xeb3428 */
  { uint32_t v = 0xeb3428u; esp -= 4; W32(esp, v); }
/* e9ab3c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9ab3d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe9ab3fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9ab3f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e9ab42: /* e9ab42: mov eax, dword ptr [esi + 0x28] */
  eax = R32((uint32_t)(esi + 0x28u));
/* e9ab45: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9ab47: je 0xe9ab70 */
  if (zf) goto L_e9ab70;
L_e9ab49: /* e9ab49: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9ab4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9ab4c: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0xe9ab4fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9ab4f: xor edx, edx */
  edx = 0;
/* e9ab51: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e9ab53: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* e9ab55: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  zf = (r) == 0;
  eax = r;
  }
/* e9ab57: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* e9ab5b: je 0xe9ab70 */
  if (zf) goto L_e9ab70;
L_e9ab5d: /* e9ab5d: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e9ab63: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9ab65: push 0xeb33c8 */
  { uint32_t v = 0xeb33c8u; esp -= 4; W32(esp, v); }
/* e9ab6a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9ab6b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe9ab6du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9ab6d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e9ab70: /* e9ab70: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* e9ab73: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9ab75: je 0xe9ab9e */
  if (zf) goto L_e9ab9e;
L_e9ab77: /* e9ab77: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9ab79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9ab7a: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0xe9ab7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9ab7d: xor edx, edx */
  edx = 0;
/* e9ab7f: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e9ab81: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* e9ab83: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  zf = (r) == 0;
  eax = r;
  }
/* e9ab85: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* e9ab89: je 0xe9ab9e */
  if (zf) goto L_e9ab9e;
L_e9ab8b: /* e9ab8b: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e9ab91: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9ab93: push 0xeb3370 */
  { uint32_t v = 0xeb3370u; esp -= 4; W32(esp, v); }
/* e9ab98: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9ab99: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe9ab9bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9ab9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e9ab9e: /* e9ab9e: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* e9aba1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9aba3: je 0xe9abcc */
  if (zf) goto L_e9abcc;
L_e9aba5: /* e9aba5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9aba7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9aba8: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0xe9ababu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9abab: xor edx, edx */
  edx = 0;
/* e9abad: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e9abaf: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* e9abb1: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  zf = (r) == 0;
  eax = r;
  }
/* e9abb3: mov dword ptr [esp + 8], eax */
  W32((uint32_t)(esp + 0x8u), eax);
/* e9abb7: je 0xe9abcc */
  if (zf) goto L_e9abcc;
L_e9abb9: /* e9abb9: mov ecx, dword ptr [0xeae1c4] */
  ecx = R32((uint32_t)(0xeae1c4u));
/* e9abbf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9abc1: push 0xeb3310 */
  { uint32_t v = 0xeb3310u; esp -= 4; W32(esp, v); }
/* e9abc6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9abc7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0xe9abc9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9abc9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e9abcc: /* e9abcc: lea ecx, [esi + 0x48] */
  ecx = (uint32_t)(esi + 0x48u);
/* e9abcf: mov byte ptr [esp + 0x18], 0 */
  W8((uint32_t)(esp + 0x18u), 0x0u);
/* e9abd4: call 0xe9b2a0 */
  esp -= 4; W32(esp, 0xe9abd9u); SPILL(); f_e9b2a0(); if (g_unwind) return; RELOAD();
/* e9abd9: mov ecx, esi */
  ecx = esi;
/* e9abdb: call 0xe98500 */
  esp -= 4; W32(esp, 0xe9abe0u); SPILL(); f_e98500(); if (g_unwind) return; RELOAD();
/* e9abe0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9abe4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9abe5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9abe6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e9abed: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9abf0: ret  */
  esp += 4; SPILL(); return;
}

void f_e9ac00(void) {
  LOAD_REGS();
L_e9ac00: /* e9ac00: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e9ac02: push 0xead268 */
  { uint32_t v = 0xead268u; esp -= 4; W32(esp, v); }
/* e9ac07: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e9ac0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9ac0e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e9ac15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9ac16: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e9ac1a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9ac1b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e9ac1d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e9ac1f: mov esi, ecx */
  esi = ecx;
/* e9ac21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9ac22: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* e9ac26: call 0xe98480 */
  esp -= 4; W32(esp, 0xe9ac2bu); SPILL(); f_e98480(); if (g_unwind) return; RELOAD();
/* e9ac2b: mov dword ptr [esi + 0x24], 0 */
  W32((uint32_t)(esi + 0x24u), 0x0u);
/* e9ac32: push 0x10000 */
  { uint32_t v = 0x10000u; esp -= 4; W32(esp, v); }
/* e9ac37: mov ecx, esi */
  ecx = esi;
/* e9ac39: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* e9ac41: mov dword ptr [esi], 0xeb3484 */
  W32((uint32_t)(esi), 0xeb3484u);
/* e9ac47: call 0xe99fc0 */
  esp -= 4; W32(esp, 0xe9ac4cu); SPILL(); f_e99fc0(); if (g_unwind) return; RELOAD();
/* e9ac4c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e9ac50: mov eax, esi */
  eax = esi;
/* e9ac52: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9ac53: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e9ac5a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9ac5d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e9ac60(void) {
  LOAD_REGS();
L_e9ac60: /* e9ac60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e9ac62: push 0xead280 */
  { uint32_t v = 0xead280u; esp -= 4; W32(esp, v); }
/* e9ac67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e9ac6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9ac6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e9ac75: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9ac78: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9ac79: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9ac7a: mov ebp, ecx */
  ebp = ecx;
/* e9ac7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9ac7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9ac7e: lea edi, [ebp + 4] */
  edi = (uint32_t)(ebp + 0x4u);
/* e9ac81: mov ecx, edi */
  ecx = edi;
/* e9ac83: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* e9ac87: call 0xe95230 */
  esp -= 4; W32(esp, 0xe9ac8cu); SPILL(); f_e95230(); if (g_unwind) return; RELOAD();
/* e9ac8c: lea ebx, [ebp + 0x448] */
  ebx = (uint32_t)(ebp + 0x448u);
/* e9ac92: xor eax, eax */
  eax = 0;
/* e9ac94: mov dword ptr [ebx], eax */
  W32((uint32_t)(ebx), eax);
/* e9ac96: mov dword ptr [ebx + 4], eax */
  W32((uint32_t)(ebx + 0x4u), eax);
/* e9ac99: mov dword ptr [ebx + 8], eax */
  W32((uint32_t)(ebx + 0x8u), eax);
/* e9ac9c: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* e9aca0: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* e9aca4: mov dword ptr [ebp + 0x458], ecx */
  W32((uint32_t)(ebp + 0x458u), ecx);
/* e9acaa: mov ecx, 0x111 */
  ecx = 0x111u;
/* e9acaf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e9acb1: mov ecx, dword ptr [ebp + 0x444] */
  ecx = R32((uint32_t)(ebp + 0x444u));
/* e9acb7: xor esi, esi */
  esi = 0;
/* e9acb9: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9acbb: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* e9acbf: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* e9acc3: jle 0xe9ae27 */
  if ((zf || sf != of)) goto L_e9ae27;
L_e9acc9: /* e9acc9: lea edi, [ebp + 0x44] */
  edi = (uint32_t)(ebp + 0x44u);
/* e9accc: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
L_e9acd0: /* e9acd0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e9acd2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9acd4: mov ecx, ebx */
  ecx = ebx;
/* e9acd6: call dword ptr [0xeae018] */
  esp -= 4; W32(esp, 0xe9acdcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* e9acdc: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* e9acde: mov edx, esi */
  edx = esi;
/* e9ace0: or edx, 0x20000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* e9ace6: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* e9ace9: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* e9aceb: xor ebp, ebp */
  ebp = 0;
/* e9aced: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9acef: jle 0xe9ae07 */
  if ((zf || sf != of)) goto L_e9ae07;
L_e9acf5: /* e9acf5: lea ecx, [edi - 0x3c] */
  ecx = (uint32_t)(edi + 0xffffffc4u);
/* e9acf8: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* e9acfc: jmp 0xe9ad02 */
  goto L_e9ad02;
L_e9acfe: /* e9acfe: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
L_e9ad02: /* e9ad02: mov eax, dword ptr [ecx - 4] */
  eax = R32((uint32_t)(ecx + 0xfffffffcu));
/* e9ad05: xor esi, esi */
  esi = 0;
/* e9ad07: xor edi, edi */
  edi = 0;
/* e9ad09: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9ad0b: jne 0xe9ad14 */
  if (!zf) goto L_e9ad14;
L_e9ad0d: /* e9ad0d: mov esi, 3 */
  esi = 0x3u;
/* e9ad12: jmp 0xe9ad3c */
  goto L_e9ad3c;
L_e9ad14: /* e9ad14: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9ad17: jne 0xe9ad20 */
  if (!zf) goto L_e9ad20;
L_e9ad19: /* e9ad19: mov esi, 2 */
  esi = 0x2u;
/* e9ad1e: jmp 0xe9ad3c */
  goto L_e9ad3c;
L_e9ad20: /* e9ad20: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9ad23: jne 0xe9ad2c */
  if (!zf) goto L_e9ad2c;
L_e9ad25: /* e9ad25: mov esi, 1 */
  esi = 0x1u;
/* e9ad2a: jmp 0xe9ad3c */
  goto L_e9ad3c;
L_e9ad2c: /* e9ad2c: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9ad2f: jne 0xe9ad35 */
  if (!zf) goto L_e9ad35;
L_e9ad31: /* e9ad31: xor esi, esi */
  esi = 0;
/* e9ad33: jmp 0xe9ad3c */
  goto L_e9ad3c;
L_e9ad35: /* e9ad35: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9ad38: jne 0xe9ad3c */
  if (!zf) goto L_e9ad3c;
L_e9ad3a: /* e9ad3a: mov esi, eax */
  esi = eax;
L_e9ad3c: /* e9ad3c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e9ad3e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9ad40: jne 0xe9ad49 */
  if (!zf) goto L_e9ad49;
L_e9ad42: /* e9ad42: xor edi, edi */
  edi = 0;
/* e9ad44: jmp 0xe9adcb */
  goto L_e9adcb;
L_e9ad49: /* e9ad49: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9ad4c: jne 0xe9ad55 */
  if (!zf) goto L_e9ad55;
L_e9ad4e: /* e9ad4e: mov edi, 3 */
  edi = 0x3u;
/* e9ad53: jmp 0xe9adcb */
  goto L_e9adcb;
L_e9ad55: /* e9ad55: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9ad58: jne 0xe9ad61 */
  if (!zf) goto L_e9ad61;
L_e9ad5a: /* e9ad5a: mov edi, 5 */
  edi = 0x5u;
/* e9ad5f: jmp 0xe9adcb */
  goto L_e9adcb;
L_e9ad61: /* e9ad61: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9ad64: jne 0xe9ad6d */
  if (!zf) goto L_e9ad6d;
L_e9ad66: /* e9ad66: mov edi, 6 */
  edi = 0x6u;
/* e9ad6b: jmp 0xe9adcb */
  goto L_e9adcb;
L_e9ad6d: /* e9ad6d: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9ad70: jne 0xe9ad79 */
  if (!zf) goto L_e9ad79;
L_e9ad72: /* e9ad72: mov edi, 7 */
  edi = 0x7u;
/* e9ad77: jmp 0xe9adcb */
  goto L_e9adcb;
L_e9ad79: /* e9ad79: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9ad7c: jne 0xe9ad85 */
  if (!zf) goto L_e9ad85;
L_e9ad7e: /* e9ad7e: mov edi, 8 */
  edi = 0x8u;
/* e9ad83: jmp 0xe9adcb */
  goto L_e9adcb;
L_e9ad85: /* e9ad85: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9ad88: jne 0xe9ad91 */
  if (!zf) goto L_e9ad91;
L_e9ad8a: /* e9ad8a: mov edi, 9 */
  edi = 0x9u;
/* e9ad8f: jmp 0xe9adcb */
  goto L_e9adcb;
L_e9ad91: /* e9ad91: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9ad94: jne 0xe9ad9d */
  if (!zf) goto L_e9ad9d;
L_e9ad96: /* e9ad96: mov edi, 0xa */
  edi = 0xau;
/* e9ad9b: jmp 0xe9adcb */
  goto L_e9adcb;
L_e9ad9d: /* e9ad9d: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9ada0: jne 0xe9ada9 */
  if (!zf) goto L_e9ada9;
L_e9ada2: /* e9ada2: mov edi, 0xb */
  edi = 0xbu;
/* e9ada7: jmp 0xe9adcb */
  goto L_e9adcb;
L_e9ada9: /* e9ada9: cmp eax, 9 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9adac: jne 0xe9adb5 */
  if (!zf) goto L_e9adb5;
L_e9adae: /* e9adae: mov edi, 0xc */
  edi = 0xcu;
/* e9adb3: jmp 0xe9adcb */
  goto L_e9adcb;
L_e9adb5: /* e9adb5: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9adb8: jne 0xe9adc1 */
  if (!zf) goto L_e9adc1;
L_e9adba: /* e9adba: mov edi, 0xd */
  edi = 0xdu;
/* e9adbf: jmp 0xe9adcb */
  goto L_e9adcb;
L_e9adc1: /* e9adc1: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9adc4: jne 0xe9adcb */
  if (!zf) goto L_e9adcb;
L_e9adc6: /* e9adc6: mov edi, 0xe */
  edi = 0xeu;
L_e9adcb: /* e9adcb: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e9adcd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9adcf: mov ecx, ebx */
  ecx = ebx;
/* e9add1: call dword ptr [0xeae018] */
  esp -= 4; W32(esp, 0xe9add7u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* e9add7: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* e9add9: or esi, 0x4000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4000u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* e9addf: shl esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* e9ade2: or esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* e9ade4: mov dword ptr [edx + eax*4], esi */
  W32((uint32_t)(edx + eax*4), esi);
/* e9ade7: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* e9adeb: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* e9adef: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9adf1: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* e9adf2: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e9adf5: cmp ebp, ecx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9adf7: mov dword ptr [esp + 0x28], edx */
  W32((uint32_t)(esp + 0x28u), edx);
/* e9adfb: jl 0xe9acfe */
  if ((sf != of)) goto L_e9acfe;
L_e9ae01: /* e9ae01: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* e9ae05: mov edi, eax */
  edi = eax;
L_e9ae07: /* e9ae07: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* e9ae0b: mov eax, dword ptr [ecx + 0x444] */
  eax = R32((uint32_t)(ecx + 0x444u));
/* e9ae11: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e9ae12: add edi, 0x44 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e9ae15: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9ae17: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* e9ae1b: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* e9ae1f: jl 0xe9acd0 */
  if ((sf != of)) goto L_e9acd0;
L_e9ae25: /* e9ae25: mov ebp, ecx */
  ebp = ecx;
L_e9ae27: /* e9ae27: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e9ae29: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9ae2b: mov ecx, ebx */
  ecx = ebx;
/* e9ae2d: call dword ptr [0xeae018] */
  esp -= 4; W32(esp, 0xe9ae33u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* e9ae33: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* e9ae35: mov dword ptr [edx + eax*4], 0xffffffff */
  W32((uint32_t)(edx + eax*4), 0xffffffffu);
/* e9ae3c: mov eax, dword ptr [ebp + 0x458] */
  eax = R32((uint32_t)(ebp + 0x458u));
/* e9ae42: mov ecx, dword ptr [eax + 0x40b4] */
  ecx = R32((uint32_t)(eax + 0x40b4u));
/* e9ae48: mov dword ptr [ebp + 0x45c], ecx */
  W32((uint32_t)(ebp + 0x45cu), ecx);
/* e9ae4e: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* e9ae52: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9ae53: mov dword ptr [eax + 0x40b4], ebp */
  W32((uint32_t)(eax + 0x40b4u), ebp);
/* e9ae59: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9ae5a: mov eax, ebp */
  eax = ebp;
/* e9ae5c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9ae5d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9ae5e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e9ae65: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9ae68: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e9ae70(void) {
  LOAD_REGS();
L_e9ae70: /* e9ae70: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e9ae72: push 0xead298 */
  { uint32_t v = 0xead298u; esp -= 4; W32(esp, v); }
/* e9ae77: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e9ae7d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9ae7e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e9ae85: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9ae86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9ae87: mov esi, ecx */
  esi = ecx;
/* e9ae89: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* e9ae8d: mov ecx, dword ptr [esi + 0x458] */
  ecx = R32((uint32_t)(esi + 0x458u));
/* e9ae93: mov eax, dword ptr [ecx + 0x40b4] */
  eax = R32((uint32_t)(ecx + 0x40b4u));
/* e9ae99: xor edx, edx */
  edx = 0;
/* e9ae9b: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9ae9d: mov dword ptr [esp + 0x10], edx */
  W32((uint32_t)(esp + 0x10u), edx);
/* e9aea1: je 0xe9aed0 */
  if (zf) goto L_e9aed0;
L_e9aea3: /* e9aea3: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9aea5: je 0xe9aedc */
  if (zf) goto L_e9aedc;
L_e9aea7: /* e9aea7: jmp 0xe9aeb0 */
  goto L_e9aeb0;
L_e9aeb0: /* e9aeb0: mov ecx, dword ptr [eax + 0x45c] */
  ecx = R32((uint32_t)(eax + 0x45cu));
/* e9aeb6: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9aeb8: je 0xe9aec2 */
  if (zf) goto L_e9aec2;
L_e9aeba: /* e9aeba: mov eax, ecx */
  eax = ecx;
/* e9aebc: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9aebe: jne 0xe9aeb0 */
  if (!zf) goto L_e9aeb0;
L_e9aec0: /* e9aec0: jmp 0xe9aedc */
  goto L_e9aedc;
L_e9aec2: /* e9aec2: mov ecx, dword ptr [esi + 0x45c] */
  ecx = R32((uint32_t)(esi + 0x45cu));
/* e9aec8: mov dword ptr [eax + 0x45c], ecx */
  W32((uint32_t)(eax + 0x45cu), ecx);
/* e9aece: jmp 0xe9aedc */
  goto L_e9aedc;
L_e9aed0: /* e9aed0: mov eax, dword ptr [esi + 0x45c] */
  eax = R32((uint32_t)(esi + 0x45cu));
/* e9aed6: mov dword ptr [ecx + 0x40b4], eax */
  W32((uint32_t)(ecx + 0x40b4u), eax);
L_e9aedc: /* e9aedc: mov ecx, dword ptr [esi + 0x454] */
  ecx = R32((uint32_t)(esi + 0x454u));
/* e9aee2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9aee3: mov ecx, dword ptr [esi + 0x458] */
  ecx = R32((uint32_t)(esi + 0x458u));
/* e9aee9: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9aeef: mov dword ptr [esi + 0x45c], edx */
  W32((uint32_t)(esi + 0x45cu), edx);
/* e9aef5: call 0xe98260 */
  esp -= 4; W32(esp, 0xe9aefau); SPILL(); f_e98260(); if (g_unwind) return; RELOAD();
/* e9aefa: lea ecx, [esi + 0x448] */
  ecx = (uint32_t)(esi + 0x448u);
/* e9af00: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* e9af08: call 0xe9b2a0 */
  esp -= 4; W32(esp, 0xe9af0du); SPILL(); f_e9b2a0(); if (g_unwind) return; RELOAD();
/* e9af0d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e9af11: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9af12: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e9af19: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9af1c: ret  */
  esp += 4; SPILL(); return;
}

void f_e9aea9(void) {
  LOAD_REGS();
L_e9aea9: /* e9aea9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_e9aeb0: /* e9aeb0: mov ecx, dword ptr [eax + 0x45c] */
  ecx = R32((uint32_t)(eax + 0x45cu));
/* e9aeb6: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9aeb8: je 0xe9aec2 */
  if (zf) goto L_e9aec2;
L_e9aeba: /* e9aeba: mov eax, ecx */
  eax = ecx;
/* e9aebc: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9aebe: jne 0xe9aeb0 */
  if (!zf) goto L_e9aeb0;
L_e9aec0: /* e9aec0: jmp 0xe9aedc */
  goto L_e9aedc;
L_e9aec2: /* e9aec2: mov ecx, dword ptr [esi + 0x45c] */
  ecx = R32((uint32_t)(esi + 0x45cu));
/* e9aec8: mov dword ptr [eax + 0x45c], ecx */
  W32((uint32_t)(eax + 0x45cu), ecx);
/* e9aece: jmp 0xe9aedc */
  goto L_e9aedc;
L_e9aedc: /* e9aedc: mov ecx, dword ptr [esi + 0x454] */
  ecx = R32((uint32_t)(esi + 0x454u));
/* e9aee2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9aee3: mov ecx, dword ptr [esi + 0x458] */
  ecx = R32((uint32_t)(esi + 0x458u));
/* e9aee9: add ecx, 0x2fc9c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2fc9cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9aeef: mov dword ptr [esi + 0x45c], edx */
  W32((uint32_t)(esi + 0x45cu), edx);
/* e9aef5: call 0xe98260 */
  esp -= 4; W32(esp, 0xe9aefau); SPILL(); f_e98260(); if (g_unwind) return; RELOAD();
/* e9aefa: lea ecx, [esi + 0x448] */
  ecx = (uint32_t)(esi + 0x448u);
/* e9af00: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* e9af08: call 0xe9b2a0 */
  esp -= 4; W32(esp, 0xe9af0du); SPILL(); f_e9b2a0(); if (g_unwind) return; RELOAD();
/* e9af0d: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e9af11: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9af12: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e9af19: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9af1c: ret  */
  esp += 4; SPILL(); return;
}

void f_e9af20(void) {
  LOAD_REGS();
L_e9af20: /* e9af20: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e9af22: push 0xead2b3 */
  { uint32_t v = 0xead2b3u; esp -= 4; W32(esp, v); }
/* e9af27: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e9af2d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9af2e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e9af35: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9af38: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* e9af3c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9af3d: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* e9af41: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9af42: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9af43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9af44: mov edi, ecx */
  edi = ecx;
/* e9af46: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9af47: mov dword ptr [esp + 0x14], edi */
  W32((uint32_t)(esp + 0x14u), edi);
/* e9af4b: call 0xe9ac60 */
  esp -= 4; W32(esp, 0xe9af50u); SPILL(); f_e9ac60(); if (g_unwind) return; RELOAD();
/* e9af50: mov ecx, dword ptr [edi + 0x458] */
  ecx = R32((uint32_t)(edi + 0x458u));
/* e9af56: mov dword ptr [edi], 0 */
  W32((uint32_t)(edi), 0x0u);
/* e9af5c: mov eax, dword ptr [ecx + 0x46b4] */
  eax = R32((uint32_t)(ecx + 0x46b4u));
/* e9af62: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* e9af64: xor ecx, ecx */
  ecx = 0;
/* e9af66: cmp dword ptr [ebp + 0x40d8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x40d8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9af6c: lea esi, [edi + 0x454] */
  esi = (uint32_t)(edi + 0x454u);
/* e9af72: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e9af75: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* e9af7d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* e9af7e: and ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e9af81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9af82: mov ecx, dword ptr [edi + 0x448] */
  ecx = R32((uint32_t)(edi + 0x448u));
/* e9af88: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9af89: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e9af8b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9af8c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9af8d: call dword ptr [edx + 0x12c] */
  { uint32_t t = R32((uint32_t)(edx + 0x12cu)); esp -= 4; W32(esp, 0xe9af93u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9af93: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9af95: jge 0xe9afd6 */
  if ((sf == of)) goto L_e9afd6;
L_e9af97: /* e9af97: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* e9af99: lea esi, [esp + 0x10] */
  esi = (uint32_t)(esp + 0x10u);
/* e9af9d: call 0xe98730 */
  esp -= 4; W32(esp, 0xe9afa2u); SPILL(); f_e98730(); if (g_unwind) return; RELOAD();
/* e9afa2: mov ecx, eax */
  ecx = eax;
/* e9afa4: mov byte ptr [esp + 0x24], 1 */
  W8((uint32_t)(esp + 0x24u), 0x1u);
/* e9afa9: call dword ptr [0xeae1c8] */
  esp -= 4; W32(esp, 0xe9afafu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* e9afaf: mov edx, dword ptr [0xeae020] */
  edx = R32((uint32_t)(0xeae020u));
/* e9afb5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9afb6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* e9afb8: push 0xeb3498 */
  { uint32_t v = 0xeb3498u; esp -= 4; W32(esp, v); }
/* e9afbd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9afbe: call dword ptr [0xeae0b4] */
  esp -= 4; W32(esp, 0xe9afc4u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* e9afc4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9afc7: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* e9afcb: mov byte ptr [esp + 0x24], 0 */
  W8((uint32_t)(esp + 0x24u), 0x0u);
/* e9afd0: call dword ptr [0xeae0d0] */
  esp -= 4; W32(esp, 0xe9afd6u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_e9afd6: /* e9afd6: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e9afda: mov eax, edi */
  eax = edi;
/* e9afdc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9afdd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9afde: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9afdf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e9afe6: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9afe9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e9aff0(void) {
  LOAD_REGS();
L_e9aff0: /* e9aff0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e9aff2: push 0xead2c5 */
  { uint32_t v = 0xead2c5u; esp -= 4; W32(esp, v); }
/* e9aff7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e9affd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9affe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e9b005: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9b006: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e9b00a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9b00b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e9b00d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e9b00f: mov esi, ecx */
  esi = ecx;
/* e9b011: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9b012: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* e9b016: call 0xe98480 */
  esp -= 4; W32(esp, 0xe9b01bu); SPILL(); f_e98480(); if (g_unwind) return; RELOAD();
/* e9b01b: mov dword ptr [esi + 0x24], 0 */
  W32((uint32_t)(esi + 0x24u), 0x0u);
/* e9b022: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* e9b026: mov dword ptr [esi + 0x30], ecx */
  W32((uint32_t)(esi + 0x30u), ecx);
/* e9b029: push 0x4000 */
  { uint32_t v = 0x4000u; esp -= 4; W32(esp, v); }
/* e9b02e: mov ecx, esi */
  ecx = esi;
/* e9b030: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* e9b038: mov dword ptr [esi], 0xeb34d8 */
  W32((uint32_t)(esi), 0xeb34d8u);
/* e9b03e: call 0xe9a5d0 */
  esp -= 4; W32(esp, 0xe9b043u); SPILL(); f_e9a5d0(); if (g_unwind) return; RELOAD();
/* e9b043: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e9b047: mov eax, esi */
  eax = esi;
/* e9b049: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9b04a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e9b051: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9b054: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e9b060(void) {
  LOAD_REGS();
L_e9b060: /* e9b060: mov eax, dword ptr [0xeae014] */
  eax = R32((uint32_t)(0xeae014u));
/* e9b065: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9b067: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e9b06b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9b06d: push 0xeae380 */
  { uint32_t v = 0xeae380u; esp -= 4; W32(esp, v); }
/* e9b072: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9b073: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0xe9b075u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9b075: ret  */
  esp += 4; SPILL(); return;
}

void f_e9b090(void) {
  LOAD_REGS();
L_e9b090: /* e9b090: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e9b094: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9b097: je 0xe9b0a6 */
  if (zf) goto L_e9b0a6;
L_e9b099: /* e9b099: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9b09c: je 0xe9b0a6 */
  if (zf) goto L_e9b0a6;
L_e9b09e: /* e9b09e: cmp eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9b0a1: je 0xe9b0a6 */
  if (zf) goto L_e9b0a6;
L_e9b0a3: /* e9b0a3: xor eax, eax */
  eax = 0;
/* e9b0a5: ret  */
  esp += 4; SPILL(); return;
L_e9b0a6: /* e9b0a6: mov eax, 1 */
  eax = 0x1u;
/* e9b0ab: ret  */
  esp += 4; SPILL(); return;
}

void f_e9b0b0(void) {
  LOAD_REGS();
L_e9b0b0: /* e9b0b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e9b0b4: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e9b0b7: ja 0xe9b0ed */
  if ((!cf && !zf)) goto L_e9b0ed;
L_e9b0b9: /* e9b0b9: movzx eax, byte ptr [eax + 0xe9b108] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0xe9b108u)));
/* e9b0c0: jmp dword ptr [eax*4 + 0xe9b0f0] */
  switch (R32((uint32_t)(eax*4 + 0xe9b0f0u))) {
    case 0xe9b0c7u: goto L_e9b0c7;
    case 0xe9b0d1u: goto L_e9b0d1;
    case 0xe9b0d9u: goto L_e9b0d9;
    case 0xe9b0deu: goto L_e9b0de;
    case 0xe9b0e5u: goto L_e9b0e5;
    case 0xe9b0edu: goto L_e9b0ed;
    default: guest_badjump(0xe9b0c0, R32((uint32_t)(eax*4 + 0xe9b0f0u))); return;
  }
L_e9b0c7: /* e9b0c7: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e9b0cb: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* e9b0cc: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* e9b0ce: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* e9b0d0: ret  */
  esp += 4; SPILL(); return;
L_e9b0d1: /* e9b0d1: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e9b0d5: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* e9b0d8: ret  */
  esp += 4; SPILL(); return;
L_e9b0d9: /* e9b0d9: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e9b0dd: ret  */
  esp += 4; SPILL(); return;
L_e9b0de: /* e9b0de: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e9b0e2: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9b0e4: ret  */
  esp += 4; SPILL(); return;
L_e9b0e5: /* e9b0e5: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e9b0e9: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* e9b0ec: ret  */
  esp += 4; SPILL(); return;
L_e9b0ed: /* e9b0ed: xor eax, eax */
  eax = 0;
/* e9b0ef: ret  */
  esp += 4; SPILL(); return;
}

void f_e9b109(void) {
  LOAD_REGS();
L_e9b109: /* e9b109: add dword ptr [edx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(edx), r);
  }
/* e9b10b: add eax, dword ptr [ecx + eax] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + eax)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9b10e: add eax, 0x2000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9b113: nop  */
/* e9b114: nop  */
/* e9b115: nop  */
/* e9b116: nop  */
/* e9b117: nop  */
/* e9b118: nop  */
/* e9b119: nop  */
/* e9b11a: nop  */
/* e9b11b: nop  */
/* e9b11c: nop  */
/* e9b11d: nop  */
/* e9b11e: nop  */
/* e9b11f: nop  */
  SPILL(); f_e9b120(); return;
}

void f_e9b120(void) {
  LOAD_REGS();
L_e9b120: /* e9b120: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* e9b124: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e9b127: ja 0xe9b1d1 */
  if ((!cf && !zf)) goto L_e9b1d1;
L_e9b12d: /* e9b12d: jmp dword ptr [eax*4 + 0xe9b1d8] */
  switch (R32((uint32_t)(eax*4 + 0xe9b1d8u))) {
    case 0xe9b134u: goto L_e9b134;
    case 0xe9b154u: goto L_e9b154;
    case 0xe9b174u: goto L_e9b174;
    case 0xe9b18bu: goto L_e9b18b;
    case 0xe9b1a4u: goto L_e9b1a4;
    case 0xe9b1bbu: goto L_e9b1bb;
    case 0xe9b1d1u: goto L_e9b1d1;
    default: guest_badjump(0xe9b12d, R32((uint32_t)(eax*4 + 0xe9b1d8u))); return;
  }
L_e9b134: /* e9b134: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e9b138: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* e9b13c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* e9b13d: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e9b140: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9b142: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e9b146: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* e9b149: imul eax, dword ptr [esp + 0xc] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0xcu)));
  eax = (uint32_t)r;
  }
/* e9b14e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9b150: lea eax, [ecx + edx*2] */
  eax = (uint32_t)(ecx + edx*2);
/* e9b153: ret  */
  esp += 4; SPILL(); return;
L_e9b154: /* e9b154: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* e9b158: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* e9b15c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* e9b15d: and edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* e9b160: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9b162: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e9b166: sar eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* e9b169: imul eax, dword ptr [esp + 0xc] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0xcu)));
  eax = (uint32_t)r;
  }
/* e9b16e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9b170: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e9b173: ret  */
  esp += 4; SPILL(); return;
L_e9b174: /* e9b174: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e9b178: imul eax, dword ptr [esp + 0x14] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x14u)));
  eax = (uint32_t)r;
  }
/* e9b17d: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* e9b181: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e9b185: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9b187: lea eax, [ecx + edx*4] */
  eax = (uint32_t)(ecx + edx*4);
/* e9b18a: ret  */
  esp += 4; SPILL(); return;
L_e9b18b: /* e9b18b: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e9b18f: imul ecx, dword ptr [esp + 0x14] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x14u)));
  ecx = (uint32_t)r;
  }
/* e9b194: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* e9b198: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* e9b19c: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* e9b19f: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e9b1a1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9b1a3: ret  */
  esp += 4; SPILL(); return;
L_e9b1a4: /* e9b1a4: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e9b1a8: imul eax, dword ptr [esp + 0x14] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x14u)));
  eax = (uint32_t)r;
  }
/* e9b1ad: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* e9b1b1: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* e9b1b5: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* e9b1b7: lea eax, [ecx + edx*2] */
  eax = (uint32_t)(ecx + edx*2);
/* e9b1ba: ret  */
  esp += 4; SPILL(); return;
L_e9b1bb: /* e9b1bb: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e9b1bf: imul eax, dword ptr [esp + 0x14] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x14u)));
  eax = (uint32_t)r;
  }
/* e9b1c4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* e9b1c8: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9b1cc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9b1ce: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9b1d0: ret  */
  esp += 4; SPILL(); return;
L_e9b1d1: /* e9b1d1: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e9b1d5: ret  */
  esp += 4; SPILL(); return;
}

void f_e9b210(void) {
  LOAD_REGS();
L_e9b210: /* e9b210: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9b211: mov esi, ecx */
  esi = ecx;
/* e9b213: call 0xe98500 */
  esp -= 4; W32(esp, 0xe9b218u); SPILL(); f_e98500(); if (g_unwind) return; RELOAD();
/* e9b218: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9b21d: je 0xe9b22c */
  if (zf) goto L_e9b22c;
L_e9b21f: /* e9b21f: mov eax, dword ptr [0xeae014] */
  eax = R32((uint32_t)(0xeae014u));
/* e9b224: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9b226: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9b228: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9b229: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xe9b22cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e9b22c: /* e9b22c: mov eax, esi */
  eax = esi;
/* e9b22e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9b22f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e9b240(void) {
  LOAD_REGS();
L_e9b240: /* e9b240: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9b241: mov esi, ecx */
  esi = ecx;
/* e9b243: call 0xe985c0 */
  esp -= 4; W32(esp, 0xe9b248u); SPILL(); f_e985c0(); if (g_unwind) return; RELOAD();
/* e9b248: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9b24d: je 0xe9b25c */
  if (zf) goto L_e9b25c;
L_e9b24f: /* e9b24f: mov eax, dword ptr [0xeae014] */
  eax = R32((uint32_t)(0xeae014u));
/* e9b254: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9b256: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9b258: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9b259: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xe9b25cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e9b25c: /* e9b25c: mov eax, esi */
  eax = esi;
/* e9b25e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9b25f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e9b270(void) {
  LOAD_REGS();
L_e9b270: /* e9b270: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9b271: mov esi, ecx */
  esi = ecx;
/* e9b273: call 0xe98650 */
  esp -= 4; W32(esp, 0xe9b278u); SPILL(); f_e98650(); if (g_unwind) return; RELOAD();
/* e9b278: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9b27d: je 0xe9b28c */
  if (zf) goto L_e9b28c;
L_e9b27f: /* e9b27f: mov eax, dword ptr [0xeae014] */
  eax = R32((uint32_t)(0xeae014u));
/* e9b284: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9b286: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9b288: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9b289: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xe9b28cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e9b28c: /* e9b28c: mov eax, esi */
  eax = esi;
/* e9b28e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9b28f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e9b2a0(void) {
  LOAD_REGS();
L_e9b2a0: /* e9b2a0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* e9b2a2: push 0xead2d9 */
  { uint32_t v = 0xead2d9u; esp -= 4; W32(esp, v); }
/* e9b2a7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* e9b2ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9b2ae: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* e9b2b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9b2b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9b2b7: mov esi, ecx */
  esi = ecx;
/* e9b2b9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* e9b2bd: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* e9b2c0: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e9b2c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9b2c3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e9b2c5: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* e9b2cd: call dword ptr [0xeae02c] */
  esp -= 4; W32(esp, 0xe9b2d3u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* e9b2d3: mov ecx, esi */
  ecx = esi;
/* e9b2d5: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* e9b2dd: call dword ptr [0xeae024] */
  esp -= 4; W32(esp, 0xe9b2e3u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* e9b2e3: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e9b2e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9b2e8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e9b2ef: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9b2f2: ret  */
  esp += 4; SPILL(); return;
}

void f_e9b300(void) {
  LOAD_REGS();
L_e9b300: /* e9b300: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9b301: mov esi, ecx */
  esi = ecx;
/* e9b303: call 0xe9b330 */
  esp -= 4; W32(esp, 0xe9b308u); SPILL(); f_e9b330(); if (g_unwind) return; RELOAD();
/* e9b308: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9b30d: je 0xe9b31c */
  if (zf) goto L_e9b31c;
L_e9b30f: /* e9b30f: mov eax, dword ptr [0xeae014] */
  eax = R32((uint32_t)(0xeae014u));
/* e9b314: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9b316: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9b318: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9b319: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xe9b31cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e9b31c: /* e9b31c: mov eax, esi */
  eax = esi;
/* e9b31e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9b31f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e9b330(void) {
  LOAD_REGS();
L_e9b330: /* e9b330: jmp 0xe985c0 */
  SPILL(); f_e985c0(); return;
}

void f_e9b340(void) {
  LOAD_REGS();
L_e9b340: /* e9b340: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9b341: mov esi, ecx */
  esi = ecx;
/* e9b343: call 0xe9b370 */
  esp -= 4; W32(esp, 0xe9b348u); SPILL(); f_e9b370(); if (g_unwind) return; RELOAD();
/* e9b348: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9b34d: je 0xe9b35c */
  if (zf) goto L_e9b35c;
L_e9b34f: /* e9b34f: mov eax, dword ptr [0xeae014] */
  eax = R32((uint32_t)(0xeae014u));
/* e9b354: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9b356: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9b358: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9b359: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xe9b35cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e9b35c: /* e9b35c: mov eax, esi */
  eax = esi;
/* e9b35e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9b35f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e9b370(void) {
  LOAD_REGS();
L_e9b370: /* e9b370: jmp 0xe98650 */
  SPILL(); f_e98650(); return;
}

void f_e9b380(void) {
  LOAD_REGS();
L_e9b380: /* e9b380: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9b381: mov esi, ecx */
  esi = ecx;
/* e9b383: call 0xe9aae0 */
  esp -= 4; W32(esp, 0xe9b388u); SPILL(); f_e9aae0(); if (g_unwind) return; RELOAD();
/* e9b388: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9b38d: je 0xe9b39c */
  if (zf) goto L_e9b39c;
L_e9b38f: /* e9b38f: mov eax, dword ptr [0xeae014] */
  eax = R32((uint32_t)(0xeae014u));
/* e9b394: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9b396: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9b398: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9b399: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0xe9b39cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_e9b39c: /* e9b39c: mov eax, esi */
  eax = esi;
/* e9b39e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9b39f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e9b3b0(void) {
  LOAD_REGS();
L_e9b3b0: /* e9b3b0: jmp dword ptr [0xeae378] */
  SPILL(); call_ind(R32(0xeae378u)); return; /* d3d8!Direct3DCreate8 */
}

void f_e9b3b6(void) {
  LOAD_REGS();
L_e9b3b6: /* e9b3b6: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* e9b3ba: fsub dword ptr [esp + 8] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x8u)));
/* e9b3be: fld dword ptr [0xeb34f0] */
  { double v = F32((uint32_t)(0xeb34f0u)); FPUSH(v); }
/* e9b3c4: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* e9b3c6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e9b3c8: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* e9b3cb: jp 0xe9b3de */
  if (pf) goto L_e9b3de;
L_e9b3cd: /* e9b3cd: fcomp dword ptr [0xeb34ec] */
  fpu_com(ST0, F32((uint32_t)(0xeb34ecu)));
  FPOP();
/* e9b3d3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e9b3d5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* e9b3d8: jp 0xe9b3e0 */
  if (pf) goto L_e9b3e0;
L_e9b3da: /* e9b3da: xor eax, eax */
  eax = 0;
/* e9b3dc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e9b3dd: ret  */
  esp += 4; SPILL(); return;
L_e9b3de: /* e9b3de: fstp st(0) */
  STI(0) = ST0; FPOP();
L_e9b3e0: /* e9b3e0: xor eax, eax */
  eax = 0;
/* e9b3e2: ret  */
  esp += 4; SPILL(); return;
}

void f_e9b3e3(void) {
  LOAD_REGS();
L_e9b3e3: /* e9b3e3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9b3e5: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9b3eau); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9b3ea: jmp dword ptr [0xeba110] */
  { uint32_t t = R32((uint32_t)(0xeba110u)); SPILL(); call_ind(t); return; }
}

void f_e9b3f0(void) {
  LOAD_REGS();
L_e9b3f0: /* e9b3f0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9b3f1: mov ebp, esp */
  ebp = esp;
/* e9b3f3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9b3f5: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9b3fau); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9b3fa: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9b3fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9b3fe: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9b401: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* e9b404: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* e9b407: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* e9b40a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* e9b40d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* e9b410: call dword ptr [0xeba09c] */
  { uint32_t t = R32((uint32_t)(0xeba09cu)); esp -= 4; W32(esp, 0xe9b416u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9b416: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9b417: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_e9b41a(void) {
  LOAD_REGS();
L_e9b41a: /* e9b41a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9b41b: mov ebp, esp */
  ebp = esp;
/* e9b41d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9b41e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9b41f: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9b422: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e9b425: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* e9b428: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e9b42b: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9b42e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9b431: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9b432: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9b434: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* e9b437: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9b438: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* e9b43b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9b43d: fadd st(1) */
  ST0 = ST0 + STI(1);
/* e9b43f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9b441: fmul dword ptr [0xeb278c] */
  ST0 = ST0 * (F32((uint32_t)(0xeb278cu)));
/* e9b447: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9b449: fsub st(1) */
  ST0 = ST0 - STI(1);
/* e9b44b: fadd dword ptr [0xeaed44] */
  ST0 = ST0 + (F32((uint32_t)(0xeaed44u)));
/* e9b451: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* e9b454: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9b456: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* e9b458: fsubr st(3) */
  ST0 = STI(3) - ST0;
/* e9b45a: fadd dword ptr [ebp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x1cu)));
/* e9b45d: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* e9b460: fsub st(1) */
  ST0 = ST0 - STI(1);
/* e9b462: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* e9b465: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9b467: fsubrp st(1) */
  STI(1) = ST0 - STI(1);
  FPOP();
/* e9b469: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9b46c: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9b46e: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9b471: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* e9b473: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b475: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9b478: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* e9b47a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b47c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9b47e: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* e9b480: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b482: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9b484: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* e9b487: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9b488: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9b48b: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* e9b48e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9b48f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b491: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9b494: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* e9b497: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b499: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9b49c: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9b49f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b4a1: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9b4a4: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9b4a5: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_e9b4a8(void) {
  LOAD_REGS();
L_e9b4a8: /* e9b4a8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9b4a9: mov ebp, esp */
  ebp = esp;
/* e9b4ab: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9b4ad: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9b4b2u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9b4b2: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9b4b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9b4b6: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9b4b9: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* e9b4bc: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* e9b4bf: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* e9b4c2: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* e9b4c5: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* e9b4c8: call dword ptr [0xeba114] */
  { uint32_t t = R32((uint32_t)(0xeba114u)); esp -= 4; W32(esp, 0xe9b4ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9b4ce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9b4cf: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_e9b4d2(void) {
  LOAD_REGS();
L_e9b4d2: /* e9b4d2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9b4d3: mov ebp, esp */
  ebp = esp;
/* e9b4d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9b4d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9b4d7: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9b4da: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e9b4dd: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* e9b4e0: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e9b4e3: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9b4e6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9b4e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9b4ea: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9b4ec: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* e9b4ef: fld dword ptr [0xeb34fc] */
  { double v = F32((uint32_t)(0xeb34fcu)); FPUSH(v); }
/* e9b4f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9b4f6: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9b4f8: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* e9b4fb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9b4fd: fsub st(2) */
  ST0 = ST0 - STI(2);
/* e9b4ff: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* e9b502: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* e9b505: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9b507: fmul dword ptr [0xeb278c] */
  ST0 = ST0 * (F32((uint32_t)(0xeb278cu)));
/* e9b50d: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9b50f: fmul dword ptr [0xeb34f8] */
  ST0 = ST0 * (F32((uint32_t)(0xeb34f8u)));
/* e9b515: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* e9b517: fadd st(2) */
  ST0 = ST0 + STI(2);
/* e9b519: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* e9b51c: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9b51e: fmul dword ptr [0xeb34f4] */
  ST0 = ST0 * (F32((uint32_t)(0xeb34f4u)));
/* e9b524: fsub st(1) */
  ST0 = ST0 - STI(1);
/* e9b526: fadd dword ptr [ebp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x1cu)));
/* e9b529: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* e9b52c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9b52e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9b530: fsubrp st(1) */
  STI(1) = ST0 - STI(1);
  FPOP();
/* e9b532: fld dword ptr [0xeaed40] */
  { double v = F32((uint32_t)(0xeaed40u)); FPUSH(v); }
/* e9b538: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9b53b: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9b53d: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9b540: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* e9b542: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b544: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9b547: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* e9b549: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b54b: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9b54d: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* e9b54f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b551: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9b553: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9b555: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9b557: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* e9b55a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9b55b: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9b55e: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* e9b561: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9b562: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b564: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9b567: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* e9b56a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b56c: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9b56f: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9b572: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b574: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9b576: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9b579: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9b57b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9b57d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9b57e: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_e9b581(void) {
  LOAD_REGS();
L_e9b581: /* e9b581: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9b582: mov ebp, esp */
  ebp = esp;
/* e9b584: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9b586: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9b58bu); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9b58b: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9b58e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9b58f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9b590: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e9b594: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* e9b597: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9b59a: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* e9b59d: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* e9b5a0: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* e9b5a3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* e9b5a6: call dword ptr [0xeba118] */
  { uint32_t t = R32((uint32_t)(0xeba118u)); esp -= 4; W32(esp, 0xe9b5acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9b5ac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9b5ad: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_e9b5b0(void) {
  LOAD_REGS();
L_e9b5b0: /* e9b5b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9b5b1: mov ebp, esp */
  ebp = esp;
/* e9b5b3: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e9b5b6: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e9b5b9: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* e9b5bb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9b5be: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* e9b5c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9b5c1: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* e9b5c4: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* e9b5c7: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* e9b5c9: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* e9b5cb: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* e9b5ce: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b5d0: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* e9b5d2: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9b5d4: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* e9b5d7: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* e9b5da: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* e9b5dd: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* e9b5e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9b5e1: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* e9b5e4: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* e9b5e7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b5e9: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* e9b5ec: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9b5ef: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9b5f0: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_e9b5f3(void) {
  LOAD_REGS();
L_e9b5f3: /* e9b5f3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9b5f5: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9b5fau); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9b5fa: jmp dword ptr [0xeba058] */
  { uint32_t t = R32((uint32_t)(0xeba058u)); SPILL(); call_ind(t); return; }
}

void f_e9b600(void) {
  LOAD_REGS();
L_e9b600: /* e9b600: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9b602: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9b607u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9b607: jmp dword ptr [0xeba07c] */
  { uint32_t t = R32((uint32_t)(0xeba07cu)); SPILL(); call_ind(t); return; }
}

void f_e9b60d(void) {
  LOAD_REGS();
L_e9b60d: /* e9b60d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9b60f: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9b614u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9b614: jmp dword ptr [0xeba06c] */
  { uint32_t t = R32((uint32_t)(0xeba06cu)); SPILL(); call_ind(t); return; }
}

void f_e9b61a(void) {
  LOAD_REGS();
L_e9b61a: /* e9b61a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9b61c: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9b621u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9b621: jmp dword ptr [0xeba074] */
  { uint32_t t = R32((uint32_t)(0xeba074u)); SPILL(); call_ind(t); return; }
}

void f_e9b627(void) {
  LOAD_REGS();
L_e9b627: /* e9b627: jmp dword ptr [0xeba074] */
  { uint32_t t = R32((uint32_t)(0xeba074u)); SPILL(); call_ind(t); return; }
}

void f_e9b62d(void) {
  LOAD_REGS();
L_e9b62d: /* e9b62d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9b62e: mov ebp, esp */
  ebp = esp;
/* e9b630: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9b632: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9b637u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9b637: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9b63a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9b63b: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9b63e: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* e9b641: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* e9b644: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* e9b647: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* e9b64a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* e9b64d: call dword ptr [0xeba11c] */
  { uint32_t t = R32((uint32_t)(0xeba11cu)); esp -= 4; W32(esp, 0xe9b653u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9b653: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9b654: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_e9b657(void) {
  LOAD_REGS();
L_e9b657: /* e9b657: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9b658: mov ebp, esp */
  ebp = esp;
/* e9b65a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9b65b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9b65c: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9b65f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e9b662: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* e9b665: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e9b668: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9b66b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9b66e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9b66f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9b671: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* e9b674: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9b675: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* e9b678: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9b67a: fadd st(1) */
  ST0 = ST0 + STI(1);
/* e9b67c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9b67e: fmul dword ptr [0xeb278c] */
  ST0 = ST0 * (F32((uint32_t)(0xeb278cu)));
/* e9b684: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9b686: fsub st(1) */
  ST0 = ST0 - STI(1);
/* e9b688: fadd dword ptr [0xeaed44] */
  ST0 = ST0 + (F32((uint32_t)(0xeaed44u)));
/* e9b68e: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* e9b691: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9b693: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* e9b695: fsubr st(3) */
  ST0 = STI(3) - ST0;
/* e9b697: fadd dword ptr [ebp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x1cu)));
/* e9b69a: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* e9b69d: fsub st(1) */
  ST0 = ST0 - STI(1);
/* e9b69f: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* e9b6a2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9b6a4: fsubrp st(1) */
  STI(1) = ST0 - STI(1);
  FPOP();
/* e9b6a6: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9b6a9: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9b6ab: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9b6ae: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* e9b6b0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b6b2: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9b6b5: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* e9b6b7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b6b9: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9b6bb: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* e9b6bd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b6bf: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9b6c1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9b6c3: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* e9b6c6: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9b6c9: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* e9b6cc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b6ce: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9b6d1: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* e9b6d4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b6d6: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9b6d9: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9b6dc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b6de: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9b6e1: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* e9b6e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9b6e5: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9b6e8: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* e9b6eb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9b6ec: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b6ee: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9b6f1: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* e9b6f4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b6f6: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9b6f9: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* e9b6fc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b6fe: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* e9b701: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9b702: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_e9b705(void) {
  LOAD_REGS();
L_e9b705: /* e9b705: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9b706: mov ebp, esp */
  ebp = esp;
/* e9b708: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9b70a: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9b70fu); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9b70f: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9b712: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9b713: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9b716: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* e9b719: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* e9b71c: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* e9b71f: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* e9b722: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* e9b725: call dword ptr [0xeba120] */
  { uint32_t t = R32((uint32_t)(0xeba120u)); esp -= 4; W32(esp, 0xe9b72bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9b72b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9b72c: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_e9b72f(void) {
  LOAD_REGS();
L_e9b72f: /* e9b72f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9b730: mov ebp, esp */
  ebp = esp;
/* e9b732: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9b733: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9b734: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9b737: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e9b73a: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* e9b73d: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e9b740: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9b743: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9b746: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9b747: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9b749: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* e9b74c: fld dword ptr [0xeb34fc] */
  { double v = F32((uint32_t)(0xeb34fcu)); FPUSH(v); }
/* e9b752: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9b753: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9b755: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* e9b758: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9b75a: fsub st(2) */
  ST0 = ST0 - STI(2);
/* e9b75c: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* e9b75f: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* e9b762: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9b764: fmul dword ptr [0xeb278c] */
  ST0 = ST0 * (F32((uint32_t)(0xeb278cu)));
/* e9b76a: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9b76c: fmul dword ptr [0xeb34f8] */
  ST0 = ST0 * (F32((uint32_t)(0xeb34f8u)));
/* e9b772: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* e9b774: fadd st(2) */
  ST0 = ST0 + STI(2);
/* e9b776: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* e9b779: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9b77b: fmul dword ptr [0xeb34f4] */
  ST0 = ST0 * (F32((uint32_t)(0xeb34f4u)));
/* e9b781: fsub st(1) */
  ST0 = ST0 - STI(1);
/* e9b783: fadd dword ptr [ebp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x1cu)));
/* e9b786: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* e9b789: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9b78b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9b78d: fsubrp st(1) */
  STI(1) = ST0 - STI(1);
  FPOP();
/* e9b78f: fld dword ptr [0xeaed40] */
  { double v = F32((uint32_t)(0xeaed40u)); FPUSH(v); }
/* e9b795: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9b798: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9b79a: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9b79d: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* e9b79f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b7a1: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9b7a4: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* e9b7a6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b7a8: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9b7aa: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* e9b7ac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b7ae: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9b7b0: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9b7b2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9b7b4: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* e9b7b7: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9b7ba: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* e9b7bd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b7bf: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9b7c2: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* e9b7c5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b7c7: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9b7ca: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9b7cd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b7cf: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9b7d1: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9b7d4: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9b7d6: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* e9b7d9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9b7da: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9b7dd: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* e9b7e0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9b7e1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b7e3: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9b7e6: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* e9b7e9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b7eb: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9b7ee: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* e9b7f1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b7f3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9b7f5: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* e9b7f8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9b7fa: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9b7fc: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9b7fd: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_e9b800(void) {
  LOAD_REGS();
L_e9b800: /* e9b800: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9b801: mov ebp, esp */
  ebp = esp;
/* e9b803: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9b805: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9b80au); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9b80a: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9b80d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9b80e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9b80f: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e9b813: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* e9b816: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9b819: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* e9b81c: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* e9b81f: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* e9b822: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* e9b825: call dword ptr [0xeba124] */
  { uint32_t t = R32((uint32_t)(0xeba124u)); esp -= 4; W32(esp, 0xe9b82bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9b82b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9b82c: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_e9b82f(void) {
  LOAD_REGS();
L_e9b82f: /* e9b82f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9b830: mov ebp, esp */
  ebp = esp;
/* e9b832: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e9b835: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e9b838: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* e9b83a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9b83d: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* e9b83f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9b840: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* e9b843: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* e9b846: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* e9b848: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* e9b84a: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* e9b84d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b84f: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* e9b851: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9b853: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* e9b856: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* e9b859: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* e9b85c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* e9b85f: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* e9b862: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* e9b865: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b867: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* e9b86a: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9b86d: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* e9b870: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* e9b873: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* e9b876: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* e9b879: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9b87a: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* e9b87d: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* e9b880: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b882: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* e9b885: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* e9b888: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9b889: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_e9b88c(void) {
  LOAD_REGS();
L_e9b88c: /* e9b88c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9b88e: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9b893u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9b893: jmp dword ptr [0xeba05c] */
  { uint32_t t = R32((uint32_t)(0xeba05cu)); SPILL(); call_ind(t); return; }
}

void f_e9b899(void) {
  LOAD_REGS();
L_e9b899: /* e9b899: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9b89a: mov ebp, esp */
  ebp = esp;
/* e9b89c: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9b89f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* e9b8a2: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e9b8a5: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* e9b8a8: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* e9b8ab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9b8ac: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* e9b8af: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9b8b0: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9b8b3: lea esi, [ebp - 0x10] */
  esi = (uint32_t)(ebp + 0xfffffff0u);
/* e9b8b6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b8b8: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* e9b8ba: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* e9b8bc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b8be: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* e9b8c1: fstp dword ptr [ebp - 0x10] */
  WF32((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* e9b8c4: fld dword ptr [eax + 0x24] */
  { double v = F32((uint32_t)(eax + 0x24u)); FPUSH(v); }
/* e9b8c7: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* e9b8ca: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* e9b8cd: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9b8d0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b8d2: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* e9b8d5: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9b8d7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b8d9: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* e9b8dc: fstp dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* e9b8df: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* e9b8e2: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* e9b8e5: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* e9b8e8: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9b8eb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b8ed: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* e9b8f0: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9b8f2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b8f4: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* e9b8f7: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* e9b8fa: fld dword ptr [eax + 0x2c] */
  { double v = F32((uint32_t)(eax + 0x2cu)); FPUSH(v); }
/* e9b8fd: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* e9b900: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* e9b903: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9b906: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b908: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* e9b90b: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9b90d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b90f: fadd dword ptr [eax + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x3cu)));
/* e9b912: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9b915: mov edi, eax */
  edi = eax;
/* e9b917: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* e9b91a: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9b91b: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9b91c: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9b91d: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9b91e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9b91f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9b920: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9b921: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e9b924(void) {
  LOAD_REGS();
L_e9b924: /* e9b924: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9b926: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9b92bu); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9b92b: jmp dword ptr [0xeba080] */
  { uint32_t t = R32((uint32_t)(0xeba080u)); SPILL(); call_ind(t); return; }
}

void f_e9b931(void) {
  LOAD_REGS();
L_e9b931: /* e9b931: jmp dword ptr [0xeba080] */
  { uint32_t t = R32((uint32_t)(0xeba080u)); SPILL(); call_ind(t); return; }
}

void f_e9b937(void) {
  LOAD_REGS();
L_e9b937: /* e9b937: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9b939: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9b93eu); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9b93e: jmp dword ptr [0xeba070] */
  { uint32_t t = R32((uint32_t)(0xeba070u)); SPILL(); call_ind(t); return; }
}

void f_e9b944(void) {
  LOAD_REGS();
L_e9b944: /* e9b944: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9b945: mov ebp, esp */
  ebp = esp;
/* e9b947: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9b94a: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e9b94d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e9b950: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* e9b953: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* e9b956: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9b957: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* e9b95a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9b95b: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* e9b95e: lea esi, [ebp - 0xc] */
  esi = (uint32_t)(ebp + 0xfffffff4u);
/* e9b961: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b963: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* e9b965: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9b967: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b969: fstp dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* e9b96c: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* e9b96f: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* e9b972: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* e9b975: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* e9b978: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b97a: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* e9b97d: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* e9b97f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b981: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* e9b984: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* e9b987: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* e9b98a: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* e9b98d: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* e9b990: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b992: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* e9b995: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* e9b997: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9b99a: mov edi, eax */
  edi = eax;
/* e9b99c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9b99e: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* e9b9a1: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9b9a2: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9b9a3: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9b9a4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9b9a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9b9a6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9b9a7: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e9b9aa(void) {
  LOAD_REGS();
L_e9b9aa: /* e9b9aa: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9b9ab: mov ebp, esp */
  ebp = esp;
/* e9b9ad: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9b9af: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9b9b4u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9b9b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9b9b5: jmp dword ptr [0xeba090] */
  { uint32_t t = R32((uint32_t)(0xeba090u)); SPILL(); call_ind(t); return; }
}

void f_e9b9bb(void) {
  LOAD_REGS();
L_e9b9bb: /* e9b9bb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9b9bc: mov ebp, esp */
  ebp = esp;
/* e9b9be: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9b9c0: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9b9c5u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9b9c5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9b9c6: jmp dword ptr [0xeba094] */
  { uint32_t t = R32((uint32_t)(0xeba094u)); SPILL(); call_ind(t); return; }
}

void f_e9b9cc(void) {
  LOAD_REGS();
L_e9b9cc: /* e9b9cc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9b9ce: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9b9d3u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9b9d3: jmp dword ptr [0xeba098] */
  { uint32_t t = R32((uint32_t)(0xeba098u)); SPILL(); call_ind(t); return; }
}

void f_e9b9d9(void) {
  LOAD_REGS();
L_e9b9d9: /* e9b9d9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9b9da: mov ebp, esp */
  ebp = esp;
/* e9b9dc: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9b9df: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* e9b9e2: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* e9b9e5: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* e9b9e8: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* e9b9eb: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e9b9ee: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* e9b9f1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9b9f2: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* e9b9f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9b9f6: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* e9b9f9: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* e9b9fc: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* e9b9ff: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9ba02: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9ba04: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* e9ba07: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* e9ba0a: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* e9ba0d: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* e9ba10: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* e9ba13: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9ba16: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* e9ba19: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9ba1b: fsub st(1) */
  ST0 = ST0 - STI(1);
/* e9ba1d: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* e9ba20: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* e9ba23: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* e9ba26: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9ba28: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9ba2b: fsub dword ptr [ebp - 4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffffcu)));
/* e9ba2e: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* e9ba31: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9ba33: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* e9ba36: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* e9ba39: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9ba3b: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* e9ba3e: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* e9ba41: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* e9ba43: fstp dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0); FPOP();
/* e9ba46: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* e9ba48: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* e9ba4b: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* e9ba4d: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* e9ba50: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9ba52: fstp dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* e9ba55: fsub st(1) */
  ST0 = ST0 - STI(1);
/* e9ba57: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* e9ba59: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9ba5c: fsub dword ptr [ebp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x14u)));
/* e9ba5f: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* e9ba62: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9ba64: fld dword ptr [ebp - 0xc] */
  { double v = F32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* e9ba67: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* e9ba6a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9ba6c: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* e9ba6f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9ba71: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* e9ba73: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9ba76: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* e9ba78: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* e9ba7b: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* e9ba7e: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* e9ba80: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* e9ba83: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* e9ba86: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* e9ba89: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9ba8b: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9ba8d: fsub st(2) */
  ST0 = ST0 - STI(2);
/* e9ba8f: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* e9ba92: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9ba94: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* e9ba97: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9ba9a: fsub dword ptr [ebp - 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffff8u)));
/* e9ba9d: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* e9ba9f: fld dword ptr [ebp - 0xc] */
  { double v = F32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* e9baa2: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* e9baa5: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9baa8: lea esi, [ebp - 0x1c] */
  esi = (uint32_t)(ebp + 0xffffffe4u);
/* e9baab: mov edi, eax */
  edi = eax;
/* e9baad: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9baaf: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9bab1: fsub st(3) */
  ST0 = ST0 - STI(3);
/* e9bab3: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* e9bab6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bab8: fstp dword ptr [ebp - 0x10] */
  WF32((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* e9babb: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9babc: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9babd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9babf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9bac1: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9bac2: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9bac3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9bac4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9bac5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9bac6: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_e9bac9(void) {
  LOAD_REGS();
L_e9bac9: /* e9bac9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9bacb: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9bad0u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9bad0: jmp dword ptr [0xeba078] */
  { uint32_t t = R32((uint32_t)(0xeba078u)); SPILL(); call_ind(t); return; }
}

void f_e9bad6(void) {
  LOAD_REGS();
L_e9bad6: /* e9bad6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9bad7: mov ebp, esp */
  ebp = esp;
/* e9bad9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9badb: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9bae0u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9bae0: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9bae3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9bae4: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9bae7: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* e9baea: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* e9baed: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* e9baf0: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* e9baf3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* e9baf6: call dword ptr [0xeba128] */
  { uint32_t t = R32((uint32_t)(0xeba128u)); esp -= 4; W32(esp, 0xe9bafcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9bafc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9bafd: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_e9bb00(void) {
  LOAD_REGS();
L_e9bb00: /* e9bb00: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9bb01: mov ebp, esp */
  ebp = esp;
/* e9bb03: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9bb06: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9bb09: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e9bb0c: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* e9bb0f: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e9bb12: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9bb15: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9bb18: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9bb19: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9bb1b: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* e9bb1e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9bb1f: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* e9bb22: fst dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0);
/* e9bb25: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* e9bb27: fstp dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* e9bb2a: fld dword ptr [0xeb278c] */
  { double v = F32((uint32_t)(0xeb278cu)); FPUSH(v); }
/* e9bb30: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9bb32: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* e9bb35: fld dword ptr [ebp - 0xc] */
  { double v = F32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* e9bb38: fsub dword ptr [ebp - 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffff8u)));
/* e9bb3b: fadd dword ptr [0xeaed44] */
  ST0 = ST0 + (F32((uint32_t)(0xeaed44u)));
/* e9bb41: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9bb43: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* e9bb45: fsubr dword ptr [ebp - 4] */
  ST0 = (F32((uint32_t)(ebp + 0xfffffffcu))) - ST0;
/* e9bb48: fadd dword ptr [ebp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x1cu)));
/* e9bb4b: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9bb4e: fsub dword ptr [ebp - 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffff4u)));
/* e9bb51: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9bb54: fsub st(4) */
  ST0 = ST0 - STI(4);
/* e9bb56: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9bb58: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9bb5a: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9bb5c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* e9bb5e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bb60: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9bb62: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* e9bb64: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bb66: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9bb68: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* e9bb6a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bb6c: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9bb6e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9bb70: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* e9bb73: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9bb75: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* e9bb78: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bb7a: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9bb7c: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* e9bb7f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bb81: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* e9bb83: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9bb86: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bb88: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9bb8b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9bb8d: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* e9bb90: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9bb92: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* e9bb95: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bb97: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9bb99: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* e9bb9c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bb9e: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* e9bba0: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* e9bba3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bba5: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* e9bba8: fmul dword ptr [edi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xcu)));
/* e9bbab: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9bbac: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9bbae: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* e9bbb1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9bbb2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bbb4: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9bbb6: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* e9bbb9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bbbb: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9bbbd: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* e9bbc0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bbc2: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* e9bbc5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9bbc7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9bbc9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9bbcb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9bbcd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9bbce: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_e9bbd1(void) {
  LOAD_REGS();
L_e9bbd1: /* e9bbd1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9bbd2: mov ebp, esp */
  ebp = esp;
/* e9bbd4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9bbd6: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9bbdbu); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9bbdb: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9bbde: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9bbdf: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9bbe2: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* e9bbe5: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* e9bbe8: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* e9bbeb: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* e9bbee: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* e9bbf1: call dword ptr [0xeba12c] */
  { uint32_t t = R32((uint32_t)(0xeba12cu)); esp -= 4; W32(esp, 0xe9bbf7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9bbf7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9bbf8: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_e9bbfb(void) {
  LOAD_REGS();
L_e9bbfb: /* e9bbfb: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9bbfc: mov ebp, esp */
  ebp = esp;
/* e9bbfe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9bbff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9bc00: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9bc03: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e9bc06: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* e9bc09: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e9bc0c: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9bc0f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9bc12: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9bc13: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9bc15: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* e9bc18: fld dword ptr [0xeb34fc] */
  { double v = F32((uint32_t)(0xeb34fcu)); FPUSH(v); }
/* e9bc1e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9bc1f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9bc21: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* e9bc24: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9bc26: fsub st(2) */
  ST0 = ST0 - STI(2);
/* e9bc28: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* e9bc2b: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* e9bc2e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9bc30: fmul dword ptr [0xeb278c] */
  ST0 = ST0 * (F32((uint32_t)(0xeb278cu)));
/* e9bc36: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9bc38: fmul dword ptr [0xeb34f8] */
  ST0 = ST0 * (F32((uint32_t)(0xeb34f8u)));
/* e9bc3e: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* e9bc40: fadd st(2) */
  ST0 = ST0 + STI(2);
/* e9bc42: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* e9bc45: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9bc47: fmul dword ptr [0xeb34f4] */
  ST0 = ST0 * (F32((uint32_t)(0xeb34f4u)));
/* e9bc4d: fsub st(1) */
  ST0 = ST0 - STI(1);
/* e9bc4f: fadd dword ptr [ebp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x1cu)));
/* e9bc52: fstp dword ptr [ebp + 0x1c] */
  WF32((uint32_t)(ebp + 0x1cu), ST0); FPOP();
/* e9bc55: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9bc57: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9bc59: fsubrp st(1) */
  STI(1) = ST0 - STI(1);
  FPOP();
/* e9bc5b: fld dword ptr [0xeaed40] */
  { double v = F32((uint32_t)(0xeaed40u)); FPUSH(v); }
/* e9bc61: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9bc64: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9bc66: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9bc69: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* e9bc6b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bc6d: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9bc70: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* e9bc72: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bc74: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9bc76: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* e9bc78: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bc7a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9bc7c: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9bc7e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9bc80: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* e9bc83: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9bc86: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* e9bc89: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bc8b: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9bc8e: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* e9bc91: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bc93: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9bc96: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9bc99: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bc9b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9bc9d: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9bca0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9bca2: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* e9bca5: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9bca8: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* e9bcab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bcad: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9bcb0: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* e9bcb3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bcb5: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9bcb8: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* e9bcbb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bcbd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9bcbf: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* e9bcc2: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9bcc4: fmul dword ptr [edi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xcu)));
/* e9bcc7: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9bcca: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* e9bccd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bccf: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9bcd2: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* e9bcd5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9bcd6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9bcd7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bcd9: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9bcdc: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* e9bcdf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bce1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9bce3: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* e9bce6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9bce8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9bcea: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9bceb: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_e9bcee(void) {
  LOAD_REGS();
L_e9bcee: /* e9bcee: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9bcef: mov ebp, esp */
  ebp = esp;
/* e9bcf1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9bcf3: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9bcf8u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9bcf8: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9bcfb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9bcfc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9bcfd: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e9bd01: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* e9bd04: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9bd07: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* e9bd0a: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* e9bd0d: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* e9bd10: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* e9bd13: call dword ptr [0xeba130] */
  { uint32_t t = R32((uint32_t)(0xeba130u)); esp -= 4; W32(esp, 0xe9bd19u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9bd19: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9bd1a: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_e9bd1d(void) {
  LOAD_REGS();
L_e9bd1d: /* e9bd1d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9bd1e: mov ebp, esp */
  ebp = esp;
/* e9bd20: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e9bd23: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e9bd26: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* e9bd28: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9bd2b: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* e9bd2d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9bd2e: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* e9bd31: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* e9bd34: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* e9bd36: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* e9bd38: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* e9bd3b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bd3d: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* e9bd3f: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9bd41: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* e9bd44: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* e9bd47: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* e9bd4a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* e9bd4d: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* e9bd50: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* e9bd53: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bd55: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* e9bd58: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9bd5b: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* e9bd5e: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* e9bd61: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* e9bd64: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* e9bd67: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* e9bd6a: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* e9bd6d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bd6f: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* e9bd72: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* e9bd75: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* e9bd78: fsub dword ptr [ecx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xcu)));
/* e9bd7b: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* e9bd7e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* e9bd81: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9bd82: fsub dword ptr [ecx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xcu)));
/* e9bd85: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* e9bd88: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bd8a: fadd dword ptr [ecx + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xcu)));
/* e9bd8d: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* e9bd90: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9bd91: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_e9bd94(void) {
  LOAD_REGS();
L_e9bd94: /* e9bd94: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9bd96: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9bd9bu); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9bd9b: jmp dword ptr [0xeba060] */
  { uint32_t t = R32((uint32_t)(0xeba060u)); SPILL(); call_ind(t); return; }
}

void f_e9bda1(void) {
  LOAD_REGS();
L_e9bda1: /* e9bda1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9bda2: mov ebp, esp */
  ebp = esp;
/* e9bda4: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9bda7: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e9bdaa: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e9bdad: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* e9bdb0: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* e9bdb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9bdb4: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* e9bdb7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9bdb8: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* e9bdbb: lea esi, [ebp - 0x10] */
  esi = (uint32_t)(ebp + 0xfffffff0u);
/* e9bdbe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bdc0: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* e9bdc3: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* e9bdc6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bdc8: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* e9bdca: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9bdcc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bdce: fstp dword ptr [ebp - 0x10] */
  WF32((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* e9bdd1: fld dword ptr [ecx + 0x34] */
  { double v = F32((uint32_t)(ecx + 0x34u)); FPUSH(v); }
/* e9bdd4: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* e9bdd7: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* e9bdda: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* e9bddd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bddf: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* e9bde2: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* e9bde4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bde6: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* e9bde9: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* e9bdec: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bdee: fstp dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* e9bdf1: fld dword ptr [ecx + 0x38] */
  { double v = F32((uint32_t)(ecx + 0x38u)); FPUSH(v); }
/* e9bdf4: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* e9bdf7: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* e9bdfa: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* e9bdfd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bdff: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* e9be02: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* e9be04: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9be06: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* e9be09: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* e9be0c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9be0e: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* e9be11: fld dword ptr [ecx + 0x3c] */
  { double v = F32((uint32_t)(ecx + 0x3cu)); FPUSH(v); }
/* e9be14: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* e9be17: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* e9be1a: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* e9be1d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9be1f: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* e9be22: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* e9be24: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9be26: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* e9be29: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* e9be2c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9be2f: mov edi, eax */
  edi = eax;
/* e9be31: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9be33: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* e9be36: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9be37: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9be38: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9be39: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9be3a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9be3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9be3c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9be3d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e9be40(void) {
  LOAD_REGS();
L_e9be40: /* e9be40: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9be42: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9be47u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9be47: jmp dword ptr [0xeba084] */
  { uint32_t t = R32((uint32_t)(0xeba084u)); SPILL(); call_ind(t); return; }
}

void f_e9be4d(void) {
  LOAD_REGS();
L_e9be4d: /* e9be4d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9be4e: mov ebp, esp */
  ebp = esp;
/* e9be50: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9be53: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* e9be56: fmul dword ptr [eax + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x3cu)));
/* e9be59: fld dword ptr [eax + 0x38] */
  { double v = F32((uint32_t)(eax + 0x38u)); FPUSH(v); }
/* e9be5c: fmul dword ptr [eax + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2cu)));
/* e9be5f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9be61: fld dword ptr [eax + 0x3c] */
  { double v = F32((uint32_t)(eax + 0x3cu)); FPUSH(v); }
/* e9be64: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* e9be67: fld dword ptr [eax + 0x34] */
  { double v = F32((uint32_t)(eax + 0x34u)); FPUSH(v); }
/* e9be6a: fmul dword ptr [eax + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2cu)));
/* e9be6d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9be6f: fld dword ptr [eax + 0x38] */
  { double v = F32((uint32_t)(eax + 0x38u)); FPUSH(v); }
/* e9be72: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* e9be75: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* e9be78: fmul dword ptr [eax + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x34u)));
/* e9be7b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9be7d: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* e9be80: fmul dword ptr [eax + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x3cu)));
/* e9be83: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* e9be86: fmul dword ptr [eax + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2cu)));
/* e9be89: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9be8b: fld dword ptr [eax + 0x38] */
  { double v = F32((uint32_t)(eax + 0x38u)); FPUSH(v); }
/* e9be8e: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* e9be91: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* e9be94: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* e9be97: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9be99: fld dword ptr [eax + 0x20] */
  { double v = F32((uint32_t)(eax + 0x20u)); FPUSH(v); }
/* e9be9c: fmul dword ptr [eax + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x34u)));
/* e9be9f: fld dword ptr [eax + 0x30] */
  { double v = F32((uint32_t)(eax + 0x30u)); FPUSH(v); }
/* e9bea2: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* e9bea5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9bea7: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* e9beaa: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* e9beac: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* e9beaf: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* e9beb1: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* e9beb4: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9beb6: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9beb8: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* e9bebb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bebd: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* e9bebf: fld st(5) */
  { double v = STI(5); FPUSH(v); }
/* e9bec1: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* e9bec4: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9bec6: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* e9bec9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9becb: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9becd: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* e9bed0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bed2: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* e9bed5: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9bed7: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* e9bed9: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* e9bedc: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9bede: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* e9bee1: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9bee3: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* e9bee6: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* e9bee9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9beeb: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* e9beee: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bef0: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9bef2: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* e9bef5: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9bef7: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* e9befa: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9befc: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* e9beff: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* e9bf02: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bf04: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* e9bf07: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9bf09: fstp st(5) */
  STI(5) = ST0; FPOP();
/* e9bf0b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9bf0d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9bf0f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9bf11: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9bf13: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9bf14: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e9bf17(void) {
  LOAD_REGS();
L_e9bf17: /* e9bf17: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9bf19: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9bf1eu); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9bf1e: jmp dword ptr [0xeba064] */
  { uint32_t t = R32((uint32_t)(0xeba064u)); SPILL(); call_ind(t); return; }
}

void f_e9bf24(void) {
  LOAD_REGS();
L_e9bf24: /* e9bf24: jmp dword ptr [0xeba064] */
  { uint32_t t = R32((uint32_t)(0xeba064u)); SPILL(); call_ind(t); return; }
}

void f_e9bf2a(void) {
  LOAD_REGS();
L_e9bf2a: /* e9bf2a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9bf2b: mov ebp, esp */
  ebp = esp;
/* e9bf2d: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9bf30: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9bf33: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e9bf36: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9bf38: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e9bf3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9bf3c: je 0xe9bf44 */
  if (zf) goto L_e9bf44;
L_e9bf3e: /* e9bf3e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9bf40: mov esi, eax */
  esi = eax;
/* e9bf42: jne 0xe9bf47 */
  if (!zf) goto L_e9bf47;
L_e9bf44: /* e9bf44: lea esi, [ebp - 0x40] */
  esi = (uint32_t)(ebp + 0xffffffc0u);
L_e9bf47: /* e9bf47: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* e9bf4a: fmul dword ptr [ecx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x30u)));
/* e9bf4d: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* e9bf4f: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9bf51: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bf53: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* e9bf56: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* e9bf59: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bf5b: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* e9bf5e: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* e9bf61: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bf63: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* e9bf65: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* e9bf68: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* e9bf6b: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* e9bf6e: fmul dword ptr [ecx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x34u)));
/* e9bf71: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bf73: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* e9bf76: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* e9bf79: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bf7b: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* e9bf7e: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* e9bf80: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bf82: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* e9bf85: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* e9bf88: fmul dword ptr [ecx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x38u)));
/* e9bf8b: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* e9bf8e: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* e9bf90: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bf92: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* e9bf95: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* e9bf98: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bf9a: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* e9bf9d: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* e9bfa0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bfa2: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* e9bfa5: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* e9bfa8: fmul dword ptr [ecx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x3cu)));
/* e9bfab: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* e9bfae: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* e9bfb1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bfb3: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* e9bfb5: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* e9bfb8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bfba: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* e9bfbd: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* e9bfc0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bfc2: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* e9bfc5: fld dword ptr [edx + 0x1c] */
  { double v = F32((uint32_t)(edx + 0x1cu)); FPUSH(v); }
/* e9bfc8: fmul dword ptr [ecx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x30u)));
/* e9bfcb: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* e9bfce: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9bfd0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bfd2: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* e9bfd5: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* e9bfd8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bfda: fld dword ptr [edx + 0x18] */
  { double v = F32((uint32_t)(edx + 0x18u)); FPUSH(v); }
/* e9bfdd: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* e9bfe0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bfe2: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* e9bfe5: fld dword ptr [edx + 0x18] */
  { double v = F32((uint32_t)(edx + 0x18u)); FPUSH(v); }
/* e9bfe8: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* e9bfeb: fld dword ptr [edx + 0x1c] */
  { double v = F32((uint32_t)(edx + 0x1cu)); FPUSH(v); }
/* e9bfee: fmul dword ptr [ecx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x34u)));
/* e9bff1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bff3: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* e9bff6: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* e9bff9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9bffb: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* e9bffe: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* e9c001: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c003: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* e9c006: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* e9c009: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* e9c00c: fld dword ptr [edx + 0x1c] */
  { double v = F32((uint32_t)(edx + 0x1cu)); FPUSH(v); }
/* e9c00f: fmul dword ptr [ecx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x38u)));
/* e9c012: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c014: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* e9c017: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* e9c01a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c01c: fld dword ptr [edx + 0x18] */
  { double v = F32((uint32_t)(edx + 0x18u)); FPUSH(v); }
/* e9c01f: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* e9c022: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c024: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* e9c027: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* e9c02a: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* e9c02d: fld dword ptr [edx + 0x1c] */
  { double v = F32((uint32_t)(edx + 0x1cu)); FPUSH(v); }
/* e9c030: fmul dword ptr [ecx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x3cu)));
/* e9c033: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c035: fld dword ptr [edx + 0x18] */
  { double v = F32((uint32_t)(edx + 0x18u)); FPUSH(v); }
/* e9c038: fmul dword ptr [ecx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x2cu)));
/* e9c03b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c03d: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* e9c040: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* e9c043: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c045: fstp dword ptr [esi + 0x1c] */
  WF32((uint32_t)(esi + 0x1cu), ST0); FPOP();
/* e9c048: fld dword ptr [edx + 0x2c] */
  { double v = F32((uint32_t)(edx + 0x2cu)); FPUSH(v); }
/* e9c04b: fmul dword ptr [ecx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x30u)));
/* e9c04e: fld dword ptr [edx + 0x20] */
  { double v = F32((uint32_t)(edx + 0x20u)); FPUSH(v); }
/* e9c051: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9c053: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c055: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* e9c058: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* e9c05b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c05d: fld dword ptr [edx + 0x28] */
  { double v = F32((uint32_t)(edx + 0x28u)); FPUSH(v); }
/* e9c060: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* e9c063: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c065: fstp dword ptr [esi + 0x20] */
  WF32((uint32_t)(esi + 0x20u), ST0); FPOP();
/* e9c068: fld dword ptr [edx + 0x2c] */
  { double v = F32((uint32_t)(edx + 0x2cu)); FPUSH(v); }
/* e9c06b: fmul dword ptr [ecx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x34u)));
/* e9c06e: fld dword ptr [edx + 0x28] */
  { double v = F32((uint32_t)(edx + 0x28u)); FPUSH(v); }
/* e9c071: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* e9c074: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c076: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* e9c079: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* e9c07c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c07e: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* e9c081: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* e9c084: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c086: fstp dword ptr [esi + 0x24] */
  WF32((uint32_t)(esi + 0x24u), ST0); FPOP();
/* e9c089: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* e9c08c: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* e9c08f: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* e9c092: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* e9c095: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c097: fld dword ptr [edx + 0x2c] */
  { double v = F32((uint32_t)(edx + 0x2cu)); FPUSH(v); }
/* e9c09a: fmul dword ptr [ecx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x38u)));
/* e9c09d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c09f: fld dword ptr [edx + 0x28] */
  { double v = F32((uint32_t)(edx + 0x28u)); FPUSH(v); }
/* e9c0a2: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* e9c0a5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c0a7: fstp dword ptr [esi + 0x28] */
  WF32((uint32_t)(esi + 0x28u), ST0); FPOP();
/* e9c0aa: fld dword ptr [edx + 0x2c] */
  { double v = F32((uint32_t)(edx + 0x2cu)); FPUSH(v); }
/* e9c0ad: fmul dword ptr [ecx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x3cu)));
/* e9c0b0: fld dword ptr [edx + 0x28] */
  { double v = F32((uint32_t)(edx + 0x28u)); FPUSH(v); }
/* e9c0b3: fmul dword ptr [ecx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x2cu)));
/* e9c0b6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c0b8: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* e9c0bb: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* e9c0be: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c0c0: fld dword ptr [edx + 0x20] */
  { double v = F32((uint32_t)(edx + 0x20u)); FPUSH(v); }
/* e9c0c3: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* e9c0c6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c0c8: fstp dword ptr [esi + 0x2c] */
  WF32((uint32_t)(esi + 0x2cu), ST0); FPOP();
/* e9c0cb: fld dword ptr [edx + 0x3c] */
  { double v = F32((uint32_t)(edx + 0x3cu)); FPUSH(v); }
/* e9c0ce: fmul dword ptr [ecx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x30u)));
/* e9c0d1: fld dword ptr [edx + 0x30] */
  { double v = F32((uint32_t)(edx + 0x30u)); FPUSH(v); }
/* e9c0d4: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9c0d6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c0d8: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* e9c0db: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* e9c0de: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c0e0: fld dword ptr [edx + 0x38] */
  { double v = F32((uint32_t)(edx + 0x38u)); FPUSH(v); }
/* e9c0e3: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* e9c0e6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c0e8: fstp dword ptr [esi + 0x30] */
  WF32((uint32_t)(esi + 0x30u), ST0); FPOP();
/* e9c0eb: fld dword ptr [edx + 0x3c] */
  { double v = F32((uint32_t)(edx + 0x3cu)); FPUSH(v); }
/* e9c0ee: fmul dword ptr [ecx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x34u)));
/* e9c0f1: fld dword ptr [edx + 0x38] */
  { double v = F32((uint32_t)(edx + 0x38u)); FPUSH(v); }
/* e9c0f4: fmul dword ptr [ecx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x24u)));
/* e9c0f7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c0f9: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* e9c0fc: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9c0fe: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* e9c101: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c103: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* e9c106: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* e9c109: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c10b: fstp dword ptr [esi + 0x34] */
  WF32((uint32_t)(esi + 0x34u), ST0); FPOP();
/* e9c10e: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* e9c111: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* e9c114: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* e9c117: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* e9c11a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c11c: fld dword ptr [edx + 0x3c] */
  { double v = F32((uint32_t)(edx + 0x3cu)); FPUSH(v); }
/* e9c11f: fmul dword ptr [ecx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x38u)));
/* e9c122: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c124: fld dword ptr [edx + 0x38] */
  { double v = F32((uint32_t)(edx + 0x38u)); FPUSH(v); }
/* e9c127: fmul dword ptr [ecx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x28u)));
/* e9c12a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c12c: fstp dword ptr [esi + 0x38] */
  WF32((uint32_t)(esi + 0x38u), ST0); FPOP();
/* e9c12f: fld dword ptr [edx + 0x3c] */
  { double v = F32((uint32_t)(edx + 0x3cu)); FPUSH(v); }
/* e9c132: fmul dword ptr [ecx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x3cu)));
/* e9c135: fld dword ptr [edx + 0x38] */
  { double v = F32((uint32_t)(edx + 0x38u)); FPUSH(v); }
/* e9c138: fmul dword ptr [ecx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x2cu)));
/* e9c13b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c13d: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* e9c140: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* e9c143: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c145: fld dword ptr [edx + 0x30] */
  { double v = F32((uint32_t)(edx + 0x30u)); FPUSH(v); }
/* e9c148: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* e9c14b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c14d: fstp dword ptr [esi + 0x3c] */
  WF32((uint32_t)(esi + 0x3cu), ST0); FPOP();
/* e9c150: je 0xe9c15b */
  if (zf) goto L_e9c15b;
L_e9c152: /* e9c152: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9c153: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e9c155: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9c156: mov edi, eax */
  edi = eax;
/* e9c158: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e9c15a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_e9c15b: /* e9c15b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9c15c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9c15d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e9c160(void) {
  LOAD_REGS();
L_e9c160: /* e9c160: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9c162: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9c167u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9c167: jmp dword ptr [0xeba0ec] */
  { uint32_t t = R32((uint32_t)(0xeba0ecu)); SPILL(); call_ind(t); return; }
}

void f_e9c16d(void) {
  LOAD_REGS();
L_e9c16d: /* e9c16d: jmp dword ptr [0xeba0ec] */
  { uint32_t t = R32((uint32_t)(0xeba0ecu)); SPILL(); call_ind(t); return; }
}

void f_e9c173(void) {
  LOAD_REGS();
L_e9c173: /* e9c173: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e9c177: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* e9c17a: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e9c17e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9c180: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* e9c183: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9c186: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* e9c189: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* e9c18c: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* e9c18f: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* e9c192: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* e9c195: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* e9c198: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* e9c19b: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* e9c19e: fstp dword ptr [eax + 0x30] */
  WF32((uint32_t)(eax + 0x30u), ST0); FPOP();
/* e9c1a1: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* e9c1a4: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* e9c1a7: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* e9c1aa: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* e9c1ad: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* e9c1b0: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* e9c1b3: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* e9c1b6: fstp dword ptr [eax + 0x34] */
  WF32((uint32_t)(eax + 0x34u), ST0); FPOP();
/* e9c1b9: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* e9c1bc: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* e9c1bf: mov dword ptr [eax + 0x2c], edx */
  W32((uint32_t)(eax + 0x2cu), edx);
/* e9c1c2: fstp dword ptr [eax + 0x38] */
  WF32((uint32_t)(eax + 0x38u), ST0); FPOP();
/* e9c1c5: je 0xe9c1dd */
  if (zf) goto L_e9c1dd;
L_e9c1c7: /* e9c1c7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9c1c9: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* e9c1cb: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* e9c1ce: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* e9c1d1: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* e9c1d4: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
/* e9c1d7: mov ecx, dword ptr [ecx + 0x3c] */
  ecx = R32((uint32_t)(ecx + 0x3cu));
/* e9c1da: mov dword ptr [eax + 0x3c], ecx */
  W32((uint32_t)(eax + 0x3cu), ecx);
L_e9c1dd: /* e9c1dd: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e9c1e0(void) {
  LOAD_REGS();
L_e9c1e0: /* e9c1e0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9c1e2: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9c1e7u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9c1e7: jmp dword ptr [0xeba068] */
  { uint32_t t = R32((uint32_t)(0xeba068u)); SPILL(); call_ind(t); return; }
}

void f_e9c1ed(void) {
  LOAD_REGS();
L_e9c1ed: /* e9c1ed: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9c1ee: mov ebp, esp */
  ebp = esp;
/* e9c1f0: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9c1f3: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9c1f6: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e9c1f9: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9c1fb: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e9c1fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9c1ff: je 0xe9c207 */
  if (zf) goto L_e9c207;
L_e9c201: /* e9c201: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9c203: mov esi, eax */
  esi = eax;
/* e9c205: jne 0xe9c20a */
  if (!zf) goto L_e9c20a;
L_e9c207: /* e9c207: lea esi, [ebp - 0x40] */
  esi = (uint32_t)(ebp + 0xffffffc0u);
L_e9c20a: /* e9c20a: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* e9c20d: fmul dword ptr [ecx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x30u)));
/* e9c210: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* e9c212: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9c214: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c216: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* e9c219: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* e9c21c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c21e: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* e9c221: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* e9c224: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c226: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* e9c228: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* e9c22b: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9c22d: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* e9c230: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* e9c233: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c235: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* e9c238: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* e9c23b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c23d: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* e9c240: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* e9c243: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c245: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* e9c248: fld dword ptr [edx + 0x28] */
  { double v = F32((uint32_t)(edx + 0x28u)); FPUSH(v); }
/* e9c24b: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* e9c24e: fld dword ptr [edx + 0x24] */
  { double v = F32((uint32_t)(edx + 0x24u)); FPUSH(v); }
/* e9c251: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* e9c254: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c256: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* e9c259: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* e9c25c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c25e: fld dword ptr [edx + 0x20] */
  { double v = F32((uint32_t)(edx + 0x20u)); FPUSH(v); }
/* e9c261: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9c263: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c265: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* e9c268: fld dword ptr [edx + 0x34] */
  { double v = F32((uint32_t)(edx + 0x34u)); FPUSH(v); }
/* e9c26b: fmul dword ptr [ecx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x10u)));
/* e9c26e: fld dword ptr [edx + 0x3c] */
  { double v = F32((uint32_t)(edx + 0x3cu)); FPUSH(v); }
/* e9c271: fmul dword ptr [ecx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x30u)));
/* e9c274: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c276: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* e9c278: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* e9c27b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c27d: fld dword ptr [edx + 0x38] */
  { double v = F32((uint32_t)(edx + 0x38u)); FPUSH(v); }
/* e9c280: fmul dword ptr [ecx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x20u)));
/* e9c283: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c285: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* e9c288: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* e9c28b: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* e9c28e: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* e9c291: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* e9c293: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c295: fld dword ptr [ecx + 0x34] */
  { double v = F32((uint32_t)(ecx + 0x34u)); FPUSH(v); }
/* e9c298: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* e9c29b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c29d: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* e9c2a0: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* e9c2a3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c2a5: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* e9c2a8: fld dword ptr [ecx + 0x34] */
  { double v = F32((uint32_t)(ecx + 0x34u)); FPUSH(v); }
/* e9c2ab: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* e9c2ae: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* e9c2b1: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* e9c2b4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c2b6: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* e9c2b9: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* e9c2bc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c2be: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* e9c2c1: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9c2c4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c2c6: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* e9c2c9: fld dword ptr [edx + 0x24] */
  { double v = F32((uint32_t)(edx + 0x24u)); FPUSH(v); }
/* e9c2cc: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* e9c2cf: fld dword ptr [ecx + 0x34] */
  { double v = F32((uint32_t)(ecx + 0x34u)); FPUSH(v); }
/* e9c2d2: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* e9c2d5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c2d7: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* e9c2da: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* e9c2dd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c2df: fld dword ptr [edx + 0x20] */
  { double v = F32((uint32_t)(edx + 0x20u)); FPUSH(v); }
/* e9c2e2: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9c2e5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c2e7: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* e9c2ea: fld dword ptr [edx + 0x34] */
  { double v = F32((uint32_t)(edx + 0x34u)); FPUSH(v); }
/* e9c2ed: fmul dword ptr [ecx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x14u)));
/* e9c2f0: fld dword ptr [ecx + 0x34] */
  { double v = F32((uint32_t)(ecx + 0x34u)); FPUSH(v); }
/* e9c2f3: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* e9c2f6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c2f8: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* e9c2fb: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* e9c2fe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c300: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* e9c303: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* e9c306: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c308: fstp dword ptr [esi + 0x1c] */
  WF32((uint32_t)(esi + 0x1cu), ST0); FPOP();
/* e9c30b: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* e9c30e: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* e9c311: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* e9c314: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* e9c316: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c318: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* e9c31b: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* e9c31e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c320: fld dword ptr [ecx + 0x38] */
  { double v = F32((uint32_t)(ecx + 0x38u)); FPUSH(v); }
/* e9c323: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* e9c326: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c328: fstp dword ptr [esi + 0x20] */
  WF32((uint32_t)(esi + 0x20u), ST0); FPOP();
/* e9c32b: fld dword ptr [ecx + 0x38] */
  { double v = F32((uint32_t)(ecx + 0x38u)); FPUSH(v); }
/* e9c32e: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* e9c331: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* e9c334: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* e9c337: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c339: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* e9c33c: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* e9c33f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c341: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* e9c344: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* e9c347: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c349: fstp dword ptr [esi + 0x24] */
  WF32((uint32_t)(esi + 0x24u), ST0); FPOP();
/* e9c34c: fld dword ptr [edx + 0x24] */
  { double v = F32((uint32_t)(edx + 0x24u)); FPUSH(v); }
/* e9c34f: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* e9c352: fld dword ptr [ecx + 0x38] */
  { double v = F32((uint32_t)(ecx + 0x38u)); FPUSH(v); }
/* e9c355: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* e9c358: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c35a: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* e9c35d: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* e9c360: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c362: fld dword ptr [edx + 0x20] */
  { double v = F32((uint32_t)(edx + 0x20u)); FPUSH(v); }
/* e9c365: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* e9c368: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c36a: fstp dword ptr [esi + 0x28] */
  WF32((uint32_t)(esi + 0x28u), ST0); FPOP();
/* e9c36d: fld dword ptr [edx + 0x34] */
  { double v = F32((uint32_t)(edx + 0x34u)); FPUSH(v); }
/* e9c370: fmul dword ptr [ecx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x18u)));
/* e9c373: fld dword ptr [ecx + 0x38] */
  { double v = F32((uint32_t)(ecx + 0x38u)); FPUSH(v); }
/* e9c376: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* e9c379: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c37b: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* e9c37e: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* e9c381: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c383: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* e9c386: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* e9c389: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c38b: fstp dword ptr [esi + 0x2c] */
  WF32((uint32_t)(esi + 0x2cu), ST0); FPOP();
/* e9c38e: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* e9c391: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* e9c394: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* e9c397: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* e9c399: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c39b: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* e9c39e: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* e9c3a1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c3a3: fld dword ptr [ecx + 0x3c] */
  { double v = F32((uint32_t)(ecx + 0x3cu)); FPUSH(v); }
/* e9c3a6: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* e9c3a9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c3ab: fstp dword ptr [esi + 0x30] */
  WF32((uint32_t)(esi + 0x30u), ST0); FPOP();
/* e9c3ae: fld dword ptr [ecx + 0x3c] */
  { double v = F32((uint32_t)(ecx + 0x3cu)); FPUSH(v); }
/* e9c3b1: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* e9c3b4: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* e9c3b7: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* e9c3ba: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c3bc: fld dword ptr [edx + 0x14] */
  { double v = F32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* e9c3bf: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9c3c1: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* e9c3c4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c3c6: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* e9c3c9: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* e9c3cc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c3ce: fstp dword ptr [esi + 0x34] */
  WF32((uint32_t)(esi + 0x34u), ST0); FPOP();
/* e9c3d1: fld dword ptr [edx + 0x24] */
  { double v = F32((uint32_t)(edx + 0x24u)); FPUSH(v); }
/* e9c3d4: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* e9c3d7: fld dword ptr [ecx + 0x3c] */
  { double v = F32((uint32_t)(ecx + 0x3cu)); FPUSH(v); }
/* e9c3da: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* e9c3dd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c3df: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* e9c3e2: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* e9c3e5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c3e7: fld dword ptr [edx + 0x20] */
  { double v = F32((uint32_t)(edx + 0x20u)); FPUSH(v); }
/* e9c3ea: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* e9c3ed: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c3ef: fstp dword ptr [esi + 0x38] */
  WF32((uint32_t)(esi + 0x38u), ST0); FPOP();
/* e9c3f2: fld dword ptr [edx + 0x34] */
  { double v = F32((uint32_t)(edx + 0x34u)); FPUSH(v); }
/* e9c3f5: fmul dword ptr [ecx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x1cu)));
/* e9c3f8: fld dword ptr [ecx + 0x3c] */
  { double v = F32((uint32_t)(ecx + 0x3cu)); FPUSH(v); }
/* e9c3fb: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* e9c3fe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c400: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* e9c403: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* e9c406: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c408: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* e9c40b: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* e9c40e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c410: fstp dword ptr [esi + 0x3c] */
  WF32((uint32_t)(esi + 0x3cu), ST0); FPOP();
/* e9c413: je 0xe9c41e */
  if (zf) goto L_e9c41e;
L_e9c415: /* e9c415: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9c416: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e9c418: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9c419: mov edi, eax */
  edi = eax;
/* e9c41b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e9c41d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_e9c41e: /* e9c41e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9c41f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9c420: ret 0xc */
  esp += 16; SPILL(); return;
}
