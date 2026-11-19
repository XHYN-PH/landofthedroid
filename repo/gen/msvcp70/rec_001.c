#include "recomp.h"
#include "rec_mod.h"

void f_465010(void) {
  LOAD_REGS();
L_465010: /* 465010: mov eax, 0x48bf7e */
  eax = 0x48bf7eu;
/* 465015: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46501au); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46501a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46501b: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46501e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 465020: je 0x465049 */
  if (zf) goto L_465049;
L_465022: /* 465022: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 465025: jne 0x465049 */
  if (!zf) goto L_465049;
L_465027: /* 465027: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 465029: call 0x4620da */
  esp -= 4; W32(esp, 0x46502eu); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 46502e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46502f: mov ecx, eax */
  ecx = eax;
/* 465031: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 465034: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 465038: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46503a: je 0x465045 */
  if (zf) goto L_465045;
L_46503c: /* 46503c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46503e: call 0x464f9a */
  esp -= 4; W32(esp, 0x465043u); SPILL(); f_464f9a(); if (g_unwind) return; RELOAD();
/* 465043: jmp 0x465047 */
  goto L_465047;
L_465045: /* 465045: xor eax, eax */
  eax = 0;
L_465047: /* 465047: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_465049: /* 465049: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46504c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 46504e: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 46504f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465050: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 465057: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 465058: ret  */
  esp += 4; SPILL(); return;
}

void f_465059(void) {
  LOAD_REGS();
L_465059: /* 465059: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46505b: call 0x464f9a */
  esp -= 4; W32(esp, 0x465060u); SPILL(); f_464f9a(); if (g_unwind) return; RELOAD();
/* 465060: ret  */
  esp += 4; SPILL(); return;
}

void f_465061(void) {
  LOAD_REGS();
L_465061: /* 465061: mov eax, 0x48c0dc */
  eax = 0x48c0dcu;
/* 465066: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46506bu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46506b: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46506e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 465071: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 465072: mov esi, ecx */
  esi = ecx;
/* 465074: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 465077: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 46507a: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46507e: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 465083: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 465089: mov dword ptr [esi], 0x4c6bec */
  W32((uint32_t)(esi), 0x4c6becu);
/* 46508f: call 0x488f1b */
  esp -= 4; W32(esp, 0x465094u); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 465094: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465095: mov ecx, esi */
  ecx = esi;
/* 465097: call 0x46471a */
  esp -= 4; W32(esp, 0x46509cu); SPILL(); f_46471a(); if (g_unwind) return; RELOAD();
/* 46509c: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 4650a2: call 0x488e1d */
  esp -= 4; W32(esp, 0x4650a7u); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 4650a7: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4650aa: mov eax, esi */
  eax = esi;
/* 4650ac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4650ad: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4650b4: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4650b5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4650b8(void) {
  LOAD_REGS();
L_4650b8: /* 4650b8: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4650bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4650bd: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4650c1: mov esi, ecx */
  esi = ecx;
/* 4650c3: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4650c6: mov dword ptr [esi], 0x4c6bec */
  W32((uint32_t)(esi), 0x4c6becu);
/* 4650cc: call 0x46471a */
  esp -= 4; W32(esp, 0x4650d1u); SPILL(); f_46471a(); if (g_unwind) return; RELOAD();
/* 4650d1: mov eax, esi */
  eax = esi;
/* 4650d3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4650d4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4650d7(void) {
  LOAD_REGS();
L_4650d7: /* 4650d7: mov eax, 0x48bf7e */
  eax = 0x48bf7eu;
/* 4650dc: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4650e1u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4650e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4650e2: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4650e5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4650e7: je 0x465110 */
  if (zf) goto L_465110;
L_4650e9: /* 4650e9: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4650ec: jne 0x465110 */
  if (!zf) goto L_465110;
L_4650ee: /* 4650ee: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 4650f0: call 0x4620da */
  esp -= 4; W32(esp, 0x4650f5u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 4650f5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4650f6: mov ecx, eax */
  ecx = eax;
/* 4650f8: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 4650fb: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4650ff: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 465101: je 0x46510c */
  if (zf) goto L_46510c;
L_465103: /* 465103: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 465105: call 0x465061 */
  esp -= 4; W32(esp, 0x46510au); SPILL(); f_465061(); if (g_unwind) return; RELOAD();
/* 46510a: jmp 0x46510e */
  goto L_46510e;
L_46510c: /* 46510c: xor eax, eax */
  eax = 0;
L_46510e: /* 46510e: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_465110: /* 465110: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 465113: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 465115: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 465116: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465117: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46511e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46511f: ret  */
  esp += 4; SPILL(); return;
}

void f_465120(void) {
  LOAD_REGS();
L_465120: /* 465120: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 465122: call 0x465061 */
  esp -= 4; W32(esp, 0x465127u); SPILL(); f_465061(); if (g_unwind) return; RELOAD();
/* 465127: ret  */
  esp += 4; SPILL(); return;
}

void f_465128(void) {
  LOAD_REGS();
L_465128: /* 465128: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 46512b: and al, 6 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x6u);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 46512d: neg al */
  { uint8_t a = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 46512f: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 465131: not eax */
  eax = ~eax;
/* 465133: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 465135: ret  */
  esp += 4; SPILL(); return;
}

void f_465136(void) {
  LOAD_REGS();
L_465136: /* 465136: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 465138: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46513b: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46513e: mov dword ptr [eax + ecx - 4], 0x4c6cc0 */
  W32((uint32_t)(eax + ecx + 0xfffffffcu), 0x4c6cc0u);
/* 465146: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
}

void f_46514b(void) {
  LOAD_REGS();
L_46514b: /* 46514b: cmp dword ptr [ecx + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46514f: jb 0x465156 */
  if (cf) goto L_465156;
L_465151: /* 465151: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 465154: jmp 0x465159 */
  goto L_465159;
L_465156: /* 465156: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_465159: /* 465159: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46515d: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 46515f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_465162(void) {
  LOAD_REGS();
L_465162: /* 465162: cmp dword ptr [ecx + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 465166: jb 0x46516d */
  if (cf) goto L_46516d;
L_465168: /* 465168: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 46516b: jmp 0x465170 */
  goto L_465170;
L_46516d: /* 46516d: lea eax, [ecx + 4] */
  eax = (uint32_t)(ecx + 0x4u);
L_465170: /* 465170: mov ecx, dword ptr [ecx + 0x14] */
  ecx = R32((uint32_t)(ecx + 0x14u));
/* 465173: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 465175: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 465179: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 46517b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46517e(void) {
  LOAD_REGS();
L_46517e: /* 46517e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46517f: mov ebp, esp */
  ebp = esp;
/* 465181: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 465182: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 465185: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465186: call 0x465162 */
  esp -= 4; W32(esp, 0x46518bu); SPILL(); f_465162(); if (g_unwind) return; RELOAD();
/* 46518b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46518d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 465190: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 465192: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 465193: ret 4 */
  esp += 8; SPILL(); return;
}

void f_465196(void) {
  LOAD_REGS();
L_465196: /* 465196: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 465197: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 465198: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 46519c: mov esi, ecx */
  esi = ecx;
/* 46519e: cmp dword ptr [esi + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4651a1: ja 0x4651a8 */
  if ((!cf && !zf)) goto L_4651a8;
L_4651a3: /* 4651a3: call 0x487763 */
  esp -= 4; W32(esp, 0x4651a8u); SPILL(); f_487763(); if (g_unwind) return; RELOAD();
L_4651a8: /* 4651a8: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4651ac: jb 0x4651b3 */
  if (cf) goto L_4651b3;
L_4651ae: /* 4651ae: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 4651b1: jmp 0x4651b6 */
  goto L_4651b6;
L_4651b3: /* 4651b3: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_4651b6: /* 4651b6: lea eax, [esi + edi] */
  eax = (uint32_t)(esi + edi);
/* 4651b9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4651ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4651bb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4651be(void) {
  LOAD_REGS();
L_4651be: /* 4651be: cmp dword ptr [ecx + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4651c2: jb 0x4651c8 */
  if (cf) goto L_4651c8;
L_4651c4: /* 4651c4: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 4651c7: ret  */
  esp += 4; SPILL(); return;
L_4651c8: /* 4651c8: lea eax, [ecx + 4] */
  eax = (uint32_t)(ecx + 0x4u);
/* 4651cb: ret  */
  esp += 4; SPILL(); return;
}

void f_4651cc(void) {
  LOAD_REGS();
L_4651cc: /* 4651cc: push -2 */
  { uint32_t v = 0xfffffffeu; esp -= 4; W32(esp, v); }
/* 4651ce: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 4651cf: ret  */
  esp += 4; SPILL(); return;
}

void f_4651d0(void) {
  LOAD_REGS();
L_4651d0: /* 4651d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4651d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4651d2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4651d3: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 4651d7: mov esi, ecx */
  esi = ecx;
/* 4651d9: cmp dword ptr [esi + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4651dc: jae 0x4651e3 */
  if (!cf) goto L_4651e3;
L_4651de: /* 4651de: call 0x487763 */
  esp -= 4; W32(esp, 0x4651e3u); SPILL(); f_487763(); if (g_unwind) return; RELOAD();
L_4651e3: /* 4651e3: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 4651e6: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 4651ea: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4651ec: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4651ee: jae 0x4651f2 */
  if (!cf) goto L_4651f2;
L_4651f0: /* 4651f0: mov ebx, eax */
  ebx = eax;
L_4651f2: /* 4651f2: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4651f6: jb 0x4651fd */
  if (cf) goto L_4651fd;
L_4651f8: /* 4651f8: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 4651fb: jmp 0x465200 */
  goto L_465200;
L_4651fd: /* 4651fd: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_465200: /* 465200: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 465201: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 465203: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 465204: push dword ptr [esp + 0x18] */
  { uint32_t v = R32((uint32_t)(esp + 0x18u)); esp -= 4; W32(esp, v); }
/* 465208: call 0x4617bb */
  esp -= 4; W32(esp, 0x46520du); SPILL(); hle_memcpy(); RELOAD();
/* 46520d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 465210: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 465211: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465212: mov eax, ebx */
  eax = ebx;
/* 465214: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 465215: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_465218(void) {
  LOAD_REGS();
L_465218: /* 465218: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 465219: mov ebp, esp */
  ebp = esp;
/* 46521b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46521c: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 465220: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 465223: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 465226: jne 0x46522d */
  if (!zf) goto L_46522d;
L_465228: /* 465228: cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 46522b: jbe 0x465296 */
  if ((cf | zf)) goto L_465296;
L_46522d: /* 46522d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46522e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46522f: mov esi, dword ptr [ecx + 0x14] */
  esi = R32((uint32_t)(ecx + 0x14u));
/* 465232: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 465234: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 465235: jae 0x465290 */
  if (!cf) goto L_465290;
L_465237: /* 465237: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 465239: cmp dword ptr [ebp + 0x10], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 46523c: ja 0x465290 */
  if ((!cf && !zf)) goto L_465290;
L_46523e: /* 46523e: xor edx, edx */
  edx = 0;
/* 465240: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 465241: sub edx, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 465244: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 465246: cmp dword ptr [ecx + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46524a: jb 0x465256 */
  if (cf) goto L_465256;
L_46524c: /* 46524c: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46524f: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 465252: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 465254: jmp 0x46525c */
  goto L_46525c;
L_465256: /* 465256: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 465259: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
L_46525c: /* 46525c: lea ebx, [ecx + eax] */
  ebx = (uint32_t)(ecx + eax);
/* 46525f: jmp 0x46527d */
  goto L_46527d;
L_465261: /* 465261: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 465264: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 465267: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 465268: call 0x48bd70 */
  esp -= 4; W32(esp, 0x46526du); SPILL(); f_48bd70(); if (g_unwind) return; RELOAD();
/* 46526d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 465270: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 465272: je 0x46529a */
  if (zf) goto L_46529a;
L_465274: /* 465274: sub ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 465276: lea esi, [esi + ebx - 1] */
  esi = (uint32_t)(esi + ebx + 0xffffffffu);
/* 46527a: lea ebx, [edi + 1] */
  ebx = (uint32_t)(edi + 0x1u);
L_46527d: /* 46527d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 465280: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 465281: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 465282: call 0x463f00 */
  esp -= 4; W32(esp, 0x465287u); SPILL(); f_463f00(); if (g_unwind) return; RELOAD();
/* 465287: mov edi, eax */
  edi = eax;
/* 465289: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46528c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46528e: jne 0x465261 */
  if (!zf) goto L_465261;
L_465290: /* 465290: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_465293: /* 465293: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 465294: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465295: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_465296: /* 465296: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 465297: ret 0xc */
  esp += 16; SPILL(); return;
L_46529a: /* 46529a: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 46529d: cmp dword ptr [eax + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4652a1: jb 0x4652aa */
  if (cf) goto L_4652aa;
L_4652a3: /* 4652a3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4652a6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4652a8: jmp 0x4652ad */
  goto L_4652ad;
L_4652aa: /* 4652aa: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
L_4652ad: /* 4652ad: mov eax, edi */
  eax = edi;
/* 4652af: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4652b1: jmp 0x465293 */
  goto L_465293;
}

void f_4652b3(void) {
  LOAD_REGS();
L_4652b3: /* 4652b3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4652b4: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4652b8: mov esi, ecx */
  esi = ecx;
/* 4652ba: call 0x461028 */
  esp -= 4; W32(esp, 0x4652bfu); SPILL(); hle_strlen(); RELOAD();
/* 4652bf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4652c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4652c1: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4652c5: mov ecx, esi */
  ecx = esi;
/* 4652c7: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4652cb: call 0x465218 */
  esp -= 4; W32(esp, 0x4652d0u); SPILL(); f_465218(); if (g_unwind) return; RELOAD();
/* 4652d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4652d1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4652d4(void) {
  LOAD_REGS();
L_4652d4: /* 4652d4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4652d6: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4652da: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 4652de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4652df: call 0x465218 */
  esp -= 4; W32(esp, 0x4652e4u); SPILL(); f_465218(); if (g_unwind) return; RELOAD();
/* 4652e4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4652e7(void) {
  LOAD_REGS();
L_4652e7: /* 4652e7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4652e8: mov ebp, esp */
  ebp = esp;
/* 4652ea: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4652ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4652ef: mov esi, ecx */
  esi = ecx;
/* 4652f1: jne 0x465301 */
  if (!zf) goto L_465301;
L_4652f3: /* 4652f3: mov esi, dword ptr [esi + 0x14] */
  esi = R32((uint32_t)(esi + 0x14u));
/* 4652f6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4652f9: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4652fb: jb 0x465369 */
  if (cf) goto L_465369;
L_4652fd: /* 4652fd: mov eax, esi */
  eax = esi;
/* 4652ff: jmp 0x465369 */
  goto L_465369;
L_465301: /* 465301: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 465304: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 465307: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 465308: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 465309: ja 0x465364 */
  if ((!cf && !zf)) goto L_465364;
L_46530b: /* 46530b: sub eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46530e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 465311: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 465313: jb 0x465317 */
  if (cf) goto L_465317;
L_465315: /* 465315: mov ecx, eax */
  ecx = eax;
L_465317: /* 465317: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46531b: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* 46531e: jb 0x465324 */
  if (cf) goto L_465324;
L_465320: /* 465320: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 465322: jmp 0x465326 */
  goto L_465326;
L_465324: /* 465324: mov eax, edi */
  eax = edi;
L_465326: /* 465326: lea ebx, [ecx + eax] */
  ebx = (uint32_t)(ecx + eax);
L_465329: /* 465329: mov cl, byte ptr [ebx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx))) & 0xffu);
/* 46532b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46532e: cmp cl, byte ptr [eax] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(eax)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 465330: jne 0x465343 */
  if (!zf) goto L_465343;
L_465332: /* 465332: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 465335: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465336: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 465337: call 0x48bd70 */
  esp -= 4; W32(esp, 0x46533cu); SPILL(); f_48bd70(); if (g_unwind) return; RELOAD();
/* 46533c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46533f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 465341: je 0x465356 */
  if (zf) goto L_465356;
L_465343: /* 465343: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 465347: jb 0x46534d */
  if (cf) goto L_46534d;
L_465349: /* 465349: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 46534b: jmp 0x46534f */
  goto L_46534f;
L_46534d: /* 46534d: mov eax, edi */
  eax = edi;
L_46534f: /* 46534f: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 465351: je 0x465364 */
  if (zf) goto L_465364;
L_465353: /* 465353: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 465354: jmp 0x465329 */
  goto L_465329;
L_465356: /* 465356: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46535a: jb 0x46535e */
  if (cf) goto L_46535e;
L_46535c: /* 46535c: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
L_46535e: /* 46535e: mov eax, ebx */
  eax = ebx;
/* 465360: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 465362: jmp 0x465367 */
  goto L_465367;
L_465364: /* 465364: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_465367: /* 465367: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 465368: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_465369: /* 465369: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46536a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46536b: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_46536e(void) {
  LOAD_REGS();
L_46536e: /* 46536e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46536f: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 465373: mov esi, ecx */
  esi = ecx;
/* 465375: call 0x461028 */
  esp -= 4; W32(esp, 0x46537au); SPILL(); hle_strlen(); RELOAD();
/* 46537a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46537b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46537c: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 465380: mov ecx, esi */
  ecx = esi;
/* 465382: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 465386: call 0x4652e7 */
  esp -= 4; W32(esp, 0x46538bu); SPILL(); f_4652e7(); if (g_unwind) return; RELOAD();
/* 46538b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46538c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46538f(void) {
  LOAD_REGS();
L_46538f: /* 46538f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 465391: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 465395: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 465399: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46539a: call 0x4652e7 */
  esp -= 4; W32(esp, 0x46539fu); SPILL(); f_4652e7(); if (g_unwind) return; RELOAD();
/* 46539f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4653a2(void) {
  LOAD_REGS();
L_4653a2: /* 4653a2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4653a3: mov ebp, esp */
  ebp = esp;
/* 4653a5: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4653a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4653aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4653ab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4653ac: mov edi, ecx */
  edi = ecx;
/* 4653ae: jbe 0x4653fa */
  if ((cf | zf)) goto L_4653fa;
L_4653b0: /* 4653b0: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 4653b3: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 4653b6: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4653b8: jae 0x4653fa */
  if (!cf) goto L_4653fa;
L_4653ba: /* 4653ba: mov edx, dword ptr [edi + 0x18] */
  edx = R32((uint32_t)(edi + 0x18u));
/* 4653bd: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4653c0: lea esi, [edi + 4] */
  esi = (uint32_t)(edi + 0x4u);
/* 4653c3: jb 0x4653c9 */
  if (cf) goto L_4653c9;
L_4653c5: /* 4653c5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4653c7: jmp 0x4653cb */
  goto L_4653cb;
L_4653c9: /* 4653c9: mov eax, esi */
  eax = esi;
L_4653cb: /* 4653cb: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4653cd: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4653d0: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 4653d3: jb 0x4653d9 */
  if (cf) goto L_4653d9;
L_4653d5: /* 4653d5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4653d7: jmp 0x4653db */
  goto L_4653db;
L_4653d9: /* 4653d9: mov eax, esi */
  eax = esi;
L_4653db: /* 4653db: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 4653dd: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4653df: jae 0x4653fa */
  if (!cf) goto L_4653fa;
L_4653e1: /* 4653e1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4653e2: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4653e5: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4653e8: call 0x463f00 */
  esp -= 4; W32(esp, 0x4653edu); SPILL(); f_463f00(); if (g_unwind) return; RELOAD();
/* 4653ed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4653f0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4653f2: jne 0x465404 */
  if (!zf) goto L_465404;
L_4653f4: /* 4653f4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4653f5: cmp ebx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4653f8: jb 0x4653e1 */
  if (cf) goto L_4653e1;
L_4653fa: /* 4653fa: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_4653fd: /* 4653fd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4653fe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4653ff: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 465400: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 465401: ret 0xc */
  esp += 16; SPILL(); return;
L_465404: /* 465404: cmp dword ptr [edi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 465408: jb 0x46540c */
  if (cf) goto L_46540c;
L_46540a: /* 46540a: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
L_46540c: /* 46540c: mov eax, ebx */
  eax = ebx;
/* 46540e: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 465410: jmp 0x4653fd */
  goto L_4653fd;
}

void f_465412(void) {
  LOAD_REGS();
L_465412: /* 465412: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 465413: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 465417: mov esi, ecx */
  esi = ecx;
/* 465419: call 0x461028 */
  esp -= 4; W32(esp, 0x46541eu); SPILL(); hle_strlen(); RELOAD();
/* 46541e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46541f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465420: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 465424: mov ecx, esi */
  ecx = esi;
/* 465426: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46542a: call 0x4653a2 */
  esp -= 4; W32(esp, 0x46542fu); SPILL(); f_4653a2(); if (g_unwind) return; RELOAD();
/* 46542f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465430: ret 8 */
  esp += 12; SPILL(); return;
}

void f_465433(void) {
  LOAD_REGS();
L_465433: /* 465433: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 465434: mov ebp, esp */
  ebp = esp;
/* 465436: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 46543a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46543b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46543c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46543d: mov edi, ecx */
  edi = ecx;
/* 46543f: jbe 0x465498 */
  if ((cf | zf)) goto L_465498;
L_465441: /* 465441: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 465444: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 465446: jbe 0x465498 */
  if ((cf | zf)) goto L_465498;
L_465448: /* 465448: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 46544b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46544d: jb 0x465452 */
  if (cf) goto L_465452;
L_46544f: /* 46544f: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
L_465452: /* 465452: cmp dword ptr [edi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 465456: lea esi, [edi + 4] */
  esi = (uint32_t)(edi + 0x4u);
/* 465459: jb 0x46545f */
  if (cf) goto L_46545f;
L_46545b: /* 46545b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46545d: jmp 0x465461 */
  goto L_465461;
L_46545f: /* 46545f: mov eax, esi */
  eax = esi;
L_465461: /* 465461: lea ebx, [ecx + eax] */
  ebx = (uint32_t)(ecx + eax);
/* 465464: jmp 0x465477 */
  goto L_465477;
L_465466: /* 465466: cmp dword ptr [edi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46546a: jb 0x465470 */
  if (cf) goto L_465470;
L_46546c: /* 46546c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46546e: jmp 0x465472 */
  goto L_465472;
L_465470: /* 465470: mov eax, esi */
  eax = esi;
L_465472: /* 465472: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 465474: je 0x465498 */
  if (zf) goto L_465498;
L_465476: /* 465476: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
L_465477: /* 465477: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 465478: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46547b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46547e: call 0x463f00 */
  esp -= 4; W32(esp, 0x465483u); SPILL(); f_463f00(); if (g_unwind) return; RELOAD();
/* 465483: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 465486: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 465488: je 0x465466 */
  if (zf) goto L_465466;
L_46548a: /* 46548a: cmp dword ptr [edi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46548e: jb 0x465492 */
  if (cf) goto L_465492;
L_465490: /* 465490: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
L_465492: /* 465492: mov eax, ebx */
  eax = ebx;
/* 465494: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 465496: jmp 0x46549b */
  goto L_46549b;
L_465498: /* 465498: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_46549b: /* 46549b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46549c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46549d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46549e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46549f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4654a2(void) {
  LOAD_REGS();
L_4654a2: /* 4654a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4654a3: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4654a7: mov esi, ecx */
  esi = ecx;
/* 4654a9: call 0x461028 */
  esp -= 4; W32(esp, 0x4654aeu); SPILL(); hle_strlen(); RELOAD();
/* 4654ae: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4654af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4654b0: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4654b4: mov ecx, esi */
  ecx = esi;
/* 4654b6: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4654ba: call 0x465433 */
  esp -= 4; W32(esp, 0x4654bfu); SPILL(); f_465433(); if (g_unwind) return; RELOAD();
/* 4654bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4654c0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4654c3(void) {
  LOAD_REGS();
L_4654c3: /* 4654c3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4654c4: mov ebp, esp */
  ebp = esp;
/* 4654c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4654c7: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 4654ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4654cb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4654cc: mov edi, ecx */
  edi = ecx;
/* 4654ce: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 4654d1: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4654d3: jae 0x465515 */
  if (!cf) goto L_465515;
L_4654d5: /* 4654d5: mov edx, dword ptr [edi + 0x18] */
  edx = R32((uint32_t)(edi + 0x18u));
/* 4654d8: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4654db: lea esi, [edi + 4] */
  esi = (uint32_t)(edi + 0x4u);
/* 4654de: jb 0x4654e4 */
  if (cf) goto L_4654e4;
L_4654e0: /* 4654e0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4654e2: jmp 0x4654e6 */
  goto L_4654e6;
L_4654e4: /* 4654e4: mov eax, esi */
  eax = esi;
L_4654e6: /* 4654e6: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4654e8: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4654eb: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 4654ee: jb 0x4654f4 */
  if (cf) goto L_4654f4;
L_4654f0: /* 4654f0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4654f2: jmp 0x4654f6 */
  goto L_4654f6;
L_4654f4: /* 4654f4: mov eax, esi */
  eax = esi;
L_4654f6: /* 4654f6: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 4654f8: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4654fa: jae 0x465515 */
  if (!cf) goto L_465515;
L_4654fc: /* 4654fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4654fd: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 465500: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 465503: call 0x463f00 */
  esp -= 4; W32(esp, 0x465508u); SPILL(); f_463f00(); if (g_unwind) return; RELOAD();
/* 465508: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46550b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46550d: je 0x46551f */
  if (zf) goto L_46551f;
L_46550f: /* 46550f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 465510: cmp ebx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 465513: jb 0x4654fc */
  if (cf) goto L_4654fc;
L_465515: /* 465515: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_465518: /* 465518: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 465519: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46551a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46551b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46551c: ret 0xc */
  esp += 16; SPILL(); return;
L_46551f: /* 46551f: cmp dword ptr [edi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 465523: jb 0x465527 */
  if (cf) goto L_465527;
L_465525: /* 465525: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
L_465527: /* 465527: mov eax, ebx */
  eax = ebx;
/* 465529: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46552b: jmp 0x465518 */
  goto L_465518;
}

void f_46552d(void) {
  LOAD_REGS();
L_46552d: /* 46552d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46552e: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 465532: mov esi, ecx */
  esi = ecx;
/* 465534: call 0x461028 */
  esp -= 4; W32(esp, 0x465539u); SPILL(); hle_strlen(); RELOAD();
/* 465539: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46553a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46553b: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46553f: mov ecx, esi */
  ecx = esi;
/* 465541: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 465545: call 0x4654c3 */
  esp -= 4; W32(esp, 0x46554au); SPILL(); f_4654c3(); if (g_unwind) return; RELOAD();
/* 46554a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46554b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46554e(void) {
  LOAD_REGS();
L_46554e: /* 46554e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 465550: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 465554: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 465558: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465559: call 0x4654c3 */
  esp -= 4; W32(esp, 0x46555eu); SPILL(); f_4654c3(); if (g_unwind) return; RELOAD();
/* 46555e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_465561(void) {
  LOAD_REGS();
L_465561: /* 465561: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 465562: mov ebp, esp */
  ebp = esp;
/* 465564: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 465565: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 465566: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 465567: mov edi, ecx */
  edi = ecx;
/* 465569: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 46556c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 46556e: jbe 0x4655c0 */
  if ((cf | zf)) goto L_4655c0;
L_465570: /* 465570: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 465573: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 465575: jb 0x46557a */
  if (cf) goto L_46557a;
L_465577: /* 465577: lea ecx, [eax - 1] */
  ecx = (uint32_t)(eax + 0xffffffffu);
L_46557a: /* 46557a: cmp dword ptr [edi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46557e: lea esi, [edi + 4] */
  esi = (uint32_t)(edi + 0x4u);
/* 465581: jb 0x465587 */
  if (cf) goto L_465587;
L_465583: /* 465583: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 465585: jmp 0x465589 */
  goto L_465589;
L_465587: /* 465587: mov eax, esi */
  eax = esi;
L_465589: /* 465589: lea ebx, [ecx + eax] */
  ebx = (uint32_t)(ecx + eax);
/* 46558c: jmp 0x46559f */
  goto L_46559f;
L_46558e: /* 46558e: cmp dword ptr [edi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 465592: jb 0x465598 */
  if (cf) goto L_465598;
L_465594: /* 465594: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 465596: jmp 0x46559a */
  goto L_46559a;
L_465598: /* 465598: mov eax, esi */
  eax = esi;
L_46559a: /* 46559a: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46559c: je 0x4655c0 */
  if (zf) goto L_4655c0;
L_46559e: /* 46559e: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
L_46559f: /* 46559f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4655a0: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4655a3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4655a6: call 0x463f00 */
  esp -= 4; W32(esp, 0x4655abu); SPILL(); f_463f00(); if (g_unwind) return; RELOAD();
/* 4655ab: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4655ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4655b0: jne 0x46558e */
  if (!zf) goto L_46558e;
L_4655b2: /* 4655b2: cmp dword ptr [edi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4655b6: jb 0x4655ba */
  if (cf) goto L_4655ba;
L_4655b8: /* 4655b8: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
L_4655ba: /* 4655ba: mov eax, ebx */
  eax = ebx;
/* 4655bc: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4655be: jmp 0x4655c3 */
  goto L_4655c3;
L_4655c0: /* 4655c0: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_4655c3: /* 4655c3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4655c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4655c5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4655c6: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4655c7: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4655ca(void) {
  LOAD_REGS();
L_4655ca: /* 4655ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4655cb: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4655cf: mov esi, ecx */
  esi = ecx;
/* 4655d1: call 0x461028 */
  esp -= 4; W32(esp, 0x4655d6u); SPILL(); hle_strlen(); RELOAD();
/* 4655d6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4655d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4655d8: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4655dc: mov ecx, esi */
  ecx = esi;
/* 4655de: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4655e2: call 0x465561 */
  esp -= 4; W32(esp, 0x4655e7u); SPILL(); f_465561(); if (g_unwind) return; RELOAD();
/* 4655e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4655e8: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4655eb(void) {
  LOAD_REGS();
L_4655eb: /* 4655eb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4655ed: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4655f1: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 4655f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4655f6: call 0x465561 */
  esp -= 4; W32(esp, 0x4655fbu); SPILL(); f_465561(); if (g_unwind) return; RELOAD();
/* 4655fb: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4655fe(void) {
  LOAD_REGS();
L_4655fe: /* 4655fe: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4655ff: mov ebp, esp */
  ebp = esp;
/* 465601: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 465602: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 465603: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 465604: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 465607: mov esi, ecx */
  esi = ecx;
/* 465609: cmp dword ptr [esi + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46560c: jae 0x465613 */
  if (!cf) goto L_465613;
L_46560e: /* 46560e: call 0x487763 */
  esp -= 4; W32(esp, 0x465613u); SPILL(); f_487763(); if (g_unwind) return; RELOAD();
L_465613: /* 465613: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 465616: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 465619: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46561b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46561d: jae 0x465621 */
  if (!cf) goto L_465621;
L_46561f: /* 46561f: mov ebx, eax */
  ebx = eax;
L_465621: /* 465621: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 465623: je 0x46564f */
  if (zf) goto L_46564f;
L_465625: /* 465625: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 465628: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46562a: jae 0x46562e */
  if (!cf) goto L_46562e;
L_46562c: /* 46562c: mov ecx, ebx */
  ecx = ebx;
L_46562e: /* 46562e: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 465632: jb 0x465639 */
  if (cf) goto L_465639;
L_465634: /* 465634: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 465637: jmp 0x46563c */
  goto L_46563c;
L_465639: /* 465639: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_46563c: /* 46563c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46563d: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 465640: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 465642: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465643: call 0x48bd70 */
  esp -= 4; W32(esp, 0x465648u); SPILL(); f_48bd70(); if (g_unwind) return; RELOAD();
/* 465648: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46564b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46564d: jne 0x465661 */
  if (!zf) goto L_465661;
L_46564f: /* 46564f: cmp ebx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 465652: jae 0x465659 */
  if (!cf) goto L_465659;
L_465654: /* 465654: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 465657: jmp 0x465661 */
  goto L_465661;
L_465659: /* 465659: xor eax, eax */
  eax = 0;
/* 46565b: cmp ebx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46565e: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
L_465661: /* 465661: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 465662: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465663: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 465664: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 465665: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_465668(void) {
  LOAD_REGS();
L_465668: /* 465668: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46566c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46566e: jne 0x465671 */
  if (!zf) goto L_465671;
L_465670: /* 465670: ret  */
  esp += 4; SPILL(); return;
L_465671: /* 465671: sub eax, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 465675: ret  */
  esp += 4; SPILL(); return;
}

void f_465676(void) {
  LOAD_REGS();
L_465676: /* 465676: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 465679: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46567c(void) {
  LOAD_REGS();
L_46567c: /* 46567c: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 46567f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 465681: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 465683: je 0x465694 */
  if (zf) goto L_465694;
L_465685: /* 465685: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 465688: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 46568a: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 46568c: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46568e: jae 0x465694 */
  if (!cf) goto L_465694;
L_465690: /* 465690: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 465693: ret  */
  esp += 4; SPILL(); return;
L_465694: /* 465694: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 465696: jmp dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); SPILL(); call_ind(t); return; }
}

void f_465699(void) {
  LOAD_REGS();
L_465699: /* 465699: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46569a: mov esi, ecx */
  esi = ecx;
/* 46569c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46569e: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x4656a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4656a1: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4656a4: jne 0x4656aa */
  if (!zf) goto L_4656aa;
L_4656a6: /* 4656a6: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4656a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4656a9: ret  */
  esp += 4; SPILL(); return;
L_4656aa: /* 4656aa: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 4656ad: dec dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax), r);
  }
/* 4656af: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4656b2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4656b4: lea edx, [ecx + 1] */
  edx = (uint32_t)(ecx + 0x1u);
/* 4656b7: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4656b9: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 4656bc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4656bd: ret  */
  esp += 4; SPILL(); return;
}

void f_4656be(void) {
  LOAD_REGS();
L_4656be: /* 4656be: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4656bf: mov ebp, esp */
  ebp = esp;
/* 4656c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4656c2: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4656c6: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4656ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4656cb: mov edi, ecx */
  edi = ecx;
/* 4656cd: jle 0x46572a */
  if ((zf || sf != of)) goto L_46572a;
L_4656cf: /* 4656cf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4656d0: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 4656d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_4656d4: /* 4656d4: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 4656d7: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4656d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4656db: je 0x46570d */
  if (zf) goto L_46570d;
L_4656dd: /* 4656dd: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 4656e0: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4656e2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4656e4: jle 0x46570d */
  if ((zf || sf != of)) goto L_46570d;
L_4656e6: /* 4656e6: cmp dword ptr [ebp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4656e9: jge 0x4656ee */
  if ((sf == of)) goto L_4656ee;
L_4656eb: /* 4656eb: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
L_4656ee: /* 4656ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4656ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4656f0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4656f1: call 0x4617bb */
  esp -= 4; W32(esp, 0x4656f6u); SPILL(); hle_memcpy(); RELOAD();
/* 4656f6: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 4656f9: sub dword ptr [eax], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(eax), r);
  }
/* 4656fb: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 4656fe: add dword ptr [ebp - 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 465701: sub dword ptr [ebp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 465704: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 465707: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 465709: add dword ptr [eax], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* 46570b: jmp 0x465722 */
  goto L_465722;
L_46570d: /* 46570d: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 46570f: mov ecx, edi */
  ecx = edi;
/* 465711: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0x465714u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 465714: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 465717: je 0x465728 */
  if (zf) goto L_465728;
L_465719: /* 465719: mov byte ptr [ebx], al */
  W8((uint32_t)(ebx), (eax & 0xffu));
/* 46571b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 46571c: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46571f: dec dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
L_465722: /* 465722: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 465726: jg 0x4656d4 */
  if ((!zf && sf == of)) goto L_4656d4;
L_465728: /* 465728: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465729: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_46572a: /* 46572a: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 46572d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46572e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46572f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_465732(void) {
  LOAD_REGS();
L_465732: /* 465732: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 465733: mov ebp, esp */
  ebp = esp;
/* 465735: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 465736: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46573a: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46573e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46573f: mov edi, ecx */
  edi = ecx;
/* 465741: jle 0x4657a0 */
  if ((zf || sf != of)) goto L_4657a0;
L_465743: /* 465743: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 465744: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 465747: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_465748: /* 465748: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 46574b: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46574d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46574f: je 0x465781 */
  if (zf) goto L_465781;
L_465751: /* 465751: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 465754: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 465756: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 465758: jle 0x465781 */
  if ((zf || sf != of)) goto L_465781;
L_46575a: /* 46575a: cmp dword ptr [ebp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46575d: jge 0x465762 */
  if ((sf == of)) goto L_465762;
L_46575f: /* 46575f: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
L_465762: /* 465762: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 465763: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 465764: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465765: call 0x4617bb */
  esp -= 4; W32(esp, 0x46576au); SPILL(); hle_memcpy(); RELOAD();
/* 46576a: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 46576d: sub dword ptr [eax], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(eax), r);
  }
/* 46576f: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 465772: add dword ptr [ebp - 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 465775: sub dword ptr [ebp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 465778: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46577b: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 46577d: add dword ptr [eax], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* 46577f: jmp 0x465798 */
  goto L_465798;
L_465781: /* 465781: movzx ecx, byte ptr [ebx] */
  ecx = (uint32_t)(R8((uint32_t)(ebx)));
/* 465784: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 465786: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 465787: mov ecx, edi */
  ecx = edi;
/* 465789: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x46578cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 46578c: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46578f: je 0x46579e */
  if (zf) goto L_46579e;
L_465791: /* 465791: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 465792: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 465795: dec dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
L_465798: /* 465798: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46579c: jg 0x465748 */
  if ((!zf && sf == of)) goto L_465748;
L_46579e: /* 46579e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46579f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_4657a0: /* 4657a0: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4657a3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4657a4: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4657a5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4657a8(void) {
  LOAD_REGS();
L_4657a8: /* 4657a8: mov ecx, dword ptr [0x48e2bc] */
  ecx = R32((uint32_t)(0x48e2bcu));
/* 4657ae: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4657b2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4657b4: mov ecx, dword ptr [0x4d0eb0] */
  ecx = R32((uint32_t)(0x4d0eb0u));
/* 4657ba: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4657bd: mov ecx, dword ptr [0x4d0eb4] */
  ecx = R32((uint32_t)(0x4d0eb4u));
/* 4657c3: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 4657c6: mov ecx, dword ptr [0x4d1094] */
  ecx = R32((uint32_t)(0x4d1094u));
/* 4657cc: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 4657cf: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4657d2(void) {
  LOAD_REGS();
L_4657d2: /* 4657d2: mov ecx, dword ptr [0x48e2bc] */
  ecx = R32((uint32_t)(0x48e2bcu));
/* 4657d8: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4657dc: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4657de: mov ecx, dword ptr [0x4d0eb0] */
  ecx = R32((uint32_t)(0x4d0eb0u));
/* 4657e4: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 4657e7: mov ecx, dword ptr [0x4d0eb4] */
  ecx = R32((uint32_t)(0x4d0eb4u));
/* 4657ed: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 4657f0: mov ecx, dword ptr [0x4d1094] */
  ecx = R32((uint32_t)(0x4d1094u));
/* 4657f6: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 4657f9: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_4657fc(void) {
  LOAD_REGS();
L_4657fc: /* 4657fc: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 4657ff: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 465801: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 465803: je 0x465815 */
  if (zf) goto L_465815;
L_465805: /* 465805: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 465808: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 46580a: lea edx, [eax + edx*2] */
  edx = (uint32_t)(eax + edx*2);
/* 46580d: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46580f: jae 0x465815 */
  if (!cf) goto L_465815;
L_465811: /* 465811: mov ax, word ptr [eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax))) & 0xffffu);
/* 465814: ret  */
  esp += 4; SPILL(); return;
L_465815: /* 465815: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 465817: jmp dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); SPILL(); call_ind(t); return; }
}

void f_46581a(void) {
  LOAD_REGS();
L_46581a: /* 46581a: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 46581d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46581e: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 465820: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 465822: je 0x465844 */
  if (zf) goto L_465844;
L_465824: /* 465824: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 465827: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 465829: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46582a: lea edi, [edx + esi] */
  edi = (uint32_t)(edx + esi);
/* 46582d: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46582f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 465830: jae 0x465844 */
  if (!cf) goto L_465844;
L_465832: /* 465832: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 465833: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 465835: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 465838: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46583a: lea edx, [ecx + 1] */
  edx = (uint32_t)(ecx + 0x1u);
/* 46583d: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 46583f: movzx eax, byte ptr [ecx] */
  eax = (uint32_t)(R8((uint32_t)(ecx)));
/* 465842: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465843: ret  */
  esp += 4; SPILL(); return;
L_465844: /* 465844: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 465846: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465847: jmp dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); SPILL(); call_ind(t); return; }
}

void f_46584a(void) {
  LOAD_REGS();
L_46584a: /* 46584a: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 46584d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46584e: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 465850: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 465852: je 0x465874 */
  if (zf) goto L_465874;
L_465854: /* 465854: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 465857: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 465859: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46585a: lea edi, [esi + edx*2] */
  edi = (uint32_t)(esi + edx*2);
/* 46585d: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46585f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 465860: jae 0x465874 */
  if (!cf) goto L_465874;
L_465862: /* 465862: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 465863: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 465865: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 465868: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46586a: lea edx, [ecx + 2] */
  edx = (uint32_t)(ecx + 0x2u);
/* 46586d: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 46586f: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 465872: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465873: ret  */
  esp += 4; SPILL(); return;
L_465874: /* 465874: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 465876: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465877: jmp dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); SPILL(); call_ind(t); return; }
}

void f_46587a(void) {
  LOAD_REGS();
L_46587a: /* 46587a: mov eax, 0x48bf90 */
  eax = 0x48bf90u;
/* 46587f: call 0x4616c0 */
  esp -= 4; W32(esp, 0x465884u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 465884: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 465887: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 465888: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46588a: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46588d: call 0x4612ba */
  esp -= 4; W32(esp, 0x465892u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 465892: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 465896: mov ecx, 0x4d0924 */
  ecx = 0x4d0924u;
/* 46589b: call 0x464006 */
  esp -= 4; W32(esp, 0x4658a0u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 4658a0: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4658a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4658a4: call 0x488d6c */
  esp -= 4; W32(esp, 0x4658a9u); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 4658a9: mov esi, eax */
  esi = eax;
/* 4658ab: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4658ad: jne 0x465901 */
  if (!zf) goto L_465901;
L_4658af: /* 4658af: mov eax, dword ptr [0x4d1098] */
  eax = R32((uint32_t)(0x4d1098u));
/* 4658b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4658b6: je 0x4658bc */
  if (zf) goto L_4658bc;
L_4658b8: /* 4658b8: mov esi, eax */
  esi = eax;
/* 4658ba: jmp 0x465901 */
  goto L_465901;
L_4658bc: /* 4658bc: push 0x4d1098 */
  { uint32_t v = 0x4d1098u; esp -= 4; W32(esp, v); }
/* 4658c1: call 0x464ee2 */
  esp -= 4; W32(esp, 0x4658c6u); SPILL(); f_464ee2(); if (g_unwind) return; RELOAD();
/* 4658c6: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4658c9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4658ca: jne 0x4658e8 */
  if (!zf) goto L_4658e8;
L_4658cc: /* 4658cc: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 4658d1: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 4658d4: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x4658dau); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 4658da: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 4658df: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 4658e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4658e3: call 0x48bed8 */
  esp -= 4; W32(esp, 0x4658e8u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_4658e8: /* 4658e8: mov eax, dword ptr [0x4d1098] */
  eax = R32((uint32_t)(0x4d1098u));
/* 4658ed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4658ee: mov edi, eax */
  edi = eax;
/* 4658f0: mov ecx, edi */
  ecx = edi;
/* 4658f2: mov esi, eax */
  esi = eax;
/* 4658f4: call 0x461292 */
  esp -= 4; W32(esp, 0x4658f9u); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 4658f9: mov ecx, edi */
  ecx = edi;
/* 4658fb: call 0x488de4 */
  esp -= 4; W32(esp, 0x465900u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 465900: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_465901: /* 465901: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 465905: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 465908: call 0x4613d8 */
  esp -= 4; W32(esp, 0x46590du); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 46590d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 465910: mov eax, esi */
  eax = esi;
/* 465912: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465913: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46591a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46591b: ret  */
  esp += 4; SPILL(); return;
}

void f_46591c(void) {
  LOAD_REGS();
L_46591c: /* 46591c: mov eax, 0x48bf90 */
  eax = 0x48bf90u;
/* 465921: call 0x4616c0 */
  esp -= 4; W32(esp, 0x465926u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 465926: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 465929: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46592a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46592c: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 46592f: call 0x4612ba */
  esp -= 4; W32(esp, 0x465934u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 465934: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 465938: mov ecx, 0x4d0ec0 */
  ecx = 0x4d0ec0u;
/* 46593d: call 0x464006 */
  esp -= 4; W32(esp, 0x465942u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 465942: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 465945: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465946: call 0x488d6c */
  esp -= 4; W32(esp, 0x46594bu); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 46594b: mov esi, eax */
  esi = eax;
/* 46594d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46594f: jne 0x4659a3 */
  if (!zf) goto L_4659a3;
L_465951: /* 465951: mov eax, dword ptr [0x4d109c] */
  eax = R32((uint32_t)(0x4d109cu));
/* 465956: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 465958: je 0x46595e */
  if (zf) goto L_46595e;
L_46595a: /* 46595a: mov esi, eax */
  esi = eax;
/* 46595c: jmp 0x4659a3 */
  goto L_4659a3;
L_46595e: /* 46595e: push 0x4d109c */
  { uint32_t v = 0x4d109cu; esp -= 4; W32(esp, v); }
/* 465963: call 0x465010 */
  esp -= 4; W32(esp, 0x465968u); SPILL(); f_465010(); if (g_unwind) return; RELOAD();
/* 465968: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46596b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46596c: jne 0x46598a */
  if (!zf) goto L_46598a;
L_46596e: /* 46596e: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 465973: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 465976: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x46597cu); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 46597c: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 465981: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 465984: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465985: call 0x48bed8 */
  esp -= 4; W32(esp, 0x46598au); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_46598a: /* 46598a: mov eax, dword ptr [0x4d109c] */
  eax = R32((uint32_t)(0x4d109cu));
/* 46598f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 465990: mov edi, eax */
  edi = eax;
/* 465992: mov ecx, edi */
  ecx = edi;
/* 465994: mov esi, eax */
  esi = eax;
/* 465996: call 0x461292 */
  esp -= 4; W32(esp, 0x46599bu); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 46599b: mov ecx, edi */
  ecx = edi;
/* 46599d: call 0x488de4 */
  esp -= 4; W32(esp, 0x4659a2u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 4659a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4659a3: /* 4659a3: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4659a7: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 4659aa: call 0x4613d8 */
  esp -= 4; W32(esp, 0x4659afu); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 4659af: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4659b2: mov eax, esi */
  eax = esi;
/* 4659b4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4659b5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4659bc: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4659bd: ret  */
  esp += 4; SPILL(); return;
}

void f_4659be(void) {
  LOAD_REGS();
L_4659be: /* 4659be: mov eax, 0x48bf90 */
  eax = 0x48bf90u;
/* 4659c3: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4659c8u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4659c8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4659cb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4659cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4659ce: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 4659d1: call 0x4612ba */
  esp -= 4; W32(esp, 0x4659d6u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 4659d6: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4659da: mov ecx, 0x4d0ec4 */
  ecx = 0x4d0ec4u;
/* 4659df: call 0x464006 */
  esp -= 4; W32(esp, 0x4659e4u); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 4659e4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4659e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4659e8: call 0x488d6c */
  esp -= 4; W32(esp, 0x4659edu); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 4659ed: mov esi, eax */
  esi = eax;
/* 4659ef: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4659f1: jne 0x465a45 */
  if (!zf) goto L_465a45;
L_4659f3: /* 4659f3: mov eax, dword ptr [0x4d10a0] */
  eax = R32((uint32_t)(0x4d10a0u));
/* 4659f8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4659fa: je 0x465a00 */
  if (zf) goto L_465a00;
L_4659fc: /* 4659fc: mov esi, eax */
  esi = eax;
/* 4659fe: jmp 0x465a45 */
  goto L_465a45;
L_465a00: /* 465a00: push 0x4d10a0 */
  { uint32_t v = 0x4d10a0u; esp -= 4; W32(esp, v); }
/* 465a05: call 0x4650d7 */
  esp -= 4; W32(esp, 0x465a0au); SPILL(); f_4650d7(); if (g_unwind) return; RELOAD();
/* 465a0a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 465a0d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 465a0e: jne 0x465a2c */
  if (!zf) goto L_465a2c;
L_465a10: /* 465a10: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 465a15: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 465a18: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x465a1eu); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 465a1e: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 465a23: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 465a26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465a27: call 0x48bed8 */
  esp -= 4; W32(esp, 0x465a2cu); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_465a2c: /* 465a2c: mov eax, dword ptr [0x4d10a0] */
  eax = R32((uint32_t)(0x4d10a0u));
/* 465a31: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 465a32: mov edi, eax */
  edi = eax;
/* 465a34: mov ecx, edi */
  ecx = edi;
/* 465a36: mov esi, eax */
  esi = eax;
/* 465a38: call 0x461292 */
  esp -= 4; W32(esp, 0x465a3du); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 465a3d: mov ecx, edi */
  ecx = edi;
/* 465a3f: call 0x488de4 */
  esp -= 4; W32(esp, 0x465a44u); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 465a44: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_465a45: /* 465a45: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 465a49: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 465a4c: call 0x4613d8 */
  esp -= 4; W32(esp, 0x465a51u); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 465a51: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 465a54: mov eax, esi */
  eax = esi;
/* 465a56: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465a57: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 465a5e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 465a5f: ret  */
  esp += 4; SPILL(); return;
}

void f_465a60(void) {
  LOAD_REGS();
L_465a60: /* 465a60: ret  */
  esp += 4; SPILL(); return;
}

void f_465a61(void) {
  LOAD_REGS();
L_465a61: /* 465a61: call 0x488fa8 */
  esp -= 4; W32(esp, 0x465a66u); SPILL(); f_488fa8(); if (g_unwind) return; RELOAD();
/* 465a66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465a67: call 0x46587a */
  esp -= 4; W32(esp, 0x465a6cu); SPILL(); f_46587a(); if (g_unwind) return; RELOAD();
/* 465a6c: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 465a6f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 465a70: ret  */
  esp += 4; SPILL(); return;
}

void f_465a71(void) {
  LOAD_REGS();
L_465a71: /* 465a71: jmp 0x46228e */
  SPILL(); f_46228e(); return;
}

void f_465a76(void) {
  LOAD_REGS();
L_465a76: /* 465a76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 465a77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 465a79: mov esi, ecx */
  esi = ecx;
/* 465a7b: call 0x461ea8 */
  esp -= 4; W32(esp, 0x465a80u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 465a80: mov eax, esi */
  eax = esi;
/* 465a82: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465a83: ret  */
  esp += 4; SPILL(); return;
}

void f_465a84(void) {
  LOAD_REGS();
L_465a84: /* 465a84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 465a85: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 465a87: mov esi, ecx */
  esi = ecx;
/* 465a89: call 0x461ea8 */
  esp -= 4; W32(esp, 0x465a8eu); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 465a8e: mov eax, esi */
  eax = esi;
/* 465a90: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465a91: ret 4 */
  esp += 8; SPILL(); return;
}

void f_465a94(void) {
  LOAD_REGS();
L_465a94: /* 465a94: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 465a95: mov ebp, esp */
  ebp = esp;
/* 465a97: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 465a98: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 465a9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465a9c: call 0x465162 */
  esp -= 4; W32(esp, 0x465aa1u); SPILL(); f_465162(); if (g_unwind) return; RELOAD();
/* 465aa1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 465aa4: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 465aa7: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 465aa9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 465aaa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_465aad(void) {
  LOAD_REGS();
L_465aad: /* 465aad: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 465aae: mov ebp, esp */
  ebp = esp;
/* 465ab0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 465ab1: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* 465ab4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465ab5: call 0x46514b */
  esp -= 4; W32(esp, 0x465abau); SPILL(); f_46514b(); if (g_unwind) return; RELOAD();
/* 465aba: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 465abd: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 465ac0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 465ac2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 465ac3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_465ac6(void) {
  LOAD_REGS();
L_465ac6: /* 465ac6: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 465aca: cmp dword ptr [eax + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 465ace: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 465ad1: jb 0x465ad8 */
  if (cf) goto L_465ad8;
L_465ad3: /* 465ad3: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 465ad6: jmp 0x465adb */
  goto L_465adb;
L_465ad8: /* 465ad8: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_465adb: /* 465adb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 465adc: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 465ae0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465ae1: call 0x465218 */
  esp -= 4; W32(esp, 0x465ae6u); SPILL(); f_465218(); if (g_unwind) return; RELOAD();
/* 465ae6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_465ae9(void) {
  LOAD_REGS();
L_465ae9: /* 465ae9: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 465aed: cmp dword ptr [eax + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 465af1: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 465af4: jb 0x465afb */
  if (cf) goto L_465afb;
L_465af6: /* 465af6: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 465af9: jmp 0x465afe */
  goto L_465afe;
L_465afb: /* 465afb: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_465afe: /* 465afe: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 465aff: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 465b03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465b04: call 0x4652e7 */
  esp -= 4; W32(esp, 0x465b09u); SPILL(); f_4652e7(); if (g_unwind) return; RELOAD();
/* 465b09: ret 8 */
  esp += 12; SPILL(); return;
}

void f_465b0c(void) {
  LOAD_REGS();
L_465b0c: /* 465b0c: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 465b10: cmp dword ptr [eax + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 465b14: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 465b17: jb 0x465b1e */
  if (cf) goto L_465b1e;
L_465b19: /* 465b19: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 465b1c: jmp 0x465b21 */
  goto L_465b21;
L_465b1e: /* 465b1e: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_465b21: /* 465b21: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 465b22: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 465b26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465b27: call 0x4653a2 */
  esp -= 4; W32(esp, 0x465b2cu); SPILL(); f_4653a2(); if (g_unwind) return; RELOAD();
/* 465b2c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_465b2f(void) {
  LOAD_REGS();
L_465b2f: /* 465b2f: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 465b33: cmp dword ptr [eax + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 465b37: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 465b3a: jb 0x465b41 */
  if (cf) goto L_465b41;
L_465b3c: /* 465b3c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 465b3f: jmp 0x465b44 */
  goto L_465b44;
L_465b41: /* 465b41: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_465b44: /* 465b44: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 465b45: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 465b49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465b4a: call 0x465433 */
  esp -= 4; W32(esp, 0x465b4fu); SPILL(); f_465433(); if (g_unwind) return; RELOAD();
/* 465b4f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_465b52(void) {
  LOAD_REGS();
L_465b52: /* 465b52: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 465b56: cmp dword ptr [eax + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 465b5a: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 465b5d: jb 0x465b64 */
  if (cf) goto L_465b64;
L_465b5f: /* 465b5f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 465b62: jmp 0x465b67 */
  goto L_465b67;
L_465b64: /* 465b64: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_465b67: /* 465b67: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 465b68: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 465b6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465b6d: call 0x4654c3 */
  esp -= 4; W32(esp, 0x465b72u); SPILL(); f_4654c3(); if (g_unwind) return; RELOAD();
/* 465b72: ret 8 */
  esp += 12; SPILL(); return;
}

void f_465b75(void) {
  LOAD_REGS();
L_465b75: /* 465b75: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 465b79: cmp dword ptr [eax + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 465b7d: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 465b80: jb 0x465b87 */
  if (cf) goto L_465b87;
L_465b82: /* 465b82: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 465b85: jmp 0x465b8a */
  goto L_465b8a;
L_465b87: /* 465b87: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_465b8a: /* 465b8a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 465b8b: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 465b8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465b90: call 0x465561 */
  esp -= 4; W32(esp, 0x465b95u); SPILL(); f_465561(); if (g_unwind) return; RELOAD();
/* 465b95: ret 8 */
  esp += 12; SPILL(); return;
}

void f_465b98(void) {
  LOAD_REGS();
L_465b98: /* 465b98: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 465b9c: cmp dword ptr [eax + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 465ba0: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 465ba3: jb 0x465baa */
  if (cf) goto L_465baa;
L_465ba5: /* 465ba5: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 465ba8: jmp 0x465bad */
  goto L_465bad;
L_465baa: /* 465baa: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_465bad: /* 465bad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 465bae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465baf: push dword ptr [ecx + 0x14] */
  { uint32_t v = R32((uint32_t)(ecx + 0x14u)); esp -= 4; W32(esp, v); }
/* 465bb2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 465bb4: call 0x4655fe */
  esp -= 4; W32(esp, 0x465bb9u); SPILL(); f_4655fe(); if (g_unwind) return; RELOAD();
/* 465bb9: ret 4 */
  esp += 8; SPILL(); return;
}

void f_465bbc(void) {
  LOAD_REGS();
L_465bbc: /* 465bbc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 465bbd: mov ebp, esp */
  ebp = esp;
/* 465bbf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 465bc0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 465bc1: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 465bc4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 465bc5: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 465bc8: cmp dword ptr [esi + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 465bcb: mov ebx, ecx */
  ebx = ecx;
/* 465bcd: jae 0x465bd4 */
  if (!cf) goto L_465bd4;
L_465bcf: /* 465bcf: call 0x487763 */
  esp -= 4; W32(esp, 0x465bd4u); SPILL(); f_487763(); if (g_unwind) return; RELOAD();
L_465bd4: /* 465bd4: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 465bd7: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 465bd9: cmp eax, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 465bdc: jae 0x465be1 */
  if (!cf) goto L_465be1;
L_465bde: /* 465bde: mov dword ptr [ebp + 0x18], eax */
  W32((uint32_t)(ebp + 0x18u), eax);
L_465be1: /* 465be1: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 465be5: jb 0x465bec */
  if (cf) goto L_465bec;
L_465be7: /* 465be7: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 465bea: jmp 0x465bef */
  goto L_465bef;
L_465bec: /* 465bec: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_465bef: /* 465bef: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 465bf2: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 465bf4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 465bf5: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 465bf8: mov ecx, ebx */
  ecx = ebx;
/* 465bfa: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 465bfd: call 0x4655fe */
  esp -= 4; W32(esp, 0x465c02u); SPILL(); f_4655fe(); if (g_unwind) return; RELOAD();
/* 465c02: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 465c03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465c04: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 465c05: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 465c06: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_465c09(void) {
  LOAD_REGS();
L_465c09: /* 465c09: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 465c0a: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 465c0e: mov esi, ecx */
  esi = ecx;
/* 465c10: call 0x461028 */
  esp -= 4; W32(esp, 0x465c15u); SPILL(); hle_strlen(); RELOAD();
/* 465c15: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 465c16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465c17: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 465c1b: mov ecx, esi */
  ecx = esi;
/* 465c1d: push dword ptr [esi + 0x14] */
  { uint32_t v = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, v); }
/* 465c20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 465c22: call 0x4655fe */
  esp -= 4; W32(esp, 0x465c27u); SPILL(); f_4655fe(); if (g_unwind) return; RELOAD();
/* 465c27: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465c28: ret 4 */
  esp += 8; SPILL(); return;
}

void f_465c2b(void) {
  LOAD_REGS();
L_465c2b: /* 465c2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 465c2c: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 465c30: mov esi, ecx */
  esi = ecx;
/* 465c32: call 0x461028 */
  esp -= 4; W32(esp, 0x465c37u); SPILL(); hle_strlen(); RELOAD();
/* 465c37: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 465c38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465c39: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 465c3d: mov ecx, esi */
  ecx = esi;
/* 465c3f: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 465c43: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 465c47: call 0x4655fe */
  esp -= 4; W32(esp, 0x465c4cu); SPILL(); f_4655fe(); if (g_unwind) return; RELOAD();
/* 465c4c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465c4d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_465c50(void) {
  LOAD_REGS();
L_465c50: /* 465c50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 465c51: mov esi, ecx */
  esi = ecx;
/* 465c53: call 0x46581a */
  esp -= 4; W32(esp, 0x465c58u); SPILL(); f_46581a(); if (g_unwind) return; RELOAD();
/* 465c58: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 465c5b: jne 0x465c61 */
  if (!zf) goto L_465c61;
L_465c5d: /* 465c5d: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 465c5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465c60: ret  */
  esp += 4; SPILL(); return;
L_465c61: /* 465c61: mov ecx, esi */
  ecx = esi;
/* 465c63: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465c64: jmp 0x46567c */
  SPILL(); f_46567c(); return;
}

void f_465c69(void) {
  LOAD_REGS();
L_465c69: /* 465c69: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 465c6a: mov esi, ecx */
  esi = ecx;
/* 465c6c: call 0x46584a */
  esp -= 4; W32(esp, 0x465c71u); SPILL(); f_46584a(); if (g_unwind) return; RELOAD();
/* 465c71: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 465c75: jne 0x465c7e */
  if (!zf) goto L_465c7e;
L_465c77: /* 465c77: mov eax, 0xffff */
  eax = 0xffffu;
/* 465c7c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465c7d: ret  */
  esp += 4; SPILL(); return;
L_465c7e: /* 465c7e: mov ecx, esi */
  ecx = esi;
/* 465c80: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465c81: jmp 0x4657fc */
  SPILL(); f_4657fc(); return;
}

void f_465c86(void) {
  LOAD_REGS();
L_465c86: /* 465c86: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 465c87: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 465c89: mov esi, ecx */
  esi = ecx;
/* 465c8b: call 0x461ea8 */
  esp -= 4; W32(esp, 0x465c90u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 465c90: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 465c95: je 0x465c9e */
  if (zf) goto L_465c9e;
L_465c97: /* 465c97: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 465c98: call 0x461c65 */
  esp -= 4; W32(esp, 0x465c9du); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 465c9d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_465c9e: /* 465c9e: mov eax, esi */
  eax = esi;
/* 465ca0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465ca1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_465ca4(void) {
  LOAD_REGS();
L_465ca4: /* 465ca4: mov eax, 0x48bfde */
  eax = 0x48bfdeu;
/* 465ca9: call 0x4616c0 */
  esp -= 4; W32(esp, 0x465caeu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 465cae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 465caf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 465cb0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 465cb1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 465cb2: mov esi, ecx */
  esi = ecx;
/* 465cb4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 465cb6: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 465cb9: lea ecx, [eax + esi] */
  ecx = (uint32_t)(eax + esi);
/* 465cbc: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 465cbf: xor ebx, ebx */
  ebx = 0;
/* 465cc1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 465cc3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 465cc4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 465cc7: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 465cca: jne 0x465d9d */
  if (!zf) goto L_465d9d;
L_465cd0: /* 465cd0: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 465cd3: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 465cd5: je 0x465cdc */
  if (zf) goto L_465cdc;
L_465cd7: /* 465cd7: call 0x461419 */
  esp -= 4; W32(esp, 0x465cdcu); SPILL(); f_461419(); if (g_unwind) return; RELOAD();
L_465cdc: /* 465cdc: cmp byte ptr [ebp + 8], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x8u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 465cdf: jne 0x465d88 */
  if (!zf) goto L_465d88;
L_465ce5: /* 465ce5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 465ce7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 465cea: mov ecx, dword ptr [ecx + esi + 0xc] */
  ecx = R32((uint32_t)(ecx + esi + 0xcu));
/* 465cee: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 465cf1: je 0x465d88 */
  if (zf) goto L_465d88;
L_465cf7: /* 465cf7: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 465cfa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 465cfb: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 465cfe: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 465d00: call 0x464a5a */
  esp -= 4; W32(esp, 0x465d05u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 465d05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465d06: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 465d09: call 0x46587a */
  esp -= 4; W32(esp, 0x465d0eu); SPILL(); f_46587a(); if (g_unwind) return; RELOAD();
/* 465d0e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 465d0f: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 465d12: mov edi, eax */
  edi = eax;
/* 465d14: call 0x461389 */
  esp -= 4; W32(esp, 0x465d19u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 465d19: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 465d1b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 465d1e: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 465d22: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 465d29: call 0x46567c */
  esp -= 4; W32(esp, 0x465d2eu); SPILL(); f_46567c(); if (g_unwind) return; RELOAD();
L_465d2e: /* 465d2e: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 465d31: jne 0x465d49 */
  if (!zf) goto L_465d49;
L_465d33: /* 465d33: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 465d35: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 465d38: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 465d3a: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 465d3d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 465d3e: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 465d41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465d42: call 0x464bb2 */
  esp -= 4; W32(esp, 0x465d47u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 465d47: jmp 0x465d88 */
  goto L_465d88;
L_465d49: /* 465d49: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 465d4c: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 465d4f: test byte ptr [ecx + eax*2], 0x48 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax*2))); uint8_t b = (uint8_t)(0x48u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 465d53: je 0x465d88 */
  if (zf) goto L_465d88;
L_465d55: /* 465d55: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 465d57: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 465d5a: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 465d5e: call 0x465c50 */
  esp -= 4; W32(esp, 0x465d63u); SPILL(); f_465c50(); if (g_unwind) return; RELOAD();
/* 465d63: jmp 0x465d2e */
  goto L_465d2e;
L_465d88: /* 465d88: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 465d8a: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 465d8d: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 465d91: lea ecx, [eax + esi] */
  ecx = (uint32_t)(eax + esi);
/* 465d94: cmp dword ptr [ecx + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 465d97: jne 0x465d9d */
  if (!zf) goto L_465d9d;
L_465d99: /* 465d99: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 465d9b: jmp 0x465dac */
  goto L_465dac;
L_465d9d: /* 465d9d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 465da0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 465da1: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 465da4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465da5: call 0x464bb2 */
  esp -= 4; W32(esp, 0x465daau); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 465daa: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_465dac: /* 465dac: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 465daf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 465db0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465db1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 465db8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 465db9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 465dba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_465d65(void) {
  LOAD_REGS();
L_465d65: /* 465d65: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 465d68: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 465d6a: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 465d6d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 465d6f: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 465d72: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 465d74: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 465d77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465d78: call 0x464bb2 */
  esp -= 4; W32(esp, 0x465d7du); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 465d7d: mov eax, 0x465d83 */
  eax = 0x465d83u;
/* 465d82: ret  */
  esp += 4; SPILL(); return;
}

void f_465d83(void) {
  LOAD_REGS();
L_465d83: /* 465d83: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 465d86: xor ebx, ebx */
  ebx = 0;
/* 465d88: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 465d8a: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 465d8d: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 465d91: lea ecx, [eax + esi] */
  ecx = (uint32_t)(eax + esi);
/* 465d94: cmp dword ptr [ecx + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 465d97: jne 0x465d9d */
  if (!zf) goto L_465d9d;
L_465d99: /* 465d99: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 465d9b: jmp 0x465dac */
  goto L_465dac;
L_465d9d: /* 465d9d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 465da0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 465da1: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 465da4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465da5: call 0x464bb2 */
  esp -= 4; W32(esp, 0x465daau); SPILL(); f_464bb2(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x465d83u: guest_unwind_done(); RELOAD(); goto L_465d83; } return; } RELOAD();
/* 465daa: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_465dac: /* 465dac: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 465daf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 465db0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465db1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 465db8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 465db9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 465dba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_465dbd(void) {
  LOAD_REGS();
L_465dbd: /* 465dbd: mov eax, 0x48c005 */
  eax = 0x48c005u;
/* 465dc2: call 0x4616c0 */
  esp -= 4; W32(esp, 0x465dc7u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 465dc7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 465dc8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 465dc9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 465dca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 465dcb: mov esi, ecx */
  esi = ecx;
/* 465dcd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 465dcf: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 465dd2: lea ecx, [eax + esi] */
  ecx = (uint32_t)(eax + esi);
/* 465dd5: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 465dd8: xor ebx, ebx */
  ebx = 0;
/* 465dda: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 465ddc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 465ddd: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 465de0: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 465de3: jne 0x465eb9 */
  if (!zf) goto L_465eb9;
L_465de9: /* 465de9: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 465dec: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 465dee: je 0x465df5 */
  if (zf) goto L_465df5;
L_465df0: /* 465df0: call 0x461419 */
  esp -= 4; W32(esp, 0x465df5u); SPILL(); f_461419(); if (g_unwind) return; RELOAD();
L_465df5: /* 465df5: cmp byte ptr [ebp + 8], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x8u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 465df8: jne 0x465ea4 */
  if (!zf) goto L_465ea4;
L_465dfe: /* 465dfe: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 465e00: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 465e03: mov ecx, dword ptr [ecx + esi + 0xc] */
  ecx = R32((uint32_t)(ecx + esi + 0xcu));
/* 465e07: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 465e0a: je 0x465ea4 */
  if (zf) goto L_465ea4;
L_465e10: /* 465e10: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 465e13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 465e14: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 465e17: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 465e19: call 0x464a5a */
  esp -= 4; W32(esp, 0x465e1eu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 465e1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465e1f: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 465e22: call 0x46591c */
  esp -= 4; W32(esp, 0x465e27u); SPILL(); f_46591c(); if (g_unwind) return; RELOAD();
/* 465e27: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 465e28: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 465e2b: mov edi, eax */
  edi = eax;
/* 465e2d: call 0x461389 */
  esp -= 4; W32(esp, 0x465e32u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 465e32: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 465e34: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 465e37: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 465e3b: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 465e42: call 0x4657fc */
  esp -= 4; W32(esp, 0x465e47u); SPILL(); f_4657fc(); if (g_unwind) return; RELOAD();
L_465e47: /* 465e47: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 465e4b: jne 0x465e63 */
  if (!zf) goto L_465e63;
L_465e4d: /* 465e4d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 465e4f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 465e52: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 465e54: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 465e57: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 465e58: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 465e5b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465e5c: call 0x464bb2 */
  esp -= 4; W32(esp, 0x465e61u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 465e61: jmp 0x465ea4 */
  goto L_465ea4;
L_465e63: /* 465e63: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 465e65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465e66: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 465e68: mov ecx, edi */
  ecx = edi;
/* 465e6a: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x465e6du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 465e6d: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 465e6f: je 0x465ea4 */
  if (zf) goto L_465ea4;
L_465e71: /* 465e71: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 465e73: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 465e76: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 465e7a: call 0x465c69 */
  esp -= 4; W32(esp, 0x465e7fu); SPILL(); f_465c69(); if (g_unwind) return; RELOAD();
/* 465e7f: jmp 0x465e47 */
  goto L_465e47;
L_465ea4: /* 465ea4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 465ea6: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 465ea9: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 465ead: lea ecx, [eax + esi] */
  ecx = (uint32_t)(eax + esi);
/* 465eb0: cmp dword ptr [ecx + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 465eb3: jne 0x465eb9 */
  if (!zf) goto L_465eb9;
L_465eb5: /* 465eb5: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 465eb7: jmp 0x465ec8 */
  goto L_465ec8;
L_465eb9: /* 465eb9: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 465ebc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 465ebd: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 465ec0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465ec1: call 0x464bb2 */
  esp -= 4; W32(esp, 0x465ec6u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 465ec6: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_465ec8: /* 465ec8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 465ecb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 465ecc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465ecd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 465ed4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 465ed5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 465ed6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_465e81(void) {
  LOAD_REGS();
L_465e81: /* 465e81: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 465e84: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 465e86: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 465e89: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 465e8b: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 465e8e: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 465e90: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 465e93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465e94: call 0x464bb2 */
  esp -= 4; W32(esp, 0x465e99u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 465e99: mov eax, 0x465e9f */
  eax = 0x465e9fu;
/* 465e9e: ret  */
  esp += 4; SPILL(); return;
}

void f_465e9f(void) {
  LOAD_REGS();
L_465e9f: /* 465e9f: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 465ea2: xor ebx, ebx */
  ebx = 0;
/* 465ea4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 465ea6: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 465ea9: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 465ead: lea ecx, [eax + esi] */
  ecx = (uint32_t)(eax + esi);
/* 465eb0: cmp dword ptr [ecx + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 465eb3: jne 0x465eb9 */
  if (!zf) goto L_465eb9;
L_465eb5: /* 465eb5: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 465eb7: jmp 0x465ec8 */
  goto L_465ec8;
L_465eb9: /* 465eb9: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 465ebc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 465ebd: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 465ec0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465ec1: call 0x464bb2 */
  esp -= 4; W32(esp, 0x465ec6u); SPILL(); f_464bb2(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x465e9fu: guest_unwind_done(); RELOAD(); goto L_465e9f; } return; } RELOAD();
/* 465ec6: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_465ec8: /* 465ec8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 465ecb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 465ecc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465ecd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 465ed4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 465ed5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 465ed6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_465ed9(void) {
  LOAD_REGS();
L_465ed9: /* 465ed9: mov eax, 0x48c017 */
  eax = 0x48c017u;
/* 465ede: call 0x4616c0 */
  esp -= 4; W32(esp, 0x465ee3u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 465ee3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 465ee4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 465ee5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 465ee6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 465ee7: mov esi, ecx */
  esi = ecx;
/* 465ee9: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 465eeb: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 465eee: lea ecx, [eax + esi] */
  ecx = (uint32_t)(eax + esi);
/* 465ef1: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 465ef4: xor ebx, ebx */
  ebx = 0;
/* 465ef6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 465ef8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 465ef9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 465efc: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 465eff: jne 0x465fd5 */
  if (!zf) goto L_465fd5;
L_465f05: /* 465f05: mov ecx, dword ptr [ecx + 0x2c] */
  ecx = R32((uint32_t)(ecx + 0x2cu));
/* 465f08: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 465f0a: je 0x465f11 */
  if (zf) goto L_465f11;
L_465f0c: /* 465f0c: call 0x461419 */
  esp -= 4; W32(esp, 0x465f11u); SPILL(); f_461419(); if (g_unwind) return; RELOAD();
L_465f11: /* 465f11: cmp byte ptr [ebp + 8], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x8u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 465f14: jne 0x465fc0 */
  if (!zf) goto L_465fc0;
L_465f1a: /* 465f1a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 465f1c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 465f1f: mov ecx, dword ptr [ecx + esi + 0xc] */
  ecx = R32((uint32_t)(ecx + esi + 0xcu));
/* 465f23: test cl, 1 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 465f26: je 0x465fc0 */
  if (zf) goto L_465fc0;
L_465f2c: /* 465f2c: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 465f2f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 465f30: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 465f33: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 465f35: call 0x464a5a */
  esp -= 4; W32(esp, 0x465f3au); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 465f3a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465f3b: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 465f3e: call 0x4659be */
  esp -= 4; W32(esp, 0x465f43u); SPILL(); f_4659be(); if (g_unwind) return; RELOAD();
/* 465f43: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 465f44: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 465f47: mov edi, eax */
  edi = eax;
/* 465f49: call 0x461389 */
  esp -= 4; W32(esp, 0x465f4eu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 465f4e: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 465f50: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 465f53: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 465f57: mov dword ptr [ebp - 4], 1 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 465f5e: call 0x4657fc */
  esp -= 4; W32(esp, 0x465f63u); SPILL(); f_4657fc(); if (g_unwind) return; RELOAD();
L_465f63: /* 465f63: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 465f67: jne 0x465f7f */
  if (!zf) goto L_465f7f;
L_465f69: /* 465f69: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 465f6b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 465f6e: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 465f70: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 465f73: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 465f74: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 465f77: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465f78: call 0x464bb2 */
  esp -= 4; W32(esp, 0x465f7du); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 465f7d: jmp 0x465fc0 */
  goto L_465fc0;
L_465f7f: /* 465f7f: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 465f81: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465f82: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 465f84: mov ecx, edi */
  ecx = edi;
/* 465f86: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x465f89u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 465f89: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 465f8b: je 0x465fc0 */
  if (zf) goto L_465fc0;
L_465f8d: /* 465f8d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 465f8f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 465f92: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 465f96: call 0x465c69 */
  esp -= 4; W32(esp, 0x465f9bu); SPILL(); f_465c69(); if (g_unwind) return; RELOAD();
/* 465f9b: jmp 0x465f63 */
  goto L_465f63;
L_465fc0: /* 465fc0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 465fc2: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 465fc5: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 465fc9: lea ecx, [eax + esi] */
  ecx = (uint32_t)(eax + esi);
/* 465fcc: cmp dword ptr [ecx + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 465fcf: jne 0x465fd5 */
  if (!zf) goto L_465fd5;
L_465fd1: /* 465fd1: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 465fd3: jmp 0x465fe4 */
  goto L_465fe4;
L_465fd5: /* 465fd5: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 465fd8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 465fd9: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 465fdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465fdd: call 0x464bb2 */
  esp -= 4; W32(esp, 0x465fe2u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 465fe2: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_465fe4: /* 465fe4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 465fe7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 465fe8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465fe9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 465ff0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 465ff1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 465ff2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_465f9d(void) {
  LOAD_REGS();
L_465f9d: /* 465f9d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 465fa0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 465fa2: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 465fa5: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 465fa7: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 465faa: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 465fac: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 465faf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465fb0: call 0x464bb2 */
  esp -= 4; W32(esp, 0x465fb5u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 465fb5: mov eax, 0x465fbb */
  eax = 0x465fbbu;
/* 465fba: ret  */
  esp += 4; SPILL(); return;
}

void f_465fbb(void) {
  LOAD_REGS();
L_465fbb: /* 465fbb: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 465fbe: xor ebx, ebx */
  ebx = 0;
/* 465fc0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 465fc2: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 465fc5: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 465fc9: lea ecx, [eax + esi] */
  ecx = (uint32_t)(eax + esi);
/* 465fcc: cmp dword ptr [ecx + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 465fcf: jne 0x465fd5 */
  if (!zf) goto L_465fd5;
L_465fd1: /* 465fd1: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 465fd3: jmp 0x465fe4 */
  goto L_465fe4;
L_465fd5: /* 465fd5: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 465fd8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 465fd9: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 465fdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 465fdd: call 0x464bb2 */
  esp -= 4; W32(esp, 0x465fe2u); SPILL(); f_464bb2(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x465fbbu: guest_unwind_done(); RELOAD(); goto L_465fbb; } return; } RELOAD();
/* 465fe2: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
L_465fe4: /* 465fe4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 465fe7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 465fe8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 465fe9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 465ff0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 465ff1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 465ff2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_465ff5(void) {
  LOAD_REGS();
L_465ff5: /* 465ff5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 465ff7: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 465ffa: test byte ptr [eax + ecx + 0xc], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + ecx + 0xcu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 465fff: jne 0x461419 */
  if (!zf) { SPILL(); f_461419(); return; }
L_466005: /* 466005: ret  */
  esp += 4; SPILL(); return;
}

void f_466006(void) {
  LOAD_REGS();
L_466006: /* 466006: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 46600a: call 0x461419 */
  esp -= 4; W32(esp, 0x46600fu); SPILL(); f_461419(); if (g_unwind) return; RELOAD();
/* 46600f: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 466013: ret  */
  esp += 4; SPILL(); return;
}

void f_466014(void) {
  LOAD_REGS();
L_466014: /* 466014: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 466015: mov ebp, esp */
  ebp = esp;
/* 466017: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 466018: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 46601b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46601c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46601d: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 466020: cmp dword ptr [ebx + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466023: mov esi, ecx */
  esi = ecx;
/* 466025: jae 0x46602c */
  if (!cf) goto L_46602c;
L_466027: /* 466027: call 0x487763 */
  esp -= 4; W32(esp, 0x46602cu); SPILL(); f_487763(); if (g_unwind) return; RELOAD();
L_46602c: /* 46602c: mov eax, dword ptr [ebx + 0x14] */
  eax = R32((uint32_t)(ebx + 0x14u));
/* 46602f: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 466031: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466034: jae 0x466039 */
  if (!cf) goto L_466039;
L_466036: /* 466036: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_466039: /* 466039: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46603c: sub eax, dword ptr [esi + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46603f: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 466042: ja 0x46604b */
  if ((!cf && !zf)) goto L_46604b;
L_466044: /* 466044: mov ecx, esi */
  ecx = esi;
/* 466046: call 0x4877fe */
  esp -= 4; W32(esp, 0x46604bu); SPILL(); f_4877fe(); if (g_unwind) return; RELOAD();
L_46604b: /* 46604b: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 46604f: jbe 0x4660a0 */
  if ((cf | zf)) goto L_4660a0;
L_466051: /* 466051: mov edi, dword ptr [esi + 0x14] */
  edi = R32((uint32_t)(esi + 0x14u));
/* 466054: add edi, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 466057: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 466059: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46605a: mov ecx, esi */
  ecx = esi;
/* 46605c: call 0x461e63 */
  esp -= 4; W32(esp, 0x466061u); SPILL(); f_461e63(); if (g_unwind) return; RELOAD();
/* 466061: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 466063: je 0x4660a0 */
  if (zf) goto L_4660a0;
L_466065: /* 466065: cmp dword ptr [ebx + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466069: jb 0x466070 */
  if (cf) goto L_466070;
L_46606b: /* 46606b: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 46606e: jmp 0x466073 */
  goto L_466073;
L_466070: /* 466070: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_466073: /* 466073: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466077: jb 0x46607e */
  if (cf) goto L_46607e;
L_466079: /* 466079: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 46607c: jmp 0x466081 */
  goto L_466081;
L_46607e: /* 46607e: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_466081: /* 466081: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 466084: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 466087: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 466089: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 46608c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46608e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46608f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 466090: call 0x4617bb */
  esp -= 4; W32(esp, 0x466095u); SPILL(); hle_memcpy(); RELOAD();
/* 466095: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 466098: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 466099: mov ecx, esi */
  ecx = esi;
/* 46609b: call 0x461ed0 */
  esp -= 4; W32(esp, 0x4660a0u); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
L_4660a0: /* 4660a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4660a1: mov eax, esi */
  eax = esi;
/* 4660a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4660a4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4660a5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4660a6: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4660a9(void) {
  LOAD_REGS();
L_4660a9: /* 4660a9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4660aa: mov ebp, esp */
  ebp = esp;
/* 4660ac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4660ad: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 4660b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4660b1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4660b2: mov esi, ecx */
  esi = ecx;
/* 4660b4: call 0x461036 */
  esp -= 4; W32(esp, 0x4660b9u); SPILL(); f_461036(); if (g_unwind) return; RELOAD();
/* 4660b9: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4660bb: je 0x4660db */
  if (zf) goto L_4660db;
L_4660bd: /* 4660bd: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4660c1: jb 0x4660c8 */
  if (cf) goto L_4660c8;
L_4660c3: /* 4660c3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4660c6: jmp 0x4660cb */
  goto L_4660cb;
L_4660c8: /* 4660c8: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_4660cb: /* 4660cb: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4660ce: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 4660d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4660d1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4660d2: mov ecx, esi */
  ecx = esi;
/* 4660d4: call 0x466014 */
  esp -= 4; W32(esp, 0x4660d9u); SPILL(); f_466014(); if (g_unwind) return; RELOAD();
/* 4660d9: jmp 0x466133 */
  goto L_466133;
L_4660db: /* 4660db: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 4660de: sub eax, dword ptr [esi + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4660e1: cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4660e4: ja 0x4660ed */
  if ((!cf && !zf)) goto L_4660ed;
L_4660e6: /* 4660e6: mov ecx, esi */
  ecx = esi;
/* 4660e8: call 0x4877fe */
  esp -= 4; W32(esp, 0x4660edu); SPILL(); f_4877fe(); if (g_unwind) return; RELOAD();
L_4660ed: /* 4660ed: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4660f1: jbe 0x466131 */
  if ((cf | zf)) goto L_466131;
L_4660f3: /* 4660f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4660f4: mov edi, dword ptr [esi + 0x14] */
  edi = R32((uint32_t)(esi + 0x14u));
/* 4660f7: add edi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4660fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4660fc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4660fd: mov ecx, esi */
  ecx = esi;
/* 4660ff: call 0x461e63 */
  esp -= 4; W32(esp, 0x466104u); SPILL(); f_461e63(); if (g_unwind) return; RELOAD();
/* 466104: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 466106: je 0x466130 */
  if (zf) goto L_466130;
L_466108: /* 466108: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46610c: jb 0x466113 */
  if (cf) goto L_466113;
L_46610e: /* 46610e: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 466111: jmp 0x466116 */
  goto L_466116;
L_466113: /* 466113: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_466116: /* 466116: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 466119: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 46611c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46611e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46611f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 466120: call 0x4617bb */
  esp -= 4; W32(esp, 0x466125u); SPILL(); hle_memcpy(); RELOAD();
/* 466125: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 466128: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 466129: mov ecx, esi */
  ecx = esi;
/* 46612b: call 0x461ed0 */
  esp -= 4; W32(esp, 0x466130u); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
L_466130: /* 466130: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_466131: /* 466131: mov eax, esi */
  eax = esi;
L_466133: /* 466133: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 466134: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 466135: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 466136: ret 8 */
  esp += 12; SPILL(); return;
}

void f_466139(void) {
  LOAD_REGS();
L_466139: /* 466139: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46613a: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46613e: mov esi, ecx */
  esi = ecx;
/* 466140: call 0x461028 */
  esp -= 4; W32(esp, 0x466145u); SPILL(); hle_strlen(); RELOAD();
/* 466145: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 466146: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466147: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46614b: mov ecx, esi */
  ecx = esi;
/* 46614d: call 0x4660a9 */
  esp -= 4; W32(esp, 0x466152u); SPILL(); f_4660a9(); if (g_unwind) return; RELOAD();
/* 466152: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 466153: ret 4 */
  esp += 8; SPILL(); return;
}

void f_466156(void) {
  LOAD_REGS();
L_466156: /* 466156: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 466157: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 46615b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46615c: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46615f: mov esi, ecx */
  esi = ecx;
/* 466161: sub eax, dword ptr [esi + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 466164: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 466166: ja 0x46616d */
  if ((!cf && !zf)) goto L_46616d;
L_466168: /* 466168: call 0x4877fe */
  esp -= 4; W32(esp, 0x46616du); SPILL(); f_4877fe(); if (g_unwind) return; RELOAD();
L_46616d: /* 46616d: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 46616f: jbe 0x4661af */
  if ((cf | zf)) goto L_4661af;
L_466171: /* 466171: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 466172: mov edi, dword ptr [esi + 0x14] */
  edi = R32((uint32_t)(esi + 0x14u));
/* 466175: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 466177: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 466179: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46617a: mov ecx, esi */
  ecx = esi;
/* 46617c: call 0x461e63 */
  esp -= 4; W32(esp, 0x466181u); SPILL(); f_461e63(); if (g_unwind) return; RELOAD();
/* 466181: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 466183: je 0x4661ae */
  if (zf) goto L_4661ae;
L_466185: /* 466185: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466189: jb 0x466190 */
  if (cf) goto L_466190;
L_46618b: /* 46618b: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 46618e: jmp 0x466193 */
  goto L_466193;
L_466190: /* 466190: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_466193: /* 466193: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 466197: mov ecx, dword ptr [esi + 0x14] */
  ecx = R32((uint32_t)(esi + 0x14u));
/* 46619a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46619c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46619d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46619e: call 0x463f20 */
  esp -= 4; W32(esp, 0x4661a3u); SPILL(); f_463f20(); if (g_unwind) return; RELOAD();
/* 4661a3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4661a6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4661a7: mov ecx, esi */
  ecx = esi;
/* 4661a9: call 0x461ed0 */
  esp -= 4; W32(esp, 0x4661aeu); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
L_4661ae: /* 4661ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4661af: /* 4661af: mov eax, esi */
  eax = esi;
/* 4661b1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4661b2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4661b3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4661b6(void) {
  LOAD_REGS();
L_4661b6: /* 4661b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4661b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4661b8: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 4661bc: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4661bf: mov esi, ecx */
  esi = ecx;
/* 4661c1: jne 0x4661c8 */
  if (!zf) goto L_4661c8;
L_4661c3: /* 4661c3: call 0x4877fe */
  esp -= 4; W32(esp, 0x4661c8u); SPILL(); f_4877fe(); if (g_unwind) return; RELOAD();
L_4661c8: /* 4661c8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4661ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4661cb: mov ecx, esi */
  ecx = esi;
/* 4661cd: call 0x461e63 */
  esp -= 4; W32(esp, 0x4661d2u); SPILL(); f_461e63(); if (g_unwind) return; RELOAD();
/* 4661d2: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4661d4: je 0x4661fa */
  if (zf) goto L_4661fa;
L_4661d6: /* 4661d6: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4661da: jb 0x4661e1 */
  if (cf) goto L_4661e1;
L_4661dc: /* 4661dc: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 4661df: jmp 0x4661e4 */
  goto L_4661e4;
L_4661e1: /* 4661e1: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_4661e4: /* 4661e4: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4661e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4661e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4661ea: call 0x463f20 */
  esp -= 4; W32(esp, 0x4661efu); SPILL(); f_463f20(); if (g_unwind) return; RELOAD();
/* 4661ef: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4661f2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4661f3: mov ecx, esi */
  ecx = esi;
/* 4661f5: call 0x461ed0 */
  esp -= 4; W32(esp, 0x4661fau); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
L_4661fa: /* 4661fa: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4661fb: mov eax, esi */
  eax = esi;
/* 4661fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4661fe: ret 8 */
  esp += 12; SPILL(); return;
}

void f_466201(void) {
  LOAD_REGS();
L_466201: /* 466201: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 466202: mov ebp, esp */
  ebp = esp;
/* 466204: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 466205: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 466208: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 466209: mov esi, ecx */
  esi = ecx;
/* 46620b: cmp dword ptr [esi + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46620e: jb 0x46621b */
  if (cf) goto L_46621b;
L_466210: /* 466210: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 466213: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 466216: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466219: jae 0x466222 */
  if (!cf) goto L_466222;
L_46621b: /* 46621b: mov ecx, esi */
  ecx = esi;
/* 46621d: call 0x487763 */
  esp -= 4; W32(esp, 0x466222u); SPILL(); f_487763(); if (g_unwind) return; RELOAD();
L_466222: /* 466222: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 466225: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 466228: sub eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46622b: cmp eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46622e: jae 0x466233 */
  if (!cf) goto L_466233;
L_466230: /* 466230: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
L_466233: /* 466233: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 466236: sub eax, dword ptr [esi + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 466239: cmp eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 46623c: ja 0x466245 */
  if ((!cf && !zf)) goto L_466245;
L_46623e: /* 46623e: mov ecx, esi */
  ecx = esi;
/* 466240: call 0x4877fe */
  esp -= 4; W32(esp, 0x466245u); SPILL(); f_4877fe(); if (g_unwind) return; RELOAD();
L_466245: /* 466245: cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 466249: jbe 0x46630d */
  if ((cf | zf)) goto L_46630d;
L_46624f: /* 46624f: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 466252: add eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 466255: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 466257: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466258: mov ecx, esi */
  ecx = esi;
/* 46625a: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 46625d: call 0x461e63 */
  esp -= 4; W32(esp, 0x466262u); SPILL(); f_461e63(); if (g_unwind) return; RELOAD();
/* 466262: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 466264: je 0x46630d */
  if (zf) goto L_46630d;
L_46626a: /* 46626a: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 46626d: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466270: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 466271: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* 466274: jb 0x46627a */
  if (cf) goto L_46627a;
L_466276: /* 466276: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 466278: jmp 0x46627c */
  goto L_46627c;
L_46627a: /* 46627a: mov ecx, edi */
  ecx = edi;
L_46627c: /* 46627c: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46627f: jb 0x466285 */
  if (cf) goto L_466285;
L_466281: /* 466281: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 466283: jmp 0x466287 */
  goto L_466287;
L_466285: /* 466285: mov eax, edi */
  eax = edi;
L_466287: /* 466287: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 46628a: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 46628c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 46628d: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46628f: add eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 466292: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 466294: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 466295: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466296: call dword ptr [0x48e1a8] */
  esp -= 4; W32(esp, 0x46629cu); SPILL(); hle_memcpy(); if (g_unwind) return; /* MSVCR70!memmove */ RELOAD();
/* 46629c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46629f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4662a2: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4662a4: jne 0x4662d8 */
  if (!zf) goto L_4662d8;
L_4662a6: /* 4662a6: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 4662a9: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4662ab: jae 0x4662b2 */
  if (!cf) goto L_4662b2;
L_4662ad: /* 4662ad: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 4662b0: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
L_4662b2: /* 4662b2: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 4662b5: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4662b8: jb 0x4662be */
  if (cf) goto L_4662be;
L_4662ba: /* 4662ba: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 4662bc: jmp 0x4662c0 */
  goto L_4662c0;
L_4662be: /* 4662be: mov eax, edi */
  eax = edi;
L_4662c0: /* 4662c0: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4662c3: jb 0x4662c7 */
  if (cf) goto L_4662c7;
L_4662c5: /* 4662c5: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
L_4662c7: /* 4662c7: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4662ca: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4662cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4662cd: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4662cf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4662d0: call dword ptr [0x48e1a8] */
  esp -= 4; W32(esp, 0x4662d6u); SPILL(); hle_memcpy(); if (g_unwind) return; /* MSVCR70!memmove */ RELOAD();
/* 4662d6: jmp 0x4662ff */
  goto L_4662ff;
L_4662d8: /* 4662d8: cmp dword ptr [eax + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4662dc: jb 0x4662e3 */
  if (cf) goto L_4662e3;
L_4662de: /* 4662de: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 4662e1: jmp 0x4662e6 */
  goto L_4662e6;
L_4662e3: /* 4662e3: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_4662e6: /* 4662e6: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4662ea: jb 0x4662ee */
  if (cf) goto L_4662ee;
L_4662ec: /* 4662ec: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
L_4662ee: /* 4662ee: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 4662f1: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4662f4: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4662f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4662f7: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4662f9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4662fa: call 0x4617bb */
  esp -= 4; W32(esp, 0x4662ffu); SPILL(); hle_memcpy(); RELOAD();
L_4662ff: /* 4662ff: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 466302: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 466305: mov ecx, esi */
  ecx = esi;
/* 466307: call 0x461ed0 */
  esp -= 4; W32(esp, 0x46630cu); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
/* 46630c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_46630d: /* 46630d: mov eax, esi */
  eax = esi;
/* 46630f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 466310: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 466311: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 466312: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_466315(void) {
  LOAD_REGS();
L_466315: /* 466315: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 466316: mov ebp, esp */
  ebp = esp;
/* 466318: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 466319: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46631a: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 46631d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46631e: mov esi, ecx */
  esi = ecx;
/* 466320: call 0x461036 */
  esp -= 4; W32(esp, 0x466325u); SPILL(); f_461036(); if (g_unwind) return; RELOAD();
/* 466325: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 466327: je 0x46634d */
  if (zf) goto L_46634d;
L_466329: /* 466329: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46632d: jb 0x466334 */
  if (cf) goto L_466334;
L_46632f: /* 46632f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 466332: jmp 0x466337 */
  goto L_466337;
L_466334: /* 466334: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_466337: /* 466337: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46633a: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 46633c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46633d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46633e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 466341: mov ecx, esi */
  ecx = esi;
/* 466343: call 0x466201 */
  esp -= 4; W32(esp, 0x466348u); SPILL(); f_466201(); if (g_unwind) return; RELOAD();
/* 466348: jmp 0x4663e6 */
  goto L_4663e6;
L_46634d: /* 46634d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46634e: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 466351: cmp dword ptr [esi + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466354: jae 0x46635d */
  if (!cf) goto L_46635d;
L_466356: /* 466356: mov ecx, esi */
  ecx = esi;
/* 466358: call 0x487763 */
  esp -= 4; W32(esp, 0x46635du); SPILL(); f_487763(); if (g_unwind) return; RELOAD();
L_46635d: /* 46635d: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 466360: sub eax, dword ptr [esi + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 466363: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 466366: ja 0x46636f */
  if ((!cf && !zf)) goto L_46636f;
L_466368: /* 466368: mov ecx, esi */
  ecx = esi;
/* 46636a: call 0x4877fe */
  esp -= 4; W32(esp, 0x46636fu); SPILL(); f_4877fe(); if (g_unwind) return; RELOAD();
L_46636f: /* 46636f: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 466373: jbe 0x4663e3 */
  if ((cf | zf)) goto L_4663e3;
L_466375: /* 466375: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 466378: add eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46637b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46637d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46637e: mov ecx, esi */
  ecx = esi;
/* 466380: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 466383: call 0x461e63 */
  esp -= 4; W32(esp, 0x466388u); SPILL(); f_461e63(); if (g_unwind) return; RELOAD();
/* 466388: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46638a: je 0x4663e3 */
  if (zf) goto L_4663e3;
L_46638c: /* 46638c: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 46638f: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466392: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* 466395: jb 0x46639b */
  if (cf) goto L_46639b;
L_466397: /* 466397: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 466399: jmp 0x46639d */
  goto L_46639d;
L_46639b: /* 46639b: mov ecx, edi */
  ecx = edi;
L_46639d: /* 46639d: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4663a0: jb 0x4663a6 */
  if (cf) goto L_4663a6;
L_4663a2: /* 4663a2: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 4663a4: jmp 0x4663a8 */
  goto L_4663a8;
L_4663a6: /* 4663a6: mov eax, edi */
  eax = edi;
L_4663a8: /* 4663a8: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 4663ab: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 4663ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4663ae: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4663b0: add eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4663b3: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4663b5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4663b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4663b7: call dword ptr [0x48e1a8] */
  esp -= 4; W32(esp, 0x4663bdu); SPILL(); hle_memcpy(); if (g_unwind) return; /* MSVCR70!memmove */ RELOAD();
/* 4663bd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4663c0: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4663c4: jb 0x4663c8 */
  if (cf) goto L_4663c8;
L_4663c6: /* 4663c6: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
L_4663c8: /* 4663c8: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4663cb: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4663cd: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4663d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4663d1: call 0x4617bb */
  esp -= 4; W32(esp, 0x4663d6u); SPILL(); hle_memcpy(); RELOAD();
/* 4663d6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4663d9: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4663dc: mov ecx, esi */
  ecx = esi;
/* 4663de: call 0x461ed0 */
  esp -= 4; W32(esp, 0x4663e3u); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
L_4663e3: /* 4663e3: mov eax, esi */
  eax = esi;
/* 4663e5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_4663e6: /* 4663e6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4663e7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4663e8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4663e9: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4663ec(void) {
  LOAD_REGS();
L_4663ec: /* 4663ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4663ed: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4663f1: mov esi, ecx */
  esi = ecx;
/* 4663f3: call 0x461028 */
  esp -= 4; W32(esp, 0x4663f8u); SPILL(); hle_strlen(); RELOAD();
/* 4663f8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4663f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4663fa: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4663fe: mov ecx, esi */
  ecx = esi;
/* 466400: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 466404: call 0x466315 */
  esp -= 4; W32(esp, 0x466409u); SPILL(); f_466315(); if (g_unwind) return; RELOAD();
/* 466409: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46640a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46640d(void) {
  LOAD_REGS();
L_46640d: /* 46640d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46640e: mov ebp, esp */
  ebp = esp;
/* 466410: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 466411: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 466414: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 466415: mov esi, ecx */
  esi = ecx;
/* 466417: cmp dword ptr [esi + 0x14], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46641a: jae 0x466421 */
  if (!cf) goto L_466421;
L_46641c: /* 46641c: call 0x487763 */
  esp -= 4; W32(esp, 0x466421u); SPILL(); f_487763(); if (g_unwind) return; RELOAD();
L_466421: /* 466421: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 466424: sub eax, dword ptr [esi + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 466427: cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 46642a: ja 0x466433 */
  if ((!cf && !zf)) goto L_466433;
L_46642c: /* 46642c: mov ecx, esi */
  ecx = esi;
/* 46642e: call 0x4877fe */
  esp -= 4; W32(esp, 0x466433u); SPILL(); f_4877fe(); if (g_unwind) return; RELOAD();
L_466433: /* 466433: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 466437: jbe 0x4664a9 */
  if ((cf | zf)) goto L_4664a9;
L_466439: /* 466439: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 46643c: add eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46643f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 466441: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466442: mov ecx, esi */
  ecx = esi;
/* 466444: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 466447: call 0x461e63 */
  esp -= 4; W32(esp, 0x46644cu); SPILL(); f_461e63(); if (g_unwind) return; RELOAD();
/* 46644c: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46644e: je 0x4664a9 */
  if (zf) goto L_4664a9;
L_466450: /* 466450: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 466453: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466456: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 466457: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* 46645a: jb 0x466460 */
  if (cf) goto L_466460;
L_46645c: /* 46645c: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 46645e: jmp 0x466462 */
  goto L_466462;
L_466460: /* 466460: mov ecx, edi */
  ecx = edi;
L_466462: /* 466462: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466465: jb 0x46646b */
  if (cf) goto L_46646b;
L_466467: /* 466467: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 466469: jmp 0x46646d */
  goto L_46646d;
L_46646b: /* 46646b: mov eax, edi */
  eax = edi;
L_46646d: /* 46646d: mov edx, dword ptr [esi + 0x14] */
  edx = R32((uint32_t)(esi + 0x14u));
/* 466470: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 466472: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 466473: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 466475: add eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 466478: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46647a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46647b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46647c: call dword ptr [0x48e1a8] */
  esp -= 4; W32(esp, 0x466482u); SPILL(); hle_memcpy(); if (g_unwind) return; /* MSVCR70!memmove */ RELOAD();
/* 466482: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 466485: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466489: jb 0x46648d */
  if (cf) goto L_46648d;
L_46648b: /* 46648b: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
L_46648d: /* 46648d: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 466490: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 466492: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 466495: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 466496: call 0x463f20 */
  esp -= 4; W32(esp, 0x46649bu); SPILL(); f_463f20(); if (g_unwind) return; RELOAD();
/* 46649b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46649e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4664a1: mov ecx, esi */
  ecx = esi;
/* 4664a3: call 0x461ed0 */
  esp -= 4; W32(esp, 0x4664a8u); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
/* 4664a8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_4664a9: /* 4664a9: mov eax, esi */
  eax = esi;
/* 4664ab: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4664ac: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4664ad: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4664ae: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4664b1(void) {
  LOAD_REGS();
L_4664b1: /* 4664b1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4664b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4664b3: mov esi, ecx */
  esi = ecx;
/* 4664b5: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4664b9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4664ba: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* 4664bd: jb 0x4664c3 */
  if (cf) goto L_4664c3;
L_4664bf: /* 4664bf: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 4664c1: jmp 0x4664c5 */
  goto L_4664c5;
L_4664c3: /* 4664c3: mov ecx, edi */
  ecx = edi;
L_4664c5: /* 4664c5: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 4664c9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4664cb: jne 0x4664d1 */
  if (!zf) goto L_4664d1;
L_4664cd: /* 4664cd: xor ebx, ebx */
  ebx = 0;
/* 4664cf: jmp 0x4664d5 */
  goto L_4664d5;
L_4664d1: /* 4664d1: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4664d3: mov ebx, eax */
  ebx = eax;
L_4664d5: /* 4664d5: push dword ptr [esp + 0x18] */
  { uint32_t v = R32((uint32_t)(esp + 0x18u)); esp -= 4; W32(esp, v); }
/* 4664d9: mov ecx, esi */
  ecx = esi;
/* 4664db: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4664dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4664de: call 0x46640d */
  esp -= 4; W32(esp, 0x4664e3u); SPILL(); f_46640d(); if (g_unwind) return; RELOAD();
/* 4664e3: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4664e7: jb 0x4664eb */
  if (cf) goto L_4664eb;
L_4664e9: /* 4664e9: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
L_4664eb: /* 4664eb: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4664ef: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4664f1: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 4664f3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4664f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4664f5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4664f6: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4664f9(void) {
  LOAD_REGS();
L_4664f9: /* 4664f9: cmp dword ptr [ecx + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4664fd: jb 0x466504 */
  if (cf) goto L_466504;
L_4664ff: /* 4664ff: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 466502: jmp 0x466507 */
  goto L_466507;
L_466504: /* 466504: lea edx, [ecx + 4] */
  edx = (uint32_t)(ecx + 0x4u);
L_466507: /* 466507: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 46650b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46650d: je 0x466511 */
  if (zf) goto L_466511;
L_46650f: /* 46650f: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_466511: /* 466511: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 466515: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 466519: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46651a: call 0x46640d */
  esp -= 4; W32(esp, 0x46651fu); SPILL(); f_46640d(); if (g_unwind) return; RELOAD();
/* 46651f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_466522(void) {
  LOAD_REGS();
L_466522: /* 466522: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 466523: mov ebp, esp */
  ebp = esp;
/* 466525: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 466526: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 466529: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46652a: mov edi, ecx */
  edi = ecx;
/* 46652c: cmp dword ptr [edi + 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x14u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46652f: jae 0x466536 */
  if (!cf) goto L_466536;
L_466531: /* 466531: call 0x487763 */
  esp -= 4; W32(esp, 0x466536u); SPILL(); f_487763(); if (g_unwind) return; RELOAD();
L_466536: /* 466536: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 466539: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46653b: cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46653e: jae 0x466543 */
  if (!cf) goto L_466543;
L_466540: /* 466540: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_466543: /* 466543: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 466547: jbe 0x466595 */
  if ((cf | zf)) goto L_466595;
L_466549: /* 466549: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46654a: mov ebx, dword ptr [edi + 0x18] */
  ebx = R32((uint32_t)(edi + 0x18u));
/* 46654d: cmp ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466550: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 466553: jb 0x466559 */
  if (cf) goto L_466559;
L_466555: /* 466555: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 466557: jmp 0x46655b */
  goto L_46655b;
L_466559: /* 466559: mov edx, ecx */
  edx = ecx;
L_46655b: /* 46655b: cmp ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46655e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46655f: jb 0x466563 */
  if (cf) goto L_466563;
L_466561: /* 466561: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
L_466563: /* 466563: sub eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 466566: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 466568: add edx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 46656b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46656c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 46656d: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46656f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 466570: call dword ptr [0x48e1a8] */
  esp -= 4; W32(esp, 0x466576u); SPILL(); hle_memcpy(); if (g_unwind) return; /* MSVCR70!memmove */ RELOAD();
/* 466576: mov esi, dword ptr [edi + 0x14] */
  esi = R32((uint32_t)(edi + 0x14u));
/* 466579: sub esi, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 46657c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46657f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 466581: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 466582: mov ecx, edi */
  ecx = edi;
/* 466584: call 0x461e63 */
  esp -= 4; W32(esp, 0x466589u); SPILL(); f_461e63(); if (g_unwind) return; RELOAD();
/* 466589: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46658b: je 0x466595 */
  if (zf) goto L_466595;
L_46658d: /* 46658d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46658e: mov ecx, edi */
  ecx = edi;
/* 466590: call 0x461ed0 */
  esp -= 4; W32(esp, 0x466595u); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
L_466595: /* 466595: mov eax, edi */
  eax = edi;
/* 466597: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 466598: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 466599: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46659a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46659d(void) {
  LOAD_REGS();
L_46659d: /* 46659d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46659e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46659f: mov esi, ecx */
  esi = ecx;
/* 4665a1: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4665a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4665a6: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* 4665a9: jb 0x4665af */
  if (cf) goto L_4665af;
L_4665ab: /* 4665ab: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 4665ad: jmp 0x4665b1 */
  goto L_4665b1;
L_4665af: /* 4665af: mov ecx, edi */
  ecx = edi;
L_4665b1: /* 4665b1: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 4665b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4665b7: jne 0x4665bd */
  if (!zf) goto L_4665bd;
L_4665b9: /* 4665b9: xor ebx, ebx */
  ebx = 0;
/* 4665bb: jmp 0x4665c1 */
  goto L_4665c1;
L_4665bd: /* 4665bd: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4665bf: mov ebx, eax */
  ebx = eax;
L_4665c1: /* 4665c1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4665c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4665c4: mov ecx, esi */
  ecx = esi;
/* 4665c6: call 0x466522 */
  esp -= 4; W32(esp, 0x4665cbu); SPILL(); f_466522(); if (g_unwind) return; RELOAD();
/* 4665cb: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4665cf: jb 0x4665d3 */
  if (cf) goto L_4665d3;
L_4665d1: /* 4665d1: mov edi, dword ptr [edi] */
  edi = R32((uint32_t)(edi));
L_4665d3: /* 4665d3: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 4665d7: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 4665d9: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 4665db: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4665dc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4665dd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4665de: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4665e1(void) {
  LOAD_REGS();
L_4665e1: /* 4665e1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4665e2: mov ebp, esp */
  ebp = esp;
/* 4665e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4665e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4665e6: mov esi, ecx */
  esi = ecx;
/* 4665e8: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4665ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4665ed: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 4665f0: jb 0x4665f6 */
  if (cf) goto L_4665f6;
L_4665f2: /* 4665f2: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 4665f4: jmp 0x4665f8 */
  goto L_4665f8;
L_4665f6: /* 4665f6: mov eax, ebx */
  eax = ebx;
L_4665f8: /* 4665f8: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4665fc: jne 0x466602 */
  if (!zf) goto L_466602;
L_4665fe: /* 4665fe: xor edi, edi */
  edi = 0;
/* 466600: jmp 0x466607 */
  goto L_466607;
L_466602: /* 466602: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 466605: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
L_466607: /* 466607: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 46660a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46660c: je 0x466611 */
  if (zf) goto L_466611;
L_46660e: /* 46660e: sub eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_466611: /* 466611: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466612: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 466613: mov ecx, esi */
  ecx = esi;
/* 466615: call 0x466522 */
  esp -= 4; W32(esp, 0x46661au); SPILL(); f_466522(); if (g_unwind) return; RELOAD();
/* 46661a: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46661e: jb 0x466622 */
  if (cf) goto L_466622;
L_466620: /* 466620: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
L_466622: /* 466622: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 466625: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 466627: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 466628: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 466629: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 46662b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46662c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46662d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_466630(void) {
  LOAD_REGS();
L_466630: /* 466630: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 466631: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 466632: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 466633: push esp */
  { uint32_t v = esp; esp -= 4; W32(esp, v); }
/* 466634: mov esi, ecx */
  esi = ecx;
/* 466636: call 0x465162 */
  esp -= 4; W32(esp, 0x46663bu); SPILL(); f_465162(); if (g_unwind) return; RELOAD();
/* 46663b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46663c: push esp */
  { uint32_t v = esp; esp -= 4; W32(esp, v); }
/* 46663d: mov ecx, esi */
  ecx = esi;
/* 46663f: call 0x46514b */
  esp -= 4; W32(esp, 0x466644u); SPILL(); f_46514b(); if (g_unwind) return; RELOAD();
/* 466644: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 466648: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466649: mov ecx, esi */
  ecx = esi;
/* 46664b: call 0x4665e1 */
  esp -= 4; W32(esp, 0x466650u); SPILL(); f_4665e1(); if (g_unwind) return; RELOAD();
/* 466650: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 466651: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 466652: ret  */
  esp += 4; SPILL(); return;
}

void f_466653(void) {
  LOAD_REGS();
L_466653: /* 466653: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 466654: mov ebp, esp */
  ebp = esp;
/* 466656: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 466657: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 466658: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46665b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46665c: mov edi, ecx */
  edi = ecx;
/* 46665e: cmp dword ptr [edi + 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x14u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466661: jb 0x46666e */
  if (cf) goto L_46666e;
L_466663: /* 466663: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 466666: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 466669: cmp eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46666c: jae 0x466675 */
  if (!cf) goto L_466675;
L_46666e: /* 46666e: mov ecx, edi */
  ecx = edi;
/* 466670: call 0x487763 */
  esp -= 4; W32(esp, 0x466675u); SPILL(); f_487763(); if (g_unwind) return; RELOAD();
L_466675: /* 466675: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 466678: mov eax, ecx */
  eax = ecx;
/* 46667a: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46667c: cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46667f: jae 0x466684 */
  if (!cf) goto L_466684;
L_466681: /* 466681: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
L_466684: /* 466684: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 466687: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 46668a: sub eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46668d: cmp eax, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466690: jae 0x466695 */
  if (!cf) goto L_466695;
L_466692: /* 466692: mov dword ptr [ebp + 0x18], eax */
  W32((uint32_t)(ebp + 0x18u), eax);
L_466695: /* 466695: sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 466698: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46669b: sub eax, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46669e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4666a0: ja 0x4666a9 */
  if ((!cf && !zf)) goto L_4666a9;
L_4666a2: /* 4666a2: mov ecx, edi */
  ecx = edi;
/* 4666a4: call 0x4877fe */
  esp -= 4; W32(esp, 0x4666a9u); SPILL(); f_4877fe(); if (g_unwind) return; RELOAD();
L_4666a9: /* 4666a9: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 4666ac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4666ad: mov ecx, eax */
  ecx = eax;
/* 4666af: sub ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 4666b2: mov ebx, eax */
  ebx = eax;
/* 4666b4: add ecx, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4666b7: sub ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 4666b9: sub ebx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 4666bc: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4666be: mov dword ptr [ebp + 8], ebx */
  W32((uint32_t)(ebp + 0x8u), ebx);
/* 4666c1: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 4666c4: jae 0x4666d0 */
  if (!cf) goto L_4666d0;
L_4666c6: /* 4666c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4666c8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4666c9: mov ecx, edi */
  ecx = edi;
/* 4666cb: call 0x461e63 */
  esp -= 4; W32(esp, 0x4666d0u); SPILL(); f_461e63(); if (g_unwind) return; RELOAD();
L_4666d0: /* 4666d0: cmp edi, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4666d3: je 0x466738 */
  if (zf) goto L_466738;
L_4666d5: /* 4666d5: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 4666d8: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4666db: lea ebx, [edi + 4] */
  ebx = (uint32_t)(edi + 0x4u);
/* 4666de: jb 0x4666e4 */
  if (cf) goto L_4666e4;
L_4666e0: /* 4666e0: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 4666e2: jmp 0x4666e6 */
  goto L_4666e6;
L_4666e4: /* 4666e4: mov ecx, ebx */
  ecx = ebx;
L_4666e6: /* 4666e6: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4666e9: jb 0x4666ef */
  if (cf) goto L_4666ef;
L_4666eb: /* 4666eb: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 4666ed: jmp 0x4666f1 */
  goto L_4666f1;
L_4666ef: /* 4666ef: mov eax, ebx */
  eax = ebx;
L_4666f1: /* 4666f1: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4666f4: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4666f6: add ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4666f9: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4666fb: add eax, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4666fe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4666ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466700: call dword ptr [0x48e1a8] */
  esp -= 4; W32(esp, 0x466706u); SPILL(); hle_memcpy(); if (g_unwind) return; /* MSVCR70!memmove */ RELOAD();
/* 466706: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 466709: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46670c: cmp dword ptr [eax + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466710: jb 0x466717 */
  if (cf) goto L_466717;
L_466712: /* 466712: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 466715: jmp 0x46671a */
  goto L_46671a;
L_466717: /* 466717: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_46671a: /* 46671a: cmp dword ptr [edi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46671e: jb 0x466722 */
  if (cf) goto L_466722;
L_466720: /* 466720: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
L_466722: /* 466722: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 466725: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 466728: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46672a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46672b: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 46672d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46672e: call 0x4617bb */
  esp -= 4; W32(esp, 0x466733u); SPILL(); hle_memcpy(); RELOAD();
/* 466733: jmp 0x46690c */
  goto L_46690c;
L_466738: /* 466738: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46673b: cmp dword ptr [ebp + 0x18], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x18u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 46673e: ja 0x4667a3 */
  if ((!cf && !zf)) goto L_4667a3;
L_466740: /* 466740: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 466743: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466746: jb 0x46674d */
  if (cf) goto L_46674d;
L_466748: /* 466748: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 46674b: jmp 0x466750 */
  goto L_466750;
L_46674d: /* 46674d: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
L_466750: /* 466750: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466753: jb 0x46675a */
  if (cf) goto L_46675a;
L_466755: /* 466755: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 466758: jmp 0x46675d */
  goto L_46675d;
L_46675a: /* 46675a: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
L_46675d: /* 46675d: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 466760: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 466763: mov ebx, dword ptr [0x48e1a8] */
  ebx = R32((uint32_t)(0x48e1a8u));
/* 466769: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46676b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46676c: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46676e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46676f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x466771u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 466771: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 466774: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 466777: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46677a: jb 0x466781 */
  if (cf) goto L_466781;
L_46677c: /* 46677c: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 46677f: jmp 0x466784 */
  goto L_466784;
L_466781: /* 466781: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
L_466784: /* 466784: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466787: jb 0x46678e */
  if (cf) goto L_46678e;
L_466789: /* 466789: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 46678c: jmp 0x466791 */
  goto L_466791;
L_46678e: /* 46678e: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
L_466791: /* 466791: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 466794: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 466796: add ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 466799: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46679b: add eax, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46679e: jmp 0x466908 */
  goto L_466908;
L_4667a3: /* 4667a3: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 4667a6: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4667a8: ja 0x46680b */
  if ((!cf && !zf)) goto L_46680b;
L_4667aa: /* 4667aa: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 4667ad: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4667b0: jb 0x4667b7 */
  if (cf) goto L_4667b7;
L_4667b2: /* 4667b2: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 4667b5: jmp 0x4667ba */
  goto L_4667ba;
L_4667b7: /* 4667b7: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
L_4667ba: /* 4667ba: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4667bd: jb 0x4667c4 */
  if (cf) goto L_4667c4;
L_4667bf: /* 4667bf: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 4667c2: jmp 0x4667c7 */
  goto L_4667c7;
L_4667c4: /* 4667c4: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
L_4667c7: /* 4667c7: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4667c9: add ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4667cc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4667cd: mov ebx, dword ptr [0x48e1a8] */
  ebx = R32((uint32_t)(0x48e1a8u));
/* 4667d3: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4667d5: add eax, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4667d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4667d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4667da: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x4667dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4667dc: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 4667df: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4667e2: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4667e5: jb 0x4667ec */
  if (cf) goto L_4667ec;
L_4667e7: /* 4667e7: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 4667ea: jmp 0x4667ef */
  goto L_4667ef;
L_4667ec: /* 4667ec: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
L_4667ef: /* 4667ef: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4667f2: jb 0x4667f9 */
  if (cf) goto L_4667f9;
L_4667f4: /* 4667f4: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 4667f7: jmp 0x4667fc */
  goto L_4667fc;
L_4667f9: /* 4667f9: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
L_4667fc: /* 4667fc: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 4667ff: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 466802: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 466804: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 466806: jmp 0x466908 */
  goto L_466908;
L_46680b: /* 46680b: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46680d: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 46680f: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 466812: ja 0x466878 */
  if ((!cf && !zf)) goto L_466878;
L_466814: /* 466814: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466817: jb 0x46681e */
  if (cf) goto L_46681e;
L_466819: /* 466819: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 46681c: jmp 0x466821 */
  goto L_466821;
L_46681e: /* 46681e: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
L_466821: /* 466821: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466824: jb 0x46682b */
  if (cf) goto L_46682b;
L_466826: /* 466826: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 466829: jmp 0x46682e */
  goto L_46682e;
L_46682b: /* 46682b: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
L_46682e: /* 46682e: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 466830: add ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 466833: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 466834: mov ebx, dword ptr [0x48e1a8] */
  ebx = R32((uint32_t)(0x48e1a8u));
/* 46683a: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46683c: add eax, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46683f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 466840: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466841: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x466843u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 466843: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 466846: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 466849: cmp ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46684c: jb 0x466853 */
  if (cf) goto L_466853;
L_46684e: /* 46684e: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 466851: jmp 0x466856 */
  goto L_466856;
L_466853: /* 466853: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
L_466856: /* 466856: cmp ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466859: jb 0x466860 */
  if (cf) goto L_466860;
L_46685b: /* 46685b: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 46685e: jmp 0x466863 */
  goto L_466863;
L_466860: /* 466860: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
L_466863: /* 466863: sub eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 466866: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 466869: add eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46686c: add eax, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46686f: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 466871: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466872: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 466873: jmp 0x46690a */
  goto L_46690a;
L_466878: /* 466878: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46687b: jb 0x466882 */
  if (cf) goto L_466882;
L_46687d: /* 46687d: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 466880: jmp 0x466885 */
  goto L_466885;
L_466882: /* 466882: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
L_466885: /* 466885: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466888: jb 0x46688f */
  if (cf) goto L_46688f;
L_46688a: /* 46688a: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 46688d: jmp 0x466892 */
  goto L_466892;
L_46688f: /* 46688f: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
L_466892: /* 466892: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 466895: mov ebx, dword ptr [0x48e1a8] */
  ebx = R32((uint32_t)(0x48e1a8u));
/* 46689b: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46689d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46689e: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4668a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4668a1: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x4668a3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4668a3: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 4668a6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4668a9: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4668ac: jb 0x4668b3 */
  if (cf) goto L_4668b3;
L_4668ae: /* 4668ae: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 4668b1: jmp 0x4668b6 */
  goto L_4668b6;
L_4668b3: /* 4668b3: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
L_4668b6: /* 4668b6: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4668b9: jb 0x4668c0 */
  if (cf) goto L_4668c0;
L_4668bb: /* 4668bb: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 4668be: jmp 0x4668c3 */
  goto L_4668c3;
L_4668c0: /* 4668c0: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
L_4668c3: /* 4668c3: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4668c6: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4668c8: add ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4668cb: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4668cd: add eax, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4668d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4668d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4668d2: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x4668d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4668d4: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 4668d7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 4668da: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4668dd: jb 0x4668e4 */
  if (cf) goto L_4668e4;
L_4668df: /* 4668df: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 4668e2: jmp 0x4668e7 */
  goto L_4668e7;
L_4668e4: /* 4668e4: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
L_4668e7: /* 4668e7: cmp eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4668ea: jb 0x4668f1 */
  if (cf) goto L_4668f1;
L_4668ec: /* 4668ec: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 4668ef: jmp 0x4668f4 */
  goto L_4668f4;
L_4668f1: /* 4668f1: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
L_4668f4: /* 4668f4: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 4668f7: sub edx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 4668fa: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4668fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4668fd: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 466900: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 466902: add ecx, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 466905: add eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_466908: /* 466908: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 466909: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_46690a: /* 46690a: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x46690cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_46690c: /* 46690c: mov esi, dword ptr [ebp - 4] */
  esi = R32((uint32_t)(ebp + 0xfffffffcu));
/* 46690f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 466912: cmp dword ptr [edi + 0x14], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x14u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466915: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 466916: jb 0x466926 */
  if (cf) goto L_466926;
L_466918: /* 466918: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46691a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46691b: mov ecx, edi */
  ecx = edi;
/* 46691d: call 0x461e63 */
  esp -= 4; W32(esp, 0x466922u); SPILL(); f_461e63(); if (g_unwind) return; RELOAD();
/* 466922: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 466924: je 0x46692e */
  if (zf) goto L_46692e;
L_466926: /* 466926: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 466927: mov ecx, edi */
  ecx = edi;
/* 466929: call 0x461ed0 */
  esp -= 4; W32(esp, 0x46692eu); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
L_46692e: /* 46692e: mov eax, edi */
  eax = edi;
/* 466930: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 466931: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 466932: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 466933: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_466936(void) {
  LOAD_REGS();
L_466936: /* 466936: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 466937: mov ebp, esp */
  ebp = esp;
/* 466939: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46693a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46693b: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 46693e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46693f: mov esi, ecx */
  esi = ecx;
/* 466941: call 0x461036 */
  esp -= 4; W32(esp, 0x466946u); SPILL(); f_461036(); if (g_unwind) return; RELOAD();
/* 466946: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 466948: je 0x466971 */
  if (zf) goto L_466971;
L_46694a: /* 46694a: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46694e: jb 0x466955 */
  if (cf) goto L_466955;
L_466950: /* 466950: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 466953: jmp 0x466958 */
  goto L_466958;
L_466955: /* 466955: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_466958: /* 466958: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 46695b: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 46695d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46695e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46695f: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 466962: mov ecx, esi */
  ecx = esi;
/* 466964: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 466967: call 0x466653 */
  esp -= 4; W32(esp, 0x46696cu); SPILL(); f_466653(); if (g_unwind) return; RELOAD();
/* 46696c: jmp 0x466a68 */
  goto L_466a68;
L_466971: /* 466971: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 466974: cmp dword ptr [esi + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466977: jae 0x466980 */
  if (!cf) goto L_466980;
L_466979: /* 466979: mov ecx, esi */
  ecx = esi;
/* 46697b: call 0x487763 */
  esp -= 4; W32(esp, 0x466980u); SPILL(); f_487763(); if (g_unwind) return; RELOAD();
L_466980: /* 466980: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 466983: mov ecx, eax */
  ecx = eax;
/* 466985: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 466987: cmp ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46698a: jae 0x46698f */
  if (!cf) goto L_46698f;
L_46698c: /* 46698c: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
L_46698f: /* 46698f: sub eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 466992: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 466995: sub ecx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 466998: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 46699a: ja 0x4669a3 */
  if ((!cf && !zf)) goto L_4669a3;
L_46699c: /* 46699c: mov ecx, esi */
  ecx = esi;
/* 46699e: call 0x4877fe */
  esp -= 4; W32(esp, 0x4669a3u); SPILL(); f_4877fe(); if (g_unwind) return; RELOAD();
L_4669a3: /* 4669a3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 4669a6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4669a7: mov ebx, dword ptr [esi + 0x14] */
  ebx = R32((uint32_t)(esi + 0x14u));
/* 4669aa: sub ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 4669ac: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 4669ae: cmp dword ptr [ebp + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4669b1: jae 0x4669e1 */
  if (!cf) goto L_4669e1;
L_4669b3: /* 4669b3: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 4669b6: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4669b9: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 4669bc: jb 0x4669c2 */
  if (cf) goto L_4669c2;
L_4669be: /* 4669be: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 4669c0: jmp 0x4669c4 */
  goto L_4669c4;
L_4669c2: /* 4669c2: mov ecx, eax */
  ecx = eax;
L_4669c4: /* 4669c4: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4669c7: jb 0x4669cb */
  if (cf) goto L_4669cb;
L_4669c9: /* 4669c9: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
L_4669cb: /* 4669cb: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4669cd: add ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4669d0: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4669d2: add eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4669d5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4669d6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4669d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4669d8: call dword ptr [0x48e1a8] */
  esp -= 4; W32(esp, 0x4669deu); SPILL(); hle_memcpy(); if (g_unwind) return; /* MSVCR70!memmove */ RELOAD();
/* 4669de: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_4669e1: /* 4669e1: xor ecx, ecx */
  ecx = 0;
/* 4669e3: cmp dword ptr [ebp + 0x14], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4669e6: ja 0x4669ed */
  if ((!cf && !zf)) goto L_4669ed;
L_4669e8: /* 4669e8: cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4669eb: jbe 0x466a65 */
  if ((cf | zf)) goto L_466a65;
L_4669ed: /* 4669ed: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 4669f0: sub eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 4669f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4669f4: add eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 4669f7: mov ecx, esi */
  ecx = esi;
/* 4669f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4669fa: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 4669fd: call 0x461e63 */
  esp -= 4; W32(esp, 0x466a02u); SPILL(); f_461e63(); if (g_unwind) return; RELOAD();
/* 466a02: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 466a04: je 0x466a65 */
  if (zf) goto L_466a65;
L_466a06: /* 466a06: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 466a09: cmp eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466a0c: jae 0x466a3c */
  if (!cf) goto L_466a3c;
L_466a0e: /* 466a0e: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 466a11: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466a14: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 466a17: jb 0x466a1d */
  if (cf) goto L_466a1d;
L_466a19: /* 466a19: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 466a1b: jmp 0x466a1f */
  goto L_466a1f;
L_466a1d: /* 466a1d: mov ecx, eax */
  ecx = eax;
L_466a1f: /* 466a1f: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466a22: jb 0x466a26 */
  if (cf) goto L_466a26;
L_466a24: /* 466a24: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
L_466a26: /* 466a26: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 466a28: add ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 466a2b: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 466a2d: add eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 466a30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 466a31: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 466a32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466a33: call dword ptr [0x48e1a8] */
  esp -= 4; W32(esp, 0x466a39u); SPILL(); hle_memcpy(); if (g_unwind) return; /* MSVCR70!memmove */ RELOAD();
/* 466a39: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_466a3c: /* 466a3c: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466a40: jb 0x466a47 */
  if (cf) goto L_466a47;
L_466a42: /* 466a42: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 466a45: jmp 0x466a4a */
  goto L_466a4a;
L_466a47: /* 466a47: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_466a4a: /* 466a4a: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 466a4d: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 466a4f: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 466a52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466a53: call 0x4617bb */
  esp -= 4; W32(esp, 0x466a58u); SPILL(); hle_memcpy(); RELOAD();
/* 466a58: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 466a5b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 466a5e: mov ecx, esi */
  ecx = esi;
/* 466a60: call 0x461ed0 */
  esp -= 4; W32(esp, 0x466a65u); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
L_466a65: /* 466a65: mov eax, esi */
  eax = esi;
/* 466a67: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_466a68: /* 466a68: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 466a69: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 466a6a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 466a6b: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_466a6e(void) {
  LOAD_REGS();
L_466a6e: /* 466a6e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 466a6f: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 466a73: mov esi, ecx */
  esi = ecx;
/* 466a75: call 0x461028 */
  esp -= 4; W32(esp, 0x466a7au); SPILL(); hle_strlen(); RELOAD();
/* 466a7a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 466a7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466a7c: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 466a80: mov ecx, esi */
  ecx = esi;
/* 466a82: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 466a86: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 466a8a: call 0x466936 */
  esp -= 4; W32(esp, 0x466a8fu); SPILL(); f_466936(); if (g_unwind) return; RELOAD();
/* 466a8f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 466a90: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_466a93(void) {
  LOAD_REGS();
L_466a93: /* 466a93: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 466a94: mov ebp, esp */
  ebp = esp;
/* 466a96: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 466a97: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 466a98: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 466a99: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 466a9c: mov esi, ecx */
  esi = ecx;
/* 466a9e: cmp dword ptr [esi + 0x14], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x14u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466aa1: jae 0x466aa8 */
  if (!cf) goto L_466aa8;
L_466aa3: /* 466aa3: call 0x487763 */
  esp -= 4; W32(esp, 0x466aa8u); SPILL(); f_487763(); if (g_unwind) return; RELOAD();
L_466aa8: /* 466aa8: mov eax, dword ptr [esi + 0x14] */
  eax = R32((uint32_t)(esi + 0x14u));
/* 466aab: mov ecx, eax */
  ecx = eax;
/* 466aad: sub ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 466aaf: cmp ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466ab2: jae 0x466ab7 */
  if (!cf) goto L_466ab7;
L_466ab4: /* 466ab4: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
L_466ab7: /* 466ab7: sub eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 466aba: or ecx, 0xffffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 466abd: sub ecx, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 466ac0: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 466ac2: ja 0x466acb */
  if ((!cf && !zf)) goto L_466acb;
L_466ac4: /* 466ac4: mov ecx, esi */
  ecx = esi;
/* 466ac6: call 0x4877fe */
  esp -= 4; W32(esp, 0x466acbu); SPILL(); f_4877fe(); if (g_unwind) return; RELOAD();
L_466acb: /* 466acb: mov ebx, dword ptr [esi + 0x14] */
  ebx = R32((uint32_t)(esi + 0x14u));
/* 466ace: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 466ad1: sub ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 466ad3: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 466ad5: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466ad8: jae 0x466b08 */
  if (!cf) goto L_466b08;
L_466ada: /* 466ada: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 466add: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466ae0: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 466ae3: jb 0x466ae9 */
  if (cf) goto L_466ae9;
L_466ae5: /* 466ae5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 466ae7: jmp 0x466aeb */
  goto L_466aeb;
L_466ae9: /* 466ae9: mov ecx, eax */
  ecx = eax;
L_466aeb: /* 466aeb: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466aee: jb 0x466af2 */
  if (cf) goto L_466af2;
L_466af0: /* 466af0: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
L_466af2: /* 466af2: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 466af4: add ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 466af7: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 466af9: add eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 466afc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 466afd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 466afe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466aff: call dword ptr [0x48e1a8] */
  esp -= 4; W32(esp, 0x466b05u); SPILL(); hle_memcpy(); if (g_unwind) return; /* MSVCR70!memmove */ RELOAD();
/* 466b05: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_466b08: /* 466b08: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 466b0b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 466b0d: ja 0x466b15 */
  if ((!cf && !zf)) goto L_466b15;
L_466b0f: /* 466b0f: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 466b13: jbe 0x466b8b */
  if ((cf | zf)) goto L_466b8b;
L_466b15: /* 466b15: sub eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 466b18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 466b1a: add eax, dword ptr [esi + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 466b1d: mov ecx, esi */
  ecx = esi;
/* 466b1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466b20: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 466b23: call 0x461e63 */
  esp -= 4; W32(esp, 0x466b28u); SPILL(); f_461e63(); if (g_unwind) return; RELOAD();
/* 466b28: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 466b2a: je 0x466b8b */
  if (zf) goto L_466b8b;
L_466b2c: /* 466b2c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 466b2f: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466b32: jae 0x466b62 */
  if (!cf) goto L_466b62;
L_466b34: /* 466b34: mov edx, dword ptr [esi + 0x18] */
  edx = R32((uint32_t)(esi + 0x18u));
/* 466b37: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466b3a: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 466b3d: jb 0x466b43 */
  if (cf) goto L_466b43;
L_466b3f: /* 466b3f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 466b41: jmp 0x466b45 */
  goto L_466b45;
L_466b43: /* 466b43: mov ecx, eax */
  ecx = eax;
L_466b45: /* 466b45: cmp edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466b48: jb 0x466b4c */
  if (cf) goto L_466b4c;
L_466b4a: /* 466b4a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
L_466b4c: /* 466b4c: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 466b4e: add ecx, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 466b51: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 466b53: add eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 466b56: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 466b57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 466b58: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466b59: call dword ptr [0x48e1a8] */
  esp -= 4; W32(esp, 0x466b5fu); SPILL(); hle_memcpy(); if (g_unwind) return; /* MSVCR70!memmove */ RELOAD();
/* 466b5f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_466b62: /* 466b62: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466b66: jb 0x466b6d */
  if (cf) goto L_466b6d;
L_466b68: /* 466b68: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 466b6b: jmp 0x466b70 */
  goto L_466b70;
L_466b6d: /* 466b6d: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
L_466b70: /* 466b70: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 466b73: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 466b75: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 466b78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466b79: call 0x463f20 */
  esp -= 4; W32(esp, 0x466b7eu); SPILL(); f_463f20(); if (g_unwind) return; RELOAD();
/* 466b7e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 466b81: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 466b84: mov ecx, esi */
  ecx = esi;
/* 466b86: call 0x461ed0 */
  esp -= 4; W32(esp, 0x466b8bu); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
L_466b8b: /* 466b8b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 466b8c: mov eax, esi */
  eax = esi;
/* 466b8e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 466b8f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 466b90: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 466b91: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_466b94(void) {
  LOAD_REGS();
L_466b94: /* 466b94: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 466b98: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 466b9a: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 466b9e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 466b9f: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 466ba3: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 466ba7: jne 0x466bad */
  if (!zf) goto L_466bad;
L_466ba9: /* 466ba9: xor eax, eax */
  eax = 0;
/* 466bab: jmp 0x466baf */
  goto L_466baf;
L_466bad: /* 466bad: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_466baf: /* 466baf: cmp dword ptr [ecx + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466bb3: jb 0x466bba */
  if (cf) goto L_466bba;
L_466bb5: /* 466bb5: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 466bb8: jmp 0x466bbd */
  goto L_466bbd;
L_466bba: /* 466bba: lea esi, [ecx + 4] */
  esi = (uint32_t)(ecx + 0x4u);
L_466bbd: /* 466bbd: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 466bbf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466bc0: je 0x466bc4 */
  if (zf) goto L_466bc4;
L_466bc2: /* 466bc2: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_466bc4: /* 466bc4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 466bc5: call 0x466936 */
  esp -= 4; W32(esp, 0x466bcau); SPILL(); f_466936(); if (g_unwind) return; RELOAD();
/* 466bca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 466bcb: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_466bce(void) {
  LOAD_REGS();
L_466bce: /* 466bce: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 466bd2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 466bd4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 466bd8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 466bd9: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 466bdd: jne 0x466be3 */
  if (!zf) goto L_466be3;
L_466bdf: /* 466bdf: xor eax, eax */
  eax = 0;
/* 466be1: jmp 0x466be5 */
  goto L_466be5;
L_466be3: /* 466be3: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_466be5: /* 466be5: cmp dword ptr [ecx + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466be9: jb 0x466bf0 */
  if (cf) goto L_466bf0;
L_466beb: /* 466beb: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 466bee: jmp 0x466bf3 */
  goto L_466bf3;
L_466bf0: /* 466bf0: lea esi, [ecx + 4] */
  esi = (uint32_t)(ecx + 0x4u);
L_466bf3: /* 466bf3: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 466bf5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466bf6: je 0x466bfa */
  if (zf) goto L_466bfa;
L_466bf8: /* 466bf8: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_466bfa: /* 466bfa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 466bfb: call 0x466a6e */
  esp -= 4; W32(esp, 0x466c00u); SPILL(); f_466a6e(); if (g_unwind) return; RELOAD();
/* 466c00: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 466c01: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_466c04(void) {
  LOAD_REGS();
L_466c04: /* 466c04: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 466c08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 466c0a: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 466c0e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 466c0f: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 466c13: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 466c17: jne 0x466c1d */
  if (!zf) goto L_466c1d;
L_466c19: /* 466c19: xor eax, eax */
  eax = 0;
/* 466c1b: jmp 0x466c1f */
  goto L_466c1f;
L_466c1d: /* 466c1d: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_466c1f: /* 466c1f: cmp dword ptr [ecx + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466c23: jb 0x466c2a */
  if (cf) goto L_466c2a;
L_466c25: /* 466c25: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 466c28: jmp 0x466c2d */
  goto L_466c2d;
L_466c2a: /* 466c2a: lea esi, [ecx + 4] */
  esi = (uint32_t)(ecx + 0x4u);
L_466c2d: /* 466c2d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 466c2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466c30: je 0x466c34 */
  if (zf) goto L_466c34;
L_466c32: /* 466c32: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_466c34: /* 466c34: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 466c35: call 0x466a93 */
  esp -= 4; W32(esp, 0x466c3au); SPILL(); f_466a93(); if (g_unwind) return; RELOAD();
/* 466c3a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 466c3b: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_466c3e(void) {
  LOAD_REGS();
L_466c3e: /* 466c3e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 466c3f: mov ebp, esp */
  ebp = esp;
/* 466c41: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 466c44: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 466c47: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 466c48: mov esi, ecx */
  esi = ecx;
/* 466c4a: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 466c4d: jne 0x466c77 */
  if (!zf) goto L_466c77;
L_466c4f: /* 466c4f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 466c52: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 466c54: je 0x466c58 */
  if (zf) goto L_466c58;
L_466c56: /* 466c56: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_466c58: /* 466c58: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466c5c: jb 0x466c63 */
  if (cf) goto L_466c63;
L_466c5e: /* 466c5e: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 466c61: jmp 0x466c66 */
  goto L_466c66;
L_466c63: /* 466c63: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
L_466c66: /* 466c66: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 466c68: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466c69: je 0x466c6d */
  if (zf) goto L_466c6d;
L_466c6b: /* 466c6b: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_466c6d: /* 466c6d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 466c6e: mov ecx, esi */
  ecx = esi;
/* 466c70: call 0x466522 */
  esp -= 4; W32(esp, 0x466c75u); SPILL(); f_466522(); if (g_unwind) return; RELOAD();
/* 466c75: jmp 0x466ca4 */
  goto L_466ca4;
L_466c77: /* 466c77: sub eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 466c7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466c7b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 466c7e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 466c80: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 466c83: je 0x466c87 */
  if (zf) goto L_466c87;
L_466c85: /* 466c85: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_466c87: /* 466c87: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466c8b: jb 0x466c92 */
  if (cf) goto L_466c92;
L_466c8d: /* 466c8d: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 466c90: jmp 0x466c95 */
  goto L_466c95;
L_466c92: /* 466c92: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
L_466c95: /* 466c95: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 466c97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466c98: je 0x466c9c */
  if (zf) goto L_466c9c;
L_466c9a: /* 466c9a: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_466c9c: /* 466c9c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 466c9d: mov ecx, esi */
  ecx = esi;
/* 466c9f: call 0x466936 */
  esp -= 4; W32(esp, 0x466ca4u); SPILL(); f_466936(); if (g_unwind) return; RELOAD();
L_466ca4: /* 466ca4: mov eax, esi */
  eax = esi;
/* 466ca6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 466ca7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 466ca8: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_466cab(void) {
  LOAD_REGS();
L_466cab: /* 466cab: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 466cac: mov ebp, esp */
  ebp = esp;
/* 466cae: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 466caf: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 466cb2: mov esi, ecx */
  esi = ecx;
/* 466cb4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 466cb5: push esp */
  { uint32_t v = esp; esp -= 4; W32(esp, v); }
/* 466cb6: call 0x465162 */
  esp -= 4; W32(esp, 0x466cbbu); SPILL(); f_465162(); if (g_unwind) return; RELOAD();
/* 466cbb: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 466cbe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466cbf: mov ecx, esi */
  ecx = esi;
/* 466cc1: call 0x4664b1 */
  esp -= 4; W32(esp, 0x466cc6u); SPILL(); f_4664b1(); if (g_unwind) return; RELOAD();
/* 466cc6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 466cc7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 466cc8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_466ccb(void) {
  LOAD_REGS();
L_466ccb: /* 466ccb: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 466cce: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 466cd2: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 466cd4: ja 0x466ce0 */
  if ((!cf && !zf)) goto L_466ce0;
L_466cd6: /* 466cd6: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 466cd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466cd9: call 0x466522 */
  esp -= 4; W32(esp, 0x466cdeu); SPILL(); f_466522(); if (g_unwind) return; RELOAD();
/* 466cde: jmp 0x466cec */
  goto L_466cec;
L_466ce0: /* 466ce0: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 466ce4: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 466ce6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466ce7: call 0x466156 */
  esp -= 4; W32(esp, 0x466cecu); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
L_466cec: /* 466cec: ret 8 */
  esp += 12; SPILL(); return;
}

void f_466cef(void) {
  LOAD_REGS();
L_466cef: /* 466cef: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 466cf3: cmp dword ptr [ecx + 0x18], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466cf6: jae 0x466d00 */
  if (!cf) goto L_466d00;
L_466cf8: /* 466cf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 466cfa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466cfb: call 0x461e63 */
  esp -= 4; W32(esp, 0x466d00u); SPILL(); f_461e63(); if (g_unwind) return; RELOAD();
L_466d00: /* 466d00: ret 4 */
  esp += 8; SPILL(); return;
}

void f_466d03(void) {
  LOAD_REGS();
L_466d03: /* 466d03: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 466d05: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 466d07: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 466d0b: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 466d0f: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 466d13: call 0x465bbc */
  esp -= 4; W32(esp, 0x466d18u); SPILL(); f_465bbc(); if (g_unwind) return; RELOAD();
/* 466d18: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_466d1b(void) {
  LOAD_REGS();
L_466d1b: /* 466d1b: mov eax, 0x48bfcc */
  eax = 0x48bfccu;
/* 466d20: call 0x4616c0 */
  esp -= 4; W32(esp, 0x466d25u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 466d25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 466d26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 466d27: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 466d2a: mov esi, ecx */
  esi = ecx;
/* 466d2c: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 466d2f: call 0x4621d1 */
  esp -= 4; W32(esp, 0x466d34u); SPILL(); f_4621d1(); if (g_unwind) return; RELOAD();
/* 466d34: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 466d37: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 466d39: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 466d3d: call 0x465ca4 */
  esp -= 4; W32(esp, 0x466d42u); SPILL(); f_465ca4(); if (g_unwind) return; RELOAD();
/* 466d42: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 466d45: mov byte ptr [esi + 4], al */
  W8((uint32_t)(esi + 0x4u), (eax & 0xffu));
/* 466d48: mov eax, esi */
  eax = esi;
/* 466d4a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 466d4b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 466d52: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 466d53: ret 8 */
  esp += 12; SPILL(); return;
}

void f_466d56(void) {
  LOAD_REGS();
L_466d56: /* 466d56: mov eax, 0x48bfcc */
  eax = 0x48bfccu;
/* 466d5b: call 0x4616c0 */
  esp -= 4; W32(esp, 0x466d60u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 466d60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 466d61: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 466d62: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 466d65: mov esi, ecx */
  esi = ecx;
/* 466d67: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 466d6a: call 0x4621d1 */
  esp -= 4; W32(esp, 0x466d6fu); SPILL(); f_4621d1(); if (g_unwind) return; RELOAD();
/* 466d6f: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 466d72: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 466d74: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 466d78: call 0x465dbd */
  esp -= 4; W32(esp, 0x466d7du); SPILL(); f_465dbd(); if (g_unwind) return; RELOAD();
/* 466d7d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 466d80: mov byte ptr [esi + 4], al */
  W8((uint32_t)(esi + 0x4u), (eax & 0xffu));
/* 466d83: mov eax, esi */
  eax = esi;
/* 466d85: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 466d86: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 466d8d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 466d8e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_466d91(void) {
  LOAD_REGS();
L_466d91: /* 466d91: mov eax, 0x48bfcc */
  eax = 0x48bfccu;
/* 466d96: call 0x4616c0 */
  esp -= 4; W32(esp, 0x466d9bu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 466d9b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 466d9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 466d9d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 466da0: mov esi, ecx */
  esi = ecx;
/* 466da2: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 466da5: call 0x4621d1 */
  esp -= 4; W32(esp, 0x466daau); SPILL(); f_4621d1(); if (g_unwind) return; RELOAD();
/* 466daa: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 466dad: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 466daf: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 466db3: call 0x465ed9 */
  esp -= 4; W32(esp, 0x466db8u); SPILL(); f_465ed9(); if (g_unwind) return; RELOAD();
/* 466db8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 466dbb: mov byte ptr [esi + 4], al */
  W8((uint32_t)(esi + 0x4u), (eax & 0xffu));
/* 466dbe: mov eax, esi */
  eax = esi;
/* 466dc0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 466dc1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 466dc8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 466dc9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_466dcc(void) {
  LOAD_REGS();
L_466dcc: /* 466dcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 466dcd: mov esi, ecx */
  esi = ecx;
/* 466dcf: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 466dd2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 466dd4: je 0x466e06 */
  if (zf) goto L_466e06;
L_466dd6: /* 466dd6: cmp dword ptr [esp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 466ddb: jne 0x466de9 */
  if (!zf) goto L_466de9;
L_466ddd: /* 466ddd: cmp dword ptr [esp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 466de2: jne 0x466de9 */
  if (!zf) goto L_466de9;
L_466de4: /* 466de4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 466de6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 466de7: jmp 0x466deb */
  goto L_466deb;
L_466de9: /* 466de9: xor ecx, ecx */
  ecx = 0;
L_466deb: /* 466deb: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 466def: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 466df0: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 466df4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466df5: call dword ptr [0x48e044] */
  esp -= 4; W32(esp, 0x466dfbu); SPILL(); f_413a02(); if (g_unwind) return; /* MSVCR70!setvbuf */ RELOAD();
/* 466dfb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 466dfe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 466e00: jne 0x466e06 */
  if (!zf) goto L_466e06;
L_466e02: /* 466e02: mov eax, esi */
  eax = esi;
/* 466e04: jmp 0x466e08 */
  goto L_466e08;
L_466e06: /* 466e06: xor eax, eax */
  eax = 0;
L_466e08: /* 466e08: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 466e09: ret 8 */
  esp += 12; SPILL(); return;
}

void f_466e0c(void) {
  LOAD_REGS();
L_466e0c: /* 466e0c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 466e0d: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 466e11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 466e12: mov esi, ecx */
  esi = ecx;
/* 466e14: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 466e17: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 466e19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 466e1b: je 0x466e43 */
  if (zf) goto L_466e43;
L_466e1d: /* 466e1d: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 466e20: cmp dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466e22: jae 0x466e43 */
  if (!cf) goto L_466e43;
L_466e24: /* 466e24: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 466e27: je 0x466e31 */
  if (zf) goto L_466e31;
L_466e29: /* 466e29: movzx eax, byte ptr [eax - 1] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0xffffffffu)));
/* 466e2d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 466e2f: jne 0x466e43 */
  if (!zf) goto L_466e43;
L_466e31: /* 466e31: mov ecx, esi */
  ecx = esi;
/* 466e33: call 0x466e90 */
  esp -= 4; W32(esp, 0x466e38u); SPILL(); f_466e90(); if (g_unwind) return; RELOAD();
/* 466e38: mov eax, ebx */
  eax = ebx;
/* 466e3a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 466e3b: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  cf = (a) != 0;
  eax = r;
  }
/* 466e3d: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 466e3f: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 466e41: jmp 0x466e8b */
  goto L_466e8b;
L_466e43: /* 466e43: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 466e46: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 466e48: je 0x466e88 */
  if (zf) goto L_466e88;
L_466e4a: /* 466e4a: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 466e4d: je 0x466e88 */
  if (zf) goto L_466e88;
L_466e4f: /* 466e4f: cmp dword ptr [esi + 0x3c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 466e53: jne 0x466e6b */
  if (!zf) goto L_466e6b;
L_466e55: /* 466e55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466e56: movzx eax, bl */
  eax = (uint32_t)((ebx & 0xffu));
/* 466e59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466e5a: call dword ptr [0x48e04c] */
  esp -= 4; W32(esp, 0x466e60u); SPILL(); f_42d5ed(); if (g_unwind) return; /* MSVCR70!ungetc */ RELOAD();
/* 466e60: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 466e63: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 466e64: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 466e65: je 0x466e6b */
  if (zf) goto L_466e6b;
L_466e67: /* 466e67: mov eax, ebx */
  eax = ebx;
/* 466e69: jmp 0x466e8b */
  goto L_466e8b;
L_466e6b: /* 466e6b: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 466e6e: lea eax, [esi + 0x44] */
  eax = (uint32_t)(esi + 0x44u);
/* 466e71: mov byte ptr [eax], bl */
  W8((uint32_t)(eax), (ebx & 0xffu));
/* 466e73: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 466e75: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 466e78: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 466e7a: mov ecx, esi */
  ecx = esi;
/* 466e7c: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 466e7e: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 466e81: add ecx, 0x45 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x45u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 466e84: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 466e86: jmp 0x466e67 */
  goto L_466e67;
L_466e88: /* 466e88: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_466e8b: /* 466e8b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 466e8c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 466e8d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_466e90(void) {
  LOAD_REGS();
L_466e90: /* 466e90: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 466e93: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 466e95: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 466e98: dec dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax), r);
  }
/* 466e9a: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 466e9d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 466e9f: ret  */
  esp += 4; SPILL(); return;
}

void f_466ea0(void) {
  LOAD_REGS();
L_466ea0: /* 466ea0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 466ea1: mov esi, ecx */
  esi = ecx;
/* 466ea3: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 466ea6: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 466ea8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 466eaa: je 0x466ebc */
  if (zf) goto L_466ebc;
L_466eac: /* 466eac: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 466eaf: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 466eb1: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 466eb3: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466eb5: jae 0x466ebc */
  if (!cf) goto L_466ebc;
L_466eb7: /* 466eb7: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 466eba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 466ebb: ret  */
  esp += 4; SPILL(); return;
L_466ebc: /* 466ebc: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 466ebe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 466ebf: mov ecx, esi */
  ecx = esi;
/* 466ec1: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0x466ec4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 466ec4: mov edi, eax */
  edi = eax;
/* 466ec6: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 466ec9: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 466ecb: je 0x466ed7 */
  if (zf) goto L_466ed7;
L_466ecd: /* 466ecd: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 466ecf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 466ed0: mov ecx, esi */
  ecx = esi;
/* 466ed2: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x466ed5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 466ed5: mov eax, edi */
  eax = edi;
L_466ed7: /* 466ed7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 466ed8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 466ed9: ret  */
  esp += 4; SPILL(); return;
}

void f_466eda(void) {
  LOAD_REGS();
L_466eda: /* 466eda: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 466edb: mov ebp, esp */
  ebp = esp;
/* 466edd: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 466ee0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 466ee1: mov esi, ecx */
  esi = ecx;
/* 466ee3: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 466ee6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 466ee8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 466eea: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 466eeb: je 0x466f0e */
  if (zf) goto L_466f0e;
L_466eed: /* 466eed: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 466ef0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 466ef2: lea edi, [ecx + edx] */
  edi = (uint32_t)(ecx + edx);
/* 466ef5: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466ef7: jae 0x466f0e */
  if (!cf) goto L_466f0e;
L_466ef9: /* 466ef9: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 466efa: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 466efc: mov esi, dword ptr [esi + 0x20] */
  esi = R32((uint32_t)(esi + 0x20u));
/* 466eff: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 466f01: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 466f04: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 466f06: movzx eax, byte ptr [eax] */
  eax = (uint32_t)(R8((uint32_t)(eax)));
/* 466f09: jmp 0x466fec */
  goto L_466fec;
L_466f0e: /* 466f0e: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 466f11: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 466f13: jne 0x466f1d */
  if (!zf) goto L_466f1d;
L_466f15: /* 466f15: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 466f18: jmp 0x466fec */
  goto L_466fec;
L_466f1d: /* 466f1d: cmp dword ptr [esi + 0x3c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 466f21: jne 0x466f38 */
  if (!zf) goto L_466f38;
L_466f23: /* 466f23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466f24: call dword ptr [0x48e050] */
  esp -= 4; W32(esp, 0x466f2au); SPILL(); f_42c564(); if (g_unwind) return; /* MSVCR70!fgetc */ RELOAD();
/* 466f2a: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 466f2d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 466f2e: je 0x466f15 */
  if (zf) goto L_466f15;
L_466f30: /* 466f30: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 466f33: jmp 0x466fec */
  goto L_466fec;
L_466f38: /* 466f38: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 466f3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 466f3c: lea edi, [esi + 0x50] */
  edi = (uint32_t)(esi + 0x50u);
/* 466f3f: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 466f41: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 466f43: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 466f45: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 466f48: call 0x466522 */
  esp -= 4; W32(esp, 0x466f4du); SPILL(); f_466522(); if (g_unwind) return; RELOAD();
/* 466f4d: jmp 0x466fb3 */
  goto L_466fb3;
L_466f4f: /* 466f4f: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 466f52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466f53: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 466f55: call 0x466156 */
  esp -= 4; W32(esp, 0x466f5au); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
/* 466f5a: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 466f5d: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 466f60: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 466f62: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* 466f65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466f66: call 0x465162 */
  esp -= 4; W32(esp, 0x466f6bu); SPILL(); f_465162(); if (g_unwind) return; RELOAD();
/* 466f6b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 466f6d: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 466f70: cmp dword ptr [eax + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466f74: jb 0x466f7b */
  if (cf) goto L_466f7b;
L_466f76: /* 466f76: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 466f79: jmp 0x466f7e */
  goto L_466f7e;
L_466f7b: /* 466f7b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_466f7e: /* 466f7e: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 466f81: lea ebx, [ebp - 0x10] */
  ebx = (uint32_t)(ebp + 0xfffffff0u);
/* 466f84: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 466f85: lea ebx, [ebp] */
  ebx = (uint32_t)(ebp);
/* 466f88: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 466f89: lea ebx, [ebp - 1] */
  ebx = (uint32_t)(ebp + 0xffffffffu);
/* 466f8c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 466f8d: lea ebx, [ebp - 0x14] */
  ebx = (uint32_t)(ebp + 0xffffffecu);
/* 466f90: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 466f91: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 466f94: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 466f96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 466f97: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* 466f9a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 466f9b: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x466f9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 466f9e: sub eax, 0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 466fa1: je 0x466fe7 */
  if (zf) goto L_466fe7;
L_466fa3: /* 466fa3: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 466fa4: je 0x466fb3 */
  if (zf) goto L_466fb3;
L_466fa6: /* 466fa6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 466fa7: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 466fa8: jne 0x466fc2 */
  if (!zf) goto L_466fc2;
L_466faa: /* 466faa: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 466fad: cmp dword ptr [eax + 0x14], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x14u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466fb1: jae 0x466fc7 */
  if (!cf) goto L_466fc7;
L_466fb3: /* 466fb3: push dword ptr [esi + 0x5c] */
  { uint32_t v = R32((uint32_t)(esi + 0x5cu)); esp -= 4; W32(esp, v); }
/* 466fb6: call dword ptr [0x48e050] */
  esp -= 4; W32(esp, 0x466fbcu); SPILL(); f_42c564(); if (g_unwind) return; /* MSVCR70!fgetc */ RELOAD();
/* 466fbc: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 466fbf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 466fc0: jne 0x466f4f */
  if (!zf) goto L_466f4f;
L_466fc2: /* 466fc2: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 466fc5: jmp 0x466feb */
  goto L_466feb;
L_466fc7: /* 466fc7: mov esi, dword ptr [esi + 0x48] */
  esi = R32((uint32_t)(esi + 0x48u));
/* 466fca: cmp dword ptr [esi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 466fce: jb 0x466fd5 */
  if (cf) goto L_466fd5;
L_466fd0: /* 466fd0: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 466fd3: jmp 0x466fd8 */
  goto L_466fd8;
L_466fd5: /* 466fd5: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_466fd8: /* 466fd8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 466fda: lea eax, [ebp - 1] */
  eax = (uint32_t)(ebp + 0xffffffffu);
/* 466fdd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 466fde: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 466fdf: call 0x4617bb */
  esp -= 4; W32(esp, 0x466fe4u); SPILL(); hle_memcpy(); RELOAD();
/* 466fe4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_466fe7: /* 466fe7: movzx eax, byte ptr [ebp - 1] */
  eax = (uint32_t)(R8((uint32_t)(ebp + 0xffffffffu)));
L_466feb: /* 466feb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_466fec: /* 466fec: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 466fed: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 466fee: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 466fef: ret  */
  esp += 4; SPILL(); return;
}

void f_466ff0(void) {
  LOAD_REGS();
L_466ff0: /* 466ff0: mov eax, 0x48c031 */
  eax = 0x48c031u;
/* 466ff5: call 0x4616c0 */
  esp -= 4; W32(esp, 0x466ffau); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 466ffa: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 466ffd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 466ffe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 466fff: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 467002: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 467003: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 467006: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 467008: xor ebx, ebx */
  ebx = 0;
/* 46700a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46700b: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 46700e: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 467011: call 0x466d1b */
  esp -= 4; W32(esp, 0x467016u); SPILL(); f_466d1b(); if (g_unwind) return; RELOAD();
/* 467016: cmp byte ptr [ebp - 0x1c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 467019: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 46701c: je 0x46709d */
  if (zf) goto L_46709d;
L_46701e: /* 46701e: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 467021: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 467022: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 467024: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 467027: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 467029: call 0x464a5a */
  esp -= 4; W32(esp, 0x46702eu); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 46702e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46702f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 467033: call 0x46587a */
  esp -= 4; W32(esp, 0x467038u); SPILL(); f_46587a(); if (g_unwind) return; RELOAD();
/* 467038: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467039: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 46703c: mov edi, eax */
  edi = eax;
/* 46703e: call 0x461389 */
  esp -= 4; W32(esp, 0x467043u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 467043: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 467045: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 467048: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 46704c: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 467050: call 0x46567c */
  esp -= 4; W32(esp, 0x467055u); SPILL(); f_46567c(); if (g_unwind) return; RELOAD();
L_467055: /* 467055: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 467058: jne 0x467060 */
  if (!zf) goto L_467060;
L_46705a: /* 46705a: or dword ptr [ebp - 0x14], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 46705e: jmp 0x46709d */
  goto L_46709d;
L_467060: /* 467060: mov ecx, dword ptr [edi + 0x10] */
  ecx = R32((uint32_t)(edi + 0x10u));
/* 467063: movzx eax, al */
  eax = (uint32_t)((eax & 0xffu));
/* 467066: test byte ptr [ecx + eax*2], 0x48 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + eax*2))); uint8_t b = (uint8_t)(0x48u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46706a: je 0x46709d */
  if (zf) goto L_46709d;
L_46706c: /* 46706c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46706e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 467071: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 467075: call 0x465c50 */
  esp -= 4; W32(esp, 0x46707au); SPILL(); f_465c50(); if (g_unwind) return; RELOAD();
/* 46707a: jmp 0x467055 */
  goto L_467055;
L_46709d: /* 46709d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46709f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4670a2: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4670a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4670a8: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 4670ab: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4670ad: call 0x461453 */
  esp -= 4; W32(esp, 0x4670b2u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 4670b2: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4670b6: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 4670b9: call 0x46228e */
  esp -= 4; W32(esp, 0x4670beu); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 4670be: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4670c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4670c2: mov eax, esi */
  eax = esi;
/* 4670c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4670c5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4670cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4670cd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4670ce: ret  */
  esp += 4; SPILL(); return;
}

void f_46707c(void) {
  LOAD_REGS();
L_46707c: /* 46707c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46707f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 467081: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 467084: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 467086: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 467089: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 46708b: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46708e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46708f: call 0x464bb2 */
  esp -= 4; W32(esp, 0x467094u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 467094: mov eax, 0x46709a */
  eax = 0x46709au;
/* 467099: ret  */
  esp += 4; SPILL(); return;
}

void f_46709a(void) {
  LOAD_REGS();
L_46709a: /* 46709a: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 46709d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46709f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4670a2: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4670a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4670a8: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 4670ab: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4670ad: call 0x461453 */
  esp -= 4; W32(esp, 0x4670b2u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46709au: guest_unwind_done(); RELOAD(); goto L_46709a; } return; } RELOAD();
/* 4670b2: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4670b6: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 4670b9: call 0x46228e */
  esp -= 4; W32(esp, 0x4670beu); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x46709au: guest_unwind_done(); RELOAD(); goto L_46709a; } return; } RELOAD();
/* 4670be: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4670c1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4670c2: mov eax, esi */
  eax = esi;
/* 4670c4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4670c5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4670cc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4670cd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4670ce: ret  */
  esp += 4; SPILL(); return;
}

void f_4670cf(void) {
  LOAD_REGS();
L_4670cf: /* 4670cf: mov eax, 0x48c04b */
  eax = 0x48c04bu;
/* 4670d4: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4670d9u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4670d9: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4670dc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4670dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4670de: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4670e1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4670e2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4670e5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4670e7: xor ebx, ebx */
  ebx = 0;
/* 4670e9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4670ea: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 4670ed: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 4670f0: call 0x466d56 */
  esp -= 4; W32(esp, 0x4670f5u); SPILL(); f_466d56(); if (g_unwind) return; RELOAD();
/* 4670f5: cmp byte ptr [ebp - 0x1c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4670f8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4670fb: je 0x467183 */
  if (zf) goto L_467183;
L_467101: /* 467101: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 467104: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 467105: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 467107: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46710a: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46710c: call 0x464a5a */
  esp -= 4; W32(esp, 0x467111u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 467111: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 467112: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 467116: call 0x46591c */
  esp -= 4; W32(esp, 0x46711bu); SPILL(); f_46591c(); if (g_unwind) return; RELOAD();
/* 46711b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46711c: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 46711f: mov edi, eax */
  edi = eax;
/* 467121: call 0x461389 */
  esp -= 4; W32(esp, 0x467126u); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 467126: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 467128: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46712b: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 46712f: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 467133: call 0x4657fc */
  esp -= 4; W32(esp, 0x467138u); SPILL(); f_4657fc(); if (g_unwind) return; RELOAD();
L_467138: /* 467138: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 46713c: jne 0x467144 */
  if (!zf) goto L_467144;
L_46713e: /* 46713e: or dword ptr [ebp - 0x14], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 467142: jmp 0x467183 */
  goto L_467183;
L_467144: /* 467144: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 467146: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 467147: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 467149: mov ecx, edi */
  ecx = edi;
/* 46714b: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x46714eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 46714e: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 467150: je 0x467183 */
  if (zf) goto L_467183;
L_467152: /* 467152: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 467154: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 467157: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 46715b: call 0x465c69 */
  esp -= 4; W32(esp, 0x467160u); SPILL(); f_465c69(); if (g_unwind) return; RELOAD();
/* 467160: jmp 0x467138 */
  goto L_467138;
L_467183: /* 467183: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 467185: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 467188: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46718c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46718e: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 467191: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 467193: call 0x461453 */
  esp -= 4; W32(esp, 0x467198u); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 467198: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46719c: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 46719f: call 0x46228e */
  esp -= 4; W32(esp, 0x4671a4u); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 4671a4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4671a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4671a8: mov eax, esi */
  eax = esi;
/* 4671aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4671ab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4671b2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4671b3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4671b4: ret  */
  esp += 4; SPILL(); return;
}

void f_467162(void) {
  LOAD_REGS();
L_467162: /* 467162: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 467165: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 467167: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 46716a: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 46716c: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 46716f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 467171: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 467174: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 467175: call 0x464bb2 */
  esp -= 4; W32(esp, 0x46717au); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 46717a: mov eax, 0x467180 */
  eax = 0x467180u;
/* 46717f: ret  */
  esp += 4; SPILL(); return;
}

void f_467180(void) {
  LOAD_REGS();
L_467180: /* 467180: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 467183: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 467185: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 467188: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46718c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46718e: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 467191: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 467193: call 0x461453 */
  esp -= 4; W32(esp, 0x467198u); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x467180u: guest_unwind_done(); RELOAD(); goto L_467180; } return; } RELOAD();
/* 467198: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46719c: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 46719f: call 0x46228e */
  esp -= 4; W32(esp, 0x4671a4u); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x467180u: guest_unwind_done(); RELOAD(); goto L_467180; } return; } RELOAD();
/* 4671a4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4671a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4671a8: mov eax, esi */
  eax = esi;
/* 4671aa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4671ab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4671b2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4671b3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4671b4: ret  */
  esp += 4; SPILL(); return;
}

void f_4671b5(void) {
  LOAD_REGS();
L_4671b5: /* 4671b5: mov eax, 0x48c065 */
  eax = 0x48c065u;
/* 4671ba: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4671bfu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4671bf: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4671c2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4671c3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4671c4: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 4671c7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4671c8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 4671cb: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4671cd: xor ebx, ebx */
  ebx = 0;
/* 4671cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4671d0: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 4671d3: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 4671d6: call 0x466d91 */
  esp -= 4; W32(esp, 0x4671dbu); SPILL(); f_466d91(); if (g_unwind) return; RELOAD();
/* 4671db: cmp byte ptr [ebp - 0x1c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffe4u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4671de: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4671e1: je 0x467269 */
  if (zf) goto L_467269;
L_4671e7: /* 4671e7: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 4671ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4671eb: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4671ed: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 4671f0: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4671f2: call 0x464a5a */
  esp -= 4; W32(esp, 0x4671f7u); SPILL(); f_464a5a(); if (g_unwind) return; RELOAD();
/* 4671f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4671f8: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 4671fc: call 0x4659be */
  esp -= 4; W32(esp, 0x467201u); SPILL(); f_4659be(); if (g_unwind) return; RELOAD();
/* 467201: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467202: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 467205: mov edi, eax */
  edi = eax;
/* 467207: call 0x461389 */
  esp -= 4; W32(esp, 0x46720cu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 46720c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46720e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 467211: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 467215: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 467219: call 0x4657fc */
  esp -= 4; W32(esp, 0x46721eu); SPILL(); f_4657fc(); if (g_unwind) return; RELOAD();
L_46721e: /* 46721e: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 467222: jne 0x46722a */
  if (!zf) goto L_46722a;
L_467224: /* 467224: or dword ptr [ebp - 0x14], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* 467228: jmp 0x467269 */
  goto L_467269;
L_46722a: /* 46722a: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 46722c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46722d: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 46722f: mov ecx, edi */
  ecx = edi;
/* 467231: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x467234u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 467234: cmp al, bl */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 467236: je 0x467269 */
  if (zf) goto L_467269;
L_467238: /* 467238: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46723a: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 46723d: mov ecx, dword ptr [eax + esi + 0x28] */
  ecx = R32((uint32_t)(eax + esi + 0x28u));
/* 467241: call 0x465c69 */
  esp -= 4; W32(esp, 0x467246u); SPILL(); f_465c69(); if (g_unwind) return; RELOAD();
/* 467246: jmp 0x46721e */
  goto L_46721e;
L_467269: /* 467269: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46726b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46726e: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 467272: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 467274: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 467277: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 467279: call 0x461453 */
  esp -= 4; W32(esp, 0x46727eu); SPILL(); f_461453(); if (g_unwind) return; RELOAD();
/* 46727e: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 467282: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 467285: call 0x46228e */
  esp -= 4; W32(esp, 0x46728au); SPILL(); f_46228e(); if (g_unwind) return; RELOAD();
/* 46728a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46728d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46728e: mov eax, esi */
  eax = esi;
/* 467290: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 467291: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 467298: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 467299: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46729a: ret  */
  esp += 4; SPILL(); return;
}

void f_467248(void) {
  LOAD_REGS();
L_467248: /* 467248: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46724b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 46724d: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 467250: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 467252: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 467255: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 467257: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46725a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46725b: call 0x464bb2 */
  esp -= 4; W32(esp, 0x467260u); SPILL(); f_464bb2(); if (g_unwind) return; RELOAD();
/* 467260: mov eax, 0x467266 */
  eax = 0x467266u;
/* 467265: ret  */
  esp += 4; SPILL(); return;
}

void f_467266(void) {
  LOAD_REGS();
L_467266: /* 467266: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 467269: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 46726b: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 46726e: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 467272: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 467274: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
/* 467277: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 467279: call 0x461453 */
  esp -= 4; W32(esp, 0x46727eu); SPILL(); f_461453(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x467266u: guest_unwind_done(); RELOAD(); goto L_467266; } return; } RELOAD();
/* 46727e: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 467282: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 467285: call 0x46228e */
  esp -= 4; W32(esp, 0x46728au); SPILL(); f_46228e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x467266u: guest_unwind_done(); RELOAD(); goto L_467266; } return; } RELOAD();
/* 46728a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46728d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46728e: mov eax, esi */
  eax = esi;
/* 467290: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 467291: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 467298: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 467299: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46729a: ret  */
  esp += 4; SPILL(); return;
}

void f_46729b(void) {
  LOAD_REGS();
L_46729b: /* 46729b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46729c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46729e: mov esi, ecx */
  esi = ecx;
/* 4672a0: call 0x461ea8 */
  esp -= 4; W32(esp, 0x4672a5u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 4672a5: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4672a9: mov ecx, esi */
  ecx = esi;
/* 4672ab: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4672af: call 0x4661b6 */
  esp -= 4; W32(esp, 0x4672b4u); SPILL(); f_4661b6(); if (g_unwind) return; RELOAD();
/* 4672b4: mov eax, esi */
  eax = esi;
/* 4672b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4672b7: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4672ba(void) {
  LOAD_REGS();
L_4672ba: /* 4672ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4672bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4672bd: mov esi, ecx */
  esi = ecx;
/* 4672bf: call 0x461ea8 */
  esp -= 4; W32(esp, 0x4672c4u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 4672c4: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4672c8: mov ecx, esi */
  ecx = esi;
/* 4672ca: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4672ce: call 0x4661b6 */
  esp -= 4; W32(esp, 0x4672d3u); SPILL(); f_4661b6(); if (g_unwind) return; RELOAD();
/* 4672d3: mov eax, esi */
  eax = esi;
/* 4672d5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4672d6: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4672d9(void) {
  LOAD_REGS();
L_4672d9: /* 4672d9: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 4672dd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4672df: call 0x4661b6 */
  esp -= 4; W32(esp, 0x4672e4u); SPILL(); f_4661b6(); if (g_unwind) return; RELOAD();
/* 4672e4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4672e7(void) {
  LOAD_REGS();
L_4672e7: /* 4672e7: jmp 0x466139 */
  SPILL(); f_466139(); return;
}

void f_4672ec(void) {
  LOAD_REGS();
L_4672ec: /* 4672ec: push dword ptr [esp + 4] */
  { uint32_t v = R32((uint32_t)(esp + 0x4u)); esp -= 4; W32(esp, v); }
/* 4672f0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4672f2: call 0x466156 */
  esp -= 4; W32(esp, 0x4672f7u); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
/* 4672f7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4672fa(void) {
  LOAD_REGS();
L_4672fa: /* 4672fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4672fb: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4672ff: mov esi, ecx */
  esi = ecx;
/* 467301: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 467305: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467306: push esp */
  { uint32_t v = esp; esp -= 4; W32(esp, v); }
/* 467307: call 0x465162 */
  esp -= 4; W32(esp, 0x46730cu); SPILL(); f_465162(); if (g_unwind) return; RELOAD();
/* 46730c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46730d: push esp */
  { uint32_t v = esp; esp -= 4; W32(esp, v); }
/* 46730e: mov ecx, esi */
  ecx = esi;
/* 467310: call 0x465162 */
  esp -= 4; W32(esp, 0x467315u); SPILL(); f_465162(); if (g_unwind) return; RELOAD();
/* 467315: mov ecx, esi */
  ecx = esi;
/* 467317: call 0x466c3e */
  esp -= 4; W32(esp, 0x46731cu); SPILL(); f_466c3e(); if (g_unwind) return; RELOAD();
/* 46731c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46731d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_467320(void) {
  LOAD_REGS();
L_467320: /* 467320: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 467321: mov ebp, esp */
  ebp = esp;
/* 467323: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 467326: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 467327: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 467328: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 467329: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 46732c: cmp dword ptr [edi + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46732f: mov ebx, ecx */
  ebx = ecx;
/* 467331: jae 0x467338 */
  if (!cf) goto L_467338;
L_467333: /* 467333: call 0x487763 */
  esp -= 4; W32(esp, 0x467338u); SPILL(); f_487763(); if (g_unwind) return; RELOAD();
L_467338: /* 467338: mov esi, dword ptr [edi + 0x14] */
  esi = R32((uint32_t)(edi + 0x14u));
/* 46733b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 46733e: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 467340: cmp dword ptr [ebp + 0x10], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 467343: jae 0x467348 */
  if (!cf) goto L_467348;
L_467345: /* 467345: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
L_467348: /* 467348: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46734a: mov ecx, ebx */
  ecx = ebx;
/* 46734c: jne 0x467366 */
  if (!zf) goto L_467366;
L_46734e: /* 46734e: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 467350: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 467352: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 467353: call 0x466522 */
  esp -= 4; W32(esp, 0x467358u); SPILL(); f_466522(); if (g_unwind) return; RELOAD();
/* 467358: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46735b: mov ecx, ebx */
  ecx = ebx;
/* 46735d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46735f: call 0x466522 */
  esp -= 4; W32(esp, 0x467364u); SPILL(); f_466522(); if (g_unwind) return; RELOAD();
/* 467364: jmp 0x4673a6 */
  goto L_4673a6;
L_467366: /* 467366: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 467368: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 467369: call 0x461e63 */
  esp -= 4; W32(esp, 0x46736eu); SPILL(); f_461e63(); if (g_unwind) return; RELOAD();
/* 46736e: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 467370: je 0x4673a6 */
  if (zf) goto L_4673a6;
L_467372: /* 467372: cmp dword ptr [edi + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 467376: jb 0x46737d */
  if (cf) goto L_46737d;
L_467378: /* 467378: mov edi, dword ptr [edi + 4] */
  edi = R32((uint32_t)(edi + 0x4u));
/* 46737b: jmp 0x467380 */
  goto L_467380;
L_46737d: /* 46737d: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
L_467380: /* 467380: cmp dword ptr [ebx + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 467384: jb 0x46738b */
  if (cf) goto L_46738b;
L_467386: /* 467386: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 467389: jmp 0x46738e */
  goto L_46738e;
L_46738b: /* 46738b: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
L_46738e: /* 46738e: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 467391: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 467392: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 467394: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 467395: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 467396: call 0x4617bb */
  esp -= 4; W32(esp, 0x46739bu); SPILL(); hle_memcpy(); RELOAD();
/* 46739b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46739e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46739f: mov ecx, ebx */
  ecx = ebx;
/* 4673a1: call 0x461ed0 */
  esp -= 4; W32(esp, 0x4673a6u); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
L_4673a6: /* 4673a6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4673a7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4673a8: mov eax, ebx */
  eax = ebx;
/* 4673aa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4673ab: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4673ac: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4673af(void) {
  LOAD_REGS();
L_4673af: /* 4673af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4673b0: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4673b4: mov esi, ecx */
  esi = ecx;
/* 4673b6: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4673ba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4673bb: push esp */
  { uint32_t v = esp; esp -= 4; W32(esp, v); }
/* 4673bc: call 0x465162 */
  esp -= 4; W32(esp, 0x4673c1u); SPILL(); f_465162(); if (g_unwind) return; RELOAD();
/* 4673c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4673c2: push esp */
  { uint32_t v = esp; esp -= 4; W32(esp, v); }
/* 4673c3: mov ecx, esi */
  ecx = esi;
/* 4673c5: call 0x46514b */
  esp -= 4; W32(esp, 0x4673cau); SPILL(); f_46514b(); if (g_unwind) return; RELOAD();
/* 4673ca: mov ecx, esi */
  ecx = esi;
/* 4673cc: call 0x466c3e */
  esp -= 4; W32(esp, 0x4673d1u); SPILL(); f_466c3e(); if (g_unwind) return; RELOAD();
/* 4673d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4673d2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4673d5(void) {
  LOAD_REGS();
L_4673d5: /* 4673d5: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4673d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4673d9: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4673dd: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4673e1: call 0x466201 */
  esp -= 4; W32(esp, 0x4673e6u); SPILL(); f_466201(); if (g_unwind) return; RELOAD();
/* 4673e6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4673e9(void) {
  LOAD_REGS();
L_4673e9: /* 4673e9: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 4673ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4673ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4673f0: mov eax, esp */
  eax = esp;
/* 4673f2: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4673f6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4673f8: call 0x4664b1 */
  esp -= 4; W32(esp, 0x4673fdu); SPILL(); f_4664b1(); if (g_unwind) return; RELOAD();
/* 4673fd: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 467401: ret 8 */
  esp += 12; SPILL(); return;
}

void f_467404(void) {
  LOAD_REGS();
L_467404: /* 467404: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 467408: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 46740c: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 467410: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467411: mov edx, esp */
  edx = esp;
/* 467413: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 467415: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467416: mov edx, esp */
  edx = esp;
/* 467418: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 46741a: call 0x466c3e */
  esp -= 4; W32(esp, 0x46741fu); SPILL(); f_466c3e(); if (g_unwind) return; RELOAD();
/* 46741f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_467422(void) {
  LOAD_REGS();
L_467422: /* 467422: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 467424: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 467426: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 46742a: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 46742e: push dword ptr [esp + 0x14] */
  { uint32_t v = R32((uint32_t)(esp + 0x14u)); esp -= 4; W32(esp, v); }
/* 467432: call 0x466653 */
  esp -= 4; W32(esp, 0x467437u); SPILL(); f_466653(); if (g_unwind) return; RELOAD();
/* 467437: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_46743a(void) {
  LOAD_REGS();
L_46743a: /* 46743a: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 46743e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 467440: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 467444: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 467445: jne 0x46744b */
  if (!zf) goto L_46744b;
L_467447: /* 467447: xor eax, eax */
  eax = 0;
/* 467449: jmp 0x46744d */
  goto L_46744d;
L_46744b: /* 46744b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_46744d: /* 46744d: cmp dword ptr [ecx + 0x18], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x18u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 467451: jb 0x467458 */
  if (cf) goto L_467458;
L_467453: /* 467453: mov esi, dword ptr [ecx + 4] */
  esi = R32((uint32_t)(ecx + 0x4u));
/* 467456: jmp 0x46745b */
  goto L_46745b;
L_467458: /* 467458: lea esi, [ecx + 4] */
  esi = (uint32_t)(ecx + 0x4u);
L_46745b: /* 46745b: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46745d: je 0x467461 */
  if (zf) goto L_467461;
L_46745f: /* 46745f: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_467461: /* 467461: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 467463: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 467465: push dword ptr [esp + 0x18] */
  { uint32_t v = R32((uint32_t)(esp + 0x18u)); esp -= 4; W32(esp, v); }
/* 467469: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46746a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 46746b: call 0x466653 */
  esp -= 4; W32(esp, 0x467470u); SPILL(); f_466653(); if (g_unwind) return; RELOAD();
/* 467470: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 467471: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_467474(void) {
  LOAD_REGS();
L_467474: /* 467474: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 467476: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46747a: call 0x466ccb */
  esp -= 4; W32(esp, 0x46747fu); SPILL(); f_466ccb(); if (g_unwind) return; RELOAD();
/* 46747f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_467482(void) {
  LOAD_REGS();
L_467482: /* 467482: mov eax, 0x48c0ad */
  eax = 0x48c0adu;
/* 467487: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46748cu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46748c: sub esp, 0x28 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46748f: mov eax, dword ptr [0x4d05d0] */
  eax = R32((uint32_t)(0x4d05d0u));
/* 467494: xor eax, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  eax = r;
  }
/* 467497: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 467498: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 467499: mov esi, ecx */
  esi = ecx;
/* 46749b: xor ebx, ebx */
  ebx = 0;
/* 46749d: cmp dword ptr [esi + 0x3c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4674a0: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 4674a3: je 0x46756d */
  if (zf) goto L_46756d;
L_4674a9: /* 4674a9: cmp byte ptr [esi + 0x4c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4cu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 4674ac: je 0x46756d */
  if (zf) goto L_46756d;
L_4674b2: /* 4674b2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 4674b4: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4674b6: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x4674b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4674b9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4674ba: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 4674bd: mov dword ptr [ebp - 0x1c], 0xf */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xfu);
/* 4674c4: call 0x461ed0 */
  esp -= 4; W32(esp, 0x4674c9u); SPILL(); f_461ed0(); if (g_unwind) return; RELOAD();
/* 4674c9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4674ca: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 4674cc: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 4674cf: call 0x4661b6 */
  esp -= 4; W32(esp, 0x4674d4u); SPILL(); f_4661b6(); if (g_unwind) return; RELOAD();
/* 4674d4: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 4674d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_4674d8: /* 4674d8: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 4674db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4674dc: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 4674df: call 0x465162 */
  esp -= 4; W32(esp, 0x4674e4u); SPILL(); f_465162(); if (g_unwind) return; RELOAD();
/* 4674e4: cmp dword ptr [ebp - 0x1c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 4674e8: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4674ea: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 4674ed: jae 0x4674f2 */
  if (!cf) goto L_4674f2;
L_4674ef: /* 4674ef: lea edx, [ebp - 0x30] */
  edx = (uint32_t)(ebp + 0xffffffd0u);
L_4674f2: /* 4674f2: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 4674f5: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 4674f7: lea ebx, [ebp - 0x14] */
  ebx = (uint32_t)(ebp + 0xffffffecu);
/* 4674fa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4674fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4674fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 4674fd: lea eax, [esi + 0x50] */
  eax = (uint32_t)(esi + 0x50u);
/* 467500: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 467501: call dword ptr [edi + 0x18] */
  { uint32_t t = R32((uint32_t)(edi + 0x18u)); esp -= 4; W32(esp, 0x467504u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 467504: xor ebx, ebx */
  ebx = 0;
/* 467506: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 467508: je 0x467522 */
  if (zf) goto L_467522;
L_46750a: /* 46750a: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 46750b: je 0x467525 */
  if (zf) goto L_467525;
L_46750d: /* 46750d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 46750e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 46750f: jne 0x467513 */
  if (!zf) goto L_467513;
L_467511: /* 467511: mov bl, 1 */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_467513: /* 467513: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 467515: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 467518: call 0x461ea8 */
  esp -= 4; W32(esp, 0x46751du); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 46751d: mov al, bl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 46751f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 467520: jmp 0x46756f */
  goto L_46756f;
L_467522: /* 467522: mov byte ptr [esi + 0x4c], bl */
  W8((uint32_t)(esi + 0x4cu), (ebx & 0xffu));
L_467525: /* 467525: cmp dword ptr [ebp - 0x1c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 467529: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 46752c: jae 0x467531 */
  if (!cf) goto L_467531;
L_46752e: /* 46752e: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
L_467531: /* 467531: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 467534: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  edi = r;
  }
/* 467536: je 0x467558 */
  if (zf) goto L_467558;
L_467538: /* 467538: cmp dword ptr [ebp - 0x1c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46753c: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 46753f: jae 0x467544 */
  if (!cf) goto L_467544;
L_467541: /* 467541: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
L_467544: /* 467544: push dword ptr [esi + 0x5c] */
  { uint32_t v = R32((uint32_t)(esi + 0x5cu)); esp -= 4; W32(esp, v); }
/* 467547: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 467549: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46754a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46754b: call dword ptr [0x48e054] */
  esp -= 4; W32(esp, 0x467551u); SPILL(); f_42cf72(); if (g_unwind) return; /* MSVCR70!fwrite */ RELOAD();
/* 467551: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 467554: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 467556: jne 0x467513 */
  if (!zf) goto L_467513;
L_467558: /* 467558: cmp byte ptr [esi + 0x4c], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x4cu))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 46755b: je 0x467511 */
  if (zf) goto L_467511;
L_46755d: /* 46755d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 46755e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 467560: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 467563: call 0x466156 */
  esp -= 4; W32(esp, 0x467568u); SPILL(); f_466156(); if (g_unwind) return; RELOAD();
/* 467568: jmp 0x4674d8 */
  goto L_4674d8;
L_46756d: /* 46756d: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
L_46756f: /* 46756f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 467572: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 467579: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 46757c: xor ecx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* 46757f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 467580: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 467581: call 0x46190c */
  esp -= 4; W32(esp, 0x467586u); SPILL(); f_46190c(); if (g_unwind) return; RELOAD();
/* 467586: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 467587: ret  */
  esp += 4; SPILL(); return;
}

void f_467588(void) {
  LOAD_REGS();
L_467588: /* 467588: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 46758c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46758e: call 0x4620f5 */
  esp -= 4; W32(esp, 0x467593u); SPILL(); f_4620f5(); if (g_unwind) return; RELOAD();
/* 467593: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 467597: ret  */
  esp += 4; SPILL(); return;
}

void f_467598(void) {
  LOAD_REGS();
L_467598: /* 467598: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 46759c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46759e: call 0x462ce1 */
  esp -= 4; W32(esp, 0x4675a3u); SPILL(); f_462ce1(); if (g_unwind) return; RELOAD();
/* 4675a3: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4675a7: ret  */
  esp += 4; SPILL(); return;
}

void f_4675a8(void) {
  LOAD_REGS();
L_4675a8: /* 4675a8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4675a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4675ab: mov esi, ecx */
  esi = ecx;
/* 4675ad: call 0x461ea8 */
  esp -= 4; W32(esp, 0x4675b2u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 4675b2: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 4675b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4675b6: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4675ba: mov ecx, esi */
  ecx = esi;
/* 4675bc: call 0x467320 */
  esp -= 4; W32(esp, 0x4675c1u); SPILL(); f_467320(); if (g_unwind) return; RELOAD();
/* 4675c1: mov eax, esi */
  eax = esi;
/* 4675c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4675c4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4675c7(void) {
  LOAD_REGS();
L_4675c7: /* 4675c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4675c8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4675ca: mov esi, ecx */
  esi = ecx;
/* 4675cc: call 0x461ea8 */
  esp -= 4; W32(esp, 0x4675d1u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 4675d1: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4675d5: mov ecx, esi */
  ecx = esi;
/* 4675d7: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4675db: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4675df: call 0x467320 */
  esp -= 4; W32(esp, 0x4675e4u); SPILL(); f_467320(); if (g_unwind) return; RELOAD();
/* 4675e4: mov eax, esi */
  eax = esi;
/* 4675e6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4675e7: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4675ea(void) {
  LOAD_REGS();
L_4675ea: /* 4675ea: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4675eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4675ed: mov esi, ecx */
  esi = ecx;
/* 4675ef: call 0x461ea8 */
  esp -= 4; W32(esp, 0x4675f4u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 4675f4: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4675f8: mov ecx, esi */
  ecx = esi;
/* 4675fa: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4675fe: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 467602: call 0x467320 */
  esp -= 4; W32(esp, 0x467607u); SPILL(); f_467320(); if (g_unwind) return; RELOAD();
/* 467607: mov eax, esi */
  eax = esi;
/* 467609: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46760a: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_46760d(void) {
  LOAD_REGS();
L_46760d: /* 46760d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46760e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 467610: mov esi, ecx */
  esi = ecx;
/* 467612: call 0x461ea8 */
  esp -= 4; W32(esp, 0x467617u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 467617: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46761b: mov ecx, esi */
  ecx = esi;
/* 46761d: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 467621: call 0x461767 */
  esp -= 4; W32(esp, 0x467626u); SPILL(); f_461767(); if (g_unwind) return; RELOAD();
/* 467626: mov eax, esi */
  eax = esi;
/* 467628: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 467629: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46762c(void) {
  LOAD_REGS();
L_46762c: /* 46762c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46762d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46762f: mov esi, ecx */
  esi = ecx;
/* 467631: call 0x461ea8 */
  esp -= 4; W32(esp, 0x467636u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 467636: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46763a: mov ecx, esi */
  ecx = esi;
/* 46763c: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 467640: call 0x461767 */
  esp -= 4; W32(esp, 0x467645u); SPILL(); f_461767(); if (g_unwind) return; RELOAD();
/* 467645: mov eax, esi */
  eax = esi;
/* 467647: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 467648: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_46764b(void) {
  LOAD_REGS();
L_46764b: /* 46764b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46764c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46764e: mov esi, ecx */
  esi = ecx;
/* 467650: call 0x461ea8 */
  esp -= 4; W32(esp, 0x467655u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 467655: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 467659: mov ecx, esi */
  ecx = esi;
/* 46765b: call 0x46174a */
  esp -= 4; W32(esp, 0x467660u); SPILL(); f_46174a(); if (g_unwind) return; RELOAD();
/* 467660: mov eax, esi */
  eax = esi;
/* 467662: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 467663: ret 8 */
  esp += 12; SPILL(); return;
}

void f_467666(void) {
  LOAD_REGS();
L_467666: /* 467666: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 467667: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 467669: mov esi, ecx */
  esi = ecx;
/* 46766b: call 0x461ea8 */
  esp -= 4; W32(esp, 0x467670u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 467670: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 467674: cmp dword ptr [esp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 467678: je 0x46768a */
  if (zf) goto L_46768a;
L_46767a: /* 46767a: sub eax, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 46767e: mov ecx, esi */
  ecx = esi;
/* 467680: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 467681: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 467685: call 0x461767 */
  esp -= 4; W32(esp, 0x46768au); SPILL(); f_461767(); if (g_unwind) return; RELOAD();
L_46768a: /* 46768a: mov eax, esi */
  eax = esi;
/* 46768c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46768d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_467690(void) {
  LOAD_REGS();
L_467690: /* 467690: jmp 0x46174a */
  SPILL(); f_46174a(); return;
}

void f_467695(void) {
  LOAD_REGS();
L_467695: /* 467695: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 467697: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 467699: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46769d: call 0x466014 */
  esp -= 4; W32(esp, 0x4676a2u); SPILL(); f_466014(); if (g_unwind) return; RELOAD();
/* 4676a2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4676a5(void) {
  LOAD_REGS();
L_4676a5: /* 4676a5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4676a6: mov ebp, esp */
  ebp = esp;
/* 4676a8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4676a9: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4676ac: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4676b0: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4676b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4676b4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4676b7: call 0x4675c7 */
  esp -= 4; W32(esp, 0x4676bcu); SPILL(); f_4675c7(); if (g_unwind) return; RELOAD();
/* 4676bc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4676bf: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4676c0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4676c3(void) {
  LOAD_REGS();
L_4676c3: /* 4676c3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4676c4: mov ebp, esp */
  ebp = esp;
/* 4676c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4676c7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4676c8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4676c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4676ca: mov esi, ecx */
  esi = ecx;
/* 4676cc: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 4676cf: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4676d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4676d2: lea edi, [esi + 0x44] */
  edi = (uint32_t)(esi + 0x44u);
/* 4676d5: xor ebx, ebx */
  ebx = 0;
/* 4676d7: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4676d9: jne 0x46770d */
  if (!zf) goto L_46770d;
L_4676db: /* 4676db: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 4676de: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4676e0: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4676e2: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 4676e4: jbe 0x46770d */
  if ((cf | zf)) goto L_46770d;
L_4676e6: /* 4676e6: cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4676ea: jne 0x46770d */
  if (!zf) goto L_46770d;
L_4676ec: /* 4676ec: cmp dword ptr [esi + 0x3c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4676ef: jne 0x4676f6 */
  if (!zf) goto L_4676f6;
L_4676f1: /* 4676f1: dec dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 4676f4: jmp 0x46770d */
  goto L_46770d;
L_4676f6: /* 4676f6: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 4676f9: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 4676fc: sub dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 4676ff: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 467701: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 467702: call 0x466522 */
  esp -= 4; W32(esp, 0x467707u); SPILL(); f_466522(); if (g_unwind) return; RELOAD();
/* 467707: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 46770a: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
L_46770d: /* 46770d: cmp dword ptr [esi + 0x5c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x5cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 467710: je 0x467787 */
  if (zf) goto L_467787;
L_467712: /* 467712: mov ecx, esi */
  ecx = esi;
/* 467714: call 0x467482 */
  esp -= 4; W32(esp, 0x467719u); SPILL(); f_467482(); if (g_unwind) return; RELOAD();
/* 467719: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 46771b: je 0x467787 */
  if (zf) goto L_467787;
L_46771d: /* 46771d: cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 467720: jne 0x467728 */
  if (!zf) goto L_467728;
L_467722: /* 467722: cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 467726: je 0x46773e */
  if (zf) goto L_46773e;
L_467728: /* 467728: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46772b: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46772e: push dword ptr [esi + 0x5c] */
  { uint32_t v = R32((uint32_t)(esi + 0x5cu)); esp -= 4; W32(esp, v); }
/* 467731: call dword ptr [0x48e060] */
  esp -= 4; W32(esp, 0x467737u); SPILL(); f_42cc09(); if (g_unwind) return; /* MSVCR70!fseek */ RELOAD();
/* 467737: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46773a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46773c: jne 0x467787 */
  if (!zf) goto L_467787;
L_46773e: /* 46773e: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 467741: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 467742: push dword ptr [esi + 0x5c] */
  { uint32_t v = R32((uint32_t)(esi + 0x5cu)); esp -= 4; W32(esp, v); }
/* 467745: call dword ptr [0x48e05c] */
  esp -= 4; W32(esp, 0x46774bu); SPILL(); f_42c5b4(); if (g_unwind) return; /* MSVCR70!fgetpos */ RELOAD();
/* 46774b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46774d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46774e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46774f: jne 0x467787 */
  if (!zf) goto L_467787;
L_467751: /* 467751: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 467754: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 467756: jne 0x46776e */
  if (!zf) goto L_46776e;
L_467758: /* 467758: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 46775b: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 46775d: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 467760: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 467762: mov ecx, dword ptr [esi + 0x30] */
  ecx = R32((uint32_t)(esi + 0x30u));
/* 467765: mov eax, esi */
  eax = esi;
/* 467767: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 467769: add eax, 0x44 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 46776c: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_46776e: /* 46776e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 467771: mov esi, dword ptr [esi + 0x50] */
  esi = R32((uint32_t)(esi + 0x50u));
/* 467774: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 467777: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 46777a: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 46777d: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 46777f: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 467782: mov dword ptr [eax + 0x10], esi */
  W32((uint32_t)(eax + 0x10u), esi);
/* 467785: jmp 0x4677ad */
  goto L_4677ad;
L_467787: /* 467787: mov ecx, dword ptr [0x48e2bc] */
  ecx = R32((uint32_t)(0x48e2bcu));
/* 46778d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 467790: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 467792: mov ecx, dword ptr [0x4d0eb0] */
  ecx = R32((uint32_t)(0x4d0eb0u));
/* 467798: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 46779b: mov ecx, dword ptr [0x4d0eb4] */
  ecx = R32((uint32_t)(0x4d0eb4u));
/* 4677a1: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 4677a4: mov ecx, dword ptr [0x4d1094] */
  ecx = R32((uint32_t)(0x4d1094u));
/* 4677aa: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
L_4677ad: /* 4677ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4677ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4677af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4677b0: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4677b1: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_4677b4(void) {
  LOAD_REGS();
L_4677b4: /* 4677b4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4677b5: mov ebp, esp */
  ebp = esp;
/* 4677b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4677b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4677b9: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 4677bc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4677bd: mov esi, ecx */
  esi = ecx;
/* 4677bf: cmp dword ptr [esi + 0x5c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x5cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4677c3: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 4677c6: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 4677c9: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 4677cc: je 0x46786f */
  if (zf) goto L_46786f;
L_4677d2: /* 4677d2: call 0x467482 */
  esp -= 4; W32(esp, 0x4677d7u); SPILL(); f_467482(); if (g_unwind) return; RELOAD();
/* 4677d7: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4677d9: je 0x46786f */
  if (zf) goto L_46786f;
L_4677df: /* 4677df: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 4677e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4677e3: push dword ptr [esi + 0x5c] */
  { uint32_t v = R32((uint32_t)(esi + 0x5cu)); esp -= 4; W32(esp, v); }
/* 4677e6: call dword ptr [0x48e064] */
  esp -= 4; W32(esp, 0x4677ecu); SPILL(); f_42cc52(); if (g_unwind) return; /* MSVCR70!fsetpos */ RELOAD();
/* 4677ec: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4677ee: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4677ef: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4677f0: jne 0x46786f */
  if (!zf) goto L_46786f;
L_4677f2: /* 4677f2: cmp dword ptr [ebp + 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4677f5: je 0x46780c */
  if (zf) goto L_46780c;
L_4677f7: /* 4677f7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 4677f9: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4677fc: push dword ptr [esi + 0x5c] */
  { uint32_t v = R32((uint32_t)(esi + 0x5cu)); esp -= 4; W32(esp, v); }
/* 4677ff: call dword ptr [0x48e060] */
  esp -= 4; W32(esp, 0x467805u); SPILL(); f_42cc09(); if (g_unwind) return; /* MSVCR70!fseek */ RELOAD();
/* 467805: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 467808: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46780a: jne 0x46786f */
  if (!zf) goto L_46786f;
L_46780c: /* 46780c: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 46780f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 467810: push dword ptr [esi + 0x5c] */
  { uint32_t v = R32((uint32_t)(esi + 0x5cu)); esp -= 4; W32(esp, v); }
/* 467813: call dword ptr [0x48e05c] */
  esp -= 4; W32(esp, 0x467819u); SPILL(); f_42c5b4(); if (g_unwind) return; /* MSVCR70!fgetpos */ RELOAD();
/* 467819: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46781b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46781c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46781d: jne 0x46786f */
  if (!zf) goto L_46786f;
L_46781f: /* 46781f: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 467822: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 467824: je 0x467835 */
  if (zf) goto L_467835;
L_467826: /* 467826: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 467829: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 46782b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 46782d: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 467830: call 0x466522 */
  esp -= 4; W32(esp, 0x467835u); SPILL(); f_466522(); if (g_unwind) return; RELOAD();
L_467835: /* 467835: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 467838: lea eax, [esi + 0x44] */
  eax = (uint32_t)(esi + 0x44u);
/* 46783b: cmp dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46783d: jne 0x467855 */
  if (!zf) goto L_467855;
L_46783f: /* 46783f: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 467842: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 467844: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 467847: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 467849: mov ecx, esi */
  ecx = esi;
/* 46784b: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 46784d: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 467850: add ecx, 0x44 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 467853: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_467855: /* 467855: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 467858: mov esi, dword ptr [esi + 0x50] */
  esi = R32((uint32_t)(esi + 0x50u));
/* 46785b: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 46785e: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 467861: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 467864: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 467867: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 46786a: mov dword ptr [eax + 0x10], esi */
  W32((uint32_t)(eax + 0x10u), esi);
/* 46786d: jmp 0x467895 */
  goto L_467895;
L_46786f: /* 46786f: mov ecx, dword ptr [0x48e2bc] */
  ecx = R32((uint32_t)(0x48e2bcu));
/* 467875: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 467878: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 46787a: mov ecx, dword ptr [0x4d0eb0] */
  ecx = R32((uint32_t)(0x4d0eb0u));
/* 467880: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 467883: mov ecx, dword ptr [0x4d0eb4] */
  ecx = R32((uint32_t)(0x4d0eb4u));
/* 467889: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 46788c: mov ecx, dword ptr [0x4d1094] */
  ecx = R32((uint32_t)(0x4d1094u));
/* 467892: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
L_467895: /* 467895: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 467896: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 467897: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_46789a(void) {
  LOAD_REGS();
L_46789a: /* 46789a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46789b: mov esi, ecx */
  esi = ecx;
/* 46789d: cmp dword ptr [esi + 0x5c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x5cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4678a1: je 0x4678c8 */
  if (zf) goto L_4678c8;
L_4678a3: /* 4678a3: call 0x467482 */
  esp -= 4; W32(esp, 0x4678a8u); SPILL(); f_467482(); if (g_unwind) return; RELOAD();
/* 4678a8: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4678aa: je 0x4678c8 */
  if (zf) goto L_4678c8;
L_4678ac: /* 4678ac: push dword ptr [esi + 0x5c] */
  { uint32_t v = R32((uint32_t)(esi + 0x5cu)); esp -= 4; W32(esp, v); }
/* 4678af: call dword ptr [0x48e068] */
  esp -= 4; W32(esp, 0x4678b5u); SPILL(); f_41441f(); if (g_unwind) return; /* MSVCR70!fclose */ RELOAD();
/* 4678b5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4678b7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4678b8: jne 0x4678c8 */
  if (!zf) goto L_4678c8;
L_4678ba: /* 4678ba: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 4678bc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4678bd: mov ecx, esi */
  ecx = esi;
/* 4678bf: call 0x46160f */
  esp -= 4; W32(esp, 0x4678c4u); SPILL(); f_46160f(); if (g_unwind) return; RELOAD();
/* 4678c4: mov eax, esi */
  eax = esi;
/* 4678c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4678c7: ret  */
  esp += 4; SPILL(); return;
L_4678c8: /* 4678c8: xor eax, eax */
  eax = 0;
/* 4678ca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4678cb: ret  */
  esp += 4; SPILL(); return;
}

void f_4678cc(void) {
  LOAD_REGS();
L_4678cc: /* 4678cc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4678cd: mov ebp, esp */
  ebp = esp;
/* 4678cf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4678d0: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4678d4: add ecx, 0x58 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x58u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 4678d7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4678d8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4678db: call 0x4675a8 */
  esp -= 4; W32(esp, 0x4678e0u); SPILL(); f_4675a8(); if (g_unwind) return; RELOAD();
/* 4678e0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4678e3: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4678e4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4678e7(void) {
  LOAD_REGS();
L_4678e7: /* 4678e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4678e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4678e9: mov esi, ecx */
  esi = ecx;
/* 4678eb: call 0x48bede */
  esp -= 4; W32(esp, 0x4678f0u); SPILL(); f_48bede(); if (g_unwind) return; RELOAD();
/* 4678f0: mov edi, eax */
  edi = eax;
/* 4678f2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4678f4: je 0x467907 */
  if (zf) goto L_467907;
L_4678f6: /* 4678f6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4678f7: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 4678fa: call 0x46174a */
  esp -= 4; W32(esp, 0x4678ffu); SPILL(); f_46174a(); if (g_unwind) return; RELOAD();
/* 4678ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 467900: call dword ptr [0x48e190] */
  esp -= 4; W32(esp, 0x467906u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* 467906: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_467907: /* 467907: cmp dword ptr [esi + 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 46790b: je 0x46791d */
  if (zf) goto L_46791d;
L_46790d: /* 46790d: cmp dword ptr [esi + 0x1c], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1cu))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 467911: jb 0x467918 */
  if (cf) goto L_467918;
L_467913: /* 467913: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 467916: jmp 0x467922 */
  goto L_467922;
L_467918: /* 467918: lea eax, [esi + 8] */
  eax = (uint32_t)(esi + 0x8u);
/* 46791b: jmp 0x467922 */
  goto L_467922;
L_46791d: /* 46791d: mov eax, 0x4c8c80 */
  eax = 0x4c8c80u;
L_467922: /* 467922: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 467923: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 467924: ret  */
  esp += 4; SPILL(); return;
}

void f_467925(void) {
  LOAD_REGS();
L_467925: /* 467925: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 467926: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 467927: mov esi, ecx */
  esi = ecx;
/* 467929: call 0x48bee4 */
  esp -= 4; W32(esp, 0x46792eu); SPILL(); f_48bee4(); if (g_unwind) return; RELOAD();
/* 46792e: mov edi, eax */
  edi = eax;
/* 467930: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 467932: je 0x467945 */
  if (zf) goto L_467945;
L_467934: /* 467934: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 467935: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 467938: call 0x46174a */
  esp -= 4; W32(esp, 0x46793du); SPILL(); f_46174a(); if (g_unwind) return; RELOAD();
/* 46793d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46793e: call dword ptr [0x48e190] */
  esp -= 4; W32(esp, 0x467944u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* 467944: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_467945: /* 467945: cmp dword ptr [esi + 0x34], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x34u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 467949: je 0x46795b */
  if (zf) goto L_46795b;
L_46794b: /* 46794b: cmp dword ptr [esi + 0x38], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x38u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 46794f: jb 0x467956 */
  if (cf) goto L_467956;
L_467951: /* 467951: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 467954: jmp 0x467960 */
  goto L_467960;
L_467956: /* 467956: lea eax, [esi + 0x24] */
  eax = (uint32_t)(esi + 0x24u);
/* 467959: jmp 0x467960 */
  goto L_467960;
L_46795b: /* 46795b: mov eax, 0x4c8cd8 */
  eax = 0x4c8cd8u;
L_467960: /* 467960: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 467961: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 467962: ret  */
  esp += 4; SPILL(); return;
}

void f_467963(void) {
  LOAD_REGS();
L_467963: /* 467963: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 467964: mov ebp, esp */
  ebp = esp;
/* 467966: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467967: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 467969: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 46796c: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 467970: add eax, 0x18 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 467973: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 467974: call 0x4675a8 */
  esp -= 4; W32(esp, 0x467979u); SPILL(); f_4675a8(); if (g_unwind) return; RELOAD();
/* 467979: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46797c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46797d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_467980(void) {
  LOAD_REGS();
L_467980: /* 467980: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 467982: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 467984: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 467988: call 0x467320 */
  esp -= 4; W32(esp, 0x46798du); SPILL(); f_467320(); if (g_unwind) return; RELOAD();
/* 46798d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_467990(void) {
  LOAD_REGS();
L_467990: /* 467990: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 467991: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 467995: mov esi, ecx */
  esi = ecx;
/* 467997: call 0x4679a9 */
  esp -= 4; W32(esp, 0x46799cu); SPILL(); f_4679a9(); if (g_unwind) return; RELOAD();
/* 46799c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46799d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46799e: mov ecx, esi */
  ecx = esi;
/* 4679a0: call 0x467b23 */
  esp -= 4; W32(esp, 0x4679a5u); SPILL(); f_467b23(); if (g_unwind) return; RELOAD();
/* 4679a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4679a6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4679a9(void) {
  LOAD_REGS();
L_4679a9: /* 4679a9: mov eax, 0x48bf90 */
  eax = 0x48bf90u;
/* 4679ae: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4679b3u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4679b3: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4679b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4679b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4679b9: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 4679bc: call 0x4612ba */
  esp -= 4; W32(esp, 0x4679c1u); SPILL(); f_4612ba(); if (g_unwind) return; RELOAD();
/* 4679c1: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4679c5: mov ecx, 0x4d0674 */
  ecx = 0x4d0674u;
/* 4679ca: call 0x464006 */
  esp -= 4; W32(esp, 0x4679cfu); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 4679cf: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 4679d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4679d3: call 0x488d6c */
  esp -= 4; W32(esp, 0x4679d8u); SPILL(); f_488d6c(); if (g_unwind) return; RELOAD();
/* 4679d8: mov esi, eax */
  esi = eax;
/* 4679da: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4679dc: jne 0x467a30 */
  if (!zf) goto L_467a30;
L_4679de: /* 4679de: mov eax, dword ptr [0x4d10a4] */
  eax = R32((uint32_t)(0x4d10a4u));
/* 4679e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4679e5: je 0x4679eb */
  if (zf) goto L_4679eb;
L_4679e7: /* 4679e7: mov esi, eax */
  esi = eax;
/* 4679e9: jmp 0x467a30 */
  goto L_467a30;
L_4679eb: /* 4679eb: push 0x4d10a4 */
  { uint32_t v = 0x4d10a4u; esp -= 4; W32(esp, v); }
/* 4679f0: call 0x467a4b */
  esp -= 4; W32(esp, 0x4679f5u); SPILL(); f_467a4b(); if (g_unwind) return; RELOAD();
/* 4679f5: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4679f8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4679f9: jne 0x467a17 */
  if (!zf) goto L_467a17;
L_4679fb: /* 4679fb: push 0x4c8c70 */
  { uint32_t v = 0x4c8c70u; esp -= 4; W32(esp, v); }
/* 467a00: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 467a03: call dword ptr [0x48e168] */
  esp -= 4; W32(esp, 0x467a09u); SPILL(); f_41aa49(); if (g_unwind) return; /* MSVCR70!??0bad_cast@@QAE@PBD@Z */ RELOAD();
/* 467a09: push 0x4c9660 */
  { uint32_t v = 0x4c9660u; esp -= 4; W32(esp, v); }
/* 467a0e: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 467a11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 467a12: call 0x48bed8 */
  esp -= 4; W32(esp, 0x467a17u); SPILL(); f_48bed8(); if (g_unwind) return; RELOAD();
L_467a17: /* 467a17: mov eax, dword ptr [0x4d10a4] */
  eax = R32((uint32_t)(0x4d10a4u));
/* 467a1c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 467a1d: mov edi, eax */
  edi = eax;
/* 467a1f: mov ecx, edi */
  ecx = edi;
/* 467a21: mov esi, eax */
  esi = eax;
/* 467a23: call 0x461292 */
  esp -= 4; W32(esp, 0x467a28u); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 467a28: mov ecx, edi */
  ecx = edi;
/* 467a2a: call 0x488de4 */
  esp -= 4; W32(esp, 0x467a2fu); SPILL(); f_488de4(); if (g_unwind) return; RELOAD();
/* 467a2f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_467a30: /* 467a30: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 467a34: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 467a37: call 0x4613d8 */
  esp -= 4; W32(esp, 0x467a3cu); SPILL(); f_4613d8(); if (g_unwind) return; RELOAD();
/* 467a3c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 467a3f: mov eax, esi */
  eax = esi;
/* 467a41: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 467a42: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 467a49: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 467a4a: ret  */
  esp += 4; SPILL(); return;
}

void f_467a4b(void) {
  LOAD_REGS();
L_467a4b: /* 467a4b: mov eax, 0x48bf7e */
  eax = 0x48bf7eu;
/* 467a50: call 0x4616c0 */
  esp -= 4; W32(esp, 0x467a55u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 467a55: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 467a56: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 467a59: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 467a5b: je 0x467a84 */
  if (zf) goto L_467a84;
L_467a5d: /* 467a5d: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 467a60: jne 0x467a84 */
  if (!zf) goto L_467a84;
L_467a62: /* 467a62: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 467a64: call 0x4620da */
  esp -= 4; W32(esp, 0x467a69u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 467a69: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467a6a: mov ecx, eax */
  ecx = eax;
/* 467a6c: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 467a6f: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 467a73: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 467a75: je 0x467a80 */
  if (zf) goto L_467a80;
L_467a77: /* 467a77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 467a79: call 0x467a94 */
  esp -= 4; W32(esp, 0x467a7eu); SPILL(); f_467a94(); if (g_unwind) return; RELOAD();
/* 467a7e: jmp 0x467a82 */
  goto L_467a82;
L_467a80: /* 467a80: xor eax, eax */
  eax = 0;
L_467a82: /* 467a82: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_467a84: /* 467a84: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 467a87: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 467a89: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 467a8a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 467a8b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 467a92: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 467a93: ret  */
  esp += 4; SPILL(); return;
}

void f_467a94(void) {
  LOAD_REGS();
L_467a94: /* 467a94: mov eax, 0x48c0dc */
  eax = 0x48c0dcu;
/* 467a99: call 0x4616c0 */
  esp -= 4; W32(esp, 0x467a9eu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 467a9e: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 467aa1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 467aa4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 467aa5: mov esi, ecx */
  esi = ecx;
/* 467aa7: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 467aaa: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 467aad: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 467ab1: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 467ab6: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 467abc: mov dword ptr [esi], 0x4c6fbc */
  W32((uint32_t)(esi), 0x4c6fbcu);
/* 467ac2: call 0x488f1b */
  esp -= 4; W32(esp, 0x467ac7u); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 467ac7: call 0x4887f7 */
  esp -= 4; W32(esp, 0x467accu); SPILL(); f_4887f7(); if (g_unwind) return; RELOAD();
/* 467acc: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 467ad2: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 467ad5: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 467ad8: call 0x488e1d */
  esp -= 4; W32(esp, 0x467addu); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 467add: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 467ae0: mov eax, esi */
  eax = esi;
/* 467ae2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 467ae3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 467aea: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 467aeb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_467aee(void) {
  LOAD_REGS();
L_467aee: /* 467aee: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 467af2: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 467af6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 467af8: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 467afc: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 467b00: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 467b02: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 467b04: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 467b05: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_467b08(void) {
  LOAD_REGS();
L_467b08: /* 467b08: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 467b0a: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* 467b0b: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_467b0e(void) {
  LOAD_REGS();
L_467b0e: /* 467b0e: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 467b12: sub eax, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 467b16: cmp dword ptr [esp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 467b1a: jae 0x467b20 */
  if (!cf) goto L_467b20;
L_467b1c: /* 467b1c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
L_467b20: /* 467b20: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_467b23(void) {
  LOAD_REGS();
L_467b23: /* 467b23: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 467b24: mov ebp, esp */
  ebp = esp;
/* 467b26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 467b27: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 467b28: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 467b2b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 467b2d: mov esi, ecx */
  esi = ecx;
/* 467b2f: mov ecx, edi */
  ecx = edi;
/* 467b31: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x467b34u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 467b34: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 467b36: je 0x467b3e */
  if (zf) goto L_467b3e;
L_467b38: /* 467b38: and dword ptr [esi + 0x3c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x3cu), r);
  }
/* 467b3c: jmp 0x467b8d */
  goto L_467b8d;
L_467b3e: /* 467b3e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 467b3f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 467b40: lea ebx, [esi + 0x58] */
  ebx = (uint32_t)(esi + 0x58u);
/* 467b43: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 467b44: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 467b47: mov dword ptr [esi + 0x3c], edi */
  W32((uint32_t)(esi + 0x3cu), edi);
/* 467b4a: call 0x467b93 */
  esp -= 4; W32(esp, 0x467b4fu); SPILL(); f_467b93(); if (g_unwind) return; RELOAD();
/* 467b4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 467b50: mov ecx, ebx */
  ecx = ebx;
/* 467b52: call 0x464063 */
  esp -= 4; W32(esp, 0x467b57u); SPILL(); f_464063(); if (g_unwind) return; RELOAD();
/* 467b57: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 467b5a: call 0x461389 */
  esp -= 4; W32(esp, 0x467b5fu); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 467b5f: mov ecx, esi */
  ecx = esi;
/* 467b61: call 0x461f3f */
  esp -= 4; W32(esp, 0x467b66u); SPILL(); f_461f3f(); if (g_unwind) return; RELOAD();
/* 467b66: cmp dword ptr [esi + 0x48], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x48u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 467b6a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 467b6b: jne 0x467b8d */
  if (!zf) goto L_467b8d;
L_467b6d: /* 467b6d: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 467b6f: call 0x4620da */
  esp -= 4; W32(esp, 0x467b74u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 467b74: mov edi, eax */
  edi = eax;
/* 467b76: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 467b78: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467b79: je 0x467b88 */
  if (zf) goto L_467b88;
L_467b7b: /* 467b7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 467b7d: mov ecx, edi */
  ecx = edi;
/* 467b7f: call 0x461ea8 */
  esp -= 4; W32(esp, 0x467b84u); SPILL(); f_461ea8(); if (g_unwind) return; RELOAD();
/* 467b84: mov eax, edi */
  eax = edi;
/* 467b86: jmp 0x467b8a */
  goto L_467b8a;
L_467b88: /* 467b88: xor eax, eax */
  eax = 0;
L_467b8a: /* 467b8a: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
L_467b8d: /* 467b8d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 467b8e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 467b8f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 467b90: ret 4 */
  esp += 8; SPILL(); return;
}

void f_467b93(void) {
  LOAD_REGS();
L_467b93: /* 467b93: mov eax, 0x48c0f0 */
  eax = 0x48c0f0u;
/* 467b98: call 0x4616c0 */
  esp -= 4; W32(esp, 0x467b9du); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 467b9d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467b9e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 467b9f: push 0x34 */
  { uint32_t v = 0x34u; esp -= 4; W32(esp, v); }
/* 467ba1: mov esi, ecx */
  esi = ecx;
/* 467ba3: call 0x4620da */
  esp -= 4; W32(esp, 0x467ba8u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 467ba8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467ba9: mov ecx, eax */
  ecx = eax;
/* 467bab: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* 467bae: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 467bb2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 467bb4: je 0x467bc2 */
  if (zf) goto L_467bc2;
L_467bb6: /* 467bb6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 467bb9: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* 467bbb: call 0x486feb */
  esp -= 4; W32(esp, 0x467bc0u); SPILL(); f_486feb(); if (g_unwind) return; RELOAD();
/* 467bc0: jmp 0x467bc4 */
  goto L_467bc4;
L_467bc2: /* 467bc2: xor eax, eax */
  eax = 0;
L_467bc4: /* 467bc4: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 467bc8: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 467bcc: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 467bce: je 0x467bfa */
  if (zf) goto L_467bfa;
L_467bd0: /* 467bd0: mov ecx, 0x4d0674 */
  ecx = 0x4d0674u;
/* 467bd5: call 0x464006 */
  esp -= 4; W32(esp, 0x467bdau); SPILL(); f_464006(); if (g_unwind) return; RELOAD();
/* 467bda: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 467bdc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 467bdd: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 467be0: call 0x486b0d */
  esp -= 4; W32(esp, 0x467be5u); SPILL(); f_486b0d(); if (g_unwind) return; RELOAD();
/* 467be5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 467be7: and dword ptr [eax + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x10u), r);
  }
/* 467beb: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 467bed: push 0x48e1bc */
  { uint32_t v = 0x48e1bcu; esp -= 4; W32(esp, v); }
/* 467bf2: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 467bf5: call 0x46174a */
  esp -= 4; W32(esp, 0x467bfau); SPILL(); f_46174a(); if (g_unwind) return; RELOAD();
L_467bfa: /* 467bfa: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 467bfd: mov eax, esi */
  eax = esi;
/* 467bff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 467c00: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 467c07: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 467c08: ret 8 */
  esp += 12; SPILL(); return;
}

void f_467c0b(void) {
  LOAD_REGS();
L_467c0b: /* 467c0b: mov eax, dword ptr [ecx - 8] */
  eax = R32((uint32_t)(ecx + 0xfffffff8u));
/* 467c0e: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 467c11: mov dword ptr [eax + ecx - 8], 0x4c702c */
  W32((uint32_t)(eax + ecx + 0xfffffff8u), 0x4c702cu);
/* 467c19: ret  */
  esp += 4; SPILL(); return;
}

void f_467c1a(void) {
  LOAD_REGS();
L_467c1a: /* 467c1a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 467c1c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 467c1f: add ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 467c22: mov dword ptr [eax + ecx - 8], 0x4c702c */
  W32((uint32_t)(eax + ecx + 0xfffffff8u), 0x4c702cu);
/* 467c2a: jmp 0x462e5d */
  SPILL(); f_462e5d(); return;
}

void f_467c2f(void) {
  LOAD_REGS();
L_467c2f: /* 467c2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 467c30: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 467c34: and dword ptr [esp + 0xc], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0xcu))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esp + 0xcu), r);
  }
/* 467c39: xor ecx, ecx */
  ecx = 0;
/* 467c3b: and esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 467c3e: xor eax, eax */
  eax = 0;
/* 467c40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 467c41: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_467c42: /* 467c42: cmp ecx, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 467c46: je 0x467c54 */
  if (zf) goto L_467c54;
L_467c48: /* 467c48: mov ecx, dword ptr [eax*4 + 0x4c8d94] */
  ecx = R32((uint32_t)(eax*4 + 0x4c8d94u));
/* 467c4f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 467c50: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 467c52: jne 0x467c42 */
  if (!zf) goto L_467c42;
L_467c54: /* 467c54: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 467c57: cmp dword ptr [eax + 0x4c8d90], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4c8d90u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 467c5e: je 0x467c96 */
  if (zf) goto L_467c96;
L_467c60: /* 467c60: push dword ptr [eax + 0x4d0f1c] */
  { uint32_t v = R32((uint32_t)(eax + 0x4d0f1cu)); esp -= 4; W32(esp, v); }
/* 467c66: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 467c6a: call dword ptr [0x48e078] */
  esp -= 4; W32(esp, 0x467c70u); SPILL(); f_42ae09(); if (g_unwind) return; /* MSVCR70!fopen */ RELOAD();
/* 467c70: mov edi, eax */
  edi = eax;
/* 467c72: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 467c74: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467c75: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467c76: je 0x467c96 */
  if (zf) goto L_467c96;
L_467c78: /* 467c78: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 467c7a: je 0x467c9b */
  if (zf) goto L_467c9b;
L_467c7c: /* 467c7c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 467c7e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 467c80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 467c81: call dword ptr [0x48e060] */
  esp -= 4; W32(esp, 0x467c87u); SPILL(); f_42cc09(); if (g_unwind) return; /* MSVCR70!fseek */ RELOAD();
/* 467c87: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 467c8a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 467c8c: je 0x467c9b */
  if (zf) goto L_467c9b;
L_467c8e: /* 467c8e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 467c8f: call dword ptr [0x48e068] */
  esp -= 4; W32(esp, 0x467c95u); SPILL(); f_41441f(); if (g_unwind) return; /* MSVCR70!fclose */ RELOAD();
/* 467c95: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_467c96: /* 467c96: xor eax, eax */
  eax = 0;
L_467c98: /* 467c98: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 467c99: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 467c9a: ret  */
  esp += 4; SPILL(); return;
L_467c9b: /* 467c9b: mov eax, edi */
  eax = edi;
/* 467c9d: jmp 0x467c98 */
  goto L_467c98;
}

void f_467c9f(void) {
  LOAD_REGS();
L_467c9f: /* 467c9f: fld qword ptr [esp + 0xc] */
  { double v = F64((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 467ca3: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 467ca6: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 467caa: fld qword ptr [esp + 0x14] */
  { double v = F64((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 467cae: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 467cb1: call 0x48beea */
  esp -= 4; W32(esp, 0x467cb6u); SPILL(); f_48beea(); if (g_unwind) return; RELOAD();
/* 467cb6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 467cb9: ret  */
  esp += 4; SPILL(); return;
}

void f_467cba(void) {
  LOAD_REGS();
L_467cba: /* 467cba: fld qword ptr [esp + 0xc] */
  { double v = F64((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 467cbe: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 467cc1: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 467cc5: fld qword ptr [esp + 0x14] */
  { double v = F64((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 467cc9: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 467ccc: call 0x48bf02 */
  esp -= 4; W32(esp, 0x467cd1u); SPILL(); f_48bf02(); if (g_unwind) return; RELOAD();
/* 467cd1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 467cd4: ret  */
  esp += 4; SPILL(); return;
}

void f_467cd5(void) {
  LOAD_REGS();
L_467cd5: /* 467cd5: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 467cd9: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 467cdd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467cde: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467cdf: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 467ce2: call dword ptr [0x48e088] */
  esp -= 4; W32(esp, 0x467ce8u); SPILL(); f_434033(); if (g_unwind) return; /* MSVCR70!ldexp */ RELOAD();
/* 467ce8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 467ceb: ret  */
  esp += 4; SPILL(); return;
}

void f_467cec(void) {
  LOAD_REGS();
L_467cec: /* 467cec: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 467cf0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 467cf3: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 467cf7: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 467cfb: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 467cfe: call 0x48beea */
  esp -= 4; W32(esp, 0x467d03u); SPILL(); f_48beea(); if (g_unwind) return; RELOAD();
/* 467d03: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 467d06: ret  */
  esp += 4; SPILL(); return;
}

void f_467d07(void) {
  LOAD_REGS();
L_467d07: /* 467d07: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 467d0b: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 467d0e: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 467d12: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 467d16: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 467d19: call 0x48bf02 */
  esp -= 4; W32(esp, 0x467d1eu); SPILL(); f_48bf02(); if (g_unwind) return; RELOAD();
/* 467d1e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 467d21: ret  */
  esp += 4; SPILL(); return;
}

void f_467d22(void) {
  LOAD_REGS();
L_467d22: /* 467d22: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 467d23: mov ebp, esp */
  ebp = esp;
/* 467d25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467d26: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467d27: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 467d28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 467d29: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 467d2a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 467d2d: xor edi, edi */
  edi = 0;
/* 467d2f: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
/* 467d32: call 0x461028 */
  esp -= 4; W32(esp, 0x467d37u); SPILL(); hle_strlen(); RELOAD();
/* 467d37: mov esi, eax */
  esi = eax;
/* 467d39: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 467d3c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  esi = r;
  }
/* 467d3d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467d3e: mov ebx, esi */
  ebx = esi;
/* 467d40: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 467d43: je 0x467d68 */
  if (zf) goto L_467d68;
L_467d45: /* 467d45: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 467d48: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 467d4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 467d4c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 467d4d: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* 467d50: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 467d52: call 0x461dae */
  esp -= 4; W32(esp, 0x467d57u); SPILL(); f_461dae(); if (g_unwind) return; RELOAD();
/* 467d57: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 467d5a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 467d5c: jle 0x467d68 */
  if ((zf || sf != of)) goto L_467d68;
L_467d5e: /* 467d5e: add dword ptr [ebp - 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 467d61: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 467d63: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 467d64: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 467d66: ja 0x467d45 */
  if ((!cf && !zf)) goto L_467d45;
L_467d68: /* 467d68: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 467d69: lea eax, [edi + edi] */
  eax = (uint32_t)(edi + edi);
/* 467d6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 467d6d: call 0x4620da */
  esp -= 4; W32(esp, 0x467d72u); SPILL(); f_4620da(); if (g_unwind) return; RELOAD();
/* 467d72: mov ebx, eax */
  ebx = eax;
/* 467d74: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467d75: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 467d78: jmp 0x467d9a */
  goto L_467d9a;
L_467d7a: /* 467d7a: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 467d7d: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* 467d80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 467d81: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 467d82: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 467d85: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 467d86: call 0x461dae */
  esp -= 4; W32(esp, 0x467d8bu); SPILL(); f_461dae(); if (g_unwind) return; RELOAD();
/* 467d8b: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 467d8e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 467d90: jle 0x467d9e */
  if ((zf || sf != of)) goto L_467d9e;
L_467d92: /* 467d92: add dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
/* 467d95: sub esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 467d97: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  edi = r;
  }
/* 467d98: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 467d99: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
L_467d9a: /* 467d9a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  cf = 0;
  }
/* 467d9c: ja 0x467d7a */
  if ((!cf && !zf)) goto L_467d7a;
L_467d9e: /* 467d9e: and word ptr [ebx], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a & b);
  W16((uint32_t)(ebx), r);
  }
/* 467da2: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 467da5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 467da6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 467da7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 467da8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 467da9: ret  */
  esp += 4; SPILL(); return;
}

void f_467daa(void) {
  LOAD_REGS();
L_467daa: /* 467daa: fld qword ptr [esp + 0xc] */
  { double v = F64((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 467dae: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 467db1: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 467db5: fld qword ptr [esp + 0x14] */
  { double v = F64((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 467db9: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 467dbc: call 0x48a7a1 */
  esp -= 4; W32(esp, 0x467dc1u); SPILL(); f_48a7a1(); if (g_unwind) return; RELOAD();
/* 467dc1: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 467dc4: ret  */
  esp += 4; SPILL(); return;
}

void f_467dc5(void) {
  LOAD_REGS();
L_467dc5: /* 467dc5: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 467dc9: fld qword ptr [esp + 0xc] */
  { double v = F64((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 467dcd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467dce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467dcf: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 467dd2: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 467dd6: call 0x48a851 */
  esp -= 4; W32(esp, 0x467ddbu); SPILL(); f_48a851(); if (g_unwind) return; RELOAD();
/* 467ddb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 467dde: ret  */
  esp += 4; SPILL(); return;
}

void f_467ddf(void) {
  LOAD_REGS();
L_467ddf: /* 467ddf: fld qword ptr [0x48e2e0] */
  { double v = F64((uint32_t)(0x48e2e0u)); FPUSH(v); }
/* 467de5: ret  */
  esp += 4; SPILL(); return;
}

void f_467de6(void) {
  LOAD_REGS();
L_467de6: /* 467de6: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 467dea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 467deb: call 0x48aca1 */
  esp -= 4; W32(esp, 0x467df0u); SPILL(); f_48aca1(); if (g_unwind) return; RELOAD();
/* 467df0: dec ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - 1);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 467df2: neg ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 467df5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467df6: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 467df8: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 467df9: ret  */
  esp += 4; SPILL(); return;
}

void f_467dfa(void) {
  LOAD_REGS();
L_467dfa: /* 467dfa: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 467dfe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 467dff: call 0x48aca1 */
  esp -= 4; W32(esp, 0x467e04u); SPILL(); f_48aca1(); if (g_unwind) return; RELOAD();
/* 467e04: sub ax, 2 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2u);
  uint16_t r = (uint16_t)(a - b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 467e08: neg ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 467e0b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467e0c: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 467e0e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 467e0f: ret  */
  esp += 4; SPILL(); return;
}

void f_467e10(void) {
  LOAD_REGS();
L_467e10: /* 467e10: fld qword ptr [0x48e2f0] */
  { double v = F64((uint32_t)(0x48e2f0u)); FPUSH(v); }
/* 467e16: ret  */
  esp += 4; SPILL(); return;
}

void f_467e17(void) {
  LOAD_REGS();
L_467e17: /* 467e17: fld qword ptr [esp + 0xc] */
  { double v = F64((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 467e1b: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 467e1e: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 467e22: fld qword ptr [esp + 0x14] */
  { double v = F64((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 467e26: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 467e29: call 0x48a985 */
  esp -= 4; W32(esp, 0x467e2eu); SPILL(); f_48a985(); if (g_unwind) return; RELOAD();
/* 467e2e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 467e31: ret  */
  esp += 4; SPILL(); return;
}

void f_467e32(void) {
  LOAD_REGS();
L_467e32: /* 467e32: fld qword ptr [esp + 0xc] */
  { double v = F64((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 467e36: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 467e39: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 467e3d: fld qword ptr [esp + 0x14] */
  { double v = F64((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 467e41: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 467e44: call 0x467c9f */
  esp -= 4; W32(esp, 0x467e49u); SPILL(); f_467c9f(); if (g_unwind) return; RELOAD();
/* 467e49: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 467e4c: ret  */
  esp += 4; SPILL(); return;
}

void f_467e4d(void) {
  LOAD_REGS();
L_467e4d: /* 467e4d: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 467e51: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467e52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467e53: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 467e56: call 0x48bef0 */
  esp -= 4; W32(esp, 0x467e5bu); SPILL(); f_48bef0(); if (g_unwind) return; RELOAD();
/* 467e5b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467e5c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467e5d: ret  */
  esp += 4; SPILL(); return;
}

void f_467e5e(void) {
  LOAD_REGS();
L_467e5e: /* 467e5e: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 467e62: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467e63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467e64: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 467e67: call 0x48bef6 */
  esp -= 4; W32(esp, 0x467e6cu); SPILL(); f_48bef6(); if (g_unwind) return; RELOAD();
/* 467e6c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467e6d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467e6e: ret  */
  esp += 4; SPILL(); return;
}

void f_467e6f(void) {
  LOAD_REGS();
L_467e6f: /* 467e6f: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 467e73: fld qword ptr [esp + 8] */
  { double v = F64((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 467e77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467e78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467e79: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 467e7c: call 0x467f4a */
  esp -= 4; W32(esp, 0x467e81u); SPILL(); f_467f4a(); if (g_unwind) return; RELOAD();
/* 467e81: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 467e84: ret  */
  esp += 4; SPILL(); return;
}

void f_467e85(void) {
  LOAD_REGS();
L_467e85: /* 467e85: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 467e89: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467e8a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467e8b: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 467e8e: call 0x48befc */
  esp -= 4; W32(esp, 0x467e93u); SPILL(); f_48befc(); if (g_unwind) return; RELOAD();
/* 467e93: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467e94: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467e95: ret  */
  esp += 4; SPILL(); return;
}

void f_467e96(void) {
  LOAD_REGS();
L_467e96: /* 467e96: fld qword ptr [esp + 0xc] */
  { double v = F64((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 467e9a: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 467e9d: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 467ea1: fld qword ptr [esp + 0x14] */
  { double v = F64((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 467ea5: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 467ea8: call 0x467cba */
  esp -= 4; W32(esp, 0x467eadu); SPILL(); f_467cba(); if (g_unwind) return; RELOAD();
/* 467ead: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 467eb0: ret  */
  esp += 4; SPILL(); return;
}

void f_467eb1(void) {
  LOAD_REGS();
L_467eb1: /* 467eb1: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 467eb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467eb6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467eb7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 467eba: call 0x48bf08 */
  esp -= 4; W32(esp, 0x467ebfu); SPILL(); f_48bf08(); if (g_unwind) return; RELOAD();
/* 467ebf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467ec0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467ec1: ret  */
  esp += 4; SPILL(); return;
}

void f_467ec2(void) {
  LOAD_REGS();
L_467ec2: /* 467ec2: fld qword ptr [esp + 0xc] */
  { double v = F64((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 467ec6: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 467ec9: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 467ecd: fld qword ptr [esp + 0x14] */
  { double v = F64((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 467ed1: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 467ed4: call 0x48aaca */
  esp -= 4; W32(esp, 0x467ed9u); SPILL(); f_48aaca(); if (g_unwind) return; RELOAD();
/* 467ed9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 467edc: ret  */
  esp += 4; SPILL(); return;
}

void f_467edd(void) {
  LOAD_REGS();
L_467edd: /* 467edd: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 467ee1: fld qword ptr [esp + 0xc] */
  { double v = F64((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 467ee5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467ee6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467ee7: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 467eea: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* 467eee: call 0x48ab7a */
  esp -= 4; W32(esp, 0x467ef3u); SPILL(); f_48ab7a(); if (g_unwind) return; RELOAD();
/* 467ef3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 467ef6: ret  */
  esp += 4; SPILL(); return;
}

void f_467ef7(void) {
  LOAD_REGS();
L_467ef7: /* 467ef7: fld qword ptr [0x48e360] */
  { double v = F64((uint32_t)(0x48e360u)); FPUSH(v); }
/* 467efd: ret  */
  esp += 4; SPILL(); return;
}

void f_467efe(void) {
  LOAD_REGS();
L_467efe: /* 467efe: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 467f02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 467f03: call 0x48aca1 */
  esp -= 4; W32(esp, 0x467f08u); SPILL(); f_48aca1(); if (g_unwind) return; RELOAD();
/* 467f08: dec ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - 1);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 467f0a: neg ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 467f0d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467f0e: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 467f10: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 467f11: ret  */
  esp += 4; SPILL(); return;
}

void f_467f12(void) {
  LOAD_REGS();
L_467f12: /* 467f12: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 467f16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 467f17: call 0x48aca1 */
  esp -= 4; W32(esp, 0x467f1cu); SPILL(); f_48aca1(); if (g_unwind) return; RELOAD();
/* 467f1c: sub ax, 2 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2u);
  uint16_t r = (uint16_t)(a - b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 467f20: neg ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 467f23: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467f24: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 467f26: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 467f27: ret  */
  esp += 4; SPILL(); return;
}

void f_467f28(void) {
  LOAD_REGS();
L_467f28: /* 467f28: fld qword ptr [0x48e370] */
  { double v = F64((uint32_t)(0x48e370u)); FPUSH(v); }
/* 467f2e: ret  */
  esp += 4; SPILL(); return;
}

void f_467f2f(void) {
  LOAD_REGS();
L_467f2f: /* 467f2f: fld qword ptr [esp + 0xc] */
  { double v = F64((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 467f33: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 467f36: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 467f3a: fld qword ptr [esp + 0x14] */
  { double v = F64((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 467f3e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 467f41: call 0x48ad00 */
  esp -= 4; W32(esp, 0x467f46u); SPILL(); f_48ad00(); if (g_unwind) return; RELOAD();
/* 467f46: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 467f49: ret  */
  esp += 4; SPILL(); return;
}

void f_467f4a(void) {
  LOAD_REGS();
L_467f4a: /* 467f4a: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 467f4e: fld qword ptr [esp + 8] */
  { double v = F64((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 467f52: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467f53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467f54: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 467f57: call dword ptr [0x48e088] */
  esp -= 4; W32(esp, 0x467f5du); SPILL(); f_434033(); if (g_unwind) return; /* MSVCR70!ldexp */ RELOAD();
/* 467f5d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 467f60: ret  */
  esp += 4; SPILL(); return;
}

void f_467f61(void) {
  LOAD_REGS();
L_467f61: /* 467f61: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 467f65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467f66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467f67: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 467f6a: call 0x48bf0e */
  esp -= 4; W32(esp, 0x467f6fu); SPILL(); f_48bf0e(); if (g_unwind) return; RELOAD();
/* 467f6f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467f70: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467f71: ret  */
  esp += 4; SPILL(); return;
}

void f_467f72(void) {
  LOAD_REGS();
L_467f72: /* 467f72: fld qword ptr [esp + 4] */
  { double v = F64((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 467f76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467f77: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467f78: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 467f7b: call 0x48bf14 */
  esp -= 4; W32(esp, 0x467f80u); SPILL(); f_48bf14(); if (g_unwind) return; RELOAD();
/* 467f80: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467f81: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467f82: ret  */
  esp += 4; SPILL(); return;
}

void f_467f83(void) {
  LOAD_REGS();
L_467f83: /* 467f83: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 467f87: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467f88: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467f89: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 467f8d: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 467f91: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 467f94: call 0x48ae45 */
  esp -= 4; W32(esp, 0x467f99u); SPILL(); f_48ae45(); if (g_unwind) return; RELOAD();
/* 467f99: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467f9a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467f9b: ret  */
  esp += 4; SPILL(); return;
}

void f_467f9c(void) {
  LOAD_REGS();
L_467f9c: /* 467f9c: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 467fa0: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 467fa4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467fa5: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 467fa8: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* 467fac: call 0x48aef4 */
  esp -= 4; W32(esp, 0x467fb1u); SPILL(); f_48aef4(); if (g_unwind) return; RELOAD();
/* 467fb1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 467fb4: ret  */
  esp += 4; SPILL(); return;
}

void f_467fb5(void) {
  LOAD_REGS();
L_467fb5: /* 467fb5: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 467fb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 467fba: call 0x48b008 */
  esp -= 4; W32(esp, 0x467fbfu); SPILL(); f_48b008(); if (g_unwind) return; RELOAD();
/* 467fbf: dec ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(a - 1);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 467fc1: neg ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 467fc4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467fc5: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 467fc7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 467fc8: ret  */
  esp += 4; SPILL(); return;
}

void f_467fc9(void) {
  LOAD_REGS();
L_467fc9: /* 467fc9: lea eax, [esp + 4] */
  eax = (uint32_t)(esp + 0x4u);
/* 467fcd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 467fce: call 0x48b008 */
  esp -= 4; W32(esp, 0x467fd3u); SPILL(); f_48b008(); if (g_unwind) return; RELOAD();
/* 467fd3: sub ax, 2 */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0x2u);
  uint16_t r = (uint16_t)(a - b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 467fd7: neg ax */
  { uint16_t a = (uint16_t)((eax & 0xffffu));
  uint16_t r = (uint16_t)(0 - a);
  cf = (a) != 0;
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 467fda: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467fdb: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
/* 467fdd: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 467fde: ret  */
  esp += 4; SPILL(); return;
}

void f_467fdf(void) {
  LOAD_REGS();
L_467fdf: /* 467fdf: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 467fe3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467fe4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467fe5: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 467fe9: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 467fed: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 467ff0: call 0x48b04b */
  esp -= 4; W32(esp, 0x467ff5u); SPILL(); f_48b04b(); if (g_unwind) return; RELOAD();
/* 467ff5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467ff6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 467ff7: ret  */
  esp += 4; SPILL(); return;
}

void f_467ff8(void) {
  LOAD_REGS();
L_467ff8: /* 467ff8: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 467ffc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467ffd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 467ffe: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 468002: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 468006: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 468009: call 0x467cec */
  esp -= 4; W32(esp, 0x46800eu); SPILL(); f_467cec(); if (g_unwind) return; RELOAD();
/* 46800e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46800f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 468010: ret  */
  esp += 4; SPILL(); return;
}

void f_468011(void) {
  LOAD_REGS();
L_468011: /* 468011: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 468015: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 468016: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 468017: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46801a: call 0x48bef0 */
  esp -= 4; W32(esp, 0x46801fu); SPILL(); f_48bef0(); if (g_unwind) return; RELOAD();
/* 46801f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 468020: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 468021: ret  */
  esp += 4; SPILL(); return;
}

void f_468022(void) {
  LOAD_REGS();
L_468022: /* 468022: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 468026: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 468027: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 468028: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46802b: call 0x48bef6 */
  esp -= 4; W32(esp, 0x468030u); SPILL(); f_48bef6(); if (g_unwind) return; RELOAD();
/* 468030: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 468031: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 468032: ret  */
  esp += 4; SPILL(); return;
}

void f_468033(void) {
  LOAD_REGS();
L_468033: /* 468033: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 468037: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 46803b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46803c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 46803f: call 0x467cd5 */
  esp -= 4; W32(esp, 0x468044u); SPILL(); f_467cd5(); if (g_unwind) return; RELOAD();
/* 468044: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 468045: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 468046: ret  */
  esp += 4; SPILL(); return;
}

void f_468047(void) {
  LOAD_REGS();
L_468047: /* 468047: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 46804b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46804c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46804d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 468050: call 0x48befc */
  esp -= 4; W32(esp, 0x468055u); SPILL(); f_48befc(); if (g_unwind) return; RELOAD();
/* 468055: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 468056: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 468057: ret  */
  esp += 4; SPILL(); return;
}

void f_468058(void) {
  LOAD_REGS();
L_468058: /* 468058: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 46805c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46805d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 46805e: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 468062: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 468066: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 468069: call 0x467d07 */
  esp -= 4; W32(esp, 0x46806eu); SPILL(); f_467d07(); if (g_unwind) return; RELOAD();
/* 46806e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 46806f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 468070: ret  */
  esp += 4; SPILL(); return;
}

void f_468071(void) {
  LOAD_REGS();
L_468071: /* 468071: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 468075: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 468076: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 468077: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46807a: call 0x48bf08 */
  esp -= 4; W32(esp, 0x46807fu); SPILL(); f_48bf08(); if (g_unwind) return; RELOAD();
/* 46807f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 468080: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 468081: ret  */
  esp += 4; SPILL(); return;
}

void f_468082(void) {
  LOAD_REGS();
L_468082: /* 468082: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 468086: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 468087: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 468088: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46808b: call 0x48bf0e */
  esp -= 4; W32(esp, 0x468090u); SPILL(); f_48bf0e(); if (g_unwind) return; RELOAD();
/* 468090: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 468091: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 468092: ret  */
  esp += 4; SPILL(); return;
}

void f_468093(void) {
  LOAD_REGS();
L_468093: /* 468093: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 468097: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 468098: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 468099: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 46809c: call 0x48bf14 */
  esp -= 4; W32(esp, 0x4680a1u); SPILL(); f_48bf14(); if (g_unwind) return; RELOAD();
/* 4680a1: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4680a2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4680a3: ret  */
  esp += 4; SPILL(); return;
}

void f_4680a4(void) {
  LOAD_REGS();
L_4680a4: /* 4680a4: mov eax, ecx */
  eax = ecx;
/* 4680a6: fldz  */
  FPUSH(0.0);
/* 4680a8: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4680ac: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 4680ae: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4680b1: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 4680b3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4680b6(void) {
  LOAD_REGS();
L_4680b6: /* 4680b6: mov eax, ecx */
  eax = ecx;
/* 4680b8: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4680bc: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4680be: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 4680c0: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4680c2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4680c5(void) {
  LOAD_REGS();
L_4680c5: /* 4680c5: mov eax, ecx */
  eax = ecx;
/* 4680c7: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4680c9: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4680cd: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 4680cf: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4680d1: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4680d4(void) {
  LOAD_REGS();
L_4680d4: /* 4680d4: mov eax, ecx */
  eax = ecx;
/* 4680d6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4680da: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 4680dc: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 4680de: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4680e0: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4680e3: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 4680e5: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4680e8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4680eb(void) {
  LOAD_REGS();
L_4680eb: /* 4680eb: mov eax, ecx */
  eax = ecx;
/* 4680ed: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 4680ef: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4680f3: fdiv dword ptr [ecx] */
  ST0 = ST0 / (F32((uint32_t)(ecx)));
/* 4680f5: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 4680f7: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 4680fa: fdiv dword ptr [ecx] */
  ST0 = ST0 / (F32((uint32_t)(ecx)));
/* 4680fc: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 4680ff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_468102(void) {
  LOAD_REGS();
L_468102: /* 468102: mov eax, ecx */
  eax = ecx;
/* 468104: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 468108: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 46810a: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 46810c: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 46810f: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 468112: ret 4 */
  esp += 8; SPILL(); return;
}

void f_468115(void) {
  LOAD_REGS();
L_468115: /* 468115: mov eax, ecx */
  eax = ecx;
/* 468117: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 46811b: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 46811d: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 46811f: fldz  */
  FPUSH(0.0);
/* 468121: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 468124: ret 4 */
  esp += 8; SPILL(); return;
}

void f_468127(void) {
  LOAD_REGS();
L_468127: /* 468127: mov eax, ecx */
  eax = ecx;
/* 468129: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 46812d: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 46812f: fadd qword ptr [eax] */
  ST0 = ST0 + (F64((uint32_t)(eax)));
/* 468131: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 468133: ret 4 */
  esp += 8; SPILL(); return;
}

void f_468136(void) {
  LOAD_REGS();
L_468136: /* 468136: mov eax, ecx */
  eax = ecx;
/* 468138: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 46813a: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 46813e: fsub qword ptr [ecx] */
  ST0 = ST0 - (F64((uint32_t)(ecx)));
/* 468140: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 468142: ret 4 */
  esp += 8; SPILL(); return;
}

void f_468145(void) {
  LOAD_REGS();
L_468145: /* 468145: mov eax, ecx */
  eax = ecx;
/* 468147: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 46814b: fld qword ptr [ecx] */
  { double v = F64((uint32_t)(ecx)); FPUSH(v); }
/* 46814d: fmul qword ptr [eax] */
  ST0 = ST0 * (F64((uint32_t)(eax)));
/* 46814f: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 468151: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 468154: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 468156: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 468159: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46815c(void) {
  LOAD_REGS();
L_46815c: /* 46815c: mov eax, ecx */
  eax = ecx;
/* 46815e: fld qword ptr [eax] */
  { double v = F64((uint32_t)(eax)); FPUSH(v); }
/* 468160: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 468164: fdiv qword ptr [ecx] */
  ST0 = ST0 / (F64((uint32_t)(ecx)));
/* 468166: fstp qword ptr [eax] */
  WF64((uint32_t)(eax), ST0); FPOP();
/* 468168: fld qword ptr [eax + 8] */
  { double v = F64((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 46816b: fdiv qword ptr [ecx] */
  ST0 = ST0 / (F64((uint32_t)(ecx)));
/* 46816d: fstp qword ptr [eax + 8] */
  WF64((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 468170: ret 4 */
  esp += 8; SPILL(); return;
}

void f_468173(void) {
  LOAD_REGS();
L_468173: /* 468173: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 468174: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 468178: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 468179: mov eax, ecx */
  eax = ecx;
/* 46817b: mov edi, eax */
  edi = eax;
/* 46817d: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46817e: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 46817f: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 468180: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* 468181: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 468182: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 468183: ret 4 */
  esp += 8; SPILL(); return;
}

void f_468186(void) {
  LOAD_REGS();
L_468186: /* 468186: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46818a: call dword ptr [0x48e0a0] */
  esp -= 4; W32(esp, 0x468190u); SPILL(); f_42c750(); if (g_unwind) return; /* MSVCR70!fgetwc */ RELOAD();
/* 468190: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 468194: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 468195: jne 0x46819a */
  if (!zf) goto L_46819a;
L_468197: /* 468197: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 468199: ret  */
  esp += 4; SPILL(); return;
L_46819a: /* 46819a: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 46819e: mov word ptr [ecx], ax */
  W16((uint32_t)(ecx), (eax & 0xffffu));
/* 4681a1: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 4681a3: ret  */
  esp += 4; SPILL(); return;
}

void f_4681a4(void) {
  LOAD_REGS();
L_4681a4: /* 4681a4: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 4681a8: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 4681ab: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4681af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 4681b0: call dword ptr [0x48e0a8] */
  esp -= 4; W32(esp, 0x4681b6u); SPILL(); f_42d74a(); if (g_unwind) return; /* MSVCR70!ungetwc */ RELOAD();
/* 4681b6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4681b7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4681b8: xor ecx, ecx */
  ecx = 0;
/* 4681ba: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4681be: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 4681c1: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 4681c3: ret  */
  esp += 4; SPILL(); return;
}

void f_4681c4(void) {
  LOAD_REGS();
L_4681c4: /* 4681c4: mov eax, ecx */
  eax = ecx;
/* 4681c6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4681ca: mov cl, byte ptr [ecx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx))) & 0xffu);
/* 4681cc: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* 4681ce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4681d1(void) {
  LOAD_REGS();
L_4681d1: /* 4681d1: mov al, 1 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x1u) & 0xffu);
/* 4681d3: ret  */
  esp += 4; SPILL(); return;
}

void f_4681d4(void) {
  LOAD_REGS();
L_4681d4: /* 4681d4: mov al, 0x80 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x80u) & 0xffu);
/* 4681d6: ret  */
  esp += 4; SPILL(); return;
}

void f_4681d7(void) {
  LOAD_REGS();
L_4681d7: /* 4681d7: mov al, 0x7f */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x7fu) & 0xffu);
/* 4681d9: ret  */
  esp += 4; SPILL(); return;
}

void f_4681da(void) {
  LOAD_REGS();
L_4681da: /* 4681da: or al, 0xff */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0xffu);
  uint8_t r = (uint8_t)(a | b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 4681dc: ret  */
  esp += 4; SPILL(); return;
}

void f_4681dd(void) {
  LOAD_REGS();
L_4681dd: /* 4681dd: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 4681df: ret  */
  esp += 4; SPILL(); return;
}

void f_4681e0(void) {
  LOAD_REGS();
L_4681e0: /* 4681e0: mov ax, 0x8000 */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0x8000u) & 0xffffu);
/* 4681e4: ret  */
  esp += 4; SPILL(); return;
}

void f_4681e5(void) {
  LOAD_REGS();
L_4681e5: /* 4681e5: mov ax, 0x7fff */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0x7fffu) & 0xffffu);
/* 4681e9: ret  */
  esp += 4; SPILL(); return;
}

void f_4681ea(void) {
  LOAD_REGS();
L_4681ea: /* 4681ea: xor ax, ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0) & 0xffffu);
/* 4681ed: ret  */
  esp += 4; SPILL(); return;
}

void f_4681ee(void) {
  LOAD_REGS();
L_4681ee: /* 4681ee: mov eax, 0x80000000 */
  eax = 0x80000000u;
/* 4681f3: ret  */
  esp += 4; SPILL(); return;
}

void f_4681f4(void) {
  LOAD_REGS();
L_4681f4: /* 4681f4: mov eax, 0x7fffffff */
  eax = 0x7fffffffu;
/* 4681f9: ret  */
  esp += 4; SPILL(); return;
}

void f_4681fa(void) {
  LOAD_REGS();
L_4681fa: /* 4681fa: xor eax, eax */
  eax = 0;
/* 4681fc: ret  */
  esp += 4; SPILL(); return;
}

void f_4681fd(void) {
  LOAD_REGS();
L_4681fd: /* 4681fd: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 468200: ret  */
  esp += 4; SPILL(); return;
}

void f_468201(void) {
  LOAD_REGS();
L_468201: /* 468201: xor eax, eax */
  eax = 0;
/* 468203: mov edx, 0x80000000 */
  edx = 0x80000000u;
/* 468208: ret  */
  esp += 4; SPILL(); return;
}

void f_468209(void) {
  LOAD_REGS();
L_468209: /* 468209: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 46820c: mov edx, 0x7fffffff */
  edx = 0x7fffffffu;
/* 468211: ret  */
  esp += 4; SPILL(); return;
}

void f_468212(void) {
  LOAD_REGS();
L_468212: /* 468212: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 468215: mov eax, edx */
  eax = edx;
/* 468217: ret  */
  esp += 4; SPILL(); return;
}

void f_468218(void) {
  LOAD_REGS();
L_468218: /* 468218: xor eax, eax */
  eax = 0;
/* 46821a: xor edx, edx */
  edx = 0;
/* 46821c: ret  */
  esp += 4; SPILL(); return;
}

void f_46821d(void) {
  LOAD_REGS();
L_46821d: /* 46821d: fld dword ptr [0x4c8dcc] */
  { double v = F32((uint32_t)(0x4c8dccu)); FPUSH(v); }
/* 468223: ret  */
  esp += 4; SPILL(); return;
}

void f_468224(void) {
  LOAD_REGS();
L_468224: /* 468224: fld dword ptr [0x4c8dd0] */
  { double v = F32((uint32_t)(0x4c8dd0u)); FPUSH(v); }
/* 46822a: ret  */
  esp += 4; SPILL(); return;
}

void f_46822b(void) {
  LOAD_REGS();
L_46822b: /* 46822b: fld dword ptr [0x4c8dd4] */
  { double v = F32((uint32_t)(0x4c8dd4u)); FPUSH(v); }
/* 468231: ret  */
  esp += 4; SPILL(); return;
}

void f_468232(void) {
  LOAD_REGS();
L_468232: /* 468232: fld dword ptr [0x4c8dd8] */
  { double v = F32((uint32_t)(0x4c8dd8u)); FPUSH(v); }
/* 468238: ret  */
  esp += 4; SPILL(); return;
}

void f_468239(void) {
  LOAD_REGS();
L_468239: /* 468239: fld dword ptr [0x48e3b0] */
  { double v = F32((uint32_t)(0x48e3b0u)); FPUSH(v); }
/* 46823f: ret  */
  esp += 4; SPILL(); return;
}

void f_468240(void) {
  LOAD_REGS();
L_468240: /* 468240: fld dword ptr [0x48e3d0] */
  { double v = F32((uint32_t)(0x48e3d0u)); FPUSH(v); }
/* 468246: ret  */
  esp += 4; SPILL(); return;
}

void f_468247(void) {
  LOAD_REGS();
L_468247: /* 468247: fld dword ptr [0x48e3e0] */
  { double v = F32((uint32_t)(0x48e3e0u)); FPUSH(v); }
/* 46824d: ret  */
  esp += 4; SPILL(); return;
}

void f_46824e(void) {
  LOAD_REGS();
L_46824e: /* 46824e: fld dword ptr [0x48e3f0] */
  { double v = F32((uint32_t)(0x48e3f0u)); FPUSH(v); }
/* 468254: ret  */
  esp += 4; SPILL(); return;
}

void f_468255(void) {
  LOAD_REGS();
L_468255: /* 468255: fld qword ptr [0x4c8de0] */
  { double v = F64((uint32_t)(0x4c8de0u)); FPUSH(v); }
/* 46825b: ret  */
  esp += 4; SPILL(); return;
}

void f_46825c(void) {
  LOAD_REGS();
L_46825c: /* 46825c: fld qword ptr [0x4c8de8] */
  { double v = F64((uint32_t)(0x4c8de8u)); FPUSH(v); }
/* 468262: ret  */
  esp += 4; SPILL(); return;
}

void f_468263(void) {
  LOAD_REGS();
L_468263: /* 468263: fld qword ptr [0x4c8df0] */
  { double v = F64((uint32_t)(0x4c8df0u)); FPUSH(v); }
/* 468269: ret  */
  esp += 4; SPILL(); return;
}

void f_46826a(void) {
  LOAD_REGS();
L_46826a: /* 46826a: fld qword ptr [0x4c8df8] */
  { double v = F64((uint32_t)(0x4c8df8u)); FPUSH(v); }
/* 468270: ret  */
  esp += 4; SPILL(); return;
}

void f_468271(void) {
  LOAD_REGS();
L_468271: /* 468271: fld qword ptr [0x48e330] */
  { double v = F64((uint32_t)(0x48e330u)); FPUSH(v); }
/* 468277: ret  */
  esp += 4; SPILL(); return;
}

void f_468278(void) {
  LOAD_REGS();
L_468278: /* 468278: fld qword ptr [0x48e390] */
  { double v = F64((uint32_t)(0x48e390u)); FPUSH(v); }
/* 46827e: ret  */
  esp += 4; SPILL(); return;
}

void f_46827f(void) {
  LOAD_REGS();
L_46827f: /* 46827f: fld qword ptr [0x48e2c0] */
  { double v = F64((uint32_t)(0x48e2c0u)); FPUSH(v); }
/* 468285: ret  */
  esp += 4; SPILL(); return;
}

void f_468286(void) {
  LOAD_REGS();
L_468286: /* 468286: fld qword ptr [0x48e310] */
  { double v = F64((uint32_t)(0x48e310u)); FPUSH(v); }
/* 46828c: ret  */
  esp += 4; SPILL(); return;
}

void f_46828d(void) {
  LOAD_REGS();
L_46828d: /* 46828d: mov eax, ecx */
  eax = ecx;
/* 46828f: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 468293: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 468296: mov dword ptr [eax], 0x4c7084 */
  W32((uint32_t)(eax), 0x4c7084u);
/* 46829c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46829f(void) {
  LOAD_REGS();
L_46829f: /* 46829f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4682a1: call 0x46828d */
  esp -= 4; W32(esp, 0x4682a6u); SPILL(); f_46828d(); if (g_unwind) return; RELOAD();
/* 4682a6: ret  */
  esp += 4; SPILL(); return;
}

void f_4682a7(void) {
  LOAD_REGS();
L_4682a7: /* 4682a7: mov eax, ecx */
  eax = ecx;
/* 4682a9: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4682ad: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4682b0: mov dword ptr [eax], 0x4c70d4 */
  W32((uint32_t)(eax), 0x4c70d4u);
/* 4682b6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4682b9(void) {
  LOAD_REGS();
L_4682b9: /* 4682b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4682bb: call 0x4682a7 */
  esp -= 4; W32(esp, 0x4682c0u); SPILL(); f_4682a7(); if (g_unwind) return; RELOAD();
/* 4682c0: ret  */
  esp += 4; SPILL(); return;
}

void f_4682c1(void) {
  LOAD_REGS();
L_4682c1: /* 4682c1: mov eax, ecx */
  eax = ecx;
/* 4682c3: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 4682c7: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4682ca: mov dword ptr [eax], 0x4c7124 */
  W32((uint32_t)(eax), 0x4c7124u);
/* 4682d0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4682d3(void) {
  LOAD_REGS();
L_4682d3: /* 4682d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 4682d5: call 0x4682c1 */
  esp -= 4; W32(esp, 0x4682dau); SPILL(); f_4682c1(); if (g_unwind) return; RELOAD();
/* 4682da: ret  */
  esp += 4; SPILL(); return;
}

void f_4682db(void) {
  LOAD_REGS();
L_4682db: /* 4682db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4682dc: mov esi, ecx */
  esi = ecx;
/* 4682de: push dword ptr [esi + 8] */
  { uint32_t v = R32((uint32_t)(esi + 0x8u)); esp -= 4; W32(esp, v); }
/* 4682e1: mov dword ptr [esi], 0x4c7174 */
  W32((uint32_t)(esi), 0x4c7174u);
/* 4682e7: call dword ptr [0x48e190] */
  esp -= 4; W32(esp, 0x4682edu); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* 4682ed: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 4682ee: mov dword ptr [esi], 0x4c6a70 */
  W32((uint32_t)(esi), 0x4c6a70u);
/* 4682f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4682f5: ret  */
  esp += 4; SPILL(); return;
}

void f_4682f6(void) {
  LOAD_REGS();
L_4682f6: /* 4682f6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4682f7: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 4682fb: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4682fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4682ff: mov esi, ecx */
  esi = ecx;
/* 468301: je 0x468327 */
  if (zf) goto L_468327;
L_468303: /* 468303: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 468304: push 0x4682db */
  { uint32_t v = 0x4682dbu; esp -= 4; W32(esp, v); }
/* 468309: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 46830c: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 46830e: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 468310: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 468311: call 0x48be30 */
  esp -= 4; W32(esp, 0x468316u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 468316: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 468319: je 0x468322 */
  if (zf) goto L_468322;
L_46831b: /* 46831b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46831c: call 0x48bdcd */
  esp -= 4; W32(esp, 0x468321u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 468321: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_468322: /* 468322: mov eax, edi */
  eax = edi;
/* 468324: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 468325: jmp 0x46833c */
  goto L_46833c;
L_468327: /* 468327: mov ecx, esi */
  ecx = esi;
/* 468329: call 0x4682db */
  esp -= 4; W32(esp, 0x46832eu); SPILL(); f_4682db(); if (g_unwind) return; RELOAD();
/* 46832e: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 468331: je 0x46833a */
  if (zf) goto L_46833a;
L_468333: /* 468333: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 468334: call 0x461c65 */
  esp -= 4; W32(esp, 0x468339u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 468339: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_46833a: /* 46833a: mov eax, esi */
  eax = esi;
L_46833c: /* 46833c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46833d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 46833e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_468341(void) {
  LOAD_REGS();
L_468341: /* 468341: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 468342: mov esi, ecx */
  esi = ecx;
/* 468344: push dword ptr [esi + 8] */
  { uint32_t v = R32((uint32_t)(esi + 0x8u)); esp -= 4; W32(esp, v); }
/* 468347: mov dword ptr [esi], 0x4c71c8 */
  W32((uint32_t)(esi), 0x4c71c8u);
/* 46834d: call dword ptr [0x48e190] */
  esp -= 4; W32(esp, 0x468353u); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* 468353: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 468354: mov dword ptr [esi], 0x4c6a70 */
  W32((uint32_t)(esi), 0x4c6a70u);
/* 46835a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46835b: ret  */
  esp += 4; SPILL(); return;
}

void f_46835c(void) {
  LOAD_REGS();
L_46835c: /* 46835c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46835d: mov ebp, esp */
  ebp = esp;
/* 46835f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 468360: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 468363: mov esi, ecx */
  esi = ecx;
/* 468365: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 468368: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 468369: call 0x463fd2 */
  esp -= 4; W32(esp, 0x46836eu); SPILL(); f_463fd2(); if (g_unwind) return; RELOAD();
/* 46836e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 468370: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 468373: and dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax), r);
  }
/* 468376: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 468379: call dword ptr [0x48e190] */
  esp -= 4; W32(esp, 0x46837fu); SPILL(); f_401156(); if (g_unwind) return; /* MSVCR70!free */ RELOAD();
/* 46837f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 468380: call 0x4887f7 */
  esp -= 4; W32(esp, 0x468385u); SPILL(); f_4887f7(); if (g_unwind) return; RELOAD();
/* 468385: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 468388: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 46838b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46838c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46838d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_468390(void) {
  LOAD_REGS();
L_468390: /* 468390: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 468391: mov bl, byte ptr [esp + 8] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x8u))) & 0xffu);
/* 468395: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 468398: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 468399: mov esi, ecx */
  esi = ecx;
/* 46839b: je 0x4683c1 */
  if (zf) goto L_4683c1;
L_46839d: /* 46839d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46839e: push 0x468341 */
  { uint32_t v = 0x468341u; esp -= 4; W32(esp, v); }
/* 4683a3: lea edi, [esi - 4] */
  edi = (uint32_t)(esi + 0xfffffffcu);
/* 4683a6: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* 4683a8: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 4683aa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4683ab: call 0x48be30 */
  esp -= 4; W32(esp, 0x4683b0u); SPILL(); f_48be30(); if (g_unwind) return; RELOAD();
/* 4683b0: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4683b3: je 0x4683bc */
  if (zf) goto L_4683bc;
L_4683b5: /* 4683b5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4683b6: call 0x48bdcd */
  esp -= 4; W32(esp, 0x4683bbu); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 4683bb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4683bc: /* 4683bc: mov eax, edi */
  eax = edi;
/* 4683be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4683bf: jmp 0x4683d6 */
  goto L_4683d6;
L_4683c1: /* 4683c1: mov ecx, esi */
  ecx = esi;
/* 4683c3: call 0x468341 */
  esp -= 4; W32(esp, 0x4683c8u); SPILL(); f_468341(); if (g_unwind) return; RELOAD();
/* 4683c8: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 4683cb: je 0x4683d4 */
  if (zf) goto L_4683d4;
L_4683cd: /* 4683cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4683ce: call 0x461c65 */
  esp -= 4; W32(esp, 0x4683d3u); SPILL(); f_461c65(); if (g_unwind) return; RELOAD();
/* 4683d3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_4683d4: /* 4683d4: mov eax, esi */
  eax = esi;
L_4683d6: /* 4683d6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4683d7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 4683d8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4683db(void) {
  LOAD_REGS();
L_4683db: /* 4683db: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 4683de: ret  */
  esp += 4; SPILL(); return;
}

void f_4683df(void) {
  LOAD_REGS();
L_4683df: /* 4683df: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 4683e2: ret  */
  esp += 4; SPILL(); return;
}

void f_4683e3(void) {
  LOAD_REGS();
L_4683e3: /* 4683e3: xor eax, eax */
  eax = 0;
/* 4683e5: cmp dword ptr [ecx + 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x14u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 4683e8: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 4683eb: ret  */
  esp += 4; SPILL(); return;
}

void f_4683ec(void) {
  LOAD_REGS();
L_4683ec: /* 4683ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4683ed: mov esi, ecx */
  esi = ecx;
/* 4683ef: call 0x4887f7 */
  esp -= 4; W32(esp, 0x4683f4u); SPILL(); f_4887f7(); if (g_unwind) return; RELOAD();
/* 4683f4: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 4683f7: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 4683fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4683fb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4683fe(void) {
  LOAD_REGS();
L_4683fe: /* 4683fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4683ff: mov esi, ecx */
  esi = ecx;
/* 468401: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 468404: mov dword ptr [esi], 0x4c6ec0 */
  W32((uint32_t)(esi), 0x4c6ec0u);
/* 46840a: call 0x461a9e */
  esp -= 4; W32(esp, 0x46840fu); SPILL(); f_461a9e(); if (g_unwind) return; RELOAD();
/* 46840f: mov eax, esi */
  eax = esi;
/* 468411: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 468412: ret 4 */
  esp += 8; SPILL(); return;
}

void f_468415(void) {
  LOAD_REGS();
L_468415: /* 468415: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 468416: mov ebp, esp */
  ebp = esp;
/* 468418: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 46841b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 46841d: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 468420: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 468423: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 468426: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x468429u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 468429: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46842c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46842d: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_468430(void) {
  LOAD_REGS();
L_468430: /* 468430: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 468431: mov ebp, esp */
  ebp = esp;
/* 468433: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 468436: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 468439: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46843c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46843f: call 0x468415 */
  esp -= 4; W32(esp, 0x468444u); SPILL(); f_468415(); if (g_unwind) return; RELOAD();
/* 468444: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 468447: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 468448: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_46844b(void) {
  LOAD_REGS();
L_46844b: /* 46844b: mov eax, 0x48c122 */
  eax = 0x48c122u;
/* 468450: call 0x4616c0 */
  esp -= 4; W32(esp, 0x468455u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 468455: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 468456: and dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff0u), r);
  }
/* 46845a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46845b: mov esi, ecx */
  esi = ecx;
/* 46845d: mov eax, dword ptr [esi + 0x38] */
  eax = R32((uint32_t)(esi + 0x38u));
/* 468460: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 468461: mov edi, dword ptr [eax] */
  edi = R32((uint32_t)(eax));
/* 468463: mov ecx, edi */
  ecx = edi;
/* 468465: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* 468468: call 0x461292 */
  esp -= 4; W32(esp, 0x46846du); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 46846d: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 468470: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 468472: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 468476: mov ecx, esi */
  ecx = esi;
/* 468478: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x46847bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 46847b: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46847e: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 468481: call 0x464063 */
  esp -= 4; W32(esp, 0x468486u); SPILL(); f_464063(); if (g_unwind) return; RELOAD();
/* 468486: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 468489: mov ecx, edi */
  ecx = edi;
/* 46848b: mov dword ptr [esi], edi */
  W32((uint32_t)(esi), edi);
/* 46848d: call 0x461292 */
  esp -= 4; W32(esp, 0x468492u); SPILL(); f_461292(); if (g_unwind) return; RELOAD();
/* 468492: lea ecx, [ebp - 0x10] */
  ecx = (uint32_t)(ebp + 0xfffffff0u);
/* 468495: call 0x461389 */
  esp -= 4; W32(esp, 0x46849au); SPILL(); f_461389(); if (g_unwind) return; RELOAD();
/* 46849a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 46849d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46849e: mov eax, esi */
  eax = esi;
/* 4684a0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4684a1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4684a8: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4684a9: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4684ac(void) {
  LOAD_REGS();
L_4684ac: /* 4684ac: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 4684af: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4684b3: sub dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(eax), r);
  }
/* 4684b5: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 4684b8: add dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* 4684ba: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4684bd(void) {
  LOAD_REGS();
L_4684bd: /* 4684bd: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 4684c0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4684c4: sub dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(eax), r);
  }
/* 4684c6: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 4684c9: add dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* 4684cb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4684ce(void) {
  LOAD_REGS();
L_4684ce: /* 4684ce: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 4684d1: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4684d5: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4684d7: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* 4684da: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4684de: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 4684e0: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4684e4: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 4684e6: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 4684e9: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4684eb: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4684ee(void) {
  LOAD_REGS();
L_4684ee: /* 4684ee: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4684ef: mov esi, ecx */
  esi = ecx;
/* 4684f1: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 4684f4: mov dword ptr [esi], 0x4c721c */
  W32((uint32_t)(esi), 0x4c721cu);
/* 4684fa: call 0x461a9e */
  esp -= 4; W32(esp, 0x4684ffu); SPILL(); f_461a9e(); if (g_unwind) return; RELOAD();
/* 4684ff: mov eax, esi */
  eax = esi;
/* 468501: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 468502: ret 4 */
  esp += 8; SPILL(); return;
}

void f_468505(void) {
  LOAD_REGS();
L_468505: /* 468505: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 468508: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 46850a: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 46850d: add dword ptr [eax], -2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* 468510: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 468513: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 468515: ret  */
  esp += 4; SPILL(); return;
}

void f_468516(void) {
  LOAD_REGS();
L_468516: /* 468516: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 468519: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 46851d: sub dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(eax), r);
  }
/* 46851f: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 468522: lea ecx, [edx + edx] */
  ecx = (uint32_t)(edx + edx);
/* 468525: add dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* 468527: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46852a(void) {
  LOAD_REGS();
L_46852a: /* 46852a: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* 46852d: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 468531: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 468533: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* 468536: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 468538: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 46853c: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 46853e: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 468541: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 468543: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 468545: ret 8 */
  esp += 12; SPILL(); return;
}

void f_468548(void) {
  LOAD_REGS();
L_468548: /* 468548: or ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 46854c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46854f(void) {
  LOAD_REGS();
L_46854f: /* 46854f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 468550: mov ebp, esp */
  ebp = esp;
/* 468552: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 468553: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 468557: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46855b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 46855c: mov edi, ecx */
  edi = ecx;
/* 46855e: jle 0x4685c5 */
  if ((zf || sf != of)) goto L_4685c5;
L_468560: /* 468560: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 468561: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 468564: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_468565: /* 468565: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 468568: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 46856a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 46856c: je 0x4685a5 */
  if (zf) goto L_4685a5;
L_46856e: /* 46856e: mov ecx, dword ptr [edi + 0x30] */
  ecx = R32((uint32_t)(edi + 0x30u));
/* 468571: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 468573: shl esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 468575: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 468577: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 468579: jle 0x4685a5 */
  if ((zf || sf != of)) goto L_4685a5;
L_46857b: /* 46857b: cmp dword ptr [ebp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 46857e: jge 0x468583 */
  if ((sf == of)) goto L_468583;
L_468580: /* 468580: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
L_468583: /* 468583: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 468584: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 468585: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 468586: call 0x462cb0 */
  esp -= 4; W32(esp, 0x46858bu); SPILL(); f_462cb0(); if (g_unwind) return; RELOAD();
/* 46858b: mov eax, dword ptr [edi + 0x30] */
  eax = R32((uint32_t)(edi + 0x30u));
/* 46858e: sub dword ptr [eax], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(eax), r);
  }
/* 468590: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 468593: add dword ptr [ebp - 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 468596: sub dword ptr [ebp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 468599: lea ecx, [esi + esi] */
  ecx = (uint32_t)(esi + esi);
/* 46859c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46859f: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 4685a1: add dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* 4685a3: jmp 0x4685bd */
  goto L_4685bd;
L_4685a5: /* 4685a5: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 4685a7: mov ecx, edi */
  ecx = edi;
/* 4685a9: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0x4685acu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4685ac: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 4685b0: je 0x4685c3 */
  if (zf) goto L_4685c3;
L_4685b2: /* 4685b2: mov word ptr [ebx], ax */
  W16((uint32_t)(ebx), (eax & 0xffffu));
/* 4685b5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4685b6: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 4685b7: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4685ba: dec dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
L_4685bd: /* 4685bd: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4685c1: jg 0x468565 */
  if ((!zf && sf == of)) goto L_468565;
L_4685c3: /* 4685c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4685c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_4685c5: /* 4685c5: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 4685c8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 4685c9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4685ca: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4685cd(void) {
  LOAD_REGS();
L_4685cd: /* 4685cd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4685ce: mov ebp, esp */
  ebp = esp;
/* 4685d0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 4685d1: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4685d5: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4685d9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 4685da: mov edi, ecx */
  edi = ecx;
/* 4685dc: jle 0x468646 */
  if ((zf || sf != of)) goto L_468646;
L_4685de: /* 4685de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 4685df: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 4685e2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
L_4685e3: /* 4685e3: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 4685e6: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4685e8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 4685ea: je 0x468623 */
  if (zf) goto L_468623;
L_4685ec: /* 4685ec: mov ecx, dword ptr [edi + 0x34] */
  ecx = R32((uint32_t)(edi + 0x34u));
/* 4685ef: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 4685f1: shl esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 4685f3: sar esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  esi = r;
  }
/* 4685f5: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 4685f7: jle 0x468623 */
  if ((zf || sf != of)) goto L_468623;
L_4685f9: /* 4685f9: cmp dword ptr [ebp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 4685fc: jge 0x468601 */
  if ((sf == of)) goto L_468601;
L_4685fe: /* 4685fe: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
L_468601: /* 468601: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 468602: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 468603: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 468604: call 0x462cb0 */
  esp -= 4; W32(esp, 0x468609u); SPILL(); f_462cb0(); if (g_unwind) return; RELOAD();
/* 468609: mov eax, dword ptr [edi + 0x34] */
  eax = R32((uint32_t)(edi + 0x34u));
/* 46860c: sub dword ptr [eax], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(eax), r);
  }
/* 46860e: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 468611: add dword ptr [ebp - 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 468614: sub dword ptr [ebp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 468617: lea ecx, [esi + esi] */
  ecx = (uint32_t)(esi + esi);
/* 46861a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 46861d: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 46861f: add dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* 468621: jmp 0x46863e */
  goto L_46863e;
L_468623: /* 468623: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 468625: xor eax, eax */
  eax = 0;
/* 468627: mov ax, word ptr [ebx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx))) & 0xffffu);
/* 46862a: mov ecx, edi */
  ecx = edi;
/* 46862c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 46862d: call dword ptr [edx + 4] */
  { uint32_t t = R32((uint32_t)(edx + 0x4u)); esp -= 4; W32(esp, 0x468630u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 468630: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 468634: je 0x468644 */
  if (zf) goto L_468644;
L_468636: /* 468636: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 468637: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 468638: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46863b: dec dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
L_46863e: /* 46863e: cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 468642: jg 0x4685e3 */
  if ((!zf && sf == of)) goto L_4685e3;
L_468644: /* 468644: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 468645: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_468646: /* 468646: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 468649: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46864a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46864b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_46864e(void) {
  LOAD_REGS();
L_46864e: /* 46864e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 46864f: mov esi, ecx */
  esi = ecx;
/* 468651: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 468654: mov dword ptr [esi], 0x4c7298 */
  W32((uint32_t)(esi), 0x4c7298u);
/* 46865a: call 0x461a9e */
  esp -= 4; W32(esp, 0x46865fu); SPILL(); f_461a9e(); if (g_unwind) return; RELOAD();
/* 46865f: mov eax, esi */
  eax = esi;
/* 468661: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 468662: ret 4 */
  esp += 8; SPILL(); return;
}

void f_468665(void) {
  LOAD_REGS();
L_468665: /* 468665: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 468666: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 468667: push dword ptr [esp + 0x28] */
  { uint32_t v = R32((uint32_t)(esp + 0x28u)); esp -= 4; W32(esp, v); }
/* 46866b: mov eax, ecx */
  eax = ecx;
/* 46866d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 46866f: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 468672: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 468674: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 468675: mov edi, esp */
  edi = esp;
/* 468677: push dword ptr [esp + 0x28] */
  { uint32_t v = R32((uint32_t)(esp + 0x28u)); esp -= 4; W32(esp, v); }
/* 46867b: lea esi, [esp + 0x30] */
  esi = (uint32_t)(esp + 0x30u);
/* 46867f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 468681: mov ecx, eax */
  ecx = eax;
/* 468683: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x468686u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 468686: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 46868a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 46868b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46868c: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_46868f(void) {
  LOAD_REGS();
L_46868f: /* 46868f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 468690: mov ebp, esp */
  ebp = esp;
/* 468692: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 468693: push dword ptr [ecx + 0x38] */
  { uint32_t v = R32((uint32_t)(ecx + 0x38u)); esp -= 4; W32(esp, v); }
/* 468696: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 468699: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46869d: call 0x46404d */
  esp -= 4; W32(esp, 0x4686a2u); SPILL(); f_46404d(); if (g_unwind) return; RELOAD();
/* 4686a2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4686a5: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4686a6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4686a9(void) {
  LOAD_REGS();
L_4686a9: /* 4686a9: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 4686ac: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4686ae: ret  */
  esp += 4; SPILL(); return;
}

void f_4686af(void) {
  LOAD_REGS();
L_4686af: /* 4686af: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 4686b2: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 4686b4: ret  */
  esp += 4; SPILL(); return;
}

void f_4686b5(void) {
  LOAD_REGS();
L_4686b5: /* 4686b5: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 4686b8: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4686bc: sub dword ptr [eax], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  W32((uint32_t)(eax), r);
  }
/* 4686be: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 4686c1: lea ecx, [edx + edx] */
  ecx = (uint32_t)(edx + edx);
/* 4686c4: add dword ptr [eax], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(eax), r);
  }
/* 4686c6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4686c9(void) {
  LOAD_REGS();
L_4686c9: /* 4686c9: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* 4686cc: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4686d0: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4686d2: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* 4686d5: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4686d9: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 4686db: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 4686df: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 4686e1: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 4686e4: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 4686e6: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4686e8: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_4686eb(void) {
  LOAD_REGS();
L_4686eb: /* 4686eb: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* 4686ee: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 4686f2: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 4686f4: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* 4686f7: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 4686fb: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 4686fd: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 468701: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 468703: mov eax, dword ptr [ecx + 0x34] */
  eax = R32((uint32_t)(ecx + 0x34u));
/* 468706: sar edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 468708: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 46870a: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_46870d(void) {
  LOAD_REGS();
L_46870d: /* 46870d: or ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a | b);
  eax = (eax & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 468711: ret  */
  esp += 4; SPILL(); return;
}

void f_468712(void) {
  LOAD_REGS();
L_468712: /* 468712: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 468713: mov esi, ecx */
  esi = ecx;
/* 468715: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 468717: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x46871au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 46871a: cmp ax, 0xffff */
  { uint16_t a = (uint16_t)((eax & 0xffffu)); uint16_t b = (uint16_t)(0xffffu);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 46871e: jne 0x468727 */
  if (!zf) goto L_468727;
L_468720: /* 468720: mov eax, 0xffff */
  eax = 0xffffu;
/* 468725: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 468726: ret  */
  esp += 4; SPILL(); return;
L_468727: /* 468727: mov eax, dword ptr [esi + 0x30] */
  eax = R32((uint32_t)(esi + 0x30u));
/* 46872a: dec dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - 1);
  W32((uint32_t)(eax), r);
  }
/* 46872c: mov eax, dword ptr [esi + 0x20] */
  eax = R32((uint32_t)(esi + 0x20u));
/* 46872f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 468731: lea edx, [ecx + 2] */
  edx = (uint32_t)(ecx + 0x2u);
/* 468734: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 468736: mov ax, word ptr [ecx] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx))) & 0xffffu);
/* 468739: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 46873a: ret  */
  esp += 4; SPILL(); return;
}

void f_46873b(void) {
  LOAD_REGS();
L_46873b: /* 46873b: mov eax, ecx */
  eax = ecx;
/* 46873d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_468740(void) {
  LOAD_REGS();
L_468740: /* 468740: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 468742: jmp dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); SPILL(); call_ind(t); return; }
}

void f_468745(void) {
  LOAD_REGS();
L_468745: /* 468745: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 468747: jmp dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); SPILL(); call_ind(t); return; }
}

void f_46874a(void) {
  LOAD_REGS();
L_46874a: /* 46874a: mov ax, word ptr [ecx + 0xc] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0xcu))) & 0xffffu);
/* 46874e: ret  */
  esp += 4; SPILL(); return;
}

void f_46874f(void) {
  LOAD_REGS();
L_46874f: /* 46874f: mov ax, word ptr [ecx + 0xe] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + 0xeu))) & 0xffffu);
/* 468753: ret  */
  esp += 4; SPILL(); return;
}

void f_468754(void) {
  LOAD_REGS();
L_468754: /* 468754: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 468755: mov esi, ecx */
  esi = ecx;
/* 468757: push dword ptr [esi + 8] */
  { uint32_t v = R32((uint32_t)(esi + 0x8u)); esp -= 4; W32(esp, v); }
/* 46875a: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46875fu); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46875f: push dword ptr [esi + 0x10] */
  { uint32_t v = R32((uint32_t)(esi + 0x10u)); esp -= 4; W32(esp, v); }
/* 468762: call 0x48bdcd */
  esp -= 4; W32(esp, 0x468767u); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 468767: push dword ptr [esi + 0x14] */
  { uint32_t v = R32((uint32_t)(esi + 0x14u)); esp -= 4; W32(esp, v); }
/* 46876a: call 0x48bdcd */
  esp -= 4; W32(esp, 0x46876fu); SPILL(); f_48bdcd(); if (g_unwind) return; RELOAD();
/* 46876f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 468772: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 468773: ret  */
  esp += 4; SPILL(); return;
}

void f_468774(void) {
  LOAD_REGS();
L_468774: /* 468774: mov eax, 0x48d03b */
  eax = 0x48d03bu;
/* 468779: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46877eu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46877e: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 468781: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 468784: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 468785: mov esi, ecx */
  esi = ecx;
/* 468787: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 46878a: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 46878d: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 468791: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 468796: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46879c: mov dword ptr [esi], 0x4c7314 */
  W32((uint32_t)(esi), 0x4c7314u);
/* 4687a2: call 0x488f1b */
  esp -= 4; W32(esp, 0x4687a7u); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 4687a7: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 4687ad: call 0x488e1d */
  esp -= 4; W32(esp, 0x4687b2u); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 4687b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 4687b5: mov eax, esi */
  eax = esi;
/* 4687b7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 4687b8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 4687bf: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 4687c0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_4687c3(void) {
  LOAD_REGS();
L_4687c3: /* 4687c3: mov eax, ecx */
  eax = ecx;
/* 4687c5: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 4687c9: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 4687cc: mov dword ptr [eax], 0x4c7314 */
  W32((uint32_t)(eax), 0x4c7314u);
/* 4687d2: ret 8 */
  esp += 12; SPILL(); return;
}

void f_4687d5(void) {
  LOAD_REGS();
L_4687d5: /* 4687d5: mov eax, 0x48d03b */
  eax = 0x48d03bu;
/* 4687da: call 0x4616c0 */
  esp -= 4; W32(esp, 0x4687dfu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 4687df: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 4687e2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4687e5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 4687e6: mov esi, ecx */
  esi = ecx;
/* 4687e8: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 4687eb: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 4687ee: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 4687f2: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 4687f7: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 4687fd: mov dword ptr [esi], 0x4c7390 */
  W32((uint32_t)(esi), 0x4c7390u);
/* 468803: call 0x488f1b */
  esp -= 4; W32(esp, 0x468808u); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 468808: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 46880e: call 0x488e1d */
  esp -= 4; W32(esp, 0x468813u); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 468813: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 468816: mov eax, esi */
  eax = esi;
/* 468818: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 468819: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 468820: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 468821: ret 4 */
  esp += 8; SPILL(); return;
}

void f_468824(void) {
  LOAD_REGS();
L_468824: /* 468824: mov eax, ecx */
  eax = ecx;
/* 468826: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 46882a: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 46882d: mov dword ptr [eax], 0x4c7390 */
  W32((uint32_t)(eax), 0x4c7390u);
/* 468833: ret 8 */
  esp += 12; SPILL(); return;
}

void f_468836(void) {
  LOAD_REGS();
L_468836: /* 468836: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 468837: mov ebp, esp */
  ebp = esp;
/* 468839: push dword ptr [ebp + 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0x24u)); esp -= 4; W32(esp, v); }
/* 46883c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 46883e: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 468841: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 468844: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 468847: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 46884a: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46884d: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 468850: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 468853: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x468856u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 468856: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 468859: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46885a: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_46885d(void) {
  LOAD_REGS();
L_46885d: /* 46885d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 46885e: mov ebp, esp */
  ebp = esp;
/* 468860: push dword ptr [ebp + 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0x24u)); esp -= 4; W32(esp, v); }
/* 468863: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 468865: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 468868: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 46886b: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 46886e: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 468871: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 468874: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 468877: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46887a: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x46887du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 46887d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 468880: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 468881: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_468884(void) {
  LOAD_REGS();
L_468884: /* 468884: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 468885: mov ebp, esp */
  ebp = esp;
/* 468887: push dword ptr [ebp + 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0x24u)); esp -= 4; W32(esp, v); }
/* 46888a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 46888c: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 46888f: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 468892: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 468895: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 468898: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 46889b: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46889e: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4688a1: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x4688a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4688a4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4688a7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4688a8: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_4688ab(void) {
  LOAD_REGS();
L_4688ab: /* 4688ab: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4688ac: mov ebp, esp */
  ebp = esp;
/* 4688ae: push dword ptr [ebp + 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0x24u)); esp -= 4; W32(esp, v); }
/* 4688b1: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4688b3: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 4688b6: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4688b9: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 4688bc: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4688bf: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4688c2: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4688c5: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4688c8: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x4688cbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4688cb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4688ce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4688cf: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_4688d2(void) {
  LOAD_REGS();
L_4688d2: /* 4688d2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4688d3: mov ebp, esp */
  ebp = esp;
/* 4688d5: push dword ptr [ebp + 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0x24u)); esp -= 4; W32(esp, v); }
/* 4688d8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4688da: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 4688dd: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4688e0: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 4688e3: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4688e6: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4688e9: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4688ec: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4688ef: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x4688f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4688f2: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4688f5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4688f6: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_4688f9(void) {
  LOAD_REGS();
L_4688f9: /* 4688f9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4688fa: mov ebp, esp */
  ebp = esp;
/* 4688fc: push dword ptr [ebp + 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0x24u)); esp -= 4; W32(esp, v); }
/* 4688ff: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 468901: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 468904: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 468907: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 46890a: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 46890d: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 468910: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 468913: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 468916: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x468919u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 468919: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 46891c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 46891d: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_468920(void) {
  LOAD_REGS();
L_468920: /* 468920: mov eax, 0x48d03b */
  eax = 0x48d03bu;
/* 468925: call 0x4616c0 */
  esp -= 4; W32(esp, 0x46892au); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 46892a: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 46892d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 468930: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 468931: mov esi, ecx */
  esi = ecx;
/* 468933: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 468936: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 468939: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 46893d: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 468942: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 468948: mov dword ptr [esi], 0x4c740c */
  W32((uint32_t)(esi), 0x4c740cu);
/* 46894e: call 0x488f1b */
  esp -= 4; W32(esp, 0x468953u); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 468953: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 468959: call 0x488e1d */
  esp -= 4; W32(esp, 0x46895eu); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 46895e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 468961: mov eax, esi */
  eax = esi;
/* 468963: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 468964: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 46896b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 46896c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_46896f(void) {
  LOAD_REGS();
L_46896f: /* 46896f: mov eax, ecx */
  eax = ecx;
/* 468971: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 468975: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 468978: mov dword ptr [eax], 0x4c740c */
  W32((uint32_t)(eax), 0x4c740cu);
/* 46897e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_468981(void) {
  LOAD_REGS();
L_468981: /* 468981: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 468982: mov ebp, esp */
  ebp = esp;
/* 468984: push dword ptr [ebp + 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0x24u)); esp -= 4; W32(esp, v); }
/* 468987: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 468989: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 46898c: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 46898f: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 468992: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 468995: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 468998: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 46899b: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 46899e: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x4689a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4689a1: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4689a4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4689a5: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_4689a8(void) {
  LOAD_REGS();
L_4689a8: /* 4689a8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4689a9: mov ebp, esp */
  ebp = esp;
/* 4689ab: push dword ptr [ebp + 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0x24u)); esp -= 4; W32(esp, v); }
/* 4689ae: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4689b0: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 4689b3: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4689b6: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 4689b9: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4689bc: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4689bf: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4689c2: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4689c5: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x4689c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4689c8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4689cb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4689cc: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_4689cf(void) {
  LOAD_REGS();
L_4689cf: /* 4689cf: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4689d0: mov ebp, esp */
  ebp = esp;
/* 4689d2: push dword ptr [ebp + 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0x24u)); esp -= 4; W32(esp, v); }
/* 4689d5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4689d7: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 4689da: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 4689dd: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 4689e0: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 4689e3: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 4689e6: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 4689e9: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 4689ec: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x4689efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 4689ef: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 4689f2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 4689f3: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_4689f6(void) {
  LOAD_REGS();
L_4689f6: /* 4689f6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 4689f7: mov ebp, esp */
  ebp = esp;
/* 4689f9: push dword ptr [ebp + 0x24] */
  { uint32_t v = R32((uint32_t)(ebp + 0x24u)); esp -= 4; W32(esp, v); }
/* 4689fc: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 4689fe: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 468a01: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 468a04: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 468a07: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 468a0a: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 468a0d: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 468a10: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 468a13: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x468a16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 468a16: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 468a19: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 468a1a: ret 0x20 */
  esp += 36; SPILL(); return;
}

void f_468a1d(void) {
  LOAD_REGS();
L_468a1d: /* 468a1d: mov eax, 0x48d03b */
  eax = 0x48d03bu;
/* 468a22: call 0x4616c0 */
  esp -= 4; W32(esp, 0x468a27u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 468a27: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 468a2a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 468a2d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 468a2e: mov esi, ecx */
  esi = ecx;
/* 468a30: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 468a33: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 468a36: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 468a3a: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 468a3f: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 468a45: mov dword ptr [esi], 0x4c7488 */
  W32((uint32_t)(esi), 0x4c7488u);
/* 468a4b: call 0x488f1b */
  esp -= 4; W32(esp, 0x468a50u); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 468a50: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 468a56: call 0x488e1d */
  esp -= 4; W32(esp, 0x468a5bu); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 468a5b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 468a5e: mov eax, esi */
  eax = esi;
/* 468a60: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 468a61: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 468a68: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 468a69: ret 4 */
  esp += 8; SPILL(); return;
}

void f_468a6c(void) {
  LOAD_REGS();
L_468a6c: /* 468a6c: mov eax, ecx */
  eax = ecx;
/* 468a6e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 468a72: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 468a75: mov dword ptr [eax], 0x4c7488 */
  W32((uint32_t)(eax), 0x4c7488u);
/* 468a7b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_468a7e(void) {
  LOAD_REGS();
L_468a7e: /* 468a7e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 468a7f: mov ebp, esp */
  ebp = esp;
/* 468a81: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 468a84: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 468a86: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 468a89: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 468a8c: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 468a8f: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 468a92: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 468a95: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 468a98: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0x468a9bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 468a9b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 468a9e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 468a9f: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_468aa2(void) {
  LOAD_REGS();
L_468aa2: /* 468aa2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 468aa3: mov ebp, esp */
  ebp = esp;
/* 468aa5: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 468aa8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 468aaa: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 468aad: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 468ab0: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 468ab3: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 468ab6: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 468ab9: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x468abcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 468abc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 468abf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 468ac0: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_468ac3(void) {
  LOAD_REGS();
L_468ac3: /* 468ac3: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 468ac7: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 468acb: test dl, 0x20 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 468ace: mov byte ptr [eax], 0x25 */
  W8((uint32_t)(eax), 0x25u);
/* 468ad1: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 468ad4: je 0x468ada */
  if (zf) goto L_468ada;
L_468ad6: /* 468ad6: mov byte ptr [ecx], 0x2b */
  W8((uint32_t)(ecx), 0x2bu);
/* 468ad9: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_468ada: /* 468ada: test dl, 0x10 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 468add: je 0x468ae3 */
  if (zf) goto L_468ae3;
L_468adf: /* 468adf: mov byte ptr [ecx], 0x23 */
  W8((uint32_t)(ecx), 0x23u);
/* 468ae2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_468ae3: /* 468ae3: mov byte ptr [ecx], 0x2e */
  W8((uint32_t)(ecx), 0x2eu);
/* 468ae6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 468ae7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 468ae8: mov bl, byte ptr [esp + 0xc] */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0xcu))) & 0xffu);
/* 468aec: mov byte ptr [ecx], 0x2a */
  W8((uint32_t)(ecx), 0x2au);
/* 468aef: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 468af0: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 468af2: je 0x468af7 */
  if (zf) goto L_468af7;
L_468af4: /* 468af4: mov byte ptr [ecx], bl */
  W8((uint32_t)(ecx), (ebx & 0xffu));
/* 468af6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
L_468af7: /* 468af7: and edx, 0x3000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3000u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 468afd: cmp edx, 0x2000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 468b03: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 468b04: jne 0x468b0a */
  if (!zf) goto L_468b0a;
L_468b06: /* 468b06: mov dl, 0x66 */
  edx = (edx & 0xffffff00u) | ((uint32_t)(0x66u) & 0xffu);
/* 468b08: jmp 0x468b17 */
  goto L_468b17;
L_468b0a: /* 468b0a: cmp edx, 0x1000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 468b10: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 468b13: lea edx, [edx + edx + 0x65] */
  edx = (uint32_t)(edx + edx + 0x65u);
L_468b17: /* 468b17: mov byte ptr [ecx], dl */
  W8((uint32_t)(ecx), (edx & 0xffu));
/* 468b19: and byte ptr [ecx + 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ecx + 0x1u), r);
  }
/* 468b1d: ret  */
  esp += 4; SPILL(); return;
}

void f_468b1e(void) {
  LOAD_REGS();
L_468b1e: /* 468b1e: mov eax, 0x48d03b */
  eax = 0x48d03bu;
/* 468b23: call 0x4616c0 */
  esp -= 4; W32(esp, 0x468b28u); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 468b28: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 468b2b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 468b2e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 468b2f: mov esi, ecx */
  esi = ecx;
/* 468b31: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 468b34: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 468b37: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 468b3b: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 468b40: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 468b46: mov dword ptr [esi], 0x4c74f8 */
  W32((uint32_t)(esi), 0x4c74f8u);
/* 468b4c: call 0x488f1b */
  esp -= 4; W32(esp, 0x468b51u); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 468b51: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 468b57: call 0x488e1d */
  esp -= 4; W32(esp, 0x468b5cu); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 468b5c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 468b5f: mov eax, esi */
  eax = esi;
/* 468b61: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 468b62: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 468b69: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 468b6a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_468b6d(void) {
  LOAD_REGS();
L_468b6d: /* 468b6d: mov eax, ecx */
  eax = ecx;
/* 468b6f: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 468b73: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 468b76: mov dword ptr [eax], 0x4c74f8 */
  W32((uint32_t)(eax), 0x4c74f8u);
/* 468b7c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_468b7f(void) {
  LOAD_REGS();
L_468b7f: /* 468b7f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_468b82(void) {
  LOAD_REGS();
L_468b82: /* 468b82: mov eax, 0x48d03b */
  eax = 0x48d03bu;
/* 468b87: call 0x4616c0 */
  esp -= 4; W32(esp, 0x468b8cu); SPILL(); f_4616c0(); if (g_unwind) return; RELOAD();
/* 468b8c: sub esp, 0x78 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 468b8f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 468b92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 468b93: mov esi, ecx */
  esi = ecx;
/* 468b95: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* 468b98: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 468b9b: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* 468b9f: push 0x48e1b8 */
  { uint32_t v = 0x48e1b8u; esp -= 4; W32(esp, v); }
/* 468ba4: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 468baa: mov dword ptr [esi], 0x4c7568 */
  W32((uint32_t)(esi), 0x4c7568u);
/* 468bb0: call 0x488f1b */
  esp -= 4; W32(esp, 0x468bb5u); SPILL(); f_488f1b(); if (g_unwind) return; RELOAD();
/* 468bb5: lea ecx, [ebp - 0x84] */
  ecx = (uint32_t)(ebp + 0xffffff7cu);
/* 468bbb: call 0x488e1d */
  esp -= 4; W32(esp, 0x468bc0u); SPILL(); f_488e1d(); if (g_unwind) return; RELOAD();
/* 468bc0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 468bc3: mov eax, esi */
  eax = esi;
/* 468bc5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 468bc6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 468bcd: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* 468bce: ret 4 */
  esp += 8; SPILL(); return;
}

void f_468bd1(void) {
  LOAD_REGS();
L_468bd1: /* 468bd1: mov eax, ecx */
  eax = ecx;
/* 468bd3: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 468bd7: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 468bda: mov dword ptr [eax], 0x4c7568 */
  W32((uint32_t)(eax), 0x4c7568u);
/* 468be0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_468be3(void) {
  LOAD_REGS();
L_468be3: /* 468be3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 468be4: mov ebp, esp */
  ebp = esp;
/* 468be6: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 468be9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 468beb: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 468bee: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 468bf1: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 468bf4: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 468bf7: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 468bfa: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x468bfdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 468bfd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 468c00: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 468c01: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_468c04(void) {
  LOAD_REGS();
L_468c04: /* 468c04: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 468c05: mov ebp, esp */
  ebp = esp;
/* 468c07: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 468c0a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 468c0c: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 468c0f: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 468c12: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 468c15: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 468c18: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 468c1b: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x468c1eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 468c1e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 468c21: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 468c22: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_468c25(void) {
  LOAD_REGS();
L_468c25: /* 468c25: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 468c26: mov ebp, esp */
  ebp = esp;
/* 468c28: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 468c2b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 468c2d: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 468c30: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 468c33: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 468c36: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 468c39: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 468c3c: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x468c3fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 468c3f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 468c42: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 468c43: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_468c46(void) {
  LOAD_REGS();
L_468c46: /* 468c46: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 468c47: mov ebp, esp */
  ebp = esp;
/* 468c49: push dword ptr [ebp + 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0x20u)); esp -= 4; W32(esp, v); }
/* 468c4c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 468c4e: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* 468c51: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* 468c54: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* 468c57: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* 468c5a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* 468c5d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* 468c60: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x468c63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 468c63: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 468c66: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 468c67: ret 0x1c */
  esp += 32; SPILL(); return;
}
