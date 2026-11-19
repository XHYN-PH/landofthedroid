#include "recomp.h"
#include "rec_mod.h"

void f_10906ed3(void) {
  LOAD_REGS();
L_10906ed3: /* 10906ed3: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 10906ed6: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 10906edb: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 10906ede: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10906edf: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 10906ee2: call 0x10918770 */
  esp -= 4; W32(esp, 0x10906ee7u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_10906ee7(); return;
}

void f_10906ee7(void) {
  LOAD_REGS();
L_10906ee7: /* 10906ee7: push 0x10920ad8 */
  { uint32_t v = 0x10920ad8u; esp -= 4; W32(esp, v); }
/* 10906eec: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 10906ef1: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x10906ef7u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 10906ef7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10906efa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10906efc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10906efe: call 0x10918770 */
  esp -= 4; W32(esp, 0x10906f03u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_10906f03: guest_badaddr(0x10906f03); return;
}

void f_10906fa0(void) {
  LOAD_REGS();
L_10906fa0: /* 10906fa0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10906fa1: mov esi, ecx */
  esi = ecx;
/* 10906fa3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 10906fa5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10906fa6: call dword ptr [eax + 0x4c] */
  { uint32_t t = R32((uint32_t)(eax + 0x4cu)); esp -= 4; W32(esp, 0x10906fa9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10906fa9: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 10906fad: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 10906fb0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10906fb2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10906fb4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10906fb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10906fb6: call dword ptr [0x10959f50] */
  esp -= 4; W32(esp, 0x10906fbcu); SPILL(); call_ind(R32(0x10959f50u)); if (g_unwind) return; /* KERNEL32!SetFilePointer */ RELOAD();
/* 10906fbc: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10906fbf: jne 0x10906fe8 */
  if (!zf) goto L_10906fe8;
L_10906fc1: /* 10906fc1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10906fc3: push 0x1092e180 */
  { uint32_t v = 0x1092e180u; esp -= 4; W32(esp, v); }
/* 10906fc8: push 0x1092e988 */
  { uint32_t v = 0x1092e988u; esp -= 4; W32(esp, v); }
/* 10906fcd: mov dword ptr [esi + 0x2c], 1 */
  W32((uint32_t)(esi + 0x2cu), 0x1u);
/* 10906fd4: call dword ptr [0x10959d28] */
  esp -= 4; W32(esp, 0x10906fdau); SPILL(); f_4e2702(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBDPBG1@Z */ RELOAD();
/* 10906fda: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* 10906fdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10906fde: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10906fdf: call dword ptr [0x10959cbc] */
  esp -= 4; W32(esp, 0x10906fe5u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 10906fe5: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10906fe8: /* 10906fe8: mov dword ptr [esi + 0x48], edi */
  W32((uint32_t)(esi + 0x48u), edi);
/* 10906feb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10906fec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10906fed: ret 4 */
  esp += 8; SPILL(); return;
}

void f_10907010(void) {
  LOAD_REGS();
L_10907010: /* 10907010: mov eax, dword ptr [ecx + 0x48] */
  eax = R32((uint32_t)(ecx + 0x48u));
/* 10907013: ret  */
  esp += 4; SPILL(); return;
}

void f_10907030(void) {
  LOAD_REGS();
L_10907030: /* 10907030: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907031: mov esi, ecx */
  esi = ecx;
/* 10907033: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 10907035: call dword ptr [eax + 0x4c] */
  { uint32_t t = R32((uint32_t)(eax + 0x4cu)); esp -= 4; W32(esp, 0x10907038u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10907038: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 1090703b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090703d: je 0x10907070 */
  if (zf) goto L_10907070;
L_1090703f: /* 1090703f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907040: call dword ptr [0x10959f54] */
  esp -= 4; W32(esp, 0x10907046u); SPILL(); call_ind(R32(0x10959f54u)); if (g_unwind) return; /* KERNEL32!CloseHandle */ RELOAD();
/* 10907046: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10907048: jne 0x10907070 */
  if (!zf) goto L_10907070;
L_1090704a: /* 1090704a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090704b: push 0x1092e180 */
  { uint32_t v = 0x1092e180u; esp -= 4; W32(esp, v); }
/* 10907050: push 0x1092e998 */
  { uint32_t v = 0x1092e998u; esp -= 4; W32(esp, v); }
/* 10907055: mov dword ptr [esi + 0x2c], 1 */
  W32((uint32_t)(esi + 0x2cu), 0x1u);
/* 1090705c: call dword ptr [0x10959d28] */
  esp -= 4; W32(esp, 0x10907062u); SPILL(); f_4e2702(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBDPBG1@Z */ RELOAD();
/* 10907062: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 10907065: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907066: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10907067: call dword ptr [0x10959cbc] */
  esp -= 4; W32(esp, 0x1090706du); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 1090706d: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10907070: /* 10907070: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 10907073: xor eax, eax */
  eax = 0;
/* 10907075: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10907077: mov dword ptr [esi + 0x40], 0 */
  W32((uint32_t)(esi + 0x40u), 0x0u);
/* 1090707e: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 10907081: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10907082: ret  */
  esp += 4; SPILL(); return;
}

void f_109070b0(void) {
  LOAD_REGS();
L_109070b0: /* 109070b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109070b1: mov ebx, dword ptr [esp + 0xc] */
  ebx = R32((uint32_t)(esp + 0xcu));
/* 109070b5: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 109070b6: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 109070ba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109070bb: mov esi, ecx */
  esi = ecx;
/* 109070bd: mov edx, dword ptr [esi + 0x48] */
  edx = R32((uint32_t)(esi + 0x48u));
/* 109070c0: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 109070c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109070c4: mov edi, 0x1000 */
  edi = 0x1000u;
/* 109070c9: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 109070cb: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 109070cd: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 109070cf: mov dword ptr [esi + 0x48], edx */
  W32((uint32_t)(esi + 0x48u), edx);
/* 109070d2: jle 0x10907107 */
  if ((zf || sf != of)) goto L_10907107;
L_109070d4: /* 109070d4: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* 109070d7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109070d8: lea ecx, [esi + eax + 0x50] */
  ecx = (uint32_t)(esi + eax + 0x50u);
/* 109070dc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 109070dd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109070de: call 0x109014e7 */
  esp -= 4; W32(esp, 0x109070e3u); SPILL(); f_109014e7(); if (g_unwind) return; RELOAD();
/* 109070e3: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 109070e6: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 109070e8: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 109070ea: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 109070ed: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109070f0: mov ecx, esi */
  ecx = esi;
/* 109070f2: sub ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 109070f4: add ebp, edi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 109070f6: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0x109070f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109070f9: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 109070fc: mov edi, 0x1000 */
  edi = 0x1000u;
/* 10907101: sub edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10907103: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10907105: jg 0x109070d4 */
  if ((!zf && sf == of)) goto L_109070d4;
L_10907107: /* 10907107: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10907109: je 0x10907125 */
  if (zf) goto L_10907125;
L_1090710b: /* 1090710b: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* 1090710e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090710f: lea ecx, [esi + eax + 0x50] */
  ecx = (uint32_t)(esi + eax + 0x50u);
/* 10907113: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10907114: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10907115: call 0x109014e7 */
  esp -= 4; W32(esp, 0x1090711au); SPILL(); f_109014e7(); if (g_unwind) return; RELOAD();
/* 1090711a: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* 1090711d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10907120: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10907122: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
L_10907125: /* 10907125: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10907126: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10907127: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10907128: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10907129: ret 8 */
  esp += 12; SPILL(); return;
}

void f_10907150(void) {
  LOAD_REGS();
L_10907150: /* 10907150: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10907151: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907152: mov esi, ecx */
  esi = ecx;
/* 10907154: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* 10907157: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10907158: xor edi, edi */
  edi = 0;
/* 1090715a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090715c: je 0x109071a1 */
  if (zf) goto L_109071a1;
L_1090715e: /* 1090715e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090715f: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 10907163: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10907164: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907165: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 10907168: lea edx, [esi + 0x50] */
  edx = (uint32_t)(esi + 0x50u);
/* 1090716b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090716c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090716d: mov dword ptr [esp + 0x1c], edi */
  W32((uint32_t)(esp + 0x1cu), edi);
/* 10907171: call dword ptr [0x10959f60] */
  esp -= 4; W32(esp, 0x10907177u); SPILL(); call_ind(R32(0x10959f60u)); if (g_unwind) return; /* KERNEL32!WriteFile */ RELOAD();
/* 10907177: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10907179: jne 0x109071a1 */
  if (!zf) goto L_109071a1;
L_1090717b: /* 1090717b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090717c: push 0x1092e180 */
  { uint32_t v = 0x1092e180u; esp -= 4; W32(esp, v); }
/* 10907181: push 0x1092e998 */
  { uint32_t v = 0x1092e998u; esp -= 4; W32(esp, v); }
/* 10907186: mov dword ptr [esi + 0x2c], 1 */
  W32((uint32_t)(esi + 0x2cu), 0x1u);
/* 1090718d: call dword ptr [0x10959d28] */
  esp -= 4; W32(esp, 0x10907193u); SPILL(); f_4e2702(); if (g_unwind) return; /* Core!?LocalizeError@@YAPBGPBDPBG1@Z */ RELOAD();
/* 10907193: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 10907196: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907197: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10907198: call dword ptr [0x10959cbc] */
  esp -= 4; W32(esp, 0x1090719eu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 1090719e: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_109071a1: /* 109071a1: mov dword ptr [esi + 0x4c], edi */
  W32((uint32_t)(esi + 0x4cu), edi);
/* 109071a4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109071a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109071a6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 109071a7: ret  */
  esp += 4; SPILL(); return;
}

void f_109071d0(void) {
  LOAD_REGS();
L_109071d0: /* 109071d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 109071d1: mov ebp, esp */
  ebp = esp;
/* 109071d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 109071d5: push 0x1091b9c0 */
  { uint32_t v = 0x1091b9c0u; esp -= 4; W32(esp, v); }
/* 109071da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 109071e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109071e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 109071e8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 109071eb: mov eax, dword ptr [0x10959d60] */
  eax = R32((uint32_t)(0x10959d60u));
/* 109071f0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109071f2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109071f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109071f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109071f5: xor edi, edi */
  edi = 0;
/* 109071f7: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109071f9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 109071fc: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 109071ff: je 0x1090721d */
  if (zf) goto L_1090721d;
L_10907201: /* 10907201: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 10907204: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10907205: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 1090720a: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 1090720c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090720d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090720f: push 0x80000000 */
  { uint32_t v = 0x80000000u; esp -= 4; W32(esp, v); }
/* 10907214: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10907215: call dword ptr [0x10959f4c] */
  esp -= 4; W32(esp, 0x1090721bu); SPILL(); call_ind(R32(0x10959f4cu)); if (g_unwind) return; /* KERNEL32!CreateFileW */ RELOAD();
/* 1090721b: jmp 0x10907277 */
  goto L_10907277;
L_1090721d: /* 1090721d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 10907220: mov ebx, dword ptr [0x10959d90] */
  ebx = R32((uint32_t)(0x10959d90u));
/* 10907226: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907227: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x10907229u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10907229: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090722c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090722e: je 0x1090724c */
  if (zf) goto L_1090724c;
L_10907230: /* 10907230: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907231: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x10907233u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10907233: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10907236: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10907239: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1090723c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090723f: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10907242: call 0x10918780 */
  esp -= 4; W32(esp, 0x10907247u); SPILL(); f_10918780(); if (g_unwind) return; RELOAD();
/* 10907247: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090724a: mov edi, esp */
  edi = esp;
L_1090724c: /* 1090724c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090724d: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1090724fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090724f: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10907252: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907253: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907254: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10907255: call dword ptr [0x10959d8c] */
  esp -= 4; W32(esp, 0x1090725bu); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* 1090725b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090725e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10907260: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 10907265: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 10907267: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10907269: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090726b: push 0x80000000 */
  { uint32_t v = 0x80000000u; esp -= 4; W32(esp, v); }
/* 10907270: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907271: call dword ptr [0x10959f48] */
  esp -= 4; W32(esp, 0x10907277u); SPILL(); call_ind(R32(0x10959f48u)); if (g_unwind) return; /* KERNEL32!CreateFileA */ RELOAD();
L_10907277: /* 10907277: mov esi, eax */
  esi = eax;
/* 10907279: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090727c: jne 0x10907296 */
  if (!zf) goto L_10907296;
L_1090727e: /* 1090727e: or eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_10907280: /* 10907280: lea esp, [ebp - 0x24] */
  esp = (uint32_t)(ebp + 0xffffffdcu);
/* 10907283: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 10907286: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090728d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090728e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090728f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10907290: mov esp, ebp */
  esp = ebp;
/* 10907292: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10907293: ret 4 */
  esp += 8; SPILL(); return;
L_10907296: /* 10907296: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10907298: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907299: call dword ptr [0x10959f44] */
  esp -= 4; W32(esp, 0x1090729fu); SPILL(); call_ind(R32(0x10959f44u)); if (g_unwind) return; /* KERNEL32!GetFileSize */ RELOAD();
/* 1090729f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109072a0: mov edi, eax */
  edi = eax;
/* 109072a2: call dword ptr [0x10959f54] */
  esp -= 4; W32(esp, 0x109072a8u); SPILL(); call_ind(R32(0x10959f54u)); if (g_unwind) return; /* KERNEL32!CloseHandle */ RELOAD();
/* 109072a8: mov eax, edi */
  eax = edi;
/* 109072aa: jmp 0x10907280 */
  goto L_10907280;
}

void f_109072ac(void) {
  LOAD_REGS();
L_109072ac: /* 109072ac: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 109072af: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 109072b4: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 109072b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109072b8: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 109072bb: call 0x10918770 */
  esp -= 4; W32(esp, 0x109072c0u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_109072c0(); return;
}

void f_109072c0(void) {
  LOAD_REGS();
L_109072c0: /* 109072c0: push 0x10920ba4 */
  { uint32_t v = 0x10920ba4u; esp -= 4; W32(esp, v); }
/* 109072c5: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 109072ca: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x109072d0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 109072d0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109072d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109072d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109072d7: call 0x10918770 */
  esp -= 4; W32(esp, 0x109072dcu); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_109072dc: guest_badaddr(0x109072dc); return;
}

void f_10907330(void) {
  LOAD_REGS();
L_10907330: /* 10907330: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10907331: mov ebp, esp */
  ebp = esp;
/* 10907333: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 10907335: push 0x1091b9d0 */
  { uint32_t v = 0x1091b9d0u; esp -= 4; W32(esp, v); }
/* 1090733a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 10907340: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907341: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 10907348: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090734b: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 1090734e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090734f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907350: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 10907353: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10907354: xor edi, edi */
  edi = 0;
/* 10907356: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10907358: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090735b: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 1090735e: je 0x10907375 */
  if (zf) goto L_10907375;
L_10907360: /* 10907360: mov eax, dword ptr [0x10959d60] */
  eax = R32((uint32_t)(0x10959d60u));
/* 10907365: cmp dword ptr [eax], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10907367: je 0x10907392 */
  if (zf) goto L_10907392;
L_10907369: /* 10907369: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 1090736e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090736f: call dword ptr [0x10959f5c] */
  esp -= 4; W32(esp, 0x10907375u); SPILL(); call_ind(R32(0x10959f5cu)); if (g_unwind) return; /* KERNEL32!SetFileAttributesW */ RELOAD();
L_10907375: /* 10907375: mov ebx, dword ptr [0x10959d90] */
  ebx = R32((uint32_t)(0x10959d90u));
L_1090737b: /* 1090737b: mov ecx, dword ptr [0x10959d60] */
  ecx = R32((uint32_t)(0x10959d60u));
/* 10907381: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10907384: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907385: je 0x109073de */
  if (zf) goto L_109073de;
L_10907387: /* 10907387: call dword ptr [0x10959f68] */
  esp -= 4; W32(esp, 0x1090738du); SPILL(); call_ind(R32(0x10959f68u)); if (g_unwind) return; /* KERNEL32!DeleteFileW */ RELOAD();
/* 1090738d: jmp 0x10907420 */
  goto L_10907420;
L_10907392: /* 10907392: mov ebx, dword ptr [0x10959d90] */
  ebx = R32((uint32_t)(0x10959d90u));
/* 10907398: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907399: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1090739bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090739b: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090739e: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109073a0: je 0x109073be */
  if (zf) goto L_109073be;
L_109073a2: /* 109073a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109073a3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x109073a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109073a5: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109073a8: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109073ab: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109073ae: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109073b1: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109073b4: call 0x10918780 */
  esp -= 4; W32(esp, 0x109073b9u); SPILL(); f_10918780(); if (g_unwind) return; RELOAD();
/* 109073b9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 109073bc: mov edi, esp */
  edi = esp;
L_109073be: /* 109073be: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109073bf: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x109073c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109073c1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109073c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109073c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109073c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109073c7: call dword ptr [0x10959d8c] */
  esp -= 4; W32(esp, 0x109073cdu); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* 109073cd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109073d0: push 0x80 */
  { uint32_t v = 0x80u; esp -= 4; W32(esp, v); }
/* 109073d5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109073d6: call dword ptr [0x10959f58] */
  esp -= 4; W32(esp, 0x109073dcu); SPILL(); call_ind(R32(0x10959f58u)); if (g_unwind) return; /* KERNEL32!SetFileAttributesA */ RELOAD();
/* 109073dc: jmp 0x1090737b */
  goto L_1090737b;
L_109073de: /* 109073de: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x109073e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109073e0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109073e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109073e5: jne 0x109073eb */
  if (!zf) goto L_109073eb;
L_109073e7: /* 109073e7: xor edi, edi */
  edi = 0;
/* 109073e9: jmp 0x10907407 */
  goto L_10907407;
L_109073eb: /* 109073eb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109073ec: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x109073eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109073ee: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109073f1: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109073f4: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109073f7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109073fa: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109073fd: call 0x10918780 */
  esp -= 4; W32(esp, 0x10907402u); SPILL(); f_10918780(); if (g_unwind) return; RELOAD();
/* 10907402: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 10907405: mov edi, esp */
  edi = esp;
L_10907407: /* 10907407: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907408: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1090740au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090740a: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090740d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090740e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090740f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10907410: call dword ptr [0x10959d8c] */
  esp -= 4; W32(esp, 0x10907416u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* 10907416: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10907419: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090741a: call dword ptr [0x10959f64] */
  esp -= 4; W32(esp, 0x10907420u); SPILL(); call_ind(R32(0x10959f64u)); if (g_unwind) return; /* KERNEL32!DeleteFileA */ RELOAD();
L_10907420: /* 10907420: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10907422: jne 0x10907479 */
  if (!zf) goto L_10907479;
L_10907424: /* 10907424: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 10907427: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10907429: jne 0x10907436 */
  if (!zf) goto L_10907436;
L_1090742b: /* 1090742b: call dword ptr [0x10959f38] */
  esp -= 4; W32(esp, 0x10907431u); SPILL(); call_ind(R32(0x10959f38u)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 10907431: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10907434: je 0x10907479 */
  if (zf) goto L_10907479;
L_10907436: /* 10907436: xor edi, edi */
  edi = 0;
/* 10907438: call dword ptr [0x10959f38] */
  esp -= 4; W32(esp, 0x1090743eu); SPILL(); call_ind(R32(0x10959f38u)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 1090743e: mov edx, dword ptr [0x10959d0c] */
  edx = R32((uint32_t)(0x10959d0cu));
/* 10907444: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907445: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 10907447: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907448: push 0x1092e9a8 */
  { uint32_t v = 0x1092e9a8u; esp -= 4; W32(esp, v); }
/* 1090744d: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 10907452: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907453: call dword ptr [0x10959d54] */
  esp -= 4; W32(esp, 0x10907459u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 10907459: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090745c: /* 1090745c: xor eax, eax */
  eax = 0;
/* 1090745e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10907460: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 10907463: lea esp, [ebp - 0x24] */
  esp = (uint32_t)(ebp + 0xffffffdcu);
/* 10907466: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 10907469: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 10907470: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10907471: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10907472: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10907473: mov esp, ebp */
  esp = ebp;
/* 10907475: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10907476: ret 0xc */
  esp += 16; SPILL(); return;
L_10907479: /* 10907479: mov edi, 1 */
  edi = 0x1u;
/* 1090747e: jmp 0x1090745c */
  goto L_1090745c;
}

void f_10907480(void) {
  LOAD_REGS();
L_10907480: /* 10907480: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 10907483: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 10907488: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 1090748b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090748c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 1090748f: call 0x10918770 */
  esp -= 4; W32(esp, 0x10907494u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_10907494(); return;
}

void f_10907494(void) {
  LOAD_REGS();
L_10907494: /* 10907494: push 0x10920bec */
  { uint32_t v = 0x10920becu; esp -= 4; W32(esp, v); }
/* 10907499: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090749e: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x109074a4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 109074a4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109074a7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109074a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109074ab: call 0x10918770 */
  esp -= 4; W32(esp, 0x109074b0u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_109074b0: guest_badaddr(0x109074b0); return;
}

void f_10907530(void) {
  LOAD_REGS();
L_10907530: /* 10907530: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10907531: mov ebp, esp */
  ebp = esp;
/* 10907533: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 10907535: push 0x1091b9e0 */
  { uint32_t v = 0x1091b9e0u; esp -= 4; W32(esp, v); }
/* 1090753a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 10907540: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907541: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 10907548: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090754b: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 1090754e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 10907550: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10907551: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 10907554: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907555: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10907556: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 10907559: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090755a: xor esi, esi */
  esi = 0;
/* 1090755c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090755d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090755e: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 10907561: call dword ptr [eax + 0x10] */
  { uint32_t t = R32((uint32_t)(eax + 0x10u)); esp -= 4; W32(esp, 0x10907564u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10907564: mov eax, dword ptr [0x10959d60] */
  eax = R32((uint32_t)(0x10959d60u));
/* 10907569: cmp dword ptr [eax], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090756b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090756c: je 0x1090757d */
  if (zf) goto L_1090757d;
L_1090756e: /* 1090756e: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 10907571: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907572: call dword ptr [0x10959f70] */
  esp -= 4; W32(esp, 0x10907578u); SPILL(); call_ind(R32(0x10959f70u)); if (g_unwind) return; /* KERNEL32!MoveFileW */ RELOAD();
/* 10907578: jmp 0x1090761c */
  goto L_1090761c;
L_1090757d: /* 1090757d: mov edi, dword ptr [0x10959d90] */
  edi = R32((uint32_t)(0x10959d90u));
/* 10907583: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x10907585u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10907585: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10907588: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090758a: jne 0x10907591 */
  if (!zf) goto L_10907591;
L_1090758c: /* 1090758c: mov dword ptr [ebp + 0x14], esi */
  W32((uint32_t)(ebp + 0x14u), esi);
/* 1090758f: jmp 0x109075ae */
  goto L_109075ae;
L_10907591: /* 10907591: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10907592: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x10907594u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10907594: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10907597: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1090759a: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1090759d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109075a0: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109075a3: call 0x10918780 */
  esp -= 4; W32(esp, 0x109075a8u); SPILL(); f_10918780(); if (g_unwind) return; RELOAD();
/* 109075a8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 109075ab: mov dword ptr [ebp + 0x14], esp */
  W32((uint32_t)(ebp + 0x14u), esp);
L_109075ae: /* 109075ae: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 109075b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109075b2: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x109075b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109075b4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109075b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109075b9: jne 0x109075bf */
  if (!zf) goto L_109075bf;
L_109075bb: /* 109075bb: xor ebx, ebx */
  ebx = 0;
/* 109075bd: jmp 0x109075db */
  goto L_109075db;
L_109075bf: /* 109075bf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109075c0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x109075c2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109075c2: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109075c5: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109075c8: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109075cb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109075ce: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109075d1: call 0x10918780 */
  esp -= 4; W32(esp, 0x109075d6u); SPILL(); f_10918780(); if (g_unwind) return; RELOAD();
/* 109075d6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 109075d9: mov ebx, esp */
  ebx = esp;
L_109075db: /* 109075db: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 109075de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109075df: call dword ptr [0x10959d90] */
  esp -= 4; W32(esp, 0x109075e5u); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* 109075e5: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 109075e8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109075eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109075ec: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109075ed: mov edi, dword ptr [0x10959d8c] */
  edi = R32((uint32_t)(0x10959d8cu));
/* 109075f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109075f4: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x109075f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109075f6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109075f9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109075fa: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 109075fd: call dword ptr [0x10959d90] */
  esp -= 4; W32(esp, 0x10907603u); SPILL(); f_4e3e36(); if (g_unwind) return; /* Core!?winGetSizeANSI@@YAHPBG@Z */ RELOAD();
/* 10907603: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10907606: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907607: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907608: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10907609: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1090760bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090760b: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 1090760e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10907611: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10907612: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907613: call dword ptr [0x10959f6c] */
  esp -= 4; W32(esp, 0x10907619u); SPILL(); call_ind(R32(0x10959f6cu)); if (g_unwind) return; /* KERNEL32!MoveFileA */ RELOAD();
/* 10907619: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_1090761c: /* 1090761c: mov edi, eax */
  edi = eax;
/* 1090761e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10907620: jne 0x10907646 */
  if (!zf) goto L_10907646;
L_10907622: /* 10907622: call dword ptr [0x10959f38] */
  esp -= 4; W32(esp, 0x10907628u); SPILL(); call_ind(R32(0x10959f38u)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 10907628: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907629: mov eax, dword ptr [0x10959d0c] */
  eax = R32((uint32_t)(0x10959d0cu));
/* 1090762e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10907630: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10907631: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907632: push 0x1092e9f8 */
  { uint32_t v = 0x1092e9f8u; esp -= 4; W32(esp, v); }
/* 10907637: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 1090763c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090763d: call dword ptr [0x10959d54] */
  esp -= 4; W32(esp, 0x10907643u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 10907643: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10907646: /* 10907646: xor eax, eax */
  eax = 0;
/* 10907648: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090764a: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 1090764d: lea esp, [ebp - 0x24] */
  esp = (uint32_t)(ebp + 0xffffffdcu);
/* 10907650: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 10907653: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090765a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090765b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090765c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090765d: mov esp, ebp */
  esp = ebp;
/* 1090765f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10907660: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_10907663(void) {
  LOAD_REGS();
L_10907663: /* 10907663: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 10907666: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090766b: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 1090766e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090766f: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 10907672: call 0x10918770 */
  esp -= 4; W32(esp, 0x10907677u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_10907677(); return;
}

void f_10907677(void) {
  LOAD_REGS();
L_10907677: /* 10907677: push 0x10920c30 */
  { uint32_t v = 0x10920c30u; esp -= 4; W32(esp, v); }
/* 1090767c: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 10907681: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x10907687u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 10907687: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090768a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090768c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090768e: call 0x10918770 */
  esp -= 4; W32(esp, 0x10907693u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_10907693: guest_badaddr(0x10907693); return;
}

void f_10907700(void) {
  LOAD_REGS();
L_10907700: /* 10907700: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 10907704: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10907707: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 1090770b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090770c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090770e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090770f: call dword ptr [0x10959fd4] */
  esp -= 4; W32(esp, 0x10907715u); SPILL(); call_ind(R32(0x10959fd4u)); if (g_unwind) return; /* KERNEL32!GetFileAttributesExW */ RELOAD();
/* 10907715: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10907717: je 0x10907727 */
  if (zf) goto L_10907727;
L_10907719: /* 10907719: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 1090771d: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 10907721: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10907724: ret 4 */
  esp += 8; SPILL(); return;
L_10907727: /* 10907727: xor eax, eax */
  eax = 0;
/* 10907729: xor edx, edx */
  edx = 0;
/* 1090772b: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090772e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_10907750(void) {
  LOAD_REGS();
L_10907750: /* 10907750: xor eax, eax */
  eax = 0;
/* 10907752: ret 4 */
  esp += 8; SPILL(); return;
}

void f_10907770(void) {
  LOAD_REGS();
L_10907770: /* 10907770: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10907771: mov ebp, esp */
  ebp = esp;
/* 10907773: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 10907775: push 0x1091b9f0 */
  { uint32_t v = 0x1091b9f0u; esp -= 4; W32(esp, v); }
/* 1090777a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 10907780: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907781: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 10907788: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090778b: mov eax, dword ptr [0x10959d60] */
  eax = R32((uint32_t)(0x10959d60u));
/* 10907790: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10907792: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10907793: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907794: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10907795: xor edi, edi */
  edi = 0;
/* 10907797: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10907799: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090779c: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 1090779f: je 0x109077ad */
  if (zf) goto L_109077ad;
L_109077a1: /* 109077a1: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 109077a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109077a5: call dword ptr [0x10959fcc] */
  esp -= 4; W32(esp, 0x109077abu); SPILL(); call_ind(R32(0x10959fccu)); if (g_unwind) return; /* KERNEL32!SetCurrentDirectoryW */ RELOAD();
/* 109077ab: jmp 0x109077f5 */
  goto L_109077f5;
L_109077ad: /* 109077ad: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 109077b0: mov ebx, dword ptr [0x10959d90] */
  ebx = R32((uint32_t)(0x10959d90u));
/* 109077b6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109077b7: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x109077b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109077b9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109077bc: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109077be: je 0x109077dc */
  if (zf) goto L_109077dc;
L_109077c0: /* 109077c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109077c1: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x109077c3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109077c3: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109077c6: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109077c9: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109077cc: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109077cf: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109077d2: call 0x10918780 */
  esp -= 4; W32(esp, 0x109077d7u); SPILL(); f_10918780(); if (g_unwind) return; RELOAD();
/* 109077d7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 109077da: mov edi, esp */
  edi = esp;
L_109077dc: /* 109077dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109077dd: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x109077dfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109077df: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109077e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109077e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109077e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109077e5: call dword ptr [0x10959d8c] */
  esp -= 4; W32(esp, 0x109077ebu); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* 109077eb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109077ee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109077ef: call dword ptr [0x10959fd0] */
  esp -= 4; W32(esp, 0x109077f5u); SPILL(); call_ind(R32(0x10959fd0u)); if (g_unwind) return; /* KERNEL32!SetCurrentDirectoryA */ RELOAD();
L_109077f5: /* 109077f5: xor edx, edx */
  edx = 0;
/* 109077f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109077f9: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 109077fc: mov eax, edx */
  eax = edx;
/* 109077fe: lea esp, [ebp - 0x24] */
  esp = (uint32_t)(ebp + 0xffffffdcu);
/* 10907801: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 10907804: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090780b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090780c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090780d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090780e: mov esp, ebp */
  esp = ebp;
/* 10907810: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10907811: ret 4 */
  esp += 8; SPILL(); return;
}

void f_10907814(void) {
  LOAD_REGS();
L_10907814: /* 10907814: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 10907817: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090781c: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 1090781f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10907820: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 10907823: call 0x10918770 */
  esp -= 4; W32(esp, 0x10907828u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_10907828(); return;
}

void f_10907828(void) {
  LOAD_REGS();
L_10907828: /* 10907828: push 0x10920c70 */
  { uint32_t v = 0x10920c70u; esp -= 4; W32(esp, v); }
/* 1090782d: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 10907832: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x10907838u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 10907838: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090783b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090783d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090783f: call 0x10918770 */
  esp -= 4; W32(esp, 0x10907844u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_10907844: guest_badaddr(0x10907844); return;
}

void f_10907890(void) {
  LOAD_REGS();
L_10907890: /* 10907890: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10907891: mov ebp, esp */
  ebp = esp;
/* 10907893: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 10907895: push 0x1091ba00 */
  { uint32_t v = 0x1091ba00u; esp -= 4; W32(esp, v); }
/* 1090789a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 109078a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109078a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 109078a8: sub esp, 0x80c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x80cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 109078ae: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 109078b5: mov eax, dword ptr [0x10959d60] */
  eax = R32((uint32_t)(0x10959d60u));
/* 109078ba: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109078bc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109078bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109078be: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109078bf: xor eax, eax */
  eax = 0;
/* 109078c1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109078c3: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 109078c6: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 109078cd: je 0x10907925 */
  if (zf) goto L_10907925;
L_109078cf: /* 109078cf: mov cx, word ptr [0x10958ea4] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(0x10958ea4u))) & 0xffffu);
/* 109078d6: mov word ptr [ebp - 0x818], cx */
  W16((uint32_t)(ebp + 0xfffff7e8u), (ecx & 0xffffu));
/* 109078dd: mov ecx, 0x1ff */
  ecx = 0x1ffu;
/* 109078e2: lea edi, [ebp - 0x816] */
  edi = (uint32_t)(ebp + 0xfffff7eau);
/* 109078e8: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 109078ea: lea edx, [ebp - 0x818] */
  edx = (uint32_t)(ebp + 0xfffff7e8u);
/* 109078f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 109078f1: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 109078f6: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 109078f8: call dword ptr [0x10959fc4] */
  esp -= 4; W32(esp, 0x109078feu); SPILL(); call_ind(R32(0x10959fc4u)); if (g_unwind) return; /* KERNEL32!GetCurrentDirectoryW */ RELOAD();
/* 109078fe: lea eax, [ebp - 0x818] */
  eax = (uint32_t)(ebp + 0xfffff7e8u);
L_10907904: /* 10907904: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 10907907: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907908: mov ecx, esi */
  ecx = esi;
/* 1090790a: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x10907910u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 10907910: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 10907913: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10907914: mov eax, esi */
  eax = esi;
/* 10907916: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10907917: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090791e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090791f: mov esp, ebp */
  esp = ebp;
/* 10907921: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10907922: ret 4 */
  esp += 8; SPILL(); return;
L_10907925: /* 10907925: mov cl, byte ptr [0x10958ea6] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(0x10958ea6u))) & 0xffu);
/* 1090792b: mov byte ptr [ebp - 0x418], cl */
  W8((uint32_t)(ebp + 0xfffffbe8u), (ecx & 0xffu));
/* 10907931: mov ecx, 0xff */
  ecx = 0xffu;
/* 10907936: lea edi, [ebp - 0x417] */
  edi = (uint32_t)(ebp + 0xfffffbe9u);
/* 1090793c: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 1090793e: lea edx, [ebp - 0x418] */
  edx = (uint32_t)(ebp + 0xfffffbe8u);
/* 10907944: stosw word ptr es:[edi], ax */
  W16(edi, (uint16_t)eax); edi += (DF ? -2 : 2);
/* 10907946: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10907947: push 0x400 */
  { uint32_t v = 0x400u; esp -= 4; W32(esp, v); }
/* 1090794c: stosb byte ptr es:[edi], al */
  W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1);
/* 1090794d: call dword ptr [0x10959fc8] */
  esp -= 4; W32(esp, 0x10907953u); SPILL(); call_ind(R32(0x10959fc8u)); if (g_unwind) return; /* KERNEL32!GetCurrentDirectoryA */ RELOAD();
/* 10907953: lea eax, [ebp - 0x418] */
  eax = (uint32_t)(ebp + 0xfffffbe8u);
/* 10907959: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090795b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090795c: call dword ptr [0x10959d70] */
  esp -= 4; W32(esp, 0x10907962u); SPILL(); f_4e161d(); if (g_unwind) return; /* Core!?appFromAnsi@@YAPBGPBDPAG@Z */ RELOAD();
/* 10907962: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10907965: jmp 0x10907904 */
  goto L_10907904;
}

void f_10907967(void) {
  LOAD_REGS();
L_10907967: /* 10907967: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090796a: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090796f: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 10907972: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10907973: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 10907976: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090797bu); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090797b(); return;
}

void f_1090797b(void) {
  LOAD_REGS();
L_1090797b: /* 1090797b: push 0x10920cd8 */
  { uint32_t v = 0x10920cd8u; esp -= 4; W32(esp, v); }
/* 10907980: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 10907985: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090798bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090798b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090798e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10907990: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10907992: call 0x10918770 */
  esp -= 4; W32(esp, 0x10907997u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_10907997: guest_badaddr(0x10907997); return;
}

void f_109079f0(void) {
  LOAD_REGS();
L_109079f0: /* 109079f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109079f1: mov esi, ecx */
  esi = ecx;
/* 109079f3: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 109079f6: mov edx, ecx */
  edx = ecx;
/* 109079f8: and edx, 0x3ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 109079fe: mov eax, 0x400 */
  eax = 0x400u;
/* 10907a03: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10907a05: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 10907a09: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10907a0b: mov dword ptr [esi + 0x50], ecx */
  W32((uint32_t)(esi + 0x50u), ecx);
/* 10907a0e: jle 0x10907a12 */
  if ((zf || sf != of)) goto L_10907a12;
L_10907a10: /* 10907a10: mov edx, eax */
  edx = eax;
L_10907a12: /* 10907a12: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 10907a15: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10907a17: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10907a19: jg 0x10907a1d */
  if ((!zf && sf == of)) goto L_10907a1d;
L_10907a1b: /* 10907a1b: mov eax, edx */
  eax = edx;
L_10907a1d: /* 10907a1d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10907a1f: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 10907a23: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10907a24: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907a25: lea edx, [esi + 0x58] */
  edx = (uint32_t)(esi + 0x58u);
/* 10907a28: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 10907a2b: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 10907a2e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10907a2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907a30: mov dword ptr [esp + 0x1c], 0 */
  W32((uint32_t)(esp + 0x1cu), 0x0u);
/* 10907a38: call dword ptr [0x10959fc0] */
  esp -= 4; W32(esp, 0x10907a3eu); SPILL(); call_ind(R32(0x10959fc0u)); if (g_unwind) return; /* KERNEL32!ReadFile */ RELOAD();
/* 10907a3e: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 10907a42: cmp ecx, dword ptr [esi + 0x54] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x54u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10907a45: je 0x10907a72 */
  if (zf) goto L_10907a72;
L_10907a47: /* 10907a47: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10907a49: mov dword ptr [esi + 0x2c], 1 */
  W32((uint32_t)(esi + 0x2cu), 0x1u);
/* 10907a50: call dword ptr [0x10959d10] */
  esp -= 4; W32(esp, 0x10907a56u); SPILL(); f_4e3ada(); if (g_unwind) return; /* Core!?appGetSystemErrorMessage@@YAPBGH@Z */ RELOAD();
/* 10907a56: mov edx, dword ptr [esi + 0x54] */
  edx = R32((uint32_t)(esi + 0x54u));
/* 10907a59: mov ecx, dword ptr [esi + 0x44] */
  ecx = R32((uint32_t)(esi + 0x44u));
/* 10907a5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907a5d: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 10907a61: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10907a62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907a63: push 0x1092ea50 */
  { uint32_t v = 0x1092ea50u; esp -= 4; W32(esp, v); }
/* 10907a68: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10907a69: call dword ptr [0x10959cbc] */
  esp -= 4; W32(esp, 0x10907a6fu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 10907a6f: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10907a72: /* 10907a72: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10907a73: ret 4 */
  esp += 8; SPILL(); return;
}

void f_10907ab0(void) {
  LOAD_REGS();
L_10907ab0: /* 10907ab0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907ab1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10907ab2: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 10907ab6: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10907ab8: mov esi, ecx */
  esi = ecx;
/* 10907aba: jle 0x10907bbf */
  if ((zf || sf != of)) goto L_10907bbf;
L_10907ac0: /* 10907ac0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10907ac1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10907ac2: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
L_10907ac6: /* 10907ac6: mov ebx, dword ptr [esi + 0x54] */
  ebx = R32((uint32_t)(esi + 0x54u));
/* 10907ac9: mov edx, dword ptr [esi + 0x4c] */
  edx = R32((uint32_t)(esi + 0x4cu));
/* 10907acc: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* 10907acf: sub ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 10907ad1: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10907ad3: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10907ad5: jg 0x10907ad9 */
  if ((!zf && sf == of)) goto L_10907ad9;
L_10907ad7: /* 10907ad7: mov ebx, edi */
  ebx = edi;
L_10907ad9: /* 10907ad9: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10907adb: jne 0x10907b32 */
  if (!zf) goto L_10907b32;
L_10907add: /* 10907add: cmp edi, 0x400 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x400u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10907ae3: jae 0x10907b64 */
  if (!cf) goto L_10907b64;
L_10907ae5: /* 10907ae5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 10907ae7: push 0x7fffffff */
  { uint32_t v = 0x7fffffffu; esp -= 4; W32(esp, v); }
/* 10907aec: mov ecx, esi */
  ecx = esi;
/* 10907aee: call dword ptr [eax + 0x48] */
  { uint32_t t = R32((uint32_t)(eax + 0x48u)); esp -= 4; W32(esp, 0x10907af1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10907af1: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* 10907af4: mov ebx, dword ptr [esi + 0x54] */
  ebx = R32((uint32_t)(esi + 0x54u));
/* 10907af7: mov edx, dword ptr [esi + 0x50] */
  edx = R32((uint32_t)(esi + 0x50u));
/* 10907afa: sub ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* 10907afc: add ebx, edx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 10907afe: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10907b00: jg 0x10907b04 */
  if ((!zf && sf == of)) goto L_10907b04;
L_10907b02: /* 10907b02: mov ebx, edi */
  ebx = edi;
L_10907b04: /* 10907b04: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10907b06: jg 0x10907b27 */
  if ((!zf && sf == of)) goto L_10907b27;
L_10907b08: /* 10907b08: mov ecx, dword ptr [esi + 0x48] */
  ecx = R32((uint32_t)(esi + 0x48u));
/* 10907b0b: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* 10907b0e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10907b0f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10907b10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907b11: push 0x1092eb34 */
  { uint32_t v = 0x1092eb34u; esp -= 4; W32(esp, v); }
/* 10907b16: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10907b17: mov dword ptr [esi + 0x2c], 1 */
  W32((uint32_t)(esi + 0x2cu), 0x1u);
/* 10907b1e: call dword ptr [0x10959cbc] */
  esp -= 4; W32(esp, 0x10907b24u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 10907b24: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10907b27: /* 10907b27: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 10907b2a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10907b2c: jne 0x10907bbd */
  if (!zf) goto L_10907bbd;
L_10907b32: /* 10907b32: mov ecx, dword ptr [esi + 0x50] */
  ecx = R32((uint32_t)(esi + 0x50u));
/* 10907b35: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* 10907b38: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10907b3a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10907b3b: lea ecx, [eax + esi + 0x58] */
  ecx = (uint32_t)(eax + esi + 0x58u);
/* 10907b3f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10907b40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10907b41: call 0x109014e7 */
  esp -= 4; W32(esp, 0x10907b46u); SPILL(); f_109014e7(); if (g_unwind) return; RELOAD();
/* 10907b46: mov eax, dword ptr [esi + 0x4c] */
  eax = R32((uint32_t)(esi + 0x4cu));
/* 10907b49: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10907b4b: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10907b4d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10907b50: add ebp, ebx */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 10907b52: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10907b54: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 10907b57: jg 0x10907ac6 */
  if ((!zf && sf == of)) goto L_10907ac6;
L_10907b5d: /* 10907b5d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10907b5e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10907b5f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10907b60: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10907b61: ret 8 */
  esp += 12; SPILL(); return;
L_10907b64: /* 10907b64: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 10907b67: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10907b69: lea edx, [esp + 0x1c] */
  edx = (uint32_t)(esp + 0x1cu);
/* 10907b6d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10907b6e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10907b6f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10907b70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907b71: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 10907b79: call dword ptr [0x10959fc0] */
  esp -= 4; W32(esp, 0x10907b7fu); SPILL(); call_ind(R32(0x10959fc0u)); if (g_unwind) return; /* KERNEL32!ReadFile */ RELOAD();
/* 10907b7f: cmp dword ptr [esp + 0x18], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x18u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10907b83: je 0x10907bad */
  if (zf) goto L_10907bad;
L_10907b85: /* 10907b85: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10907b87: mov dword ptr [esi + 0x2c], 1 */
  W32((uint32_t)(esi + 0x2cu), 0x1u);
/* 10907b8e: call dword ptr [0x10959d10] */
  esp -= 4; W32(esp, 0x10907b94u); SPILL(); f_4e3ada(); if (g_unwind) return; /* Core!?appGetSystemErrorMessage@@YAPBGH@Z */ RELOAD();
/* 10907b94: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 10907b98: mov edx, dword ptr [esi + 0x44] */
  edx = R32((uint32_t)(esi + 0x44u));
/* 10907b9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907b9c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10907b9d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10907b9e: push 0x1092eac8 */
  { uint32_t v = 0x1092eac8u; esp -= 4; W32(esp, v); }
/* 10907ba3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10907ba4: call dword ptr [0x10959cbc] */
  esp -= 4; W32(esp, 0x10907baau); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 10907baa: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10907bad: /* 10907bad: mov ecx, dword ptr [esi + 0x4c] */
  ecx = R32((uint32_t)(esi + 0x4cu));
/* 10907bb0: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* 10907bb3: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10907bb5: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10907bb7: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 10907bba: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
L_10907bbd: /* 10907bbd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10907bbe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_10907bbf: /* 10907bbf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10907bc0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10907bc1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_10907c20(void) {
  LOAD_REGS();
L_10907c20: /* 10907c20: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907c21: mov esi, ecx */
  esi = ecx;
/* 10907c23: call 0x1090110e */
  esp -= 4; W32(esp, 0x10907c28u); SPILL(); f_1090110e(); if (g_unwind) return; RELOAD();
/* 10907c28: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10907c2d: je 0x10907c3c */
  if (zf) goto L_10907c3c;
L_10907c2f: /* 10907c2f: mov eax, dword ptr [0x10959b34] */
  eax = R32((uint32_t)(0x10959b34u));
/* 10907c34: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10907c36: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10907c38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907c39: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x10907c3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_10907c3c: /* 10907c3c: mov eax, esi */
  eax = esi;
/* 10907c3e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10907c3f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_10907c60(void) {
  LOAD_REGS();
L_10907c60: /* 10907c60: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 10907c62: push 0x1091ba19 */
  { uint32_t v = 0x1091ba19u; esp -= 4; W32(esp, v); }
/* 10907c67: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 10907c6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907c6e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 10907c75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10907c76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907c77: mov esi, ecx */
  esi = ecx;
/* 10907c79: mov dword ptr [esi], 0x10920a30 */
  W32((uint32_t)(esi), 0x10920a30u);
/* 10907c7f: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 10907c82: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10907c84: je 0x10907c94 */
  if (zf) goto L_10907c94;
L_10907c86: /* 10907c86: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907c87: call dword ptr [0x10959f54] */
  esp -= 4; W32(esp, 0x10907c8du); SPILL(); call_ind(R32(0x10959f54u)); if (g_unwind) return; /* KERNEL32!CloseHandle */ RELOAD();
/* 10907c8d: mov dword ptr [esi + 0x40], 0 */
  W32((uint32_t)(esi + 0x40u), 0x0u);
L_10907c94: /* 10907c94: mov ecx, esi */
  ecx = esi;
/* 10907c96: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 10907c9e: call dword ptr [0x10959c60] */
  esp -= 4; W32(esp, 0x10907ca4u); SPILL(); f_4e4552(); if (g_unwind) return; /* Core!??1FArchive@@UAE@XZ */ RELOAD();
/* 10907ca4: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 10907ca8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10907ca9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 10907cb0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10907cb3: ret  */
  esp += 4; SPILL(); return;
}

void f_10907ce0(void) {
  LOAD_REGS();
L_10907ce0: /* 10907ce0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907ce1: mov esi, ecx */
  esi = ecx;
/* 10907ce3: call 0x109014c4 */
  esp -= 4; W32(esp, 0x10907ce8u); SPILL(); f_109014c4(); if (g_unwind) return; RELOAD();
/* 10907ce8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10907ced: je 0x10907cfc */
  if (zf) goto L_10907cfc;
L_10907cef: /* 10907cef: mov eax, dword ptr [0x10959b34] */
  eax = R32((uint32_t)(0x10959b34u));
/* 10907cf4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10907cf6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10907cf8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907cf9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x10907cfcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_10907cfc: /* 10907cfc: mov eax, esi */
  eax = esi;
/* 10907cfe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10907cff: ret 4 */
  esp += 8; SPILL(); return;
}

void f_10907d20(void) {
  LOAD_REGS();
L_10907d20: /* 10907d20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10907d21: mov ebp, esp */
  ebp = esp;
/* 10907d23: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 10907d25: push 0x1091ba39 */
  { uint32_t v = 0x1091ba39u; esp -= 4; W32(esp, v); }
/* 10907d2a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 10907d30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907d31: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 10907d38: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10907d3b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10907d3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907d3d: mov esi, ecx */
  esi = ecx;
/* 10907d3f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10907d40: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 10907d43: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 10907d46: mov dword ptr [esi], 0x10920b38 */
  W32((uint32_t)(esi), 0x10920b38u);
/* 10907d4c: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 10907d4f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10907d51: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 10907d58: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 10907d5c: je 0x10907d63 */
  if (zf) goto L_10907d63;
L_10907d5e: /* 10907d5e: call 0x10901217 */
  esp -= 4; W32(esp, 0x10907d63u); SPILL(); f_10901217(); if (g_unwind) return; RELOAD();
L_10907d63: /* 10907d63: mov ecx, esi */
  ecx = esi;
/* 10907d65: mov dword ptr [esi + 0x40], 0 */
  W32((uint32_t)(esi + 0x40u), 0x0u);
/* 10907d6c: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 10907d73: call dword ptr [0x10959c60] */
  esp -= 4; W32(esp, 0x10907d79u); SPILL(); f_4e4552(); if (g_unwind) return; /* Core!??1FArchive@@UAE@XZ */ RELOAD();
/* 10907d79: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 10907d7c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10907d7d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10907d7e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 10907d85: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10907d86: mov esp, ebp */
  esp = ebp;
/* 10907d88: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10907d89: ret  */
  esp += 4; SPILL(); return;
}

void f_10907d8a(void) {
  LOAD_REGS();
L_10907d8a: /* 10907d8a: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 10907d8d: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 10907d92: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 10907d95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10907d96: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 10907d99: call 0x10918770 */
  esp -= 4; W32(esp, 0x10907d9eu); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_10907d9e(); return;
}

void f_10907d9e(void) {
  LOAD_REGS();
L_10907d9e: /* 10907d9e: push 0x10920d40 */
  { uint32_t v = 0x10920d40u; esp -= 4; W32(esp, v); }
/* 10907da3: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 10907da8: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x10907daeu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 10907dae: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10907db1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10907db3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10907db5: call 0x10918770 */
  esp -= 4; W32(esp, 0x10907dbau); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_10907dba: guest_badaddr(0x10907dba); return;
}

void f_10907df0(void) {
  LOAD_REGS();
L_10907df0: /* 10907df0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10907df1: mov ebp, esp */
  ebp = esp;
/* 10907df3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10907df4: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 10907df7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10907df9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10907dfa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907dfb: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 10907dfe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10907dff: mov edi, dword ptr [0x10959d90] */
  edi = R32((uint32_t)(0x10959d90u));
/* 10907e05: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 10907e08: je 0x10907e5e */
  if (zf) goto L_10907e5e;
L_10907e0a: /* 10907e0a: mov eax, dword ptr [0x10959d60] */
  eax = R32((uint32_t)(0x10959d60u));
/* 10907e0f: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10907e12: je 0x10907e1f */
  if (zf) goto L_10907e1f;
L_10907e14: /* 10907e14: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10907e16: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907e17: call dword ptr [0x10959f5c] */
  esp -= 4; W32(esp, 0x10907e1du); SPILL(); call_ind(R32(0x10959f5cu)); if (g_unwind) return; /* KERNEL32!SetFileAttributesW */ RELOAD();
/* 10907e1d: jmp 0x10907e5e */
  goto L_10907e5e;
L_10907e1f: /* 10907e1f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907e20: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x10907e22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10907e22: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10907e25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10907e27: jne 0x10907e2d */
  if (!zf) goto L_10907e2d;
L_10907e29: /* 10907e29: xor ebx, ebx */
  ebx = 0;
/* 10907e2b: jmp 0x10907e46 */
  goto L_10907e46;
L_10907e2d: /* 10907e2d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907e2e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x10907e30u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10907e30: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10907e33: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10907e36: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10907e39: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10907e3c: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10907e3f: call 0x10918780 */
  esp -= 4; W32(esp, 0x10907e44u); SPILL(); f_10918780(); if (g_unwind) return; RELOAD();
/* 10907e44: mov ebx, esp */
  ebx = esp;
L_10907e46: /* 10907e46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10907e48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907e49: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x10907e4bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10907e4b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907e4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907e4d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10907e4e: call dword ptr [0x10959d8c] */
  esp -= 4; W32(esp, 0x10907e54u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* 10907e54: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10907e57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907e58: call dword ptr [0x10959f58] */
  esp -= 4; W32(esp, 0x10907e5eu); SPILL(); call_ind(R32(0x10959f58u)); if (g_unwind) return; /* KERNEL32!SetFileAttributesA */ RELOAD();
L_10907e5e: /* 10907e5e: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 10907e61: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10907e63: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* 10907e66: jne 0x10907f3f */
  if (!zf) goto L_10907f3f;
L_10907e6c: /* 10907e6c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10907e6e: jne 0x10907f3f */
  if (!zf) goto L_10907f3f;
L_10907e74: /* 10907e74: mov ecx, dword ptr [0x10959d60] */
  ecx = R32((uint32_t)(0x10959d60u));
/* 10907e7a: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10907e7d: je 0x10907e9a */
  if (zf) goto L_10907e9a;
L_10907e7f: /* 10907e7f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 10907e82: xor edx, edx */
  edx = 0;
/* 10907e84: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10907e86: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 10907e89: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 10907e8c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10907e8d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907e8e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907e8f: call dword ptr [0x10959fb8] */
  esp -= 4; W32(esp, 0x10907e95u); SPILL(); call_ind(R32(0x10959fb8u)); if (g_unwind) return; /* KERNEL32!CopyFileW */ RELOAD();
/* 10907e95: jmp 0x10907f26 */
  goto L_10907f26;
L_10907e9a: /* 10907e9a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907e9b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x10907e9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10907e9d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10907ea0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10907ea2: jne 0x10907ea9 */
  if (!zf) goto L_10907ea9;
L_10907ea4: /* 10907ea4: mov dword ptr [ebp + 0x14], eax */
  W32((uint32_t)(ebp + 0x14u), eax);
/* 10907ea7: jmp 0x10907ec3 */
  goto L_10907ec3;
L_10907ea9: /* 10907ea9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907eaa: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x10907eacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10907eac: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10907eaf: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10907eb2: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10907eb5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10907eb8: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10907ebb: call 0x10918780 */
  esp -= 4; W32(esp, 0x10907ec0u); SPILL(); f_10918780(); if (g_unwind) return; RELOAD();
/* 10907ec0: mov dword ptr [ebp + 0x14], esp */
  W32((uint32_t)(ebp + 0x14u), esp);
L_10907ec3: /* 10907ec3: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 10907ec6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10907ec7: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x10907ec9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10907ec9: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10907ecc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10907ece: jne 0x10907ed5 */
  if (!zf) goto L_10907ed5;
L_10907ed0: /* 10907ed0: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 10907ed3: jmp 0x10907eef */
  goto L_10907eef;
L_10907ed5: /* 10907ed5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10907ed6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x10907ed8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10907ed8: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10907edb: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10907ede: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10907ee1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10907ee4: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10907ee7: call 0x10918780 */
  esp -= 4; W32(esp, 0x10907eecu); SPILL(); f_10918780(); if (g_unwind) return; RELOAD();
/* 10907eec: mov dword ptr [ebp + 0xc], esp */
  W32((uint32_t)(ebp + 0xcu), esp);
L_10907eef: /* 10907eef: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 10907ef2: xor ecx, ecx */
  ecx = 0;
/* 10907ef4: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10907ef6: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 10907ef9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10907efa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907efb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x10907efdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10907efd: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 10907f00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907f01: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907f02: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10907f03: call dword ptr [0x10959d8c] */
  esp -= 4; W32(esp, 0x10907f09u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* 10907f09: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10907f0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907f0d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10907f0e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x10907f10u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10907f10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907f11: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 10907f14: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10907f15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907f16: call dword ptr [0x10959d8c] */
  esp -= 4; W32(esp, 0x10907f1cu); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* 10907f1c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10907f1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907f20: call dword ptr [0x10959fbc] */
  esp -= 4; W32(esp, 0x10907f26u); SPILL(); call_ind(R32(0x10959fbcu)); if (g_unwind) return; /* KERNEL32!CopyFileA */ RELOAD();
L_10907f26: /* 10907f26: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10907f28: je 0x10907f2e */
  if (zf) goto L_10907f2e;
L_10907f2a: /* 10907f2a: xor ebx, ebx */
  ebx = 0;
/* 10907f2c: jmp 0x10907f60 */
  goto L_10907f60;
L_10907f2e: /* 10907f2e: mov eax, 1 */
  eax = 0x1u;
/* 10907f33: lea esp, [ebp - 0x10] */
  esp = (uint32_t)(ebp + 0xfffffff0u);
/* 10907f36: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10907f37: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10907f38: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10907f39: mov esp, ebp */
  esp = ebp;
/* 10907f3b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10907f3c: ret 0x1c */
  esp += 32; SPILL(); return;
L_10907f3f: /* 10907f3f: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 10907f42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907f43: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 10907f46: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10907f47: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 10907f4a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10907f4b: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 10907f4e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10907f4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907f50: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10907f51: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 10907f54: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907f55: call 0x109012ad */
  esp -= 4; W32(esp, 0x10907f5au); SPILL(); f_109012ad(); if (g_unwind) return; RELOAD();
/* 10907f5a: mov ebx, eax */
  ebx = eax;
/* 10907f5c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10907f5e: jne 0x10907fcd */
  if (!zf) goto L_10907fcd;
L_10907f60: /* 10907f60: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 10907f63: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10907f65: jne 0x10907fcd */
  if (!zf) goto L_10907fcd;
L_10907f67: /* 10907f67: mov edx, dword ptr [0x10959d60] */
  edx = R32((uint32_t)(0x10959d60u));
/* 10907f6d: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10907f70: je 0x10907f89 */
  if (zf) goto L_10907f89;
L_10907f72: /* 10907f72: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10907f74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907f75: call dword ptr [0x10959f5c] */
  esp -= 4; W32(esp, 0x10907f7bu); SPILL(); call_ind(R32(0x10959f5cu)); if (g_unwind) return; /* KERNEL32!SetFileAttributesW */ RELOAD();
/* 10907f7b: mov eax, ebx */
  eax = ebx;
/* 10907f7d: lea esp, [ebp - 0x10] */
  esp = (uint32_t)(ebp + 0xfffffff0u);
/* 10907f80: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10907f81: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10907f82: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10907f83: mov esp, ebp */
  esp = ebp;
/* 10907f85: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10907f86: ret 0x1c */
  esp += 32; SPILL(); return;
L_10907f89: /* 10907f89: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907f8a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x10907f8cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10907f8c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10907f8f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10907f91: jne 0x10907f98 */
  if (!zf) goto L_10907f98;
L_10907f93: /* 10907f93: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 10907f96: jmp 0x10907fb2 */
  goto L_10907fb2;
L_10907f98: /* 10907f98: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907f99: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x10907f9bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10907f9b: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10907f9e: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10907fa1: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10907fa4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10907fa7: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10907faa: call 0x10918780 */
  esp -= 4; W32(esp, 0x10907fafu); SPILL(); f_10918780(); if (g_unwind) return; RELOAD();
/* 10907faf: mov dword ptr [ebp + 0x10], esp */
  W32((uint32_t)(ebp + 0x10u), esp);
L_10907fb2: /* 10907fb2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10907fb4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907fb5: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x10907fb7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10907fb7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907fb8: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 10907fbb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10907fbc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907fbd: call dword ptr [0x10959d8c] */
  esp -= 4; W32(esp, 0x10907fc3u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* 10907fc3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10907fc6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10907fc7: call dword ptr [0x10959f58] */
  esp -= 4; W32(esp, 0x10907fcdu); SPILL(); call_ind(R32(0x10959f58u)); if (g_unwind) return; /* KERNEL32!SetFileAttributesA */ RELOAD();
L_10907fcd: /* 10907fcd: mov eax, ebx */
  eax = ebx;
/* 10907fcf: lea esp, [ebp - 0x10] */
  esp = (uint32_t)(ebp + 0xfffffff0u);
/* 10907fd2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10907fd3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10907fd4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10907fd5: mov esp, ebp */
  esp = ebp;
/* 10907fd7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10907fd8: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_10908060(void) {
  LOAD_REGS();
L_10908060: /* 10908060: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10908061: mov ebp, esp */
  ebp = esp;
/* 10908063: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 10908065: push 0x1091ba50 */
  { uint32_t v = 0x1091ba50u; esp -= 4; W32(esp, v); }
/* 1090806a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 10908070: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10908071: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 10908078: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090807b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 1090807e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090807f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10908080: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10908081: xor edi, edi */
  edi = 0;
/* 10908083: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10908085: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 10908088: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 1090808b: je 0x109080ad */
  if (zf) goto L_109080ad;
L_1090808d: /* 1090808d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090808e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 10908091: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10908092: call 0x10901460 */
  esp -= 4; W32(esp, 0x10908097u); SPILL(); f_10901460(); if (g_unwind) return; RELOAD();
L_10908097: /* 10908097: lea esp, [ebp - 0x24] */
  esp = (uint32_t)(ebp + 0xffffffdcu);
/* 1090809a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090809d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 109080a4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 109080a5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 109080a6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 109080a7: mov esp, ebp */
  esp = ebp;
/* 109080a9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 109080aa: ret 8 */
  esp += 12; SPILL(); return;
L_109080ad: /* 109080ad: mov ecx, dword ptr [0x10959d60] */
  ecx = R32((uint32_t)(0x10959d60u));
/* 109080b3: cmp dword ptr [ecx], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109080b5: je 0x109080c4 */
  if (zf) goto L_109080c4;
L_109080b7: /* 109080b7: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 109080ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109080bb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 109080bc: call dword ptr [0x10959fb0] */
  esp -= 4; W32(esp, 0x109080c2u); SPILL(); call_ind(R32(0x10959fb0u)); if (g_unwind) return; /* KERNEL32!CreateDirectoryW */ RELOAD();
/* 109080c2: jmp 0x1090810e */
  goto L_1090810e;
L_109080c4: /* 109080c4: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 109080c7: mov ebx, dword ptr [0x10959d90] */
  ebx = R32((uint32_t)(0x10959d90u));
/* 109080cd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109080ce: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x109080d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109080d0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109080d3: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109080d5: je 0x109080f3 */
  if (zf) goto L_109080f3;
L_109080d7: /* 109080d7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109080d8: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x109080dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109080da: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109080dd: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109080e0: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109080e3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109080e6: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 109080e9: call 0x10918780 */
  esp -= 4; W32(esp, 0x109080eeu); SPILL(); f_10918780(); if (g_unwind) return; RELOAD();
/* 109080ee: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 109080f1: mov edi, esp */
  edi = esp;
L_109080f3: /* 109080f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109080f4: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x109080f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109080f6: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109080f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109080fa: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109080fb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109080fc: call dword ptr [0x10959d8c] */
  esp -= 4; W32(esp, 0x10908102u); SPILL(); f_4e267b(); if (g_unwind) return; /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* 10908102: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10908105: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908107: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10908108: call dword ptr [0x10959fb4] */
  esp -= 4; W32(esp, 0x1090810eu); SPILL(); call_ind(R32(0x10959fb4u)); if (g_unwind) return; /* KERNEL32!CreateDirectoryA */ RELOAD();
L_1090810e: /* 1090810e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10908110: jne 0x10908126 */
  if (!zf) goto L_10908126;
L_10908112: /* 10908112: call dword ptr [0x10959f38] */
  esp -= 4; W32(esp, 0x10908118u); SPILL(); call_ind(R32(0x10959f38u)); if (g_unwind) return; /* KERNEL32!GetLastError */ RELOAD();
/* 10908118: cmp eax, 0xb7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xb7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090811d: je 0x10908126 */
  if (zf) goto L_10908126;
L_1090811f: /* 1090811f: xor eax, eax */
  eax = 0;
/* 10908121: jmp 0x10908097 */
  goto L_10908097;
L_10908126: /* 10908126: mov eax, 1 */
  eax = 0x1u;
/* 1090812b: jmp 0x10908097 */
  goto L_10908097;
}

void f_10908130(void) {
  LOAD_REGS();
L_10908130: /* 10908130: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 10908133: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 10908138: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 1090813b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090813c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 1090813f: call 0x10918770 */
  esp -= 4; W32(esp, 0x10908144u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_10908144(); return;
}

void f_10908144(void) {
  LOAD_REGS();
L_10908144: /* 10908144: push 0x10920da0 */
  { uint32_t v = 0x10920da0u; esp -= 4; W32(esp, v); }
/* 10908149: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090814e: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x10908154u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 10908154: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10908157: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908159: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090815b: call 0x10918770 */
  esp -= 4; W32(esp, 0x10908160u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_10908160: guest_badaddr(0x10908160); return;
}

void f_109081c0(void) {
  LOAD_REGS();
L_109081c0: /* 109081c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 109081c1: mov ebp, esp */
  ebp = esp;
/* 109081c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 109081c5: push 0x1091ba60 */
  { uint32_t v = 0x1091ba60u; esp -= 4; W32(esp, v); }
/* 109081ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 109081d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109081d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 109081d8: sub esp, 0x570 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x570u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 109081de: fld qword ptr [0x10920e98] */
  { double v = F64((uint32_t)(0x10920e98u)); FPUSH(v); }
/* 109081e4: xor eax, eax */
  eax = 0;
/* 109081e6: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* 109081e9: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 109081ec: mov eax, dword ptr [0x10959d84] */
  eax = R32((uint32_t)(0x10959d84u));
/* 109081f1: fdiv qword ptr [eax] */
  ST0 = ST0 / (F64((uint32_t)(eax)));
/* 109081f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109081f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109081f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 109081f6: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 109081f9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 109081fc: mov esi, 0x7fffffff */
  esi = 0x7fffffffu;
/* 10908201: mov ebx, 1 */
  ebx = 0x1u;
/* 10908206: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10908207: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
/* 1090820a: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 1090820d: mov dword ptr [ebp - 0x74], 0x20 */
  W32((uint32_t)(ebp + 0xffffff8cu), 0x20u);
/* 10908214: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 10908217: call dword ptr [0x10959fac] */
  esp -= 4; W32(esp, 0x1090821du); SPILL(); call_ind(R32(0x10959facu)); if (g_unwind) return; /* KERNEL32!GlobalMemoryStatus */ RELOAD();
/* 1090821d: mov eax, dword ptr [ebp - 0x6c] */
  eax = R32((uint32_t)(ebp + 0xffffff94u));
/* 10908220: mov edx, dword ptr [0x10959d0c] */
  edx = R32((uint32_t)(0x10959d0cu));
/* 10908226: shr eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 10908229: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090822a: push 0x1092a004 */
  { uint32_t v = 0x1092a004u; esp -= 4; W32(esp, v); }
/* 1090822f: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 10908232: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 10908234: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 10908239: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090823a: call dword ptr [0x10959d54] */
  esp -= 4; W32(esp, 0x10908240u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 10908240: lea ecx, [ebp - 0x150] */
  ecx = (uint32_t)(ebp + 0xfffffeb0u);
/* 10908246: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10908249: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 1090824c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 1090824f: mov ecx, 0xd4 */
  ecx = 0xd4u;
/* 10908254: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 10908257: xor eax, eax */
  eax = 0;
/* 10908259: mov ebx, ecx */
  ebx = ecx;
/* 1090825b: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 1090825e: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 10908261: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 10908263: mov ecx, ebx */
  ecx = ebx;
/* 10908265: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 10908267: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908269: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090826c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090826d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090826f: call 0x1091851c */
  esp -= 4; W32(esp, 0x10908274u); SPILL(); f_1091851c(); if (g_unwind) return; RELOAD();
/* 10908274: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10908276: jge 0x10908298 */
  if ((sf == of)) goto L_10908298;
L_10908278: /* 10908278: mov eax, dword ptr [0x10959d0c] */
  eax = R32((uint32_t)(0x10959d0cu));
/* 1090827d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090827f: push 0x1092a038 */
  { uint32_t v = 0x1092a038u; esp -= 4; W32(esp, v); }
/* 10908284: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 10908289: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090828a: call dword ptr [0x10959d54] */
  esp -= 4; W32(esp, 0x10908290u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 10908290: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10908293: jmp 0x109083c1 */
  goto L_109083c1;
L_10908298: /* 10908298: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 1090829b: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090829d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 109082a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109082a1: push 0x10924c18 */
  { uint32_t v = 0x10924c18u; esp -= 4; W32(esp, v); }
/* 109082a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109082a7: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x109082a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109082a9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 109082ab: jge 0x109082ce */
  if ((sf == of)) goto L_109082ce;
L_109082ad: /* 109082ad: mov edx, dword ptr [0x10959d0c] */
  edx = R32((uint32_t)(0x10959d0cu));
/* 109082b3: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 109082b5: push 0x1092a0a8 */
  { uint32_t v = 0x1092a0a8u; esp -= 4; W32(esp, v); }
/* 109082ba: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 109082bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109082c0: call dword ptr [0x10959d54] */
  esp -= 4; W32(esp, 0x109082c6u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 109082c6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109082c9: jmp 0x109083b8 */
  goto L_109083b8;
L_109082ce: /* 109082ce: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 109082d1: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 109082d4: mov ecx, 0x10 */
  ecx = 0x10u;
/* 109082d9: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 109082dc: xor eax, eax */
  eax = 0;
/* 109082de: mov ebx, ecx */
  ebx = ecx;
/* 109082e0: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 109082e3: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 109082e6: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 109082e8: mov ecx, ebx */
  ecx = ebx;
/* 109082ea: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 109082ec: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 109082ef: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 109082f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109082f3: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 109082f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109082f7: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 109082fa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109082fb: mov dword ptr [ebp - 0x40], 0x10007000 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x10007000u);
/* 10908302: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 10908304: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10908305: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0x10908308u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908308: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090830b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090830d: je 0x1090831b */
  if (zf) goto L_1090831b;
L_1090830f: /* 1090830f: cmp eax, 0x7fffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10908314: jae 0x1090831b */
  if (!cf) goto L_1090831b;
L_10908316: /* 10908316: mov esi, eax */
  esi = eax;
/* 10908318: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
L_1090831b: /* 1090831b: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 1090831e: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 10908321: mov ecx, 0x10 */
  ecx = 0x10u;
/* 10908326: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 10908329: xor eax, eax */
  eax = 0;
/* 1090832b: mov ebx, ecx */
  ebx = ecx;
/* 1090832d: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 10908330: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 10908333: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 10908335: mov ecx, ebx */
  ecx = ebx;
/* 10908337: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 10908339: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1090833c: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 1090833f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10908340: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 10908343: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10908344: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 10908347: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10908348: mov dword ptr [ebp - 0x40], 0x10005000 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x10005000u);
/* 1090834f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908351: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10908352: call dword ptr [ecx + 0x5c] */
  { uint32_t t = R32((uint32_t)(ecx + 0x5cu)); esp -= 4; W32(esp, 0x10908355u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908355: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 10908358: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090835a: je 0x10908365 */
  if (zf) goto L_10908365;
L_1090835c: /* 1090835c: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 1090835e: jbe 0x10908365 */
  if ((cf | zf)) goto L_10908365;
L_10908360: /* 10908360: mov esi, eax */
  esi = eax;
/* 10908362: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
L_10908365: /* 10908365: lea eax, [ebp - 0x40] */
  eax = (uint32_t)(ebp + 0xffffffc0u);
/* 10908368: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 1090836b: mov ecx, 0x10 */
  ecx = 0x10u;
/* 10908370: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 10908373: xor eax, eax */
  eax = 0;
/* 10908375: mov ebx, ecx */
  ebx = ecx;
/* 10908377: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 1090837a: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 1090837d: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 1090837f: mov ecx, ebx */
  ecx = ebx;
/* 10908381: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 10908383: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 10908386: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 10908389: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090838a: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 1090838d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090838e: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 10908391: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10908392: mov dword ptr [ebp - 0x40], 0x10004040 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x10004040u);
/* 10908399: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090839b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090839c: call dword ptr [ecx + 0x5c] */
  { uint32_t t = R32((uint32_t)(ecx + 0x5cu)); esp -= 4; W32(esp, 0x1090839fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090839f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 109083a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109083a4: je 0x109083af */
  if (zf) goto L_109083af;
L_109083a6: /* 109083a6: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 109083a8: jbe 0x109083af */
  if ((cf | zf)) goto L_109083af;
L_109083aa: /* 109083aa: mov esi, eax */
  esi = eax;
/* 109083ac: mov dword ptr [ebp - 0x28], esi */
  W32((uint32_t)(ebp + 0xffffffd8u), esi);
L_109083af: /* 109083af: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 109083b2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109083b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109083b5: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0x109083b8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_109083b8: /* 109083b8: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 109083bb: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 109083bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109083be: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x109083c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_109083c1: /* 109083c1: cmp esi, 0x7fffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7fffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109083c7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 109083ce: je 0x10908409 */
  if (zf) goto L_10908409;
L_109083d0: /* 109083d0: mov eax, esi */
  eax = esi;
/* 109083d2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 109083d3: and edx, 0x3ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 109083d9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109083db: sar eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 109083de: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 109083df: and edx, 0x3ff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 109083e5: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 109083e7: sar eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 10;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 109083ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109083eb: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 109083ee: mov eax, dword ptr [0x10959d0c] */
  eax = R32((uint32_t)(0x10959d0cu));
/* 109083f3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109083f5: push 0x1092a120 */
  { uint32_t v = 0x1092a120u; esp -= 4; W32(esp, v); }
/* 109083fa: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 109083ff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10908400: call dword ptr [0x10959d54] */
  esp -= 4; W32(esp, 0x10908406u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 10908406: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10908409: /* 10908409: push 0xdc */
  { uint32_t v = 0xdcu; esp -= 4; W32(esp, v); }
/* 1090840e: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 10908412: call 0x10918516 */
  esp -= 4; W32(esp, 0x10908417u); SPILL(); f_10918516(); if (g_unwind) return; RELOAD();
/* 10908417: mov esi, eax */
  esi = eax;
/* 10908419: xor ebx, ebx */
  ebx = 0;
/* 1090841b: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090841d: je 0x109084e0 */
  if (zf) goto L_109084e0;
L_10908423: /* 10908423: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 10908425: lea eax, [ebp - 0x150] */
  eax = (uint32_t)(ebp + 0xfffffeb0u);
/* 1090842b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090842c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090842e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090842f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10908430: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0x10908433u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908433: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10908435: jl 0x1090845b */
  if ((sf != of)) goto L_1090845b;
L_10908437: /* 10908437: test dword ptr [ebp - 0x134], 0x10000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffeccu))); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10908441: mov dword ptr [ebp - 0x44], 1 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x1u);
/* 10908448: jne 0x1090844d */
  if (!zf) goto L_1090844d;
L_1090844a: /* 1090844a: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
L_1090844d: /* 1090844d: cmp dword ptr [ebp - 0x94], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff6cu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10908454: jae 0x10908477 */
  if (!cf) goto L_10908477;
L_10908456: /* 10908456: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 10908459: jmp 0x10908477 */
  goto L_10908477;
L_1090845b: /* 1090845b: mov ecx, dword ptr [0x10959d0c] */
  ecx = R32((uint32_t)(0x10959d0cu));
/* 10908461: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908463: push 0x1092a170 */
  { uint32_t v = 0x1092a170u; esp -= 4; W32(esp, v); }
/* 10908468: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 1090846d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090846e: call dword ptr [0x10959d54] */
  esp -= 4; W32(esp, 0x10908474u); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 10908474: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10908477: /* 10908477: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 10908479: push 0x33545844 */
  { uint32_t v = 0x33545844u; esp -= 4; W32(esp, v); }
/* 1090847e: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* 10908480: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10908481: push 0x16 */
  { uint32_t v = 0x16u; esp -= 4; W32(esp, v); }
/* 10908483: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 10908485: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10908486: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10908487: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x1090848au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090848a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090848c: jge 0x1090849d */
  if ((sf == of)) goto L_1090849d;
L_1090848e: /* 1090848e: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 10908491: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 10908492: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 10908494: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 10908496: mov edi, eax */
  edi = eax;
/* 10908498: mov dword ptr [ebp - 0x28], edi */
  W32((uint32_t)(ebp + 0xffffffd8u), edi);
/* 1090849b: jmp 0x109084a0 */
  goto L_109084a0;
L_1090849d: /* 1090849d: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
L_109084a0: /* 109084a0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 109084a2: lea edx, [ebp - 0x57c] */
  edx = (uint32_t)(ebp + 0xfffffa84u);
/* 109084a8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 109084a9: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 109084ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 109084ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109084ad: call dword ptr [ecx + 0x14] */
  { uint32_t t = R32((uint32_t)(ecx + 0x14u)); esp -= 4; W32(esp, 0x109084b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109084b0: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 109084b2: jge 0x109084d8 */
  if ((sf == of)) goto L_109084d8;
L_109084b4: /* 109084b4: lea eax, [ebp - 0x57c] */
  eax = (uint32_t)(ebp + 0xfffffa84u);
/* 109084ba: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 109084bd: mov ecx, 0x42c */
  ecx = 0x42cu;
/* 109084c2: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 109084c5: xor eax, eax */
  eax = 0;
/* 109084c7: mov ebx, ecx */
  ebx = ecx;
/* 109084c9: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 109084cc: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 109084cf: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 109084d1: mov ecx, ebx */
  ecx = ebx;
/* 109084d3: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 109084d5: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
L_109084d8: /* 109084d8: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 109084da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 109084db: call dword ptr [ecx + 8] */
  { uint32_t t = R32((uint32_t)(ecx + 0x8u)); esp -= 4; W32(esp, 0x109084deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109084de: jmp 0x1090853a */
  goto L_1090853a;
L_109084e0: /* 109084e0: mov edx, dword ptr [0x10959cc8] */
  edx = R32((uint32_t)(0x10959cc8u));
/* 109084e6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 109084e8: mov esi, dword ptr [0x10959d54] */
  esi = R32((uint32_t)(0x10959d54u));
/* 109084ee: push 0x1092a1c0 */
  { uint32_t v = 0x1092a1c0u; esp -= 4; W32(esp, v); }
/* 109084f3: push 0x318 */
  { uint32_t v = 0x318u; esp -= 4; W32(esp, v); }
/* 109084f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109084f9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x109084fbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109084fb: mov ecx, dword ptr [0x10959d0c] */
  ecx = R32((uint32_t)(0x10959d0cu));
/* 10908501: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908503: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10908506: push 0x1092a280 */
  { uint32_t v = 0x1092a280u; esp -= 4; W32(esp, v); }
/* 1090850b: push 0x2fa */
  { uint32_t v = 0x2fau; esp -= 4; W32(esp, v); }
/* 10908510: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10908511: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x10908513u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908513: lea eax, [ebp - 0x57c] */
  eax = (uint32_t)(ebp + 0xfffffa84u);
/* 10908519: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090851c: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 1090851f: mov ecx, 0x42c */
  ecx = 0x42cu;
/* 10908524: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 10908527: xor eax, eax */
  eax = 0;
/* 10908529: mov ebx, ecx */
  ebx = ecx;
/* 1090852b: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 1090852e: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 10908531: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 10908533: mov ecx, ebx */
  ecx = ebx;
/* 10908535: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 10908537: mov edi, dword ptr [ebp - 0x28] */
  edi = R32((uint32_t)(ebp + 0xffffffd8u));
L_1090853a: /* 1090853a: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 1090853d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090853f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 10908546: je 0x1090856f */
  if (zf) goto L_1090856f;
L_10908548: /* 10908548: cmp dword ptr [ebp - 0xb8], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff48u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1090854f: jae 0x1090856f */
  if (!cf) goto L_1090856f;
L_10908551: /* 10908551: mov ecx, dword ptr [0x10959d04] */
  ecx = R32((uint32_t)(0x10959d04u));
/* 10908557: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 10908559: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090855b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090855d: push 0x1092a2d8 */
  { uint32_t v = 0x1092a2d8u; esp -= 4; W32(esp, v); }
/* 10908562: push 0x1092a2e4 */
  { uint32_t v = 0x1092a2e4u; esp -= 4; W32(esp, v); }
/* 10908567: push 0x1092a304 */
  { uint32_t v = 0x1092a304u; esp -= 4; W32(esp, v); }
/* 1090856c: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x1090856fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_1090856f: /* 1090856f: cmp edi, 8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10908572: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908574: jge 0x10908817 */
  if ((sf == of)) goto L_10908817;
L_1090857a: /* 1090857a: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 1090857f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908581: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908583: push 0x1092a334 */
  { uint32_t v = 0x1092a334u; esp -= 4; W32(esp, v); }
/* 10908588: push 0x1092a33c */
  { uint32_t v = 0x1092a33cu; esp -= 4; W32(esp, v); }
/* 1090858d: push 0x1092a364 */
  { uint32_t v = 0x1092a364u; esp -= 4; W32(esp, v); }
/* 10908592: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908595u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908595: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 1090859a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090859c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090859e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109085a0: push 0x1092a390 */
  { uint32_t v = 0x1092a390u; esp -= 4; W32(esp, v); }
/* 109085a5: push 0x1092a398 */
  { uint32_t v = 0x1092a398u; esp -= 4; W32(esp, v); }
/* 109085aa: push 0x1092a3c0 */
  { uint32_t v = 0x1092a3c0u; esp -= 4; W32(esp, v); }
/* 109085af: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x109085b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109085b2: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 109085b7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109085b9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 109085bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109085bd: push 0x1092a3ec */
  { uint32_t v = 0x1092a3ecu; esp -= 4; W32(esp, v); }
/* 109085c2: push 0x1092a3fc */
  { uint32_t v = 0x1092a3fcu; esp -= 4; W32(esp, v); }
/* 109085c7: push 0x1092a42c */
  { uint32_t v = 0x1092a42cu; esp -= 4; W32(esp, v); }
/* 109085cc: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x109085cfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109085cf: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 109085d4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109085d6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 109085d8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109085da: push 0x1092a458 */
  { uint32_t v = 0x1092a458u; esp -= 4; W32(esp, v); }
/* 109085df: push 0x1092a468 */
  { uint32_t v = 0x1092a468u; esp -= 4; W32(esp, v); }
/* 109085e4: push 0x1092a494 */
  { uint32_t v = 0x1092a494u; esp -= 4; W32(esp, v); }
/* 109085e9: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x109085ecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109085ec: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 109085f1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109085f3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 109085f5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109085f7: push 0x1092a4c0 */
  { uint32_t v = 0x1092a4c0u; esp -= 4; W32(esp, v); }
/* 109085fc: push 0x1092a4d0 */
  { uint32_t v = 0x1092a4d0u; esp -= 4; W32(esp, v); }
/* 10908601: push 0x1092a500 */
  { uint32_t v = 0x1092a500u; esp -= 4; W32(esp, v); }
/* 10908606: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908609u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908609: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 1090860e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908610: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908612: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908614: push 0x1092a52c */
  { uint32_t v = 0x1092a52cu; esp -= 4; W32(esp, v); }
/* 10908619: push 0x1092a53c */
  { uint32_t v = 0x1092a53cu; esp -= 4; W32(esp, v); }
/* 1090861e: push 0x1092a56c */
  { uint32_t v = 0x1092a56cu; esp -= 4; W32(esp, v); }
/* 10908623: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908626u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908626: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 1090862b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090862d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090862f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908631: push 0x1092a598 */
  { uint32_t v = 0x1092a598u; esp -= 4; W32(esp, v); }
/* 10908636: push 0x1092a5a0 */
  { uint32_t v = 0x1092a5a0u; esp -= 4; W32(esp, v); }
/* 1090863b: push 0x1092a5c8 */
  { uint32_t v = 0x1092a5c8u; esp -= 4; W32(esp, v); }
/* 10908640: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908643u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908643: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908648: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090864a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090864c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090864e: push 0x1092a5f4 */
  { uint32_t v = 0x1092a5f4u; esp -= 4; W32(esp, v); }
/* 10908653: push 0x1092a604 */
  { uint32_t v = 0x1092a604u; esp -= 4; W32(esp, v); }
/* 10908658: push 0x1092a634 */
  { uint32_t v = 0x1092a634u; esp -= 4; W32(esp, v); }
/* 1090865d: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908660u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908660: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908665: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908667: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908669: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090866b: push 0x1092a660 */
  { uint32_t v = 0x1092a660u; esp -= 4; W32(esp, v); }
/* 10908670: push 0x1092a670 */
  { uint32_t v = 0x1092a670u; esp -= 4; W32(esp, v); }
/* 10908675: push 0x1092a69c */
  { uint32_t v = 0x1092a69cu; esp -= 4; W32(esp, v); }
/* 1090867a: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x1090867du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090867d: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908682: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908684: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908686: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908688: push 0x1092a6c8 */
  { uint32_t v = 0x1092a6c8u; esp -= 4; W32(esp, v); }
/* 1090868d: push 0x1092a6d4 */
  { uint32_t v = 0x1092a6d4u; esp -= 4; W32(esp, v); }
/* 10908692: push 0x1092a6e4 */
  { uint32_t v = 0x1092a6e4u; esp -= 4; W32(esp, v); }
/* 10908697: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x1090869au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090869a: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 1090869f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109086a1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 109086a3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109086a5: push 0x1092a710 */
  { uint32_t v = 0x1092a710u; esp -= 4; W32(esp, v); }
/* 109086aa: push 0x1092a71c */
  { uint32_t v = 0x1092a71cu; esp -= 4; W32(esp, v); }
/* 109086af: push 0x1092a734 */
  { uint32_t v = 0x1092a734u; esp -= 4; W32(esp, v); }
/* 109086b4: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x109086b7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109086b7: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 109086bc: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109086be: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 109086c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109086c2: push 0x1092a760 */
  { uint32_t v = 0x1092a760u; esp -= 4; W32(esp, v); }
/* 109086c7: push 0x1092a76c */
  { uint32_t v = 0x1092a76cu; esp -= 4; W32(esp, v); }
/* 109086cc: push 0x1092a77c */
  { uint32_t v = 0x1092a77cu; esp -= 4; W32(esp, v); }
/* 109086d1: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x109086d4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109086d4: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 109086d9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109086db: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 109086dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109086df: push 0x1092a7a8 */
  { uint32_t v = 0x1092a7a8u; esp -= 4; W32(esp, v); }
/* 109086e4: push 0x1092a7b4 */
  { uint32_t v = 0x1092a7b4u; esp -= 4; W32(esp, v); }
/* 109086e9: push 0x1092a7cc */
  { uint32_t v = 0x1092a7ccu; esp -= 4; W32(esp, v); }
/* 109086ee: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x109086f1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109086f1: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 109086f6: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109086f8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 109086fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109086fc: push 0x1092a7f8 */
  { uint32_t v = 0x1092a7f8u; esp -= 4; W32(esp, v); }
/* 10908701: push 0x1092a804 */
  { uint32_t v = 0x1092a804u; esp -= 4; W32(esp, v); }
/* 10908706: push 0x1092a820 */
  { uint32_t v = 0x1092a820u; esp -= 4; W32(esp, v); }
/* 1090870b: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x1090870eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090870e: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908713: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908715: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908717: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908719: push 0x1092a850 */
  { uint32_t v = 0x1092a850u; esp -= 4; W32(esp, v); }
/* 1090871e: push 0x1092a85c */
  { uint32_t v = 0x1092a85cu; esp -= 4; W32(esp, v); }
/* 10908723: push 0x1092a874 */
  { uint32_t v = 0x1092a874u; esp -= 4; W32(esp, v); }
/* 10908728: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x1090872bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090872b: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908730: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908732: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908734: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908736: push 0x1092a8a4 */
  { uint32_t v = 0x1092a8a4u; esp -= 4; W32(esp, v); }
/* 1090873b: push 0x1092a8b0 */
  { uint32_t v = 0x1092a8b0u; esp -= 4; W32(esp, v); }
/* 10908740: push 0x1092a8d4 */
  { uint32_t v = 0x1092a8d4u; esp -= 4; W32(esp, v); }
/* 10908745: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908748u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908748: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 1090874d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090874f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908751: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908753: push 0x1092a904 */
  { uint32_t v = 0x1092a904u; esp -= 4; W32(esp, v); }
/* 10908758: push 0x1092a910 */
  { uint32_t v = 0x1092a910u; esp -= 4; W32(esp, v); }
/* 1090875d: push 0x1092a93c */
  { uint32_t v = 0x1092a93cu; esp -= 4; W32(esp, v); }
/* 10908762: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908765u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908765: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 1090876a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090876c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090876e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908770: push 0x1092a96c */
  { uint32_t v = 0x1092a96cu; esp -= 4; W32(esp, v); }
/* 10908775: push 0x1092a978 */
  { uint32_t v = 0x1092a978u; esp -= 4; W32(esp, v); }
/* 1090877a: push 0x1092a98c */
  { uint32_t v = 0x1092a98cu; esp -= 4; W32(esp, v); }
/* 1090877f: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908782u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908782: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908787: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908789: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090878b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090878d: push 0x1092a9bc */
  { uint32_t v = 0x1092a9bcu; esp -= 4; W32(esp, v); }
/* 10908792: push 0x1092a9c8 */
  { uint32_t v = 0x1092a9c8u; esp -= 4; W32(esp, v); }
/* 10908797: push 0x1092a9ec */
  { uint32_t v = 0x1092a9ecu; esp -= 4; W32(esp, v); }
/* 1090879c: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x1090879fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090879f: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 109087a4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109087a6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 109087a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109087aa: push 0x1092aa1c */
  { uint32_t v = 0x1092aa1cu; esp -= 4; W32(esp, v); }
/* 109087af: push 0x1092aa28 */
  { uint32_t v = 0x1092aa28u; esp -= 4; W32(esp, v); }
/* 109087b4: push 0x1092aa48 */
  { uint32_t v = 0x1092aa48u; esp -= 4; W32(esp, v); }
/* 109087b9: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x109087bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109087bc: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 109087c1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109087c3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 109087c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109087c7: push 0x1092aa78 */
  { uint32_t v = 0x1092aa78u; esp -= 4; W32(esp, v); }
/* 109087cc: push 0x1092aa84 */
  { uint32_t v = 0x1092aa84u; esp -= 4; W32(esp, v); }
/* 109087d1: push 0x1092aaa0 */
  { uint32_t v = 0x1092aaa0u; esp -= 4; W32(esp, v); }
/* 109087d6: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x109087d9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109087d9: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 109087de: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109087e0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 109087e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109087e4: push 0x1092aacc */
  { uint32_t v = 0x1092aaccu; esp -= 4; W32(esp, v); }
/* 109087e9: push 0x1092aad8 */
  { uint32_t v = 0x1092aad8u; esp -= 4; W32(esp, v); }
/* 109087ee: push 0x1092aaf8 */
  { uint32_t v = 0x1092aaf8u; esp -= 4; W32(esp, v); }
/* 109087f3: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x109087f6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109087f6: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 109087fb: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109087fd: mov eax, dword ptr [0x10959c50] */
  eax = R32((uint32_t)(0x10959c50u));
/* 10908802: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10908803: push 0x1092ab24 */
  { uint32_t v = 0x1092ab24u; esp -= 4; W32(esp, v); }
/* 10908808: push 0x1092ab30 */
  { uint32_t v = 0x1092ab30u; esp -= 4; W32(esp, v); }
/* 1090880d: push 0x1092ab50 */
  { uint32_t v = 0x1092ab50u; esp -= 4; W32(esp, v); }
/* 10908812: jmp 0x10908fa9 */
  goto L_10908fa9;
L_10908817: /* 10908817: cmp edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090881a: jg 0x10908abe */
  if ((!zf && sf == of)) goto L_10908abe;
L_10908820: /* 10908820: mov ecx, dword ptr [0x10959d04] */
  ecx = R32((uint32_t)(0x10959d04u));
/* 10908826: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 10908828: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090882a: push 0x1092ab7c */
  { uint32_t v = 0x1092ab7cu; esp -= 4; W32(esp, v); }
/* 1090882f: push 0x1092ab84 */
  { uint32_t v = 0x1092ab84u; esp -= 4; W32(esp, v); }
/* 10908834: push 0x1092abac */
  { uint32_t v = 0x1092abacu; esp -= 4; W32(esp, v); }
/* 10908839: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x1090883cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090883c: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908841: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908843: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908845: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908847: push 0x1092abd8 */
  { uint32_t v = 0x1092abd8u; esp -= 4; W32(esp, v); }
/* 1090884c: push 0x1092abe0 */
  { uint32_t v = 0x1092abe0u; esp -= 4; W32(esp, v); }
/* 10908851: push 0x1092ac08 */
  { uint32_t v = 0x1092ac08u; esp -= 4; W32(esp, v); }
/* 10908856: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908859u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908859: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 1090885e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908860: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908862: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908864: push 0x1092ac34 */
  { uint32_t v = 0x1092ac34u; esp -= 4; W32(esp, v); }
/* 10908869: push 0x1092ac44 */
  { uint32_t v = 0x1092ac44u; esp -= 4; W32(esp, v); }
/* 1090886e: push 0x1092ac74 */
  { uint32_t v = 0x1092ac74u; esp -= 4; W32(esp, v); }
/* 10908873: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908876u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908876: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 1090887b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090887d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090887f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908881: push 0x1092aca0 */
  { uint32_t v = 0x1092aca0u; esp -= 4; W32(esp, v); }
/* 10908886: push 0x1092aca8 */
  { uint32_t v = 0x1092aca8u; esp -= 4; W32(esp, v); }
/* 1090888b: push 0x1092acd4 */
  { uint32_t v = 0x1092acd4u; esp -= 4; W32(esp, v); }
/* 10908890: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908893u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908893: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908898: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090889a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090889c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090889e: push 0x1092ad00 */
  { uint32_t v = 0x1092ad00u; esp -= 4; W32(esp, v); }
/* 109088a3: push 0x1092ad08 */
  { uint32_t v = 0x1092ad08u; esp -= 4; W32(esp, v); }
/* 109088a8: push 0x1092ad38 */
  { uint32_t v = 0x1092ad38u; esp -= 4; W32(esp, v); }
/* 109088ad: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x109088b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109088b0: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 109088b5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109088b7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 109088b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109088bb: push 0x1092ad64 */
  { uint32_t v = 0x1092ad64u; esp -= 4; W32(esp, v); }
/* 109088c0: push 0x1092ad6c */
  { uint32_t v = 0x1092ad6cu; esp -= 4; W32(esp, v); }
/* 109088c5: push 0x1092ad9c */
  { uint32_t v = 0x1092ad9cu; esp -= 4; W32(esp, v); }
/* 109088ca: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x109088cdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109088cd: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 109088d2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109088d4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 109088d6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109088d8: push 0x1092adc8 */
  { uint32_t v = 0x1092adc8u; esp -= 4; W32(esp, v); }
/* 109088dd: push 0x1092add8 */
  { uint32_t v = 0x1092add8u; esp -= 4; W32(esp, v); }
/* 109088e2: push 0x1092ae00 */
  { uint32_t v = 0x1092ae00u; esp -= 4; W32(esp, v); }
/* 109088e7: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x109088eau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109088ea: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 109088ef: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109088f1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 109088f3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109088f5: push 0x1092ae2c */
  { uint32_t v = 0x1092ae2cu; esp -= 4; W32(esp, v); }
/* 109088fa: push 0x1092ae34 */
  { uint32_t v = 0x1092ae34u; esp -= 4; W32(esp, v); }
/* 109088ff: push 0x1092ae64 */
  { uint32_t v = 0x1092ae64u; esp -= 4; W32(esp, v); }
/* 10908904: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908907u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908907: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 1090890c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090890e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908910: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908912: push 0x1092ae90 */
  { uint32_t v = 0x1092ae90u; esp -= 4; W32(esp, v); }
/* 10908917: push 0x1092ae98 */
  { uint32_t v = 0x1092ae98u; esp -= 4; W32(esp, v); }
/* 1090891c: push 0x1092aec4 */
  { uint32_t v = 0x1092aec4u; esp -= 4; W32(esp, v); }
/* 10908921: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908924u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908924: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908929: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090892b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090892d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090892f: push 0x1092aef0 */
  { uint32_t v = 0x1092aef0u; esp -= 4; W32(esp, v); }
/* 10908934: push 0x1092aefc */
  { uint32_t v = 0x1092aefcu; esp -= 4; W32(esp, v); }
/* 10908939: push 0x1092af0c */
  { uint32_t v = 0x1092af0cu; esp -= 4; W32(esp, v); }
/* 1090893e: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908941u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908941: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908946: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908948: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090894a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090894c: push 0x1092af38 */
  { uint32_t v = 0x1092af38u; esp -= 4; W32(esp, v); }
/* 10908951: push 0x1092af44 */
  { uint32_t v = 0x1092af44u; esp -= 4; W32(esp, v); }
/* 10908956: push 0x1092af5c */
  { uint32_t v = 0x1092af5cu; esp -= 4; W32(esp, v); }
/* 1090895b: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x1090895eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090895e: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908963: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908965: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908967: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908969: push 0x1092af88 */
  { uint32_t v = 0x1092af88u; esp -= 4; W32(esp, v); }
/* 1090896e: push 0x1092af94 */
  { uint32_t v = 0x1092af94u; esp -= 4; W32(esp, v); }
/* 10908973: push 0x1092afa4 */
  { uint32_t v = 0x1092afa4u; esp -= 4; W32(esp, v); }
/* 10908978: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x1090897bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090897b: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908980: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908982: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908984: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908986: push 0x1092afd0 */
  { uint32_t v = 0x1092afd0u; esp -= 4; W32(esp, v); }
/* 1090898b: push 0x1092afdc */
  { uint32_t v = 0x1092afdcu; esp -= 4; W32(esp, v); }
/* 10908990: push 0x1092aff4 */
  { uint32_t v = 0x1092aff4u; esp -= 4; W32(esp, v); }
/* 10908995: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908998u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908998: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 1090899d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090899f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 109089a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109089a3: push 0x1092b020 */
  { uint32_t v = 0x1092b020u; esp -= 4; W32(esp, v); }
/* 109089a8: push 0x1092b02c */
  { uint32_t v = 0x1092b02cu; esp -= 4; W32(esp, v); }
/* 109089ad: push 0x1092b048 */
  { uint32_t v = 0x1092b048u; esp -= 4; W32(esp, v); }
/* 109089b2: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x109089b5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109089b5: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 109089ba: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109089bc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 109089be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109089c0: push 0x1092b078 */
  { uint32_t v = 0x1092b078u; esp -= 4; W32(esp, v); }
/* 109089c5: push 0x1092b084 */
  { uint32_t v = 0x1092b084u; esp -= 4; W32(esp, v); }
/* 109089ca: push 0x1092b09c */
  { uint32_t v = 0x1092b09cu; esp -= 4; W32(esp, v); }
/* 109089cf: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x109089d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109089d2: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 109089d7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109089d9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 109089db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109089dd: push 0x1092b0cc */
  { uint32_t v = 0x1092b0ccu; esp -= 4; W32(esp, v); }
/* 109089e2: push 0x1092b0d8 */
  { uint32_t v = 0x1092b0d8u; esp -= 4; W32(esp, v); }
/* 109089e7: push 0x1092b0fc */
  { uint32_t v = 0x1092b0fcu; esp -= 4; W32(esp, v); }
/* 109089ec: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x109089efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109089ef: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 109089f4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109089f6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 109089f8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109089fa: push 0x1092b12c */
  { uint32_t v = 0x1092b12cu; esp -= 4; W32(esp, v); }
/* 109089ff: push 0x1092b138 */
  { uint32_t v = 0x1092b138u; esp -= 4; W32(esp, v); }
/* 10908a04: push 0x1092b164 */
  { uint32_t v = 0x1092b164u; esp -= 4; W32(esp, v); }
/* 10908a09: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908a0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908a0c: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908a11: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908a13: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908a15: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908a17: push 0x1092b194 */
  { uint32_t v = 0x1092b194u; esp -= 4; W32(esp, v); }
/* 10908a1c: push 0x1092b1a0 */
  { uint32_t v = 0x1092b1a0u; esp -= 4; W32(esp, v); }
/* 10908a21: push 0x1092b1b4 */
  { uint32_t v = 0x1092b1b4u; esp -= 4; W32(esp, v); }
/* 10908a26: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908a29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908a29: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908a2e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908a30: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908a32: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908a34: push 0x1092b1e4 */
  { uint32_t v = 0x1092b1e4u; esp -= 4; W32(esp, v); }
/* 10908a39: push 0x1092b1f0 */
  { uint32_t v = 0x1092b1f0u; esp -= 4; W32(esp, v); }
/* 10908a3e: push 0x1092b214 */
  { uint32_t v = 0x1092b214u; esp -= 4; W32(esp, v); }
/* 10908a43: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908a46u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908a46: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908a4b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908a4d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908a4f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908a51: push 0x1092b244 */
  { uint32_t v = 0x1092b244u; esp -= 4; W32(esp, v); }
/* 10908a56: push 0x1092b250 */
  { uint32_t v = 0x1092b250u; esp -= 4; W32(esp, v); }
/* 10908a5b: push 0x1092b270 */
  { uint32_t v = 0x1092b270u; esp -= 4; W32(esp, v); }
/* 10908a60: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908a63u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908a63: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908a68: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908a6a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908a6c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908a6e: push 0x1092b2a0 */
  { uint32_t v = 0x1092b2a0u; esp -= 4; W32(esp, v); }
/* 10908a73: push 0x1092b2ac */
  { uint32_t v = 0x1092b2acu; esp -= 4; W32(esp, v); }
/* 10908a78: push 0x1092b2c8 */
  { uint32_t v = 0x1092b2c8u; esp -= 4; W32(esp, v); }
/* 10908a7d: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908a80u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908a80: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908a85: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908a87: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908a89: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908a8b: push 0x1092b2f4 */
  { uint32_t v = 0x1092b2f4u; esp -= 4; W32(esp, v); }
/* 10908a90: push 0x1092b300 */
  { uint32_t v = 0x1092b300u; esp -= 4; W32(esp, v); }
/* 10908a95: push 0x1092b320 */
  { uint32_t v = 0x1092b320u; esp -= 4; W32(esp, v); }
/* 10908a9a: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908a9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908a9d: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908aa2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908aa4: mov eax, dword ptr [0x10959c50] */
  eax = R32((uint32_t)(0x10959c50u));
/* 10908aa9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10908aaa: push 0x1092b34c */
  { uint32_t v = 0x1092b34cu; esp -= 4; W32(esp, v); }
/* 10908aaf: push 0x1092b358 */
  { uint32_t v = 0x1092b358u; esp -= 4; W32(esp, v); }
/* 10908ab4: push 0x1092b378 */
  { uint32_t v = 0x1092b378u; esp -= 4; W32(esp, v); }
/* 10908ab9: jmp 0x10908fa9 */
  goto L_10908fa9;
L_10908abe: /* 10908abe: cmp edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10908ac1: jg 0x10908c38 */
  if ((!zf && sf == of)) goto L_10908c38;
L_10908ac7: /* 10908ac7: mov ecx, dword ptr [0x10959d04] */
  ecx = R32((uint32_t)(0x10959d04u));
/* 10908acd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 10908acf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908ad1: push 0x1092b3a4 */
  { uint32_t v = 0x1092b3a4u; esp -= 4; W32(esp, v); }
/* 10908ad6: push 0x1092b3b4 */
  { uint32_t v = 0x1092b3b4u; esp -= 4; W32(esp, v); }
/* 10908adb: push 0x1092b3e4 */
  { uint32_t v = 0x1092b3e4u; esp -= 4; W32(esp, v); }
/* 10908ae0: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908ae3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908ae3: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908ae8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908aea: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908aec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908aee: push 0x1092b410 */
  { uint32_t v = 0x1092b410u; esp -= 4; W32(esp, v); }
/* 10908af3: push 0x1092b41c */
  { uint32_t v = 0x1092b41cu; esp -= 4; W32(esp, v); }
/* 10908af8: push 0x1092b448 */
  { uint32_t v = 0x1092b448u; esp -= 4; W32(esp, v); }
/* 10908afd: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908b00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908b00: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908b05: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908b07: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908b09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908b0b: push 0x1092b474 */
  { uint32_t v = 0x1092b474u; esp -= 4; W32(esp, v); }
/* 10908b10: push 0x1092b480 */
  { uint32_t v = 0x1092b480u; esp -= 4; W32(esp, v); }
/* 10908b15: push 0x1092b4b0 */
  { uint32_t v = 0x1092b4b0u; esp -= 4; W32(esp, v); }
/* 10908b1a: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908b1du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908b1d: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908b22: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908b24: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908b26: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908b28: push 0x1092b4dc */
  { uint32_t v = 0x1092b4dcu; esp -= 4; W32(esp, v); }
/* 10908b2d: push 0x1092b4e4 */
  { uint32_t v = 0x1092b4e4u; esp -= 4; W32(esp, v); }
/* 10908b32: push 0x1092b514 */
  { uint32_t v = 0x1092b514u; esp -= 4; W32(esp, v); }
/* 10908b37: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908b3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908b3a: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908b3f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908b41: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908b43: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908b45: push 0x1092b540 */
  { uint32_t v = 0x1092b540u; esp -= 4; W32(esp, v); }
/* 10908b4a: push 0x1092b548 */
  { uint32_t v = 0x1092b548u; esp -= 4; W32(esp, v); }
/* 10908b4f: push 0x1092b570 */
  { uint32_t v = 0x1092b570u; esp -= 4; W32(esp, v); }
/* 10908b54: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908b57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908b57: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908b5c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908b5e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908b60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908b62: push 0x1092b59c */
  { uint32_t v = 0x1092b59cu; esp -= 4; W32(esp, v); }
/* 10908b67: push 0x1092b5a8 */
  { uint32_t v = 0x1092b5a8u; esp -= 4; W32(esp, v); }
/* 10908b6c: push 0x1092b5d8 */
  { uint32_t v = 0x1092b5d8u; esp -= 4; W32(esp, v); }
/* 10908b71: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908b74u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908b74: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908b79: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908b7b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908b7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908b7f: push 0x1092b604 */
  { uint32_t v = 0x1092b604u; esp -= 4; W32(esp, v); }
/* 10908b84: push 0x1092b610 */
  { uint32_t v = 0x1092b610u; esp -= 4; W32(esp, v); }
/* 10908b89: push 0x1092b63c */
  { uint32_t v = 0x1092b63cu; esp -= 4; W32(esp, v); }
/* 10908b8e: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908b91u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908b91: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908b96: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908b98: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908b9a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908b9c: push 0x1092b668 */
  { uint32_t v = 0x1092b668u; esp -= 4; W32(esp, v); }
/* 10908ba1: push 0x1092b674 */
  { uint32_t v = 0x1092b674u; esp -= 4; W32(esp, v); }
/* 10908ba6: push 0x1092b68c */
  { uint32_t v = 0x1092b68cu; esp -= 4; W32(esp, v); }
/* 10908bab: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908baeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908bae: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908bb3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908bb5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908bb7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908bb9: push 0x1092b6b8 */
  { uint32_t v = 0x1092b6b8u; esp -= 4; W32(esp, v); }
/* 10908bbe: push 0x1092b6c4 */
  { uint32_t v = 0x1092b6c4u; esp -= 4; W32(esp, v); }
/* 10908bc3: push 0x1092b6e0 */
  { uint32_t v = 0x1092b6e0u; esp -= 4; W32(esp, v); }
/* 10908bc8: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908bcbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908bcb: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908bd0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908bd2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908bd4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908bd6: push 0x1092b710 */
  { uint32_t v = 0x1092b710u; esp -= 4; W32(esp, v); }
/* 10908bdb: push 0x1092b71c */
  { uint32_t v = 0x1092b71cu; esp -= 4; W32(esp, v); }
/* 10908be0: push 0x1092b740 */
  { uint32_t v = 0x1092b740u; esp -= 4; W32(esp, v); }
/* 10908be5: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908be8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908be8: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908bed: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908bef: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908bf1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908bf3: push 0x1092b770 */
  { uint32_t v = 0x1092b770u; esp -= 4; W32(esp, v); }
/* 10908bf8: push 0x1092b77c */
  { uint32_t v = 0x1092b77cu; esp -= 4; W32(esp, v); }
/* 10908bfd: push 0x1092b7a8 */
  { uint32_t v = 0x1092b7a8u; esp -= 4; W32(esp, v); }
/* 10908c02: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908c05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908c05: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908c0a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908c0c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908c0e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908c10: push 0x1092b7d8 */
  { uint32_t v = 0x1092b7d8u; esp -= 4; W32(esp, v); }
/* 10908c15: push 0x1092b7e4 */
  { uint32_t v = 0x1092b7e4u; esp -= 4; W32(esp, v); }
/* 10908c1a: push 0x1092b7f8 */
  { uint32_t v = 0x1092b7f8u; esp -= 4; W32(esp, v); }
/* 10908c1f: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908c22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908c22: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908c24: push 0x1092b828 */
  { uint32_t v = 0x1092b828u; esp -= 4; W32(esp, v); }
/* 10908c29: push 0x1092b834 */
  { uint32_t v = 0x1092b834u; esp -= 4; W32(esp, v); }
/* 10908c2e: push 0x1092b854 */
  { uint32_t v = 0x1092b854u; esp -= 4; W32(esp, v); }
/* 10908c33: jmp 0x10908fa2 */
  goto L_10908fa2;
L_10908c38: /* 10908c38: cmp edi, 0x40 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10908c3b: jg 0x10908d3d */
  if ((!zf && sf == of)) goto L_10908d3d;
L_10908c41: /* 10908c41: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908c46: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908c48: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908c4a: push 0x1092b884 */
  { uint32_t v = 0x1092b884u; esp -= 4; W32(esp, v); }
/* 10908c4f: push 0x1092b894 */
  { uint32_t v = 0x1092b894u; esp -= 4; W32(esp, v); }
/* 10908c54: push 0x1092b8c4 */
  { uint32_t v = 0x1092b8c4u; esp -= 4; W32(esp, v); }
/* 10908c59: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908c5cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908c5c: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908c61: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908c63: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908c65: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908c67: push 0x1092b8f0 */
  { uint32_t v = 0x1092b8f0u; esp -= 4; W32(esp, v); }
/* 10908c6c: push 0x1092b900 */
  { uint32_t v = 0x1092b900u; esp -= 4; W32(esp, v); }
/* 10908c71: push 0x1092b92c */
  { uint32_t v = 0x1092b92cu; esp -= 4; W32(esp, v); }
/* 10908c76: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908c79u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908c79: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908c7e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908c80: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908c82: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908c84: push 0x1092b958 */
  { uint32_t v = 0x1092b958u; esp -= 4; W32(esp, v); }
/* 10908c89: push 0x1092b968 */
  { uint32_t v = 0x1092b968u; esp -= 4; W32(esp, v); }
/* 10908c8e: push 0x1092b998 */
  { uint32_t v = 0x1092b998u; esp -= 4; W32(esp, v); }
/* 10908c93: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908c96u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908c96: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908c9b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908c9d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908c9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908ca1: push 0x1092b9c4 */
  { uint32_t v = 0x1092b9c4u; esp -= 4; W32(esp, v); }
/* 10908ca6: push 0x1092b9d0 */
  { uint32_t v = 0x1092b9d0u; esp -= 4; W32(esp, v); }
/* 10908cab: push 0x1092ba00 */
  { uint32_t v = 0x1092ba00u; esp -= 4; W32(esp, v); }
/* 10908cb0: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908cb3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908cb3: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908cb8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908cba: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908cbc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908cbe: push 0x1092ba2c */
  { uint32_t v = 0x1092ba2cu; esp -= 4; W32(esp, v); }
/* 10908cc3: push 0x1092ba3c */
  { uint32_t v = 0x1092ba3cu; esp -= 4; W32(esp, v); }
/* 10908cc8: push 0x1092ba64 */
  { uint32_t v = 0x1092ba64u; esp -= 4; W32(esp, v); }
/* 10908ccd: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908cd0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908cd0: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908cd5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908cd7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908cd9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908cdb: push 0x1092ba90 */
  { uint32_t v = 0x1092ba90u; esp -= 4; W32(esp, v); }
/* 10908ce0: push 0x1092ba9c */
  { uint32_t v = 0x1092ba9cu; esp -= 4; W32(esp, v); }
/* 10908ce5: push 0x1092bacc */
  { uint32_t v = 0x1092baccu; esp -= 4; W32(esp, v); }
/* 10908cea: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908cedu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908ced: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908cf2: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908cf4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908cf6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908cf8: push 0x1092baf8 */
  { uint32_t v = 0x1092baf8u; esp -= 4; W32(esp, v); }
/* 10908cfd: push 0x1092bb08 */
  { uint32_t v = 0x1092bb08u; esp -= 4; W32(esp, v); }
/* 10908d02: push 0x1092bb34 */
  { uint32_t v = 0x1092bb34u; esp -= 4; W32(esp, v); }
/* 10908d07: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908d0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908d0a: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908d0f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908d11: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908d13: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908d15: push 0x1092bb60 */
  { uint32_t v = 0x1092bb60u; esp -= 4; W32(esp, v); }
/* 10908d1a: push 0x1092bb6c */
  { uint32_t v = 0x1092bb6cu; esp -= 4; W32(esp, v); }
/* 10908d1f: push 0x1092bb88 */
  { uint32_t v = 0x1092bb88u; esp -= 4; W32(esp, v); }
/* 10908d24: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908d27u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908d27: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908d29: push 0x1092bbb8 */
  { uint32_t v = 0x1092bbb8u; esp -= 4; W32(esp, v); }
/* 10908d2e: push 0x1092bbc4 */
  { uint32_t v = 0x1092bbc4u; esp -= 4; W32(esp, v); }
/* 10908d33: push 0x1092bbf0 */
  { uint32_t v = 0x1092bbf0u; esp -= 4; W32(esp, v); }
/* 10908d38: jmp 0x10908fa2 */
  goto L_10908fa2;
L_10908d3d: /* 10908d3d: cmp dword ptr [ebp - 0x48], 0x80 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb8u))); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10908d44: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908d49: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908d4b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908d4d: jg 0x10908e0c */
  if ((!zf && sf == of)) goto L_10908e0c;
L_10908d53: /* 10908d53: push 0x1092bc20 */
  { uint32_t v = 0x1092bc20u; esp -= 4; W32(esp, v); }
/* 10908d58: push 0x1092bc30 */
  { uint32_t v = 0x1092bc30u; esp -= 4; W32(esp, v); }
/* 10908d5d: push 0x1092bc60 */
  { uint32_t v = 0x1092bc60u; esp -= 4; W32(esp, v); }
/* 10908d62: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908d65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908d65: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908d6a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908d6c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908d6e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908d70: push 0x1092bc8c */
  { uint32_t v = 0x1092bc8cu; esp -= 4; W32(esp, v); }
/* 10908d75: push 0x1092bc9c */
  { uint32_t v = 0x1092bc9cu; esp -= 4; W32(esp, v); }
/* 10908d7a: push 0x1092bcc8 */
  { uint32_t v = 0x1092bcc8u; esp -= 4; W32(esp, v); }
/* 10908d7f: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908d82u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908d82: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908d87: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908d89: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908d8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908d8d: push 0x1092bcf4 */
  { uint32_t v = 0x1092bcf4u; esp -= 4; W32(esp, v); }
/* 10908d92: push 0x1092bd04 */
  { uint32_t v = 0x1092bd04u; esp -= 4; W32(esp, v); }
/* 10908d97: push 0x1092bd34 */
  { uint32_t v = 0x1092bd34u; esp -= 4; W32(esp, v); }
/* 10908d9c: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908d9fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908d9f: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908da4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908da6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908da8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908daa: push 0x1092bd60 */
  { uint32_t v = 0x1092bd60u; esp -= 4; W32(esp, v); }
/* 10908daf: push 0x1092bd70 */
  { uint32_t v = 0x1092bd70u; esp -= 4; W32(esp, v); }
/* 10908db4: push 0x1092bd98 */
  { uint32_t v = 0x1092bd98u; esp -= 4; W32(esp, v); }
/* 10908db9: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908dbcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908dbc: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908dc1: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908dc3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908dc5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908dc7: push 0x1092bdc4 */
  { uint32_t v = 0x1092bdc4u; esp -= 4; W32(esp, v); }
/* 10908dcc: push 0x1092bdd4 */
  { uint32_t v = 0x1092bdd4u; esp -= 4; W32(esp, v); }
/* 10908dd1: push 0x1092be04 */
  { uint32_t v = 0x1092be04u; esp -= 4; W32(esp, v); }
/* 10908dd6: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908dd9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908dd9: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908dde: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908de0: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908de2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908de4: push 0x1092be30 */
  { uint32_t v = 0x1092be30u; esp -= 4; W32(esp, v); }
/* 10908de9: push 0x1092be40 */
  { uint32_t v = 0x1092be40u; esp -= 4; W32(esp, v); }
/* 10908dee: push 0x1092be6c */
  { uint32_t v = 0x1092be6cu; esp -= 4; W32(esp, v); }
/* 10908df3: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908df6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908df6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908df8: push 0x1092be98 */
  { uint32_t v = 0x1092be98u; esp -= 4; W32(esp, v); }
/* 10908dfd: push 0x1092bea4 */
  { uint32_t v = 0x1092bea4u; esp -= 4; W32(esp, v); }
/* 10908e02: push 0x1092bed4 */
  { uint32_t v = 0x1092bed4u; esp -= 4; W32(esp, v); }
/* 10908e07: jmp 0x10908fa2 */
  goto L_10908fa2;
L_10908e0c: /* 10908e0c: cmp edi, 0x80 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10908e12: jg 0x10908ed1 */
  if ((!zf && sf == of)) goto L_10908ed1;
L_10908e18: /* 10908e18: push 0x1092bf6c */
  { uint32_t v = 0x1092bf6cu; esp -= 4; W32(esp, v); }
/* 10908e1d: push 0x1092bf7c */
  { uint32_t v = 0x1092bf7cu; esp -= 4; W32(esp, v); }
/* 10908e22: push 0x1092bfac */
  { uint32_t v = 0x1092bfacu; esp -= 4; W32(esp, v); }
/* 10908e27: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908e2au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908e2a: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908e2f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908e31: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908e33: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908e35: push 0x1092bfd8 */
  { uint32_t v = 0x1092bfd8u; esp -= 4; W32(esp, v); }
/* 10908e3a: push 0x1092bfe8 */
  { uint32_t v = 0x1092bfe8u; esp -= 4; W32(esp, v); }
/* 10908e3f: push 0x1092c014 */
  { uint32_t v = 0x1092c014u; esp -= 4; W32(esp, v); }
/* 10908e44: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908e47u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908e47: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908e4c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908e4e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908e50: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908e52: push 0x1092c040 */
  { uint32_t v = 0x1092c040u; esp -= 4; W32(esp, v); }
/* 10908e57: push 0x1092c050 */
  { uint32_t v = 0x1092c050u; esp -= 4; W32(esp, v); }
/* 10908e5c: push 0x1092c080 */
  { uint32_t v = 0x1092c080u; esp -= 4; W32(esp, v); }
/* 10908e61: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908e64u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908e64: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908e69: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908e6b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908e6d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908e6f: push 0x1092c0ac */
  { uint32_t v = 0x1092c0acu; esp -= 4; W32(esp, v); }
/* 10908e74: push 0x1092c0bc */
  { uint32_t v = 0x1092c0bcu; esp -= 4; W32(esp, v); }
/* 10908e79: push 0x1092c0ec */
  { uint32_t v = 0x1092c0ecu; esp -= 4; W32(esp, v); }
/* 10908e7e: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908e81u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908e81: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908e86: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908e88: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908e8a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908e8c: push 0x1092c118 */
  { uint32_t v = 0x1092c118u; esp -= 4; W32(esp, v); }
/* 10908e91: push 0x1092c128 */
  { uint32_t v = 0x1092c128u; esp -= 4; W32(esp, v); }
/* 10908e96: push 0x1092c150 */
  { uint32_t v = 0x1092c150u; esp -= 4; W32(esp, v); }
/* 10908e9b: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908e9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908e9e: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908ea3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908ea5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908ea7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908ea9: push 0x1092c17c */
  { uint32_t v = 0x1092c17cu; esp -= 4; W32(esp, v); }
/* 10908eae: push 0x1092c18c */
  { uint32_t v = 0x1092c18cu; esp -= 4; W32(esp, v); }
/* 10908eb3: push 0x1092c1bc */
  { uint32_t v = 0x1092c1bcu; esp -= 4; W32(esp, v); }
/* 10908eb8: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908ebbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908ebb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908ebd: push 0x1092c1e8 */
  { uint32_t v = 0x1092c1e8u; esp -= 4; W32(esp, v); }
/* 10908ec2: push 0x1092c1f8 */
  { uint32_t v = 0x1092c1f8u; esp -= 4; W32(esp, v); }
/* 10908ec7: push 0x1092c224 */
  { uint32_t v = 0x1092c224u; esp -= 4; W32(esp, v); }
/* 10908ecc: jmp 0x10908fa2 */
  goto L_10908fa2;
L_10908ed1: /* 10908ed1: push 0x1092c250 */
  { uint32_t v = 0x1092c250u; esp -= 4; W32(esp, v); }
/* 10908ed6: push 0x1092c264 */
  { uint32_t v = 0x1092c264u; esp -= 4; W32(esp, v); }
/* 10908edb: push 0x1092c294 */
  { uint32_t v = 0x1092c294u; esp -= 4; W32(esp, v); }
/* 10908ee0: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908ee3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908ee3: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908ee8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908eea: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908eec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908eee: push 0x1092c2c0 */
  { uint32_t v = 0x1092c2c0u; esp -= 4; W32(esp, v); }
/* 10908ef3: push 0x1092c2d4 */
  { uint32_t v = 0x1092c2d4u; esp -= 4; W32(esp, v); }
/* 10908ef8: push 0x1092c300 */
  { uint32_t v = 0x1092c300u; esp -= 4; W32(esp, v); }
/* 10908efd: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908f00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908f00: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908f05: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908f07: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908f09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908f0b: push 0x1092c32c */
  { uint32_t v = 0x1092c32cu; esp -= 4; W32(esp, v); }
/* 10908f10: push 0x1092c340 */
  { uint32_t v = 0x1092c340u; esp -= 4; W32(esp, v); }
/* 10908f15: push 0x1092c370 */
  { uint32_t v = 0x1092c370u; esp -= 4; W32(esp, v); }
/* 10908f1a: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908f1du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908f1d: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908f22: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908f24: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908f26: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908f28: push 0x1092c39c */
  { uint32_t v = 0x1092c39cu; esp -= 4; W32(esp, v); }
/* 10908f2d: push 0x1092c3b0 */
  { uint32_t v = 0x1092c3b0u; esp -= 4; W32(esp, v); }
/* 10908f32: push 0x1092c3e0 */
  { uint32_t v = 0x1092c3e0u; esp -= 4; W32(esp, v); }
/* 10908f37: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908f3au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908f3a: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908f3f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908f41: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908f43: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908f45: push 0x1092c40c */
  { uint32_t v = 0x1092c40cu; esp -= 4; W32(esp, v); }
/* 10908f4a: push 0x1092c420 */
  { uint32_t v = 0x1092c420u; esp -= 4; W32(esp, v); }
/* 10908f4f: push 0x1092c448 */
  { uint32_t v = 0x1092c448u; esp -= 4; W32(esp, v); }
/* 10908f54: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908f57u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908f57: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908f5c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908f5e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908f60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908f62: push 0x1092c474 */
  { uint32_t v = 0x1092c474u; esp -= 4; W32(esp, v); }
/* 10908f67: push 0x1092c488 */
  { uint32_t v = 0x1092c488u; esp -= 4; W32(esp, v); }
/* 10908f6c: push 0x1092c4b8 */
  { uint32_t v = 0x1092c4b8u; esp -= 4; W32(esp, v); }
/* 10908f71: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908f74u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908f74: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908f79: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908f7b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908f7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908f7f: push 0x1092c4e4 */
  { uint32_t v = 0x1092c4e4u; esp -= 4; W32(esp, v); }
/* 10908f84: push 0x1092c4f8 */
  { uint32_t v = 0x1092c4f8u; esp -= 4; W32(esp, v); }
/* 10908f89: push 0x1092c524 */
  { uint32_t v = 0x1092c524u; esp -= 4; W32(esp, v); }
/* 10908f8e: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908f91u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908f91: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908f93: push 0x1092c550 */
  { uint32_t v = 0x1092c550u; esp -= 4; W32(esp, v); }
/* 10908f98: push 0x1092c55c */
  { uint32_t v = 0x1092c55cu; esp -= 4; W32(esp, v); }
/* 10908f9d: push 0x1092c58c */
  { uint32_t v = 0x1092c58cu; esp -= 4; W32(esp, v); }
L_10908fa2: /* 10908fa2: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908fa7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
L_10908fa9: /* 10908fa9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908fab: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908faeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908fae: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 10908fb1: fcomp dword ptr [0x10920e90] */
  fpu_com(ST0, F32((uint32_t)(0x10920e90u)));
  FPOP();
/* 10908fb7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 10908fb9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 10908fbc: jp 0x109090cc */
  if (pf) goto L_109090cc;
L_10908fc2: /* 10908fc2: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908fc7: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908fc9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908fcb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908fcd: push 0x1092c5bc */
  { uint32_t v = 0x1092c5bcu; esp -= 4; W32(esp, v); }
/* 10908fd2: push 0x1092c5c8 */
  { uint32_t v = 0x1092c5c8u; esp -= 4; W32(esp, v); }
/* 10908fd7: push 0x1092c5d8 */
  { uint32_t v = 0x1092c5d8u; esp -= 4; W32(esp, v); }
/* 10908fdc: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908fdfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908fdf: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10908fe4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10908fe6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10908fe8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10908fea: push 0x1092c604 */
  { uint32_t v = 0x1092c604u; esp -= 4; W32(esp, v); }
/* 10908fef: push 0x1092c610 */
  { uint32_t v = 0x1092c610u; esp -= 4; W32(esp, v); }
/* 10908ff4: push 0x1092c620 */
  { uint32_t v = 0x1092c620u; esp -= 4; W32(esp, v); }
/* 10908ff9: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10908ffcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10908ffc: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10909001: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10909003: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10909005: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10909007: push 0x1092c64c */
  { uint32_t v = 0x1092c64cu; esp -= 4; W32(esp, v); }
/* 1090900c: push 0x1092c658 */
  { uint32_t v = 0x1092c658u; esp -= 4; W32(esp, v); }
/* 10909011: push 0x1092c670 */
  { uint32_t v = 0x1092c670u; esp -= 4; W32(esp, v); }
/* 10909016: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10909019u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10909019: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 1090901e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10909020: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10909022: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10909024: push 0x1092c69c */
  { uint32_t v = 0x1092c69cu; esp -= 4; W32(esp, v); }
/* 10909029: push 0x1092c6a8 */
  { uint32_t v = 0x1092c6a8u; esp -= 4; W32(esp, v); }
/* 1090902e: push 0x1092c6c4 */
  { uint32_t v = 0x1092c6c4u; esp -= 4; W32(esp, v); }
/* 10909033: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10909036u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10909036: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 1090903b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090903d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090903f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10909041: push 0x1092c6f0 */
  { uint32_t v = 0x1092c6f0u; esp -= 4; W32(esp, v); }
/* 10909046: push 0x1092c6fc */
  { uint32_t v = 0x1092c6fcu; esp -= 4; W32(esp, v); }
/* 1090904b: push 0x1092c71c */
  { uint32_t v = 0x1092c71cu; esp -= 4; W32(esp, v); }
/* 10909050: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10909053u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10909053: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10909058: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090905a: mov eax, dword ptr [0x10959c50] */
  eax = R32((uint32_t)(0x10959c50u));
/* 1090905f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10909061: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10909062: push 0x1092c748 */
  { uint32_t v = 0x1092c748u; esp -= 4; W32(esp, v); }
/* 10909067: push 0x1092c754 */
  { uint32_t v = 0x1092c754u; esp -= 4; W32(esp, v); }
/* 1090906c: push 0x1092c774 */
  { uint32_t v = 0x1092c774u; esp -= 4; W32(esp, v); }
/* 10909071: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10909074u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10909074: mov ecx, dword ptr [0x10959d04] */
  ecx = R32((uint32_t)(0x10959d04u));
/* 1090907a: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1090907c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090907e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10909080: push 0x1092c7a0 */
  { uint32_t v = 0x1092c7a0u; esp -= 4; W32(esp, v); }
/* 10909085: push 0x1092c7b0 */
  { uint32_t v = 0x1092c7b0u; esp -= 4; W32(esp, v); }
/* 1090908a: push 0x1092c7d8 */
  { uint32_t v = 0x1092c7d8u; esp -= 4; W32(esp, v); }
/* 1090908f: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10909092u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10909092: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10909097: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10909099: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090909b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090909d: push 0x1092c7fc */
  { uint32_t v = 0x1092c7fcu; esp -= 4; W32(esp, v); }
/* 109090a2: push 0x1092c808 */
  { uint32_t v = 0x1092c808u; esp -= 4; W32(esp, v); }
/* 109090a7: push 0x1092c82c */
  { uint32_t v = 0x1092c82cu; esp -= 4; W32(esp, v); }
/* 109090ac: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x109090afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109090af: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 109090b4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109090b6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109090b8: push 0x1092c85c */
  { uint32_t v = 0x1092c85cu; esp -= 4; W32(esp, v); }
/* 109090bd: push 0x1092c868 */
  { uint32_t v = 0x1092c868u; esp -= 4; W32(esp, v); }
/* 109090c2: push 0x1092c894 */
  { uint32_t v = 0x1092c894u; esp -= 4; W32(esp, v); }
/* 109090c7: jmp 0x109091fd */
  goto L_109091fd;
L_109090cc: /* 109090cc: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 109090cf: fcomp dword ptr [0x10920e8c] */
  fpu_com(ST0, F32((uint32_t)(0x10920e8cu)));
  FPOP();
/* 109090d5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 109090d7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 109090da: jp 0x109091ac */
  if (pf) goto L_109091ac;
L_109090e0: /* 109090e0: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 109090e3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109090e5: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 109090ea: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109090ec: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 109090ee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109090f0: jne 0x1090919b */
  if (!zf) goto L_1090919b;
L_109090f6: /* 109090f6: push 0x1092c8c4 */
  { uint32_t v = 0x1092c8c4u; esp -= 4; W32(esp, v); }
/* 109090fb: push 0x1092c8d0 */
  { uint32_t v = 0x1092c8d0u; esp -= 4; W32(esp, v); }
/* 10909100: push 0x1092c8e0 */
  { uint32_t v = 0x1092c8e0u; esp -= 4; W32(esp, v); }
/* 10909105: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10909108u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10909108: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 1090910d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090910f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10909111: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10909113: push 0x1092c90c */
  { uint32_t v = 0x1092c90cu; esp -= 4; W32(esp, v); }
/* 10909118: push 0x1092c918 */
  { uint32_t v = 0x1092c918u; esp -= 4; W32(esp, v); }
/* 1090911d: push 0x1092c934 */
  { uint32_t v = 0x1092c934u; esp -= 4; W32(esp, v); }
/* 10909122: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10909125u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10909125: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 1090912a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090912c: mov eax, dword ptr [0x10959c50] */
  eax = R32((uint32_t)(0x10959c50u));
/* 10909131: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10909133: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10909134: push 0x1092c960 */
  { uint32_t v = 0x1092c960u; esp -= 4; W32(esp, v); }
/* 10909139: push 0x1092c96c */
  { uint32_t v = 0x1092c96cu; esp -= 4; W32(esp, v); }
/* 1090913e: push 0x1092c98c */
  { uint32_t v = 0x1092c98cu; esp -= 4; W32(esp, v); }
/* 10909143: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10909146u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10909146: mov ecx, dword ptr [0x10959d04] */
  ecx = R32((uint32_t)(0x10959d04u));
/* 1090914c: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1090914e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10909150: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10909152: push 0x1092c9b8 */
  { uint32_t v = 0x1092c9b8u; esp -= 4; W32(esp, v); }
/* 10909157: push 0x1092c9c8 */
  { uint32_t v = 0x1092c9c8u; esp -= 4; W32(esp, v); }
/* 1090915c: push 0x1092c9f0 */
  { uint32_t v = 0x1092c9f0u; esp -= 4; W32(esp, v); }
/* 10909161: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10909164u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10909164: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10909169: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090916b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090916d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090916f: push 0x1092ca14 */
  { uint32_t v = 0x1092ca14u; esp -= 4; W32(esp, v); }
/* 10909174: push 0x1092ca20 */
  { uint32_t v = 0x1092ca20u; esp -= 4; W32(esp, v); }
/* 10909179: push 0x1092ca44 */
  { uint32_t v = 0x1092ca44u; esp -= 4; W32(esp, v); }
/* 1090917e: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10909181u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10909181: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10909186: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10909188: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090918a: push 0x1092ca74 */
  { uint32_t v = 0x1092ca74u; esp -= 4; W32(esp, v); }
/* 1090918f: push 0x1092ca80 */
  { uint32_t v = 0x1092ca80u; esp -= 4; W32(esp, v); }
/* 10909194: push 0x1092caac */
  { uint32_t v = 0x1092caacu; esp -= 4; W32(esp, v); }
/* 10909199: jmp 0x109091fd */
  goto L_109091fd;
L_1090919b: /* 1090919b: push 0x1092cadc */
  { uint32_t v = 0x1092cadcu; esp -= 4; W32(esp, v); }
/* 109091a0: push 0x1092caf4 */
  { uint32_t v = 0x1092caf4u; esp -= 4; W32(esp, v); }
/* 109091a5: push 0x1092cb1c */
  { uint32_t v = 0x1092cb1cu; esp -= 4; W32(esp, v); }
/* 109091aa: jmp 0x109091ff */
  goto L_109091ff;
L_109091ac: /* 109091ac: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 109091af: fcomp dword ptr [0x10920e88] */
  fpu_com(ST0, F32((uint32_t)(0x10920e88u)));
  FPOP();
/* 109091b5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 109091b7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 109091ba: jp 0x10909202 */
  if (pf) goto L_10909202;
L_109091bc: /* 109091bc: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 109091bf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 109091c1: jne 0x10909202 */
  if (!zf) goto L_10909202;
L_109091c3: /* 109091c3: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 109091c8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109091ca: mov eax, dword ptr [0x10959c50] */
  eax = R32((uint32_t)(0x10959c50u));
/* 109091cf: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 109091d1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109091d2: push 0x1092cb40 */
  { uint32_t v = 0x1092cb40u; esp -= 4; W32(esp, v); }
/* 109091d7: push 0x1092cb4c */
  { uint32_t v = 0x1092cb4cu; esp -= 4; W32(esp, v); }
/* 109091dc: push 0x1092cb6c */
  { uint32_t v = 0x1092cb6cu; esp -= 4; W32(esp, v); }
/* 109091e1: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x109091e4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109091e4: mov ecx, dword ptr [0x10959d04] */
  ecx = R32((uint32_t)(0x10959d04u));
/* 109091ea: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 109091ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109091ee: push 0x1092cb98 */
  { uint32_t v = 0x1092cb98u; esp -= 4; W32(esp, v); }
/* 109091f3: push 0x1092cbb0 */
  { uint32_t v = 0x1092cbb0u; esp -= 4; W32(esp, v); }
/* 109091f8: push 0x1092cbd8 */
  { uint32_t v = 0x1092cbd8u; esp -= 4; W32(esp, v); }
L_109091fd: /* 109091fd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
L_109091ff: /* 109091ff: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10909202u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_10909202: /* 10909202: mov eax, dword ptr [ebp - 0x174] */
  eax = R32((uint32_t)(ebp + 0xfffffe8cu));
/* 10909208: cmp eax, 0x1002 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1002u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090920d: je 0x109093b6 */
  if (zf) goto L_109093b6;
L_10909213: /* 10909213: cmp eax, 0x121a */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x121au);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10909218: jne 0x10909287 */
  if (!zf) goto L_10909287;
L_1090921a: /* 1090921a: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 1090921f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10909221: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10909223: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10909225: push 0x1092cbfc */
  { uint32_t v = 0x1092cbfcu; esp -= 4; W32(esp, v); }
/* 1090922a: push 0x1092cc04 */
  { uint32_t v = 0x1092cc04u; esp -= 4; W32(esp, v); }
/* 1090922f: push 0x1092cc2c */
  { uint32_t v = 0x1092cc2cu; esp -= 4; W32(esp, v); }
/* 10909234: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10909237u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10909237: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 1090923c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090923e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10909240: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10909242: push 0x1092cc58 */
  { uint32_t v = 0x1092cc58u; esp -= 4; W32(esp, v); }
/* 10909247: push 0x1092cc60 */
  { uint32_t v = 0x1092cc60u; esp -= 4; W32(esp, v); }
/* 1090924c: push 0x1092cc88 */
  { uint32_t v = 0x1092cc88u; esp -= 4; W32(esp, v); }
/* 10909251: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10909254u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10909254: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10909259: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090925b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090925d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090925f: push 0x1092ccb4 */
  { uint32_t v = 0x1092ccb4u; esp -= 4; W32(esp, v); }
/* 10909264: push 0x1092ccc0 */
  { uint32_t v = 0x1092ccc0u; esp -= 4; W32(esp, v); }
/* 10909269: push 0x1092ccd8 */
  { uint32_t v = 0x1092ccd8u; esp -= 4; W32(esp, v); }
/* 1090926e: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10909271u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10909271: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10909273: push 0x1092cd04 */
  { uint32_t v = 0x1092cd04u; esp -= 4; W32(esp, v); }
/* 10909278: push 0x1092cd10 */
  { uint32_t v = 0x1092cd10u; esp -= 4; W32(esp, v); }
/* 1090927d: push 0x1092cd30 */
  { uint32_t v = 0x1092cd30u; esp -= 4; W32(esp, v); }
/* 10909282: jmp 0x109093aa */
  goto L_109093aa;
L_10909287: /* 10909287: cmp eax, 0x8086 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8086u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090928c: je 0x109093b6 */
  if (zf) goto L_109093b6;
L_10909292: /* 10909292: cmp eax, 0x10de */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10deu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 10909297: jne 0x109093b6 */
  if (!zf) goto L_109093b6;
L_1090929d: /* 1090929d: mov eax, dword ptr [ebp - 0x170] */
  eax = R32((uint32_t)(ebp + 0xfffffe90u));
/* 109092a3: cmp eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 109092a6: jne 0x109092cb */
  if (!zf) goto L_109092cb;
L_109092a8: /* 109092a8: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 109092ad: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109092af: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 109092b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109092b3: push 0x1092cd5c */
  { uint32_t v = 0x1092cd5cu; esp -= 4; W32(esp, v); }
/* 109092b8: push 0x1092cd68 */
  { uint32_t v = 0x1092cd68u; esp -= 4; W32(esp, v); }
/* 109092bd: push 0x1092cd80 */
  { uint32_t v = 0x1092cd80u; esp -= 4; W32(esp, v); }
/* 109092c2: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x109092c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109092c5: mov eax, dword ptr [ebp - 0x170] */
  eax = R32((uint32_t)(ebp + 0xfffffe90u));
L_109092cb: /* 109092cb: cmp eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109092ce: jb 0x109092f8 */
  if (cf) goto L_109092f8;
L_109092d0: /* 109092d0: cmp eax, 0x2f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2fu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 109092d3: ja 0x109092f8 */
  if ((!cf && !zf)) goto L_109092f8;
L_109092d5: /* 109092d5: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 109092da: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109092dc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 109092de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109092e0: push 0x1092cdac */
  { uint32_t v = 0x1092cdacu; esp -= 4; W32(esp, v); }
/* 109092e5: push 0x1092cdb8 */
  { uint32_t v = 0x1092cdb8u; esp -= 4; W32(esp, v); }
/* 109092ea: push 0x1092cdd0 */
  { uint32_t v = 0x1092cdd0u; esp -= 4; W32(esp, v); }
/* 109092ef: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x109092f2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109092f2: mov eax, dword ptr [ebp - 0x170] */
  eax = R32((uint32_t)(ebp + 0xfffffe90u));
L_109092f8: /* 109092f8: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 109092fd: jb 0x10909329 */
  if (cf) goto L_10909329;
L_109092ff: /* 109092ff: cmp eax, 0x103 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x103u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10909304: ja 0x10909329 */
  if ((!cf && !zf)) goto L_10909329;
L_10909306: /* 10909306: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 1090930b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090930d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090930f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10909311: push 0x1092cdfc */
  { uint32_t v = 0x1092cdfcu; esp -= 4; W32(esp, v); }
/* 10909316: push 0x1092ce08 */
  { uint32_t v = 0x1092ce08u; esp -= 4; W32(esp, v); }
/* 1090931b: push 0x1092ce20 */
  { uint32_t v = 0x1092ce20u; esp -= 4; W32(esp, v); }
/* 10909320: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10909323u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10909323: mov eax, dword ptr [ebp - 0x170] */
  eax = R32((uint32_t)(ebp + 0xfffffe90u));
L_10909329: /* 10909329: cmp eax, 0x110 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1090932e: jb 0x1090935a */
  if (cf) goto L_1090935a;
L_10909330: /* 10909330: cmp eax, 0x113 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x113u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10909335: ja 0x1090935a */
  if ((!cf && !zf)) goto L_1090935a;
L_10909337: /* 10909337: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 1090933c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090933e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10909340: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10909342: push 0x1092ce4c */
  { uint32_t v = 0x1092ce4cu; esp -= 4; W32(esp, v); }
/* 10909347: push 0x1092ce58 */
  { uint32_t v = 0x1092ce58u; esp -= 4; W32(esp, v); }
/* 1090934c: push 0x1092ce70 */
  { uint32_t v = 0x1092ce70u; esp -= 4; W32(esp, v); }
/* 10909351: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10909354u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10909354: mov eax, dword ptr [ebp - 0x170] */
  eax = R32((uint32_t)(ebp + 0xfffffe90u));
L_1090935a: /* 1090935a: cmp eax, 0x150 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x150u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 1090935f: jb 0x1090938b */
  if (cf) goto L_1090938b;
L_10909361: /* 10909361: cmp eax, 0x153 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x153u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10909366: ja 0x1090938b */
  if ((!cf && !zf)) goto L_1090938b;
L_10909368: /* 10909368: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 1090936d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090936f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10909371: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10909373: push 0x1092ce9c */
  { uint32_t v = 0x1092ce9cu; esp -= 4; W32(esp, v); }
/* 10909378: push 0x1092cea8 */
  { uint32_t v = 0x1092cea8u; esp -= 4; W32(esp, v); }
/* 1090937d: push 0x1092cec0 */
  { uint32_t v = 0x1092cec0u; esp -= 4; W32(esp, v); }
/* 10909382: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10909385u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10909385: mov eax, dword ptr [ebp - 0x170] */
  eax = R32((uint32_t)(ebp + 0xfffffe90u));
L_1090938b: /* 1090938b: cmp eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 10909390: jb 0x109093b6 */
  if (cf) goto L_109093b6;
L_10909392: /* 10909392: cmp eax, 0x179 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x179u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 10909397: ja 0x109093b6 */
  if ((!cf && !zf)) goto L_109093b6;
L_10909399: /* 10909399: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090939b: push 0x1092ceec */
  { uint32_t v = 0x1092ceecu; esp -= 4; W32(esp, v); }
/* 109093a0: push 0x1092cef8 */
  { uint32_t v = 0x1092cef8u; esp -= 4; W32(esp, v); }
/* 109093a5: push 0x1092cf10 */
  { uint32_t v = 0x1092cf10u; esp -= 4; W32(esp, v); }
L_109093aa: /* 109093aa: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 109093af: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109093b1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 109093b3: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x109093b6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_109093b6: /* 109093b6: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 109093b9: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 109093bc: jge 0x10909426 */
  if ((sf == of)) goto L_10909426;
L_109093be: /* 109093be: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 109093c3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109093c5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 109093c7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109093c9: push 0x1092cf3c */
  { uint32_t v = 0x1092cf3cu; esp -= 4; W32(esp, v); }
/* 109093ce: push 0x1092cf44 */
  { uint32_t v = 0x1092cf44u; esp -= 4; W32(esp, v); }
/* 109093d3: push 0x1092cf60 */
  { uint32_t v = 0x1092cf60u; esp -= 4; W32(esp, v); }
/* 109093d8: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x109093dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109093db: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 109093e0: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109093e2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 109093e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109093e6: push 0x1092cf84 */
  { uint32_t v = 0x1092cf84u; esp -= 4; W32(esp, v); }
/* 109093eb: push 0x1092cf90 */
  { uint32_t v = 0x1092cf90u; esp -= 4; W32(esp, v); }
/* 109093f0: push 0x1092cfb0 */
  { uint32_t v = 0x1092cfb0u; esp -= 4; W32(esp, v); }
/* 109093f5: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x109093f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 109093f8: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 109093fd: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 109093ff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10909401: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10909403: push 0x1092cfe4 */
  { uint32_t v = 0x1092cfe4u; esp -= 4; W32(esp, v); }
/* 10909408: push 0x1092cff0 */
  { uint32_t v = 0x1092cff0u; esp -= 4; W32(esp, v); }
/* 1090940d: push 0x1092d010 */
  { uint32_t v = 0x1092d010u; esp -= 4; W32(esp, v); }
/* 10909412: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10909415u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_10909415: /* 10909415: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 10909418: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090941f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10909420: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10909421: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10909422: mov esp, ebp */
  esp = ebp;
/* 10909424: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10909425: ret  */
  esp += 4; SPILL(); return;
L_10909426: /* 10909426: cmp eax, 0x80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090942b: jge 0x10909415 */
  if ((sf == of)) goto L_10909415;
L_1090942d: /* 1090942d: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 10909432: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10909434: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10909436: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10909438: push 0x1092d034 */
  { uint32_t v = 0x1092d034u; esp -= 4; W32(esp, v); }
/* 1090943d: push 0x1092d03c */
  { uint32_t v = 0x1092d03cu; esp -= 4; W32(esp, v); }
/* 10909442: push 0x1092d058 */
  { uint32_t v = 0x1092d058u; esp -= 4; W32(esp, v); }
/* 10909447: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x1090944au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090944a: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 1090944f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10909451: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10909453: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10909455: push 0x1092d07c */
  { uint32_t v = 0x1092d07cu; esp -= 4; W32(esp, v); }
/* 1090945a: push 0x1092d088 */
  { uint32_t v = 0x1092d088u; esp -= 4; W32(esp, v); }
/* 1090945f: push 0x1092d0a8 */
  { uint32_t v = 0x1092d0a8u; esp -= 4; W32(esp, v); }
/* 10909464: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10909467u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10909467: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 1090946c: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090946e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10909470: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10909472: push 0x1092d0dc */
  { uint32_t v = 0x1092d0dcu; esp -= 4; W32(esp, v); }
/* 10909477: push 0x1092d0e8 */
  { uint32_t v = 0x1092d0e8u; esp -= 4; W32(esp, v); }
/* 1090947c: push 0x1092d108 */
  { uint32_t v = 0x1092d108u; esp -= 4; W32(esp, v); }
/* 10909481: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x10909484u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10909484: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 10909487: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10909488: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10909489: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 10909490: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10909491: mov esp, ebp */
  esp = ebp;
/* 10909493: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10909494: ret  */
  esp += 4; SPILL(); return;
}

void f_10909495(void) {
  LOAD_REGS();
L_10909495: /* 10909495: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 10909498: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090949d: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 109094a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 109094a1: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 109094a4: call 0x10918770 */
  esp -= 4; W32(esp, 0x109094a9u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_109094a9(); return;
}

void f_109094a9(void) {
  LOAD_REGS();
L_109094a9: /* 109094a9: push 0x10920e60 */
  { uint32_t v = 0x10920e60u; esp -= 4; W32(esp, v); }
/* 109094ae: push 0x1092a2d0 */
  { uint32_t v = 0x1092a2d0u; esp -= 4; W32(esp, v); }
/* 109094b3: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x109094b9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 109094b9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109094bc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109094be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109094c0: call 0x10918770 */
  esp -= 4; W32(esp, 0x109094c5u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_109094c5(); return;
}

void f_109094c5(void) {
  LOAD_REGS();
L_109094c5: /* 109094c5: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* 109094c8: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 109094cd: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 109094d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 109094d1: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 109094d4: call 0x10918770 */
  esp -= 4; W32(esp, 0x109094d9u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_109094d9(); return;
}

void f_109094d9(void) {
  LOAD_REGS();
L_109094d9: /* 109094d9: push 0x10920e30 */
  { uint32_t v = 0x10920e30u; esp -= 4; W32(esp, v); }
/* 109094de: push 0x1092a118 */
  { uint32_t v = 0x1092a118u; esp -= 4; W32(esp, v); }
/* 109094e3: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x109094e9u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 109094e9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 109094ec: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109094ee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 109094f0: call 0x10918770 */
  esp -= 4; W32(esp, 0x109094f5u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_109094f5(); return;
}

void f_109094f5(void) {
  LOAD_REGS();
L_109094f5: /* 109094f5: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 109094f8: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 109094fd: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 10909500: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10909501: mov dword ptr [ebp - 0x54], ecx */
  W32((uint32_t)(ebp + 0xffffffacu), ecx);
/* 10909504: call 0x10918770 */
  esp -= 4; W32(esp, 0x10909509u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_10909509(); return;
}

void f_10909509(void) {
  LOAD_REGS();
L_10909509: /* 10909509: push 0x10920df4 */
  { uint32_t v = 0x10920df4u; esp -= 4; W32(esp, v); }
/* 1090950e: push 0x1092d12c */
  { uint32_t v = 0x1092d12cu; esp -= 4; W32(esp, v); }
/* 10909513: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x10909519u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 10909519: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090951c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090951e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10909520: call 0x10918770 */
  esp -= 4; W32(esp, 0x10909525u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_10909525: guest_badaddr(0x10909525); return;
}

void f_10909a10(void) {
  LOAD_REGS();
L_10909a10: /* 10909a10: mov eax, ecx */
  eax = ecx;
/* 10909a12: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 10909a16: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 10909a18: mov dword ptr [eax + 4], 0 */
  W32((uint32_t)(eax + 0x4u), 0x0u);
/* 10909a1f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_10909a40(void) {
  LOAD_REGS();
L_10909a40: /* 10909a40: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 10909a43: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 10909a45: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10909a47: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 10909a4a: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 10909a4d: ret  */
  esp += 4; SPILL(); return;
}

void f_10909a60(void) {
  LOAD_REGS();
L_10909a60: /* 10909a60: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 10909a63: mov ecx, dword ptr [0x10959ce8] */
  ecx = R32((uint32_t)(0x10959ce8u));
/* 10909a69: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10909a6b: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 10909a6e: ret  */
  esp += 4; SPILL(); return;
}

void f_10909a80(void) {
  LOAD_REGS();
L_10909a80: /* 10909a80: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10909a81: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10909a82: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10909a83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10909a84: mov esi, ecx */
  esi = ecx;
/* 10909a86: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 10909a89: mov ecx, dword ptr [0x10959b34] */
  ecx = R32((uint32_t)(0x10959b34u));
/* 10909a8f: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 10909a91: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10909a93: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 10909a96: push 0x1092eb7c */
  { uint32_t v = 0x1092eb7cu; esp -= 4; W32(esp, v); }
/* 10909a9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10909a9c: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x10909a9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10909a9e: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 10909aa1: mov ebp, eax */
  ebp = eax;
/* 10909aa3: xor ebx, ebx */
  ebx = 0;
/* 10909aa5: xor eax, eax */
  eax = 0;
/* 10909aa7: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10909aa9: jle 0x10909ac0 */
  if ((zf || sf != of)) goto L_10909ac0;
L_10909aab: /* 10909aab: jmp 0x10909ab0 */
  goto L_10909ab0;
L_10909ab0: /* 10909ab0: mov dword ptr [ebp + eax*4], 0xffffffff */
  W32((uint32_t)(ebp + eax*4), 0xffffffffu);
/* 10909ab8: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 10909abb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10909abc: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10909abe: jl 0x10909ab0 */
  if ((sf != of)) goto L_10909ab0;
L_10909ac0: /* 10909ac0: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10909ac3: jle 0x10909b0c */
  if ((zf || sf != of)) goto L_10909b0c;
L_10909ac5: /* 10909ac5: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 10909ac9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10909aca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_10909ad0: /* 10909ad0: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 10909ad2: add edi, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10909ad6: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 10909ad9: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x10909adfu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 10909adf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10909ae0: call 0x109011e5 */
  esp -= 4; W32(esp, 0x10909ae5u); SPILL(); f_109011e5(); if (g_unwind) return; RELOAD();
/* 10909ae5: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 10909ae8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10909aeb: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10909aec: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10909aee: mov edx, dword ptr [ebp + eax*4] */
  edx = R32((uint32_t)(ebp + eax*4));
/* 10909af2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10909af6: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 10909af8: mov dword ptr [ebp + eax*4], ebx */
  W32((uint32_t)(ebp + eax*4), ebx);
/* 10909afc: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 10909aff: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 10909b00: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10909b03: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10909b05: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 10909b09: jl 0x10909ad0 */
  if ((sf != of)) goto L_10909ad0;
L_10909b0b: /* 10909b0b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_10909b0c: /* 10909b0c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 10909b0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10909b11: je 0x10909b21 */
  if (zf) goto L_10909b21;
L_10909b13: /* 10909b13: mov ecx, dword ptr [0x10959b34] */
  ecx = R32((uint32_t)(0x10959b34u));
/* 10909b19: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 10909b1b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10909b1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10909b1e: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x10909b21u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_10909b21: /* 10909b21: mov dword ptr [esi + 0xc], ebp */
  W32((uint32_t)(esi + 0xcu), ebp);
/* 10909b24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10909b25: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10909b26: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10909b27: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 10909b28: ret  */
  esp += 4; SPILL(); return;
}

void f_10909aad(void) {
  LOAD_REGS();
L_10909aad: /* 10909aad: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10909ab0: /* 10909ab0: mov dword ptr [ebp + eax*4], 0xffffffff */
  W32((uint32_t)(ebp + eax*4), 0xffffffffu);
/* 10909ab8: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 10909abb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 10909abc: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10909abe: jl 0x10909ab0 */
  if ((sf != of)) goto L_10909ab0;
L_10909ac0: /* 10909ac0: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10909ac3: jle 0x10909b0c */
  if ((zf || sf != of)) goto L_10909b0c;
L_10909ac5: /* 10909ac5: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 10909ac9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10909aca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_10909ad0: /* 10909ad0: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 10909ad2: add edi, dword ptr [esp + 0x10] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x10u)));
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10909ad6: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 10909ad9: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x10909adfu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 10909adf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10909ae0: call 0x109011e5 */
  esp -= 4; W32(esp, 0x10909ae5u); SPILL(); f_109011e5(); if (g_unwind) return; RELOAD();
/* 10909ae5: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 10909ae8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10909aeb: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 10909aec: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 10909aee: mov edx, dword ptr [ebp + eax*4] */
  edx = R32((uint32_t)(ebp + eax*4));
/* 10909af2: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 10909af6: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 10909af8: mov dword ptr [ebp + eax*4], ebx */
  W32((uint32_t)(ebp + eax*4), ebx);
/* 10909afc: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 10909aff: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 10909b00: add ecx, 0x30 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10909b03: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10909b05: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 10909b09: jl 0x10909ad0 */
  if ((sf != of)) goto L_10909ad0;
L_10909b0b: /* 10909b0b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_10909b0c: /* 10909b0c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 10909b0f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10909b11: je 0x10909b21 */
  if (zf) goto L_10909b21;
L_10909b13: /* 10909b13: mov ecx, dword ptr [0x10959b34] */
  ecx = R32((uint32_t)(0x10959b34u));
/* 10909b19: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 10909b1b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10909b1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10909b1e: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x10909b21u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_10909b21: /* 10909b21: mov dword ptr [esi + 0xc], ebp */
  W32((uint32_t)(esi + 0xcu), ebp);
/* 10909b24: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10909b25: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10909b26: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10909b27: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 10909b28: ret  */
  esp += 4; SPILL(); return;
}

void f_10909b60(void) {
  LOAD_REGS();
L_10909b60: /* 10909b60: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10909b61: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 10909b65: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10909b67: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10909b68: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10909b69: mov esi, dword ptr [0x10959d64] */
  esi = R32((uint32_t)(0x10959d64u));
/* 10909b6f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10909b70: mov ebp, ecx */
  ebp = ecx;
/* 10909b72: jge 0x10909b88 */
  if ((sf == of)) goto L_10909b88;
L_10909b74: /* 10909b74: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 10909b79: push 0x1092ebd8 */
  { uint32_t v = 0x1092ebd8u; esp -= 4; W32(esp, v); }
/* 10909b7e: push 0x1092ebc8 */
  { uint32_t v = 0x1092ebc8u; esp -= 4; W32(esp, v); }
/* 10909b83: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x10909b85u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10909b85: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10909b88: /* 10909b88: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10909b8b: jle 0x10909ba1 */
  if ((zf || sf != of)) goto L_10909ba1;
L_10909b8d: /* 10909b8d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 10909b92: push 0x1092ebd8 */
  { uint32_t v = 0x1092ebd8u; esp -= 4; W32(esp, v); }
/* 10909b97: push 0x1092ebb4 */
  { uint32_t v = 0x1092ebb4u; esp -= 4; W32(esp, v); }
/* 10909b9c: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x10909b9eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10909b9e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10909ba1: /* 10909ba1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 10909ba5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 10909ba8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10909bab: jle 0x10909bc1 */
  if ((zf || sf != of)) goto L_10909bc1;
L_10909bad: /* 10909bad: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 10909bb2: push 0x1092ebd8 */
  { uint32_t v = 0x1092ebd8u; esp -= 4; W32(esp, v); }
/* 10909bb7: push 0x1092eb98 */
  { uint32_t v = 0x1092eb98u; esp -= 4; W32(esp, v); }
/* 10909bbc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x10909bbeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10909bbe: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10909bc1: /* 10909bc1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10909bc3: jge 0x10909be1 */
  if ((sf == of)) goto L_10909be1;
L_10909bc5: /* 10909bc5: lea esi, [ebx + ebx*2] */
  esi = (uint32_t)(ebx + ebx*2);
/* 10909bc8: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 10909bcb: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 10909bcd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_10909bd0: /* 10909bd0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 10909bd3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10909bd5: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x10909bdbu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 10909bdb: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 10909bde: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 10909bdf: jne 0x10909bd0 */
  if (!zf) goto L_10909bd0;
L_10909be1: /* 10909be1: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 10909be5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 10909be7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10909be8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10909be9: mov ecx, ebp */
  ecx = ebp;
/* 10909beb: call dword ptr [0x10959c4c] */
  esp -= 4; W32(esp, 0x10909bf1u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 10909bf1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10909bf2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10909bf3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10909bf4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10909bf5: ret 8 */
  esp += 12; SPILL(); return;
}

void f_10909c30(void) {
  LOAD_REGS();
L_10909c30: /* 10909c30: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10909c31: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 10909c32: mov ebp, dword ptr [0x10959d64] */
  ebp = R32((uint32_t)(0x10959d64u));
/* 10909c38: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10909c39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10909c3a: mov edi, dword ptr [esp + 0x14] */
  edi = R32((uint32_t)(esp + 0x14u));
/* 10909c3e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10909c40: mov esi, ecx */
  esi = ecx;
/* 10909c42: jge 0x10909c58 */
  if ((sf == of)) goto L_10909c58;
L_10909c44: /* 10909c44: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 10909c49: push 0x1092ebd8 */
  { uint32_t v = 0x1092ebd8u; esp -= 4; W32(esp, v); }
/* 10909c4e: push 0x1092ebc8 */
  { uint32_t v = 0x1092ebc8u; esp -= 4; W32(esp, v); }
/* 10909c53: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x10909c55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10909c55: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10909c58: /* 10909c58: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10909c5b: jle 0x10909c71 */
  if ((zf || sf != of)) goto L_10909c71;
L_10909c5d: /* 10909c5d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 10909c62: push 0x1092ebd8 */
  { uint32_t v = 0x1092ebd8u; esp -= 4; W32(esp, v); }
/* 10909c67: push 0x1092ebb4 */
  { uint32_t v = 0x1092ebb4u; esp -= 4; W32(esp, v); }
/* 10909c6c: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x10909c6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10909c6e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10909c71: /* 10909c71: mov ebx, dword ptr [esp + 0x18] */
  ebx = R32((uint32_t)(esp + 0x18u));
/* 10909c75: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 10909c78: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 10909c7b: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10909c7d: jle 0x10909c93 */
  if ((zf || sf != of)) goto L_10909c93;
L_10909c7f: /* 10909c7f: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 10909c84: push 0x1092ebd8 */
  { uint32_t v = 0x1092ebd8u; esp -= 4; W32(esp, v); }
/* 10909c89: push 0x1092eb98 */
  { uint32_t v = 0x1092eb98u; esp -= 4; W32(esp, v); }
/* 10909c8e: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0x10909c90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 10909c90: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10909c93: /* 10909c93: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 10909c95: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10909c96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10909c97: mov ecx, esi */
  ecx = esi;
/* 10909c99: call dword ptr [0x10959c4c] */
  esp -= 4; W32(esp, 0x10909c9fu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 10909c9f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10909ca0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10909ca1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10909ca2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10909ca3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_10909cd0(void) {
  LOAD_REGS();
L_10909cd0: /* 10909cd0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10909cd1: mov esi, ecx */
  esi = ecx;
/* 10909cd3: call 0x1090106e */
  esp -= 4; W32(esp, 0x10909cd8u); SPILL(); f_1090106e(); if (g_unwind) return; RELOAD();
/* 10909cd8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10909cdd: je 0x10909cec */
  if (zf) goto L_10909cec;
L_10909cdf: /* 10909cdf: mov eax, dword ptr [0x10959b34] */
  eax = R32((uint32_t)(0x10959b34u));
/* 10909ce4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10909ce6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10909ce8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10909ce9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x10909cecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_10909cec: /* 10909cec: mov eax, esi */
  eax = esi;
/* 10909cee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10909cef: ret 4 */
  esp += 8; SPILL(); return;
}

void f_10909d10(void) {
  LOAD_REGS();
L_10909d10: /* 10909d10: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 10909d12: push 0x1091ba94 */
  { uint32_t v = 0x1091ba94u; esp -= 4; W32(esp, v); }
/* 10909d17: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 10909d1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10909d1e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 10909d25: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10909d26: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10909d27: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10909d28: mov edi, dword ptr [esp + 0x1c] */
  edi = R32((uint32_t)(esp + 0x1cu));
/* 10909d2c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 10909d2d: push 0x7e4 */
  { uint32_t v = 0x7e4u; esp -= 4; W32(esp, v); }
/* 10909d32: mov esi, ecx */
  esi = ecx;
/* 10909d34: push 0x1092ec2c */
  { uint32_t v = 0x1092ec2cu; esp -= 4; W32(esp, v); }
/* 10909d39: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 10909d3d: call dword ptr [0x1095a288] */
  esp -= 4; W32(esp, 0x10909d43u); SPILL(); f_d814ba(); if (g_unwind) return; /* Window!??0WWizardPage@@QAE@PBGHPAVWWizardDialog@@@Z */ RELOAD();
/* 10909d43: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 10909d45: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10909d48: mov ecx, esp */
  ecx = esp;
/* 10909d4a: mov dword ptr [esp + 0x2c], esp */
  W32((uint32_t)(esp + 0x2cu), esp);
/* 10909d4e: push 0x109010ff */
  { uint32_t v = 0x109010ffu; esp -= 4; W32(esp, v); }
/* 10909d53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10909d54: mov dword ptr [esp + 0x2c], 0 */
  W32((uint32_t)(esp + 0x2cu), 0x0u);
/* 10909d5c: mov dword ptr [esi], 0x10920ea8 */
  W32((uint32_t)(esi), 0x10920ea8u);
/* 10909d62: mov dword ptr [esi + 0x40], edi */
  W32((uint32_t)(esi + 0x40u), edi);
/* 10909d65: call dword ptr [0x1095a284] */
  esp -= 4; W32(esp, 0x10909d6bu); SPILL(); f_d8235b(); if (g_unwind) return; /* Window!??0FDelegate@@QAE@PAVFCommandTarget@@P81@AEXXZ@Z */ RELOAD();
/* 10909d6b: push 0x454 */
  { uint32_t v = 0x454u; esp -= 4; W32(esp, v); }
/* 10909d70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10909d71: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 10909d74: call dword ptr [0x1095a2a8] */
  esp -= 4; W32(esp, 0x10909d7au); SPILL(); f_d821f3(); if (g_unwind) return; /* Window!??0WCoolButton@@QAE@PAVWWindow@@HUFDelegate@@K@Z */ RELOAD();
/* 10909d7a: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 10909d7c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10909d7f: mov ecx, esp */
  ecx = esp;
/* 10909d81: mov dword ptr [esp + 0x2c], esp */
  W32((uint32_t)(esp + 0x2cu), esp);
/* 10909d85: push 0x109012b7 */
  { uint32_t v = 0x109012b7u; esp -= 4; W32(esp, v); }
/* 10909d8a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10909d8b: mov byte ptr [esp + 0x2c], 1 */
  W8((uint32_t)(esp + 0x2cu), 0x1u);
/* 10909d90: call dword ptr [0x1095a284] */
  esp -= 4; W32(esp, 0x10909d96u); SPILL(); f_d8235b(); if (g_unwind) return; /* Window!??0FDelegate@@QAE@PAVFCommandTarget@@P81@AEXXZ@Z */ RELOAD();
/* 10909d96: push 0x455 */
  { uint32_t v = 0x455u; esp -= 4; W32(esp, v); }
/* 10909d9b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10909d9c: lea ecx, [esi + 0xe0] */
  ecx = (uint32_t)(esi + 0xe0u);
/* 10909da2: call dword ptr [0x1095a2a8] */
  esp -= 4; W32(esp, 0x10909da8u); SPILL(); f_d821f3(); if (g_unwind) return; /* Window!??0WCoolButton@@QAE@PAVWWindow@@HUFDelegate@@K@Z */ RELOAD();
/* 10909da8: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* 10909daa: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 10909dad: mov ecx, esp */
  ecx = esp;
/* 10909daf: mov dword ptr [esp + 0x2c], esp */
  W32((uint32_t)(esp + 0x2cu), esp);
/* 10909db3: push 0x109014bf */
  { uint32_t v = 0x109014bfu; esp -= 4; W32(esp, v); }
/* 10909db8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10909db9: mov byte ptr [esp + 0x2c], 2 */
  W8((uint32_t)(esp + 0x2cu), 0x2u);
/* 10909dbe: call dword ptr [0x1095a284] */
  esp -= 4; W32(esp, 0x10909dc4u); SPILL(); f_d8235b(); if (g_unwind) return; /* Window!??0FDelegate@@QAE@PAVFCommandTarget@@P81@AEXXZ@Z */ RELOAD();
/* 10909dc4: push 0x422 */
  { uint32_t v = 0x422u; esp -= 4; W32(esp, v); }
/* 10909dc9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10909dca: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 10909dd0: call dword ptr [0x1095a2a8] */
  esp -= 4; W32(esp, 0x10909dd6u); SPILL(); f_d821f3(); if (g_unwind) return; /* Window!??0WCoolButton@@QAE@PAVWWindow@@HUFDelegate@@K@Z */ RELOAD();
/* 10909dd6: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 10909dda: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10909ddb: mov eax, esi */
  eax = esi;
/* 10909ddd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 10909de4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10909de5: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10909de8: ret 4 */
  esp += 8; SPILL(); return;
}

void f_10909e30(void) {
  LOAD_REGS();
L_10909e30: /* 10909e30: mov eax, 0x1092de54 */
  eax = 0x1092de54u;
/* 10909e35: ret  */
  esp += 4; SPILL(); return;
}

void f_10909e50(void) {
  LOAD_REGS();
L_10909e50: /* 10909e50: xor eax, eax */
  eax = 0;
/* 10909e52: ret  */
  esp += 4; SPILL(); return;
}

void f_10909e70(void) {
  LOAD_REGS();
L_10909e70: /* 10909e70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 10909e74: push 0x1092ec5c */
  { uint32_t v = 0x1092ec5cu; esp -= 4; W32(esp, v); }
/* 10909e79: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10909e7a: call 0x1090138e */
  esp -= 4; W32(esp, 0x10909e7fu); SPILL(); f_1090138e(); if (g_unwind) return; RELOAD();
/* 10909e7f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10909e82: ret 4 */
  esp += 8; SPILL(); return;
}

void f_10909ea0(void) {
  LOAD_REGS();
L_10909ea0: /* 10909ea0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10909ea1: mov esi, ecx */
  esi = ecx;
/* 10909ea3: call 0x10901442 */
  esp -= 4; W32(esp, 0x10909ea8u); SPILL(); f_10901442(); if (g_unwind) return; RELOAD();
/* 10909ea8: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10909ead: je 0x10909ebc */
  if (zf) goto L_10909ebc;
L_10909eaf: /* 10909eaf: mov eax, dword ptr [0x10959b34] */
  eax = R32((uint32_t)(0x10959b34u));
/* 10909eb4: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 10909eb6: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 10909eb8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10909eb9: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x10909ebcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_10909ebc: /* 10909ebc: mov eax, esi */
  eax = esi;
/* 10909ebe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10909ebf: ret 4 */
  esp += 8; SPILL(); return;
}

void f_10909ee0(void) {
  LOAD_REGS();
L_10909ee0: /* 10909ee0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 10909ee2: push 0x1091bae3 */
  { uint32_t v = 0x1091bae3u; esp -= 4; W32(esp, v); }
/* 10909ee7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 10909eed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 10909eee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 10909ef5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 10909ef6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10909ef7: mov esi, ecx */
  esi = ecx;
/* 10909ef9: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 10909efd: mov dword ptr [esi], 0x10920ea8 */
  W32((uint32_t)(esi), 0x10920ea8u);
/* 10909f03: mov dword ptr [esp + 0x10], 3 */
  W32((uint32_t)(esp + 0x10u), 0x3u);
/* 10909f0b: call dword ptr [0x1095a3a4] */
  esp -= 4; W32(esp, 0x10909f11u); SPILL(); f_d8243c(); if (g_unwind) return; /* Window!?MaybeDestroy@WWindow@@QAEXXZ */ RELOAD();
/* 10909f11: lea ecx, [esi + 0x17c] */
  ecx = (uint32_t)(esi + 0x17cu);
/* 10909f17: mov byte ptr [esp + 0x10], 2 */
  W8((uint32_t)(esp + 0x10u), 0x2u);
/* 10909f1c: call dword ptr [0x1095a2a4] */
  esp -= 4; W32(esp, 0x10909f22u); SPILL(); f_d81b90(); if (g_unwind) return; /* Window!??1WCoolButton@@UAE@XZ */ RELOAD();
/* 10909f22: lea ecx, [esi + 0xe0] */
  ecx = (uint32_t)(esi + 0xe0u);
/* 10909f28: mov byte ptr [esp + 0x10], 1 */
  W8((uint32_t)(esp + 0x10u), 0x1u);
/* 10909f2d: call dword ptr [0x1095a2a4] */
  esp -= 4; W32(esp, 0x10909f33u); SPILL(); f_d81b90(); if (g_unwind) return; /* Window!??1WCoolButton@@UAE@XZ */ RELOAD();
/* 10909f33: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 10909f36: mov byte ptr [esp + 0x10], 0 */
  W8((uint32_t)(esp + 0x10u), 0x0u);
/* 10909f3b: call dword ptr [0x1095a2a4] */
  esp -= 4; W32(esp, 0x10909f41u); SPILL(); f_d81b90(); if (g_unwind) return; /* Window!??1WCoolButton@@UAE@XZ */ RELOAD();
/* 10909f41: mov ecx, esi */
  ecx = esi;
/* 10909f43: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 10909f4b: call dword ptr [0x1095a27c] */
  esp -= 4; W32(esp, 0x10909f51u); SPILL(); f_d81532(); if (g_unwind) return; /* Window!??1WWizardPage@@UAE@XZ */ RELOAD();
/* 10909f51: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 10909f55: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10909f56: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 10909f5d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10909f60: ret  */
  esp += 4; SPILL(); return;
}

void f_10909fa0(void) {
  LOAD_REGS();
L_10909fa0: /* 10909fa0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 10909fa4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10909fa6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10909fa7: mov esi, ecx */
  esi = ecx;
/* 10909fa9: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 10909fab: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* 10909fb2: jne 0x10909fcc */
  if (!zf) goto L_10909fcc;
L_10909fb4: /* 10909fb4: push 0x4a3 */
  { uint32_t v = 0x4a3u; esp -= 4; W32(esp, v); }
/* 10909fb9: push 0x1092ec98 */
  { uint32_t v = 0x1092ec98u; esp -= 4; W32(esp, v); }
/* 10909fbe: push 0x1092ec8c */
  { uint32_t v = 0x1092ec8cu; esp -= 4; W32(esp, v); }
/* 10909fc3: call dword ptr [0x10959d64] */
  esp -= 4; W32(esp, 0x10909fc9u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 10909fc9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_10909fcc: /* 10909fcc: mov ecx, esi */
  ecx = esi;
/* 10909fce: call 0x109013a2 */
  esp -= 4; W32(esp, 0x10909fd3u); SPILL(); f_109013a2(); if (g_unwind) return; RELOAD();
/* 10909fd3: mov eax, esi */
  eax = esi;
/* 10909fd5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10909fd6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_10909ff0(void) {
  LOAD_REGS();
L_10909ff0: /* 10909ff0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10909ff1: mov esi, ecx */
  esi = ecx;
/* 10909ff3: call dword ptr [0x10959c48] */
  esp -= 4; W32(esp, 0x10909ff9u); SPILL(); f_4e303f(); if (g_unwind) return; /* Core!?StaticClass@UPackage@@SAPAVUClass@@XZ */ RELOAD();
/* 10909ff9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10909ffb: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 10909ffd: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* 1090a004: jne 0x1090a01e */
  if (!zf) goto L_1090a01e;
L_1090a006: /* 1090a006: push 0x4a3 */
  { uint32_t v = 0x4a3u; esp -= 4; W32(esp, v); }
/* 1090a00b: push 0x1092ec98 */
  { uint32_t v = 0x1092ec98u; esp -= 4; W32(esp, v); }
/* 1090a010: push 0x1092ec8c */
  { uint32_t v = 0x1092ec8cu; esp -= 4; W32(esp, v); }
/* 1090a015: call dword ptr [0x10959d64] */
  esp -= 4; W32(esp, 0x1090a01bu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 1090a01b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090a01e: /* 1090a01e: mov ecx, esi */
  ecx = esi;
/* 1090a020: call 0x109013a2 */
  esp -= 4; W32(esp, 0x1090a025u); SPILL(); f_109013a2(); if (g_unwind) return; RELOAD();
/* 1090a025: mov eax, esi */
  eax = esi;
/* 1090a027: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090a028: ret  */
  esp += 4; SPILL(); return;
}

void f_1090a040(void) {
  LOAD_REGS();
L_1090a040: /* 1090a040: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090a042: push 0x1091bb09 */
  { uint32_t v = 0x1091bb09u; esp -= 4; W32(esp, v); }
/* 1090a047: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090a04d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a04e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090a055: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a056: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090a057: mov esi, ecx */
  esi = ecx;
/* 1090a059: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 1090a05d: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 1090a060: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a061: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090a063: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 1090a06b: call 0x10901320 */
  esp -= 4; W32(esp, 0x1090a070u); SPILL(); f_10901320(); if (g_unwind) return; RELOAD();
/* 1090a070: mov ecx, esi */
  ecx = esi;
/* 1090a072: mov dword ptr [esp + 0x10], 0xffffffff */
  W32((uint32_t)(esp + 0x10u), 0xffffffffu);
/* 1090a07a: call dword ptr [0x10959c44] */
  esp -= 4; W32(esp, 0x1090a080u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 1090a080: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 1090a084: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090a085: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090a08c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a08f: ret  */
  esp += 4; SPILL(); return;
}

void f_1090a0b0(void) {
  LOAD_REGS();
L_1090a0b0: /* 1090a0b0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090a0b2: push 0x1091bb29 */
  { uint32_t v = 0x1091bb29u; esp -= 4; W32(esp, v); }
/* 1090a0b7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090a0bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a0be: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090a0c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a0c6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090a0c7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090a0c8: mov esi, ecx */
  esi = ecx;
/* 1090a0ca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090a0cb: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 1090a0cf: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 1090a0d2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1090a0d4: mov ebx, dword ptr [0x10959d64] */
  ebx = R32((uint32_t)(0x10959d64u));
/* 1090a0da: mov dword ptr [esp + 0x18], 0 */
  W32((uint32_t)(esp + 0x18u), 0x0u);
/* 1090a0e2: jge 0x1090a0f8 */
  if ((sf == of)) goto L_1090a0f8;
L_1090a0e4: /* 1090a0e4: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 1090a0e9: push 0x1092ebd8 */
  { uint32_t v = 0x1092ebd8u; esp -= 4; W32(esp, v); }
/* 1090a0ee: push 0x1092ebb4 */
  { uint32_t v = 0x1092ebb4u; esp -= 4; W32(esp, v); }
/* 1090a0f3: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1090a0f5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a0f5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090a0f8: /* 1090a0f8: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a0fb: jle 0x1090a111 */
  if ((zf || sf != of)) goto L_1090a111;
L_1090a0fd: /* 1090a0fd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 1090a102: push 0x1092ebd8 */
  { uint32_t v = 0x1092ebd8u; esp -= 4; W32(esp, v); }
/* 1090a107: push 0x1092eb98 */
  { uint32_t v = 0x1092eb98u; esp -= 4; W32(esp, v); }
/* 1090a10c: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x1090a10eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a10e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090a111: /* 1090a111: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 1090a113: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090a114: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090a116: mov ecx, esi */
  ecx = esi;
/* 1090a118: call dword ptr [0x10959c4c] */
  esp -= 4; W32(esp, 0x1090a11eu); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 1090a11e: mov ecx, esi */
  ecx = esi;
/* 1090a120: mov dword ptr [esp + 0x18], 0xffffffff */
  W32((uint32_t)(esp + 0x18u), 0xffffffffu);
/* 1090a128: call dword ptr [0x10959c44] */
  esp -= 4; W32(esp, 0x1090a12eu); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 1090a12e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 1090a132: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090a133: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090a134: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090a135: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090a13c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a13f: ret  */
  esp += 4; SPILL(); return;
}

void f_1090a170(void) {
  LOAD_REGS();
L_1090a170: /* 1090a170: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090a171: mov ebx, dword ptr [esp + 8] */
  ebx = R32((uint32_t)(esp + 0x8u));
/* 1090a175: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1090a177: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090a178: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090a179: mov esi, dword ptr [0x10959d64] */
  esi = R32((uint32_t)(0x10959d64u));
/* 1090a17f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090a180: mov ebp, ecx */
  ebp = ecx;
/* 1090a182: jge 0x1090a198 */
  if ((sf == of)) goto L_1090a198;
L_1090a184: /* 1090a184: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 1090a189: push 0x1092ebd8 */
  { uint32_t v = 0x1092ebd8u; esp -= 4; W32(esp, v); }
/* 1090a18e: push 0x1092ebc8 */
  { uint32_t v = 0x1092ebc8u; esp -= 4; W32(esp, v); }
/* 1090a193: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090a195u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a195: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090a198: /* 1090a198: cmp ebx, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a19b: jle 0x1090a1b1 */
  if ((zf || sf != of)) goto L_1090a1b1;
L_1090a19d: /* 1090a19d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 1090a1a2: push 0x1092ebd8 */
  { uint32_t v = 0x1092ebd8u; esp -= 4; W32(esp, v); }
/* 1090a1a7: push 0x1092ebb4 */
  { uint32_t v = 0x1092ebb4u; esp -= 4; W32(esp, v); }
/* 1090a1ac: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090a1aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a1ae: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090a1b1: /* 1090a1b1: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 1090a1b5: lea edi, [ebx + eax] */
  edi = (uint32_t)(ebx + eax);
/* 1090a1b8: cmp edi, dword ptr [ebp + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a1bb: jle 0x1090a1d1 */
  if ((zf || sf != of)) goto L_1090a1d1;
L_1090a1bd: /* 1090a1bd: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 1090a1c2: push 0x1092ebd8 */
  { uint32_t v = 0x1092ebd8u; esp -= 4; W32(esp, v); }
/* 1090a1c7: push 0x1092eb98 */
  { uint32_t v = 0x1092eb98u; esp -= 4; W32(esp, v); }
/* 1090a1cc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090a1ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a1ce: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090a1d1: /* 1090a1d1: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a1d3: jge 0x1090a1f0 */
  if ((sf == of)) goto L_1090a1f0;
L_1090a1d5: /* 1090a1d5: mov esi, ebx */
  esi = ebx;
/* 1090a1d7: imul esi, esi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(0x1cu);
  esi = (uint32_t)r;
  }
/* 1090a1da: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* 1090a1dc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1090a1e0: /* 1090a1e0: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 1090a1e3: add ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1090a1e5: call 0x1090106e */
  esp -= 4; W32(esp, 0x1090a1eau); SPILL(); f_1090106e(); if (g_unwind) return; RELOAD();
/* 1090a1ea: add esi, 0x1c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 1090a1ed: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* 1090a1ee: jne 0x1090a1e0 */
  if (!zf) goto L_1090a1e0;
L_1090a1f0: /* 1090a1f0: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 1090a1f4: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 1090a1f6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a1f7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090a1f8: mov ecx, ebp */
  ecx = ebp;
/* 1090a1fa: call dword ptr [0x10959c4c] */
  esp -= 4; W32(esp, 0x1090a200u); SPILL(); f_4e438b(); if (g_unwind) return; /* Core!?Remove@FArray@@QAEXHHH@Z */ RELOAD();
/* 1090a200: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090a201: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090a202: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090a203: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090a204: ret 8 */
  esp += 12; SPILL(); return;
}

void f_1090a240(void) {
  LOAD_REGS();
L_1090a240: /* 1090a240: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090a241: mov ebp, esp */
  ebp = esp;
/* 1090a243: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090a245: push 0x1091bb71 */
  { uint32_t v = 0x1091bb71u; esp -= 4; W32(esp, v); }
/* 1090a24a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090a250: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a251: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090a258: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090a25b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090a25c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090a25d: mov esi, dword ptr [0x10959c0c] */
  esi = R32((uint32_t)(0x10959c0cu));
/* 1090a263: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090a264: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090a267: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 1090a26a: push 0x1092eee4 */
  { uint32_t v = 0x1092eee4u; esp -= 4; W32(esp, v); }
/* 1090a26f: xor ebx, ebx */
  ebx = 0;
/* 1090a271: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a272: mov edi, ecx */
  edi = ecx;
/* 1090a274: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 1090a277: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090a279u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a279: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a27c: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090a27e: je 0x1090a32d */
  if (zf) goto L_1090a32d;
L_1090a284: /* 1090a284: call dword ptr [0x10959e98] */
  esp -= 4; W32(esp, 0x1090a28au); SPILL(); f_6cb49c(); if (g_unwind) return; /* Engine!?StaticClass@UEngine@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a28a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a28b: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090a28e: call 0x1090146f */
  esp -= 4; W32(esp, 0x1090a293u); SPILL(); f_1090146f(); if (g_unwind) return; RELOAD();
/* 1090a293: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a298: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 1090a29b: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090a29e: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a2a0: jge 0x1090a596 */
  if ((sf == of)) goto L_1090a596;
L_1090a2a6: /* 1090a2a6: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090a2a8: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 1090a2ab: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 1090a2ae: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090a2b0: je 0x1090a596 */
  if (zf) goto L_1090a596;
L_1090a2b6: /* 1090a2b6: cmp dword ptr [ecx + 0x30], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x30u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090a2b9: je 0x1090a596 */
  if (zf) goto L_1090a596;
L_1090a2bf: /* 1090a2bf: mov edx, dword ptr [0x1095a324] */
  edx = R32((uint32_t)(0x1095a324u));
/* 1090a2c5: cmp dword ptr [edx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090a2c7: je 0x1090a596 */
  if (zf) goto L_1090a596;
L_1090a2cd: /* 1090a2cd: mov ecx, dword ptr [0x10959cfc] */
  ecx = R32((uint32_t)(0x10959cfcu));
/* 1090a2d3: cmp dword ptr [ecx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090a2d5: jne 0x1090a2f4 */
  if (!zf) goto L_1090a2f4;
L_1090a2d7: /* 1090a2d7: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 1090a2da: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 1090a2dd: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090a2df: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 1090a2e2: lea ecx, [eax + 0x2c] */
  ecx = (uint32_t)(eax + 0x2cu);
/* 1090a2e5: mov eax, dword ptr [0x10959d0c] */
  eax = R32((uint32_t)(0x10959d0cu));
/* 1090a2ea: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090a2ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a2ed: push 0x1092eec0 */
  { uint32_t v = 0x1092eec0u; esp -= 4; W32(esp, v); }
/* 1090a2f2: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x1090a2f4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_1090a2f4: /* 1090a2f4: mov ecx, dword ptr [0x1095a324] */
  ecx = R32((uint32_t)(0x1095a324u));
/* 1090a2fa: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1090a2fc: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090a2fe: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a300: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x1090a303u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a303: mov eax, dword ptr [0x1095a324] */
  eax = R32((uint32_t)(0x1095a324u));
/* 1090a308: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090a30a: call dword ptr [0x1095a3b0] */
  esp -= 4; W32(esp, 0x1090a310u); SPILL(); f_d8237e(); if (g_unwind) return; /* Window!??BWWindow@@QBEPAUHWND__@@XZ */ RELOAD();
/* 1090a310: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a311: call dword ptr [0x1095a134] */
  esp -= 4; W32(esp, 0x1090a317u); SPILL(); call_ind(R32(0x1095a134u)); if (g_unwind) return; /* USER32!SetFocus */ RELOAD();
/* 1090a317: mov ecx, dword ptr [0x1095a324] */
  ecx = R32((uint32_t)(0x1095a324u));
/* 1090a31d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1090a31f: add ecx, 0x40 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1090a322: call dword ptr [0x1095a320] */
  esp -= 4; W32(esp, 0x1090a328u); SPILL(); f_d81a14(); if (g_unwind) return; /* Window!?ScrollCaret@WEdit@@QAEXXZ */ RELOAD();
/* 1090a328: jmp 0x1090a596 */
  goto L_1090a596;
L_1090a32d: /* 1090a32d: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 1090a330: push 0x1092eea8 */
  { uint32_t v = 0x1092eea8u; esp -= 4; W32(esp, v); }
/* 1090a335: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090a336: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090a338u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a338: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a33b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090a33d: je 0x1090a395 */
  if (zf) goto L_1090a395;
L_1090a33f: /* 1090a33f: call dword ptr [0x10959e98] */
  esp -= 4; W32(esp, 0x1090a345u); SPILL(); f_6cb49c(); if (g_unwind) return; /* Engine!?StaticClass@UEngine@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a345: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a346: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090a349: call 0x1090146f */
  esp -= 4; W32(esp, 0x1090a34eu); SPILL(); f_1090146f(); if (g_unwind) return; RELOAD();
/* 1090a34e: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a353: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 1090a356: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090a359: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a35b: jge 0x1090a596 */
  if ((sf == of)) goto L_1090a596;
L_1090a361: /* 1090a361: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090a363: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 1090a366: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 1090a369: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090a36b: je 0x1090a596 */
  if (zf) goto L_1090a596;
L_1090a371: /* 1090a371: cmp dword ptr [ecx + 0x30], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x30u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090a374: je 0x1090a596 */
  if (zf) goto L_1090a596;
L_1090a37a: /* 1090a37a: mov edx, ecx */
  edx = ecx;
/* 1090a37c: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 1090a37f: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090a381: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090a383: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x1090a389u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a389: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a38a: call dword ptr [0x1095a154] */
  esp -= 4; W32(esp, 0x1090a390u); SPILL(); call_ind(R32(0x1095a154u)); if (g_unwind) return; /* USER32!SetForegroundWindow */ RELOAD();
/* 1090a390: jmp 0x1090a596 */
  goto L_1090a596;
L_1090a395: /* 1090a395: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 1090a398: push 0x1092ee8c */
  { uint32_t v = 0x1092ee8cu; esp -= 4; W32(esp, v); }
/* 1090a39d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a39e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090a3a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a3a0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a3a3: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090a3a5: je 0x1090a4c7 */
  if (zf) goto L_1090a4c7;
L_1090a3ab: /* 1090a3ab: call dword ptr [0x10959e98] */
  esp -= 4; W32(esp, 0x1090a3b1u); SPILL(); f_6cb49c(); if (g_unwind) return; /* Engine!?StaticClass@UEngine@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a3b1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a3b2: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090a3b5: call 0x1090146f */
  esp -= 4; W32(esp, 0x1090a3bau); SPILL(); f_1090146f(); if (g_unwind) return; RELOAD();
/* 1090a3ba: mov ecx, dword ptr [0x10959ce8] */
  ecx = R32((uint32_t)(0x10959ce8u));
/* 1090a3c0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 1090a3c3: mov edi, dword ptr [ebp - 0x34] */
  edi = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090a3c6: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a3c8: jge 0x1090a4b0 */
  if ((sf == of)) goto L_1090a4b0;
L_1090a3ce: /* 1090a3ce: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 1090a3d1: call dword ptr [0x10959c10] */
  esp -= 4; W32(esp, 0x1090a3d7u); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 1090a3d7: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090a3d9: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090a3dc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090a3dd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a3de: push 0x1092ee7c */
  { uint32_t v = 0x1092ee7cu; esp -= 4; W32(esp, v); }
/* 1090a3e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090a3e4: call dword ptr [0x10959c14] */
  esp -= 4; W32(esp, 0x1090a3eau); SPILL(); f_4e194c(); if (g_unwind) return; /* Core!?ParseObject@@YAHPBG0PAVUClass@@AAPAVUObject@@PAV2@@Z */ RELOAD();
/* 1090a3ea: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a3ed: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090a3ef: je 0x1090a4b0 */
  if (zf) goto L_1090a4b0;
L_1090a3f5: /* 1090a3f5: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 1090a3f8: call dword ptr [0x10959c18] */
  esp -= 4; W32(esp, 0x1090a3feu); SPILL(); f_4e255e(); if (g_unwind) return; /* Core!?GetDefaultActor@UClass@@QAEPAVAActor@@XZ */ RELOAD();
/* 1090a3fe: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090a400: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 1090a403: je 0x1090a596 */
  if (zf) goto L_1090a596;
L_1090a409: /* 1090a409: mov esi, dword ptr [eax + 0x88] */
  esi = R32((uint32_t)(eax + 0x88u));
/* 1090a40f: or esi, 0x40000000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 1090a415: push 0x160 */
  { uint32_t v = 0x160u; esp -= 4; W32(esp, v); }
/* 1090a41a: mov dword ptr [eax + 0x88], esi */
  W32((uint32_t)(eax + 0x88u), esi);
/* 1090a420: call 0x1090145b */
  esp -= 4; W32(esp, 0x1090a425u); SPILL(); f_1090145b(); if (g_unwind) return; RELOAD();
/* 1090a425: mov esi, eax */
  esi = eax;
/* 1090a427: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a42a: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 1090a42d: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090a42f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 1090a433: je 0x1090a461 */
  if (zf) goto L_1090a461;
L_1090a435: /* 1090a435: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a437: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090a438: push 0x10958ea4 */
  { uint32_t v = 0x10958ea4u; esp -= 4; W32(esp, v); }
/* 1090a43d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090a43e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a43f: mov ecx, esp */
  ecx = esp;
/* 1090a441: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 1090a444: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a446: push 0x1092ee64 */
  { uint32_t v = 0x1092ee64u; esp -= 4; W32(esp, v); }
/* 1090a44b: call dword ptr [0x10959c1c] */
  esp -= 4; W32(esp, 0x1090a451u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 1090a451: mov ecx, esi */
  ecx = esi;
/* 1090a453: call dword ptr [0x1095a31c] */
  esp -= 4; W32(esp, 0x1090a459u); SPILL(); f_d82347(); if (g_unwind) return; /* Window!??0WObjectProperties@@QAE@VFName@@KPBGPAVWWindow@@H@Z */ RELOAD();
/* 1090a459: mov dword ptr [esi], 0x10921170 */
  W32((uint32_t)(esi), 0x10921170u);
/* 1090a45f: jmp 0x1090a463 */
  goto L_1090a463;
L_1090a461: /* 1090a461: xor esi, esi */
  esi = 0;
L_1090a463: /* 1090a463: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a468: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090a46a: mov eax, dword ptr [ecx + edi*4] */
  eax = R32((uint32_t)(ecx + edi*4));
/* 1090a46d: mov edx, dword ptr [eax + 0x30] */
  edx = R32((uint32_t)(eax + 0x30u));
/* 1090a470: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 1090a473: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090a475: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090a477: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090a47b: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x1090a481u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a481: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a482: mov ecx, esi */
  ecx = esi;
/* 1090a484: call dword ptr [0x1095a318] */
  esp -= 4; W32(esp, 0x1090a48au); SPILL(); f_d816a4(); if (g_unwind) return; /* Window!?OpenWindow@WProperties@@QAEXPAUHWND__@@@Z */ RELOAD();
/* 1090a48a: mov eax, dword ptr [esi + 0xfc] */
  eax = R32((uint32_t)(esi + 0xfcu));
/* 1090a490: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* 1090a496: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a498: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 1090a49b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090a49c: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0x1090a4a2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a4a2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 1090a4a4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a4a6: mov ecx, esi */
  ecx = esi;
/* 1090a4a8: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x1090a4abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a4ab: jmp 0x1090a596 */
  goto L_1090a596;
L_1090a4b0: /* 1090a4b0: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 1090a4b3: push 0x1092ee40 */
  { uint32_t v = 0x1092ee40u; esp -= 4; W32(esp, v); }
/* 1090a4b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a4b9: call dword ptr [0x10959cbc] */
  esp -= 4; W32(esp, 0x1090a4bfu); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 1090a4bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a4c2: jmp 0x1090a596 */
  goto L_1090a596;
L_1090a4c7: /* 1090a4c7: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 1090a4ca: push 0x1092ee28 */
  { uint32_t v = 0x1092ee28u; esp -= 4; W32(esp, v); }
/* 1090a4cf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090a4d0: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090a4d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a4d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a4d5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090a4d7: je 0x1090a5ae */
  if (zf) goto L_1090a5ae;
L_1090a4dd: /* 1090a4dd: call dword ptr [0x10959e98] */
  esp -= 4; W32(esp, 0x1090a4e3u); SPILL(); f_6cb49c(); if (g_unwind) return; /* Engine!?StaticClass@UEngine@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a4e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a4e4: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090a4e7: call 0x1090146f */
  esp -= 4; W32(esp, 0x1090a4ecu); SPILL(); f_1090146f(); if (g_unwind) return; RELOAD();
/* 1090a4ec: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a4f1: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 1090a4f4: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090a4f7: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a4f9: jge 0x1090a596 */
  if ((sf == of)) goto L_1090a596;
L_1090a4ff: /* 1090a4ff: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090a501: mov edx, dword ptr [edx + ecx*4] */
  edx = R32((uint32_t)(edx + ecx*4));
/* 1090a504: cmp dword ptr [edx + 0x30], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x30u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090a507: je 0x1090a596 */
  if (zf) goto L_1090a596;
L_1090a50d: /* 1090a50d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090a50f: mov ecx, dword ptr [eax + ecx*4] */
  ecx = R32((uint32_t)(eax + ecx*4));
/* 1090a512: mov ecx, dword ptr [ecx + 0x30] */
  ecx = R32((uint32_t)(ecx + 0x30u));
/* 1090a515: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 1090a518: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 1090a51a: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 1090a51d: call dword ptr [0x10959e90] */
  esp -= 4; W32(esp, 0x1090a523u); SPILL(); f_6c62fd(); if (g_unwind) return; /* Engine!?GetLevel@AActor@@QBEPAVULevel@@XZ */ RELOAD();
/* 1090a523: mov esi, eax */
  esi = eax;
/* 1090a525: call dword ptr [0x10959c10] */
  esp -= 4; W32(esp, 0x1090a52bu); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 1090a52b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090a52c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 1090a52e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090a52f: push 0x1092edec */
  { uint32_t v = 0x1092edecu; esp -= 4; W32(esp, v); }
/* 1090a534: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090a535: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a536: call dword ptr [0x10959c20] */
  esp -= 4; W32(esp, 0x1090a53cu); SPILL(); f_4e302b(); if (g_unwind) return; /* Core!?StaticLoadObject@UObject@@SAPAV1@PAVUClass@@PAV1@PBG2KPAVUPackageMap@@@Z */ RELOAD();
/* 1090a53c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a53f: push 0x10958ea4 */
  { uint32_t v = 0x10958ea4u; esp -= 4; W32(esp, v); }
/* 1090a544: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 1090a547: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x1090a54du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 1090a54d: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 1090a550: call dword ptr [0x10959b08] */
  esp -= 4; W32(esp, 0x1090a556u); SPILL(); f_4e22ed(); if (g_unwind) return; /* Core!??0FOutputDevice@@QAE@XZ */ RELOAD();
/* 1090a556: mov dword ptr [ebp - 0x40], 0x10921164 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x10921164u);
/* 1090a55d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090a55e: push 0x1092ede0 */
  { uint32_t v = 0x1092ede0u; esp -= 4; W32(esp, v); }
/* 1090a563: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 1090a566: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a567: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 1090a56b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
L_1090a56c: /* 1090a56c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090a56d: call dword ptr [0x10959c24] */
  esp -= 4; W32(esp, 0x1090a573u); SPILL(); f_4e4499(); if (g_unwind) return; /* Core!?ExportToOutputDevice@UExporter@@SAXPAVUObject@@PAV1@AAVFOutputDevice@@PBGH@Z */ RELOAD();
/* 1090a573: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a576: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 1090a579: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090a57fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090a57f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a580: call dword ptr [0x10959c28] */
  esp -= 4; W32(esp, 0x1090a586u); SPILL(); f_4e15eb(); if (g_unwind) return; /* Core!?appClipboardCopy@@YAXPBG@Z */ RELOAD();
/* 1090a586: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a589: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 1090a58c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090a590: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090a596u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_1090a596: /* 1090a596: mov eax, 1 */
  eax = 0x1u;
/* 1090a59b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090a59e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090a5a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090a5a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090a5a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090a5a8: mov esp, ebp */
  esp = ebp;
/* 1090a5aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090a5ab: ret 8 */
  esp += 12; SPILL(); return;
L_1090a5ae: /* 1090a5ae: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 1090a5b1: push 0x1092ee64 */
  { uint32_t v = 0x1092ee64u; esp -= 4; W32(esp, v); }
/* 1090a5b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090a5b7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090a5b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a5b9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a5bc: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090a5be: je 0x1090a8d0 */
  if (zf) goto L_1090a8d0;
L_1090a5c4: /* 1090a5c4: call dword ptr [0x10959e98] */
  esp -= 4; W32(esp, 0x1090a5cau); SPILL(); f_6cb49c(); if (g_unwind) return; /* Engine!?StaticClass@UEngine@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a5ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a5cb: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090a5ce: call 0x1090146f */
  esp -= 4; W32(esp, 0x1090a5d3u); SPILL(); f_1090146f(); if (g_unwind) return; RELOAD();
/* 1090a5d3: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a5d8: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 1090a5db: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 1090a5de: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090a5e1: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a5e3: jge 0x1090a596 */
  if ((sf == of)) goto L_1090a596;
L_1090a5e5: /* 1090a5e5: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 1090a5e8: call dword ptr [0x10959c10] */
  esp -= 4; W32(esp, 0x1090a5eeu); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 1090a5ee: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090a5f0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 1090a5f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a5f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a5f5: push 0x1092ee7c */
  { uint32_t v = 0x1092ee7cu; esp -= 4; W32(esp, v); }
/* 1090a5fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090a5fb: call dword ptr [0x10959c14] */
  esp -= 4; W32(esp, 0x1090a601u); SPILL(); f_4e194c(); if (g_unwind) return; /* Core!?ParseObject@@YAHPBG0PAVUClass@@AAPAVUObject@@PAV2@@Z */ RELOAD();
/* 1090a601: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a604: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a606: je 0x1090a772 */
  if (zf) goto L_1090a772;
L_1090a60c: /* 1090a60c: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 1090a60f: push 0x1092edc8 */
  { uint32_t v = 0x1092edc8u; esp -= 4; W32(esp, v); }
/* 1090a614: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090a615: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090a617u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a617: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a61a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a61c: je 0x1090a684 */
  if (zf) goto L_1090a684;
L_1090a61e: /* 1090a61e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090a621: call dword ptr [0x10959c2c] */
  esp -= 4; W32(esp, 0x1090a627u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
L_1090a627: /* 1090a627: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_1090a62a: /* 1090a62a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090a62d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a62f: je 0x1090a8b9 */
  if (zf) goto L_1090a8b9;
L_1090a635: /* 1090a635: push 0x160 */
  { uint32_t v = 0x160u; esp -= 4; W32(esp, v); }
/* 1090a63a: call 0x1090145b */
  esp -= 4; W32(esp, 0x1090a63fu); SPILL(); f_1090145b(); if (g_unwind) return; RELOAD();
/* 1090a63f: mov esi, eax */
  esi = eax;
/* 1090a641: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a644: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 1090a647: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a649: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 1090a64d: je 0x1090a802 */
  if (zf) goto L_1090a802;
L_1090a653: /* 1090a653: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a655: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090a657: push 0x10958ea4 */
  { uint32_t v = 0x10958ea4u; esp -= 4; W32(esp, v); }
/* 1090a65c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090a65e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a65f: mov ecx, esp */
  ecx = esp;
/* 1090a661: mov dword ptr [ebp - 0x20], esp */
  W32((uint32_t)(ebp + 0xffffffe0u), esp);
/* 1090a664: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a666: push 0x1092ee64 */
  { uint32_t v = 0x1092ee64u; esp -= 4; W32(esp, v); }
/* 1090a66b: call dword ptr [0x10959c1c] */
  esp -= 4; W32(esp, 0x1090a671u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 1090a671: mov ecx, esi */
  ecx = esi;
/* 1090a673: call dword ptr [0x1095a31c] */
  esp -= 4; W32(esp, 0x1090a679u); SPILL(); f_d82347(); if (g_unwind) return; /* Window!??0WObjectProperties@@QAE@VFName@@KPBGPAVWWindow@@H@Z */ RELOAD();
/* 1090a679: mov dword ptr [esi], 0x10921170 */
  W32((uint32_t)(esi), 0x10921170u);
/* 1090a67f: jmp 0x1090a804 */
  goto L_1090a804;
L_1090a684: /* 1090a684: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a689: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090a68b: mov eax, dword ptr [ecx + ebx*4] */
  eax = R32((uint32_t)(ecx + ebx*4));
/* 1090a68e: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 1090a691: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a693: je 0x1090a6a1 */
  if (zf) goto L_1090a6a1;
L_1090a695: /* 1090a695: mov edx, ecx */
  edx = ecx;
/* 1090a697: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 1090a69a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090a69c: mov ebx, dword ptr [ecx + 0x30] */
  ebx = R32((uint32_t)(ecx + 0x30u));
/* 1090a69f: jmp 0x1090a6a3 */
  goto L_1090a6a3;
L_1090a6a1: /* 1090a6a1: xor ebx, ebx */
  ebx = 0;
L_1090a6a3: /* 1090a6a3: mov dword ptr [ebp - 0x20], 0x497423f0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x497423f0u);
/* 1090a6aa: call dword ptr [0x10959e8c] */
  esp -= 4; W32(esp, 0x1090a6b0u); SPILL(); f_6c8094(); if (g_unwind) return; /* Engine!?StaticClass@AActor@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a6b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a6b1: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 1090a6b4: call 0x1090146f */
  esp -= 4; W32(esp, 0x1090a6b9u); SPILL(); f_1090146f(); if (g_unwind) return; RELOAD();
/* 1090a6b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1090a6c0: /* 1090a6c0: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a6c5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 1090a6c8: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 1090a6cb: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a6cd: jge 0x1090a62a */
  if ((sf == of)) goto L_1090a62a;
L_1090a6d3: /* 1090a6d3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a6d5: je 0x1090a6fb */
  if (zf) goto L_1090a6fb;
L_1090a6d7: /* 1090a6d7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090a6d9: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 1090a6dc: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 1090a6e2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a6e3: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1090a6e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a6e9: call 0x109013fc */
  esp -= 4; W32(esp, 0x1090a6eeu); SPILL(); f_109013fc(); if (g_unwind) return; RELOAD();
/* 1090a6ee: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 1090a6f1: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a6f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a6f9: jmp 0x1090a701 */
  goto L_1090a701;
L_1090a6fb: /* 1090a6fb: fld qword ptr [0x10921158] */
  { double v = F64((uint32_t)(0x10921158u)); FPUSH(v); }
L_1090a701: /* 1090a701: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a703: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 1090a706: je 0x1090a726 */
  if (zf) goto L_1090a726;
L_1090a708: /* 1090a708: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090a70a: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 1090a70d: call dword ptr [0x10959e90] */
  esp -= 4; W32(esp, 0x1090a713u); SPILL(); f_6c62fd(); if (g_unwind) return; /* Engine!?GetLevel@AActor@@QBEPAVULevel@@XZ */ RELOAD();
/* 1090a713: mov ecx, ebx */
  ecx = ebx;
/* 1090a715: mov edi, eax */
  edi = eax;
/* 1090a717: call dword ptr [0x10959e90] */
  esp -= 4; W32(esp, 0x1090a71du); SPILL(); f_6c62fd(); if (g_unwind) return; /* Engine!?GetLevel@AActor@@QBEPAVULevel@@XZ */ RELOAD();
/* 1090a71d: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090a71f: jne 0x1090a765 */
  if (!zf) goto L_1090a765;
L_1090a721: /* 1090a721: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
L_1090a726: /* 1090a726: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090a728: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 1090a72b: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 1090a731: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a734: jne 0x1090a765 */
  if (!zf) goto L_1090a765;
L_1090a736: /* 1090a736: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090a739: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090a73a: call dword ptr [0x10959cac] */
  esp -= 4; W32(esp, 0x1090a740u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 1090a740: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a742: je 0x1090a765 */
  if (zf) goto L_1090a765;
L_1090a744: /* 1090a744: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 1090a747: fcomp dword ptr [ebp - 0x20] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe0u)));
  FPOP();
/* 1090a74a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1090a74c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 1090a74f: jp 0x1090a765 */
  if (pf) goto L_1090a765;
L_1090a751: /* 1090a751: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1090a754: mov ecx, dword ptr [0x10959ce8] */
  ecx = R32((uint32_t)(0x10959ce8u));
/* 1090a75a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090a75c: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 1090a75f: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 1090a762: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_1090a765: /* 1090a765: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 1090a768: call 0x109013a2 */
  esp -= 4; W32(esp, 0x1090a76du); SPILL(); f_109013a2(); if (g_unwind) return; RELOAD();
/* 1090a76d: jmp 0x1090a6c0 */
  goto L_1090a6c0;
L_1090a772: /* 1090a772: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090a775: call dword ptr [0x10959c30] */
  esp -= 4; W32(esp, 0x1090a77bu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 1090a77b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 1090a77e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090a781: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a782: push 0x1092edb8 */
  { uint32_t v = 0x1092edb8u; esp -= 4; W32(esp, v); }
/* 1090a787: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090a788: call dword ptr [0x10959c34] */
  esp -= 4; W32(esp, 0x1090a78eu); SPILL(); f_4e3f67(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAVFName@@@Z */ RELOAD();
/* 1090a78e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a791: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a793: je 0x1090a62a */
  if (zf) goto L_1090a62a;
L_1090a799: /* 1090a799: call dword ptr [0x10959e8c] */
  esp -= 4; W32(esp, 0x1090a79fu); SPILL(); f_6c8094(); if (g_unwind) return; /* Engine!?StaticClass@AActor@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a79f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a7a0: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 1090a7a3: call 0x1090146f */
  esp -= 4; W32(esp, 0x1090a7a8u); SPILL(); f_1090146f(); if (g_unwind) return; RELOAD();
/* 1090a7a8: jmp 0x1090a7b0 */
  goto L_1090a7b0;
L_1090a7b0: /* 1090a7b0: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a7b5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 1090a7b8: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 1090a7bb: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a7bd: jge 0x1090a62a */
  if ((sf == of)) goto L_1090a62a;
L_1090a7c3: /* 1090a7c3: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090a7c5: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 1090a7c8: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 1090a7ce: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a7d1: jne 0x1090a7f8 */
  if (!zf) goto L_1090a7f8;
L_1090a7d3: /* 1090a7d3: call dword ptr [0x10959c38] */
  esp -= 4; W32(esp, 0x1090a7d9u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 1090a7d9: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090a7dc: mov edi, eax */
  edi = eax;
/* 1090a7de: call dword ptr [0x10959c3c] */
  esp -= 4; W32(esp, 0x1090a7e4u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 1090a7e4: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090a7e6: jne 0x1090a7f8 */
  if (!zf) goto L_1090a7f8;
L_1090a7e8: /* 1090a7e8: mov ecx, dword ptr [0x10959ce8] */
  ecx = R32((uint32_t)(0x10959ce8u));
/* 1090a7ee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090a7f0: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 1090a7f3: jmp 0x1090a627 */
  goto L_1090a627;
L_1090a7f8: /* 1090a7f8: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 1090a7fb: call 0x109013a2 */
  esp -= 4; W32(esp, 0x1090a800u); SPILL(); f_109013a2(); if (g_unwind) return; RELOAD();
/* 1090a800: jmp 0x1090a7b0 */
  goto L_1090a7b0;
L_1090a802: /* 1090a802: xor esi, esi */
  esi = 0;
L_1090a804: /* 1090a804: mov ecx, dword ptr [0x10959ce8] */
  ecx = R32((uint32_t)(0x10959ce8u));
/* 1090a80a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090a80c: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090a80f: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 1090a812: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 1090a815: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 1090a818: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 1090a81a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 1090a81c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090a820: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0x1090a826u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a826: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a827: mov ecx, esi */
  ecx = esi;
/* 1090a829: call dword ptr [0x1095a318] */
  esp -= 4; W32(esp, 0x1090a82fu); SPILL(); f_d816a4(); if (g_unwind) return; /* Window!?OpenWindow@WProperties@@QAEXPAUHWND__@@@Z */ RELOAD();
/* 1090a82f: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* 1090a835: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* 1090a83b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a83d: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 1090a840: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a841: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x1090a847u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a847: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 1090a849: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a84b: mov ecx, esi */
  ecx = esi;
/* 1090a84d: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x1090a850u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a850: call dword ptr [0x10959e8c] */
  esp -= 4; W32(esp, 0x1090a856u); SPILL(); f_6c8094(); if (g_unwind) return; /* Engine!?StaticClass@AActor@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a856: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a857: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090a85a: call 0x1090146f */
  esp -= 4; W32(esp, 0x1090a85fu); SPILL(); f_1090146f(); if (g_unwind) return; RELOAD();
/* 1090a85f: nop  */
L_1090a860: /* 1090a860: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a865: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 1090a868: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090a86b: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a86d: jge 0x1090a888 */
  if ((sf == of)) goto L_1090a888;
L_1090a86f: /* 1090a86f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090a871: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 1090a874: and dword ptr [eax + 0x88], 0xbfffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0xbfffffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 1090a87e: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090a881: call 0x109013a2 */
  esp -= 4; W32(esp, 0x1090a886u); SPILL(); f_109013a2(); if (g_unwind) return; RELOAD();
/* 1090a886: jmp 0x1090a860 */
  goto L_1090a860;
L_1090a888: /* 1090a888: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090a88b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a88d: je 0x1090a596 */
  if (zf) goto L_1090a596;
L_1090a893: /* 1090a893: call dword ptr [0x10959e8c] */
  esp -= 4; W32(esp, 0x1090a899u); SPILL(); f_6c8094(); if (g_unwind) return; /* Engine!?StaticClass@AActor@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a899: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a89a: mov ecx, esi */
  ecx = esi;
/* 1090a89c: call dword ptr [0x10959cac] */
  esp -= 4; W32(esp, 0x1090a8a2u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 1090a8a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a8a4: je 0x1090a596 */
  if (zf) goto L_1090a596;
L_1090a8aa: /* 1090a8aa: or dword ptr [esi + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x88u), r);
  }
/* 1090a8b4: jmp 0x1090a596 */
  goto L_1090a596;
L_1090a8b9: /* 1090a8b9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 1090a8bc: push 0x1092ed90 */
  { uint32_t v = 0x1092ed90u; esp -= 4; W32(esp, v); }
/* 1090a8c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a8c2: call dword ptr [0x10959cbc] */
  esp -= 4; W32(esp, 0x1090a8c8u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 1090a8c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a8cb: jmp 0x1090a596 */
  goto L_1090a596;
L_1090a8d0: /* 1090a8d0: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 1090a8d3: push 0x1092ed68 */
  { uint32_t v = 0x1092ed68u; esp -= 4; W32(esp, v); }
/* 1090a8d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090a8d9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090a8dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a8db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a8de: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090a8e0: je 0x1090aab0 */
  if (zf) goto L_1090aab0;
L_1090a8e6: /* 1090a8e6: call dword ptr [0x10959e98] */
  esp -= 4; W32(esp, 0x1090a8ecu); SPILL(); f_6cb49c(); if (g_unwind) return; /* Engine!?StaticClass@UEngine@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a8ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a8ed: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090a8f0: call 0x1090146f */
  esp -= 4; W32(esp, 0x1090a8f5u); SPILL(); f_1090146f(); if (g_unwind) return; RELOAD();
/* 1090a8f5: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a8fa: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 1090a8fd: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090a900: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a902: jge 0x1090aa99 */
  if ((sf == of)) goto L_1090aa99;
L_1090a908: /* 1090a908: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 1090a90b: call dword ptr [0x10959c10] */
  esp -= 4; W32(esp, 0x1090a911u); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 1090a911: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090a913: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090a916: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a917: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a918: push 0x1092ee7c */
  { uint32_t v = 0x1092ee7cu; esp -= 4; W32(esp, v); }
/* 1090a91d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090a91e: call dword ptr [0x10959c14] */
  esp -= 4; W32(esp, 0x1090a924u); SPILL(); f_4e194c(); if (g_unwind) return; /* Core!?ParseObject@@YAHPBG0PAVUClass@@AAPAVUObject@@PAV2@@Z */ RELOAD();
/* 1090a924: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a927: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a929: je 0x1090aa99 */
  if (zf) goto L_1090aa99;
L_1090a92f: /* 1090a92f: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 1090a932: push 0x1092edc8 */
  { uint32_t v = 0x1092edc8u; esp -= 4; W32(esp, v); }
/* 1090a937: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090a938: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 1090a93f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090a941u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a941: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a944: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a946: je 0x1090a993 */
  if (zf) goto L_1090a993;
L_1090a948: /* 1090a948: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 1090a94b: call dword ptr [0x10959c2c] */
  esp -= 4; W32(esp, 0x1090a951u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 1090a951: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_1090a954: /* 1090a954: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090a957: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a959: je 0x1090aa82 */
  if (zf) goto L_1090aa82;
L_1090a95f: /* 1090a95f: push 0x10958ea4 */
  { uint32_t v = 0x10958ea4u; esp -= 4; W32(esp, v); }
/* 1090a964: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 1090a967: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x1090a96du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 1090a96d: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 1090a970: call dword ptr [0x10959b08] */
  esp -= 4; W32(esp, 0x1090a976u); SPILL(); f_4e22ed(); if (g_unwind) return; /* Core!??0FOutputDevice@@QAE@XZ */ RELOAD();
/* 1090a976: mov dword ptr [ebp - 0x40], 0x10921164 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x10921164u);
/* 1090a97d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090a97f: push 0x1092ed5c */
  { uint32_t v = 0x1092ed5cu; esp -= 4; W32(esp, v); }
/* 1090a984: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 1090a987: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a988: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 1090a98c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090a98e: jmp 0x1090a56c */
  goto L_1090a56c;
L_1090a993: /* 1090a993: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a998: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090a99a: mov eax, dword ptr [ecx + ebx*4] */
  eax = R32((uint32_t)(ecx + ebx*4));
/* 1090a99d: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 1090a9a0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a9a2: je 0x1090a9b0 */
  if (zf) goto L_1090a9b0;
L_1090a9a4: /* 1090a9a4: mov edx, ecx */
  edx = ecx;
/* 1090a9a6: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 1090a9a9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090a9ab: mov ebx, dword ptr [ecx + 0x30] */
  ebx = R32((uint32_t)(ecx + 0x30u));
/* 1090a9ae: jmp 0x1090a9b2 */
  goto L_1090a9b2;
L_1090a9b0: /* 1090a9b0: xor ebx, ebx */
  ebx = 0;
L_1090a9b2: /* 1090a9b2: mov dword ptr [ebp - 0x18], 0x497423f0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x497423f0u);
/* 1090a9b9: call dword ptr [0x10959e8c] */
  esp -= 4; W32(esp, 0x1090a9bfu); SPILL(); f_6c8094(); if (g_unwind) return; /* Engine!?StaticClass@AActor@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a9bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a9c0: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090a9c3: call 0x1090146f */
  esp -= 4; W32(esp, 0x1090a9c8u); SPILL(); f_1090146f(); if (g_unwind) return; RELOAD();
/* 1090a9c8: jmp 0x1090a9d0 */
  goto L_1090a9d0;
L_1090a9d0: /* 1090a9d0: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a9d5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 1090a9d8: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090a9db: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a9dd: jge 0x1090a954 */
  if ((sf == of)) goto L_1090a954;
L_1090a9e3: /* 1090a9e3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a9e5: je 0x1090aa0b */
  if (zf) goto L_1090aa0b;
L_1090a9e7: /* 1090a9e7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090a9e9: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 1090a9ec: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 1090a9f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a9f3: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1090a9f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a9f9: call 0x109013fc */
  esp -= 4; W32(esp, 0x1090a9feu); SPILL(); f_109013fc(); if (g_unwind) return; RELOAD();
/* 1090a9fe: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 1090aa01: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090aa06: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090aa09: jmp 0x1090aa11 */
  goto L_1090aa11;
L_1090aa0b: /* 1090aa0b: fld qword ptr [0x10921158] */
  { double v = F64((uint32_t)(0x10921158u)); FPUSH(v); }
L_1090aa11: /* 1090aa11: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090aa13: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 1090aa16: je 0x1090aa36 */
  if (zf) goto L_1090aa36;
L_1090aa18: /* 1090aa18: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090aa1a: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 1090aa1d: call dword ptr [0x10959e90] */
  esp -= 4; W32(esp, 0x1090aa23u); SPILL(); f_6c62fd(); if (g_unwind) return; /* Engine!?GetLevel@AActor@@QBEPAVULevel@@XZ */ RELOAD();
/* 1090aa23: mov ecx, ebx */
  ecx = ebx;
/* 1090aa25: mov edi, eax */
  edi = eax;
/* 1090aa27: call dword ptr [0x10959e90] */
  esp -= 4; W32(esp, 0x1090aa2du); SPILL(); f_6c62fd(); if (g_unwind) return; /* Engine!?GetLevel@AActor@@QBEPAVULevel@@XZ */ RELOAD();
/* 1090aa2d: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090aa2f: jne 0x1090aa75 */
  if (!zf) goto L_1090aa75;
L_1090aa31: /* 1090aa31: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
L_1090aa36: /* 1090aa36: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090aa38: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 1090aa3b: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 1090aa41: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090aa44: jne 0x1090aa75 */
  if (!zf) goto L_1090aa75;
L_1090aa46: /* 1090aa46: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 1090aa49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090aa4a: call dword ptr [0x10959cac] */
  esp -= 4; W32(esp, 0x1090aa50u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 1090aa50: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090aa52: je 0x1090aa75 */
  if (zf) goto L_1090aa75;
L_1090aa54: /* 1090aa54: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 1090aa57: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 1090aa5a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1090aa5c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 1090aa5f: jp 0x1090aa75 */
  if (pf) goto L_1090aa75;
L_1090aa61: /* 1090aa61: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1090aa64: mov ecx, dword ptr [0x10959ce8] */
  ecx = R32((uint32_t)(0x10959ce8u));
/* 1090aa6a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090aa6c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 1090aa6f: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 1090aa72: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_1090aa75: /* 1090aa75: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090aa78: call 0x109013a2 */
  esp -= 4; W32(esp, 0x1090aa7du); SPILL(); f_109013a2(); if (g_unwind) return; RELOAD();
/* 1090aa7d: jmp 0x1090a9d0 */
  goto L_1090a9d0;
L_1090aa82: /* 1090aa82: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 1090aa85: push 0x1092ed34 */
  { uint32_t v = 0x1092ed34u; esp -= 4; W32(esp, v); }
/* 1090aa8a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090aa8b: call dword ptr [0x10959cbc] */
  esp -= 4; W32(esp, 0x1090aa91u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 1090aa91: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090aa94: jmp 0x1090a596 */
  goto L_1090a596;
L_1090aa99: /* 1090aa99: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 1090aa9c: push 0x1092ee40 */
  { uint32_t v = 0x1092ee40u; esp -= 4; W32(esp, v); }
/* 1090aaa1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090aaa2: call dword ptr [0x10959cbc] */
  esp -= 4; W32(esp, 0x1090aaa8u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 1090aaa8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090aaab: jmp 0x1090a596 */
  goto L_1090a596;
L_1090aab0: /* 1090aab0: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 1090aab3: push 0x1092ed20 */
  { uint32_t v = 0x1092ed20u; esp -= 4; W32(esp, v); }
/* 1090aab8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090aab9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090aabbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090aabb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090aabe: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090aac0: je 0x1090aadd */
  if (zf) goto L_1090aadd;
L_1090aac2: /* 1090aac2: mov edx, dword ptr [0x1095a324] */
  edx = R32((uint32_t)(0x1095a324u));
/* 1090aac8: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 1090aaca: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090aacc: je 0x1090a596 */
  if (zf) goto L_1090a596;
L_1090aad2: /* 1090aad2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 1090aad4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090aad5: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x1090aad8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090aad8: jmp 0x1090a596 */
  goto L_1090a596;
L_1090aadd: /* 1090aadd: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 1090aae0: push 0x1092ed04 */
  { uint32_t v = 0x1092ed04u; esp -= 4; W32(esp, v); }
/* 1090aae5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090aae6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090aae8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090aae8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090aaeb: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090aaed: je 0x1090abff */
  if (zf) goto L_1090abff;
L_1090aaf3: /* 1090aaf3: call dword ptr [0x10959e98] */
  esp -= 4; W32(esp, 0x1090aaf9u); SPILL(); f_6cb49c(); if (g_unwind) return; /* Engine!?StaticClass@UEngine@@SAPAVUClass@@XZ */ RELOAD();
/* 1090aaf9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090aafa: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090aafd: call 0x1090146f */
  esp -= 4; W32(esp, 0x1090ab02u); SPILL(); f_1090146f(); if (g_unwind) return; RELOAD();
/* 1090ab02: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090ab07: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 1090ab0a: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090ab0d: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090ab0f: jge 0x1090ab49 */
  if ((sf == of)) goto L_1090ab49;
L_1090ab11: /* 1090ab11: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090ab13: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 1090ab16: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 1090ab19: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090ab1b: je 0x1090ab49 */
  if (zf) goto L_1090ab49;
L_1090ab1d: /* 1090ab1d: cmp dword ptr [ecx + 0x30], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x30u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090ab20: je 0x1090ab49 */
  if (zf) goto L_1090ab49;
L_1090ab22: /* 1090ab22: mov edx, dword ptr [0x10959cfc] */
  edx = R32((uint32_t)(0x10959cfcu));
/* 1090ab28: cmp dword ptr [edx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090ab2a: jne 0x1090ab49 */
  if (!zf) goto L_1090ab49;
L_1090ab2c: /* 1090ab2c: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 1090ab2f: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 1090ab32: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 1090ab34: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 1090ab37: lea ecx, [eax + 0x2c] */
  ecx = (uint32_t)(eax + 0x2cu);
/* 1090ab3a: mov eax, dword ptr [0x10959d0c] */
  eax = R32((uint32_t)(0x10959d0cu));
/* 1090ab3f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090ab41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ab42: push 0x1092eec0 */
  { uint32_t v = 0x1092eec0u; esp -= 4; W32(esp, v); }
/* 1090ab47: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x1090ab49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_1090ab49: /* 1090ab49: cmp dword ptr [edi + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090ab4c: jne 0x1090abe0 */
  if (!zf) goto L_1090abe0;
L_1090ab52: /* 1090ab52: push 0x164 */
  { uint32_t v = 0x164u; esp -= 4; W32(esp, v); }
/* 1090ab57: call 0x1090145b */
  esp -= 4; W32(esp, 0x1090ab5cu); SPILL(); f_1090145b(); if (g_unwind) return; RELOAD();
/* 1090ab5c: mov esi, eax */
  esi = eax;
/* 1090ab5e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090ab61: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 1090ab64: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090ab66: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 1090ab6a: je 0x1090aba6 */
  if (zf) goto L_1090aba6;
L_1090ab6c: /* 1090ab6c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090ab6d: push 0x1092e260 */
  { uint32_t v = 0x1092e260u; esp -= 4; W32(esp, v); }
/* 1090ab72: push 0x1092ece8 */
  { uint32_t v = 0x1092ece8u; esp -= 4; W32(esp, v); }
/* 1090ab77: call dword ptr [0x10959c40] */
  esp -= 4; W32(esp, 0x1090ab7du); SPILL(); f_4e3242(); if (g_unwind) return; /* Core!?LocalizeGeneral@@YAPBGPBDPBG1@Z */ RELOAD();
/* 1090ab7d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090ab80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ab81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090ab82: mov ecx, esp */
  ecx = esp;
/* 1090ab84: mov dword ptr [ebp - 0x20], esp */
  W32((uint32_t)(ebp + 0xffffffe0u), esp);
/* 1090ab87: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090ab89: push 0x1092ed04 */
  { uint32_t v = 0x1092ed04u; esp -= 4; W32(esp, v); }
/* 1090ab8e: call dword ptr [0x10959c1c] */
  esp -= 4; W32(esp, 0x1090ab94u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 1090ab94: mov ecx, esi */
  ecx = esi;
/* 1090ab96: call dword ptr [0x1095a314] */
  esp -= 4; W32(esp, 0x1090ab9cu); SPILL(); f_d82851(); if (g_unwind) return; /* Window!??0WConfigProperties@@QAE@VFName@@PBG@Z */ RELOAD();
/* 1090ab9c: mov dword ptr [esi], 0x10921018 */
  W32((uint32_t)(esi), 0x10921018u);
/* 1090aba2: mov ecx, esi */
  ecx = esi;
/* 1090aba4: jmp 0x1090aba8 */
  goto L_1090aba8;
L_1090aba6: /* 1090aba6: xor ecx, ecx */
  ecx = 0;
L_1090aba8: /* 1090aba8: lea edx, [edi + 4] */
  edx = (uint32_t)(edi + 0x4u);
/* 1090abab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090abac: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090abb0: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 1090abb3: call dword ptr [0x1095a310] */
  esp -= 4; W32(esp, 0x1090abb9u); SPILL(); f_d81a55(); if (g_unwind) return; /* Window!?SetNotifyHook@WWindow@@QAEXPAVFNotifyHook@@@Z */ RELOAD();
/* 1090abb9: mov eax, dword ptr [0x1095a324] */
  eax = R32((uint32_t)(0x1095a324u));
/* 1090abbe: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090abc0: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090abc2: je 0x1090abc9 */
  if (zf) goto L_1090abc9;
L_1090abc4: /* 1090abc4: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 1090abc7: jmp 0x1090abcb */
  goto L_1090abcb;
L_1090abc9: /* 1090abc9: xor eax, eax */
  eax = 0;
L_1090abcb: /* 1090abcb: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 1090abce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090abcf: call dword ptr [0x1095a318] */
  esp -= 4; W32(esp, 0x1090abd5u); SPILL(); f_d816a4(); if (g_unwind) return; /* Window!?OpenWindow@WProperties@@QAEXPAUHWND__@@@Z */ RELOAD();
/* 1090abd5: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 1090abd8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090abda: call dword ptr [edx + 0xf8] */
  { uint32_t t = R32((uint32_t)(edx + 0xf8u)); esp -= 4; W32(esp, 0x1090abe0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_1090abe0: /* 1090abe0: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 1090abe3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 1090abe5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090abe7: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x1090abeau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090abea: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 1090abed: call dword ptr [0x1095a3b0] */
  esp -= 4; W32(esp, 0x1090abf3u); SPILL(); f_d8237e(); if (g_unwind) return; /* Window!??BWWindow@@QBEPAUHWND__@@XZ */ RELOAD();
/* 1090abf3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090abf4: call dword ptr [0x1095a134] */
  esp -= 4; W32(esp, 0x1090abfau); SPILL(); call_ind(R32(0x1095a134u)); if (g_unwind) return; /* USER32!SetFocus */ RELOAD();
/* 1090abfa: jmp 0x1090a596 */
  goto L_1090a596;
L_1090abff: /* 1090abff: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090ac02: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090ac03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090ac04: xor eax, eax */
  eax = 0;
/* 1090ac06: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090ac0d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090ac0e: mov esp, ebp */
  esp = ebp;
/* 1090ac10: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090ac11: ret 8 */
  esp += 12; SPILL(); return;
}

void f_1090a5ae(void) {
  LOAD_REGS();
  goto L_1090a5ae;
L_1090a56c: /* 1090a56c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090a56d: call dword ptr [0x10959c24] */
  esp -= 4; W32(esp, 0x1090a573u); SPILL(); f_4e4499(); if (g_unwind) return; /* Core!?ExportToOutputDevice@UExporter@@SAXPAVUObject@@PAV1@AAVFOutputDevice@@PBGH@Z */ RELOAD();
/* 1090a573: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a576: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 1090a579: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090a57fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090a57f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a580: call dword ptr [0x10959c28] */
  esp -= 4; W32(esp, 0x1090a586u); SPILL(); f_4e15eb(); if (g_unwind) return; /* Core!?appClipboardCopy@@YAXPBG@Z */ RELOAD();
/* 1090a586: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a589: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 1090a58c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090a590: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090a596u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_1090a596: /* 1090a596: mov eax, 1 */
  eax = 0x1u;
/* 1090a59b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090a59e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090a5a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090a5a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090a5a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090a5a8: mov esp, ebp */
  esp = ebp;
/* 1090a5aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090a5ab: ret 8 */
  esp += 12; SPILL(); return;
L_1090a5ae: /* 1090a5ae: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 1090a5b1: push 0x1092ee64 */
  { uint32_t v = 0x1092ee64u; esp -= 4; W32(esp, v); }
/* 1090a5b6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090a5b7: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090a5b9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a5b9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a5bc: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090a5be: je 0x1090a8d0 */
  if (zf) goto L_1090a8d0;
L_1090a5c4: /* 1090a5c4: call dword ptr [0x10959e98] */
  esp -= 4; W32(esp, 0x1090a5cau); SPILL(); f_6cb49c(); if (g_unwind) return; /* Engine!?StaticClass@UEngine@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a5ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a5cb: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090a5ce: call 0x1090146f */
  esp -= 4; W32(esp, 0x1090a5d3u); SPILL(); f_1090146f(); if (g_unwind) return; RELOAD();
/* 1090a5d3: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a5d8: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 1090a5db: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 1090a5de: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090a5e1: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a5e3: jge 0x1090a596 */
  if ((sf == of)) goto L_1090a596;
L_1090a5e5: /* 1090a5e5: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 1090a5e8: call dword ptr [0x10959c10] */
  esp -= 4; W32(esp, 0x1090a5eeu); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 1090a5ee: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090a5f0: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 1090a5f3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a5f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a5f5: push 0x1092ee7c */
  { uint32_t v = 0x1092ee7cu; esp -= 4; W32(esp, v); }
/* 1090a5fa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090a5fb: call dword ptr [0x10959c14] */
  esp -= 4; W32(esp, 0x1090a601u); SPILL(); f_4e194c(); if (g_unwind) return; /* Core!?ParseObject@@YAHPBG0PAVUClass@@AAPAVUObject@@PAV2@@Z */ RELOAD();
/* 1090a601: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a604: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a606: je 0x1090a772 */
  if (zf) goto L_1090a772;
L_1090a60c: /* 1090a60c: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 1090a60f: push 0x1092edc8 */
  { uint32_t v = 0x1092edc8u; esp -= 4; W32(esp, v); }
/* 1090a614: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090a615: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090a617u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a617: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a61a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a61c: je 0x1090a684 */
  if (zf) goto L_1090a684;
L_1090a61e: /* 1090a61e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090a621: call dword ptr [0x10959c2c] */
  esp -= 4; W32(esp, 0x1090a627u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
L_1090a627: /* 1090a627: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_1090a62a: /* 1090a62a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090a62d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a62f: je 0x1090a8b9 */
  if (zf) goto L_1090a8b9;
L_1090a635: /* 1090a635: push 0x160 */
  { uint32_t v = 0x160u; esp -= 4; W32(esp, v); }
/* 1090a63a: call 0x1090145b */
  esp -= 4; W32(esp, 0x1090a63fu); SPILL(); f_1090145b(); if (g_unwind) return; RELOAD();
/* 1090a63f: mov esi, eax */
  esi = eax;
/* 1090a641: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a644: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 1090a647: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a649: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 1090a64d: je 0x1090a802 */
  if (zf) goto L_1090a802;
L_1090a653: /* 1090a653: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a655: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090a657: push 0x10958ea4 */
  { uint32_t v = 0x10958ea4u; esp -= 4; W32(esp, v); }
/* 1090a65c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090a65e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a65f: mov ecx, esp */
  ecx = esp;
/* 1090a661: mov dword ptr [ebp - 0x20], esp */
  W32((uint32_t)(ebp + 0xffffffe0u), esp);
/* 1090a664: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a666: push 0x1092ee64 */
  { uint32_t v = 0x1092ee64u; esp -= 4; W32(esp, v); }
/* 1090a66b: call dword ptr [0x10959c1c] */
  esp -= 4; W32(esp, 0x1090a671u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 1090a671: mov ecx, esi */
  ecx = esi;
/* 1090a673: call dword ptr [0x1095a31c] */
  esp -= 4; W32(esp, 0x1090a679u); SPILL(); f_d82347(); if (g_unwind) return; /* Window!??0WObjectProperties@@QAE@VFName@@KPBGPAVWWindow@@H@Z */ RELOAD();
/* 1090a679: mov dword ptr [esi], 0x10921170 */
  W32((uint32_t)(esi), 0x10921170u);
/* 1090a67f: jmp 0x1090a804 */
  goto L_1090a804;
L_1090a684: /* 1090a684: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a689: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090a68b: mov eax, dword ptr [ecx + ebx*4] */
  eax = R32((uint32_t)(ecx + ebx*4));
/* 1090a68e: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 1090a691: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a693: je 0x1090a6a1 */
  if (zf) goto L_1090a6a1;
L_1090a695: /* 1090a695: mov edx, ecx */
  edx = ecx;
/* 1090a697: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 1090a69a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090a69c: mov ebx, dword ptr [ecx + 0x30] */
  ebx = R32((uint32_t)(ecx + 0x30u));
/* 1090a69f: jmp 0x1090a6a3 */
  goto L_1090a6a3;
L_1090a6a1: /* 1090a6a1: xor ebx, ebx */
  ebx = 0;
L_1090a6a3: /* 1090a6a3: mov dword ptr [ebp - 0x20], 0x497423f0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x497423f0u);
/* 1090a6aa: call dword ptr [0x10959e8c] */
  esp -= 4; W32(esp, 0x1090a6b0u); SPILL(); f_6c8094(); if (g_unwind) return; /* Engine!?StaticClass@AActor@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a6b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a6b1: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 1090a6b4: call 0x1090146f */
  esp -= 4; W32(esp, 0x1090a6b9u); SPILL(); f_1090146f(); if (g_unwind) return; RELOAD();
/* 1090a6b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1090a6c0: /* 1090a6c0: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a6c5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 1090a6c8: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 1090a6cb: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a6cd: jge 0x1090a62a */
  if ((sf == of)) goto L_1090a62a;
L_1090a6d3: /* 1090a6d3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a6d5: je 0x1090a6fb */
  if (zf) goto L_1090a6fb;
L_1090a6d7: /* 1090a6d7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090a6d9: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 1090a6dc: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 1090a6e2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a6e3: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1090a6e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a6e9: call 0x109013fc */
  esp -= 4; W32(esp, 0x1090a6eeu); SPILL(); f_109013fc(); if (g_unwind) return; RELOAD();
/* 1090a6ee: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 1090a6f1: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a6f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a6f9: jmp 0x1090a701 */
  goto L_1090a701;
L_1090a6fb: /* 1090a6fb: fld qword ptr [0x10921158] */
  { double v = F64((uint32_t)(0x10921158u)); FPUSH(v); }
L_1090a701: /* 1090a701: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a703: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 1090a706: je 0x1090a726 */
  if (zf) goto L_1090a726;
L_1090a708: /* 1090a708: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090a70a: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 1090a70d: call dword ptr [0x10959e90] */
  esp -= 4; W32(esp, 0x1090a713u); SPILL(); f_6c62fd(); if (g_unwind) return; /* Engine!?GetLevel@AActor@@QBEPAVULevel@@XZ */ RELOAD();
/* 1090a713: mov ecx, ebx */
  ecx = ebx;
/* 1090a715: mov edi, eax */
  edi = eax;
/* 1090a717: call dword ptr [0x10959e90] */
  esp -= 4; W32(esp, 0x1090a71du); SPILL(); f_6c62fd(); if (g_unwind) return; /* Engine!?GetLevel@AActor@@QBEPAVULevel@@XZ */ RELOAD();
/* 1090a71d: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090a71f: jne 0x1090a765 */
  if (!zf) goto L_1090a765;
L_1090a721: /* 1090a721: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
L_1090a726: /* 1090a726: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090a728: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 1090a72b: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 1090a731: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a734: jne 0x1090a765 */
  if (!zf) goto L_1090a765;
L_1090a736: /* 1090a736: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090a739: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090a73a: call dword ptr [0x10959cac] */
  esp -= 4; W32(esp, 0x1090a740u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 1090a740: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a742: je 0x1090a765 */
  if (zf) goto L_1090a765;
L_1090a744: /* 1090a744: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 1090a747: fcomp dword ptr [ebp - 0x20] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe0u)));
  FPOP();
/* 1090a74a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1090a74c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 1090a74f: jp 0x1090a765 */
  if (pf) goto L_1090a765;
L_1090a751: /* 1090a751: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1090a754: mov ecx, dword ptr [0x10959ce8] */
  ecx = R32((uint32_t)(0x10959ce8u));
/* 1090a75a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090a75c: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 1090a75f: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 1090a762: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_1090a765: /* 1090a765: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 1090a768: call 0x109013a2 */
  esp -= 4; W32(esp, 0x1090a76du); SPILL(); f_109013a2(); if (g_unwind) return; RELOAD();
/* 1090a76d: jmp 0x1090a6c0 */
  goto L_1090a6c0;
L_1090a772: /* 1090a772: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090a775: call dword ptr [0x10959c30] */
  esp -= 4; W32(esp, 0x1090a77bu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 1090a77b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 1090a77e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090a781: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a782: push 0x1092edb8 */
  { uint32_t v = 0x1092edb8u; esp -= 4; W32(esp, v); }
/* 1090a787: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090a788: call dword ptr [0x10959c34] */
  esp -= 4; W32(esp, 0x1090a78eu); SPILL(); f_4e3f67(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAVFName@@@Z */ RELOAD();
/* 1090a78e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a791: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a793: je 0x1090a62a */
  if (zf) goto L_1090a62a;
L_1090a799: /* 1090a799: call dword ptr [0x10959e8c] */
  esp -= 4; W32(esp, 0x1090a79fu); SPILL(); f_6c8094(); if (g_unwind) return; /* Engine!?StaticClass@AActor@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a79f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a7a0: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 1090a7a3: call 0x1090146f */
  esp -= 4; W32(esp, 0x1090a7a8u); SPILL(); f_1090146f(); if (g_unwind) return; RELOAD();
/* 1090a7a8: jmp 0x1090a7b0 */
  goto L_1090a7b0;
L_1090a7b0: /* 1090a7b0: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a7b5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 1090a7b8: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 1090a7bb: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a7bd: jge 0x1090a62a */
  if ((sf == of)) goto L_1090a62a;
L_1090a7c3: /* 1090a7c3: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090a7c5: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 1090a7c8: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 1090a7ce: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a7d1: jne 0x1090a7f8 */
  if (!zf) goto L_1090a7f8;
L_1090a7d3: /* 1090a7d3: call dword ptr [0x10959c38] */
  esp -= 4; W32(esp, 0x1090a7d9u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 1090a7d9: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090a7dc: mov edi, eax */
  edi = eax;
/* 1090a7de: call dword ptr [0x10959c3c] */
  esp -= 4; W32(esp, 0x1090a7e4u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 1090a7e4: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090a7e6: jne 0x1090a7f8 */
  if (!zf) goto L_1090a7f8;
L_1090a7e8: /* 1090a7e8: mov ecx, dword ptr [0x10959ce8] */
  ecx = R32((uint32_t)(0x10959ce8u));
/* 1090a7ee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090a7f0: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 1090a7f3: jmp 0x1090a627 */
  goto L_1090a627;
L_1090a7f8: /* 1090a7f8: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 1090a7fb: call 0x109013a2 */
  esp -= 4; W32(esp, 0x1090a800u); SPILL(); f_109013a2(); if (g_unwind) return; RELOAD();
/* 1090a800: jmp 0x1090a7b0 */
  goto L_1090a7b0;
L_1090a802: /* 1090a802: xor esi, esi */
  esi = 0;
L_1090a804: /* 1090a804: mov ecx, dword ptr [0x10959ce8] */
  ecx = R32((uint32_t)(0x10959ce8u));
/* 1090a80a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090a80c: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090a80f: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 1090a812: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 1090a815: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 1090a818: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 1090a81a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 1090a81c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090a820: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0x1090a826u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a826: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a827: mov ecx, esi */
  ecx = esi;
/* 1090a829: call dword ptr [0x1095a318] */
  esp -= 4; W32(esp, 0x1090a82fu); SPILL(); f_d816a4(); if (g_unwind) return; /* Window!?OpenWindow@WProperties@@QAEXPAUHWND__@@@Z */ RELOAD();
/* 1090a82f: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* 1090a835: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* 1090a83b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a83d: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 1090a840: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a841: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x1090a847u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a847: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 1090a849: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a84b: mov ecx, esi */
  ecx = esi;
/* 1090a84d: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x1090a850u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a850: call dword ptr [0x10959e8c] */
  esp -= 4; W32(esp, 0x1090a856u); SPILL(); f_6c8094(); if (g_unwind) return; /* Engine!?StaticClass@AActor@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a856: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a857: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090a85a: call 0x1090146f */
  esp -= 4; W32(esp, 0x1090a85fu); SPILL(); f_1090146f(); if (g_unwind) return; RELOAD();
/* 1090a85f: nop  */
L_1090a860: /* 1090a860: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a865: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 1090a868: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090a86b: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a86d: jge 0x1090a888 */
  if ((sf == of)) goto L_1090a888;
L_1090a86f: /* 1090a86f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090a871: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 1090a874: and dword ptr [eax + 0x88], 0xbfffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0xbfffffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 1090a87e: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090a881: call 0x109013a2 */
  esp -= 4; W32(esp, 0x1090a886u); SPILL(); f_109013a2(); if (g_unwind) return; RELOAD();
/* 1090a886: jmp 0x1090a860 */
  goto L_1090a860;
L_1090a888: /* 1090a888: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090a88b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a88d: je 0x1090a596 */
  if (zf) goto L_1090a596;
L_1090a893: /* 1090a893: call dword ptr [0x10959e8c] */
  esp -= 4; W32(esp, 0x1090a899u); SPILL(); f_6c8094(); if (g_unwind) return; /* Engine!?StaticClass@AActor@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a899: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a89a: mov ecx, esi */
  ecx = esi;
/* 1090a89c: call dword ptr [0x10959cac] */
  esp -= 4; W32(esp, 0x1090a8a2u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 1090a8a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a8a4: je 0x1090a596 */
  if (zf) goto L_1090a596;
L_1090a8aa: /* 1090a8aa: or dword ptr [esi + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x88u), r);
  }
/* 1090a8b4: jmp 0x1090a596 */
  goto L_1090a596;
L_1090a8b9: /* 1090a8b9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 1090a8bc: push 0x1092ed90 */
  { uint32_t v = 0x1092ed90u; esp -= 4; W32(esp, v); }
/* 1090a8c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a8c2: call dword ptr [0x10959cbc] */
  esp -= 4; W32(esp, 0x1090a8c8u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 1090a8c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a8cb: jmp 0x1090a596 */
  goto L_1090a596;
L_1090a8d0: /* 1090a8d0: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 1090a8d3: push 0x1092ed68 */
  { uint32_t v = 0x1092ed68u; esp -= 4; W32(esp, v); }
/* 1090a8d8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090a8d9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090a8dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a8db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a8de: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090a8e0: je 0x1090aab0 */
  if (zf) goto L_1090aab0;
L_1090a8e6: /* 1090a8e6: call dword ptr [0x10959e98] */
  esp -= 4; W32(esp, 0x1090a8ecu); SPILL(); f_6cb49c(); if (g_unwind) return; /* Engine!?StaticClass@UEngine@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a8ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a8ed: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090a8f0: call 0x1090146f */
  esp -= 4; W32(esp, 0x1090a8f5u); SPILL(); f_1090146f(); if (g_unwind) return; RELOAD();
/* 1090a8f5: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a8fa: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 1090a8fd: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090a900: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a902: jge 0x1090aa99 */
  if ((sf == of)) goto L_1090aa99;
L_1090a908: /* 1090a908: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 1090a90b: call dword ptr [0x10959c10] */
  esp -= 4; W32(esp, 0x1090a911u); SPILL(); f_4e1415(); if (g_unwind) return; /* Core!?StaticClass@UClass@@SAPAV1@XZ */ RELOAD();
/* 1090a911: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090a913: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090a916: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a917: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a918: push 0x1092ee7c */
  { uint32_t v = 0x1092ee7cu; esp -= 4; W32(esp, v); }
/* 1090a91d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090a91e: call dword ptr [0x10959c14] */
  esp -= 4; W32(esp, 0x1090a924u); SPILL(); f_4e194c(); if (g_unwind) return; /* Core!?ParseObject@@YAHPBG0PAVUClass@@AAPAVUObject@@PAV2@@Z */ RELOAD();
/* 1090a924: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a927: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a929: je 0x1090aa99 */
  if (zf) goto L_1090aa99;
L_1090a92f: /* 1090a92f: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 1090a932: push 0x1092edc8 */
  { uint32_t v = 0x1092edc8u; esp -= 4; W32(esp, v); }
/* 1090a937: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090a938: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 1090a93f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090a941u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a941: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a944: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a946: je 0x1090a993 */
  if (zf) goto L_1090a993;
L_1090a948: /* 1090a948: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 1090a94b: call dword ptr [0x10959c2c] */
  esp -= 4; W32(esp, 0x1090a951u); SPILL(); f_4e31cf(); if (g_unwind) return; /* Core!?GetDefaultObject@UClass@@QAEPAVUObject@@XZ */ RELOAD();
/* 1090a951: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_1090a954: /* 1090a954: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090a957: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a959: je 0x1090aa82 */
  if (zf) goto L_1090aa82;
L_1090a95f: /* 1090a95f: push 0x10958ea4 */
  { uint32_t v = 0x10958ea4u; esp -= 4; W32(esp, v); }
/* 1090a964: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 1090a967: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x1090a96du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 1090a96d: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 1090a970: call dword ptr [0x10959b08] */
  esp -= 4; W32(esp, 0x1090a976u); SPILL(); f_4e22ed(); if (g_unwind) return; /* Core!??0FOutputDevice@@QAE@XZ */ RELOAD();
/* 1090a976: mov dword ptr [ebp - 0x40], 0x10921164 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x10921164u);
/* 1090a97d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090a97f: push 0x1092ed5c */
  { uint32_t v = 0x1092ed5cu; esp -= 4; W32(esp, v); }
/* 1090a984: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 1090a987: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a988: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 1090a98c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090a98e: jmp 0x1090a56c */
  goto L_1090a56c;
L_1090a993: /* 1090a993: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a998: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090a99a: mov eax, dword ptr [ecx + ebx*4] */
  eax = R32((uint32_t)(ecx + ebx*4));
/* 1090a99d: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 1090a9a0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a9a2: je 0x1090a9b0 */
  if (zf) goto L_1090a9b0;
L_1090a9a4: /* 1090a9a4: mov edx, ecx */
  edx = ecx;
/* 1090a9a6: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 1090a9a9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090a9ab: mov ebx, dword ptr [ecx + 0x30] */
  ebx = R32((uint32_t)(ecx + 0x30u));
/* 1090a9ae: jmp 0x1090a9b2 */
  goto L_1090a9b2;
L_1090a9b0: /* 1090a9b0: xor ebx, ebx */
  ebx = 0;
L_1090a9b2: /* 1090a9b2: mov dword ptr [ebp - 0x18], 0x497423f0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x497423f0u);
/* 1090a9b9: call dword ptr [0x10959e8c] */
  esp -= 4; W32(esp, 0x1090a9bfu); SPILL(); f_6c8094(); if (g_unwind) return; /* Engine!?StaticClass@AActor@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a9bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a9c0: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090a9c3: call 0x1090146f */
  esp -= 4; W32(esp, 0x1090a9c8u); SPILL(); f_1090146f(); if (g_unwind) return; RELOAD();
/* 1090a9c8: jmp 0x1090a9d0 */
  goto L_1090a9d0;
L_1090a9d0: /* 1090a9d0: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a9d5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 1090a9d8: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090a9db: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a9dd: jge 0x1090a954 */
  if ((sf == of)) goto L_1090a954;
L_1090a9e3: /* 1090a9e3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a9e5: je 0x1090aa0b */
  if (zf) goto L_1090aa0b;
L_1090a9e7: /* 1090a9e7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090a9e9: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 1090a9ec: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 1090a9f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a9f3: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1090a9f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a9f9: call 0x109013fc */
  esp -= 4; W32(esp, 0x1090a9feu); SPILL(); f_109013fc(); if (g_unwind) return; RELOAD();
/* 1090a9fe: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 1090aa01: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090aa06: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090aa09: jmp 0x1090aa11 */
  goto L_1090aa11;
L_1090aa0b: /* 1090aa0b: fld qword ptr [0x10921158] */
  { double v = F64((uint32_t)(0x10921158u)); FPUSH(v); }
L_1090aa11: /* 1090aa11: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090aa13: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 1090aa16: je 0x1090aa36 */
  if (zf) goto L_1090aa36;
L_1090aa18: /* 1090aa18: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090aa1a: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 1090aa1d: call dword ptr [0x10959e90] */
  esp -= 4; W32(esp, 0x1090aa23u); SPILL(); f_6c62fd(); if (g_unwind) return; /* Engine!?GetLevel@AActor@@QBEPAVULevel@@XZ */ RELOAD();
/* 1090aa23: mov ecx, ebx */
  ecx = ebx;
/* 1090aa25: mov edi, eax */
  edi = eax;
/* 1090aa27: call dword ptr [0x10959e90] */
  esp -= 4; W32(esp, 0x1090aa2du); SPILL(); f_6c62fd(); if (g_unwind) return; /* Engine!?GetLevel@AActor@@QBEPAVULevel@@XZ */ RELOAD();
/* 1090aa2d: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090aa2f: jne 0x1090aa75 */
  if (!zf) goto L_1090aa75;
L_1090aa31: /* 1090aa31: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
L_1090aa36: /* 1090aa36: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090aa38: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 1090aa3b: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 1090aa41: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090aa44: jne 0x1090aa75 */
  if (!zf) goto L_1090aa75;
L_1090aa46: /* 1090aa46: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 1090aa49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090aa4a: call dword ptr [0x10959cac] */
  esp -= 4; W32(esp, 0x1090aa50u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 1090aa50: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090aa52: je 0x1090aa75 */
  if (zf) goto L_1090aa75;
L_1090aa54: /* 1090aa54: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 1090aa57: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 1090aa5a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1090aa5c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 1090aa5f: jp 0x1090aa75 */
  if (pf) goto L_1090aa75;
L_1090aa61: /* 1090aa61: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1090aa64: mov ecx, dword ptr [0x10959ce8] */
  ecx = R32((uint32_t)(0x10959ce8u));
/* 1090aa6a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090aa6c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 1090aa6f: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 1090aa72: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_1090aa75: /* 1090aa75: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090aa78: call 0x109013a2 */
  esp -= 4; W32(esp, 0x1090aa7du); SPILL(); f_109013a2(); if (g_unwind) return; RELOAD();
/* 1090aa7d: jmp 0x1090a9d0 */
  goto L_1090a9d0;
L_1090aa82: /* 1090aa82: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 1090aa85: push 0x1092ed34 */
  { uint32_t v = 0x1092ed34u; esp -= 4; W32(esp, v); }
/* 1090aa8a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090aa8b: call dword ptr [0x10959cbc] */
  esp -= 4; W32(esp, 0x1090aa91u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 1090aa91: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090aa94: jmp 0x1090a596 */
  goto L_1090a596;
L_1090aa99: /* 1090aa99: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 1090aa9c: push 0x1092ee40 */
  { uint32_t v = 0x1092ee40u; esp -= 4; W32(esp, v); }
/* 1090aaa1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090aaa2: call dword ptr [0x10959cbc] */
  esp -= 4; W32(esp, 0x1090aaa8u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 1090aaa8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090aaab: jmp 0x1090a596 */
  goto L_1090a596;
L_1090aab0: /* 1090aab0: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 1090aab3: push 0x1092ed20 */
  { uint32_t v = 0x1092ed20u; esp -= 4; W32(esp, v); }
/* 1090aab8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090aab9: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090aabbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090aabb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090aabe: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090aac0: je 0x1090aadd */
  if (zf) goto L_1090aadd;
L_1090aac2: /* 1090aac2: mov edx, dword ptr [0x1095a324] */
  edx = R32((uint32_t)(0x1095a324u));
/* 1090aac8: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 1090aaca: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090aacc: je 0x1090a596 */
  if (zf) goto L_1090a596;
L_1090aad2: /* 1090aad2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 1090aad4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090aad5: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x1090aad8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090aad8: jmp 0x1090a596 */
  goto L_1090a596;
L_1090aadd: /* 1090aadd: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 1090aae0: push 0x1092ed04 */
  { uint32_t v = 0x1092ed04u; esp -= 4; W32(esp, v); }
/* 1090aae5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090aae6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090aae8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090aae8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090aaeb: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090aaed: je 0x1090abff */
  if (zf) goto L_1090abff;
L_1090aaf3: /* 1090aaf3: call dword ptr [0x10959e98] */
  esp -= 4; W32(esp, 0x1090aaf9u); SPILL(); f_6cb49c(); if (g_unwind) return; /* Engine!?StaticClass@UEngine@@SAPAVUClass@@XZ */ RELOAD();
/* 1090aaf9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090aafa: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090aafd: call 0x1090146f */
  esp -= 4; W32(esp, 0x1090ab02u); SPILL(); f_1090146f(); if (g_unwind) return; RELOAD();
/* 1090ab02: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090ab07: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 1090ab0a: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090ab0d: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090ab0f: jge 0x1090ab49 */
  if ((sf == of)) goto L_1090ab49;
L_1090ab11: /* 1090ab11: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090ab13: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 1090ab16: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 1090ab19: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090ab1b: je 0x1090ab49 */
  if (zf) goto L_1090ab49;
L_1090ab1d: /* 1090ab1d: cmp dword ptr [ecx + 0x30], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x30u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090ab20: je 0x1090ab49 */
  if (zf) goto L_1090ab49;
L_1090ab22: /* 1090ab22: mov edx, dword ptr [0x10959cfc] */
  edx = R32((uint32_t)(0x10959cfcu));
/* 1090ab28: cmp dword ptr [edx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090ab2a: jne 0x1090ab49 */
  if (!zf) goto L_1090ab49;
L_1090ab2c: /* 1090ab2c: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 1090ab2f: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 1090ab32: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 1090ab34: mov edx, dword ptr [eax + 0x2c] */
  edx = R32((uint32_t)(eax + 0x2cu));
/* 1090ab37: lea ecx, [eax + 0x2c] */
  ecx = (uint32_t)(eax + 0x2cu);
/* 1090ab3a: mov eax, dword ptr [0x10959d0c] */
  eax = R32((uint32_t)(0x10959d0cu));
/* 1090ab3f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090ab41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ab42: push 0x1092eec0 */
  { uint32_t v = 0x1092eec0u; esp -= 4; W32(esp, v); }
/* 1090ab47: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x1090ab49u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_1090ab49: /* 1090ab49: cmp dword ptr [edi + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090ab4c: jne 0x1090abe0 */
  if (!zf) goto L_1090abe0;
L_1090ab52: /* 1090ab52: push 0x164 */
  { uint32_t v = 0x164u; esp -= 4; W32(esp, v); }
/* 1090ab57: call 0x1090145b */
  esp -= 4; W32(esp, 0x1090ab5cu); SPILL(); f_1090145b(); if (g_unwind) return; RELOAD();
/* 1090ab5c: mov esi, eax */
  esi = eax;
/* 1090ab5e: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090ab61: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 1090ab64: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090ab66: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 1090ab6a: je 0x1090aba6 */
  if (zf) goto L_1090aba6;
L_1090ab6c: /* 1090ab6c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090ab6d: push 0x1092e260 */
  { uint32_t v = 0x1092e260u; esp -= 4; W32(esp, v); }
/* 1090ab72: push 0x1092ece8 */
  { uint32_t v = 0x1092ece8u; esp -= 4; W32(esp, v); }
/* 1090ab77: call dword ptr [0x10959c40] */
  esp -= 4; W32(esp, 0x1090ab7du); SPILL(); f_4e3242(); if (g_unwind) return; /* Core!?LocalizeGeneral@@YAPBGPBDPBG1@Z */ RELOAD();
/* 1090ab7d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090ab80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090ab81: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090ab82: mov ecx, esp */
  ecx = esp;
/* 1090ab84: mov dword ptr [ebp - 0x20], esp */
  W32((uint32_t)(ebp + 0xffffffe0u), esp);
/* 1090ab87: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090ab89: push 0x1092ed04 */
  { uint32_t v = 0x1092ed04u; esp -= 4; W32(esp, v); }
/* 1090ab8e: call dword ptr [0x10959c1c] */
  esp -= 4; W32(esp, 0x1090ab94u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 1090ab94: mov ecx, esi */
  ecx = esi;
/* 1090ab96: call dword ptr [0x1095a314] */
  esp -= 4; W32(esp, 0x1090ab9cu); SPILL(); f_d82851(); if (g_unwind) return; /* Window!??0WConfigProperties@@QAE@VFName@@PBG@Z */ RELOAD();
/* 1090ab9c: mov dword ptr [esi], 0x10921018 */
  W32((uint32_t)(esi), 0x10921018u);
/* 1090aba2: mov ecx, esi */
  ecx = esi;
/* 1090aba4: jmp 0x1090aba8 */
  goto L_1090aba8;
L_1090aba6: /* 1090aba6: xor ecx, ecx */
  ecx = 0;
L_1090aba8: /* 1090aba8: lea edx, [edi + 4] */
  edx = (uint32_t)(edi + 0x4u);
/* 1090abab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090abac: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090abb0: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 1090abb3: call dword ptr [0x1095a310] */
  esp -= 4; W32(esp, 0x1090abb9u); SPILL(); f_d81a55(); if (g_unwind) return; /* Window!?SetNotifyHook@WWindow@@QAEXPAVFNotifyHook@@@Z */ RELOAD();
/* 1090abb9: mov eax, dword ptr [0x1095a324] */
  eax = R32((uint32_t)(0x1095a324u));
/* 1090abbe: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090abc0: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090abc2: je 0x1090abc9 */
  if (zf) goto L_1090abc9;
L_1090abc4: /* 1090abc4: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 1090abc7: jmp 0x1090abcb */
  goto L_1090abcb;
L_1090abc9: /* 1090abc9: xor eax, eax */
  eax = 0;
L_1090abcb: /* 1090abcb: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 1090abce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090abcf: call dword ptr [0x1095a318] */
  esp -= 4; W32(esp, 0x1090abd5u); SPILL(); f_d816a4(); if (g_unwind) return; /* Window!?OpenWindow@WProperties@@QAEXPAUHWND__@@@Z */ RELOAD();
/* 1090abd5: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 1090abd8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090abda: call dword ptr [edx + 0xf8] */
  { uint32_t t = R32((uint32_t)(edx + 0xf8u)); esp -= 4; W32(esp, 0x1090abe0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_1090abe0: /* 1090abe0: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 1090abe3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 1090abe5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090abe7: call dword ptr [eax + 8] */
  { uint32_t t = R32((uint32_t)(eax + 0x8u)); esp -= 4; W32(esp, 0x1090abeau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090abea: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 1090abed: call dword ptr [0x1095a3b0] */
  esp -= 4; W32(esp, 0x1090abf3u); SPILL(); f_d8237e(); if (g_unwind) return; /* Window!??BWWindow@@QBEPAUHWND__@@XZ */ RELOAD();
/* 1090abf3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090abf4: call dword ptr [0x1095a134] */
  esp -= 4; W32(esp, 0x1090abfau); SPILL(); call_ind(R32(0x1095a134u)); if (g_unwind) return; /* USER32!SetFocus */ RELOAD();
/* 1090abfa: jmp 0x1090a596 */
  goto L_1090a596;
L_1090abff: /* 1090abff: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090ac02: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090ac03: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090ac04: xor eax, eax */
  eax = 0;
/* 1090ac06: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090ac0d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090ac0e: mov esp, ebp */
  esp = ebp;
/* 1090ac10: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090ac11: ret 8 */
  esp += 12; SPILL(); return;
}

void f_1090a684(void) {
  LOAD_REGS();
  goto L_1090a684;
L_1090a596: /* 1090a596: mov eax, 1 */
  eax = 0x1u;
/* 1090a59b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090a59e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090a5a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090a5a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090a5a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090a5a8: mov esp, ebp */
  esp = ebp;
/* 1090a5aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090a5ab: ret 8 */
  esp += 12; SPILL(); return;
L_1090a62a: /* 1090a62a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090a62d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a62f: je 0x1090a8b9 */
  if (zf) goto L_1090a8b9;
L_1090a635: /* 1090a635: push 0x160 */
  { uint32_t v = 0x160u; esp -= 4; W32(esp, v); }
/* 1090a63a: call 0x1090145b */
  esp -= 4; W32(esp, 0x1090a63fu); SPILL(); f_1090145b(); if (g_unwind) return; RELOAD();
/* 1090a63f: mov esi, eax */
  esi = eax;
/* 1090a641: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a644: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 1090a647: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a649: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 1090a64d: je 0x1090a802 */
  if (zf) goto L_1090a802;
L_1090a653: /* 1090a653: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a655: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090a657: push 0x10958ea4 */
  { uint32_t v = 0x10958ea4u; esp -= 4; W32(esp, v); }
/* 1090a65c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090a65e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a65f: mov ecx, esp */
  ecx = esp;
/* 1090a661: mov dword ptr [ebp - 0x20], esp */
  W32((uint32_t)(ebp + 0xffffffe0u), esp);
/* 1090a664: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a666: push 0x1092ee64 */
  { uint32_t v = 0x1092ee64u; esp -= 4; W32(esp, v); }
/* 1090a66b: call dword ptr [0x10959c1c] */
  esp -= 4; W32(esp, 0x1090a671u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 1090a671: mov ecx, esi */
  ecx = esi;
/* 1090a673: call dword ptr [0x1095a31c] */
  esp -= 4; W32(esp, 0x1090a679u); SPILL(); f_d82347(); if (g_unwind) return; /* Window!??0WObjectProperties@@QAE@VFName@@KPBGPAVWWindow@@H@Z */ RELOAD();
/* 1090a679: mov dword ptr [esi], 0x10921170 */
  W32((uint32_t)(esi), 0x10921170u);
/* 1090a67f: jmp 0x1090a804 */
  goto L_1090a804;
L_1090a684: /* 1090a684: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a689: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090a68b: mov eax, dword ptr [ecx + ebx*4] */
  eax = R32((uint32_t)(ecx + ebx*4));
/* 1090a68e: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 1090a691: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a693: je 0x1090a6a1 */
  if (zf) goto L_1090a6a1;
L_1090a695: /* 1090a695: mov edx, ecx */
  edx = ecx;
/* 1090a697: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 1090a69a: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090a69c: mov ebx, dword ptr [ecx + 0x30] */
  ebx = R32((uint32_t)(ecx + 0x30u));
/* 1090a69f: jmp 0x1090a6a3 */
  goto L_1090a6a3;
L_1090a6a1: /* 1090a6a1: xor ebx, ebx */
  ebx = 0;
L_1090a6a3: /* 1090a6a3: mov dword ptr [ebp - 0x20], 0x497423f0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x497423f0u);
/* 1090a6aa: call dword ptr [0x10959e8c] */
  esp -= 4; W32(esp, 0x1090a6b0u); SPILL(); f_6c8094(); if (g_unwind) return; /* Engine!?StaticClass@AActor@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a6b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a6b1: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 1090a6b4: call 0x1090146f */
  esp -= 4; W32(esp, 0x1090a6b9u); SPILL(); f_1090146f(); if (g_unwind) return; RELOAD();
/* 1090a6b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1090a6c0: /* 1090a6c0: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a6c5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 1090a6c8: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 1090a6cb: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a6cd: jge 0x1090a62a */
  if ((sf == of)) goto L_1090a62a;
L_1090a6d3: /* 1090a6d3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a6d5: je 0x1090a6fb */
  if (zf) goto L_1090a6fb;
L_1090a6d7: /* 1090a6d7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090a6d9: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 1090a6dc: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 1090a6e2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a6e3: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1090a6e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a6e9: call 0x109013fc */
  esp -= 4; W32(esp, 0x1090a6eeu); SPILL(); f_109013fc(); if (g_unwind) return; RELOAD();
/* 1090a6ee: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 1090a6f1: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a6f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a6f9: jmp 0x1090a701 */
  goto L_1090a701;
L_1090a6fb: /* 1090a6fb: fld qword ptr [0x10921158] */
  { double v = F64((uint32_t)(0x10921158u)); FPUSH(v); }
L_1090a701: /* 1090a701: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a703: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 1090a706: je 0x1090a726 */
  if (zf) goto L_1090a726;
L_1090a708: /* 1090a708: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090a70a: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 1090a70d: call dword ptr [0x10959e90] */
  esp -= 4; W32(esp, 0x1090a713u); SPILL(); f_6c62fd(); if (g_unwind) return; /* Engine!?GetLevel@AActor@@QBEPAVULevel@@XZ */ RELOAD();
/* 1090a713: mov ecx, ebx */
  ecx = ebx;
/* 1090a715: mov edi, eax */
  edi = eax;
/* 1090a717: call dword ptr [0x10959e90] */
  esp -= 4; W32(esp, 0x1090a71du); SPILL(); f_6c62fd(); if (g_unwind) return; /* Engine!?GetLevel@AActor@@QBEPAVULevel@@XZ */ RELOAD();
/* 1090a71d: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090a71f: jne 0x1090a765 */
  if (!zf) goto L_1090a765;
L_1090a721: /* 1090a721: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
L_1090a726: /* 1090a726: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090a728: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 1090a72b: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 1090a731: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a734: jne 0x1090a765 */
  if (!zf) goto L_1090a765;
L_1090a736: /* 1090a736: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090a739: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090a73a: call dword ptr [0x10959cac] */
  esp -= 4; W32(esp, 0x1090a740u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 1090a740: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a742: je 0x1090a765 */
  if (zf) goto L_1090a765;
L_1090a744: /* 1090a744: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 1090a747: fcomp dword ptr [ebp - 0x20] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe0u)));
  FPOP();
/* 1090a74a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1090a74c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 1090a74f: jp 0x1090a765 */
  if (pf) goto L_1090a765;
L_1090a751: /* 1090a751: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1090a754: mov ecx, dword ptr [0x10959ce8] */
  ecx = R32((uint32_t)(0x10959ce8u));
/* 1090a75a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090a75c: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 1090a75f: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 1090a762: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_1090a765: /* 1090a765: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 1090a768: call 0x109013a2 */
  esp -= 4; W32(esp, 0x1090a76du); SPILL(); f_109013a2(); if (g_unwind) return; RELOAD();
/* 1090a76d: jmp 0x1090a6c0 */
  goto L_1090a6c0;
L_1090a802: /* 1090a802: xor esi, esi */
  esi = 0;
L_1090a804: /* 1090a804: mov ecx, dword ptr [0x10959ce8] */
  ecx = R32((uint32_t)(0x10959ce8u));
/* 1090a80a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090a80c: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090a80f: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 1090a812: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 1090a815: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 1090a818: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 1090a81a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 1090a81c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090a820: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0x1090a826u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a826: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a827: mov ecx, esi */
  ecx = esi;
/* 1090a829: call dword ptr [0x1095a318] */
  esp -= 4; W32(esp, 0x1090a82fu); SPILL(); f_d816a4(); if (g_unwind) return; /* Window!?OpenWindow@WProperties@@QAEXPAUHWND__@@@Z */ RELOAD();
/* 1090a82f: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* 1090a835: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* 1090a83b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a83d: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 1090a840: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a841: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x1090a847u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a847: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 1090a849: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a84b: mov ecx, esi */
  ecx = esi;
/* 1090a84d: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x1090a850u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a850: call dword ptr [0x10959e8c] */
  esp -= 4; W32(esp, 0x1090a856u); SPILL(); f_6c8094(); if (g_unwind) return; /* Engine!?StaticClass@AActor@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a856: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a857: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090a85a: call 0x1090146f */
  esp -= 4; W32(esp, 0x1090a85fu); SPILL(); f_1090146f(); if (g_unwind) return; RELOAD();
/* 1090a85f: nop  */
L_1090a860: /* 1090a860: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a865: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 1090a868: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090a86b: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a86d: jge 0x1090a888 */
  if ((sf == of)) goto L_1090a888;
L_1090a86f: /* 1090a86f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090a871: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 1090a874: and dword ptr [eax + 0x88], 0xbfffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0xbfffffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 1090a87e: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090a881: call 0x109013a2 */
  esp -= 4; W32(esp, 0x1090a886u); SPILL(); f_109013a2(); if (g_unwind) return; RELOAD();
/* 1090a886: jmp 0x1090a860 */
  goto L_1090a860;
L_1090a888: /* 1090a888: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090a88b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a88d: je 0x1090a596 */
  if (zf) goto L_1090a596;
L_1090a893: /* 1090a893: call dword ptr [0x10959e8c] */
  esp -= 4; W32(esp, 0x1090a899u); SPILL(); f_6c8094(); if (g_unwind) return; /* Engine!?StaticClass@AActor@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a899: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a89a: mov ecx, esi */
  ecx = esi;
/* 1090a89c: call dword ptr [0x10959cac] */
  esp -= 4; W32(esp, 0x1090a8a2u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 1090a8a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a8a4: je 0x1090a596 */
  if (zf) goto L_1090a596;
L_1090a8aa: /* 1090a8aa: or dword ptr [esi + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x88u), r);
  }
/* 1090a8b4: jmp 0x1090a596 */
  goto L_1090a596;
L_1090a8b9: /* 1090a8b9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 1090a8bc: push 0x1092ed90 */
  { uint32_t v = 0x1092ed90u; esp -= 4; W32(esp, v); }
/* 1090a8c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a8c2: call dword ptr [0x10959cbc] */
  esp -= 4; W32(esp, 0x1090a8c8u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 1090a8c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a8cb: jmp 0x1090a596 */
  goto L_1090a596;
}

void f_1090a6a1(void) {
  LOAD_REGS();
  goto L_1090a6a1;
L_1090a596: /* 1090a596: mov eax, 1 */
  eax = 0x1u;
/* 1090a59b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090a59e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090a5a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090a5a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090a5a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090a5a8: mov esp, ebp */
  esp = ebp;
/* 1090a5aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090a5ab: ret 8 */
  esp += 12; SPILL(); return;
L_1090a62a: /* 1090a62a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090a62d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a62f: je 0x1090a8b9 */
  if (zf) goto L_1090a8b9;
L_1090a635: /* 1090a635: push 0x160 */
  { uint32_t v = 0x160u; esp -= 4; W32(esp, v); }
/* 1090a63a: call 0x1090145b */
  esp -= 4; W32(esp, 0x1090a63fu); SPILL(); f_1090145b(); if (g_unwind) return; RELOAD();
/* 1090a63f: mov esi, eax */
  esi = eax;
/* 1090a641: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a644: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 1090a647: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a649: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 1090a64d: je 0x1090a802 */
  if (zf) goto L_1090a802;
L_1090a653: /* 1090a653: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a655: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090a657: push 0x10958ea4 */
  { uint32_t v = 0x10958ea4u; esp -= 4; W32(esp, v); }
/* 1090a65c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090a65e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a65f: mov ecx, esp */
  ecx = esp;
/* 1090a661: mov dword ptr [ebp - 0x20], esp */
  W32((uint32_t)(ebp + 0xffffffe0u), esp);
/* 1090a664: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a666: push 0x1092ee64 */
  { uint32_t v = 0x1092ee64u; esp -= 4; W32(esp, v); }
/* 1090a66b: call dword ptr [0x10959c1c] */
  esp -= 4; W32(esp, 0x1090a671u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 1090a671: mov ecx, esi */
  ecx = esi;
/* 1090a673: call dword ptr [0x1095a31c] */
  esp -= 4; W32(esp, 0x1090a679u); SPILL(); f_d82347(); if (g_unwind) return; /* Window!??0WObjectProperties@@QAE@VFName@@KPBGPAVWWindow@@H@Z */ RELOAD();
/* 1090a679: mov dword ptr [esi], 0x10921170 */
  W32((uint32_t)(esi), 0x10921170u);
/* 1090a67f: jmp 0x1090a804 */
  goto L_1090a804;
L_1090a6a1: /* 1090a6a1: xor ebx, ebx */
  ebx = 0;
/* 1090a6a3: mov dword ptr [ebp - 0x20], 0x497423f0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x497423f0u);
/* 1090a6aa: call dword ptr [0x10959e8c] */
  esp -= 4; W32(esp, 0x1090a6b0u); SPILL(); f_6c8094(); if (g_unwind) return; /* Engine!?StaticClass@AActor@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a6b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a6b1: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 1090a6b4: call 0x1090146f */
  esp -= 4; W32(esp, 0x1090a6b9u); SPILL(); f_1090146f(); if (g_unwind) return; RELOAD();
/* 1090a6b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_1090a6c0: /* 1090a6c0: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a6c5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 1090a6c8: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 1090a6cb: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a6cd: jge 0x1090a62a */
  if ((sf == of)) goto L_1090a62a;
L_1090a6d3: /* 1090a6d3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a6d5: je 0x1090a6fb */
  if (zf) goto L_1090a6fb;
L_1090a6d7: /* 1090a6d7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090a6d9: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 1090a6dc: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 1090a6e2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a6e3: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1090a6e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a6e9: call 0x109013fc */
  esp -= 4; W32(esp, 0x1090a6eeu); SPILL(); f_109013fc(); if (g_unwind) return; RELOAD();
/* 1090a6ee: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 1090a6f1: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a6f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a6f9: jmp 0x1090a701 */
  goto L_1090a701;
L_1090a6fb: /* 1090a6fb: fld qword ptr [0x10921158] */
  { double v = F64((uint32_t)(0x10921158u)); FPUSH(v); }
L_1090a701: /* 1090a701: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a703: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 1090a706: je 0x1090a726 */
  if (zf) goto L_1090a726;
L_1090a708: /* 1090a708: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090a70a: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 1090a70d: call dword ptr [0x10959e90] */
  esp -= 4; W32(esp, 0x1090a713u); SPILL(); f_6c62fd(); if (g_unwind) return; /* Engine!?GetLevel@AActor@@QBEPAVULevel@@XZ */ RELOAD();
/* 1090a713: mov ecx, ebx */
  ecx = ebx;
/* 1090a715: mov edi, eax */
  edi = eax;
/* 1090a717: call dword ptr [0x10959e90] */
  esp -= 4; W32(esp, 0x1090a71du); SPILL(); f_6c62fd(); if (g_unwind) return; /* Engine!?GetLevel@AActor@@QBEPAVULevel@@XZ */ RELOAD();
/* 1090a71d: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090a71f: jne 0x1090a765 */
  if (!zf) goto L_1090a765;
L_1090a721: /* 1090a721: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
L_1090a726: /* 1090a726: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090a728: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 1090a72b: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 1090a731: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a734: jne 0x1090a765 */
  if (!zf) goto L_1090a765;
L_1090a736: /* 1090a736: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090a739: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090a73a: call dword ptr [0x10959cac] */
  esp -= 4; W32(esp, 0x1090a740u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 1090a740: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a742: je 0x1090a765 */
  if (zf) goto L_1090a765;
L_1090a744: /* 1090a744: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 1090a747: fcomp dword ptr [ebp - 0x20] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe0u)));
  FPOP();
/* 1090a74a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1090a74c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 1090a74f: jp 0x1090a765 */
  if (pf) goto L_1090a765;
L_1090a751: /* 1090a751: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1090a754: mov ecx, dword ptr [0x10959ce8] */
  ecx = R32((uint32_t)(0x10959ce8u));
/* 1090a75a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090a75c: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 1090a75f: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 1090a762: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_1090a765: /* 1090a765: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 1090a768: call 0x109013a2 */
  esp -= 4; W32(esp, 0x1090a76du); SPILL(); f_109013a2(); if (g_unwind) return; RELOAD();
/* 1090a76d: jmp 0x1090a6c0 */
  goto L_1090a6c0;
L_1090a802: /* 1090a802: xor esi, esi */
  esi = 0;
L_1090a804: /* 1090a804: mov ecx, dword ptr [0x10959ce8] */
  ecx = R32((uint32_t)(0x10959ce8u));
/* 1090a80a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090a80c: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090a80f: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 1090a812: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 1090a815: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 1090a818: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 1090a81a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 1090a81c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090a820: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0x1090a826u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a826: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a827: mov ecx, esi */
  ecx = esi;
/* 1090a829: call dword ptr [0x1095a318] */
  esp -= 4; W32(esp, 0x1090a82fu); SPILL(); f_d816a4(); if (g_unwind) return; /* Window!?OpenWindow@WProperties@@QAEXPAUHWND__@@@Z */ RELOAD();
/* 1090a82f: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* 1090a835: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* 1090a83b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a83d: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 1090a840: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a841: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x1090a847u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a847: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 1090a849: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a84b: mov ecx, esi */
  ecx = esi;
/* 1090a84d: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x1090a850u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a850: call dword ptr [0x10959e8c] */
  esp -= 4; W32(esp, 0x1090a856u); SPILL(); f_6c8094(); if (g_unwind) return; /* Engine!?StaticClass@AActor@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a856: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a857: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090a85a: call 0x1090146f */
  esp -= 4; W32(esp, 0x1090a85fu); SPILL(); f_1090146f(); if (g_unwind) return; RELOAD();
/* 1090a85f: nop  */
L_1090a860: /* 1090a860: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a865: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 1090a868: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090a86b: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a86d: jge 0x1090a888 */
  if ((sf == of)) goto L_1090a888;
L_1090a86f: /* 1090a86f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090a871: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 1090a874: and dword ptr [eax + 0x88], 0xbfffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0xbfffffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 1090a87e: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090a881: call 0x109013a2 */
  esp -= 4; W32(esp, 0x1090a886u); SPILL(); f_109013a2(); if (g_unwind) return; RELOAD();
/* 1090a886: jmp 0x1090a860 */
  goto L_1090a860;
L_1090a888: /* 1090a888: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090a88b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a88d: je 0x1090a596 */
  if (zf) goto L_1090a596;
L_1090a893: /* 1090a893: call dword ptr [0x10959e8c] */
  esp -= 4; W32(esp, 0x1090a899u); SPILL(); f_6c8094(); if (g_unwind) return; /* Engine!?StaticClass@AActor@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a899: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a89a: mov ecx, esi */
  ecx = esi;
/* 1090a89c: call dword ptr [0x10959cac] */
  esp -= 4; W32(esp, 0x1090a8a2u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 1090a8a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a8a4: je 0x1090a596 */
  if (zf) goto L_1090a596;
L_1090a8aa: /* 1090a8aa: or dword ptr [esi + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x88u), r);
  }
/* 1090a8b4: jmp 0x1090a596 */
  goto L_1090a596;
L_1090a8b9: /* 1090a8b9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 1090a8bc: push 0x1092ed90 */
  { uint32_t v = 0x1092ed90u; esp -= 4; W32(esp, v); }
/* 1090a8c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a8c2: call dword ptr [0x10959cbc] */
  esp -= 4; W32(esp, 0x1090a8c8u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 1090a8c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a8cb: jmp 0x1090a596 */
  goto L_1090a596;
}

void f_1090a6fb(void) {
  LOAD_REGS();
  goto L_1090a6fb;
L_1090a596: /* 1090a596: mov eax, 1 */
  eax = 0x1u;
/* 1090a59b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090a59e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090a5a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090a5a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090a5a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090a5a8: mov esp, ebp */
  esp = ebp;
/* 1090a5aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090a5ab: ret 8 */
  esp += 12; SPILL(); return;
L_1090a62a: /* 1090a62a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090a62d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a62f: je 0x1090a8b9 */
  if (zf) goto L_1090a8b9;
L_1090a635: /* 1090a635: push 0x160 */
  { uint32_t v = 0x160u; esp -= 4; W32(esp, v); }
/* 1090a63a: call 0x1090145b */
  esp -= 4; W32(esp, 0x1090a63fu); SPILL(); f_1090145b(); if (g_unwind) return; RELOAD();
/* 1090a63f: mov esi, eax */
  esi = eax;
/* 1090a641: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a644: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 1090a647: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a649: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 1090a64d: je 0x1090a802 */
  if (zf) goto L_1090a802;
L_1090a653: /* 1090a653: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a655: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090a657: push 0x10958ea4 */
  { uint32_t v = 0x10958ea4u; esp -= 4; W32(esp, v); }
/* 1090a65c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090a65e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a65f: mov ecx, esp */
  ecx = esp;
/* 1090a661: mov dword ptr [ebp - 0x20], esp */
  W32((uint32_t)(ebp + 0xffffffe0u), esp);
/* 1090a664: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a666: push 0x1092ee64 */
  { uint32_t v = 0x1092ee64u; esp -= 4; W32(esp, v); }
/* 1090a66b: call dword ptr [0x10959c1c] */
  esp -= 4; W32(esp, 0x1090a671u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 1090a671: mov ecx, esi */
  ecx = esi;
/* 1090a673: call dword ptr [0x1095a31c] */
  esp -= 4; W32(esp, 0x1090a679u); SPILL(); f_d82347(); if (g_unwind) return; /* Window!??0WObjectProperties@@QAE@VFName@@KPBGPAVWWindow@@H@Z */ RELOAD();
/* 1090a679: mov dword ptr [esi], 0x10921170 */
  W32((uint32_t)(esi), 0x10921170u);
/* 1090a67f: jmp 0x1090a804 */
  goto L_1090a804;
L_1090a6c0: /* 1090a6c0: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a6c5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 1090a6c8: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 1090a6cb: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a6cd: jge 0x1090a62a */
  if ((sf == of)) goto L_1090a62a;
L_1090a6d3: /* 1090a6d3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a6d5: je 0x1090a6fb */
  if (zf) goto L_1090a6fb;
L_1090a6d7: /* 1090a6d7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090a6d9: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 1090a6dc: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 1090a6e2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a6e3: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1090a6e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a6e9: call 0x109013fc */
  esp -= 4; W32(esp, 0x1090a6eeu); SPILL(); f_109013fc(); if (g_unwind) return; RELOAD();
/* 1090a6ee: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 1090a6f1: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a6f6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a6f9: jmp 0x1090a701 */
  goto L_1090a701;
L_1090a6fb: /* 1090a6fb: fld qword ptr [0x10921158] */
  { double v = F64((uint32_t)(0x10921158u)); FPUSH(v); }
L_1090a701: /* 1090a701: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a703: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 1090a706: je 0x1090a726 */
  if (zf) goto L_1090a726;
L_1090a708: /* 1090a708: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090a70a: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 1090a70d: call dword ptr [0x10959e90] */
  esp -= 4; W32(esp, 0x1090a713u); SPILL(); f_6c62fd(); if (g_unwind) return; /* Engine!?GetLevel@AActor@@QBEPAVULevel@@XZ */ RELOAD();
/* 1090a713: mov ecx, ebx */
  ecx = ebx;
/* 1090a715: mov edi, eax */
  edi = eax;
/* 1090a717: call dword ptr [0x10959e90] */
  esp -= 4; W32(esp, 0x1090a71du); SPILL(); f_6c62fd(); if (g_unwind) return; /* Engine!?GetLevel@AActor@@QBEPAVULevel@@XZ */ RELOAD();
/* 1090a71d: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090a71f: jne 0x1090a765 */
  if (!zf) goto L_1090a765;
L_1090a721: /* 1090a721: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
L_1090a726: /* 1090a726: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090a728: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 1090a72b: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 1090a731: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a734: jne 0x1090a765 */
  if (!zf) goto L_1090a765;
L_1090a736: /* 1090a736: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090a739: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090a73a: call dword ptr [0x10959cac] */
  esp -= 4; W32(esp, 0x1090a740u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 1090a740: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a742: je 0x1090a765 */
  if (zf) goto L_1090a765;
L_1090a744: /* 1090a744: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 1090a747: fcomp dword ptr [ebp - 0x20] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe0u)));
  FPOP();
/* 1090a74a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1090a74c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 1090a74f: jp 0x1090a765 */
  if (pf) goto L_1090a765;
L_1090a751: /* 1090a751: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1090a754: mov ecx, dword ptr [0x10959ce8] */
  ecx = R32((uint32_t)(0x10959ce8u));
/* 1090a75a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090a75c: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 1090a75f: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 1090a762: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_1090a765: /* 1090a765: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 1090a768: call 0x109013a2 */
  esp -= 4; W32(esp, 0x1090a76du); SPILL(); f_109013a2(); if (g_unwind) return; RELOAD();
/* 1090a76d: jmp 0x1090a6c0 */
  goto L_1090a6c0;
L_1090a802: /* 1090a802: xor esi, esi */
  esi = 0;
L_1090a804: /* 1090a804: mov ecx, dword ptr [0x10959ce8] */
  ecx = R32((uint32_t)(0x10959ce8u));
/* 1090a80a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090a80c: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090a80f: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 1090a812: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 1090a815: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 1090a818: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 1090a81a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 1090a81c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090a820: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0x1090a826u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a826: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a827: mov ecx, esi */
  ecx = esi;
/* 1090a829: call dword ptr [0x1095a318] */
  esp -= 4; W32(esp, 0x1090a82fu); SPILL(); f_d816a4(); if (g_unwind) return; /* Window!?OpenWindow@WProperties@@QAEXPAUHWND__@@@Z */ RELOAD();
/* 1090a82f: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* 1090a835: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* 1090a83b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a83d: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 1090a840: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a841: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x1090a847u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a847: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 1090a849: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a84b: mov ecx, esi */
  ecx = esi;
/* 1090a84d: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x1090a850u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a850: call dword ptr [0x10959e8c] */
  esp -= 4; W32(esp, 0x1090a856u); SPILL(); f_6c8094(); if (g_unwind) return; /* Engine!?StaticClass@AActor@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a856: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a857: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090a85a: call 0x1090146f */
  esp -= 4; W32(esp, 0x1090a85fu); SPILL(); f_1090146f(); if (g_unwind) return; RELOAD();
/* 1090a85f: nop  */
L_1090a860: /* 1090a860: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a865: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 1090a868: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090a86b: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a86d: jge 0x1090a888 */
  if ((sf == of)) goto L_1090a888;
L_1090a86f: /* 1090a86f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090a871: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 1090a874: and dword ptr [eax + 0x88], 0xbfffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0xbfffffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 1090a87e: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090a881: call 0x109013a2 */
  esp -= 4; W32(esp, 0x1090a886u); SPILL(); f_109013a2(); if (g_unwind) return; RELOAD();
/* 1090a886: jmp 0x1090a860 */
  goto L_1090a860;
L_1090a888: /* 1090a888: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090a88b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a88d: je 0x1090a596 */
  if (zf) goto L_1090a596;
L_1090a893: /* 1090a893: call dword ptr [0x10959e8c] */
  esp -= 4; W32(esp, 0x1090a899u); SPILL(); f_6c8094(); if (g_unwind) return; /* Engine!?StaticClass@AActor@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a899: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a89a: mov ecx, esi */
  ecx = esi;
/* 1090a89c: call dword ptr [0x10959cac] */
  esp -= 4; W32(esp, 0x1090a8a2u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 1090a8a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a8a4: je 0x1090a596 */
  if (zf) goto L_1090a596;
L_1090a8aa: /* 1090a8aa: or dword ptr [esi + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x88u), r);
  }
/* 1090a8b4: jmp 0x1090a596 */
  goto L_1090a596;
L_1090a8b9: /* 1090a8b9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 1090a8bc: push 0x1092ed90 */
  { uint32_t v = 0x1092ed90u; esp -= 4; W32(esp, v); }
/* 1090a8c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a8c2: call dword ptr [0x10959cbc] */
  esp -= 4; W32(esp, 0x1090a8c8u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 1090a8c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a8cb: jmp 0x1090a596 */
  goto L_1090a596;
}

void f_1090a772(void) {
  LOAD_REGS();
  goto L_1090a772;
L_1090a596: /* 1090a596: mov eax, 1 */
  eax = 0x1u;
/* 1090a59b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090a59e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090a5a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090a5a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090a5a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090a5a8: mov esp, ebp */
  esp = ebp;
/* 1090a5aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090a5ab: ret 8 */
  esp += 12; SPILL(); return;
L_1090a627: /* 1090a627: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_1090a62a: /* 1090a62a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090a62d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a62f: je 0x1090a8b9 */
  if (zf) goto L_1090a8b9;
L_1090a635: /* 1090a635: push 0x160 */
  { uint32_t v = 0x160u; esp -= 4; W32(esp, v); }
/* 1090a63a: call 0x1090145b */
  esp -= 4; W32(esp, 0x1090a63fu); SPILL(); f_1090145b(); if (g_unwind) return; RELOAD();
/* 1090a63f: mov esi, eax */
  esi = eax;
/* 1090a641: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a644: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 1090a647: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a649: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 1090a64d: je 0x1090a802 */
  if (zf) goto L_1090a802;
L_1090a653: /* 1090a653: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a655: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090a657: push 0x10958ea4 */
  { uint32_t v = 0x10958ea4u; esp -= 4; W32(esp, v); }
/* 1090a65c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090a65e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a65f: mov ecx, esp */
  ecx = esp;
/* 1090a661: mov dword ptr [ebp - 0x20], esp */
  W32((uint32_t)(ebp + 0xffffffe0u), esp);
/* 1090a664: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a666: push 0x1092ee64 */
  { uint32_t v = 0x1092ee64u; esp -= 4; W32(esp, v); }
/* 1090a66b: call dword ptr [0x10959c1c] */
  esp -= 4; W32(esp, 0x1090a671u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 1090a671: mov ecx, esi */
  ecx = esi;
/* 1090a673: call dword ptr [0x1095a31c] */
  esp -= 4; W32(esp, 0x1090a679u); SPILL(); f_d82347(); if (g_unwind) return; /* Window!??0WObjectProperties@@QAE@VFName@@KPBGPAVWWindow@@H@Z */ RELOAD();
/* 1090a679: mov dword ptr [esi], 0x10921170 */
  W32((uint32_t)(esi), 0x10921170u);
/* 1090a67f: jmp 0x1090a804 */
  goto L_1090a804;
L_1090a772: /* 1090a772: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090a775: call dword ptr [0x10959c30] */
  esp -= 4; W32(esp, 0x1090a77bu); SPILL(); f_4e26bc(); if (g_unwind) return; /* Core!??0FName@@QAE@XZ */ RELOAD();
/* 1090a77b: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 1090a77e: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090a781: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a782: push 0x1092edb8 */
  { uint32_t v = 0x1092edb8u; esp -= 4; W32(esp, v); }
/* 1090a787: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090a788: call dword ptr [0x10959c34] */
  esp -= 4; W32(esp, 0x1090a78eu); SPILL(); f_4e3f67(); if (g_unwind) return; /* Core!?Parse@@YAHPBG0AAVFName@@@Z */ RELOAD();
/* 1090a78e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a791: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a793: je 0x1090a62a */
  if (zf) goto L_1090a62a;
L_1090a799: /* 1090a799: call dword ptr [0x10959e8c] */
  esp -= 4; W32(esp, 0x1090a79fu); SPILL(); f_6c8094(); if (g_unwind) return; /* Engine!?StaticClass@AActor@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a79f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a7a0: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 1090a7a3: call 0x1090146f */
  esp -= 4; W32(esp, 0x1090a7a8u); SPILL(); f_1090146f(); if (g_unwind) return; RELOAD();
/* 1090a7a8: jmp 0x1090a7b0 */
  goto L_1090a7b0;
L_1090a7b0: /* 1090a7b0: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a7b5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 1090a7b8: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 1090a7bb: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a7bd: jge 0x1090a62a */
  if ((sf == of)) goto L_1090a62a;
L_1090a7c3: /* 1090a7c3: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090a7c5: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 1090a7c8: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 1090a7ce: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a7d1: jne 0x1090a7f8 */
  if (!zf) goto L_1090a7f8;
L_1090a7d3: /* 1090a7d3: call dword ptr [0x10959c38] */
  esp -= 4; W32(esp, 0x1090a7d9u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 1090a7d9: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090a7dc: mov edi, eax */
  edi = eax;
/* 1090a7de: call dword ptr [0x10959c3c] */
  esp -= 4; W32(esp, 0x1090a7e4u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 1090a7e4: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090a7e6: jne 0x1090a7f8 */
  if (!zf) goto L_1090a7f8;
L_1090a7e8: /* 1090a7e8: mov ecx, dword ptr [0x10959ce8] */
  ecx = R32((uint32_t)(0x10959ce8u));
/* 1090a7ee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090a7f0: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 1090a7f3: jmp 0x1090a627 */
  goto L_1090a627;
L_1090a7f8: /* 1090a7f8: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 1090a7fb: call 0x109013a2 */
  esp -= 4; W32(esp, 0x1090a800u); SPILL(); f_109013a2(); if (g_unwind) return; RELOAD();
/* 1090a800: jmp 0x1090a7b0 */
  goto L_1090a7b0;
L_1090a802: /* 1090a802: xor esi, esi */
  esi = 0;
L_1090a804: /* 1090a804: mov ecx, dword ptr [0x10959ce8] */
  ecx = R32((uint32_t)(0x10959ce8u));
/* 1090a80a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090a80c: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090a80f: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 1090a812: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 1090a815: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 1090a818: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 1090a81a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 1090a81c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090a820: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0x1090a826u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a826: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a827: mov ecx, esi */
  ecx = esi;
/* 1090a829: call dword ptr [0x1095a318] */
  esp -= 4; W32(esp, 0x1090a82fu); SPILL(); f_d816a4(); if (g_unwind) return; /* Window!?OpenWindow@WProperties@@QAEXPAUHWND__@@@Z */ RELOAD();
/* 1090a82f: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* 1090a835: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* 1090a83b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a83d: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 1090a840: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a841: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x1090a847u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a847: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 1090a849: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a84b: mov ecx, esi */
  ecx = esi;
/* 1090a84d: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x1090a850u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a850: call dword ptr [0x10959e8c] */
  esp -= 4; W32(esp, 0x1090a856u); SPILL(); f_6c8094(); if (g_unwind) return; /* Engine!?StaticClass@AActor@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a856: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a857: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090a85a: call 0x1090146f */
  esp -= 4; W32(esp, 0x1090a85fu); SPILL(); f_1090146f(); if (g_unwind) return; RELOAD();
/* 1090a85f: nop  */
L_1090a860: /* 1090a860: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a865: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 1090a868: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090a86b: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a86d: jge 0x1090a888 */
  if ((sf == of)) goto L_1090a888;
L_1090a86f: /* 1090a86f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090a871: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 1090a874: and dword ptr [eax + 0x88], 0xbfffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0xbfffffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 1090a87e: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090a881: call 0x109013a2 */
  esp -= 4; W32(esp, 0x1090a886u); SPILL(); f_109013a2(); if (g_unwind) return; RELOAD();
/* 1090a886: jmp 0x1090a860 */
  goto L_1090a860;
L_1090a888: /* 1090a888: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090a88b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a88d: je 0x1090a596 */
  if (zf) goto L_1090a596;
L_1090a893: /* 1090a893: call dword ptr [0x10959e8c] */
  esp -= 4; W32(esp, 0x1090a899u); SPILL(); f_6c8094(); if (g_unwind) return; /* Engine!?StaticClass@AActor@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a899: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a89a: mov ecx, esi */
  ecx = esi;
/* 1090a89c: call dword ptr [0x10959cac] */
  esp -= 4; W32(esp, 0x1090a8a2u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 1090a8a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a8a4: je 0x1090a596 */
  if (zf) goto L_1090a596;
L_1090a8aa: /* 1090a8aa: or dword ptr [esi + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x88u), r);
  }
/* 1090a8b4: jmp 0x1090a596 */
  goto L_1090a596;
L_1090a8b9: /* 1090a8b9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 1090a8bc: push 0x1092ed90 */
  { uint32_t v = 0x1092ed90u; esp -= 4; W32(esp, v); }
/* 1090a8c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a8c2: call dword ptr [0x10959cbc] */
  esp -= 4; W32(esp, 0x1090a8c8u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 1090a8c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a8cb: jmp 0x1090a596 */
  goto L_1090a596;
}

void f_1090a7aa(void) {
  LOAD_REGS();
  goto L_1090a7aa;
L_1090a596: /* 1090a596: mov eax, 1 */
  eax = 0x1u;
/* 1090a59b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090a59e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090a5a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090a5a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090a5a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090a5a8: mov esp, ebp */
  esp = ebp;
/* 1090a5aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090a5ab: ret 8 */
  esp += 12; SPILL(); return;
L_1090a627: /* 1090a627: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_1090a62a: /* 1090a62a: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090a62d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a62f: je 0x1090a8b9 */
  if (zf) goto L_1090a8b9;
L_1090a635: /* 1090a635: push 0x160 */
  { uint32_t v = 0x160u; esp -= 4; W32(esp, v); }
/* 1090a63a: call 0x1090145b */
  esp -= 4; W32(esp, 0x1090a63fu); SPILL(); f_1090145b(); if (g_unwind) return; RELOAD();
/* 1090a63f: mov esi, eax */
  esi = eax;
/* 1090a641: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a644: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 1090a647: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a649: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 1090a64d: je 0x1090a802 */
  if (zf) goto L_1090a802;
L_1090a653: /* 1090a653: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a655: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090a657: push 0x10958ea4 */
  { uint32_t v = 0x10958ea4u; esp -= 4; W32(esp, v); }
/* 1090a65c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090a65e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a65f: mov ecx, esp */
  ecx = esp;
/* 1090a661: mov dword ptr [ebp - 0x20], esp */
  W32((uint32_t)(ebp + 0xffffffe0u), esp);
/* 1090a664: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a666: push 0x1092ee64 */
  { uint32_t v = 0x1092ee64u; esp -= 4; W32(esp, v); }
/* 1090a66b: call dword ptr [0x10959c1c] */
  esp -= 4; W32(esp, 0x1090a671u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 1090a671: mov ecx, esi */
  ecx = esi;
/* 1090a673: call dword ptr [0x1095a31c] */
  esp -= 4; W32(esp, 0x1090a679u); SPILL(); f_d82347(); if (g_unwind) return; /* Window!??0WObjectProperties@@QAE@VFName@@KPBGPAVWWindow@@H@Z */ RELOAD();
/* 1090a679: mov dword ptr [esi], 0x10921170 */
  W32((uint32_t)(esi), 0x10921170u);
/* 1090a67f: jmp 0x1090a804 */
  goto L_1090a804;
L_1090a7aa: /* 1090a7aa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1090a7b0: /* 1090a7b0: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a7b5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 1090a7b8: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 1090a7bb: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a7bd: jge 0x1090a62a */
  if ((sf == of)) goto L_1090a62a;
L_1090a7c3: /* 1090a7c3: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090a7c5: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 1090a7c8: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 1090a7ce: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a7d1: jne 0x1090a7f8 */
  if (!zf) goto L_1090a7f8;
L_1090a7d3: /* 1090a7d3: call dword ptr [0x10959c38] */
  esp -= 4; W32(esp, 0x1090a7d9u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 1090a7d9: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 1090a7dc: mov edi, eax */
  edi = eax;
/* 1090a7de: call dword ptr [0x10959c3c] */
  esp -= 4; W32(esp, 0x1090a7e4u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 1090a7e4: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090a7e6: jne 0x1090a7f8 */
  if (!zf) goto L_1090a7f8;
L_1090a7e8: /* 1090a7e8: mov ecx, dword ptr [0x10959ce8] */
  ecx = R32((uint32_t)(0x10959ce8u));
/* 1090a7ee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090a7f0: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 1090a7f3: jmp 0x1090a627 */
  goto L_1090a627;
L_1090a7f8: /* 1090a7f8: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 1090a7fb: call 0x109013a2 */
  esp -= 4; W32(esp, 0x1090a800u); SPILL(); f_109013a2(); if (g_unwind) return; RELOAD();
/* 1090a800: jmp 0x1090a7b0 */
  goto L_1090a7b0;
L_1090a802: /* 1090a802: xor esi, esi */
  esi = 0;
L_1090a804: /* 1090a804: mov ecx, dword ptr [0x10959ce8] */
  ecx = R32((uint32_t)(0x10959ce8u));
/* 1090a80a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090a80c: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090a80f: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 1090a812: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 1090a815: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* 1090a818: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 1090a81a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 1090a81c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090a820: call dword ptr [eax + 0x98] */
  { uint32_t t = R32((uint32_t)(eax + 0x98u)); esp -= 4; W32(esp, 0x1090a826u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a826: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a827: mov ecx, esi */
  ecx = esi;
/* 1090a829: call dword ptr [0x1095a318] */
  esp -= 4; W32(esp, 0x1090a82fu); SPILL(); f_d816a4(); if (g_unwind) return; /* Window!?OpenWindow@WProperties@@QAEXPAUHWND__@@@Z */ RELOAD();
/* 1090a82f: mov edx, dword ptr [esi + 0xfc] */
  edx = R32((uint32_t)(esi + 0xfcu));
/* 1090a835: lea ecx, [esi + 0xfc] */
  ecx = (uint32_t)(esi + 0xfcu);
/* 1090a83b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a83d: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 1090a840: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a841: call dword ptr [edx + 0x98] */
  { uint32_t t = R32((uint32_t)(edx + 0x98u)); esp -= 4; W32(esp, 0x1090a847u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a847: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 1090a849: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090a84b: mov ecx, esi */
  ecx = esi;
/* 1090a84d: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x1090a850u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 1090a850: call dword ptr [0x10959e8c] */
  esp -= 4; W32(esp, 0x1090a856u); SPILL(); f_6c8094(); if (g_unwind) return; /* Engine!?StaticClass@AActor@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a856: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a857: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090a85a: call 0x1090146f */
  esp -= 4; W32(esp, 0x1090a85fu); SPILL(); f_1090146f(); if (g_unwind) return; RELOAD();
/* 1090a85f: nop  */
L_1090a860: /* 1090a860: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a865: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 1090a868: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090a86b: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a86d: jge 0x1090a888 */
  if ((sf == of)) goto L_1090a888;
L_1090a86f: /* 1090a86f: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090a871: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 1090a874: and dword ptr [eax + 0x88], 0xbfffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x88u))); uint32_t b = (uint32_t)(0xbfffffffu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x88u), r);
  }
/* 1090a87e: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090a881: call 0x109013a2 */
  esp -= 4; W32(esp, 0x1090a886u); SPILL(); f_109013a2(); if (g_unwind) return; RELOAD();
/* 1090a886: jmp 0x1090a860 */
  goto L_1090a860;
L_1090a888: /* 1090a888: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090a88b: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a88d: je 0x1090a596 */
  if (zf) goto L_1090a596;
L_1090a893: /* 1090a893: call dword ptr [0x10959e8c] */
  esp -= 4; W32(esp, 0x1090a899u); SPILL(); f_6c8094(); if (g_unwind) return; /* Engine!?StaticClass@AActor@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a899: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a89a: mov ecx, esi */
  ecx = esi;
/* 1090a89c: call dword ptr [0x10959cac] */
  esp -= 4; W32(esp, 0x1090a8a2u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 1090a8a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a8a4: je 0x1090a596 */
  if (zf) goto L_1090a596;
L_1090a8aa: /* 1090a8aa: or dword ptr [esi + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(esi + 0x88u), r);
  }
/* 1090a8b4: jmp 0x1090a596 */
  goto L_1090a596;
L_1090a8b9: /* 1090a8b9: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 1090a8bc: push 0x1092ed90 */
  { uint32_t v = 0x1092ed90u; esp -= 4; W32(esp, v); }
/* 1090a8c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a8c2: call dword ptr [0x10959cbc] */
  esp -= 4; W32(esp, 0x1090a8c8u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 1090a8c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a8cb: jmp 0x1090a596 */
  goto L_1090a596;
}

void f_1090a993(void) {
  LOAD_REGS();
  goto L_1090a993;
L_1090a56c: /* 1090a56c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090a56d: call dword ptr [0x10959c24] */
  esp -= 4; W32(esp, 0x1090a573u); SPILL(); f_4e4499(); if (g_unwind) return; /* Core!?ExportToOutputDevice@UExporter@@SAXPAVUObject@@PAV1@AAVFOutputDevice@@PBGH@Z */ RELOAD();
/* 1090a573: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a576: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 1090a579: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090a57fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090a57f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a580: call dword ptr [0x10959c28] */
  esp -= 4; W32(esp, 0x1090a586u); SPILL(); f_4e15eb(); if (g_unwind) return; /* Core!?appClipboardCopy@@YAXPBG@Z */ RELOAD();
/* 1090a586: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a589: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 1090a58c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090a590: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090a596u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_1090a596: /* 1090a596: mov eax, 1 */
  eax = 0x1u;
/* 1090a59b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090a59e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090a5a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090a5a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090a5a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090a5a8: mov esp, ebp */
  esp = ebp;
/* 1090a5aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090a5ab: ret 8 */
  esp += 12; SPILL(); return;
L_1090a954: /* 1090a954: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090a957: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a959: je 0x1090aa82 */
  if (zf) goto L_1090aa82;
L_1090a95f: /* 1090a95f: push 0x10958ea4 */
  { uint32_t v = 0x10958ea4u; esp -= 4; W32(esp, v); }
/* 1090a964: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 1090a967: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x1090a96du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 1090a96d: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 1090a970: call dword ptr [0x10959b08] */
  esp -= 4; W32(esp, 0x1090a976u); SPILL(); f_4e22ed(); if (g_unwind) return; /* Core!??0FOutputDevice@@QAE@XZ */ RELOAD();
/* 1090a976: mov dword ptr [ebp - 0x40], 0x10921164 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x10921164u);
/* 1090a97d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090a97f: push 0x1092ed5c */
  { uint32_t v = 0x1092ed5cu; esp -= 4; W32(esp, v); }
/* 1090a984: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 1090a987: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a988: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 1090a98c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090a98e: jmp 0x1090a56c */
  goto L_1090a56c;
L_1090a993: /* 1090a993: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a998: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090a99a: mov eax, dword ptr [ecx + ebx*4] */
  eax = R32((uint32_t)(ecx + ebx*4));
/* 1090a99d: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 1090a9a0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a9a2: je 0x1090a9b0 */
  if (zf) goto L_1090a9b0;
L_1090a9a4: /* 1090a9a4: mov edx, ecx */
  edx = ecx;
/* 1090a9a6: mov eax, dword ptr [edx + 0x2c] */
  eax = R32((uint32_t)(edx + 0x2cu));
/* 1090a9a9: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090a9ab: mov ebx, dword ptr [ecx + 0x30] */
  ebx = R32((uint32_t)(ecx + 0x30u));
/* 1090a9ae: jmp 0x1090a9b2 */
  goto L_1090a9b2;
L_1090a9b0: /* 1090a9b0: xor ebx, ebx */
  ebx = 0;
L_1090a9b2: /* 1090a9b2: mov dword ptr [ebp - 0x18], 0x497423f0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x497423f0u);
/* 1090a9b9: call dword ptr [0x10959e8c] */
  esp -= 4; W32(esp, 0x1090a9bfu); SPILL(); f_6c8094(); if (g_unwind) return; /* Engine!?StaticClass@AActor@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a9bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a9c0: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090a9c3: call 0x1090146f */
  esp -= 4; W32(esp, 0x1090a9c8u); SPILL(); f_1090146f(); if (g_unwind) return; RELOAD();
/* 1090a9c8: jmp 0x1090a9d0 */
  goto L_1090a9d0;
L_1090a9d0: /* 1090a9d0: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a9d5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 1090a9d8: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090a9db: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a9dd: jge 0x1090a954 */
  if ((sf == of)) goto L_1090a954;
L_1090a9e3: /* 1090a9e3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a9e5: je 0x1090aa0b */
  if (zf) goto L_1090aa0b;
L_1090a9e7: /* 1090a9e7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090a9e9: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 1090a9ec: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 1090a9f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a9f3: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1090a9f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a9f9: call 0x109013fc */
  esp -= 4; W32(esp, 0x1090a9feu); SPILL(); f_109013fc(); if (g_unwind) return; RELOAD();
/* 1090a9fe: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 1090aa01: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090aa06: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090aa09: jmp 0x1090aa11 */
  goto L_1090aa11;
L_1090aa0b: /* 1090aa0b: fld qword ptr [0x10921158] */
  { double v = F64((uint32_t)(0x10921158u)); FPUSH(v); }
L_1090aa11: /* 1090aa11: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090aa13: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 1090aa16: je 0x1090aa36 */
  if (zf) goto L_1090aa36;
L_1090aa18: /* 1090aa18: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090aa1a: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 1090aa1d: call dword ptr [0x10959e90] */
  esp -= 4; W32(esp, 0x1090aa23u); SPILL(); f_6c62fd(); if (g_unwind) return; /* Engine!?GetLevel@AActor@@QBEPAVULevel@@XZ */ RELOAD();
/* 1090aa23: mov ecx, ebx */
  ecx = ebx;
/* 1090aa25: mov edi, eax */
  edi = eax;
/* 1090aa27: call dword ptr [0x10959e90] */
  esp -= 4; W32(esp, 0x1090aa2du); SPILL(); f_6c62fd(); if (g_unwind) return; /* Engine!?GetLevel@AActor@@QBEPAVULevel@@XZ */ RELOAD();
/* 1090aa2d: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090aa2f: jne 0x1090aa75 */
  if (!zf) goto L_1090aa75;
L_1090aa31: /* 1090aa31: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
L_1090aa36: /* 1090aa36: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090aa38: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 1090aa3b: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 1090aa41: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090aa44: jne 0x1090aa75 */
  if (!zf) goto L_1090aa75;
L_1090aa46: /* 1090aa46: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 1090aa49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090aa4a: call dword ptr [0x10959cac] */
  esp -= 4; W32(esp, 0x1090aa50u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 1090aa50: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090aa52: je 0x1090aa75 */
  if (zf) goto L_1090aa75;
L_1090aa54: /* 1090aa54: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 1090aa57: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 1090aa5a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1090aa5c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 1090aa5f: jp 0x1090aa75 */
  if (pf) goto L_1090aa75;
L_1090aa61: /* 1090aa61: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1090aa64: mov ecx, dword ptr [0x10959ce8] */
  ecx = R32((uint32_t)(0x10959ce8u));
/* 1090aa6a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090aa6c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 1090aa6f: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 1090aa72: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_1090aa75: /* 1090aa75: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090aa78: call 0x109013a2 */
  esp -= 4; W32(esp, 0x1090aa7du); SPILL(); f_109013a2(); if (g_unwind) return; RELOAD();
/* 1090aa7d: jmp 0x1090a9d0 */
  goto L_1090a9d0;
L_1090aa82: /* 1090aa82: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 1090aa85: push 0x1092ed34 */
  { uint32_t v = 0x1092ed34u; esp -= 4; W32(esp, v); }
/* 1090aa8a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090aa8b: call dword ptr [0x10959cbc] */
  esp -= 4; W32(esp, 0x1090aa91u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 1090aa91: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090aa94: jmp 0x1090a596 */
  goto L_1090a596;
}

void f_1090a9b0(void) {
  LOAD_REGS();
  goto L_1090a9b0;
L_1090a56c: /* 1090a56c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090a56d: call dword ptr [0x10959c24] */
  esp -= 4; W32(esp, 0x1090a573u); SPILL(); f_4e4499(); if (g_unwind) return; /* Core!?ExportToOutputDevice@UExporter@@SAXPAVUObject@@PAV1@AAVFOutputDevice@@PBGH@Z */ RELOAD();
/* 1090a573: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a576: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 1090a579: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090a57fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090a57f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a580: call dword ptr [0x10959c28] */
  esp -= 4; W32(esp, 0x1090a586u); SPILL(); f_4e15eb(); if (g_unwind) return; /* Core!?appClipboardCopy@@YAXPBG@Z */ RELOAD();
/* 1090a586: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a589: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 1090a58c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090a590: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090a596u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_1090a596: /* 1090a596: mov eax, 1 */
  eax = 0x1u;
/* 1090a59b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090a59e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090a5a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090a5a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090a5a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090a5a8: mov esp, ebp */
  esp = ebp;
/* 1090a5aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090a5ab: ret 8 */
  esp += 12; SPILL(); return;
L_1090a954: /* 1090a954: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090a957: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a959: je 0x1090aa82 */
  if (zf) goto L_1090aa82;
L_1090a95f: /* 1090a95f: push 0x10958ea4 */
  { uint32_t v = 0x10958ea4u; esp -= 4; W32(esp, v); }
/* 1090a964: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 1090a967: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x1090a96du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 1090a96d: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 1090a970: call dword ptr [0x10959b08] */
  esp -= 4; W32(esp, 0x1090a976u); SPILL(); f_4e22ed(); if (g_unwind) return; /* Core!??0FOutputDevice@@QAE@XZ */ RELOAD();
/* 1090a976: mov dword ptr [ebp - 0x40], 0x10921164 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x10921164u);
/* 1090a97d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090a97f: push 0x1092ed5c */
  { uint32_t v = 0x1092ed5cu; esp -= 4; W32(esp, v); }
/* 1090a984: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 1090a987: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a988: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 1090a98c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090a98e: jmp 0x1090a56c */
  goto L_1090a56c;
L_1090a9b0: /* 1090a9b0: xor ebx, ebx */
  ebx = 0;
/* 1090a9b2: mov dword ptr [ebp - 0x18], 0x497423f0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x497423f0u);
/* 1090a9b9: call dword ptr [0x10959e8c] */
  esp -= 4; W32(esp, 0x1090a9bfu); SPILL(); f_6c8094(); if (g_unwind) return; /* Engine!?StaticClass@AActor@@SAPAVUClass@@XZ */ RELOAD();
/* 1090a9bf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a9c0: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090a9c3: call 0x1090146f */
  esp -= 4; W32(esp, 0x1090a9c8u); SPILL(); f_1090146f(); if (g_unwind) return; RELOAD();
/* 1090a9c8: jmp 0x1090a9d0 */
  goto L_1090a9d0;
L_1090a9d0: /* 1090a9d0: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a9d5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 1090a9d8: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090a9db: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a9dd: jge 0x1090a954 */
  if ((sf == of)) goto L_1090a954;
L_1090a9e3: /* 1090a9e3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a9e5: je 0x1090aa0b */
  if (zf) goto L_1090aa0b;
L_1090a9e7: /* 1090a9e7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090a9e9: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 1090a9ec: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 1090a9f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a9f3: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1090a9f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a9f9: call 0x109013fc */
  esp -= 4; W32(esp, 0x1090a9feu); SPILL(); f_109013fc(); if (g_unwind) return; RELOAD();
/* 1090a9fe: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 1090aa01: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090aa06: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090aa09: jmp 0x1090aa11 */
  goto L_1090aa11;
L_1090aa0b: /* 1090aa0b: fld qword ptr [0x10921158] */
  { double v = F64((uint32_t)(0x10921158u)); FPUSH(v); }
L_1090aa11: /* 1090aa11: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090aa13: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 1090aa16: je 0x1090aa36 */
  if (zf) goto L_1090aa36;
L_1090aa18: /* 1090aa18: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090aa1a: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 1090aa1d: call dword ptr [0x10959e90] */
  esp -= 4; W32(esp, 0x1090aa23u); SPILL(); f_6c62fd(); if (g_unwind) return; /* Engine!?GetLevel@AActor@@QBEPAVULevel@@XZ */ RELOAD();
/* 1090aa23: mov ecx, ebx */
  ecx = ebx;
/* 1090aa25: mov edi, eax */
  edi = eax;
/* 1090aa27: call dword ptr [0x10959e90] */
  esp -= 4; W32(esp, 0x1090aa2du); SPILL(); f_6c62fd(); if (g_unwind) return; /* Engine!?GetLevel@AActor@@QBEPAVULevel@@XZ */ RELOAD();
/* 1090aa2d: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090aa2f: jne 0x1090aa75 */
  if (!zf) goto L_1090aa75;
L_1090aa31: /* 1090aa31: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
L_1090aa36: /* 1090aa36: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090aa38: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 1090aa3b: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 1090aa41: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090aa44: jne 0x1090aa75 */
  if (!zf) goto L_1090aa75;
L_1090aa46: /* 1090aa46: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 1090aa49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090aa4a: call dword ptr [0x10959cac] */
  esp -= 4; W32(esp, 0x1090aa50u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 1090aa50: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090aa52: je 0x1090aa75 */
  if (zf) goto L_1090aa75;
L_1090aa54: /* 1090aa54: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 1090aa57: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 1090aa5a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1090aa5c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 1090aa5f: jp 0x1090aa75 */
  if (pf) goto L_1090aa75;
L_1090aa61: /* 1090aa61: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1090aa64: mov ecx, dword ptr [0x10959ce8] */
  ecx = R32((uint32_t)(0x10959ce8u));
/* 1090aa6a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090aa6c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 1090aa6f: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 1090aa72: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_1090aa75: /* 1090aa75: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090aa78: call 0x109013a2 */
  esp -= 4; W32(esp, 0x1090aa7du); SPILL(); f_109013a2(); if (g_unwind) return; RELOAD();
/* 1090aa7d: jmp 0x1090a9d0 */
  goto L_1090a9d0;
L_1090aa82: /* 1090aa82: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 1090aa85: push 0x1092ed34 */
  { uint32_t v = 0x1092ed34u; esp -= 4; W32(esp, v); }
/* 1090aa8a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090aa8b: call dword ptr [0x10959cbc] */
  esp -= 4; W32(esp, 0x1090aa91u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 1090aa91: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090aa94: jmp 0x1090a596 */
  goto L_1090a596;
}

void f_1090a9ca(void) {
  LOAD_REGS();
  goto L_1090a9ca;
L_1090a56c: /* 1090a56c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090a56d: call dword ptr [0x10959c24] */
  esp -= 4; W32(esp, 0x1090a573u); SPILL(); f_4e4499(); if (g_unwind) return; /* Core!?ExportToOutputDevice@UExporter@@SAXPAVUObject@@PAV1@AAVFOutputDevice@@PBGH@Z */ RELOAD();
/* 1090a573: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a576: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 1090a579: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090a57fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090a57f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a580: call dword ptr [0x10959c28] */
  esp -= 4; W32(esp, 0x1090a586u); SPILL(); f_4e15eb(); if (g_unwind) return; /* Core!?appClipboardCopy@@YAXPBG@Z */ RELOAD();
/* 1090a586: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090a589: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 1090a58c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090a590: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090a596u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_1090a596: /* 1090a596: mov eax, 1 */
  eax = 0x1u;
/* 1090a59b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090a59e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090a5a5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090a5a6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090a5a7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090a5a8: mov esp, ebp */
  esp = ebp;
/* 1090a5aa: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090a5ab: ret 8 */
  esp += 12; SPILL(); return;
L_1090a954: /* 1090a954: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090a957: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a959: je 0x1090aa82 */
  if (zf) goto L_1090aa82;
L_1090a95f: /* 1090a95f: push 0x10958ea4 */
  { uint32_t v = 0x10958ea4u; esp -= 4; W32(esp, v); }
/* 1090a964: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 1090a967: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x1090a96du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 1090a96d: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 1090a970: call dword ptr [0x10959b08] */
  esp -= 4; W32(esp, 0x1090a976u); SPILL(); f_4e22ed(); if (g_unwind) return; /* Core!??0FOutputDevice@@QAE@XZ */ RELOAD();
/* 1090a976: mov dword ptr [ebp - 0x40], 0x10921164 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x10921164u);
/* 1090a97d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090a97f: push 0x1092ed5c */
  { uint32_t v = 0x1092ed5cu; esp -= 4; W32(esp, v); }
/* 1090a984: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 1090a987: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a988: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 1090a98c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090a98e: jmp 0x1090a56c */
  goto L_1090a56c;
L_1090a9ca: /* 1090a9ca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1090a9d0: /* 1090a9d0: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090a9d5: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 1090a9d8: mov esi, dword ptr [ebp - 0x34] */
  esi = R32((uint32_t)(ebp + 0xffffffccu));
/* 1090a9db: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090a9dd: jge 0x1090a954 */
  if ((sf == of)) goto L_1090a954;
L_1090a9e3: /* 1090a9e3: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090a9e5: je 0x1090aa0b */
  if (zf) goto L_1090aa0b;
L_1090a9e7: /* 1090a9e7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090a9e9: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 1090a9ec: lea ecx, [ebx + 0x170] */
  ecx = (uint32_t)(ebx + 0x170u);
/* 1090a9f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090a9f3: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1090a9f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090a9f9: call 0x109013fc */
  esp -= 4; W32(esp, 0x1090a9feu); SPILL(); f_109013fc(); if (g_unwind) return; RELOAD();
/* 1090a9fe: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 1090aa01: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
/* 1090aa06: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090aa09: jmp 0x1090aa11 */
  goto L_1090aa11;
L_1090aa0b: /* 1090aa0b: fld qword ptr [0x10921158] */
  { double v = F64((uint32_t)(0x10921158u)); FPUSH(v); }
L_1090aa11: /* 1090aa11: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090aa13: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 1090aa16: je 0x1090aa36 */
  if (zf) goto L_1090aa36;
L_1090aa18: /* 1090aa18: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090aa1a: mov ecx, dword ptr [edx + esi*4] */
  ecx = R32((uint32_t)(edx + esi*4));
/* 1090aa1d: call dword ptr [0x10959e90] */
  esp -= 4; W32(esp, 0x1090aa23u); SPILL(); f_6c62fd(); if (g_unwind) return; /* Engine!?GetLevel@AActor@@QBEPAVULevel@@XZ */ RELOAD();
/* 1090aa23: mov ecx, ebx */
  ecx = ebx;
/* 1090aa25: mov edi, eax */
  edi = eax;
/* 1090aa27: call dword ptr [0x10959e90] */
  esp -= 4; W32(esp, 0x1090aa2du); SPILL(); f_6c62fd(); if (g_unwind) return; /* Engine!?GetLevel@AActor@@QBEPAVULevel@@XZ */ RELOAD();
/* 1090aa2d: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090aa2f: jne 0x1090aa75 */
  if (!zf) goto L_1090aa75;
L_1090aa31: /* 1090aa31: mov eax, dword ptr [0x10959ce8] */
  eax = R32((uint32_t)(0x10959ce8u));
L_1090aa36: /* 1090aa36: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090aa38: mov ecx, dword ptr [eax + esi*4] */
  ecx = R32((uint32_t)(eax + esi*4));
/* 1090aa3b: mov eax, dword ptr [ecx + 0x80] */
  eax = R32((uint32_t)(ecx + 0x80u));
/* 1090aa41: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090aa44: jne 0x1090aa75 */
  if (!zf) goto L_1090aa75;
L_1090aa46: /* 1090aa46: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 1090aa49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090aa4a: call dword ptr [0x10959cac] */
  esp -= 4; W32(esp, 0x1090aa50u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 1090aa50: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090aa52: je 0x1090aa75 */
  if (zf) goto L_1090aa75;
L_1090aa54: /* 1090aa54: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 1090aa57: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 1090aa5a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1090aa5c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 1090aa5f: jp 0x1090aa75 */
  if (pf) goto L_1090aa75;
L_1090aa61: /* 1090aa61: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1090aa64: mov ecx, dword ptr [0x10959ce8] */
  ecx = R32((uint32_t)(0x10959ce8u));
/* 1090aa6a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090aa6c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 1090aa6f: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* 1090aa72: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_1090aa75: /* 1090aa75: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 1090aa78: call 0x109013a2 */
  esp -= 4; W32(esp, 0x1090aa7du); SPILL(); f_109013a2(); if (g_unwind) return; RELOAD();
/* 1090aa7d: jmp 0x1090a9d0 */
  goto L_1090a9d0;
L_1090aa82: /* 1090aa82: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 1090aa85: push 0x1092ed34 */
  { uint32_t v = 0x1092ed34u; esp -= 4; W32(esp, v); }
/* 1090aa8a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090aa8b: call dword ptr [0x10959cbc] */
  esp -= 4; W32(esp, 0x1090aa91u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 1090aa91: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090aa94: jmp 0x1090a596 */
  goto L_1090a596;
}

void f_1090ac14(void) {
  LOAD_REGS();
L_1090ac14: /* 1090ac14: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 1090ac17: push 0x10925da0 */
  { uint32_t v = 0x10925da0u; esp -= 4; W32(esp, v); }
/* 1090ac1c: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 1090ac1f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090ac20: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 1090ac23: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090ac28u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
  SPILL(); f_1090ac28(); return;
}

void f_1090ac28(void) {
  LOAD_REGS();
L_1090ac28: /* 1090ac28: push 0x10920ff0 */
  { uint32_t v = 0x10920ff0u; esp -= 4; W32(esp, v); }
/* 1090ac2d: push 0x1092de68 */
  { uint32_t v = 0x1092de68u; esp -= 4; W32(esp, v); }
/* 1090ac32: call dword ptr [0x10959d5c] */
  esp -= 4; W32(esp, 0x1090ac38u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 1090ac38: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090ac3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090ac3d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090ac3f: call 0x10918770 */
  esp -= 4; W32(esp, 0x1090ac44u); SPILL(); f_10918770(); if (g_unwind) return; RELOAD();
L_1090ac44: guest_badaddr(0x1090ac44); return;
}

void f_1090aee0(void) {
  LOAD_REGS();
L_1090aee0: /* 1090aee0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090aee2: je 0x1090aee9 */
  if (zf) goto L_1090aee9;
L_1090aee4: /* 1090aee4: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1090aee7: jmp 0x1090aeeb */
  goto L_1090aeeb;
L_1090aee9: /* 1090aee9: xor ecx, ecx */
  ecx = 0;
L_1090aeeb: /* 1090aeeb: jmp dword ptr [0x10959d78] */
  SPILL(); f_4e1217(); return; /* Core!??1FString@@QAE@XZ */
}

void f_1090af10(void) {
  LOAD_REGS();
L_1090af10: /* 1090af10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 1090af14: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090af15: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1090af18: call dword ptr [0x10959b3c] */
  esp -= 4; W32(esp, 0x1090af1eu); SPILL(); f_4e180c(); if (g_unwind) return; /* Core!??YFString@@QAEAAV0@PBG@Z */ RELOAD();
/* 1090af1e: ret 8 */
  esp += 12; SPILL(); return;
}

void f_1090af40(void) {
  LOAD_REGS();
L_1090af40: /* 1090af40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090af41: mov esi, ecx */
  esi = ecx;
/* 1090af43: call dword ptr [0x1095a3b4] */
  esp -= 4; W32(esp, 0x1090af49u); SPILL(); f_d81dca(); if (g_unwind) return; /* Window!??1WObjectProperties@@UAE@XZ */ RELOAD();
/* 1090af49: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090af4e: je 0x1090af5d */
  if (zf) goto L_1090af5d;
L_1090af50: /* 1090af50: mov eax, dword ptr [0x10959b34] */
  eax = R32((uint32_t)(0x10959b34u));
/* 1090af55: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090af57: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090af59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090af5a: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x1090af5du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_1090af5d: /* 1090af5d: mov eax, esi */
  eax = esi;
/* 1090af5f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090af60: ret 4 */
  esp += 8; SPILL(); return;
}

void f_1090af80(void) {
  LOAD_REGS();
L_1090af80: /* 1090af80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090af81: mov esi, ecx */
  esi = ecx;
/* 1090af83: call dword ptr [0x1095a3b8] */
  esp -= 4; W32(esp, 0x1090af89u); SPILL(); f_d81023(); if (g_unwind) return; /* Window!??1WConfigProperties@@UAE@XZ */ RELOAD();
/* 1090af89: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090af8e: je 0x1090af9d */
  if (zf) goto L_1090af9d;
L_1090af90: /* 1090af90: mov eax, dword ptr [0x10959b34] */
  eax = R32((uint32_t)(0x10959b34u));
/* 1090af95: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090af97: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090af99: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090af9a: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x1090af9du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_1090af9d: /* 1090af9d: mov eax, esi */
  eax = esi;
/* 1090af9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090afa0: ret 4 */
  esp += 8; SPILL(); return;
}

void f_1090afc0(void) {
  LOAD_REGS();
L_1090afc0: /* 1090afc0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 1090afc4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 1090afc8: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 1090afca: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* 1090afcc: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090afcf: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 1090afd2: fsub dword ptr [ecx + 4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4u)));
/* 1090afd5: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 1090afd8: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* 1090afdb: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 1090afdd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 1090afdf: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 1090afe1: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 1090afe3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1090afe5: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 1090afe7: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 1090afe9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1090afeb: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1090afee: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 1090aff0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 1090aff2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 1090aff4: call dword ptr [0x10959c08] */
  esp -= 4; W32(esp, 0x1090affau); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 1090affa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090affd: ret  */
  esp += 4; SPILL(); return;
}

void f_1090b010(void) {
  LOAD_REGS();
L_1090b010: /* 1090b010: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 1090b011: mov ebp, esp */
  ebp = esp;
/* 1090b013: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 1090b015: push 0x1091bbdb */
  { uint32_t v = 0x1091bbdbu; esp -= 4; W32(esp, v); }
/* 1090b01a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 1090b020: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b021: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 1090b028: sub esp, 0x3bc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3bcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090b02e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090b02f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090b030: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1090b031: xor ebx, ebx */
  ebx = 0;
/* 1090b033: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090b036: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 1090b039: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 1090b03b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 1090b03e: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 1090b041: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 1090b044: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1090b047: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1090b049: jge 0x1090b051 */
  if ((sf == of)) goto L_1090b051;
L_1090b04b: /* 1090b04b: fadd qword ptr [0x109201b8] */
  ST0 = ST0 + (F64((uint32_t)(0x109201b8u)));
L_1090b051: /* 1090b051: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090b054: fmul qword ptr [0x109201b8] */
  ST0 = ST0 * (F64((uint32_t)(0x109201b8u)));
/* 1090b05a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1090b05c: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 1090b05f: jge 0x1090b067 */
  if ((sf == of)) goto L_1090b067;
L_1090b061: /* 1090b061: fadd qword ptr [0x109201b8] */
  ST0 = ST0 + (F64((uint32_t)(0x109201b8u)));
L_1090b067: /* 1090b067: mov edx, dword ptr [0x10959d84] */
  edx = R32((uint32_t)(0x10959d84u));
/* 1090b06d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1090b06f: test byte ptr [0x10958eb8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(0x10958eb8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1090b076: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 1090b078: fadd qword ptr [0x109201a8] */
  ST0 = ST0 + (F64((uint32_t)(0x109201a8u)));
/* 1090b07e: fstp qword ptr [ebp - 0x68] */
  WF64((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 1090b081: jne 0x1090b0c0 */
  if (!zf) goto L_1090b0c0;
L_1090b083: /* 1090b083: mov eax, dword ptr [0x10958eb8] */
  eax = R32((uint32_t)(0x10958eb8u));
/* 1090b088: or eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 1090b08b: mov ecx, 0x10958ea8 */
  ecx = 0x10958ea8u;
/* 1090b090: mov dword ptr [0x10958eb8], eax */
  W32((uint32_t)(0x10958eb8u), eax);
/* 1090b095: call dword ptr [0x10959b20] */
  esp -= 4; W32(esp, 0x1090b09bu); SPILL(); f_4e2aef(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!??0FExec@@QAE@XZ */ RELOAD();
/* 1090b09b: mov ecx, 0x10958eac */
  ecx = 0x10958eacu;
/* 1090b0a0: call dword ptr [0x10959b24] */
  esp -= 4; W32(esp, 0x1090b0a6u); SPILL(); f_4e1280(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!??0FNotifyHook@@QAE@XZ */ RELOAD();
/* 1090b0a6: mov dword ptr [0x10958ea8], 0x10920370 */
  W32((uint32_t)(0x10958ea8u), 0x10920370u);
/* 1090b0b0: mov dword ptr [0x10958eac], 0x10920374 */
  W32((uint32_t)(0x10958eacu), 0x10920374u);
/* 1090b0ba: mov dword ptr [0x10958eb0], ebx */
  W32((uint32_t)(0x10958eb0u), ebx);
L_1090b0c0: /* 1090b0c0: mov eax, dword ptr [0x10959bf0] */
  eax = R32((uint32_t)(0x10959bf0u));
/* 1090b0c5: mov dword ptr [eax], 0x10958ea8 */
  W32((uint32_t)(eax), 0x10958ea8u);
/* 1090b0cb: mov ecx, dword ptr [0x10959d60] */
  ecx = R32((uint32_t)(0x10959d60u));
/* 1090b0d1: cmp dword ptr [ecx], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090b0d3: je 0x1090b0e4 */
  if (zf) goto L_1090b0e4;
L_1090b0d5: /* 1090b0d5: push 0x109295d8 */
  { uint32_t v = 0x109295d8u; esp -= 4; W32(esp, v); }
/* 1090b0da: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090b0db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090b0dc: call dword ptr [0x10959fa4] */
  esp -= 4; W32(esp, 0x1090b0e2u); SPILL(); call_ind(R32(0x10959fa4u)); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* KERNEL32!CreateMutexW */ RELOAD();
/* 1090b0e2: jmp 0x1090b13f */
  goto L_1090b13f;
L_1090b0e4: /* 1090b0e4: mov edi, dword ptr [0x10959d90] */
  edi = R32((uint32_t)(0x10959d90u));
/* 1090b0ea: push 0x10929638 */
  { uint32_t v = 0x10929638u; esp -= 4; W32(esp, v); }
/* 1090b0ef: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1090b0f1u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD(); }
/* 1090b0f1: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090b0f4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090b0f6: jne 0x1090b0fc */
  if (!zf) goto L_1090b0fc;
L_1090b0f8: /* 1090b0f8: xor esi, esi */
  esi = 0;
/* 1090b0fa: jmp 0x1090b11c */
  goto L_1090b11c;
L_1090b0fc: /* 1090b0fc: push 0x10929658 */
  { uint32_t v = 0x10929658u; esp -= 4; W32(esp, v); }
/* 1090b101: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1090b103u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD(); }
/* 1090b103: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1090b106: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1090b109: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1090b10c: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090b10f: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 1090b112: call 0x10918780 */
  esp -= 4; W32(esp, 0x1090b117u); SPILL(); f_10918780(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD();
/* 1090b117: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 1090b11a: mov esi, esp */
  esi = esp;
L_1090b11c: /* 1090b11c: push 0x109295f8 */
  { uint32_t v = 0x109295f8u; esp -= 4; W32(esp, v); }
/* 1090b121: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1090b123u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD(); }
/* 1090b123: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090b126: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b127: push 0x10929618 */
  { uint32_t v = 0x10929618u; esp -= 4; W32(esp, v); }
/* 1090b12c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090b12d: call dword ptr [0x10959d8c] */
  esp -= 4; W32(esp, 0x1090b133u); SPILL(); f_4e267b(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!?winToANSI@@YAPADPADPBGH@Z */ RELOAD();
/* 1090b133: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090b136: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b137: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090b138: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090b139: call dword ptr [0x10959fa8] */
  esp -= 4; W32(esp, 0x1090b13fu); SPILL(); call_ind(R32(0x10959fa8u)); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* KERNEL32!CreateMutexA */ RELOAD();
L_1090b13f: /* 1090b13f: call dword ptr [0x10959f38] */
  esp -= 4; W32(esp, 0x1090b145u); SPILL(); call_ind(R32(0x10959f38u)); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* KERNEL32!GetLastError */ RELOAD();
/* 1090b145: mov edx, dword ptr [0x10959d04] */
  edx = R32((uint32_t)(0x10959d04u));
/* 1090b14b: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 1090b14e: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 1090b150: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 1090b152: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090b153: lea edx, [ebp - 0x18] */
  edx = (uint32_t)(ebp + 0xffffffe8u);
/* 1090b156: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090b157: push 0x10929678 */
  { uint32_t v = 0x10929678u; esp -= 4; W32(esp, v); }
/* 1090b15c: push 0x1092968c */
  { uint32_t v = 0x1092968cu; esp -= 4; W32(esp, v); }
/* 1090b161: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x1090b164u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD(); }
/* 1090b164: mov edi, dword ptr [0x10959d40] */
  edi = R32((uint32_t)(0x10959d40u));
/* 1090b16a: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1090b16cu); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD(); }
/* 1090b16c: push 0x109296a0 */
  { uint32_t v = 0x109296a0u; esp -= 4; W32(esp, v); }
/* 1090b171: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b172: call dword ptr [0x10959cb4] */
  esp -= 4; W32(esp, 0x1090b178u); SPILL(); f_4e3387(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!?ParseParam@@YAHPBG0@Z */ RELOAD();
/* 1090b178: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090b17b: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090b17d: je 0x1090b184 */
  if (zf) goto L_1090b184;
L_1090b17f: /* 1090b17f: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 1090b182: jmp 0x1090b191 */
  goto L_1090b191;
L_1090b184: /* 1090b184: cmp dword ptr [ebp - 0x18], 0xdc */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xdcu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090b18b: jge 0x1090b2ae */
  if ((sf == of)) goto L_1090b2ae;
L_1090b191: /* 1090b191: mov eax, dword ptr [0x10959d98] */
  eax = R32((uint32_t)(0x10959d98u));
/* 1090b196: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090b198: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090b19a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 1090b19b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090b19d: push 0x109296b4 */
  { uint32_t v = 0x109296b4u; esp -= 4; W32(esp, v); }
/* 1090b1a2: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 1090b1a5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b1a6: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x1090b1a9u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD(); }
/* 1090b1a9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 1090b1ad: lea ebx, [ebp - 0x48] */
  ebx = (uint32_t)(ebp + 0xffffffb8u);
/* 1090b1b0: xor edi, edi */
  edi = 0;
L_1090b1b2: /* 1090b1b2: cmp edi, dword ptr [ebx + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090b1b5: jge 0x1090b289 */
  if ((sf == of)) goto L_1090b289;
L_1090b1bb: /* 1090b1bb: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 1090b1bd: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 1090b1c0: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 1090b1c3: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090b1c9u); SPILL(); f_4e1037(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090b1c9: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1090b1cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b1cd: call dword ptr [0x10959bf4] */
  esp -= 4; W32(esp, 0x1090b1d3u); SPILL(); f_4e3fe9(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!?appAtoi@@YAHPBG@Z */ RELOAD();
/* 1090b1d3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090b1d6: push 0x109296d0 */
  { uint32_t v = 0x109296d0u; esp -= 4; W32(esp, v); }
/* 1090b1db: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 1090b1de: mov esi, eax */
  esi = eax;
/* 1090b1e0: call dword ptr [0x10959da0] */
  esp -= 4; W32(esp, 0x1090b1e6u); SPILL(); f_4e13de(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 1090b1e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090b1e7: lea eax, [ebp - 0x60] */
  eax = (uint32_t)(ebp + 0xffffffa0u);
/* 1090b1ea: push 0x10929708 */
  { uint32_t v = 0x10929708u; esp -= 4; W32(esp, v); }
/* 1090b1ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b1f0: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 1090b1f4: call dword ptr [0x10959bf8] */
  esp -= 4; W32(esp, 0x1090b1fau); SPILL(); f_4e17e4(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 1090b1fa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090b1fd: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 1090b200: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 1090b204: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090b20au); SPILL(); f_4e1037(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090b20a: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 1090b20d: mov esi, eax */
  esi = eax;
/* 1090b20f: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090b215u); SPILL(); f_4e1037(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090b215: mov ecx, dword ptr [0x10959d04] */
  ecx = R32((uint32_t)(0x10959d04u));
/* 1090b21b: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1090b21d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090b21f: push 0x10929724 */
  { uint32_t v = 0x10929724u; esp -= 4; W32(esp, v); }
/* 1090b224: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090b225: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b226: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x1090b229u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD(); }
/* 1090b229: push 0x1093153c */
  { uint32_t v = 0x1093153cu; esp -= 4; W32(esp, v); }
/* 1090b22e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b22f: call dword ptr [0x10959d68] */
  esp -= 4; W32(esp, 0x1090b235u); SPILL(); f_4e26df(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!?appStricmp@@YAHPBG0@Z */ RELOAD();
/* 1090b235: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090b238: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090b23a: jne 0x1090b269 */
  if (!zf) goto L_1090b269;
L_1090b23c: /* 1090b23c: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 1090b23f: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090b245u); SPILL(); f_4e1037(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090b245: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 1090b248: mov esi, eax */
  esi = eax;
/* 1090b24a: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090b250u); SPILL(); f_4e1037(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090b250: mov ecx, dword ptr [0x10959d04] */
  ecx = R32((uint32_t)(0x10959d04u));
/* 1090b256: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1090b258: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090b25a: push 0x10929730 */
  { uint32_t v = 0x10929730u; esp -= 4; W32(esp, v); }
/* 1090b25f: push 0x1092973c */
  { uint32_t v = 0x1092973cu; esp -= 4; W32(esp, v); }
/* 1090b264: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090b265: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b266: call dword ptr [edx + 0x30] */
  { uint32_t t = R32((uint32_t)(edx + 0x30u)); esp -= 4; W32(esp, 0x1090b269u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD(); }
L_1090b269: /* 1090b269: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 1090b26c: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 1090b270: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090b276u); SPILL(); f_4e1217(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090b276: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 1090b279: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 1090b27d: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090b283u); SPILL(); f_4e1217(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090b283: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 1090b284: jmp 0x1090b1b2 */
  goto L_1090b1b2;
L_1090b289: /* 1090b289: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 1090b28c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b28d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b28f: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 1090b292: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 1090b296: call 0x10901320 */
  esp -= 4; W32(esp, 0x1090b29bu); SPILL(); f_10901320(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD();
/* 1090b29b: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 1090b29e: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090b2a2: call dword ptr [0x10959c44] */
  esp -= 4; W32(esp, 0x1090b2a8u); SPILL(); f_4e35b7(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!??1FArray@@QAE@XZ */ RELOAD();
/* 1090b2a8: mov edi, dword ptr [0x10959d40] */
  edi = R32((uint32_t)(0x10959d40u));
L_1090b2ae: /* 1090b2ae: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 1090b2b1: call dword ptr [0x10959d7c] */
  esp -= 4; W32(esp, 0x1090b2b7u); SPILL(); f_4e2d01(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 1090b2b7: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 1090b2bb: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1090b2bdu); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD(); }
/* 1090b2bd: mov esi, dword ptr [0x10959bfc] */
  esi = R32((uint32_t)(0x10959bfcu));
/* 1090b2c3: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 1090b2c6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090b2c7: push 0x10929754 */
  { uint32_t v = 0x10929754u; esp -= 4; W32(esp, v); }
/* 1090b2cc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b2cd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090b2cfu); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD(); }
/* 1090b2cf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090b2d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090b2d4: je 0x1090b31b */
  if (zf) goto L_1090b31b;
L_1090b2d6: /* 1090b2d6: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 1090b2d9: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090b2dfu); SPILL(); f_4e1037(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090b2df: mov edx, dword ptr [0x10959d0c] */
  edx = R32((uint32_t)(0x10959d0cu));
/* 1090b2e5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b2e6: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 1090b2e8: push 0x10929774 */
  { uint32_t v = 0x10929774u; esp -= 4; W32(esp, v); }
/* 1090b2ed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b2ee: call dword ptr [0x10959cbc] */
  esp -= 4; W32(esp, 0x1090b2f4u); SPILL(); f_4e2d4c(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 1090b2f4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090b2f7: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 1090b2fa: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090b300u); SPILL(); f_4e1037(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090b300: mov esi, dword ptr [0x10959d0c] */
  esi = R32((uint32_t)(0x10959d0cu));
/* 1090b306: mov ecx, dword ptr [0x10959bf0] */
  ecx = R32((uint32_t)(0x10959bf0u));
/* 1090b30c: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 1090b30e: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1090b310: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090b312: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090b313: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b314: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x1090b316u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD(); }
/* 1090b316: jmp 0x1090b488 */
  goto L_1090b488;
L_1090b31b: /* 1090b31b: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 1090b31e: call dword ptr [0x10959d7c] */
  esp -= 4; W32(esp, 0x1090b324u); SPILL(); f_4e2d01(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 1090b324: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 1090b328: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1090b32au); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD(); }
/* 1090b32a: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 1090b32d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090b32e: push 0x109297b0 */
  { uint32_t v = 0x109297b0u; esp -= 4; W32(esp, v); }
/* 1090b333: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b334: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x1090b336u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD(); }
/* 1090b336: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090b339: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090b33b: je 0x1090b4bf */
  if (zf) goto L_1090b4bf;
L_1090b341: /* 1090b341: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 1090b344: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090b34au); SPILL(); f_4e1037(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090b34a: mov edx, dword ptr [0x10959d0c] */
  edx = R32((uint32_t)(0x10959d0cu));
/* 1090b350: mov edi, dword ptr [0x10959cbc] */
  edi = R32((uint32_t)(0x10959cbcu));
/* 1090b356: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b357: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 1090b359: push 0x109297c8 */
  { uint32_t v = 0x109297c8u; esp -= 4; W32(esp, v); }
/* 1090b35e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b35f: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1090b361u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD(); }
/* 1090b361: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090b364: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 1090b367: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 1090b36b: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090b371u); SPILL(); f_4e1037(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090b371: mov esi, eax */
  esi = eax;
/* 1090b373: call dword ptr [0x10959ea8] */
  esp -= 4; W32(esp, 0x1090b379u); SPILL(); f_6cbb86(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Engine!?StaticClass@URenderDevice@@SAPAVUClass@@XZ */ RELOAD();
/* 1090b379: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b37b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b37d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b37f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090b380: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b382: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b383: call dword ptr [0x10959cd0] */
  esp -= 4; W32(esp, 0x1090b389u); SPILL(); f_4e157d(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!?StaticLoadClass@UObject@@SAPAVUClass@@PAV2@PAV1@PBG2KPAVUPackageMap@@@Z */ RELOAD();
/* 1090b389: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090b38c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 1090b38f: mov esi, eax */
  esi = eax;
/* 1090b391: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090b397u); SPILL(); f_4e1037(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090b397: mov ecx, dword ptr [0x10959d04] */
  ecx = R32((uint32_t)(0x10959d04u));
/* 1090b39d: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1090b39f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090b3a1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b3a3: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 1090b3a5: push 0x109297e4 */
  { uint32_t v = 0x109297e4u; esp -= 4; W32(esp, v); }
/* 1090b3aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b3ab: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x1090b3aeu); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD(); }
/* 1090b3ae: mov eax, dword ptr [0x10959d04] */
  eax = R32((uint32_t)(0x10959d04u));
/* 1090b3b3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090b3b5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090b3b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b3b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b3bb: call dword ptr [edx + 0x34] */
  { uint32_t t = R32((uint32_t)(edx + 0x34u)); esp -= 4; W32(esp, 0x1090b3beu); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD(); }
/* 1090b3be: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090b3c0: je 0x1090b44d */
  if (zf) goto L_1090b44d;
L_1090b3c6: /* 1090b3c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b3c8: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 1090b3cb: call dword ptr [0x10959c00] */
  esp -= 4; W32(esp, 0x1090b3d1u); SPILL(); f_4e2ee1(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 1090b3d1: call dword ptr [0x10959ea8] */
  esp -= 4; W32(esp, 0x1090b3d7u); SPILL(); f_6cbb86(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Engine!?StaticClass@URenderDevice@@SAPAVUClass@@XZ */ RELOAD();
/* 1090b3d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b3d8: mov ecx, esi */
  ecx = esi;
/* 1090b3da: call dword ptr [0x10959b00] */
  esp -= 4; W32(esp, 0x1090b3e0u); SPILL(); f_4e20e5(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 1090b3e0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090b3e2: jne 0x1090b3fc */
  if (!zf) goto L_1090b3fc;
L_1090b3e4: /* 1090b3e4: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 1090b3e9: push 0x1092d138 */
  { uint32_t v = 0x1092d138u; esp -= 4; W32(esp, v); }
/* 1090b3ee: push 0x1092d17c */
  { uint32_t v = 0x1092d17cu; esp -= 4; W32(esp, v); }
/* 1090b3f3: call dword ptr [0x10959d64] */
  esp -= 4; W32(esp, 0x1090b3f9u); SPILL(); f_4e33a5(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 1090b3f9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090b3fc: /* 1090b3fc: call dword ptr [0x10959cc4] */
  esp -= 4; W32(esp, 0x1090b402u); SPILL(); f_4e280b(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 1090b402: mov ecx, dword ptr [0x10959cc8] */
  ecx = R32((uint32_t)(0x10959cc8u));
/* 1090b408: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090b40a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090b40d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b40f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090b410: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b412: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b414: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090b415: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b416: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090b417: call dword ptr [0x10959ccc] */
  esp -= 4; W32(esp, 0x1090b41du); SPILL(); f_4e335a(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 1090b41d: mov esi, eax */
  esi = eax;
/* 1090b41f: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090b422: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090b424: je 0x1090b44d */
  if (zf) goto L_1090b44d;
L_1090b426: /* 1090b426: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 1090b428: mov ecx, esi */
  ecx = esi;
/* 1090b42a: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x1090b42du); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD(); }
/* 1090b42d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090b42f: je 0x1090b4ae */
  if (zf) goto L_1090b4ae;
L_1090b431: /* 1090b431: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 1090b434: call dword ptr [0x10959d80] */
  esp -= 4; W32(esp, 0x1090b43au); SPILL(); f_4e1037(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 1090b43a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b43b: mov eax, dword ptr [0x10959d0c] */
  eax = R32((uint32_t)(0x10959d0cu));
/* 1090b440: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090b442: push 0x109297f8 */
  { uint32_t v = 0x109297f8u; esp -= 4; W32(esp, v); }
/* 1090b447: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090b448: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1090b44au); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD(); }
/* 1090b44a: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090b44d: /* 1090b44d: mov eax, dword ptr [0x10959d98] */
  eax = R32((uint32_t)(0x10959d98u));
/* 1090b452: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090b454: mov eax, dword ptr [0x10959d4c] */
  eax = R32((uint32_t)(0x10959d4cu));
/* 1090b459: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090b45b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090b45d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b45e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b460: push 0x1092982c */
  { uint32_t v = 0x1092982cu; esp -= 4; W32(esp, v); }
/* 1090b465: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 1090b46c: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x1090b46fu); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD(); }
/* 1090b46f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090b471: je 0x1090b47b */
  if (zf) goto L_1090b47b;
L_1090b473: /* 1090b473: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090b475: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090b477: mov ecx, eax */
  ecx = eax;
/* 1090b479: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x1090b47bu); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD(); }
L_1090b47b: /* 1090b47b: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 1090b47e: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 1090b482: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090b488u); SPILL(); f_4e1217(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!??1FString@@QAE@XZ */ RELOAD();
L_1090b488: /* 1090b488: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 1090b48b: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090b48f: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090b495u); SPILL(); f_4e1217(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090b495: xor eax, eax */
  eax = 0;
L_1090b497: /* 1090b497: lea esp, [ebp - 0x3d4] */
  esp = (uint32_t)(ebp + 0xfffffc2cu);
/* 1090b49d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1090b4a0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 1090b4a7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 1090b4a8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 1090b4a9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 1090b4aa: mov esp, ebp */
  esp = ebp;
/* 1090b4ac: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 1090b4ad: ret  */
  esp += 4; SPILL(); return;
L_1090b4ae: /* 1090b4ae: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 1090b4b0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090b4b2: mov ecx, esi */
  ecx = esi;
/* 1090b4b4: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x1090b4b7u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD(); }
/* 1090b4b7: jmp 0x1090b44d */
  goto L_1090b44d;
L_1090b4bf: /* 1090b4bf: mov eax, dword ptr [0x10959cfc] */
  eax = R32((uint32_t)(0x10959cfcu));
/* 1090b4c4: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090b4c7: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 1090b4cb: jne 0x1090b5d0 */
  if (!zf) goto L_1090b5d0;
L_1090b4d1: /* 1090b4d1: mov ecx, dword ptr [0x10959cf8] */
  ecx = R32((uint32_t)(0x10959cf8u));
/* 1090b4d7: cmp dword ptr [ecx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090b4da: je 0x1090b5d0 */
  if (zf) goto L_1090b5d0;
L_1090b4e0: /* 1090b4e0: lea ecx, [ebp - 0x3c8] */
  ecx = (uint32_t)(ebp + 0xfffffc38u);
/* 1090b4e6: call 0x10901177 */
  esp -= 4; W32(esp, 0x1090b4ebu); SPILL(); f_10901177(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD();
/* 1090b4eb: mov bl, 0xa */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xau) & 0xffu);
/* 1090b4ed: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 1090b4f0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1090b4f2u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD(); }
/* 1090b4f2: push 0x10929848 */
  { uint32_t v = 0x10929848u; esp -= 4; W32(esp, v); }
/* 1090b4f7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b4f8: call dword ptr [0x10959cb4] */
  esp -= 4; W32(esp, 0x1090b4feu); SPILL(); f_4e3387(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!?ParseParam@@YAHPBG0@Z */ RELOAD();
/* 1090b4fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090b501: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090b503: jne 0x1090b51e */
  if (!zf) goto L_1090b51e;
L_1090b505: /* 1090b505: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x1090b507u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD(); }
/* 1090b507: push 0x10929854 */
  { uint32_t v = 0x10929854u; esp -= 4; W32(esp, v); }
/* 1090b50c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b50d: call dword ptr [0x10959c04] */
  esp -= 4; W32(esp, 0x1090b513u); SPILL(); f_4e2b76(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!?appStrfind@@YAPBGPBG0@Z */ RELOAD();
/* 1090b513: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090b516: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090b518: je 0x1090b5c1 */
  if (zf) goto L_1090b5c1;
L_1090b51e: /* 1090b51e: mov edx, dword ptr [0x10959b34] */
  edx = R32((uint32_t)(0x10959b34u));
/* 1090b524: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 1090b526: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 1090b528: push 0x1092dfb8 */
  { uint32_t v = 0x1092dfb8u; esp -= 4; W32(esp, v); }
/* 1090b52d: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 1090b532: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x1090b534u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD(); }
/* 1090b534: mov ecx, eax */
  ecx = eax;
/* 1090b536: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 1090b539: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090b53b: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 1090b53f: je 0x1090b551 */
  if (zf) goto L_1090b551;
L_1090b541: /* 1090b541: lea edx, [ebp - 0x3c8] */
  edx = (uint32_t)(ebp + 0xfffffc38u);
/* 1090b547: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090b548: call 0x109011f4 */
  esp -= 4; W32(esp, 0x1090b54du); SPILL(); f_109011f4(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD();
/* 1090b54d: mov esi, eax */
  esi = eax;
/* 1090b54f: jmp 0x1090b553 */
  goto L_1090b553;
L_1090b551: /* 1090b551: xor esi, esi */
  esi = 0;
L_1090b553: /* 1090b553: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b555: push 0x10929864 */
  { uint32_t v = 0x10929864u; esp -= 4; W32(esp, v); }
/* 1090b55a: push 0x10929874 */
  { uint32_t v = 0x10929874u; esp -= 4; W32(esp, v); }
/* 1090b55f: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 1090b562: call dword ptr [0x10959d88] */
  esp -= 4; W32(esp, 0x1090b568u); SPILL(); f_4e1064(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!?LocalizeGeneral@@YAPBGPBG00@Z */ RELOAD();
/* 1090b568: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090b56b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b56c: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 1090b56f: call dword ptr [0x10959cb0] */
  esp -= 4; W32(esp, 0x1090b575u); SPILL(); f_4e3e5e(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 1090b575: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090b577: je 0x1090b5c1 */
  if (zf) goto L_1090b5c1;
L_1090b579: /* 1090b579: call 0x10901244 */
  esp -= 4; W32(esp, 0x1090b57eu); SPILL(); f_10901244(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD();
/* 1090b57e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090b57f: lea ecx, [ebp - 0x3c8] */
  ecx = (uint32_t)(ebp + 0xfffffc38u);
/* 1090b585: call dword ptr [0x1095a230] */
  esp -= 4; W32(esp, 0x1090b58bu); SPILL(); f_d817b2(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Window!?Advance@WWizardDialog@@UAEXPAVWWizardPage@@@Z */ RELOAD();
/* 1090b58b: mov eax, dword ptr [0x1095a298] */
  eax = R32((uint32_t)(0x1095a298u));
/* 1090b590: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090b592: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090b593: lea ecx, [ebp - 0x3c8] */
  ecx = (uint32_t)(ebp + 0xfffffc38u);
/* 1090b599: call dword ptr [0x1095a228] */
  esp -= 4; W32(esp, 0x1090b59fu); SPILL(); f_d823b0(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Window!?DoModal@WDialog@@UAEHPAUHINSTANCE__@@@Z */ RELOAD();
/* 1090b59f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090b5a1: jne 0x1090b5b7 */
  if (!zf) goto L_1090b5b7;
L_1090b5a3: /* 1090b5a3: lea ecx, [ebp - 0x3c8] */
  ecx = (uint32_t)(ebp + 0xfffffc38u);
/* 1090b5a9: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 1090b5ad: call 0x109012bc */
  esp -= 4; W32(esp, 0x1090b5b2u); SPILL(); f_109012bc(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD();
/* 1090b5b2: jmp 0x1090b47b */
  goto L_1090b47b;
L_1090b5b7: /* 1090b5b7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b5b9: call 0x10901221 */
  esp -= 4; W32(esp, 0x1090b5beu); SPILL(); f_10901221(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD();
/* 1090b5be: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090b5c1: /* 1090b5c1: lea ecx, [ebp - 0x3c8] */
  ecx = (uint32_t)(ebp + 0xfffffc38u);
/* 1090b5c7: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 1090b5cb: call 0x109012bc */
  esp -= 4; W32(esp, 0x1090b5d0u); SPILL(); f_109012bc(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD();
L_1090b5d0: /* 1090b5d0: mov eax, dword ptr [0x10959d4c] */
  eax = R32((uint32_t)(0x10959d4cu));
/* 1090b5d5: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 1090b5d7: mov ecx, dword ptr [0x10959d98] */
  ecx = R32((uint32_t)(0x10959d98u));
/* 1090b5dd: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1090b5df: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090b5e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b5e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b5e4: push 0x10929890 */
  { uint32_t v = 0x10929890u; esp -= 4; W32(esp, v); }
/* 1090b5e9: mov dword ptr [ebp - 4], 6 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 1090b5f0: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x1090b5f3u); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD(); }
/* 1090b5f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090b5f5: je 0x1090b5ff */
  if (zf) goto L_1090b5ff;
L_1090b5f7: /* 1090b5f7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 1090b5f9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090b5fb: mov ecx, eax */
  ecx = eax;
/* 1090b5fd: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x1090b5ffu); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD(); }
L_1090b5ff: /* 1090b5ff: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 1090b602: cmp eax, 0x8b2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8b2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1090b607: jge 0x1090b611 */
  if ((sf == of)) goto L_1090b611;
L_1090b609: /* 1090b609: mov eax, 0x8b2 */
  eax = 0x8b2u;
/* 1090b60e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_1090b611: /* 1090b611: mov ecx, dword ptr [0x10959d04] */
  ecx = R32((uint32_t)(0x10959d04u));
/* 1090b617: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 1090b619: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090b61b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b61d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b61e: push 0x109298a8 */
  { uint32_t v = 0x109298a8u; esp -= 4; W32(esp, v); }
/* 1090b623: push 0x109298bc */
  { uint32_t v = 0x109298bcu; esp -= 4; W32(esp, v); }
/* 1090b628: call dword ptr [edx + 0x28] */
  { uint32_t t = R32((uint32_t)(edx + 0x28u)); esp -= 4; W32(esp, 0x1090b62bu); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD(); }
/* 1090b62b: mov eax, dword ptr [0x10959cfc] */
  eax = R32((uint32_t)(0x10959cfcu));
/* 1090b630: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 1090b633: jne 0x1090b678 */
  if (!zf) goto L_1090b678;
L_1090b635: /* 1090b635: call dword ptr [0x10959e94] */
  esp -= 4; W32(esp, 0x1090b63bu); SPILL(); f_6c2efa(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Engine!?StaticClass@UGameEngine@@SAPAVUClass@@XZ */ RELOAD();
/* 1090b63b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b63d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090b63f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b641: push 0x109298d0 */
  { uint32_t v = 0x109298d0u; esp -= 4; W32(esp, v); }
/* 1090b646: jmp 0x1090b689 */
  goto L_1090b689;
L_1090b678: /* 1090b678: call dword ptr [0x10959e98] */
  esp -= 4; W32(esp, 0x1090b67eu); SPILL(); f_6cb49c(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Engine!?StaticClass@UEngine@@SAPAVUClass@@XZ */ RELOAD();
/* 1090b67e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b680: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 1090b682: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b684: push 0x1092990c */
  { uint32_t v = 0x1092990cu; esp -= 4; W32(esp, v); }
L_1090b689: /* 1090b689: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b68b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b68c: call dword ptr [0x10959cd0] */
  esp -= 4; W32(esp, 0x1090b692u); SPILL(); f_4e157d(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!?StaticLoadClass@UObject@@SAPAVUClass@@PAV2@PAV1@PBG2KPAVUPackageMap@@@Z */ RELOAD();
/* 1090b692: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090b695: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b697: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 1090b69a: mov esi, eax */
  esi = eax;
/* 1090b69c: call dword ptr [0x10959c00] */
  esp -= 4; W32(esp, 0x1090b6a2u); SPILL(); f_4e2ee1(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 1090b6a2: call dword ptr [0x10959e98] */
  esp -= 4; W32(esp, 0x1090b6a8u); SPILL(); f_6cb49c(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Engine!?StaticClass@UEngine@@SAPAVUClass@@XZ */ RELOAD();
/* 1090b6a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b6a9: mov ecx, esi */
  ecx = esi;
/* 1090b6ab: call dword ptr [0x10959b00] */
  esp -= 4; W32(esp, 0x1090b6b1u); SPILL(); f_4e20e5(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 1090b6b1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 1090b6b3: jne 0x1090b6cd */
  if (!zf) goto L_1090b6cd;
L_1090b6b5: /* 1090b6b5: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 1090b6ba: push 0x1092d1a0 */
  { uint32_t v = 0x1092d1a0u; esp -= 4; W32(esp, v); }
/* 1090b6bf: push 0x1092d1e4 */
  { uint32_t v = 0x1092d1e4u; esp -= 4; W32(esp, v); }
/* 1090b6c4: call dword ptr [0x10959d64] */
  esp -= 4; W32(esp, 0x1090b6cau); SPILL(); f_4e33a5(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 1090b6ca: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_1090b6cd: /* 1090b6cd: call dword ptr [0x10959cc4] */
  esp -= 4; W32(esp, 0x1090b6d3u); SPILL(); f_4e280b(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 1090b6d3: mov ecx, dword ptr [0x10959cc8] */
  ecx = R32((uint32_t)(0x10959cc8u));
/* 1090b6d9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 1090b6db: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090b6de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b6e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1090b6e1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b6e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 1090b6e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090b6e6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 1090b6e7: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 1090b6e8: call dword ptr [0x10959ccc] */
  esp -= 4; W32(esp, 0x1090b6eeu); SPILL(); f_4e335a(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 1090b6ee: mov esi, eax */
  esi = eax;
/* 1090b6f0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 1090b6f2: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090b6f5: mov ecx, esi */
  ecx = esi;
/* 1090b6f7: call dword ptr [edx + 0x6c] */
  { uint32_t t = R32((uint32_t)(edx + 0x6cu)); esp -= 4; W32(esp, 0x1090b6fau); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } RELOAD(); }
/* 1090b6fa: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 1090b6fc: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 1090b6ff: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 1090b702: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 1090b705: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1090b708: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1090b70a: jge 0x1090b712 */
  if ((sf == of)) goto L_1090b712;
L_1090b70c: /* 1090b70c: fadd qword ptr [0x109201b8] */
  ST0 = ST0 + (F64((uint32_t)(0x109201b8u)));
L_1090b712: /* 1090b712: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1090b715: fmul qword ptr [0x109201b8] */
  ST0 = ST0 * (F64((uint32_t)(0x109201b8u)));
/* 1090b71b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 1090b71d: fild dword ptr [ebp - 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 1090b720: jge 0x1090b728 */
  if ((sf == of)) goto L_1090b728;
L_1090b722: /* 1090b722: fadd qword ptr [0x109201b8] */
  ST0 = ST0 + (F64((uint32_t)(0x109201b8u)));
L_1090b728: /* 1090b728: mov edx, dword ptr [0x10959d84] */
  edx = R32((uint32_t)(0x10959d84u));
/* 1090b72e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 1090b730: mov eax, dword ptr [0x10959d0c] */
  eax = R32((uint32_t)(0x10959d0cu));
/* 1090b735: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 1090b737: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 1090b739: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 1090b73c: fadd qword ptr [0x109201a8] */
  ST0 = ST0 + (F64((uint32_t)(0x109201a8u)));
/* 1090b742: fsub qword ptr [ebp - 0x68] */
  ST0 = ST0 - (F64((uint32_t)(ebp + 0xffffff98u)));
/* 1090b745: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 1090b748: push 0x1092994c */
  { uint32_t v = 0x1092994cu; esp -= 4; W32(esp, v); }
/* 1090b74d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1090b74e: call dword ptr [0x10959cbc] */
  esp -= 4; W32(esp, 0x1090b754u); SPILL(); f_4e2d4c(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 1090b754: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 1090b757: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 1090b75a: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 1090b75e: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090b764u); SPILL(); f_4e1217(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090b764: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 1090b767: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 1090b76b: call dword ptr [0x10959d78] */
  esp -= 4; W32(esp, 0x1090b771u); SPILL(); f_4e1217(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x1090b44du: guest_unwind_done(); RELOAD(); goto L_1090b44d; } return; } /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 1090b771: mov eax, esi */
  eax = esi;
/* 1090b773: jmp 0x1090b497 */
  goto L_1090b497;
}
