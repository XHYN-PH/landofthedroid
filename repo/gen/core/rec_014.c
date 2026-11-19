#include "recomp.h"
#include "rec_mod.h"

void f_5355ee(void) {
  LOAD_REGS();
L_5355ee: /* 5355ee: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5355f1: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5355f6: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5355f9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5355fa: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5355fd: call 0x554df6 */
  esp -= 4; W32(esp, 0x535602u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_535602(); return;
}

void f_535602(void) {
  LOAD_REGS();
L_535602: /* 535602: push 0x56d55c */
  { uint32_t v = 0x56d55cu; esp -= 4; W32(esp, v); }
/* 535607: push 0x5a98d8 */
  { uint32_t v = 0x5a98d8u; esp -= 4; W32(esp, v); }
/* 53560c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x535611u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 535611: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 535614: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 535616: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 535618: call 0x554df6 */
  esp -= 4; W32(esp, 0x53561du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53561d: guest_badaddr(0x53561d); return;
}

void f_535ff0(void) {
  LOAD_REGS();
L_535ff0: /* 535ff0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 535ff2: push 0x558828 */
  { uint32_t v = 0x558828u; esp -= 4; W32(esp, v); }
/* 535ff7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 535ffd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 535ffe: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 536005: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 536006: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 536007: mov esi, ecx */
  esi = ecx;
/* 536009: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53600a: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 53600e: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 536011: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 536013: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 53601b: jge 0x536034 */
  if ((sf == of)) goto L_536034;
L_53601d: /* 53601d: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 536022: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 536027: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 53602c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x536031u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 536031: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_536034: /* 536034: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 536037: jle 0x536050 */
  if ((zf || sf != of)) goto L_536050;
L_536039: /* 536039: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 53603e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 536043: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 536048: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53604du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53604d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_536050: /* 536050: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 536052: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 536053: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 536055: mov ecx, esi */
  ecx = esi;
/* 536057: call 0x4e438b */
  esp -= 4; W32(esp, 0x53605cu); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 53605c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 53605e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 536060: mov dword ptr [esp + 0x14], 0xffffffff */
  W32((uint32_t)(esp + 0x14u), 0xffffffffu);
/* 536068: je 0x536076 */
  if (zf) goto L_536076;
L_53606a: /* 53606a: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 536070: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 536072: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 536073: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x536076u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_536076: /* 536076: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 53607a: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 536080: mov dword ptr [esi + 8], 0 */
  W32((uint32_t)(esi + 0x8u), 0x0u);
/* 536087: mov dword ptr [esi + 4], 0 */
  W32((uint32_t)(esi + 0x4u), 0x0u);
/* 53608e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53608f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 536090: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 536097: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53609a: ret  */
  esp += 4; SPILL(); return;
}

void f_5360d0(void) {
  LOAD_REGS();
L_5360d0: /* 5360d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5360d4: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 5360db: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 5360de: mov dword ptr [esp + 4], 4 */
  W32((uint32_t)(esp + 0x4u), 0x4u);
/* 5360e6: jmp 0x4e4502 */
  SPILL(); f_4e4502(); return;
}

void f_536100(void) {
  LOAD_REGS();
L_536100: /* 536100: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 536101: mov esi, ecx */
  esi = ecx;
/* 536103: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 536106: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 536107: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 53610a: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 53610d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53610f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 536112: jle 0x536130 */
  if ((zf || sf != of)) goto L_536130;
L_536114: /* 536114: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 536117: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 536118: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 53611b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53611d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 536120: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 536124: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 536126: mov ecx, esi */
  ecx = esi;
/* 536128: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 53612b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x536130u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_536130: /* 536130: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 536134: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 536136: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 536138: mov dword ptr [ecx + edi*4], eax */
  W32((uint32_t)(ecx + edi*4), eax);
/* 53613b: mov eax, edi */
  eax = edi;
/* 53613d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53613e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53613f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_536170(void) {
  LOAD_REGS();
L_536170: /* 536170: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 536171: mov ebp, esp */
  ebp = esp;
/* 536173: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 536175: push 0x558840 */
  { uint32_t v = 0x558840u; esp -= 4; W32(esp, v); }
/* 53617a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 536180: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 536181: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 536188: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53618b: mov eax, dword ptr [0x69a748] */
  eax = R32((uint32_t)(0x69a748u));
/* 536190: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 536191: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 536192: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 536193: xor edi, edi */
  edi = 0;
/* 536195: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 536197: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53619a: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 53619d: jne 0x5361b6 */
  if (!zf) goto L_5361b6;
L_53619f: /* 53619f: push 0xbc */
  { uint32_t v = 0xbcu; esp -= 4; W32(esp, v); }
/* 5361a4: push 0x5a98e0 */
  { uint32_t v = 0x5a98e0u; esp -= 4; W32(esp, v); }
/* 5361a9: push 0x5a98ec */
  { uint32_t v = 0x5a98ecu; esp -= 4; W32(esp, v); }
/* 5361ae: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5361b3u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5361b3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5361b6: /* 5361b6: xor esi, esi */
  esi = 0;
L_5361b8: /* 5361b8: cmp esi, dword ptr [0x69a75c] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x69a75cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5361be: jge 0x5361db */
  if ((sf == of)) goto L_5361db;
L_5361c0: /* 5361c0: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 5361c5: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 5361c8: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5361ca: je 0x5361d8 */
  if (zf) goto L_5361d8;
L_5361cc: /* 5361cc: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5361d2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5361d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5361d5: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x5361d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5361d8: /* 5361d8: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5361d9: jmp 0x5361b8 */
  goto L_5361b8;
L_5361db: /* 5361db: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 5361dd: mov ecx, 0x69a758 */
  ecx = 0x69a758u;
/* 5361e2: mov dword ptr [0x69a75c], edi */
  W32((uint32_t)(0x69a75cu), edi);
/* 5361e8: mov dword ptr [0x69a760], edi */
  W32((uint32_t)(0x69a760u), edi);
/* 5361ee: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5361f3u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 5361f3: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 5361f5: mov ecx, 0x69a74c */
  ecx = 0x69a74cu;
/* 5361fa: mov dword ptr [0x69a750], edi */
  W32((uint32_t)(0x69a750u), edi);
/* 536200: mov dword ptr [0x69a754], edi */
  W32((uint32_t)(0x69a754u), edi);
/* 536206: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53620bu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53620b: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 536210: push 0x5a98f8 */
  { uint32_t v = 0x5a98f8u; esp -= 4; W32(esp, v); }
/* 536215: push 0x2fb */
  { uint32_t v = 0x2fbu; esp -= 4; W32(esp, v); }
/* 53621a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53621b: mov dword ptr [0x69a748], edi */
  W32((uint32_t)(0x69a748u), edi);
/* 536221: call 0x4e30df */
  esp -= 4; W32(esp, 0x536226u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 536226: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 536229: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53622c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53622d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53622e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 536235: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 536236: mov esp, ebp */
  esp = ebp;
/* 536238: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 536239: ret  */
  esp += 4; SPILL(); return;
}

void f_53623a(void) {
  LOAD_REGS();
L_53623a: /* 53623a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53623d: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 536242: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 536245: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 536246: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 536249: call 0x554df6 */
  esp -= 4; W32(esp, 0x53624eu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53624e(); return;
}

void f_53624e(void) {
  LOAD_REGS();
L_53624e: /* 53624e: push 0x56d588 */
  { uint32_t v = 0x56d588u; esp -= 4; W32(esp, v); }
/* 536253: push 0x5a992c */
  { uint32_t v = 0x5a992cu; esp -= 4; W32(esp, v); }
/* 536258: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53625du); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53625d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 536260: xor edi, edi */
  edi = 0;
/* 536262: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 536263: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 536264: call 0x554df6 */
  esp -= 4; W32(esp, 0x536269u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_536269: guest_badaddr(0x536269); return;
}

void f_5362b0(void) {
  LOAD_REGS();
L_5362b0: /* 5362b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5362b1: mov ebp, esp */
  ebp = esp;
/* 5362b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5362b5: push 0x558850 */
  { uint32_t v = 0x558850u; esp -= 4; W32(esp, v); }
/* 5362ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5362c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5362c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5362c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5362cb: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 5362d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5362d1: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 5362d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5362d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5362d6: mov edi, dword ptr [eax + ebx*4] */
  edi = R32((uint32_t)(eax + ebx*4));
/* 5362d9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5362db: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5362de: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5362e5: jne 0x5362fe */
  if (!zf) goto L_5362fe;
L_5362e7: /* 5362e7: push 0xe8 */
  { uint32_t v = 0xe8u; esp -= 4; W32(esp, v); }
/* 5362ec: push 0x5a9980 */
  { uint32_t v = 0x5a9980u; esp -= 4; W32(esp, v); }
/* 5362f1: push 0x5a998c */
  { uint32_t v = 0x5a998cu; esp -= 4; W32(esp, v); }
/* 5362f6: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5362fbu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5362fb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5362fe: /* 5362fe: test dword ptr [edi + 4], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x4u))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 536305: je 0x53631e */
  if (zf) goto L_53631e;
L_536307: /* 536307: push 0xe9 */
  { uint32_t v = 0xe9u; esp -= 4; W32(esp, v); }
/* 53630c: push 0x5a9998 */
  { uint32_t v = 0x5a9998u; esp -= 4; W32(esp, v); }
/* 536311: push 0x5a99a4 */
  { uint32_t v = 0x5a99a4u; esp -= 4; W32(esp, v); }
/* 536316: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53631bu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53631b: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53631e: /* 53631e: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* 536321: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 536322: call 0x4e1d2a */
  esp -= 4; W32(esp, 0x536327u); SPILL(); f_4e1d2a(); if (g_unwind) return; RELOAD();
/* 536327: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53632a: and eax, 0xfff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 53632f: lea esi, [eax*4 + 0x696748] */
  esi = (uint32_t)(eax*4 + 0x696748u);
L_536336: /* 536336: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 536338: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53633a: je 0x536345 */
  if (zf) goto L_536345;
L_53633c: /* 53633c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53633e: je 0x536345 */
  if (zf) goto L_536345;
L_536340: /* 536340: lea esi, [eax + 8] */
  esi = (uint32_t)(eax + 0x8u);
/* 536343: jmp 0x536336 */
  goto L_536336;
L_536345: /* 536345: cmp dword ptr [esi], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 536348: jne 0x536361 */
  if (!zf) goto L_536361;
L_53634a: /* 53634a: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 53634f: lea edx, [edi + 0xc] */
  edx = (uint32_t)(edi + 0xcu);
/* 536352: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 536353: push 0x5a99c4 */
  { uint32_t v = 0x5a99c4u; esp -= 4; W32(esp, v); }
/* 536358: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 536359: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53635eu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53635e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_536361: /* 536361: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 536363: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* 536366: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 536368: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 53636e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 536370: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 536371: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x536374u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 536374: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 53637a: mov dword ptr [ecx + ebx*4], 0 */
  W32((uint32_t)(ecx + ebx*4), 0x0u);
/* 536381: mov ecx, dword ptr [0x69a750] */
  ecx = R32((uint32_t)(0x69a750u));
/* 536387: mov eax, dword ptr [0x69a754] */
  eax = R32((uint32_t)(0x69a754u));
/* 53638c: mov esi, ecx */
  esi = ecx;
/* 53638e: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 53638f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 536391: mov dword ptr [0x69a750], ecx */
  W32((uint32_t)(0x69a750u), ecx);
/* 536397: jle 0x5363bb */
  if ((zf || sf != of)) goto L_5363bb;
L_536399: /* 536399: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 53639c: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 53639d: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5363a0: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5363a2: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5363a5: lea edx, [eax + ecx + 0x20] */
  edx = (uint32_t)(eax + ecx + 0x20u);
/* 5363a9: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 5363ab: mov ecx, 0x69a74c */
  ecx = 0x69a74cu;
/* 5363b0: mov dword ptr [0x69a754], edx */
  W32((uint32_t)(0x69a754u), edx);
/* 5363b6: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5363bbu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_5363bb: /* 5363bb: mov eax, dword ptr [0x69a74c] */
  eax = R32((uint32_t)(0x69a74cu));
/* 5363c0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5363c3: mov dword ptr [eax + esi*4], ebx */
  W32((uint32_t)(eax + esi*4), ebx);
/* 5363c6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5363c7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5363c8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5363cf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5363d0: mov esp, ebp */
  esp = ebp;
/* 5363d2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5363d3: ret  */
  esp += 4; SPILL(); return;
}

void f_5363d4(void) {
  LOAD_REGS();
L_5363d4: /* 5363d4: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5363d7: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5363dc: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 5363df: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5363e0: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 5363e3: call 0x554df6 */
  esp -= 4; W32(esp, 0x5363e8u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5363e8(); return;
}

void f_5363e8(void) {
  LOAD_REGS();
L_5363e8: /* 5363e8: push 0x56d5b4 */
  { uint32_t v = 0x56d5b4u; esp -= 4; W32(esp, v); }
/* 5363ed: push 0x5a99ec */
  { uint32_t v = 0x5a99ecu; esp -= 4; W32(esp, v); }
/* 5363f2: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5363f7u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5363f7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5363fa: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5363fc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5363fe: call 0x554df6 */
  esp -= 4; W32(esp, 0x536403u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_536403: guest_badaddr(0x536403); return;
}

void f_536470(void) {
  LOAD_REGS();
L_536470: /* 536470: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 536471: mov ebp, esp */
  ebp = esp;
/* 536473: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 536475: push 0x558870 */
  { uint32_t v = 0x558870u; esp -= 4; W32(esp, v); }
/* 53647a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 536480: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 536481: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 536488: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53648b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53648c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 53648f: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* 536492: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 536493: xor esi, esi */
  esi = 0;
/* 536495: cmp eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 536498: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 536499: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53649c: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 53649f: jge 0x5364e9 */
  if ((sf == of)) goto L_5364e9;
L_5364a1: /* 5364a1: cmp dword ptr [ebx + 0x10], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x10u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5364a4: jne 0x5364bd */
  if (!zf) goto L_5364bd;
L_5364a6: /* 5364a6: push 0x102 */
  { uint32_t v = 0x102u; esp -= 4; W32(esp, v); }
/* 5364ab: push 0x5a99f4 */
  { uint32_t v = 0x5a99f4u; esp -= 4; W32(esp, v); }
/* 5364b0: push 0x5a9a00 */
  { uint32_t v = 0x5a9a00u; esp -= 4; W32(esp, v); }
/* 5364b5: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5364bau); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5364ba: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5364bd: /* 5364bd: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
L_5364c0: /* 5364c0: lea eax, [ebp + 0xb] */
  eax = (uint32_t)(ebp + 0xbu);
/* 5364c3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5364c4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5364c5: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x5364cau); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 5364ca: mov al, byte ptr [ebp + 0xb] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xbu))) & 0xffu);
/* 5364cd: movzx cx, al */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)((eax & 0xffu))) & 0xffffu);
/* 5364d1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5364d4: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5364d6: mov word ptr [edi + esi*2 + 0xc], cx */
  W16((uint32_t)(edi + esi*2 + 0xcu), (ecx & 0xffffu));
/* 5364db: jne 0x5364e6 */
  if (!zf) goto L_5364e6;
L_5364dd: /* 5364dd: mov word ptr [edi + esi*2 + 0xc], 0 */
  W16((uint32_t)(edi + esi*2 + 0xcu), 0x0u);
/* 5364e4: jmp 0x53654d */
  goto L_53654d;
L_5364e6: /* 5364e6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 5364e7: jmp 0x5364c0 */
  goto L_5364c0;
L_5364e9: /* 5364e9: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 5364ec: lea esi, [edi + 0xc] */
  esi = (uint32_t)(edi + 0xcu);
/* 5364ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5364f0: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 5364f3: call 0x4e13de */
  esp -= 4; W32(esp, 0x5364f8u); SPILL(); f_4e13de(); if (g_unwind) return; RELOAD();
/* 5364f8: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 5364fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5364fc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5364fd: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 536501: call 0x4e1451 */
  esp -= 4; W32(esp, 0x536506u); SPILL(); f_4e1451(); if (g_unwind) return; RELOAD();
/* 536506: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 536509: push 0x3f */
  { uint32_t v = 0x3fu; esp -= 4; W32(esp, v); }
/* 53650b: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* 53650e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53650f: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 536512: call 0x4e42f0 */
  esp -= 4; W32(esp, 0x536517u); SPILL(); f_4e42f0(); if (g_unwind) return; RELOAD();
/* 536517: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 53651a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53651c: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 536520: je 0x536526 */
  if (zf) goto L_536526;
L_536522: /* 536522: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 536524: jmp 0x53652b */
  goto L_53652b;
L_536526: /* 536526: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_53652b: /* 53652b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53652c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53652d: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x536532u); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 536532: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 536535: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 536538: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 53653c: call 0x4e1217 */
  esp -= 4; W32(esp, 0x536541u); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
/* 536541: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 536544: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 536548: call 0x4e1217 */
  esp -= 4; W32(esp, 0x53654du); SPILL(); f_4e1217(); if (g_unwind) return; RELOAD();
L_53654d: /* 53654d: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 536550: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 536551: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 536552: call 0x4e4165 */
  esp -= 4; W32(esp, 0x536557u); SPILL(); f_4e4165(); if (g_unwind) return; RELOAD();
/* 536557: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53655a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53655d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53655e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53655f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 536566: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 536567: mov esp, ebp */
  esp = ebp;
/* 536569: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53656a: ret  */
  esp += 4; SPILL(); return;
}

void f_53656b(void) {
  LOAD_REGS();
L_53656b: /* 53656b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53656e: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 536573: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 536576: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 536577: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 53657a: call 0x554df6 */
  esp -= 4; W32(esp, 0x53657fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53657f(); return;
}

void f_53657f(void) {
  LOAD_REGS();
L_53657f: /* 53657f: push 0x56d5e4 */
  { uint32_t v = 0x56d5e4u; esp -= 4; W32(esp, v); }
/* 536584: push 0x5a9a10 */
  { uint32_t v = 0x5a9a10u; esp -= 4; W32(esp, v); }
/* 536589: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53658eu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53658e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 536591: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 536593: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 536595: call 0x554df6 */
  esp -= 4; W32(esp, 0x53659au); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53659a: guest_badaddr(0x53659a); return;
}

void f_5365f0(void) {
  LOAD_REGS();
L_5365f0: /* 5365f0: ret  */
  esp += 4; SPILL(); return;
}

void f_536610(void) {
  LOAD_REGS();
L_536610: /* 536610: ret  */
  esp += 4; SPILL(); return;
}

void f_536630(void) {
  LOAD_REGS();
L_536630: /* 536630: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 536634: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 53663a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 53663c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53663d: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 536641: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 536642: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x536644u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 536644: ret  */
  esp += 4; SPILL(); return;
}

void f_536660(void) {
  LOAD_REGS();
L_536660: /* 536660: jmp 0x4e1d2a */
  SPILL(); f_4e1d2a(); return;
}

void f_536680(void) {
  LOAD_REGS();
L_536680: /* 536680: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 536684: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 536685: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 536686: mov esi, 1 */
  esi = 0x1u;
/* 53668b: xor edi, edi */
  edi = 0;
/* 53668d: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 53668f: jbe 0x5366dd */
  if ((cf | zf)) goto L_5366dd;
L_536691: /* 536691: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 536692: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 536696: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 536697: mov ebp, dword ptr [esp + 0x18] */
  ebp = R32((uint32_t)(esp + 0x18u));
/* 53669b: jmp 0x5366a0 */
  goto L_5366a0;
L_5366a0: /* 5366a0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5366a2: je 0x5366d5 */
  if (zf) goto L_5366d5;
L_5366a4: /* 5366a4: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 5366a7: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 5366a9: test esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5366ab: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 5366ae: mov byte ptr [esp + 0x18], al */
  W8((uint32_t)(esp + 0x18u), (eax & 0xffu));
/* 5366b2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5366b4: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 5366b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5366b9: mov ecx, ebx */
  ecx = ebx;
/* 5366bb: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x5366beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5366be: mov al, byte ptr [esp + 0x18] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x18u))) & 0xffu);
/* 5366c2: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5366c4: je 0x5366c8 */
  if (zf) goto L_5366c8;
L_5366c6: /* 5366c6: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_5366c8: /* 5366c8: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 5366cc: add esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 5366ce: lea ecx, [esi + edi] */
  ecx = (uint32_t)(esi + edi);
/* 5366d1: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 5366d3: jb 0x5366a0 */
  if (cf) goto L_5366a0;
L_5366d5: /* 5366d5: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 5366d8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5366d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5366da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5366db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5366dc: ret  */
  esp += 4; SPILL(); return;
L_5366dd: /* 5366dd: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 5366e1: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 5366e3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5366e4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5366e5: ret  */
  esp += 4; SPILL(); return;
}

void f_53669d(void) {
  LOAD_REGS();
L_53669d: /* 53669d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_5366a0: /* 5366a0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5366a2: je 0x5366d5 */
  if (zf) goto L_5366d5;
L_5366a4: /* 5366a4: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 5366a7: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 5366a9: test esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5366ab: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 5366ae: mov byte ptr [esp + 0x18], al */
  W8((uint32_t)(esp + 0x18u), (eax & 0xffu));
/* 5366b2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5366b4: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 5366b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5366b9: mov ecx, ebx */
  ecx = ebx;
/* 5366bb: call dword ptr [edx + 8] */
  { uint32_t t = R32((uint32_t)(edx + 0x8u)); esp -= 4; W32(esp, 0x5366beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5366be: mov al, byte ptr [esp + 0x18] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x18u))) & 0xffu);
/* 5366c2: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5366c4: je 0x5366c8 */
  if (zf) goto L_5366c8;
L_5366c6: /* 5366c6: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_5366c8: /* 5366c8: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* 5366cc: add esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 5366ce: lea ecx, [esi + edi] */
  ecx = (uint32_t)(esi + edi);
/* 5366d1: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 5366d3: jb 0x5366a0 */
  if (cf) goto L_5366a0;
L_5366d5: /* 5366d5: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 5366d8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5366d9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5366da: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5366db: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5366dc: ret  */
  esp += 4; SPILL(); return;
}

void f_536710(void) {
  LOAD_REGS();
L_536710: /* 536710: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 536711: mov ebp, esp */
  ebp = esp;
/* 536713: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 536715: push 0x558880 */
  { uint32_t v = 0x558880u; esp -= 4; W32(esp, v); }
/* 53671a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 536720: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 536721: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 536728: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53672b: mov eax, dword ptr [0x69f448] */
  eax = R32((uint32_t)(0x69f448u));
/* 536730: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 536732: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 536733: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 536734: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 536735: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 536738: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53673f: je 0x536758 */
  if (zf) goto L_536758;
L_536741: /* 536741: push 0x618 */
  { uint32_t v = 0x618u; esp -= 4; W32(esp, v); }
/* 536746: push 0x5aae54 */
  { uint32_t v = 0x5aae54u; esp -= 4; W32(esp, v); }
/* 53674b: push 0x5aae60 */
  { uint32_t v = 0x5aae60u; esp -= 4; W32(esp, v); }
/* 536750: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x536755u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 536755: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_536758: /* 536758: mov eax, dword ptr [0x5f5d90] */
  eax = R32((uint32_t)(0x5f5d90u));
/* 53675d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53675f: je 0x536775 */
  if (zf) goto L_536775;
L_536761: /* 536761: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 536762: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 536767: push 0x5aae78 */
  { uint32_t v = 0x5aae78u; esp -= 4; W32(esp, v); }
/* 53676c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53676d: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x536772u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 536772: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_536775: /* 536775: mov eax, dword ptr [0x5f5d94] */
  eax = R32((uint32_t)(0x5f5d94u));
/* 53677a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53677c: je 0x536793 */
  if (zf) goto L_536793;
L_53677e: /* 53677e: mov ecx, dword ptr [0x5a0c94] */
  ecx = R32((uint32_t)(0x5a0c94u));
/* 536784: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 536785: push 0x5aaeb8 */
  { uint32_t v = 0x5aaeb8u; esp -= 4; W32(esp, v); }
/* 53678a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53678b: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x536790u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 536790: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_536793: /* 536793: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 536796: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 536797: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 536798: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53679f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5367a0: mov esp, ebp */
  esp = ebp;
/* 5367a2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5367a3: ret  */
  esp += 4; SPILL(); return;
}

void f_5367a4(void) {
  LOAD_REGS();
L_5367a4: /* 5367a4: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5367a7: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5367ac: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 5367af: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5367b0: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 5367b3: call 0x554df6 */
  esp -= 4; W32(esp, 0x5367b8u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5367b8(); return;
}

void f_5367b8(void) {
  LOAD_REGS();
L_5367b8: /* 5367b8: push 0x56d604 */
  { uint32_t v = 0x56d604u; esp -= 4; W32(esp, v); }
/* 5367bd: push 0x5aaef4 */
  { uint32_t v = 0x5aaef4u; esp -= 4; W32(esp, v); }
/* 5367c2: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5367c7u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5367c7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5367ca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5367cc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5367ce: call 0x554df6 */
  esp -= 4; W32(esp, 0x5367d3u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5367d3: guest_badaddr(0x5367d3); return;
}

void f_536820(void) {
  LOAD_REGS();
L_536820: /* 536820: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 536824: ret  */
  esp += 4; SPILL(); return;
}

void f_536840(void) {
  LOAD_REGS();
L_536840: /* 536840: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 536844: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 536848: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 53684a: cmp edx, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53684c: jne 0x536869 */
  if (!zf) goto L_536869;
L_53684e: /* 53684e: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 536851: cmp edx, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 536854: jne 0x536869 */
  if (!zf) goto L_536869;
L_536856: /* 536856: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 536859: cmp edx, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53685c: jne 0x536869 */
  if (!zf) goto L_536869;
L_53685e: /* 53685e: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 536861: cmp eax, dword ptr [ecx + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 536864: jne 0x536869 */
  if (!zf) goto L_536869;
L_536866: /* 536866: xor eax, eax */
  eax = 0;
/* 536868: ret  */
  esp += 4; SPILL(); return;
L_536869: /* 536869: mov eax, 1 */
  eax = 0x1u;
/* 53686e: ret  */
  esp += 4; SPILL(); return;
}

void f_536880(void) {
  LOAD_REGS();
L_536880: /* 536880: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 536882: push 0x558898 */
  { uint32_t v = 0x558898u; esp -= 4; W32(esp, v); }
/* 536887: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53688d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53688e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 536895: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 536896: xor eax, eax */
  eax = 0;
/* 536898: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 536899: mov esi, ecx */
  esi = ecx;
/* 53689b: mov ecx, 1 */
  ecx = 0x1u;
/* 5368a0: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 5368a4: mov dword ptr [esi + 4], 0x7e */
  W32((uint32_t)(esi + 0x4u), 0x7eu);
/* 5368ab: mov dword ptr [esi + 8], 0x7d0 */
  W32((uint32_t)(esi + 0x8u), 0x7d0u);
/* 5368b2: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 5368b5: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 5368b8: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 5368bb: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 5368be: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 5368c1: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* 5368c4: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* 5368c7: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 5368ca: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 5368cd: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 5368d0: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 5368d3: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 5368d6: mov dword ptr [esi + 0x3c], 0xffffffff */
  W32((uint32_t)(esi + 0x3cu), 0xffffffffu);
/* 5368dd: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 5368e1: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 5368e5: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 5368e9: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 5368ec: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 5368f0: mov dword ptr [esi + 0x48], ecx */
  W32((uint32_t)(esi + 0x48u), ecx);
/* 5368f3: mov ecx, dword ptr [esp + 0x20] */
  ecx = R32((uint32_t)(esp + 0x20u));
/* 5368f7: mov dword ptr [esi], 0x56d638 */
  W32((uint32_t)(esi), 0x56d638u);
/* 5368fd: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 536900: mov dword ptr [esi + 0x4c], ecx */
  W32((uint32_t)(esi + 0x4cu), ecx);
/* 536903: mov dword ptr [esi + 0x50], edx */
  W32((uint32_t)(esi + 0x50u), edx);
/* 536906: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 536908: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 536909: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x53690cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53690c: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 536910: mov eax, esi */
  eax = esi;
/* 536912: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 536913: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53691a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53691d: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_536950(void) {
  LOAD_REGS();
L_536950: /* 536950: mov dword ptr [ecx], 0x569110 */
  W32((uint32_t)(ecx), 0x569110u);
/* 536956: ret  */
  esp += 4; SPILL(); return;
}

void f_536970(void) {
  LOAD_REGS();
L_536970: /* 536970: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 536972: push 0x5588b8 */
  { uint32_t v = 0x5588b8u; esp -= 4; W32(esp, v); }
/* 536977: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53697d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53697e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 536985: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 536986: xor eax, eax */
  eax = 0;
/* 536988: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 536989: mov esi, ecx */
  esi = ecx;
/* 53698b: mov ecx, 1 */
  ecx = 0x1u;
/* 536990: mov dword ptr [esp + 4], esi */
  W32((uint32_t)(esp + 0x4u), esi);
/* 536994: mov dword ptr [esi + 4], 0x7e */
  W32((uint32_t)(esi + 0x4u), 0x7eu);
/* 53699b: mov dword ptr [esi + 8], 0x7d0 */
  W32((uint32_t)(esi + 0x8u), 0x7d0u);
/* 5369a2: mov dword ptr [esi + 0xc], ecx */
  W32((uint32_t)(esi + 0xcu), ecx);
/* 5369a5: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 5369a8: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 5369ab: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 5369ae: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 5369b1: mov dword ptr [esi + 0x20], ecx */
  W32((uint32_t)(esi + 0x20u), ecx);
/* 5369b4: mov dword ptr [esi + 0x24], ecx */
  W32((uint32_t)(esi + 0x24u), ecx);
/* 5369b7: mov dword ptr [esi + 0x28], ecx */
  W32((uint32_t)(esi + 0x28u), ecx);
/* 5369ba: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 5369bd: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 5369c0: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 5369c3: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 5369c6: mov dword ptr [esi + 0x3c], 0xffffffff */
  W32((uint32_t)(esi + 0x3cu), 0xffffffffu);
/* 5369cd: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 5369d1: mov dword ptr [esi + 0x40], ecx */
  W32((uint32_t)(esi + 0x40u), ecx);
/* 5369d4: mov ecx, dword ptr [esp + 0x1c] */
  ecx = R32((uint32_t)(esp + 0x1cu));
/* 5369d8: mov dword ptr [esi], 0x56d6a8 */
  W32((uint32_t)(esi), 0x56d6a8u);
/* 5369de: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 5369e1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5369e3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5369e4: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* 5369e8: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x5369ebu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5369eb: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 5369ef: mov eax, esi */
  eax = esi;
/* 5369f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5369f2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5369f9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5369fc: ret 8 */
  esp += 12; SPILL(); return;
}

void f_536a30(void) {
  LOAD_REGS();
L_536a30: /* 536a30: mov eax, dword ptr [ecx + 0x44] */
  eax = R32((uint32_t)(ecx + 0x44u));
/* 536a33: ret  */
  esp += 4; SPILL(); return;
}

void f_536a50(void) {
  LOAD_REGS();
L_536a50: /* 536a50: mov eax, ecx */
  eax = ecx;
/* 536a52: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 536a56: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 536a58: cmp edx, dword ptr [eax + 0x40] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 536a5b: jne 0x536a60 */
  if (!zf) goto L_536a60;
L_536a5d: /* 536a5d: inc dword ptr [eax + 0x44] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x44u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax + 0x44u), r);
  }
L_536a60: /* 536a60: ret 4 */
  esp += 8; SPILL(); return;
}

void f_536a80(void) {
  LOAD_REGS();
L_536a80: /* 536a80: mov dword ptr [ecx], 0x569110 */
  W32((uint32_t)(ecx), 0x569110u);
/* 536a86: ret  */
  esp += 4; SPILL(); return;
}

void f_536aa0(void) {
  LOAD_REGS();
L_536aa0: /* 536aa0: mov dword ptr [ecx], 0x569110 */
  W32((uint32_t)(ecx), 0x569110u);
/* 536aa6: ret  */
  esp += 4; SPILL(); return;
}

void f_536ac0(void) {
  LOAD_REGS();
L_536ac0: /* 536ac0: mov eax, ecx */
  eax = ecx;
/* 536ac2: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 536ac6: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 536ac8: xor ecx, ecx */
  ecx = 0;
/* 536aca: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 536acd: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 536ad0: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 536ad3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_536af0(void) {
  LOAD_REGS();
L_536af0: /* 536af0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 536af4: mov eax, ecx */
  eax = ecx;
/* 536af6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 536afa: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 536afc: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 536b00: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 536b03: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 536b06: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_536b20(void) {
  LOAD_REGS();
L_536b20: /* 536b20: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 536b24: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 536b28: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 536b2b: sub eax, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 536b2e: ret  */
  esp += 4; SPILL(); return;
}

void f_536b40(void) {
  LOAD_REGS();
L_536b40: /* 536b40: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 536b44: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 536b48: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 536b4b: sub eax, dword ptr [ecx + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 536b4e: ret  */
  esp += 4; SPILL(); return;
}

void f_536b60(void) {
  LOAD_REGS();
L_536b60: /* 536b60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 536b61: mov ebp, esp */
  ebp = esp;
/* 536b63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 536b65: push 0x5588d0 */
  { uint32_t v = 0x5588d0u; esp -= 4; W32(esp, v); }
/* 536b6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 536b70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 536b71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 536b78: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 536b79: mov eax, 0x2008 */
  eax = 0x2008u;
/* 536b7e: call 0x554f80 */
  esp -= 4; W32(esp, 0x536b83u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 536b83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 536b84: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 536b85: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 536b86: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 536b89: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* 536b8c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 536b8d: lea ecx, [ebp - 0x2018] */
  ecx = (uint32_t)(ebp + 0xffffdfe8u);
/* 536b93: push 0x1000 */
  { uint32_t v = 0x1000u; esp -= 4; W32(esp, v); }
/* 536b98: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 536b99: call 0x4e3693 */
  esp -= 4; W32(esp, 0x536b9eu); SPILL(); f_4e3693(); if (g_unwind) return; RELOAD();
/* 536b9e: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 536ba1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 536ba4: test bh, 0x20 */
  { uint8_t a = (uint8_t)(((ebx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 536ba7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 536bae: jne 0x536bca */
  if (!zf) goto L_536bca;
L_536bb0: /* 536bb0: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 536bb5: lea edx, [ebp - 0x2018] */
  edx = (uint32_t)(ebp + 0xffffdfe8u);
/* 536bbb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 536bbc: push 0x2ff */
  { uint32_t v = 0x2ffu; esp -= 4; W32(esp, v); }
/* 536bc1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 536bc2: call 0x4e30df */
  esp -= 4; W32(esp, 0x536bc7u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 536bc7: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_536bca: /* 536bca: test bl, 8 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 536bcd: je 0x536be0 */
  if (zf) goto L_536be0;
L_536bcf: /* 536bcf: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 536bd2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 536bd3: push 0x5ab6b8 */
  { uint32_t v = 0x5ab6b8u; esp -= 4; W32(esp, v); }
/* 536bd8: call 0x4e3418 */
  esp -= 4; W32(esp, 0x536bddu); SPILL(); f_4e3418(); if (g_unwind) return; RELOAD();
/* 536bdd: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_536be0: /* 536be0: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 536be3: je 0x536bff */
  if (zf) goto L_536bff;
L_536be5: /* 536be5: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 536bea: lea edx, [ebp - 0x2018] */
  edx = (uint32_t)(ebp + 0xffffdfe8u);
/* 536bf0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 536bf1: push 0x5ab6c0 */
  { uint32_t v = 0x5ab6c0u; esp -= 4; W32(esp, v); }
/* 536bf6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 536bf7: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x536bfcu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 536bfc: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_536bff: /* 536bff: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 536c02: jne 0x536c1f */
  if (!zf) goto L_536c1f;
L_536c04: /* 536c04: mov edx, dword ptr [0x5afee8] */
  edx = R32((uint32_t)(0x5afee8u));
/* 536c0a: lea ecx, [ebp - 0x2018] */
  ecx = (uint32_t)(ebp + 0xffffdfe8u);
/* 536c10: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 536c11: push 0x5ab6c8 */
  { uint32_t v = 0x5ab6c8u; esp -= 4; W32(esp, v); }
/* 536c16: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 536c17: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x536c1cu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 536c1c: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_536c1f: /* 536c1f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 536c22: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 536c23: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 536c24: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 536c2b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 536c2c: mov esp, ebp */
  esp = ebp;
/* 536c2e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 536c2f: ret  */
  esp += 4; SPILL(); return;
}

void f_536c30(void) {
  LOAD_REGS();
L_536c30: /* 536c30: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 536c33: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 536c38: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 536c3b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 536c3c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 536c3f: call 0x554df6 */
  esp -= 4; W32(esp, 0x536c44u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_536c44(); return;
}

void f_536c44(void) {
  LOAD_REGS();
L_536c44: /* 536c44: push 0x56d714 */
  { uint32_t v = 0x56d714u; esp -= 4; W32(esp, v); }
/* 536c49: push 0x5ab6d0 */
  { uint32_t v = 0x5ab6d0u; esp -= 4; W32(esp, v); }
/* 536c4e: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x536c53u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 536c53: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 536c56: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 536c58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 536c5a: call 0x554df6 */
  esp -= 4; W32(esp, 0x536c5fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_536c5f: guest_badaddr(0x536c5f); return;
}

void f_536ca0(void) {
  LOAD_REGS();
L_536ca0: /* 536ca0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 536ca1: mov ebp, esp */
  ebp = esp;
/* 536ca3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 536ca5: push 0x5588e0 */
  { uint32_t v = 0x5588e0u; esp -= 4; W32(esp, v); }
/* 536caa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 536cb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 536cb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 536cb8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 536cbb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 536cbe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 536cbf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 536cc0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 536cc1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 536cc4: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 536ccb: call 0x4e32c9 */
  esp -= 4; W32(esp, 0x536cd0u); SPILL(); f_4e32c9(); if (g_unwind) return; RELOAD();
/* 536cd0: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 536cd3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 536cd4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 536cd5: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 536cdc: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 536cdd: mov esp, ebp */
  esp = ebp;
/* 536cdf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 536ce0: ret  */
  esp += 4; SPILL(); return;
}

void f_536ce1(void) {
  LOAD_REGS();
L_536ce1: /* 536ce1: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 536ce4: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 536ce9: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 536cec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 536ced: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 536cf0: call 0x554df6 */
  esp -= 4; W32(esp, 0x536cf5u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_536cf5(); return;
}

void f_536cf5(void) {
  LOAD_REGS();
L_536cf5: /* 536cf5: push 0x56d74c */
  { uint32_t v = 0x56d74cu; esp -= 4; W32(esp, v); }
/* 536cfa: push 0x5abaf8 */
  { uint32_t v = 0x5abaf8u; esp -= 4; W32(esp, v); }
/* 536cff: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x536d04u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 536d04: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 536d07: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 536d09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 536d0b: call 0x554df6 */
  esp -= 4; W32(esp, 0x536d10u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_536d10: guest_badaddr(0x536d10); return;
}

void f_536d40(void) {
  LOAD_REGS();
L_536d40: /* 536d40: mov eax, ecx */
  eax = ecx;
/* 536d42: xor ecx, ecx */
  ecx = 0;
/* 536d44: mov edx, 1 */
  edx = 0x1u;
/* 536d49: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 536d4c: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 536d4f: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 536d52: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 536d55: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 536d58: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 536d5b: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 536d5f: mov dword ptr [eax + 4], 0x7e */
  W32((uint32_t)(eax + 0x4u), 0x7eu);
/* 536d66: mov dword ptr [eax + 8], 0x7d0 */
  W32((uint32_t)(eax + 0x8u), 0x7d0u);
/* 536d6d: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 536d70: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* 536d73: mov dword ptr [eax + 0x24], edx */
  W32((uint32_t)(eax + 0x24u), edx);
/* 536d76: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
/* 536d79: mov dword ptr [eax + 0x3c], 0xffffffff */
  W32((uint32_t)(eax + 0x3cu), 0xffffffffu);
/* 536d80: mov dword ptr [eax], 0x56d780 */
  W32((uint32_t)(eax), 0x56d780u);
/* 536d86: mov dword ptr [eax + 0x40], ecx */
  W32((uint32_t)(eax + 0x40u), ecx);
/* 536d89: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 536d8c: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 536d8f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_536dc0(void) {
  LOAD_REGS();
L_536dc0: /* 536dc0: mov dword ptr [ecx], 0x569110 */
  W32((uint32_t)(ecx), 0x569110u);
/* 536dc6: ret  */
  esp += 4; SPILL(); return;
}

void f_536de0(void) {
  LOAD_REGS();
L_536de0: /* 536de0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 536de1: mov eax, dword ptr [0x69b438] */
  eax = R32((uint32_t)(0x69b438u));
/* 536de6: mov edx, dword ptr [eax + 0xb4] */
  edx = R32((uint32_t)(eax + 0xb4u));
/* 536dec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 536ded: lea ecx, [eax + 0xb4] */
  ecx = (uint32_t)(eax + 0xb4u);
/* 536df3: lea esi, [eax + 0xb4] */
  esi = (uint32_t)(eax + 0xb4u);
/* 536df9: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 536dfd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 536dfe: mov dword ptr [esp + 8], ecx */
  W32((uint32_t)(esp + 0x8u), ecx);
/* 536e02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 536e03: mov ecx, esi */
  ecx = esi;
/* 536e05: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x536e08u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 536e08: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 536e0a: mov edi, eax */
  edi = eax;
/* 536e0c: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 536e10: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 536e11: mov ecx, esi */
  ecx = esi;
/* 536e13: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x536e16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 536e16: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 536e18: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 536e19: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 536e1a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 536e1b: ret  */
  esp += 4; SPILL(); return;
}

void f_536e30(void) {
  LOAD_REGS();
L_536e30: /* 536e30: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 536e31: mov eax, dword ptr [0x69b438] */
  eax = R32((uint32_t)(0x69b438u));
/* 536e36: mov edx, dword ptr [eax + 0xb4] */
  edx = R32((uint32_t)(eax + 0xb4u));
/* 536e3c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 536e3d: lea ecx, [eax + 0xb4] */
  ecx = (uint32_t)(eax + 0xb4u);
/* 536e43: lea esi, [eax + 0xb4] */
  esi = (uint32_t)(eax + 0xb4u);
/* 536e49: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 536e4d: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 536e51: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 536e54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 536e55: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 536e56: mov ecx, esi */
  ecx = esi;
/* 536e58: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x536e5bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 536e5b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 536e5d: mov edi, eax */
  edi = eax;
/* 536e5f: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 536e63: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* 536e66: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 536e67: mov ecx, esi */
  ecx = esi;
/* 536e69: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x536e6cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 536e6c: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 536e6e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 536e6f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 536e70: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 536e71: ret  */
  esp += 4; SPILL(); return;
}

void f_536ea0(void) {
  LOAD_REGS();
L_536ea0: /* 536ea0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 536ea1: mov eax, dword ptr [0x69b438] */
  eax = R32((uint32_t)(0x69b438u));
/* 536ea6: mov edx, dword ptr [eax + 0xb4] */
  edx = R32((uint32_t)(eax + 0xb4u));
/* 536eac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 536ead: lea ecx, [eax + 0xb4] */
  ecx = (uint32_t)(eax + 0xb4u);
/* 536eb3: lea esi, [eax + 0xb4] */
  esi = (uint32_t)(eax + 0xb4u);
/* 536eb9: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 536ebd: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* 536ec1: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 536ec4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 536ec5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 536ec6: mov ecx, esi */
  ecx = esi;
/* 536ec8: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x536ecbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 536ecb: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 536ecd: mov edi, eax */
  edi = eax;
/* 536ecf: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 536ed3: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 536ed6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 536ed7: mov ecx, esi */
  ecx = esi;
/* 536ed9: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x536edcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 536edc: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 536ede: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 536edf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 536ee0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 536ee1: ret  */
  esp += 4; SPILL(); return;
}

void f_536f10(void) {
  LOAD_REGS();
L_536f10: /* 536f10: mov eax, ecx */
  eax = ecx;
/* 536f12: xor ecx, ecx */
  ecx = 0;
/* 536f14: mov edx, 1 */
  edx = 0x1u;
/* 536f19: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 536f1c: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* 536f1f: mov dword ptr [eax + 0x2c], ecx */
  W32((uint32_t)(eax + 0x2cu), ecx);
/* 536f22: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* 536f25: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* 536f28: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* 536f2b: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 536f2f: mov dword ptr [eax + 0x40], ecx */
  W32((uint32_t)(eax + 0x40u), ecx);
/* 536f32: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 536f36: mov dword ptr [eax + 4], 0x7e */
  W32((uint32_t)(eax + 0x4u), 0x7eu);
/* 536f3d: mov dword ptr [eax + 8], 0x7d0 */
  W32((uint32_t)(eax + 0x8u), 0x7d0u);
/* 536f44: mov dword ptr [eax + 0xc], edx */
  W32((uint32_t)(eax + 0xcu), edx);
/* 536f47: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* 536f4a: mov dword ptr [eax + 0x24], edx */
  W32((uint32_t)(eax + 0x24u), edx);
/* 536f4d: mov dword ptr [eax + 0x28], edx */
  W32((uint32_t)(eax + 0x28u), edx);
/* 536f50: mov dword ptr [eax + 0x3c], 0xffffffff */
  W32((uint32_t)(eax + 0x3cu), 0xffffffffu);
/* 536f57: mov dword ptr [eax], 0x56d7f0 */
  W32((uint32_t)(eax), 0x56d7f0u);
/* 536f5d: mov dword ptr [eax + 0x44], ecx */
  W32((uint32_t)(eax + 0x44u), ecx);
/* 536f60: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 536f63: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 536f66: ret 8 */
  esp += 12; SPILL(); return;
}

void f_536f90(void) {
  LOAD_REGS();
L_536f90: /* 536f90: mov dword ptr [ecx], 0x569110 */
  W32((uint32_t)(ecx), 0x569110u);
/* 536f96: ret  */
  esp += 4; SPILL(); return;
}

void f_536fb0(void) {
  LOAD_REGS();
L_536fb0: /* 536fb0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 536fb4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 536fb8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 536fba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 536fbb: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x536fbeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 536fbe: ret  */
  esp += 4; SPILL(); return;
}

void f_536fd0(void) {
  LOAD_REGS();
L_536fd0: /* 536fd0: mov eax, dword ptr [0x69f440] */
  eax = R32((uint32_t)(0x69f440u));
/* 536fd5: ret  */
  esp += 4; SPILL(); return;
}

void f_536ff0(void) {
  LOAD_REGS();
L_536ff0: /* 536ff0: mov eax, dword ptr [0x69f458] */
  eax = R32((uint32_t)(0x69f458u));
/* 536ff5: ret  */
  esp += 4; SPILL(); return;
}

void f_537010(void) {
  LOAD_REGS();
L_537010: /* 537010: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 537013: and eax, 0xfff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 537018: mov edx, dword ptr [eax*4 + 0x69b440] */
  edx = R32((uint32_t)(eax*4 + 0x69b440u));
/* 53701f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 537022: mov dword ptr [eax*4 + 0x69b440], ecx */
  W32((uint32_t)(eax*4 + 0x69b440u), ecx);
/* 537029: ret  */
  esp += 4; SPILL(); return;
}

void f_537040(void) {
  LOAD_REGS();
L_537040: /* 537040: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 537041: mov ebp, esp */
  ebp = esp;
/* 537043: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 537045: push 0x5588f0 */
  { uint32_t v = 0x5588f0u; esp -= 4; W32(esp, v); }
/* 53704a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 537050: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 537051: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 537058: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53705b: mov eax, dword ptr [ecx + 0x20] */
  eax = R32((uint32_t)(ecx + 0x20u));
/* 53705e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53705f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 537060: and eax, 0xfff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 537065: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 537066: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 537069: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 537070: lea edx, [eax*4 + 0x69b440] */
  edx = (uint32_t)(eax*4 + 0x69b440u);
/* 537077: xor esi, esi */
  esi = 0;
/* 537079: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_537080: /* 537080: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 537082: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537084: je 0x537097 */
  if (zf) goto L_537097;
L_537086: /* 537086: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 537088: je 0x53708f */
  if (zf) goto L_53708f;
L_53708a: /* 53708a: lea edx, [eax + 8] */
  edx = (uint32_t)(eax + 0x8u);
/* 53708d: jmp 0x537080 */
  goto L_537080;
L_53708f: /* 53708f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 537092: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 537094: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 537095: jmp 0x537080 */
  goto L_537080;
L_537097: /* 537097: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537099: jne 0x5370b2 */
  if (!zf) goto L_5370b2;
L_53709b: /* 53709b: push 0xd11 */
  { uint32_t v = 0xd11u; esp -= 4; W32(esp, v); }
/* 5370a0: push 0x5abff8 */
  { uint32_t v = 0x5abff8u; esp -= 4; W32(esp, v); }
/* 5370a5: push 0x5ac004 */
  { uint32_t v = 0x5ac004u; esp -= 4; W32(esp, v); }
/* 5370aa: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5370afu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5370af: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5370b2: /* 5370b2: cmp esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5370b5: je 0x5370ce */
  if (zf) goto L_5370ce;
L_5370b7: /* 5370b7: push 0xd12 */
  { uint32_t v = 0xd12u; esp -= 4; W32(esp, v); }
/* 5370bc: push 0x5ac010 */
  { uint32_t v = 0x5ac010u; esp -= 4; W32(esp, v); }
/* 5370c1: push 0x5ac01c */
  { uint32_t v = 0x5ac01cu; esp -= 4; W32(esp, v); }
/* 5370c6: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5370cbu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5370cb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5370ce: /* 5370ce: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5370d1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5370d2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5370d3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5370da: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5370db: mov esp, ebp */
  esp = ebp;
/* 5370dd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5370de: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5370e1(void) {
  LOAD_REGS();
L_5370e1: /* 5370e1: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5370e4: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5370e9: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 5370ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5370ed: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 5370f0: call 0x554df6 */
  esp -= 4; W32(esp, 0x5370f5u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5370f5(); return;
}

void f_5370f5(void) {
  LOAD_REGS();
L_5370f5: /* 5370f5: push 0x56d85c */
  { uint32_t v = 0x56d85cu; esp -= 4; W32(esp, v); }
/* 5370fa: push 0x5ac028 */
  { uint32_t v = 0x5ac028u; esp -= 4; W32(esp, v); }
/* 5370ff: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x537104u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 537104: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 537107: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 537109: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53710b: call 0x554df6 */
  esp -= 4; W32(esp, 0x537110u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_537110: guest_badaddr(0x537110); return;
}

void f_537160(void) {
  LOAD_REGS();
L_537160: /* 537160: mov dword ptr [ecx], 0x569110 */
  W32((uint32_t)(ecx), 0x569110u);
/* 537166: ret  */
  esp += 4; SPILL(); return;
}

void f_537180(void) {
  LOAD_REGS();
L_537180: /* 537180: mov eax, 0x5a9f70 */
  eax = 0x5a9f70u;
/* 537185: ret  */
  esp += 4; SPILL(); return;
}

void f_5371a0(void) {
  LOAD_REGS();
L_5371a0: /* 5371a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5371a4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5371a5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5371a7: call 0x4e33b4 */
  esp -= 4; W32(esp, 0x5371acu); SPILL(); f_4e33b4(); if (g_unwind) return; RELOAD();
/* 5371ac: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5371c0(void) {
  LOAD_REGS();
L_5371c0: /* 5371c0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5371c1: mov esi, ecx */
  esi = ecx;
/* 5371c3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 5371c6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5371c7: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 5371cb: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5371cd: jl 0x5371e6 */
  if ((sf != of)) goto L_5371e6;
L_5371cf: /* 5371cf: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 5371d4: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5371d9: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 5371de: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5371e3u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5371e3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5371e6: /* 5371e6: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 5371e9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 5371eb: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 5371ed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5371ee: lea eax, [ecx + eax*4 - 4] */
  eax = (uint32_t)(ecx + eax*4 + 0xfffffffcu);
/* 5371f2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5371f3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_537210(void) {
  LOAD_REGS();
L_537210: /* 537210: mov eax, ecx */
  eax = ecx;
/* 537212: xor ecx, ecx */
  ecx = 0;
/* 537214: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 537216: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 537219: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 53721c: ret  */
  esp += 4; SPILL(); return;
}

void f_537230(void) {
  LOAD_REGS();
L_537230: /* 537230: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 537234: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 537238: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 53723a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53723b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53723c: call 0x4e1a2d */
  esp -= 4; W32(esp, 0x537241u); SPILL(); f_4e1a2d(); if (g_unwind) return; RELOAD();
/* 537241: ret 8 */
  esp += 12; SPILL(); return;
}

void f_537260(void) {
  LOAD_REGS();
L_537260: /* 537260: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 537264: mov dword ptr [ecx + 4], 0 */
  W32((uint32_t)(ecx + 0x4u), 0x0u);
/* 53726b: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 53726e: mov dword ptr [esp + 4], 4 */
  W32((uint32_t)(esp + 0x4u), 0x4u);
/* 537276: jmp 0x4e4502 */
  SPILL(); f_4e4502(); return;
}

void f_537290(void) {
  LOAD_REGS();
L_537290: /* 537290: mov eax, ecx */
  eax = ecx;
/* 537292: xor ecx, ecx */
  ecx = 0;
/* 537294: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 537296: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 537299: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 53729c: ret  */
  esp += 4; SPILL(); return;
}

void f_5372b0(void) {
  LOAD_REGS();
L_5372b0: /* 5372b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5372b4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5372b6: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 5372b9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5372bb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5372d0(void) {
  LOAD_REGS();
L_5372d0: /* 5372d0: mov eax, ecx */
  eax = ecx;
/* 5372d2: xor ecx, ecx */
  ecx = 0;
/* 5372d4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 5372d6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 5372d9: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 5372dc: ret  */
  esp += 4; SPILL(); return;
}

void f_5372f0(void) {
  LOAD_REGS();
L_5372f0: /* 5372f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5372f4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5372f6: imul eax, eax, 0x3c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x3cu);
  eax = (uint32_t)r;
  }
/* 5372f9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5372fb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_537310(void) {
  LOAD_REGS();
L_537310: /* 537310: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 537311: mov esi, ecx */
  esi = ecx;
/* 537313: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 537316: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 537317: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 53731b: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53731d: jl 0x537336 */
  if ((sf != of)) goto L_537336;
L_53731f: /* 53731f: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 537324: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 537329: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 53732e: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x537333u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 537333: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_537336: /* 537336: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 537339: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 53733b: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 53733d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53733e: lea eax, [ecx + eax*4 - 4] */
  eax = (uint32_t)(ecx + eax*4 + 0xfffffffcu);
/* 537342: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 537343: ret 4 */
  esp += 8; SPILL(); return;
}

void f_537360(void) {
  LOAD_REGS();
L_537360: /* 537360: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 537362: ret  */
  esp += 4; SPILL(); return;
}

void f_537380(void) {
  LOAD_REGS();
L_537380: /* 537380: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 537381: mov esi, ecx */
  esi = ecx;
/* 537383: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 537386: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 537387: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 53738b: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53738d: jl 0x5373a6 */
  if ((sf != of)) goto L_5373a6;
L_53738f: /* 53738f: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 537394: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 537399: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 53739e: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5373a3u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5373a3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5373a6: /* 5373a6: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 5373a9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 5373ab: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 5373ad: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5373ae: lea eax, [ecx + eax*8 - 8] */
  eax = (uint32_t)(ecx + eax*8 + 0xfffffff8u);
/* 5373b2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5373b3: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5373d0(void) {
  LOAD_REGS();
L_5373d0: /* 5373d0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5373d1: mov esi, ecx */
  esi = ecx;
/* 5373d3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 5373d6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5373d7: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* 5373db: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5373dd: jl 0x5373f6 */
  if ((sf != of)) goto L_5373f6;
L_5373df: /* 5373df: push 0x1ad */
  { uint32_t v = 0x1adu; esp -= 4; W32(esp, v); }
/* 5373e4: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5373e9: push 0x5a3804 */
  { uint32_t v = 0x5a3804u; esp -= 4; W32(esp, v); }
/* 5373ee: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5373f3u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5373f3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5373f6: /* 5373f6: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 5373f9: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 5373fb: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 5373fd: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 5373fe: lea eax, [eax + eax*8] */
  eax = (uint32_t)(eax + eax*8);
/* 537401: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 537402: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 537405: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 537406: ret 4 */
  esp += 8; SPILL(); return;
}

void f_537420(void) {
  LOAD_REGS();
L_537420: /* 537420: mov eax, ecx */
  eax = ecx;
/* 537422: xor ecx, ecx */
  ecx = 0;
/* 537424: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 537426: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 537429: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 53742c: ret  */
  esp += 4; SPILL(); return;
}

void f_537440(void) {
  LOAD_REGS();
L_537440: /* 537440: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 537444: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 537446: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 537449: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53744b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_537460(void) {
  LOAD_REGS();
L_537460: /* 537460: mov eax, ecx */
  eax = ecx;
/* 537462: xor ecx, ecx */
  ecx = 0;
/* 537464: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 537466: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 537469: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 53746c: ret  */
  esp += 4; SPILL(); return;
}

void f_537480(void) {
  LOAD_REGS();
L_537480: /* 537480: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 537484: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 537486: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 537489: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 53748c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5374a0(void) {
  LOAD_REGS();
L_5374a0: /* 5374a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5374a1: mov eax, ecx */
  eax = ecx;
/* 5374a3: mov esi, dword ptr [eax + 8] */
  esi = R32((uint32_t)(eax + 0x8u));
/* 5374a6: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 5374a9: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 5374ad: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5374af: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 5374b2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5374b3: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 5374b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5374b7: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x5374bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5374ba: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5374bb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5374d0(void) {
  LOAD_REGS();
L_5374d0: /* 5374d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5374d4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5374d6: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 5374d9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5374db: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5374f0(void) {
  LOAD_REGS();
L_5374f0: /* 5374f0: mov eax, ecx */
  eax = ecx;
/* 5374f2: xor ecx, ecx */
  ecx = 0;
/* 5374f4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 5374f6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 5374f9: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 5374fc: ret  */
  esp += 4; SPILL(); return;
}

void f_537510(void) {
  LOAD_REGS();
L_537510: /* 537510: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 537514: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 537516: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 537519: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 53751c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_537530(void) {
  LOAD_REGS();
L_537530: /* 537530: mov eax, ecx */
  eax = ecx;
/* 537532: xor ecx, ecx */
  ecx = 0;
/* 537534: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 537536: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 537539: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 53753c: ret  */
  esp += 4; SPILL(); return;
}

void f_537550(void) {
  LOAD_REGS();
L_537550: /* 537550: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 537554: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 537556: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 537559: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53755b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_537570(void) {
  LOAD_REGS();
L_537570: /* 537570: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 537574: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 537575: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 537576: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 537579: lea esi, [edi + eax] */
  esi = (uint32_t)(edi + eax);
/* 53757c: cmp esi, dword ptr [ecx + 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53757f: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 537582: jle 0x53759e */
  if ((zf || sf != of)) goto L_53759e;
L_537584: /* 537584: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 537587: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 537588: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 53758b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53758d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 537590: lea edx, [eax + esi + 0x20] */
  edx = (uint32_t)(eax + esi + 0x20u);
/* 537594: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 537596: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 537599: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53759eu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_53759e: /* 53759e: mov eax, edi */
  eax = edi;
/* 5375a0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5375a1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5375a2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5375c0(void) {
  LOAD_REGS();
L_5375c0: /* 5375c0: mov eax, ecx */
  eax = ecx;
/* 5375c2: xor ecx, ecx */
  ecx = 0;
/* 5375c4: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 5375c6: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 5375c9: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 5375cc: ret  */
  esp += 4; SPILL(); return;
}

void f_5375e0(void) {
  LOAD_REGS();
L_5375e0: /* 5375e0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5375e4: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 5375e6: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 5375e9: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 5375ec: ret 4 */
  esp += 8; SPILL(); return;
}

void f_537600(void) {
  LOAD_REGS();
L_537600: /* 537600: mov eax, 1 */
  eax = 0x1u;
/* 537605: ret  */
  esp += 4; SPILL(); return;
}

void f_537620(void) {
  LOAD_REGS();
L_537620: /* 537620: mov eax, 1 */
  eax = 0x1u;
/* 537625: ret  */
  esp += 4; SPILL(); return;
}

void f_537640(void) {
  LOAD_REGS();
L_537640: /* 537640: mov eax, ecx */
  eax = ecx;
/* 537642: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 537646: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 537648: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 53764c: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 53764f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 537651: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 537654: ret 8 */
  esp += 12; SPILL(); return;
}

void f_537670(void) {
  LOAD_REGS();
L_537670: /* 537670: mov eax, 1 */
  eax = 0x1u;
/* 537675: ret  */
  esp += 4; SPILL(); return;
}

void f_537690(void) {
  LOAD_REGS();
L_537690: /* 537690: mov eax, 1 */
  eax = 0x1u;
/* 537695: ret  */
  esp += 4; SPILL(); return;
}

void f_5376b0(void) {
  LOAD_REGS();
L_5376b0: /* 5376b0: mov eax, 1 */
  eax = 0x1u;
/* 5376b5: ret  */
  esp += 4; SPILL(); return;
}

void f_5376d0(void) {
  LOAD_REGS();
L_5376d0: /* 5376d0: mov eax, 1 */
  eax = 0x1u;
/* 5376d5: ret  */
  esp += 4; SPILL(); return;
}

void f_5376f0(void) {
  LOAD_REGS();
L_5376f0: /* 5376f0: mov eax, 1 */
  eax = 0x1u;
/* 5376f5: ret  */
  esp += 4; SPILL(); return;
}

void f_537710(void) {
  LOAD_REGS();
L_537710: /* 537710: mov eax, 1 */
  eax = 0x1u;
/* 537715: ret  */
  esp += 4; SPILL(); return;
}

void f_537730(void) {
  LOAD_REGS();
L_537730: /* 537730: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 537734: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537736: je 0x537747 */
  if (zf) goto L_537747;
L_537738: /* 537738: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 53773b: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 53773f: test dword ptr [ecx + 0x498], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x498u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537745: jne 0x537749 */
  if (!zf) goto L_537749;
L_537747: /* 537747: xor eax, eax */
  eax = 0;
L_537749: /* 537749: ret  */
  esp += 4; SPILL(); return;
}

void f_537760(void) {
  LOAD_REGS();
L_537760: /* 537760: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 537764: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537766: je 0x537777 */
  if (zf) goto L_537777;
L_537768: /* 537768: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 53776b: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 53776f: test dword ptr [ecx + 0x498], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x498u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537775: jne 0x537779 */
  if (!zf) goto L_537779;
L_537777: /* 537777: xor eax, eax */
  eax = 0;
L_537779: /* 537779: ret  */
  esp += 4; SPILL(); return;
}

void f_537790(void) {
  LOAD_REGS();
L_537790: /* 537790: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 537794: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537796: je 0x5377af */
  if (zf) goto L_5377af;
L_537798: /* 537798: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 53779b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53779d: je 0x5377af */
  if (zf) goto L_5377af;
L_53779f: /* 53779f: nop  */
L_5377a0: /* 5377a0: cmp ecx, 0x6a7078 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6a7078u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5377a6: je 0x5377b1 */
  if (zf) goto L_5377b1;
L_5377a8: /* 5377a8: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 5377ab: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5377ad: jne 0x5377a0 */
  if (!zf) goto L_5377a0;
L_5377af: /* 5377af: xor eax, eax */
  eax = 0;
L_5377b1: /* 5377b1: ret  */
  esp += 4; SPILL(); return;
}

void f_5377d0(void) {
  LOAD_REGS();
L_5377d0: /* 5377d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5377d4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5377d6: je 0x5377ef */
  if (zf) goto L_5377ef;
L_5377d8: /* 5377d8: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 5377db: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5377dd: je 0x5377ef */
  if (zf) goto L_5377ef;
L_5377df: /* 5377df: nop  */
L_5377e0: /* 5377e0: cmp ecx, 0x6a46f0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6a46f0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5377e6: je 0x5377f1 */
  if (zf) goto L_5377f1;
L_5377e8: /* 5377e8: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 5377eb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5377ed: jne 0x5377e0 */
  if (!zf) goto L_5377e0;
L_5377ef: /* 5377ef: xor eax, eax */
  eax = 0;
L_5377f1: /* 5377f1: ret  */
  esp += 4; SPILL(); return;
}

void f_537810(void) {
  LOAD_REGS();
L_537810: /* 537810: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 537814: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537816: je 0x53782f */
  if (zf) goto L_53782f;
L_537818: /* 537818: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 53781b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53781d: je 0x53782f */
  if (zf) goto L_53782f;
L_53781f: /* 53781f: nop  */
L_537820: /* 537820: cmp ecx, 0x6a5bb0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6a5bb0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 537826: je 0x537831 */
  if (zf) goto L_537831;
L_537828: /* 537828: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 53782b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53782d: jne 0x537820 */
  if (!zf) goto L_537820;
L_53782f: /* 53782f: xor eax, eax */
  eax = 0;
L_537831: /* 537831: ret  */
  esp += 4; SPILL(); return;
}

void f_537850(void) {
  LOAD_REGS();
L_537850: /* 537850: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 537854: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537856: je 0x53786f */
  if (zf) goto L_53786f;
L_537858: /* 537858: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 53785b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53785d: je 0x53786f */
  if (zf) goto L_53786f;
L_53785f: /* 53785f: nop  */
L_537860: /* 537860: cmp ecx, 0x6a8a78 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x6a8a78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 537866: je 0x537871 */
  if (zf) goto L_537871;
L_537868: /* 537868: mov ecx, dword ptr [ecx + 0x28] */
  ecx = R32((uint32_t)(ecx + 0x28u));
/* 53786b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53786d: jne 0x537860 */
  if (!zf) goto L_537860;
L_53786f: /* 53786f: xor eax, eax */
  eax = 0;
L_537871: /* 537871: ret  */
  esp += 4; SPILL(); return;
}

void f_537890(void) {
  LOAD_REGS();
L_537890: /* 537890: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 537894: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 537898: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 53789c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53789d: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 5378a1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5378a2: push 0x5f0d80 */
  { uint32_t v = 0x5f0d80u; esp -= 4; W32(esp, v); }
/* 5378a7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5378a8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5378a9: call 0x4e194c */
  esp -= 4; W32(esp, 0x5378aeu); SPILL(); f_4e194c(); if (g_unwind) return; RELOAD();
/* 5378ae: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5378b1: ret  */
  esp += 4; SPILL(); return;
}

void f_5378d0(void) {
  LOAD_REGS();
L_5378d0: /* 5378d0: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 5378d4: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 5378d8: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 5378dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5378dd: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 5378e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5378e2: push 0x69ff70 */
  { uint32_t v = 0x69ff70u; esp -= 4; W32(esp, v); }
/* 5378e7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5378e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5378e9: call 0x4e194c */
  esp -= 4; W32(esp, 0x5378eeu); SPILL(); f_4e194c(); if (g_unwind) return; RELOAD();
/* 5378ee: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5378f1: ret  */
  esp += 4; SPILL(); return;
}

void f_537910(void) {
  LOAD_REGS();
L_537910: /* 537910: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 537911: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 537915: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 537918: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 537919: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 53791c: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 53791f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 537921: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 537924: jle 0x537942 */
  if ((zf || sf != of)) goto L_537942;
L_537926: /* 537926: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 537929: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 53792a: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 53792d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53792f: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 537932: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 537936: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 537938: mov ecx, esi */
  ecx = esi;
/* 53793a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 53793d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x537942u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_537942: /* 537942: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 537944: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 537947: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 537948: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 53794b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53794c: ret  */
  esp += 4; SPILL(); return;
}

void f_537960(void) {
  LOAD_REGS();
L_537960: /* 537960: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 537964: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 537968: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 53796a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53796b: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 53796d: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 53796f: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 537971: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 537972: ret  */
  esp += 4; SPILL(); return;
}

void f_537990(void) {
  LOAD_REGS();
L_537990: /* 537990: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 537991: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 537995: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 537998: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 537999: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 53799c: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 53799f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5379a1: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 5379a4: jle 0x5379c2 */
  if ((zf || sf != of)) goto L_5379c2;
L_5379a6: /* 5379a6: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 5379a9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5379aa: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5379ad: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5379af: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5379b2: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 5379b6: push 0x3c */
  { uint32_t v = 0x3cu; esp -= 4; W32(esp, v); }
/* 5379b8: mov ecx, esi */
  ecx = esi;
/* 5379ba: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 5379bd: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5379c2u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_5379c2: /* 5379c2: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 5379c4: mov eax, edi */
  eax = edi;
/* 5379c6: imul eax, eax, 0x3c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x3cu);
  eax = (uint32_t)r;
  }
/* 5379c9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5379ca: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5379cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5379cd: ret  */
  esp += 4; SPILL(); return;
}

void f_5379e0(void) {
  LOAD_REGS();
L_5379e0: /* 5379e0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5379e1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 5379e5: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 5379e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5379e9: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 5379ec: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 5379ef: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5379f1: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 5379f4: jle 0x537a12 */
  if ((zf || sf != of)) goto L_537a12;
L_5379f6: /* 5379f6: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 5379f9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5379fa: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5379fd: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5379ff: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 537a02: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 537a06: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 537a08: mov ecx, esi */
  ecx = esi;
/* 537a0a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 537a0d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x537a12u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_537a12: /* 537a12: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 537a14: mov eax, edi */
  eax = edi;
/* 537a16: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 537a19: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 537a1a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 537a1c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 537a1d: ret  */
  esp += 4; SPILL(); return;
}

void f_537a30(void) {
  LOAD_REGS();
L_537a30: /* 537a30: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 537a31: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 537a35: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 537a38: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 537a39: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 537a3c: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 537a3f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 537a41: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 537a44: jle 0x537a62 */
  if ((zf || sf != of)) goto L_537a62;
L_537a46: /* 537a46: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 537a49: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 537a4a: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 537a4d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 537a4f: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 537a52: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 537a56: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 537a58: mov ecx, esi */
  ecx = esi;
/* 537a5a: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 537a5d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x537a62u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_537a62: /* 537a62: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 537a64: mov eax, edi */
  eax = edi;
/* 537a66: imul eax, eax, 0x1c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x1cu);
  eax = (uint32_t)r;
  }
/* 537a69: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 537a6a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 537a6c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 537a6d: ret  */
  esp += 4; SPILL(); return;
}

void f_537a80(void) {
  LOAD_REGS();
L_537a80: /* 537a80: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 537a81: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 537a85: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 537a88: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 537a89: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 537a8c: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 537a8f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 537a91: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 537a94: jle 0x537ab2 */
  if ((zf || sf != of)) goto L_537ab2;
L_537a96: /* 537a96: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 537a99: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 537a9a: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 537a9d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 537a9f: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 537aa2: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 537aa6: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 537aa8: mov ecx, esi */
  ecx = esi;
/* 537aaa: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 537aad: call 0x4e4502 */
  esp -= 4; W32(esp, 0x537ab2u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_537ab2: /* 537ab2: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 537ab4: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 537ab7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 537ab8: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 537abb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 537abc: ret  */
  esp += 4; SPILL(); return;
}

void f_537ad0(void) {
  LOAD_REGS();
L_537ad0: /* 537ad0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 537ad1: mov esi, dword ptr [esp + 0xc] */
  esi = R32((uint32_t)(esp + 0xcu));
/* 537ad5: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 537ad8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 537ad9: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 537adc: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 537adf: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 537ae1: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 537ae4: jle 0x537b02 */
  if ((zf || sf != of)) goto L_537b02;
L_537ae6: /* 537ae6: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 537ae9: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 537aea: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 537aed: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 537aef: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 537af2: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 537af6: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 537af8: mov ecx, esi */
  ecx = esi;
/* 537afa: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 537afd: call 0x4e4502 */
  esp -= 4; W32(esp, 0x537b02u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_537b02: /* 537b02: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 537b04: lea ecx, [edi + edi*4] */
  ecx = (uint32_t)(edi + edi*4);
/* 537b07: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 537b08: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 537b0b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 537b0c: ret  */
  esp += 4; SPILL(); return;
}

void f_537b20(void) {
  LOAD_REGS();
L_537b20: /* 537b20: mov eax, 0x69fa30 */
  eax = 0x69fa30u;
/* 537b25: ret  */
  esp += 4; SPILL(); return;
}

void f_537b40(void) {
  LOAD_REGS();
L_537b40: /* 537b40: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 537b44: ret  */
  esp += 4; SPILL(); return;
}

void f_537b60(void) {
  LOAD_REGS();
L_537b60: /* 537b60: mov eax, 0x6a1980 */
  eax = 0x6a1980u;
/* 537b65: ret  */
  esp += 4; SPILL(); return;
}

void f_537b80(void) {
  LOAD_REGS();
L_537b80: /* 537b80: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 537b84: ret  */
  esp += 4; SPILL(); return;
}

void f_537ba0(void) {
  LOAD_REGS();
L_537ba0: /* 537ba0: mov eax, ecx */
  eax = ecx;
/* 537ba2: mov dword ptr [eax], 0x56d890 */
  W32((uint32_t)(eax), 0x56d890u);
/* 537ba8: ret  */
  esp += 4; SPILL(); return;
}

void f_537bc0(void) {
  LOAD_REGS();
L_537bc0: /* 537bc0: mov eax, ecx */
  eax = ecx;
/* 537bc2: or edx, 0xffffffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 537bc5: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 537bc8: mov dword ptr [eax + 0x14], edx */
  W32((uint32_t)(eax + 0x14u), edx);
/* 537bcb: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 537bcf: or edx, 0x4000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 537bd5: xor ecx, ecx */
  ecx = 0;
/* 537bd7: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 537bda: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 537bde: mov dword ptr [eax], 0x56d890 */
  W32((uint32_t)(eax), 0x56d890u);
/* 537be4: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 537be7: mov dword ptr [eax + 0xc], ecx */
  W32((uint32_t)(eax + 0xcu), ecx);
/* 537bea: mov dword ptr [eax + 0x10], ecx */
  W32((uint32_t)(eax + 0x10u), ecx);
/* 537bed: mov dword ptr [eax + 0x20], ecx */
  W32((uint32_t)(eax + 0x20u), ecx);
/* 537bf0: mov dword ptr [eax + 0x20], edx */
  W32((uint32_t)(eax + 0x20u), edx);
/* 537bf3: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 537bf7: mov dword ptr [eax + 0x18], edx */
  W32((uint32_t)(eax + 0x18u), edx);
/* 537bfa: cmp dword ptr [0x69f440], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x69f440u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 537c00: jne 0x537c10 */
  if (!zf) goto L_537c10;
L_537c02: /* 537c02: mov ecx, dword ptr [0x69f454] */
  ecx = R32((uint32_t)(0x69f454u));
/* 537c08: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* 537c0b: mov dword ptr [0x69f454], eax */
  W32((uint32_t)(0x69f454u), eax);
L_537c10: /* 537c10: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_537c40(void) {
  LOAD_REGS();
L_537c40: /* 537c40: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 537c43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 537c44: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 537c48: mov edx, esi */
  edx = esi;
/* 537c4a: and edx, 0xff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 537c50: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537c52: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 537c53: je 0x537c7c */
  if (zf) goto L_537c7c;
L_537c55: /* 537c55: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 537c58: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537c5a: je 0x537c7c */
  if (zf) goto L_537c7c;
L_537c5c: /* 537c5c: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 537c60: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537c62: jne 0x537c7c */
  if (!zf) goto L_537c7c;
L_537c64: /* 537c64: mov eax, dword ptr [eax + edx*4 + 0x98] */
  eax = R32((uint32_t)(eax + edx*4 + 0x98u));
/* 537c6b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537c6d: je 0x537c7c */
  if (zf) goto L_537c7c;
L_537c6f: /* 537c6f: nop  */
L_537c70: /* 537c70: cmp dword ptr [eax + 0x20], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x20u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 537c73: je 0x537c9e */
  if (zf) goto L_537c9e;
L_537c75: /* 537c75: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 537c78: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537c7a: jne 0x537c70 */
  if (!zf) goto L_537c70;
L_537c7c: /* 537c7c: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
/* 537c7f: mov eax, dword ptr [eax + edx*4 + 0x98] */
  eax = R32((uint32_t)(eax + edx*4 + 0x98u));
/* 537c86: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537c88: je 0x537c9c */
  if (zf) goto L_537c9c;
L_537c8a: /* 537c8a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_537c90: /* 537c90: cmp dword ptr [eax + 0x20], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x20u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 537c93: je 0x537c9e */
  if (zf) goto L_537c9e;
L_537c95: /* 537c95: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 537c98: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537c9a: jne 0x537c90 */
  if (!zf) goto L_537c90;
L_537c9c: /* 537c9c: xor eax, eax */
  eax = 0;
L_537c9e: /* 537c9e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 537c9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 537ca0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_537cd0(void) {
  LOAD_REGS();
L_537cd0: /* 537cd0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 537cd4: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 537cd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 537cd9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 537cda: call 0x4e3c15 */
  esp -= 4; W32(esp, 0x537cdfu); SPILL(); f_4e3c15(); if (g_unwind) return; RELOAD();
/* 537cdf: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537ce1: je 0x537cf2 */
  if (zf) goto L_537cf2;
L_537ce3: /* 537ce3: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 537ce6: test dword ptr [ecx + 0x498], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x498u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537cf0: jne 0x537cf4 */
  if (!zf) goto L_537cf4;
L_537cf2: /* 537cf2: xor eax, eax */
  eax = 0;
L_537cf4: /* 537cf4: ret 8 */
  esp += 12; SPILL(); return;
}

void f_537d10(void) {
  LOAD_REGS();
L_537d10: /* 537d10: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 537d14: mov ecx, dword ptr [ecx + 0x24] */
  ecx = R32((uint32_t)(ecx + 0x24u));
/* 537d17: mov eax, edx */
  eax = edx;
/* 537d19: and eax, 0xff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 537d1e: mov eax, dword ptr [ecx + eax*4 + 0x98] */
  eax = R32((uint32_t)(ecx + eax*4 + 0x98u));
/* 537d25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537d27: je 0x537d4e */
  if (zf) goto L_537d4e;
L_537d29: /* 537d29: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_537d30: /* 537d30: cmp dword ptr [eax + 0x20], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x20u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 537d33: je 0x537d3f */
  if (zf) goto L_537d3f;
L_537d35: /* 537d35: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 537d38: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537d3a: jne 0x537d30 */
  if (!zf) goto L_537d30;
L_537d3c: /* 537d3c: ret 4 */
  esp += 8; SPILL(); return;
L_537d3f: /* 537d3f: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 537d42: test dword ptr [ecx + 0x498], 0x40000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x498u))); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537d4c: jne 0x537d50 */
  if (!zf) goto L_537d50;
L_537d4e: /* 537d4e: xor eax, eax */
  eax = 0;
L_537d50: /* 537d50: ret 4 */
  esp += 8; SPILL(); return;
}

void f_537d80(void) {
  LOAD_REGS();
L_537d80: /* 537d80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 537d81: mov ebp, esp */
  ebp = esp;
/* 537d83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 537d85: push 0x558900 */
  { uint32_t v = 0x558900u; esp -= 4; W32(esp, v); }
/* 537d8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 537d90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 537d91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 537d98: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 537d9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 537d9c: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 537d9f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 537da0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 537da3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537da5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 537da6: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 537da9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 537dac: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 537db3: je 0x537ded */
  if (zf) goto L_537ded;
L_537db5: /* 537db5: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
L_537db8: /* 537db8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537dba: je 0x537ded */
  if (zf) goto L_537ded;
L_537dbc: /* 537dbc: cmp eax, 0x6a5680 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a5680u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 537dc1: je 0x537dc8 */
  if (zf) goto L_537dc8;
L_537dc3: /* 537dc3: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 537dc6: jmp 0x537db8 */
  goto L_537db8;
L_537dc8: /* 537dc8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537dca: je 0x537ded */
  if (zf) goto L_537ded;
L_537dcc: /* 537dcc: mov eax, dword ptr [esi + 0x6c] */
  eax = R32((uint32_t)(esi + 0x6cu));
/* 537dcf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 537dd0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 537dd1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 537dd2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 537dd3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 537dd4: call 0x53acf0 */
  esp -= 4; W32(esp, 0x537dd9u); SPILL(); f_53acf0(); if (g_unwind) return; RELOAD();
/* 537dd9: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_537ddc: /* 537ddc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 537ddf: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 537de6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 537de7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 537de8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 537de9: mov esp, ebp */
  esp = ebp;
/* 537deb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 537dec: ret  */
  esp += 4; SPILL(); return;
L_537ded: /* 537ded: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 537df0: test ah, ah */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 537df2: jns 0x537ddc */
  if (!sf) goto L_537ddc;
L_537df4: /* 537df4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 537df6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 537df8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 537df9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 537dfa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 537dfb: call 0x4e43db */
  esp -= 4; W32(esp, 0x537e00u); SPILL(); f_4e43db(); if (g_unwind) return; RELOAD();
/* 537e00: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 537e03: cmp word ptr [eax], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 537e07: je 0x537ddc */
  if (zf) goto L_537ddc;
L_537e09: /* 537e09: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 537e0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 537e0d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 537e0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 537e0f: mov ecx, esi */
  ecx = esi;
/* 537e11: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x537e17u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 537e17: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 537e1a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 537e1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 537e1c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 537e23: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 537e24: mov esp, ebp */
  esp = ebp;
/* 537e26: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 537e27: ret  */
  esp += 4; SPILL(); return;
}

void f_537e28(void) {
  LOAD_REGS();
L_537e28: /* 537e28: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 537e2b: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 537e30: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 537e33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 537e34: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 537e37: call 0x554df6 */
  esp -= 4; W32(esp, 0x537e3cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_537e3c(); return;
}

void f_537e3c(void) {
  LOAD_REGS();
L_537e3c: /* 537e3c: push 0x56d90c */
  { uint32_t v = 0x56d90cu; esp -= 4; W32(esp, v); }
/* 537e41: push 0x5aa848 */
  { uint32_t v = 0x5aa848u; esp -= 4; W32(esp, v); }
/* 537e46: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x537e4bu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 537e4b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 537e4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 537e50: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 537e52: call 0x554df6 */
  esp -= 4; W32(esp, 0x537e57u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_537e57: guest_badaddr(0x537e57); return;
}

void f_537ea0(void) {
  LOAD_REGS();
L_537ea0: /* 537ea0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 537ea4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 537ea6: jl 0x537eba */
  if ((sf != of)) goto L_537eba;
L_537ea8: /* 537ea8: cmp eax, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 537eae: jge 0x537eba */
  if ((sf == of)) goto L_537eba;
L_537eb0: /* 537eb0: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 537eb6: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 537eb9: ret  */
  esp += 4; SPILL(); return;
L_537eba: /* 537eba: xor eax, eax */
  eax = 0;
/* 537ebc: ret  */
  esp += 4; SPILL(); return;
}

void f_537ed0(void) {
  LOAD_REGS();
L_537ed0: /* 537ed0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 537ed1: mov ebp, esp */
  ebp = esp;
/* 537ed3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 537ed5: push 0x558910 */
  { uint32_t v = 0x558910u; esp -= 4; W32(esp, v); }
/* 537eda: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 537ee0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 537ee1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 537ee8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 537eeb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 537eee: xor ecx, ecx */
  ecx = 0;
/* 537ef0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 537ef1: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 537ef4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 537ef5: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 537ef8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 537ef9: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 537efc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 537efe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 537f00: lea edx, [ebp + 0x10] */
  edx = (uint32_t)(ebp + 0x10u);
/* 537f03: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 537f04: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 537f05: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 537f07: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 537f0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 537f0b: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 537f12: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 537f15: call 0x4e3341 */
  esp -= 4; W32(esp, 0x537f1au); SPILL(); f_4e3341(); if (g_unwind) return; RELOAD();
/* 537f1a: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 537f1d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537f1f: jne 0x537f34 */
  if (!zf) goto L_537f34;
L_537f21: /* 537f21: xor eax, eax */
  eax = 0;
/* 537f23: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 537f26: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 537f2d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 537f2e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 537f2f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 537f30: mov esp, ebp */
  esp = ebp;
/* 537f32: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 537f33: ret  */
  esp += 4; SPILL(); return;
L_537f34: /* 537f34: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 537f37: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 537f39: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 537f3a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 537f3d: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x537f42u); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 537f42: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 537f45: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537f47: je 0x537f21 */
  if (zf) goto L_537f21;
L_537f49: /* 537f49: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 537f4c: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* 537f4f: mov edx, eax */
  edx = eax;
/* 537f51: and edx, 0xfff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 537f57: mov esi, dword ptr [edx*4 + 0x69b440] */
  esi = R32((uint32_t)(edx*4 + 0x69b440u));
/* 537f5e: mov edi, edi */
  edi = edi;
L_537f60: /* 537f60: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537f62: je 0x537f21 */
  if (zf) goto L_537f21;
L_537f64: /* 537f64: cmp dword ptr [esi + 0x20], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x20u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 537f67: jne 0x537fc4 */
  if (!zf) goto L_537fc4;
L_537f69: /* 537f69: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537f6b: jne 0x537f73 */
  if (!zf) goto L_537f73;
L_537f6d: /* 537f6d: cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 537f71: je 0x537f8e */
  if (zf) goto L_537f8e;
L_537f73: /* 537f73: cmp dword ptr [esi + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 537f76: je 0x537f8e */
  if (zf) goto L_537f8e;
L_537f78: /* 537f78: cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 537f7c: jne 0x537fc4 */
  if (!zf) goto L_537fc4;
L_537f7e: /* 537f7e: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537f80: je 0x537fc4 */
  if (zf) goto L_537fc4;
L_537f82: /* 537f82: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 537f83: mov ecx, esi */
  ecx = esi;
/* 537f85: call 0x4e33cd */
  esp -= 4; W32(esp, 0x537f8au); SPILL(); f_4e33cd(); if (g_unwind) return; RELOAD();
/* 537f8a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537f8c: je 0x537fc4 */
  if (zf) goto L_537fc4;
L_537f8e: /* 537f8e: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537f90: je 0x537fb1 */
  if (zf) goto L_537fb1;
L_537f92: /* 537f92: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 537f95: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537f97: je 0x537fa5 */
  if (zf) goto L_537fa5;
L_537f99: /* 537f99: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 537f9c: xor eax, eax */
  eax = 0;
/* 537f9e: cmp ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 537fa0: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 537fa3: jmp 0x537fad */
  goto L_537fad;
L_537fa5: /* 537fa5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 537fa6: mov ecx, esi */
  ecx = esi;
/* 537fa8: call 0x4e2b3a */
  esp -= 4; W32(esp, 0x537fadu); SPILL(); f_4e2b3a(); if (g_unwind) return; RELOAD();
L_537fad: /* 537fad: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 537faf: je 0x537fc4 */
  if (zf) goto L_537fc4;
L_537fb1: /* 537fb1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 537fb4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 537fb5: mov eax, esi */
  eax = esi;
/* 537fb7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 537fb8: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 537fbf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 537fc0: mov esp, ebp */
  esp = ebp;
/* 537fc2: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 537fc3: ret  */
  esp += 4; SPILL(); return;
L_537fc4: /* 537fc4: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 537fc7: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 537fca: jmp 0x537f60 */
  goto L_537f60;
}

void f_537fcc(void) {
  LOAD_REGS();
L_537fcc: /* 537fcc: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 537fcf: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 537fd4: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 537fd7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 537fd8: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 537fdb: call 0x554df6 */
  esp -= 4; W32(esp, 0x537fe0u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_537fe0(); return;
}

void f_537fe0(void) {
  LOAD_REGS();
L_537fe0: /* 537fe0: push 0x56d938 */
  { uint32_t v = 0x56d938u; esp -= 4; W32(esp, v); }
/* 537fe5: push 0x5aa940 */
  { uint32_t v = 0x5aa940u; esp -= 4; W32(esp, v); }
/* 537fea: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x537fefu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 537fef: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 537ff2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 537ff4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 537ff6: call 0x554df6 */
  esp -= 4; W32(esp, 0x537ffbu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_537ffb: guest_badaddr(0x537ffb); return;
}

void f_538050(void) {
  LOAD_REGS();
L_538050: /* 538050: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 538051: mov ebp, esp */
  ebp = esp;
/* 538053: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 538055: push 0x558920 */
  { uint32_t v = 0x558920u; esp -= 4; W32(esp, v); }
/* 53805a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 538060: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538061: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 538068: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 538069: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 53806c: test eax, 0x10000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 538071: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 538072: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 538073: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 538074: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 538077: jne 0x53808d */
  if (!zf) goto L_53808d;
L_538079: /* 538079: or eax, 0x10000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 53807e: mov dword ptr [ecx + 0x1c], eax */
  W32((uint32_t)(ecx + 0x1cu), eax);
/* 538081: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 538083: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53808a: call dword ptr [eax + 0x40] */
  { uint32_t t = R32((uint32_t)(eax + 0x40u)); esp -= 4; W32(esp, 0x53808du); SPILL(); call_ind(t); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x53808du: guest_unwind_done(); RELOAD(); goto L_53808d; } return; } RELOAD(); }
L_53808d: /* 53808d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 538090: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 538091: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 538092: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 538099: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53809a: mov esp, ebp */
  esp = ebp;
/* 53809c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53809d: ret  */
  esp += 4; SPILL(); return;
}

void f_53809e(void) {
  LOAD_REGS();
L_53809e: /* 53809e: mov ecx, dword ptr [0x5a0c90] */
  ecx = R32((uint32_t)(0x5a0c90u));
/* 5380a4: push 0x5aaf00 */
  { uint32_t v = 0x5aaf00u; esp -= 4; W32(esp, v); }
/* 5380a9: push 0x2fb */
  { uint32_t v = 0x2fbu; esp -= 4; W32(esp, v); }
/* 5380ae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5380af: call 0x4e30df */
  esp -= 4; W32(esp, 0x5380b4u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 5380b4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5380b7: mov eax, 0x53808d */
  eax = 0x53808du;
/* 5380bc: ret  */
  esp += 4; SPILL(); return;
}

void f_5380e0(void) {
  LOAD_REGS();
L_5380e0: /* 5380e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5380e1: mov ebp, esp */
  ebp = esp;
/* 5380e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5380e5: push 0x558930 */
  { uint32_t v = 0x558930u; esp -= 4; W32(esp, v); }
/* 5380ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5380f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5380f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5380f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5380fb: mov eax, dword ptr [0x69f440] */
  eax = R32((uint32_t)(0x69f440u));
/* 538100: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 538102: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 538103: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 538104: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 538105: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 538108: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53810f: je 0x5381bb */
  if (zf) goto L_5381bb;
L_538115: /* 538115: mov eax, dword ptr [0x6a46d8] */
  eax = R32((uint32_t)(0x6a46d8u));
/* 53811a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53811c: jne 0x5381bb */
  if (!zf) goto L_5381bb;
L_538122: /* 538122: mov eax, dword ptr [0x5a0c90] */
  eax = R32((uint32_t)(0x5a0c90u));
/* 538127: push 0x5aaf58 */
  { uint32_t v = 0x5aaf58u; esp -= 4; W32(esp, v); }
/* 53812c: push 0x2fb */
  { uint32_t v = 0x2fbu; esp -= 4; W32(esp, v); }
/* 538131: mov ebx, 1 */
  ebx = 0x1u;
/* 538136: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538137: mov dword ptr [0x6a46d8], ebx */
  W32((uint32_t)(0x6a46d8u), ebx);
/* 53813d: call 0x4e30df */
  esp -= 4; W32(esp, 0x538142u); SPILL(); f_4e30df(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x5381bbu: guest_unwind_done(); RELOAD(); goto L_5381bb; } return; } RELOAD();
/* 538142: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 538145: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 538148: xor esi, esi */
  esi = 0;
/* 53814a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_538150: /* 538150: cmp esi, dword ptr [0x6a0f08] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(0x6a0f08u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 538156: jge 0x5381bb */
  if ((sf == of)) goto L_5381bb;
L_538158: /* 538158: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 53815e: mov ecx, dword ptr [ecx + esi*4] */
  ecx = R32((uint32_t)(ecx + esi*4));
/* 538161: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 538163: je 0x53816a */
  if (zf) goto L_53816a;
L_538165: /* 538165: call 0x4e2388 */
  esp -= 4; W32(esp, 0x53816au); SPILL(); f_4e2388(); if (g_unwind) { if (g_unwind_ebp == ebp) switch (g_unwind_target) { case 0x5381bbu: guest_unwind_done(); RELOAD(); goto L_5381bb; } return; } RELOAD();
L_53816a: /* 53816a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 53816b: jmp 0x538150 */
  goto L_538150;
L_5381bb: /* 5381bb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5381be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5381bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5381c0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5381c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5381c8: mov esp, ebp */
  esp = ebp;
/* 5381ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5381cb: ret  */
  esp += 4; SPILL(); return;
}

void f_53816d(void) {
  LOAD_REGS();
L_53816d: /* 53816d: mov edx, dword ptr [0x5a0c90] */
  edx = R32((uint32_t)(0x5a0c90u));
/* 538173: push 0x5aafb0 */
  { uint32_t v = 0x5aafb0u; esp -= 4; W32(esp, v); }
/* 538178: push 0x2fb */
  { uint32_t v = 0x2fbu; esp -= 4; W32(esp, v); }
/* 53817d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53817e: call 0x4e30df */
  esp -= 4; W32(esp, 0x538183u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 538183: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 538186: mov eax, 0x5381bb */
  eax = 0x5381bbu;
/* 53818b: ret  */
  esp += 4; SPILL(); return;
}

void f_53818c(void) {
  LOAD_REGS();
L_53818c: /* 53818c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53818f: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 538194: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 538197: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 538198: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 53819b: call 0x554df6 */
  esp -= 4; W32(esp, 0x5381a0u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5381a0(); return;
}

void f_5381a0(void) {
  LOAD_REGS();
L_5381a0: /* 5381a0: push 0x56d978 */
  { uint32_t v = 0x56d978u; esp -= 4; W32(esp, v); }
/* 5381a5: push 0x5ab014 */
  { uint32_t v = 0x5ab014u; esp -= 4; W32(esp, v); }
/* 5381aa: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5381afu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5381af: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5381b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5381b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5381b6: call 0x554df6 */
  esp -= 4; W32(esp, 0x5381bbu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 5381bb: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5381be: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5381bf: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5381c0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5381c7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5381c8: mov esp, ebp */
  esp = ebp;
/* 5381ca: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5381cb: ret  */
  esp += 4; SPILL(); return;
}

void f_538210(void) {
  LOAD_REGS();
L_538210: /* 538210: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 538211: mov esi, ecx */
  esi = ecx;
/* 538213: call 0x4e2031 */
  esp -= 4; W32(esp, 0x538218u); SPILL(); f_4e2031(); if (g_unwind) return; RELOAD();
/* 538218: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53821d: je 0x53822b */
  if (zf) goto L_53822b;
L_53821f: /* 53821f: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 538225: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 538227: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 538228: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x53822bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_53822b: /* 53822b: mov eax, esi */
  eax = esi;
/* 53822d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53822e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_538250(void) {
  LOAD_REGS();
L_538250: /* 538250: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 538251: mov esi, ecx */
  esi = ecx;
/* 538253: call 0x4e2f77 */
  esp -= 4; W32(esp, 0x538258u); SPILL(); f_4e2f77(); if (g_unwind) return; RELOAD();
/* 538258: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53825d: je 0x53826b */
  if (zf) goto L_53826b;
L_53825f: /* 53825f: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 538265: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 538267: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 538268: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x53826bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_53826b: /* 53826b: mov eax, esi */
  eax = esi;
/* 53826d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53826e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_538290(void) {
  LOAD_REGS();
L_538290: /* 538290: inc dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ecx + 0x4u), r);
  }
/* 538293: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 538297: mov edx, dword ptr [eax + 0x40] */
  edx = R32((uint32_t)(eax + 0x40u));
/* 53829a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53829b: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* 53829e: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 5382a0: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* 5382a3: mov dword ptr [ecx + 8], esi */
  W32((uint32_t)(ecx + 0x8u), esi);
/* 5382a6: mov eax, dword ptr [eax + 0x44] */
  eax = R32((uint32_t)(eax + 0x44u));
/* 5382a9: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 5382ab: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 5382ae: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5382af: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5382d0(void) {
  LOAD_REGS();
L_5382d0: /* 5382d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5382d1: mov ebp, esp */
  ebp = esp;
/* 5382d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 5382d5: push 0x558940 */
  { uint32_t v = 0x558940u; esp -= 4; W32(esp, v); }
/* 5382da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5382e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5382e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5382e8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5382eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5382ec: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5382ed: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 5382f0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5382f2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5382f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5382f5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5382f8: mov edi, ecx */
  edi = ecx;
/* 5382fa: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 538301: je 0x5383a9 */
  if (zf) goto L_5383a9;
L_538307: /* 538307: mov ecx, dword ptr [edi + 0x40] */
  ecx = R32((uint32_t)(edi + 0x40u));
L_53830a: /* 53830a: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 53830d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53830f: je 0x538317 */
  if (zf) goto L_538317;
L_538311: /* 538311: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 538313: je 0x538326 */
  if (zf) goto L_538326;
L_538315: /* 538315: jmp 0x53830a */
  goto L_53830a;
L_538317: /* 538317: xor eax, eax */
  eax = 0;
/* 538319: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53831b: sete al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 53831e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 538320: je 0x5383a9 */
  if (zf) goto L_5383a9;
L_538326: /* 538326: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 538328: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 53832b: test ecx, 0x4010 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4010u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 538331: jne 0x5383a9 */
  if (!zf) goto L_5383a9;
L_538333: /* 538333: mov edx, ecx */
  edx = ecx;
/* 538335: or edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 538338: mov dword ptr [eax + 0x1c], edx */
  W32((uint32_t)(eax + 0x1cu), edx);
/* 53833b: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 53833d: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 538340: test ecx, 0x400000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 538346: jne 0x538351 */
  if (!zf) goto L_538351;
L_538348: /* 538348: or ecx, 0x40000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 53834e: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
L_538351: /* 538351: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 538353: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 538356: test ecx, 0x100000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53835c: jne 0x538367 */
  if (!zf) goto L_538367;
L_53835e: /* 53835e: or ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 538364: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
L_538367: /* 538367: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 538369: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 53836c: test ecx, 0x200000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 538372: jne 0x53837d */
  if (!zf) goto L_53837d;
L_538374: /* 538374: or ecx, 0x20000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 53837a: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
L_53837d: /* 53837d: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 53837f: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* 538382: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* 538385: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 538388: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 53838a: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 53838d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53838e: mov ecx, edi */
  ecx = edi;
/* 538390: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 538393: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x538396u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 538396: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 538398: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 53839b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53839c: mov ecx, eax */
  ecx = eax;
/* 53839e: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x5383a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5383a1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 5383a3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5383a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5383a6: call dword ptr [edx + 0x2c] */
  { uint32_t t = R32((uint32_t)(edx + 0x2cu)); esp -= 4; W32(esp, 0x5383a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5383a9: /* 5383a9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5383ac: mov eax, edi */
  eax = edi;
/* 5383ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5383af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5383b0: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5383b7: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5383b8: mov esp, ebp */
  esp = ebp;
/* 5383ba: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5383bb: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5383be(void) {
  LOAD_REGS();
L_5383be: /* 5383be: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 5383c1: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5383c6: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 5383c9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5383ca: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 5383cd: call 0x554df6 */
  esp -= 4; W32(esp, 0x5383d2u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5383d2(); return;
}

void f_5383d2(void) {
  LOAD_REGS();
L_5383d2: /* 5383d2: push 0x56d9cc */
  { uint32_t v = 0x56d9ccu; esp -= 4; W32(esp, v); }
/* 5383d7: push 0x5a376c */
  { uint32_t v = 0x5a376cu; esp -= 4; W32(esp, v); }
/* 5383dc: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5383e1u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5383e1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5383e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5383e6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5383e8: call 0x554df6 */
  esp -= 4; W32(esp, 0x5383edu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5383ed: guest_badaddr(0x5383ed); return;
}

void f_538440(void) {
  LOAD_REGS();
L_538440: /* 538440: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 538441: mov esi, ecx */
  esi = ecx;
/* 538443: call 0x4e41f6 */
  esp -= 4; W32(esp, 0x538448u); SPILL(); f_4e41f6(); if (g_unwind) return; RELOAD();
/* 538448: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53844d: je 0x53845b */
  if (zf) goto L_53845b;
L_53844f: /* 53844f: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 538455: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 538457: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 538458: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x53845bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_53845b: /* 53845b: mov eax, esi */
  eax = esi;
/* 53845d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53845e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_538480(void) {
  LOAD_REGS();
L_538480: /* 538480: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 538481: mov ebp, esp */
  ebp = esp;
/* 538483: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 538485: push 0x558950 */
  { uint32_t v = 0x558950u; esp -= 4; W32(esp, v); }
/* 53848a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 538490: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538491: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 538498: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53849b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53849c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53849d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 5384a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5384a1: mov edi, ecx */
  edi = ecx;
/* 5384a3: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 5384a5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5384a7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5384aa: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5384b1: je 0x538549 */
  if (zf) goto L_538549;
L_5384b7: /* 5384b7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 5384b9: call dword ptr [eax + 0x30] */
  { uint32_t t = R32((uint32_t)(eax + 0x30u)); esp -= 4; W32(esp, 0x5384bcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5384bc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5384be: jne 0x538549 */
  if (!zf) goto L_538549;
L_5384c4: /* 5384c4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5384c6: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 5384c9: test ch, 0x40 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5384cc: je 0x5384d3 */
  if (zf) goto L_5384d3;
L_5384ce: /* 5384ce: test cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5384d1: je 0x538549 */
  if (zf) goto L_538549;
L_5384d3: /* 5384d3: mov ecx, dword ptr [edi + 0x44] */
  ecx = R32((uint32_t)(edi + 0x44u));
/* 5384d6: mov edx, dword ptr [ecx + 0xf8] */
  edx = R32((uint32_t)(ecx + 0xf8u));
/* 5384dc: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 5384df: lea eax, [edx + eax*4] */
  eax = (uint32_t)(edx + eax*4);
/* 5384e2: inc dword ptr [eax] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(eax), r);
  }
/* 5384e4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5384e6: test byte ptr [eax + 0x1c], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1cu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 5384ea: jne 0x538549 */
  if (!zf) goto L_538549;
L_5384ec: /* 5384ec: or dword ptr [eax + 0x1c], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x1cu))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x1cu), r);
  }
/* 5384f0: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 5384f2: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 5384f5: test ecx, 0x400000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5384fb: jne 0x538506 */
  if (!zf) goto L_538506;
L_5384fd: /* 5384fd: or ecx, 0x40000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 538503: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
L_538506: /* 538506: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 538508: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 53850b: test ecx, 0x100000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x100000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 538511: jne 0x53851c */
  if (!zf) goto L_53851c;
L_538513: /* 538513: or ecx, 0x10000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 538519: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
L_53851c: /* 53851c: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 53851e: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* 538521: test ecx, 0x200000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x200000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 538527: jne 0x538532 */
  if (!zf) goto L_538532;
L_538529: /* 538529: or ecx, 0x20000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* 53852f: mov dword ptr [eax + 0x1c], ecx */
  W32((uint32_t)(eax + 0x1cu), ecx);
L_538532: /* 538532: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 538534: mov eax, dword ptr [eax + 0x18] */
  eax = R32((uint32_t)(eax + 0x18u));
/* 538537: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 538539: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 53853c: je 0x538549 */
  if (zf) goto L_538549;
L_53853e: /* 53853e: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 538540: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 538543: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538544: mov ecx, edi */
  ecx = edi;
/* 538546: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x538549u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_538549: /* 538549: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53854c: mov eax, edi */
  eax = edi;
/* 53854e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53854f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 538550: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 538557: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 538558: mov esp, ebp */
  esp = ebp;
/* 53855a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53855b: ret 4 */
  esp += 8; SPILL(); return;
}

void f_53855e(void) {
  LOAD_REGS();
L_53855e: /* 53855e: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 538561: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 538566: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 538569: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53856a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 53856d: call 0x554df6 */
  esp -= 4; W32(esp, 0x538572u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_538572(); return;
}

void f_538572(void) {
  LOAD_REGS();
L_538572: /* 538572: push 0x56da10 */
  { uint32_t v = 0x56da10u; esp -= 4; W32(esp, v); }
/* 538577: push 0x5a376c */
  { uint32_t v = 0x5a376cu; esp -= 4; W32(esp, v); }
/* 53857c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x538581u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 538581: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 538584: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 538586: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 538588: call 0x554df6 */
  esp -= 4; W32(esp, 0x53858du); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53858d: guest_badaddr(0x53858d); return;
}

void f_5385e0(void) {
  LOAD_REGS();
L_5385e0: /* 5385e0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 5385e4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5385e5: mov esi, dword ptr [0x69a758] */
  esi = R32((uint32_t)(0x69a758u));
/* 5385eb: mov eax, ecx */
  eax = ecx;
/* 5385ed: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 5385ef: mov ecx, dword ptr [esi + ecx*4] */
  ecx = R32((uint32_t)(esi + ecx*4));
/* 5385f2: mov esi, dword ptr [eax + 0x40] */
  esi = R32((uint32_t)(eax + 0x40u));
/* 5385f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5385f6: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 5385f9: or esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
/* 5385fc: or edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* 5385fe: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 538601: mov ecx, dword ptr [eax + 0x44] */
  ecx = R32((uint32_t)(eax + 0x44u));
/* 538604: mov edx, dword ptr [edx] */
  edx = R32((uint32_t)(edx));
/* 538606: mov ecx, dword ptr [ecx + 0x104] */
  ecx = R32((uint32_t)(ecx + 0x104u));
/* 53860c: lea ecx, [ecx + edx*4] */
  ecx = (uint32_t)(ecx + edx*4);
/* 53860f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 538611: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 538612: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 538613: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 538615: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 538616: ret 4 */
  esp += 8; SPILL(); return;
}

void f_538630(void) {
  LOAD_REGS();
L_538630: /* 538630: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 538631: mov esi, ecx */
  esi = ecx;
/* 538633: call 0x4e289c */
  esp -= 4; W32(esp, 0x538638u); SPILL(); f_4e289c(); if (g_unwind) return; RELOAD();
/* 538638: test byte ptr [esp + 8], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esp + 0x8u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53863d: je 0x53864b */
  if (zf) goto L_53864b;
L_53863f: /* 53863f: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 538645: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 538647: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 538648: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x53864bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_53864b: /* 53864b: mov eax, esi */
  eax = esi;
/* 53864d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53864e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_538670(void) {
  LOAD_REGS();
L_538670: /* 538670: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 538674: mov ecx, dword ptr [0x69ff60] */
  ecx = R32((uint32_t)(0x69ff60u));
/* 53867a: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 53867d: ret  */
  esp += 4; SPILL(); return;
}

void f_538690(void) {
  LOAD_REGS();
L_538690: /* 538690: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 538691: mov ebp, esp */
  ebp = esp;
/* 538693: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 538695: push 0x558960 */
  { uint32_t v = 0x558960u; esp -= 4; W32(esp, v); }
/* 53869a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 5386a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5386a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 5386a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 5386ab: mov eax, dword ptr [0x6a2928] */
  eax = R32((uint32_t)(0x6a2928u));
/* 5386b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5386b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5386b2: mov esi, ecx */
  esi = ecx;
/* 5386b4: mov ecx, dword ptr [0x6a2924] */
  ecx = R32((uint32_t)(0x6a2924u));
/* 5386ba: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5386bb: mov edi, ecx */
  edi = ecx;
/* 5386bd: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 5386be: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5386c0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 5386c3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5386ca: mov dword ptr [0x6a2924], ecx */
  W32((uint32_t)(0x6a2924u), ecx);
/* 5386d0: jle 0x5386f3 */
  if ((zf || sf != of)) goto L_5386f3;
L_5386d2: /* 5386d2: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 5386d5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 5386d6: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5386d9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 5386db: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 5386de: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 5386e2: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 5386e4: mov ecx, 0x6a2920 */
  ecx = 0x6a2920u;
/* 5386e9: mov dword ptr [0x6a2928], eax */
  W32((uint32_t)(0x6a2928u), eax);
/* 5386ee: call 0x4e4502 */
  esp -= 4; W32(esp, 0x5386f3u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_5386f3: /* 5386f3: mov eax, dword ptr [0x6a2920] */
  eax = R32((uint32_t)(0x6a2920u));
/* 5386f8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5386fb: mov dword ptr [eax + edi*4], esi */
  W32((uint32_t)(eax + edi*4), esi);
/* 5386fe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5386ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 538700: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 538707: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 538708: mov esp, ebp */
  esp = ebp;
/* 53870a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53870b: ret  */
  esp += 4; SPILL(); return;
}

void f_53870c(void) {
  LOAD_REGS();
L_53870c: /* 53870c: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53870f: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 538714: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 538717: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 538718: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 53871b: call 0x554df6 */
  esp -= 4; W32(esp, 0x538720u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_538720(); return;
}

void f_538720(void) {
  LOAD_REGS();
L_538720: /* 538720: push 0x56da54 */
  { uint32_t v = 0x56da54u; esp -= 4; W32(esp, v); }
/* 538725: push 0x5abfbc */
  { uint32_t v = 0x5abfbcu; esp -= 4; W32(esp, v); }
/* 53872a: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53872fu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53872f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 538732: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 538734: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 538736: call 0x554df6 */
  esp -= 4; W32(esp, 0x53873bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53873b: guest_badaddr(0x53873b); return;
}

void f_538770(void) {
  LOAD_REGS();
L_538770: /* 538770: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 538771: mov ebp, esp */
  ebp = esp;
/* 538773: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 538775: push 0x558970 */
  { uint32_t v = 0x558970u; esp -= 4; W32(esp, v); }
/* 53877a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 538780: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538781: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 538788: sub esp, 0x18c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53878e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53878f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 538790: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 538791: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 538794: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 538796: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 538799: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5387a0: jne 0x5387b9 */
  if (!zf) goto L_5387b9;
L_5387a2: /* 5387a2: push 0xcd2 */
  { uint32_t v = 0xcd2u; esp -= 4; W32(esp, v); }
/* 5387a7: push 0x5abfcc */
  { uint32_t v = 0x5abfccu; esp -= 4; W32(esp, v); }
/* 5387ac: push 0x5abfd8 */
  { uint32_t v = 0x5abfd8u; esp -= 4; W32(esp, v); }
/* 5387b1: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5387b6u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5387b6: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5387b9: /* 5387b9: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 5387bc: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 5387c2: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 5387c5: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 5387c8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5387c9: lea eax, [ebp - 0x98] */
  eax = (uint32_t)(ebp + 0xffffff68u);
/* 5387cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5387d0: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x5387d5u); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 5387d5: lea ecx, [ebp - 0x98] */
  ecx = (uint32_t)(ebp + 0xffffff68u);
/* 5387db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5387de: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5387df: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x5387e4u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 5387e4: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5387e7: lea eax, [ebp + eax*2 - 0x98] */
  eax = (uint32_t)(ebp + eax*2 + 0xffffff68u);
/* 5387ee: mov edi, edi */
  edi = edi;
L_5387f0: /* 5387f0: lea edx, [ebp - 0x98] */
  edx = (uint32_t)(ebp + 0xffffff68u);
/* 5387f6: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 5387f8: jbe 0x53880f */
  if ((cf | zf)) goto L_53880f;
L_5387fa: /* 5387fa: mov cx, word ptr [eax - 2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + 0xfffffffeu))) & 0xffffu);
/* 5387fe: cmp cx, 0x30 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x30u);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* 538802: jb 0x53880f */
  if (cf) goto L_53880f;
L_538804: /* 538804: cmp cx, 0x39 */
  { uint16_t a = (uint16_t)((ecx & 0xffffu)); uint16_t b = (uint16_t)(0x39u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 538808: ja 0x53880f */
  if ((!cf && !zf)) goto L_53880f;
L_53880a: /* 53880a: add eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53880d: jmp 0x5387f0 */
  goto L_5387f0;
L_53880f: /* 53880f: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 538812: mov word ptr [eax], 0 */
  W16((uint32_t)(eax), 0x0u);
/* 538817: jmp 0x538820 */
  goto L_538820;
L_538820: /* 538820: mov eax, dword ptr [edi + 0x49c] */
  eax = R32((uint32_t)(edi + 0x49cu));
/* 538826: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538827: lea edx, [ebp - 0x198] */
  edx = (uint32_t)(ebp + 0xfffffe68u);
/* 53882d: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 538830: push 0x5abfe0 */
  { uint32_t v = 0x5abfe0u; esp -= 4; W32(esp, v); }
/* 538835: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 538836: mov dword ptr [edi + 0x49c], ecx */
  W32((uint32_t)(edi + 0x49cu), ecx);
/* 53883c: call 0x4e4183 */
  esp -= 4; W32(esp, 0x538841u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 538841: lea eax, [ebp - 0x198] */
  eax = (uint32_t)(ebp + 0xfffffe68u);
/* 538847: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53884a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53884b: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x538850u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 538850: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 538853: mov ecx, 0x3f */
  ecx = 0x3fu;
/* 538858: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 53885a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53885b: lea edx, [ebp - 0x98] */
  edx = (uint32_t)(ebp + 0xffffff68u);
/* 538861: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 538862: lea eax, [ebp - 0x118] */
  eax = (uint32_t)(ebp + 0xfffffee8u);
/* 538868: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538869: call 0x4e2be4 */
  esp -= 4; W32(esp, 0x53886eu); SPILL(); f_4e2be4(); if (g_unwind) return; RELOAD();
/* 53886e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 538871: lea ecx, [ebp - 0x198] */
  ecx = (uint32_t)(ebp + 0xfffffe68u);
/* 538877: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 538878: lea edx, [ebp - 0x118] */
  edx = (uint32_t)(ebp + 0xfffffee8u);
/* 53887e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53887f: call 0x4e35ad */
  esp -= 4; W32(esp, 0x538884u); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 538884: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 538887: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 538889: lea eax, [ebp - 0x118] */
  eax = (uint32_t)(ebp + 0xfffffee8u);
/* 53888f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538890: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 538891: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 538893: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x538898u); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 538898: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53889b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53889d: jne 0x538820 */
  if (!zf) goto L_538820;
L_53889f: /* 53889f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 5388a2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5388a4: lea ecx, [ebp - 0x118] */
  ecx = (uint32_t)(ebp + 0xfffffee8u);
/* 5388aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5388ab: mov ecx, esi */
  ecx = esi;
/* 5388ad: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x5388b2u); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 5388b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5388b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5388b6: mov eax, esi */
  eax = esi;
/* 5388b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5388b9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5388c0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5388c1: mov esp, ebp */
  esp = ebp;
/* 5388c3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5388c4: ret  */
  esp += 4; SPILL(); return;
}

void f_538819(void) {
  LOAD_REGS();
L_538819: /* 538819: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_538820: /* 538820: mov eax, dword ptr [edi + 0x49c] */
  eax = R32((uint32_t)(edi + 0x49cu));
/* 538826: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538827: lea edx, [ebp - 0x198] */
  edx = (uint32_t)(ebp + 0xfffffe68u);
/* 53882d: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* 538830: push 0x5abfe0 */
  { uint32_t v = 0x5abfe0u; esp -= 4; W32(esp, v); }
/* 538835: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 538836: mov dword ptr [edi + 0x49c], ecx */
  W32((uint32_t)(edi + 0x49cu), ecx);
/* 53883c: call 0x4e4183 */
  esp -= 4; W32(esp, 0x538841u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 538841: lea eax, [ebp - 0x198] */
  eax = (uint32_t)(ebp + 0xfffffe68u);
/* 538847: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53884a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53884b: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x538850u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 538850: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 538853: mov ecx, 0x3f */
  ecx = 0x3fu;
/* 538858: sub ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* 53885a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53885b: lea edx, [ebp - 0x98] */
  edx = (uint32_t)(ebp + 0xffffff68u);
/* 538861: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 538862: lea eax, [ebp - 0x118] */
  eax = (uint32_t)(ebp + 0xfffffee8u);
/* 538868: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538869: call 0x4e2be4 */
  esp -= 4; W32(esp, 0x53886eu); SPILL(); f_4e2be4(); if (g_unwind) return; RELOAD();
/* 53886e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 538871: lea ecx, [ebp - 0x198] */
  ecx = (uint32_t)(ebp + 0xfffffe68u);
/* 538877: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 538878: lea edx, [ebp - 0x118] */
  edx = (uint32_t)(ebp + 0xfffffee8u);
/* 53887e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53887f: call 0x4e35ad */
  esp -= 4; W32(esp, 0x538884u); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 538884: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 538887: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 538889: lea eax, [ebp - 0x118] */
  eax = (uint32_t)(ebp + 0xfffffee8u);
/* 53888f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538890: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 538891: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 538893: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x538898u); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 538898: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53889b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53889d: jne 0x538820 */
  if (!zf) goto L_538820;
L_53889f: /* 53889f: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 5388a2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 5388a4: lea ecx, [ebp - 0x118] */
  ecx = (uint32_t)(ebp + 0xfffffee8u);
/* 5388aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5388ab: mov ecx, esi */
  ecx = esi;
/* 5388ad: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x5388b2u); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 5388b2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5388b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5388b6: mov eax, esi */
  eax = esi;
/* 5388b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5388b9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5388c0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5388c1: mov esp, ebp */
  esp = ebp;
/* 5388c3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5388c4: ret  */
  esp += 4; SPILL(); return;
}

void f_5388c5(void) {
  LOAD_REGS();
L_5388c5: /* 5388c5: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5388c8: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5388cd: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 5388d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5388d1: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 5388d4: call 0x554df6 */
  esp -= 4; W32(esp, 0x5388d9u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_5388d9(); return;
}

void f_5388d9(void) {
  LOAD_REGS();
L_5388d9: /* 5388d9: push 0x56da84 */
  { uint32_t v = 0x56da84u; esp -= 4; W32(esp, v); }
/* 5388de: push 0x5abfe8 */
  { uint32_t v = 0x5abfe8u; esp -= 4; W32(esp, v); }
/* 5388e3: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x5388e8u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 5388e8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5388eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5388ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 5388ef: call 0x554df6 */
  esp -= 4; W32(esp, 0x5388f4u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_5388f4: guest_badaddr(0x5388f4); return;
}

void f_538970(void) {
  LOAD_REGS();
L_538970: /* 538970: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 538971: mov ebp, esp */
  ebp = esp;
/* 538973: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 538975: push 0x558980 */
  { uint32_t v = 0x558980u; esp -= 4; W32(esp, v); }
/* 53897a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 538980: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538981: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 538988: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53898b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53898c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53898d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53898e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 538991: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 538994: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 538996: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 538999: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 5389a0: jne 0x5389c9 */
  if (!zf) goto L_5389c9;
L_5389a2: /* 5389a2: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 5389a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5389a7: jne 0x5389c9 */
  if (!zf) goto L_5389c9;
L_5389a9: /* 5389a9: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 5389ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5389ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5389ae: call 0x4e4160 */
  esp -= 4; W32(esp, 0x5389b3u); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 5389b3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5389b6: mov eax, edi */
  eax = edi;
/* 5389b8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5389bb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5389c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5389c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5389c4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5389c5: mov esp, ebp */
  esp = ebp;
/* 5389c7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5389c8: ret  */
  esp += 4; SPILL(); return;
L_5389c9: /* 5389c9: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 5389cc: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 5389ce: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5389d0: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 5389d3: mov ebx, ecx */
  ebx = ecx;
/* 5389d5: jge 0x5389d9 */
  if ((sf == of)) goto L_5389d9;
L_5389d7: /* 5389d7: neg ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(0 - a);
  ebx = r;
  }
L_5389d9: /* 5389d9: cmp ebx, 0x40 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 5389dc: mov eax, ebx */
  eax = ebx;
/* 5389de: jb 0x5389e6 */
  if (cf) goto L_5389e6;
L_5389e0: /* 5389e0: and eax, 0x3f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 5389e3: add eax, 0x40 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_5389e6: /* 5389e6: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5389e8: setge cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((sf == of)) ? 1 : 0) & 0xffu);
/* 5389eb: dec cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - 1);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 5389ed: lea edx, [ebp - 0x13] */
  edx = (uint32_t)(ebp + 0xffffffedu);
/* 5389f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5389f1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5389f2: mov dword ptr [esi], 0 */
  W32((uint32_t)(esi), 0x0u);
/* 5389f8: and ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 5389fe: add cl, al */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 538a00: mov byte ptr [ebp - 0x13], cl */
  W8((uint32_t)(ebp + 0xffffffedu), (ecx & 0xffu));
/* 538a03: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x538a08u); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 538a08: mov cl, byte ptr [ebp - 0x13] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffedu))) & 0xffu);
/* 538a0b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 538a0e: test cl, 0x40 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x40u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 538a11: je 0x538af5 */
  if (zf) goto L_538af5;
L_538a17: /* 538a17: shr ebx, 6 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 538a1a: cmp ebx, 0x80 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 538a20: jae 0x538a27 */
  if (!cf) goto L_538a27;
L_538a22: /* 538a22: mov byte ptr [ebp - 0x12], bl */
  W8((uint32_t)(ebp + 0xffffffeeu), (ebx & 0xffu));
/* 538a25: jmp 0x538a30 */
  goto L_538a30;
L_538a27: /* 538a27: mov al, bl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 538a29: and al, 0x7f */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a & b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 538a2b: add al, 0x80 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a + b);
  eax = (eax & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 538a2d: mov byte ptr [ebp - 0x12], al */
  W8((uint32_t)(ebp + 0xffffffeeu), (eax & 0xffu));
L_538a30: /* 538a30: lea ecx, [ebp - 0x12] */
  ecx = (uint32_t)(ebp + 0xffffffeeu);
/* 538a33: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 538a34: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 538a35: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x538a3au); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 538a3a: mov al, byte ptr [ebp - 0x12] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffeeu))) & 0xffu);
/* 538a3d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 538a40: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 538a42: jns 0x538ae6 */
  if (!sf) goto L_538ae6;
L_538a48: /* 538a48: shr ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 538a4b: cmp ebx, 0x80 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 538a51: jae 0x538a58 */
  if (!cf) goto L_538a58;
L_538a53: /* 538a53: mov byte ptr [ebp - 0x11], bl */
  W8((uint32_t)(ebp + 0xffffffefu), (ebx & 0xffu));
/* 538a56: jmp 0x538a63 */
  goto L_538a63;
L_538a58: /* 538a58: mov dl, bl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 538a5a: and dl, 0x7f */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a & b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 538a5d: add dl, 0x80 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a + b);
  edx = (edx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 538a60: mov byte ptr [ebp - 0x11], dl */
  W8((uint32_t)(ebp + 0xffffffefu), (edx & 0xffu));
L_538a63: /* 538a63: lea eax, [ebp - 0x11] */
  eax = (uint32_t)(ebp + 0xffffffefu);
/* 538a66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538a67: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 538a68: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x538a6du); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 538a6d: mov al, byte ptr [ebp - 0x11] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffefu))) & 0xffu);
/* 538a70: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 538a73: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 538a75: jns 0x538ad5 */
  if (!sf) goto L_538ad5;
L_538a77: /* 538a77: shr ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 538a7a: cmp ebx, 0x80 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 538a80: jae 0x538a87 */
  if (!cf) goto L_538a87;
L_538a82: /* 538a82: mov byte ptr [ebp + 0xb], bl */
  W8((uint32_t)(ebp + 0xbu), (ebx & 0xffu));
/* 538a85: jmp 0x538a92 */
  goto L_538a92;
L_538a87: /* 538a87: mov cl, bl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((ebx & 0xffu)) & 0xffu);
/* 538a89: and cl, 0x7f */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x7fu);
  uint8_t r = (uint8_t)(a & b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 538a8c: add cl, 0x80 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x80u);
  uint8_t r = (uint8_t)(a + b);
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* 538a8f: mov byte ptr [ebp + 0xb], cl */
  W8((uint32_t)(ebp + 0xbu), (ecx & 0xffu));
L_538a92: /* 538a92: lea edx, [ebp + 0xb] */
  edx = (uint32_t)(ebp + 0xbu);
/* 538a95: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 538a96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 538a97: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x538a9cu); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 538a9c: mov al, byte ptr [ebp + 0xb] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xbu))) & 0xffu);
/* 538a9f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 538aa2: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 538aa4: jns 0x538ac4 */
  if (!sf) goto L_538ac4;
L_538aa6: /* 538aa6: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 538aa9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538aaa: shr ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 538aad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 538aae: mov byte ptr [ebp - 0x14], bl */
  W8((uint32_t)(ebp + 0xffffffecu), (ebx & 0xffu));
/* 538ab1: call 0x4e40e8 */
  esp -= 4; W32(esp, 0x538ab6u); SPILL(); f_4e40e8(); if (g_unwind) return; RELOAD();
/* 538ab6: movzx ecx, byte ptr [ebp - 0x14] */
  ecx = (uint32_t)(R8((uint32_t)(ebp + 0xffffffecu)));
/* 538aba: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 538abd: xor eax, eax */
  eax = 0;
/* 538abf: mov al, byte ptr [ebp + 0xb] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xbu))) & 0xffu);
/* 538ac2: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
L_538ac4: /* 538ac4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 538ac6: and eax, 0x7f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 538ac9: shl edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 538acc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 538ace: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 538ad0: xor eax, eax */
  eax = 0;
/* 538ad2: mov al, byte ptr [ebp - 0x11] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffefu))) & 0xffu);
L_538ad5: /* 538ad5: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 538ad7: and eax, 0x7f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 538ada: shl ecx, 7 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 538add: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 538adf: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 538ae1: xor eax, eax */
  eax = 0;
/* 538ae3: mov al, byte ptr [ebp - 0x12] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffeeu))) & 0xffu);
L_538ae6: /* 538ae6: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 538ae8: mov cl, byte ptr [ebp - 0x13] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xffffffedu))) & 0xffu);
/* 538aeb: and eax, 0x7f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 538aee: shl edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 7;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 538af1: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 538af3: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_538af5: /* 538af5: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 538af7: xor eax, eax */
  eax = 0;
/* 538af9: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 538afb: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 538afe: and eax, 0x3f */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3fu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 538b01: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 538b03: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  sf = ((r) >> 7) & 1;
  }
/* 538b05: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 538b07: jns 0x538b0d */
  if (!sf) goto L_538b0d;
L_538b09: /* 538b09: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 538b0b: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
L_538b0d: /* 538b0d: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 538b10: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 538b12: je 0x538b32 */
  if (zf) goto L_538b32;
L_538b14: /* 538b14: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 538b16: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 538b19: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 538b1b: je 0x538b32 */
  if (zf) goto L_538b32;
L_538b1d: /* 538b1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538b1e: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 538b23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 538b24: push 0x5ac6e4 */
  { uint32_t v = 0x5ac6e4u; esp -= 4; W32(esp, v); }
/* 538b29: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538b2a: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x538b2fu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 538b2f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_538b32: /* 538b32: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 538b35: mov eax, edi */
  eax = edi;
/* 538b37: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 538b38: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 538b39: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 538b40: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 538b41: mov esp, ebp */
  esp = ebp;
/* 538b43: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 538b44: ret  */
  esp += 4; SPILL(); return;
}

void f_538b45(void) {
  LOAD_REGS();
L_538b45: /* 538b45: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 538b48: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 538b4d: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 538b50: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 538b51: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 538b54: call 0x554df6 */
  esp -= 4; W32(esp, 0x538b59u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_538b59(); return;
}

void f_538b59(void) {
  LOAD_REGS();
L_538b59: /* 538b59: push 0x56dacc */
  { uint32_t v = 0x56daccu; esp -= 4; W32(esp, v); }
/* 538b5e: push 0x5ac70c */
  { uint32_t v = 0x5ac70cu; esp -= 4; W32(esp, v); }
/* 538b63: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x538b68u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 538b68: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 538b6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 538b6d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 538b6f: call 0x554df6 */
  esp -= 4; W32(esp, 0x538b74u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_538b74: guest_badaddr(0x538b74); return;
}

void f_538c10(void) {
  LOAD_REGS();
L_538c10: /* 538c10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 538c11: mov ebp, esp */
  ebp = esp;
/* 538c13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 538c15: push 0x558990 */
  { uint32_t v = 0x558990u; esp -= 4; W32(esp, v); }
/* 538c1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 538c20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538c21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 538c28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 538c2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 538c2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 538c2d: mov ebx, ecx */
  ebx = ecx;
/* 538c2f: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* 538c32: xor esi, esi */
  esi = 0;
/* 538c34: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 538c36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 538c37: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 538c3a: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 538c3d: jne 0x538c9e */
  if (!zf) goto L_538c9e;
L_538c3f: /* 538c3f: cmp dword ptr [ebp + 0xc], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 538c42: je 0x538d33 */
  if (zf) goto L_538d33;
L_538c48: /* 538c48: call 0x4e2987 */
  esp -= 4; W32(esp, 0x538c4du); SPILL(); f_4e2987(); if (g_unwind) return; RELOAD();
/* 538c4d: push 0x5ac7d4 */
  { uint32_t v = 0x5ac7d4u; esp -= 4; W32(esp, v); }
/* 538c52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538c53: call 0x4e3387 */
  esp -= 4; W32(esp, 0x538c58u); SPILL(); f_4e3387(); if (g_unwind) return; RELOAD();
/* 538c58: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 538c5b: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 538c5d: jne 0x538d33 */
  if (!zf) goto L_538d33;
L_538c63: /* 538c63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 538c64: push 0x5ac7e4 */
  { uint32_t v = 0x5ac7e4u; esp -= 4; W32(esp, v); }
/* 538c69: push 0x5ac7f0 */
  { uint32_t v = 0x5ac7f0u; esp -= 4; W32(esp, v); }
/* 538c6e: call 0x4e1613 */
  esp -= 4; W32(esp, 0x538c73u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 538c73: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 538c76: mov edx, dword ptr [ebx + 0x20] */
  edx = R32((uint32_t)(ebx + 0x20u));
/* 538c79: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 538c7c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 538c7d: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 538c83: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 538c86: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 538c89: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 538c8a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538c8b: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 538c90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538c91: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x538c96u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 538c96: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 538c99: jmp 0x538d33 */
  goto L_538d33;
L_538c9e: /* 538c9e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 538ca1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 538ca2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538ca3: call 0x4e2176 */
  esp -= 4; W32(esp, 0x538ca8u); SPILL(); f_4e2176(); if (g_unwind) return; RELOAD();
/* 538ca8: mov esi, eax */
  esi = eax;
/* 538caa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 538cad: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 538caf: jne 0x538d05 */
  if (!zf) goto L_538d05;
L_538cb1: /* 538cb1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 538cb4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 538cb6: je 0x538d33 */
  if (zf) goto L_538d33;
L_538cb8: /* 538cb8: call 0x4e2987 */
  esp -= 4; W32(esp, 0x538cbdu); SPILL(); f_4e2987(); if (g_unwind) return; RELOAD();
/* 538cbd: push 0x5ac800 */
  { uint32_t v = 0x5ac800u; esp -= 4; W32(esp, v); }
/* 538cc2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538cc3: call 0x4e3387 */
  esp -= 4; W32(esp, 0x538cc8u); SPILL(); f_4e3387(); if (g_unwind) return; RELOAD();
/* 538cc8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 538ccb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 538ccd: jne 0x538d33 */
  if (!zf) goto L_538d33;
L_538ccf: /* 538ccf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538cd0: push 0x5ac810 */
  { uint32_t v = 0x5ac810u; esp -= 4; W32(esp, v); }
/* 538cd5: push 0x5ac81c */
  { uint32_t v = 0x5ac81cu; esp -= 4; W32(esp, v); }
/* 538cda: call 0x4e1613 */
  esp -= 4; W32(esp, 0x538cdfu); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 538cdf: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 538ce5: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 538ce8: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 538ceb: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 538cf1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 538cf4: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 538cf7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 538cf8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 538cf9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538cfa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 538cfb: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x538d00u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 538d00: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 538d03: jmp 0x538d33 */
  goto L_538d33;
L_538d05: /* 538d05: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 538d08: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 538d0e: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 538d11: mov eax, dword ptr [0x5a0c98] */
  eax = R32((uint32_t)(0x5a0c98u));
/* 538d16: push 0x5ac830 */
  { uint32_t v = 0x5ac830u; esp -= 4; W32(esp, v); }
/* 538d1b: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 538d1e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 538d1f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 538d20: push 0x5ac83c */
  { uint32_t v = 0x5ac83cu; esp -= 4; W32(esp, v); }
/* 538d25: push 0x310 */
  { uint32_t v = 0x310u; esp -= 4; W32(esp, v); }
/* 538d2a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538d2b: call 0x4e30df */
  esp -= 4; W32(esp, 0x538d30u); SPILL(); f_4e30df(); if (g_unwind) return; RELOAD();
/* 538d30: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_538d33: /* 538d33: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 538d36: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 538d37: mov eax, esi */
  eax = esi;
/* 538d39: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 538d3a: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 538d41: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 538d42: mov esp, ebp */
  esp = ebp;
/* 538d44: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 538d45: ret 8 */
  esp += 12; SPILL(); return;
}

void f_538d48(void) {
  LOAD_REGS();
L_538d48: /* 538d48: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 538d4b: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 538d50: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 538d53: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 538d54: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 538d57: call 0x554df6 */
  esp -= 4; W32(esp, 0x538d5cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_538d5c(); return;
}

void f_538d5c(void) {
  LOAD_REGS();
L_538d5c: /* 538d5c: push 0x56daf4 */
  { uint32_t v = 0x56daf4u; esp -= 4; W32(esp, v); }
/* 538d61: push 0x5ac860 */
  { uint32_t v = 0x5ac860u; esp -= 4; W32(esp, v); }
/* 538d66: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x538d6bu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 538d6b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 538d6e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 538d70: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 538d72: call 0x554df6 */
  esp -= 4; W32(esp, 0x538d77u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_538d77: guest_badaddr(0x538d77); return;
}

void f_538de0(void) {
  LOAD_REGS();
L_538de0: /* 538de0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 538de1: mov esi, ecx */
  esi = ecx;
/* 538de3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 538de6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 538de8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 538de9: jg 0x538e02 */
  if ((!zf && sf == of)) goto L_538e02;
L_538deb: /* 538deb: push 0x1a3 */
  { uint32_t v = 0x1a3u; esp -= 4; W32(esp, v); }
/* 538df0: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 538df5: push 0x5a3b64 */
  { uint32_t v = 0x5a3b64u; esp -= 4; W32(esp, v); }
/* 538dfa: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x538dffu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 538dff: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_538e02: /* 538e02: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 538e05: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 538e07: mov edi, dword ptr [ecx + eax*4 - 4] */
  edi = R32((uint32_t)(ecx + eax*4 + 0xfffffffcu));
/* 538e0b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 538e0d: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 538e0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538e0f: mov ecx, esi */
  ecx = esi;
/* 538e11: call 0x4e2edc */
  esp -= 4; W32(esp, 0x538e16u); SPILL(); f_4e2edc(); if (g_unwind) return; RELOAD();
/* 538e16: mov eax, edi */
  eax = edi;
/* 538e18: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 538e19: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 538e1a: ret  */
  esp += 4; SPILL(); return;
}

void f_538e30(void) {
  LOAD_REGS();
L_538e30: /* 538e30: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 538e31: mov ebp, esp */
  ebp = esp;
/* 538e33: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 538e35: push 0x5589a0 */
  { uint32_t v = 0x5589a0u; esp -= 4; W32(esp, v); }
/* 538e3a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 538e40: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538e41: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 538e48: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 538e4b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 538e4c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 538e4d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 538e50: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 538e53: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 538e56: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 538e57: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 538e5a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 538e5c: lea ebx, [esi + 4] */
  ebx = (uint32_t)(esi + 0x4u);
/* 538e5f: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 538e62: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 538e65: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 538e66: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 538e69: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 538e6a: mov ecx, edi */
  ecx = edi;
/* 538e6c: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 538e73: call dword ptr [eax + 0x14] */
  { uint32_t t = R32((uint32_t)(eax + 0x14u)); esp -= 4; W32(esp, 0x538e76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 538e76: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 538e79: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 538e7b: je 0x538eec */
  if (zf) goto L_538eec;
L_538e7d: /* 538e7d: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* 538e80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538e81: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 538e82: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x538e87u); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 538e87: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 538e8a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 538e8d: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 538e90: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 538e92: mov ecx, esi */
  ecx = esi;
/* 538e94: mov dword ptr [ebx], 0 */
  W32((uint32_t)(ebx), 0x0u);
/* 538e9a: call 0x4e4502 */
  esp -= 4; W32(esp, 0x538e9fu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 538e9f: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
L_538ea6: /* 538ea6: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 538ea9: cmp edx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 538eac: jge 0x538f0d */
  if ((sf == of)) goto L_538f0d;
L_538eae: /* 538eae: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 538eb1: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 538eb4: lea ecx, [ebx + 1] */
  ecx = (uint32_t)(ebx + 0x1u);
/* 538eb7: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 538eb9: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 538ebc: jle 0x538eda */
  if ((zf || sf != of)) goto L_538eda;
L_538ebe: /* 538ebe: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 538ec1: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 538ec2: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 538ec5: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 538ec7: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 538eca: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 538ece: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 538ed0: mov ecx, esi */
  ecx = esi;
/* 538ed2: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 538ed5: call 0x4e4502 */
  esp -= 4; W32(esp, 0x538edau); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_538eda: /* 538eda: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 538edc: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 538ede: lea eax, [ecx + ebx*4] */
  eax = (uint32_t)(ecx + ebx*4);
/* 538ee1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 538ee2: mov ecx, edi */
  ecx = edi;
/* 538ee4: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x538ee7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 538ee7: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 538eea: jmp 0x538ea6 */
  goto L_538ea6;
L_538eec: /* 538eec: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 538eed: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 538eee: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x538ef3u); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 538ef3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 538ef6: xor ebx, ebx */
  ebx = 0;
L_538ef8: /* 538ef8: cmp ebx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 538efb: jge 0x538f0d */
  if ((sf == of)) goto L_538f0d;
L_538efd: /* 538efd: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 538eff: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 538f01: lea edx, [ecx + ebx*4] */
  edx = (uint32_t)(ecx + ebx*4);
/* 538f04: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 538f05: mov ecx, edi */
  ecx = edi;
/* 538f07: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x538f0au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 538f0a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 538f0b: jmp 0x538ef8 */
  goto L_538ef8;
L_538f0d: /* 538f0d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 538f10: mov eax, edi */
  eax = edi;
/* 538f12: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 538f13: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 538f14: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 538f1b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 538f1c: mov esp, ebp */
  esp = ebp;
/* 538f1e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 538f1f: ret  */
  esp += 4; SPILL(); return;
}

void f_538f20(void) {
  LOAD_REGS();
L_538f20: /* 538f20: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 538f23: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 538f28: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 538f2b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 538f2c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 538f2f: call 0x554df6 */
  esp -= 4; W32(esp, 0x538f34u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_538f34(); return;
}

void f_538f34(void) {
  LOAD_REGS();
L_538f34: /* 538f34: push 0x56db2c */
  { uint32_t v = 0x56db2cu; esp -= 4; W32(esp, v); }
/* 538f39: push 0x5a376c */
  { uint32_t v = 0x5a376cu; esp -= 4; W32(esp, v); }
/* 538f3e: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x538f43u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 538f43: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 538f46: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 538f48: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 538f4a: call 0x554df6 */
  esp -= 4; W32(esp, 0x538f4fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_538f4f: guest_badaddr(0x538f4f); return;
}

void f_538fa0(void) {
  LOAD_REGS();
L_538fa0: /* 538fa0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 538fa3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 538fa4: xor eax, eax */
  eax = 0;
/* 538fa6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 538fa8: jle 0x538fbe */
  if ((zf || sf != of)) goto L_538fbe;
L_538faa: /* 538faa: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 538fae: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 538fb0: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
L_538fb2: /* 538fb2: cmp dword ptr [ecx], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 538fb4: je 0x538fc1 */
  if (zf) goto L_538fc1;
L_538fb6: /* 538fb6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 538fb7: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 538fba: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 538fbc: jl 0x538fb2 */
  if ((sf != of)) goto L_538fb2;
L_538fbe: /* 538fbe: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_538fc1: /* 538fc1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 538fc2: ret 4 */
  esp += 8; SPILL(); return;
}

void f_538fe0(void) {
  LOAD_REGS();
L_538fe0: /* 538fe0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 538fe3: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 538fe9: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 538fec: ret  */
  esp += 4; SPILL(); return;
}

void f_539000(void) {
  LOAD_REGS();
L_539000: /* 539000: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 539004: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 539006: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 539007: mov ebx, ecx */
  ebx = ecx;
/* 539009: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 53900c: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 53900f: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 539010: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 539012: mov eax, dword ptr [edx + ecx*4] */
  eax = R32((uint32_t)(edx + ecx*4));
/* 539015: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 539018: je 0x53907f */
  if (zf) goto L_53907f;
L_53901a: /* 53901a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53901b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53901c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53901d: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
L_539021: /* 539021: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* 539025: lea esi, [eax + eax*2] */
  esi = (uint32_t)(eax + eax*2);
/* 539028: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 53902a: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 53902d: mov ecx, dword ptr [esi + eax + 4] */
  ecx = R32((uint32_t)(esi + eax + 0x4u));
/* 539031: cmp ecx, dword ptr [edx] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 539033: jne 0x539072 */
  if (!zf) goto L_539072;
L_539035: /* 539035: mov ebp, dword ptr [edi + 4] */
  ebp = R32((uint32_t)(edi + 0x4u));
/* 539038: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* 53903b: lea ecx, [ebp + 1] */
  ecx = (uint32_t)(ebp + 0x1u);
/* 53903e: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 539040: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 539043: jle 0x539061 */
  if ((zf || sf != of)) goto L_539061;
L_539045: /* 539045: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 539048: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 539049: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 53904c: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53904e: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 539051: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 539055: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 539057: mov ecx, edi */
  ecx = edi;
/* 539059: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 53905c: call 0x4e4502 */
  esp -= 4; W32(esp, 0x539061u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_539061: /* 539061: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 539063: lea eax, [ecx + ebp*4] */
  eax = (uint32_t)(ecx + ebp*4);
/* 539066: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 539068: je 0x539072 */
  if (zf) goto L_539072;
L_53906a: /* 53906a: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 53906c: mov ecx, dword ptr [esi + edx + 8] */
  ecx = R32((uint32_t)(esi + edx + 0x8u));
/* 539070: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
L_539072: /* 539072: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 539074: mov eax, dword ptr [esi + edx] */
  eax = R32((uint32_t)(esi + edx));
/* 539077: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53907a: jne 0x539021 */
  if (!zf) goto L_539021;
L_53907c: /* 53907c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53907d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53907e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_53907f: /* 53907f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 539080: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5390c0(void) {
  LOAD_REGS();
L_5390c0: /* 5390c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 5390c4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5390c5: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 5390c7: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5390c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5390ca: je 0x5390d1 */
  if (zf) goto L_5390d1;
L_5390cc: /* 5390cc: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 5390cf: jmp 0x5390d3 */
  goto L_5390d3;
L_5390d1: /* 5390d1: xor eax, eax */
  eax = 0;
L_5390d3: /* 5390d3: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* 5390d6: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 5390d7: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 5390d9: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 5390dc: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 5390df: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5390e2: je 0x5390fc */
  if (zf) goto L_5390fc;
L_5390e4: /* 5390e4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
L_5390e6: /* 5390e6: mov ecx, eax */
  ecx = eax;
/* 5390e8: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 5390eb: mov edi, dword ptr [ecx + edx + 4] */
  edi = R32((uint32_t)(ecx + edx + 0x4u));
/* 5390ef: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5390f1: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5390f3: je 0x539103 */
  if (zf) goto L_539103;
L_5390f5: /* 5390f5: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 5390f7: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 5390fa: jne 0x5390e6 */
  if (!zf) goto L_5390e6;
L_5390fc: /* 5390fc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5390fd: xor eax, eax */
  eax = 0;
/* 5390ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 539100: ret 4 */
  esp += 8; SPILL(); return;
L_539103: /* 539103: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 539106: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 539107: lea eax, [eax + edx + 8] */
  eax = (uint32_t)(eax + edx + 0x8u);
/* 53910b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53910c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_539130(void) {
  LOAD_REGS();
L_539130: /* 539130: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 539131: mov esi, ecx */
  esi = ecx;
/* 539133: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 539136: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 539137: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 53913a: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 53913d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53913f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 539142: jle 0x539160 */
  if ((zf || sf != of)) goto L_539160;
L_539144: /* 539144: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 539147: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 539148: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 53914b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53914d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 539150: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 539154: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 539156: mov ecx, esi */
  ecx = esi;
/* 539158: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 53915b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x539160u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_539160: /* 539160: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 539162: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 539166: mov ecx, edi */
  ecx = edi;
/* 539168: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 53916b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 53916d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 53916f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 539171: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 539174: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 539177: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 53917a: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 53917d: mov edx, dword ptr [edx + 0xc] */
  edx = R32((uint32_t)(edx + 0xcu));
/* 539180: mov eax, edi */
  eax = edi;
/* 539182: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 539183: mov dword ptr [ecx + 0xc], edx */
  W32((uint32_t)(ecx + 0xcu), edx);
/* 539186: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 539187: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5391b0(void) {
  LOAD_REGS();
L_5391b0: /* 5391b0: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 5391b3: mov ecx, dword ptr [0x6a0f04] */
  ecx = R32((uint32_t)(0x6a0f04u));
/* 5391b9: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 5391bc: ret  */
  esp += 4; SPILL(); return;
}

void f_5391d0(void) {
  LOAD_REGS();
L_5391d0: /* 5391d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5391d1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5391d2: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* 5391d6: mov eax, dword ptr [ebp + 4] */
  eax = R32((uint32_t)(ebp + 0x4u));
/* 5391d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 5391db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5391dc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5391dd: mov ebx, ecx */
  ebx = ecx;
/* 5391df: je 0x5391e6 */
  if (zf) goto L_5391e6;
L_5391e1: /* 5391e1: mov eax, dword ptr [ebp] */
  eax = R32((uint32_t)(ebp));
/* 5391e4: jmp 0x5391eb */
  goto L_5391eb;
L_5391e6: /* 5391e6: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_5391eb: /* 5391eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5391ec: call 0x4e1d2a */
  esp -= 4; W32(esp, 0x5391f1u); SPILL(); f_4e1d2a(); if (g_unwind) return; RELOAD();
/* 5391f1: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* 5391f4: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 5391f7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5391fa: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 5391fb: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 5391fd: mov edi, dword ptr [edx + eax*4] */
  edi = R32((uint32_t)(edx + eax*4));
/* 539200: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 539203: je 0x53924a */
  if (zf) goto L_53924a;
L_539205: /* 539205: mov ecx, dword ptr [ebp + 4] */
  ecx = R32((uint32_t)(ebp + 0x4u));
/* 539208: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 53920a: lea esi, [edi + edi*4] */
  esi = (uint32_t)(edi + edi*4);
/* 53920d: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 539210: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 539212: lea eax, [esi + eax + 4] */
  eax = (uint32_t)(esi + eax + 0x4u);
/* 539216: je 0x53921d */
  if (zf) goto L_53921d;
L_539218: /* 539218: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 53921b: jmp 0x539222 */
  goto L_539222;
L_53921d: /* 53921d: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_539222: /* 539222: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 539225: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 539227: je 0x53922d */
  if (zf) goto L_53922d;
L_539229: /* 539229: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 53922b: jmp 0x539232 */
  goto L_539232;
L_53922d: /* 53922d: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_539232: /* 539232: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 539233: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 539234: call 0x4e26df */
  esp -= 4; W32(esp, 0x539239u); SPILL(); f_4e26df(); if (g_unwind) return; RELOAD();
/* 539239: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53923c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53923e: je 0x539253 */
  if (zf) goto L_539253;
L_539240: /* 539240: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 539242: mov edi, dword ptr [esi + ecx] */
  edi = R32((uint32_t)(esi + ecx));
/* 539245: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 539248: jne 0x539205 */
  if (!zf) goto L_539205;
L_53924a: /* 53924a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53924b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53924c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53924d: xor eax, eax */
  eax = 0;
/* 53924f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 539250: ret 4 */
  esp += 8; SPILL(); return;
L_539253: /* 539253: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 539255: lea edx, [edi + edi*4] */
  edx = (uint32_t)(edi + edi*4);
/* 539258: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 539259: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53925a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53925b: lea eax, [eax + edx*4 + 0x10] */
  eax = (uint32_t)(eax + edx*4 + 0x10u);
/* 53925f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 539260: ret 4 */
  esp += 8; SPILL(); return;
}

void f_5392a0(void) {
  LOAD_REGS();
L_5392a0: /* 5392a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5392a1: mov esi, ecx */
  esi = ecx;
/* 5392a3: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 5392a6: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5392ac: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5392ae: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5392af: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 5392b2: push 0x5a3b74 */
  { uint32_t v = 0x5a3b74u; esp -= 4; W32(esp, v); }
/* 5392b7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5392b8: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x5392bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 5392ba: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 5392bd: mov edi, eax */
  edi = eax;
/* 5392bf: xor eax, eax */
  eax = 0;
/* 5392c1: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5392c3: jle 0x5392d4 */
  if ((zf || sf != of)) goto L_5392d4;
L_5392c5: /* 5392c5: mov dword ptr [edi + eax*4], 0xffffffff */
  W32((uint32_t)(edi + eax*4), 0xffffffffu);
/* 5392cc: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 5392cf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 5392d0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5392d2: jl 0x5392c5 */
  if ((sf != of)) goto L_5392c5;
L_5392d4: /* 5392d4: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 5392d7: xor edx, edx */
  edx = 0;
/* 5392d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5392db: jle 0x539304 */
  if ((zf || sf != of)) goto L_539304;
L_5392dd: /* 5392dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5392de: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5392df: xor ebx, ebx */
  ebx = 0;
L_5392e1: /* 5392e1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 5392e3: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 5392e6: mov ebp, dword ptr [ecx + ebx + 4] */
  ebp = R32((uint32_t)(ecx + ebx + 0x4u));
/* 5392ea: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 5392ec: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 5392ed: and eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 5392ef: mov ebp, dword ptr [edi + eax*4] */
  ebp = R32((uint32_t)(edi + eax*4));
/* 5392f2: mov dword ptr [ecx], ebp */
  W32((uint32_t)(ecx), ebp);
/* 5392f4: mov dword ptr [edi + eax*4], edx */
  W32((uint32_t)(edi + eax*4), edx);
/* 5392f7: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 5392fa: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 5392fb: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 5392fe: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 539300: jl 0x5392e1 */
  if ((sf != of)) goto L_5392e1;
L_539302: /* 539302: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 539303: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_539304: /* 539304: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 539307: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 539309: je 0x539317 */
  if (zf) goto L_539317;
L_53930b: /* 53930b: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 539311: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 539313: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 539314: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x539317u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_539317: /* 539317: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 53931a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53931b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53931c: ret  */
  esp += 4; SPILL(); return;
}

void f_539340(void) {
  LOAD_REGS();
L_539340: /* 539340: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 539341: mov esi, ecx */
  esi = ecx;
/* 539343: mov eax, dword ptr [esi + 8] */
  eax = R32((uint32_t)(esi + 0x8u));
/* 539346: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 539347: mov edi, dword ptr [esi + 4] */
  edi = R32((uint32_t)(esi + 0x4u));
/* 53934a: lea ecx, [edi + 1] */
  ecx = (uint32_t)(edi + 0x1u);
/* 53934d: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53934f: mov dword ptr [esi + 4], ecx */
  W32((uint32_t)(esi + 0x4u), ecx);
/* 539352: jle 0x539370 */
  if ((zf || sf != of)) goto L_539370;
L_539354: /* 539354: lea eax, [ecx + ecx*2] */
  eax = (uint32_t)(ecx + ecx*2);
/* 539357: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 539358: and edx, 7 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 53935b: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53935d: sar eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 3;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 539360: lea eax, [eax + ecx + 0x20] */
  eax = (uint32_t)(eax + ecx + 0x20u);
/* 539364: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 539366: mov ecx, esi */
  ecx = esi;
/* 539368: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 53936b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x539370u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
L_539370: /* 539370: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 539372: lea ecx, [edi + edi*2] */
  ecx = (uint32_t)(edi + edi*2);
/* 539375: lea edi, [edx + ecx*4] */
  edi = (uint32_t)(edx + ecx*4);
/* 539378: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53937a: je 0x539390 */
  if (zf) goto L_539390;
L_53937c: /* 53937c: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 539380: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 539382: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 539386: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 539389: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 53938b: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 53938e: jmp 0x539392 */
  goto L_539392;
L_539390: /* 539390: xor edi, edi */
  edi = 0;
L_539392: /* 539392: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 539395: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 539398: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 539399: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 53939b: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 53939e: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 5393a1: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 5393a3: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 5393a6: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 5393a9: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 5393aa: mov dword ptr [edx + eax*4], ecx */
  W32((uint32_t)(edx + eax*4), ecx);
/* 5393ad: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 5393b0: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 5393b3: lea ecx, [eax + eax + 8] */
  ecx = (uint32_t)(eax + eax + 0x8u);
/* 5393b7: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5393b9: jge 0x5393c8 */
  if ((sf == of)) goto L_5393c8;
L_5393bb: /* 5393bb: lea edx, [eax + eax] */
  edx = (uint32_t)(eax + eax);
/* 5393be: mov ecx, esi */
  ecx = esi;
/* 5393c0: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 5393c3: call 0x4e29e1 */
  esp -= 4; W32(esp, 0x5393c8u); SPILL(); f_4e29e1(); if (g_unwind) return; RELOAD();
L_5393c8: /* 5393c8: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* 5393cb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5393cc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5393cd: ret 8 */
  esp += 12; SPILL(); return;
}

void f_539400(void) {
  LOAD_REGS();
L_539400: /* 539400: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 539401: mov esi, ecx */
  esi = ecx;
/* 539403: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 539406: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 53940c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53940e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53940f: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 539412: push 0x5a3b74 */
  { uint32_t v = 0x5a3b74u; esp -= 4; W32(esp, v); }
/* 539417: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 539418: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x53941au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53941a: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 53941d: mov edi, eax */
  edi = eax;
/* 53941f: xor eax, eax */
  eax = 0;
/* 539421: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 539423: jle 0x539434 */
  if ((zf || sf != of)) goto L_539434;
L_539425: /* 539425: mov dword ptr [edi + eax*4], 0xffffffff */
  W32((uint32_t)(edi + eax*4), 0xffffffffu);
/* 53942c: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 53942f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 539430: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 539432: jl 0x539425 */
  if ((sf != of)) goto L_539425;
L_539434: /* 539434: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 539437: xor edx, edx */
  edx = 0;
/* 539439: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 53943b: jle 0x53946f */
  if ((zf || sf != of)) goto L_53946f;
L_53943d: /* 53943d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53943e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53943f: xor ebp, ebp */
  ebp = 0;
L_539441: /* 539441: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 539443: mov eax, dword ptr [ecx + ebp + 4] */
  eax = R32((uint32_t)(ecx + ebp + 0x4u));
/* 539447: add ecx, ebp */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 539449: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53944b: je 0x539452 */
  if (zf) goto L_539452;
L_53944d: /* 53944d: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 539450: jmp 0x539454 */
  goto L_539454;
L_539452: /* 539452: xor ebx, ebx */
  ebx = 0;
L_539454: /* 539454: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 539457: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 539458: and eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 53945a: mov ebx, dword ptr [edi + eax*4] */
  ebx = R32((uint32_t)(edi + eax*4));
/* 53945d: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 53945f: mov dword ptr [edi + eax*4], edx */
  W32((uint32_t)(edi + eax*4), edx);
/* 539462: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 539465: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 539466: add ebp, 0x10 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 539469: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53946b: jl 0x539441 */
  if ((sf != of)) goto L_539441;
L_53946d: /* 53946d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53946e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_53946f: /* 53946f: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 539472: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 539474: je 0x539482 */
  if (zf) goto L_539482;
L_539476: /* 539476: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 53947c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53947e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53947f: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x539482u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_539482: /* 539482: mov dword ptr [esi + 0xc], edi */
  W32((uint32_t)(esi + 0xcu), edi);
/* 539485: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 539486: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 539487: ret  */
  esp += 4; SPILL(); return;
}

void f_5394c0(void) {
  LOAD_REGS();
L_5394c0: /* 5394c0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5394c1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5394c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5394c3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 5394c7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5394c9: mov esi, ecx */
  esi = ecx;
/* 5394cb: jge 0x5394e4 */
  if ((sf == of)) goto L_5394e4;
L_5394cd: /* 5394cd: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 5394d2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5394d7: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 5394dc: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5394e1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5394e1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5394e4: /* 5394e4: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5394e7: jle 0x539500 */
  if ((zf || sf != of)) goto L_539500;
L_5394e9: /* 5394e9: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 5394ee: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5394f3: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 5394f8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5394fdu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5394fd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_539500: /* 539500: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 539504: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 539507: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 53950a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53950c: jle 0x539525 */
  if ((zf || sf != of)) goto L_539525;
L_53950e: /* 53950e: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 539513: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 539518: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 53951d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x539522u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 539522: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_539525: /* 539525: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 539527: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 539528: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 539529: mov ecx, esi */
  ecx = esi;
/* 53952b: call 0x4e438b */
  esp -= 4; W32(esp, 0x539530u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 539530: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 539531: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 539532: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 539533: ret 8 */
  esp += 12; SPILL(); return;
}

void f_539560(void) {
  LOAD_REGS();
L_539560: /* 539560: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 539561: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 539562: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 539563: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 539567: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 539569: mov esi, ecx */
  esi = ecx;
/* 53956b: jge 0x539584 */
  if ((sf == of)) goto L_539584;
L_53956d: /* 53956d: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 539572: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 539577: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 53957c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x539581u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 539581: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_539584: /* 539584: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 539587: jle 0x5395a0 */
  if ((zf || sf != of)) goto L_5395a0;
L_539589: /* 539589: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 53958e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 539593: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 539598: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53959du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53959d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5395a0: /* 5395a0: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 5395a4: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 5395a7: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 5395aa: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5395ac: jle 0x5395c5 */
  if ((zf || sf != of)) goto L_5395c5;
L_5395ae: /* 5395ae: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 5395b3: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5395b8: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 5395bd: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5395c2u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5395c2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5395c5: /* 5395c5: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 5395c7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5395c8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5395c9: mov ecx, esi */
  ecx = esi;
/* 5395cb: call 0x4e438b */
  esp -= 4; W32(esp, 0x5395d0u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 5395d0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5395d1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5395d2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5395d3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_539600(void) {
  LOAD_REGS();
L_539600: /* 539600: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 539601: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 539602: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 539603: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 539604: mov esi, ecx */
  esi = ecx;
/* 539606: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 539609: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 53960f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 539611: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 539614: push 0x5a3b74 */
  { uint32_t v = 0x5a3b74u; esp -= 4; W32(esp, v); }
/* 539619: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53961a: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x53961cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53961c: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 53961f: mov ebp, eax */
  ebp = eax;
/* 539621: xor ebx, ebx */
  ebx = 0;
/* 539623: xor eax, eax */
  eax = 0;
/* 539625: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 539627: jle 0x539640 */
  if ((zf || sf != of)) goto L_539640;
L_539629: /* 539629: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_539630: /* 539630: mov dword ptr [ebp + eax*4], 0xffffffff */
  W32((uint32_t)(ebp + eax*4), 0xffffffffu);
/* 539638: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 53963b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 53963c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53963e: jl 0x539630 */
  if ((sf != of)) goto L_539630;
L_539640: /* 539640: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 539643: jle 0x539697 */
  if ((zf || sf != of)) goto L_539697;
L_539645: /* 539645: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 539649: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53964a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_539650: /* 539650: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 539652: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 539656: mov eax, dword ptr [edi + ecx + 8] */
  eax = R32((uint32_t)(edi + ecx + 0x8u));
/* 53965a: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 53965c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53965e: je 0x539665 */
  if (zf) goto L_539665;
L_539660: /* 539660: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 539663: jmp 0x53966a */
  goto L_53966a;
L_539665: /* 539665: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_53966a: /* 53966a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53966b: call 0x4e1d2a */
  esp -= 4; W32(esp, 0x539670u); SPILL(); f_4e1d2a(); if (g_unwind) return; RELOAD();
/* 539670: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 539673: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 539676: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 539677: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 539679: mov edx, dword ptr [ebp + eax*4] */
  edx = R32((uint32_t)(ebp + eax*4));
/* 53967d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 539681: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 539683: mov dword ptr [ebp + eax*4], ebx */
  W32((uint32_t)(ebp + eax*4), ebx);
/* 539687: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 53968a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 53968b: add ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 53968e: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 539690: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 539694: jl 0x539650 */
  if ((sf != of)) goto L_539650;
L_539696: /* 539696: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_539697: /* 539697: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 53969a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53969c: je 0x5396aa */
  if (zf) goto L_5396aa;
L_53969e: /* 53969e: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5396a4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 5396a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5396a7: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x5396aau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_5396aa: /* 5396aa: mov dword ptr [esi + 0xc], ebp */
  W32((uint32_t)(esi + 0xcu), ebp);
/* 5396ad: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5396ae: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5396af: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5396b0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5396b1: ret  */
  esp += 4; SPILL(); return;
}

void f_5396f0(void) {
  LOAD_REGS();
L_5396f0: /* 5396f0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5396f1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5396f2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 5396f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5396f4: mov esi, ecx */
  esi = ecx;
/* 5396f6: mov eax, dword ptr [esi + 0x10] */
  eax = R32((uint32_t)(esi + 0x10u));
/* 5396f9: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 5396ff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 539701: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 539704: push 0x5a3b74 */
  { uint32_t v = 0x5a3b74u; esp -= 4; W32(esp, v); }
/* 539709: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53970a: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x53970cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53970c: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 53970f: mov ebp, eax */
  ebp = eax;
/* 539711: xor ebx, ebx */
  ebx = 0;
/* 539713: xor eax, eax */
  eax = 0;
/* 539715: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 539717: jle 0x539730 */
  if ((zf || sf != of)) goto L_539730;
L_539719: /* 539719: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_539720: /* 539720: mov dword ptr [ebp + eax*4], 0xffffffff */
  W32((uint32_t)(ebp + eax*4), 0xffffffffu);
/* 539728: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 53972b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 53972c: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53972e: jl 0x539720 */
  if ((sf != of)) goto L_539720;
L_539730: /* 539730: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 539733: jle 0x539787 */
  if ((zf || sf != of)) goto L_539787;
L_539735: /* 539735: mov dword ptr [esp + 0xc], ebx */
  W32((uint32_t)(esp + 0xcu), ebx);
/* 539739: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53973a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_539740: /* 539740: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 539742: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 539746: mov eax, dword ptr [edi + ecx + 8] */
  eax = R32((uint32_t)(edi + ecx + 0x8u));
/* 53974a: add edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 53974c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53974e: je 0x539755 */
  if (zf) goto L_539755;
L_539750: /* 539750: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 539753: jmp 0x53975a */
  goto L_53975a;
L_539755: /* 539755: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_53975a: /* 53975a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53975b: call 0x4e1d2a */
  esp -= 4; W32(esp, 0x539760u); SPILL(); f_4e1d2a(); if (g_unwind) return; RELOAD();
/* 539760: mov ecx, dword ptr [esi + 0x10] */
  ecx = R32((uint32_t)(esi + 0x10u));
/* 539763: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 539766: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 539767: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 539769: mov edx, dword ptr [ebp + eax*4] */
  edx = R32((uint32_t)(ebp + eax*4));
/* 53976d: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 539771: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 539773: mov dword ptr [ebp + eax*4], ebx */
  W32((uint32_t)(ebp + eax*4), ebx);
/* 539777: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 53977a: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 53977b: add ecx, 0x1c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 53977e: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 539780: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 539784: jl 0x539740 */
  if ((sf != of)) goto L_539740;
L_539786: /* 539786: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_539787: /* 539787: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 53978a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53978c: je 0x53979a */
  if (zf) goto L_53979a;
L_53978e: /* 53978e: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 539794: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 539796: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 539797: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x53979au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_53979a: /* 53979a: mov dword ptr [esi + 0xc], ebp */
  W32((uint32_t)(esi + 0xcu), ebp);
/* 53979d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53979e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53979f: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5397a0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 5397a1: ret  */
  esp += 4; SPILL(); return;
}

void f_5397e0(void) {
  LOAD_REGS();
L_5397e0: /* 5397e0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5397e1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5397e2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5397e3: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 5397e7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 5397e9: mov esi, ecx */
  esi = ecx;
/* 5397eb: jge 0x539804 */
  if ((sf == of)) goto L_539804;
L_5397ed: /* 5397ed: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 5397f2: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5397f7: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 5397fc: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x539801u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 539801: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_539804: /* 539804: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 539807: jle 0x539820 */
  if ((zf || sf != of)) goto L_539820;
L_539809: /* 539809: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 53980e: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 539813: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 539818: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53981du); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53981d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_539820: /* 539820: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 539824: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 539827: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 53982a: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53982c: jle 0x539845 */
  if ((zf || sf != of)) goto L_539845;
L_53982e: /* 53982e: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 539833: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 539838: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 53983d: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x539842u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 539842: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_539845: /* 539845: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 539847: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 539848: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 539849: mov ecx, esi */
  ecx = esi;
/* 53984b: call 0x4e438b */
  esp -= 4; W32(esp, 0x539850u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 539850: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 539851: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 539852: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 539853: ret 8 */
  esp += 12; SPILL(); return;
}

void f_539880(void) {
  LOAD_REGS();
L_539880: /* 539880: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 539881: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 539882: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 539883: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* 539887: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 539889: mov esi, ecx */
  esi = ecx;
/* 53988b: jge 0x5398a4 */
  if ((sf == of)) goto L_5398a4;
L_53988d: /* 53988d: push 0x218 */
  { uint32_t v = 0x218u; esp -= 4; W32(esp, v); }
/* 539892: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 539897: push 0x5a3844 */
  { uint32_t v = 0x5a3844u; esp -= 4; W32(esp, v); }
/* 53989c: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5398a1u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5398a1: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5398a4: /* 5398a4: cmp edi, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5398a7: jle 0x5398c0 */
  if ((zf || sf != of)) goto L_5398c0;
L_5398a9: /* 5398a9: push 0x219 */
  { uint32_t v = 0x219u; esp -= 4; W32(esp, v); }
/* 5398ae: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5398b3: push 0x5a3830 */
  { uint32_t v = 0x5a3830u; esp -= 4; W32(esp, v); }
/* 5398b8: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5398bdu); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5398bd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5398c0: /* 5398c0: mov ebx, dword ptr [esp + 0x14] */
  ebx = R32((uint32_t)(esp + 0x14u));
/* 5398c4: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 5398c7: lea eax, [edi + ebx] */
  eax = (uint32_t)(edi + ebx);
/* 5398ca: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 5398cc: jle 0x5398e5 */
  if ((zf || sf != of)) goto L_5398e5;
L_5398ce: /* 5398ce: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 5398d3: push 0x5a36e0 */
  { uint32_t v = 0x5a36e0u; esp -= 4; W32(esp, v); }
/* 5398d8: push 0x5a3814 */
  { uint32_t v = 0x5a3814u; esp -= 4; W32(esp, v); }
/* 5398dd: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x5398e2u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 5398e2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5398e5: /* 5398e5: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 5398e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 5398e8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 5398e9: mov ecx, esi */
  ecx = esi;
/* 5398eb: call 0x4e438b */
  esp -= 4; W32(esp, 0x5398f0u); SPILL(); f_4e438b(); if (g_unwind) return; RELOAD();
/* 5398f0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5398f1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5398f2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5398f3: ret 8 */
  esp += 12; SPILL(); return;
}

void f_539920(void) {
  LOAD_REGS();
L_539920: /* 539920: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 539924: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 539928: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 53992c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53992d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53992e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53992f: push 0x6a0f20 */
  { uint32_t v = 0x6a0f20u; esp -= 4; W32(esp, v); }
/* 539934: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x539939u); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 539939: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53993c: ret  */
  esp += 4; SPILL(); return;
}

void f_539950(void) {
  LOAD_REGS();
L_539950: /* 539950: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 539951: mov ebp, esp */
  ebp = esp;
/* 539953: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 539955: push 0x5589b0 */
  { uint32_t v = 0x5589b0u; esp -= 4; W32(esp, v); }
/* 53995a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 539960: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 539961: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 539968: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53996b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53996c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53996d: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 539970: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 539972: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 539973: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 539976: mov edi, ecx */
  edi = ecx;
/* 539978: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53997f: jne 0x539988 */
  if (!zf) goto L_539988;
L_539981: /* 539981: call 0x4e292d */
  esp -= 4; W32(esp, 0x539986u); SPILL(); f_4e292d(); if (g_unwind) return; RELOAD();
/* 539986: mov esi, eax */
  esi = eax;
L_539988: /* 539988: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 53998b: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53998d: je 0x5399cd */
  if (zf) goto L_5399cd;
L_53998f: /* 53998f: mov word ptr [esi], 0 */
  W16((uint32_t)(esi), 0x0u);
/* 539994: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* 539997: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 539999: je 0x5399b5 */
  if (zf) goto L_5399b5;
L_53999b: /* 53999b: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53999e: je 0x5399b5 */
  if (zf) goto L_5399b5;
L_5399a0: /* 5399a0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5399a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 5399a2: call 0x4e2cde */
  esp -= 4; W32(esp, 0x5399a7u); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
/* 5399a7: push 0x5aa454 */
  { uint32_t v = 0x5aa454u; esp -= 4; W32(esp, v); }
/* 5399ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5399ad: call 0x4e35ad */
  esp -= 4; W32(esp, 0x5399b2u); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 5399b2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_5399b5: /* 5399b5: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 5399b8: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 5399be: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 5399c1: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 5399c4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 5399c5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5399c6: call 0x4e35ad */
  esp -= 4; W32(esp, 0x5399cbu); SPILL(); f_4e35ad(); if (g_unwind) return; RELOAD();
/* 5399cb: jmp 0x5399d8 */
  goto L_5399d8;
L_5399cd: /* 5399cd: push 0x5aa458 */
  { uint32_t v = 0x5aa458u; esp -= 4; W32(esp, v); }
/* 5399d2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 5399d3: call 0x4e4183 */
  esp -= 4; W32(esp, 0x5399d8u); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
L_5399d8: /* 5399d8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 5399db: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 5399de: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 5399df: mov eax, esi */
  eax = esi;
/* 5399e1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 5399e2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 5399e9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 5399ea: mov esp, ebp */
  esp = ebp;
/* 5399ec: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 5399ed: ret 8 */
  esp += 12; SPILL(); return;
}

void f_5399f0(void) {
  LOAD_REGS();
L_5399f0: /* 5399f0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 5399f3: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 5399f8: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 5399fb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 5399fc: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 5399ff: call 0x554df6 */
  esp -= 4; W32(esp, 0x539a04u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_539a04(); return;
}

void f_539a04(void) {
  LOAD_REGS();
L_539a04: /* 539a04: push 0x56db44 */
  { uint32_t v = 0x56db44u; esp -= 4; W32(esp, v); }
/* 539a09: push 0x5aa464 */
  { uint32_t v = 0x5aa464u; esp -= 4; W32(esp, v); }
/* 539a0e: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x539a13u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 539a13: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 539a16: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 539a18: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 539a1a: call 0x554df6 */
  esp -= 4; W32(esp, 0x539a1fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_539a1f: guest_badaddr(0x539a1f); return;
}

void f_539a60(void) {
  LOAD_REGS();
L_539a60: /* 539a60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 539a61: mov ebp, esp */
  ebp = esp;
/* 539a63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 539a65: push 0x5589c0 */
  { uint32_t v = 0x5589c0u; esp -= 4; W32(esp, v); }
/* 539a6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 539a70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 539a71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 539a78: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 539a7b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 539a7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 539a7d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 539a80: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 539a82: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 539a83: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 539a86: mov edi, ecx */
  edi = ecx;
/* 539a88: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 539a8f: jne 0x539a98 */
  if (!zf) goto L_539a98;
L_539a91: /* 539a91: call 0x4e292d */
  esp -= 4; W32(esp, 0x539a96u); SPILL(); f_4e292d(); if (g_unwind) return; RELOAD();
/* 539a96: mov esi, eax */
  esi = eax;
L_539a98: /* 539a98: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 539a9a: je 0x539ad5 */
  if (zf) goto L_539ad5;
L_539a9c: /* 539a9c: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 539a9f: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 539aa2: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 539aa8: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 539aab: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 539aae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 539aaf: push 0x5aa46c */
  { uint32_t v = 0x5aa46cu; esp -= 4; W32(esp, v); }
/* 539ab4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 539ab5: call 0x4e4183 */
  esp -= 4; W32(esp, 0x539abau); SPILL(); f_4e4183(); if (g_unwind) return; RELOAD();
/* 539aba: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 539abd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 539abe: call 0x4e19f1 */
  esp -= 4; W32(esp, 0x539ac3u); SPILL(); f_4e19f1(); if (g_unwind) return; RELOAD();
/* 539ac3: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 539ac6: lea eax, [esi + eax*2] */
  eax = (uint32_t)(esi + eax*2);
/* 539ac9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 539aca: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 539acc: mov ecx, edi */
  ecx = edi;
/* 539ace: call 0x4e2cde */
  esp -= 4; W32(esp, 0x539ad3u); SPILL(); f_4e2cde(); if (g_unwind) return; RELOAD();
/* 539ad3: jmp 0x539ae3 */
  goto L_539ae3;
L_539ad5: /* 539ad5: push 0x5aa474 */
  { uint32_t v = 0x5aa474u; esp -= 4; W32(esp, v); }
/* 539ada: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 539adb: call 0x4e27d9 */
  esp -= 4; W32(esp, 0x539ae0u); SPILL(); f_4e27d9(); if (g_unwind) return; RELOAD();
/* 539ae0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_539ae3: /* 539ae3: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 539ae6: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 539ae7: mov eax, esi */
  eax = esi;
/* 539ae9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 539aea: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 539af1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 539af2: mov esp, ebp */
  esp = ebp;
/* 539af4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 539af5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_539af8(void) {
  LOAD_REGS();
L_539af8: /* 539af8: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 539afb: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 539b00: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 539b03: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 539b04: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 539b07: call 0x554df6 */
  esp -= 4; W32(esp, 0x539b0cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_539b0c(); return;
}

void f_539b0c(void) {
  LOAD_REGS();
L_539b0c: /* 539b0c: push 0x56db78 */
  { uint32_t v = 0x56db78u; esp -= 4; W32(esp, v); }
/* 539b11: push 0x5aa480 */
  { uint32_t v = 0x5aa480u; esp -= 4; W32(esp, v); }
/* 539b16: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x539b1bu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 539b1b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 539b1e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 539b20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 539b22: call 0x554df6 */
  esp -= 4; W32(esp, 0x539b27u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_539b27: guest_badaddr(0x539b27); return;
}

void f_539b70(void) {
  LOAD_REGS();
L_539b70: /* 539b70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 539b71: mov ebp, esp */
  ebp = esp;
/* 539b73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 539b75: push 0x5589d0 */
  { uint32_t v = 0x5589d0u; esp -= 4; W32(esp, v); }
/* 539b7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 539b80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 539b81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 539b88: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 539b8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 539b8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 539b8d: mov esi, ecx */
  esi = ecx;
/* 539b8f: cmp dword ptr [esi + 4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 539b93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 539b94: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 539b97: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 539b9a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 539ba1: je 0x539c49 */
  if (zf) goto L_539c49;
L_539ba7: /* 539ba7: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 539baa: test eax, 0x800000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 539baf: jne 0x539c49 */
  if (!zf) goto L_539c49;
L_539bb5: /* 539bb5: and eax, 0x7f7fffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7f7fffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 539bba: or eax, 0x800000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 539bbf: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 539bc2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 539bc4: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x539bc7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 539bc7: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 539bca: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 539bcc: js 0x539bec */
  if (sf) goto L_539bec;
L_539bce: /* 539bce: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 539bd0: mov ecx, esi */
  ecx = esi;
/* 539bd2: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x539bd7u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 539bd7: mov ecx, dword ptr [0x5a0c94] */
  ecx = R32((uint32_t)(0x5a0c94u));
/* 539bdd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 539bde: push 0x5aa488 */
  { uint32_t v = 0x5aa488u; esp -= 4; W32(esp, v); }
/* 539be3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 539be4: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x539be9u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 539be9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_539bec: /* 539bec: mov eax, 1 */
  eax = 0x1u;
/* 539bf1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 539bf4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 539bfb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 539bfc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 539bfd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 539bfe: mov esp, ebp */
  esp = ebp;
/* 539c00: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 539c01: ret  */
  esp += 4; SPILL(); return;
L_539c49: /* 539c49: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 539c4c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 539c4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 539c4e: xor eax, eax */
  eax = 0;
/* 539c50: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 539c57: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 539c58: mov esp, ebp */
  esp = ebp;
/* 539c5a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 539c5b: ret  */
  esp += 4; SPILL(); return;
}

void f_539c02(void) {
  LOAD_REGS();
L_539c02: /* 539c02: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 539c05: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 539c0a: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 539c0d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 539c0e: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 539c11: call 0x554df6 */
  esp -= 4; W32(esp, 0x539c16u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_539c16(); return;
}

void f_539c16(void) {
  LOAD_REGS();
L_539c16: /* 539c16: push 0x56dbac */
  { uint32_t v = 0x56dbacu; esp -= 4; W32(esp, v); }
/* 539c1b: push 0x5aa4c0 */
  { uint32_t v = 0x5aa4c0u; esp -= 4; W32(esp, v); }
/* 539c20: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x539c25u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 539c25: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 539c28: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 539c2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 539c2d: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x539c32u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 539c32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 539c33: push 0x5aa4c8 */
  { uint32_t v = 0x5aa4c8u; esp -= 4; W32(esp, v); }
/* 539c38: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x539c3du); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 539c3d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 539c40: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 539c42: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 539c44: call 0x554df6 */
  esp -= 4; W32(esp, 0x539c49u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 539c49: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 539c4c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 539c4d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 539c4e: xor eax, eax */
  eax = 0;
/* 539c50: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 539c57: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 539c58: mov esp, ebp */
  esp = ebp;
/* 539c5a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 539c5b: ret  */
  esp += 4; SPILL(); return;
}

void f_539ca0(void) {
  LOAD_REGS();
L_539ca0: /* 539ca0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 539ca1: mov ebp, esp */
  ebp = esp;
/* 539ca3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 539ca5: push 0x5589e0 */
  { uint32_t v = 0x5589e0u; esp -= 4; W32(esp, v); }
/* 539caa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 539cb0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 539cb1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 539cb8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 539cbb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 539cbc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 539cbd: mov esi, ecx */
  esi = ecx;
/* 539cbf: cmp dword ptr [esi + 4], -1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 539cc3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 539cc4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 539cc7: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 539cca: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 539cd1: jne 0x539d0f */
  if (!zf) goto L_539d0f;
L_539cd3: /* 539cd3: mov edx, dword ptr [0x6a2918] */
  edx = R32((uint32_t)(0x6a2918u));
/* 539cd9: mov ecx, dword ptr [0x6a2914] */
  ecx = R32((uint32_t)(0x6a2914u));
/* 539cdf: xor eax, eax */
  eax = 0;
L_539ce1: /* 539ce1: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 539ce3: jge 0x539cef */
  if ((sf == of)) goto L_539cef;
L_539ce5: /* 539ce5: cmp dword ptr [ecx + eax*4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 539ce8: je 0x539ced */
  if (zf) goto L_539ced;
L_539cea: /* 539cea: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 539ceb: jmp 0x539ce1 */
  goto L_539ce1;
L_539ced: /* 539ced: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_539cef: /* 539cef: jne 0x539d08 */
  if (!zf) goto L_539d08;
L_539cf1: /* 539cf1: push 0x180 */
  { uint32_t v = 0x180u; esp -= 4; W32(esp, v); }
/* 539cf6: push 0x5aa4d4 */
  { uint32_t v = 0x5aa4d4u; esp -= 4; W32(esp, v); }
/* 539cfb: push 0x5aa4e0 */
  { uint32_t v = 0x5aa4e0u; esp -= 4; W32(esp, v); }
/* 539d00: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x539d05u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 539d05: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_539d08: /* 539d08: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 539d0a: mov ecx, esi */
  ecx = esi;
/* 539d0c: call dword ptr [eax + 0x58] */
  { uint32_t t = R32((uint32_t)(eax + 0x58u)); esp -= 4; W32(esp, 0x539d0fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_539d0f: /* 539d0f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 539d12: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 539d13: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 539d14: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 539d1b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 539d1c: mov esp, ebp */
  esp = ebp;
/* 539d1e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 539d1f: ret  */
  esp += 4; SPILL(); return;
}

void f_539d20(void) {
  LOAD_REGS();
L_539d20: /* 539d20: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 539d23: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 539d28: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 539d2b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 539d2c: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 539d2f: call 0x554df6 */
  esp -= 4; W32(esp, 0x539d34u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_539d34(); return;
}

void f_539d34(void) {
  LOAD_REGS();
L_539d34: /* 539d34: push 0x56dbf0 */
  { uint32_t v = 0x56dbf0u; esp -= 4; W32(esp, v); }
/* 539d39: push 0x5aa4fc */
  { uint32_t v = 0x5aa4fcu; esp -= 4; W32(esp, v); }
/* 539d3e: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x539d43u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 539d43: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 539d46: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 539d49: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 539d4b: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x539d50u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 539d50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 539d51: push 0x5aa504 */
  { uint32_t v = 0x5aa504u; esp -= 4; W32(esp, v); }
/* 539d56: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x539d5bu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 539d5b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 539d5e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 539d60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 539d62: call 0x554df6 */
  esp -= 4; W32(esp, 0x539d67u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_539d67: guest_badaddr(0x539d67); return;
}

void f_539db0(void) {
  LOAD_REGS();
L_539db0: /* 539db0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 539db1: mov ebp, esp */
  ebp = esp;
/* 539db3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 539db5: push 0x5589f0 */
  { uint32_t v = 0x5589f0u; esp -= 4; W32(esp, v); }
/* 539dba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 539dc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 539dc1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 539dc8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 539dcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 539dcc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 539dcd: mov esi, ecx */
  esi = ecx;
/* 539dcf: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 539dd2: test eax, 0x1000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 539dd7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 539dd8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 539ddb: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 539dde: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 539de5: je 0x539e1b */
  if (zf) goto L_539e1b;
L_539de7: /* 539de7: and eax, 0xdeffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdeffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 539dec: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 539def: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 539df1: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x539df4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 539df4: test dword ptr [esi + 0x1c], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1cu))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 539dfb: jne 0x539e1b */
  if (!zf) goto L_539e1b;
L_539dfd: /* 539dfd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 539dff: mov ecx, esi */
  ecx = esi;
/* 539e01: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x539e06u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 539e06: mov ecx, dword ptr [0x5a0c94] */
  ecx = R32((uint32_t)(0x5a0c94u));
/* 539e0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 539e0d: push 0x5aa510 */
  { uint32_t v = 0x5aa510u; esp -= 4; W32(esp, v); }
/* 539e12: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 539e13: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x539e18u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 539e18: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_539e1b: /* 539e1b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 539e1e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 539e1f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 539e20: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 539e27: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 539e28: mov esp, ebp */
  esp = ebp;
/* 539e2a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 539e2b: ret  */
  esp += 4; SPILL(); return;
}

void f_539e2c(void) {
  LOAD_REGS();
L_539e2c: /* 539e2c: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 539e2f: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 539e34: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 539e37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 539e38: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 539e3b: call 0x554df6 */
  esp -= 4; W32(esp, 0x539e40u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_539e40(); return;
}

void f_539e40(void) {
  LOAD_REGS();
L_539e40: /* 539e40: push 0x56dc38 */
  { uint32_t v = 0x56dc38u; esp -= 4; W32(esp, v); }
/* 539e45: push 0x5aa548 */
  { uint32_t v = 0x5aa548u; esp -= 4; W32(esp, v); }
/* 539e4a: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x539e4fu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 539e4f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 539e52: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 539e55: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 539e57: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x539e5cu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 539e5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 539e5d: push 0x5aa550 */
  { uint32_t v = 0x5aa550u; esp -= 4; W32(esp, v); }
/* 539e62: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x539e67u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 539e67: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 539e6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 539e6c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 539e6e: call 0x554df6 */
  esp -= 4; W32(esp, 0x539e73u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_539e73: guest_badaddr(0x539e73); return;
}

void f_539ec0(void) {
  LOAD_REGS();
L_539ec0: /* 539ec0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 539ec1: mov ebp, esp */
  ebp = esp;
/* 539ec3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 539ec5: push 0x558a00 */
  { uint32_t v = 0x558a00u; esp -= 4; W32(esp, v); }
/* 539eca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 539ed0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 539ed1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 539ed8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 539edb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 539edc: mov eax, ecx */
  eax = ecx;
/* 539ede: mov ecx, dword ptr [0x5afef0] */
  ecx = R32((uint32_t)(0x5afef0u));
/* 539ee4: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 539ee6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 539ee7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 539ee8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 539eeb: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 539eee: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 539ef5: je 0x539f02 */
  if (zf) goto L_539f02;
L_539ef7: /* 539ef7: test byte ptr [eax + 0x1c], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x1cu))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 539efb: je 0x539f02 */
  if (zf) goto L_539f02;
L_539efd: /* 539efd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 539eff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 539f00: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x539f02u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_539f02: /* 539f02: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 539f05: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 539f06: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 539f07: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 539f0e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 539f0f: mov esp, ebp */
  esp = ebp;
/* 539f11: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 539f12: ret  */
  esp += 4; SPILL(); return;
}

void f_539f13(void) {
  LOAD_REGS();
L_539f13: /* 539f13: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 539f16: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 539f1b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 539f1e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 539f1f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 539f22: call 0x554df6 */
  esp -= 4; W32(esp, 0x539f27u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_539f27(); return;
}

void f_539f27(void) {
  LOAD_REGS();
L_539f27: /* 539f27: push 0x56dc80 */
  { uint32_t v = 0x56dc80u; esp -= 4; W32(esp, v); }
/* 539f2c: push 0x5aa57c */
  { uint32_t v = 0x5aa57cu; esp -= 4; W32(esp, v); }
/* 539f31: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x539f36u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 539f36: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 539f39: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 539f3c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 539f3e: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x539f43u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 539f43: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 539f44: push 0x5aa584 */
  { uint32_t v = 0x5aa584u; esp -= 4; W32(esp, v); }
/* 539f49: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x539f4eu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 539f4e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 539f51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 539f53: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 539f55: call 0x554df6 */
  esp -= 4; W32(esp, 0x539f5au); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_539f5a: guest_badaddr(0x539f5a); return;
}

void f_539f90(void) {
  LOAD_REGS();
L_539f90: /* 539f90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 539f91: mov ebp, esp */
  ebp = esp;
/* 539f93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 539f95: push 0x558a10 */
  { uint32_t v = 0x558a10u; esp -= 4; W32(esp, v); }
/* 539f9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 539fa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 539fa1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 539fa8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 539fab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 539fac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 539fad: mov esi, ecx */
  esi = ecx;
/* 539faf: mov edx, dword ptr [esi + 0x1c] */
  edx = R32((uint32_t)(esi + 0x1cu));
/* 539fb2: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 539fb5: lea ebx, [esi + 0x24] */
  ebx = (uint32_t)(esi + 0x24u);
/* 539fb8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 539fb9: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 539fbc: or edx, 0x40000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* 539fc2: cmp eax, 0x5f0d80 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5f0d80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 539fc7: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 539fca: mov dword ptr [ebp - 0x1c], esi */
  W32((uint32_t)(ebp + 0xffffffe4u), esi);
/* 539fcd: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 539fd4: mov dword ptr [esi + 0x1c], edx */
  W32((uint32_t)(esi + 0x1cu), edx);
/* 539fd7: je 0x539fe1 */
  if (zf) goto L_539fe1;
L_539fd9: /* 539fd9: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 539fdb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 539fdc: mov ecx, edi */
  ecx = edi;
/* 539fde: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x539fe1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_539fe1: /* 539fe1: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 539fe4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 539fe6: jne 0x53a026 */
  if (!zf) goto L_53a026;
L_539fe8: /* 539fe8: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 539feb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 539fed: jne 0x53a00d */
  if (!zf) goto L_53a00d;
L_539fef: /* 539fef: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 539ff1: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 539ff4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 539ff5: mov ecx, edi */
  ecx = edi;
/* 539ff7: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x539ffau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 539ffa: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 539ffc: lea ecx, [esi + 0x18] */
  ecx = (uint32_t)(esi + 0x18u);
/* 539fff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53a000: mov ecx, eax */
  ecx = eax;
/* 53a002: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x53a005u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53a005: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 53a007: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53a008: mov ecx, eax */
  ecx = eax;
/* 53a00a: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x53a00du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_53a00d: /* 53a00d: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 53a010: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a012: jne 0x53a026 */
  if (!zf) goto L_53a026;
L_53a014: /* 53a014: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 53a017: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a019: jne 0x53a026 */
  if (!zf) goto L_53a026;
L_53a01b: /* 53a01b: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 53a01d: lea ecx, [esi + 0x10] */
  ecx = (uint32_t)(esi + 0x10u);
/* 53a020: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53a021: mov ecx, edi */
  ecx = edi;
/* 53a023: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x53a026u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_53a026: /* 53a026: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 53a029: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a02b: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 53a02f: jne 0x53a184 */
  if (!zf) goto L_53a184;
L_53a035: /* 53a035: test dword ptr [esi + 0x1c], 0x2000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1cu))); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a03c: je 0x53a1c8 */
  if (zf) goto L_53a1c8;
L_53a042: /* 53a042: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 53a045: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a047: jne 0x53a06d */
  if (!zf) goto L_53a06d;
L_53a049: /* 53a049: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 53a04f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53a051: push 0x5aa590 */
  { uint32_t v = 0x5aa590u; esp -= 4; W32(esp, v); }
/* 53a056: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 53a058: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x53a05au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53a05a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a05c: je 0x53a068 */
  if (zf) goto L_53a068;
L_53a05e: /* 53a05e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53a05f: mov ecx, eax */
  ecx = eax;
/* 53a061: call 0x4e340e */
  esp -= 4; W32(esp, 0x53a066u); SPILL(); f_4e340e(); if (g_unwind) return; RELOAD();
/* 53a066: jmp 0x53a06a */
  goto L_53a06a;
L_53a068: /* 53a068: xor eax, eax */
  eax = 0;
L_53a06a: /* 53a06a: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
L_53a06d: /* 53a06d: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 53a070: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 53a072: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53a075: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a076: mov ecx, edi */
  ecx = edi;
/* 53a078: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x53a07bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53a07b: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 53a07e: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 53a080: add edx, 0x1c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 53a083: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53a084: mov ecx, eax */
  ecx = eax;
/* 53a086: call dword ptr [ebx + 0x18] */
  { uint32_t t = R32((uint32_t)(ebx + 0x18u)); esp -= 4; W32(esp, 0x53a089u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53a089: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 53a08c: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53a08f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a090: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53a091: call 0x4e2eaf */
  esp -= 4; W32(esp, 0x53a096u); SPILL(); f_4e2eaf(); if (g_unwind) return; RELOAD();
/* 53a096: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 53a099: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53a09c: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 53a09f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53a0a0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53a0a1: call 0x4e4160 */
  esp -= 4; W32(esp, 0x53a0a6u); SPILL(); f_4e4160(); if (g_unwind) return; RELOAD();
/* 53a0a6: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 53a0a9: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 53a0ac: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53a0af: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a0b1: je 0x53a1bf */
  if (zf) goto L_53a1bf;
L_53a0b7: /* 53a0b7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 53a0b9: mov eax, ecx */
  eax = ecx;
/* 53a0bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a0bc: mov ecx, edi */
  ecx = edi;
/* 53a0be: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x53a0c1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53a0c1: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 53a0c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a0c6: je 0x53a0fc */
  if (zf) goto L_53a0fc;
L_53a0c8: /* 53a0c8: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 53a0cb: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 53a0ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a0d0: je 0x53a0fc */
  if (zf) goto L_53a0fc;
L_53a0d2: /* 53a0d2: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 53a0d5: mov edx, dword ptr [ecx + 0x48] */
  edx = R32((uint32_t)(ecx + 0x48u));
/* 53a0d8: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 53a0da: jb 0x53a0e5 */
  if (cf) goto L_53a0e5;
L_53a0dc: /* 53a0dc: mov ecx, dword ptr [ecx + 0x4c] */
  ecx = R32((uint32_t)(ecx + 0x4cu));
/* 53a0df: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 53a0e1: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 53a0e3: jb 0x53a0fc */
  if (cf) goto L_53a0fc;
L_53a0e5: /* 53a0e5: push 0x21a */
  { uint32_t v = 0x21au; esp -= 4; W32(esp, v); }
/* 53a0ea: push 0x5aa5b4 */
  { uint32_t v = 0x5aa5b4u; esp -= 4; W32(esp, v); }
/* 53a0ef: push 0x5aa5c0 */
  { uint32_t v = 0x5aa5c0u; esp -= 4; W32(esp, v); }
/* 53a0f4: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53a0f9u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53a0f9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53a0fc: /* 53a0fc: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 53a0ff: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* 53a102: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a104: je 0x53a111 */
  if (zf) goto L_53a111;
L_53a106: /* 53a106: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 53a109: sub eax, dword ptr [ecx + 0x48] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x48u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 53a10c: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 53a10f: jmp 0x53a118 */
  goto L_53a118;
L_53a111: /* 53a111: mov dword ptr [ebp + 8], 0xffffffff */
  W32((uint32_t)(ebp + 0x8u), 0xffffffffu);
L_53a118: /* 53a118: lea edx, [ebp + 8] */
  edx = (uint32_t)(ebp + 0x8u);
/* 53a11b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53a11c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53a11d: call 0x4e2f2c */
  esp -= 4; W32(esp, 0x53a122u); SPILL(); f_4e2f2c(); if (g_unwind) return; RELOAD();
/* 53a122: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 53a125: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53a128: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a12b: je 0x53a17c */
  if (zf) goto L_53a17c;
L_53a12d: /* 53a12d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 53a12f: jl 0x53a13c */
  if ((sf != of)) goto L_53a13c;
L_53a131: /* 53a131: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 53a134: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 53a137: cmp ecx, dword ptr [edx + 0x4c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x4cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53a13a: jl 0x53a16a */
  if ((sf != of)) goto L_53a16a;
L_53a13c: /* 53a13c: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 53a13f: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 53a142: mov ebx, dword ptr [ecx + 0x4c] */
  ebx = R32((uint32_t)(ecx + 0x4cu));
/* 53a145: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53a147: mov ecx, esi */
  ecx = esi;
/* 53a149: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53a14eu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53a14e: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 53a151: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53a152: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53a153: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a154: mov eax, dword ptr [0x5a0c94] */
  eax = R32((uint32_t)(0x5a0c94u));
/* 53a159: push 0x5aa640 */
  { uint32_t v = 0x5aa640u; esp -= 4; W32(esp, v); }
/* 53a15e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a15f: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53a164u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53a164: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 53a167: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53a16a: /* 53a16a: cmp ecx, -1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a16d: je 0x53a17c */
  if (zf) goto L_53a17c;
L_53a16f: /* 53a16f: mov edx, dword ptr [esi + 0xc] */
  edx = R32((uint32_t)(esi + 0xcu));
/* 53a172: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 53a175: mov eax, dword ptr [eax + 0x48] */
  eax = R32((uint32_t)(eax + 0x48u));
/* 53a178: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53a17a: jmp 0x53a17e */
  goto L_53a17e;
L_53a17c: /* 53a17c: xor eax, eax */
  eax = 0;
L_53a17e: /* 53a17e: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 53a181: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
L_53a184: /* 53a184: mov ecx, dword ptr [esi + 0x24] */
  ecx = R32((uint32_t)(esi + 0x24u));
/* 53a187: cmp ecx, 0x5f0d80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5f0d80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a18d: lea ebx, [esi + 0x24] */
  ebx = (uint32_t)(esi + 0x24u);
/* 53a190: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53a197: je 0x53a21f */
  if (zf) goto L_53a21f;
L_53a19d: /* 53a19d: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* 53a1a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a1a2: jne 0x53a1ab */
  if (!zf) goto L_53a1ab;
L_53a1a4: /* 53a1a4: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* 53a1a7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a1a9: je 0x53a213 */
  if (zf) goto L_53a213;
L_53a1ab: /* 53a1ab: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* 53a1ae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a1b0: jne 0x53a213 */
  if (!zf) goto L_53a213;
L_53a1b2: /* 53a1b2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53a1b4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53a1b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53a1b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53a1b7: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x53a1bdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53a1bd: jmp 0x53a21f */
  goto L_53a21f;
L_53a1bf: /* 53a1bf: mov dword ptr [eax + 0xc], 0 */
  W32((uint32_t)(eax + 0xcu), 0x0u);
/* 53a1c6: jmp 0x53a184 */
  goto L_53a184;
L_53a1c8: /* 53a1c8: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 53a1cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a1cd: je 0x53a184 */
  if (zf) goto L_53a184;
L_53a1cf: /* 53a1cf: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 53a1d5: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53a1d7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a1d8: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x53a1dbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53a1db: mov dword ptr [esi + 0xc], 0 */
  W32((uint32_t)(esi + 0xcu), 0x0u);
/* 53a1e2: jmp 0x53a184 */
  goto L_53a184;
L_53a213: /* 53a213: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 53a215: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53a217: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53a218: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53a219: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0x53a21fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_53a21f: /* 53a21f: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 53a221: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53a223: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x53a226u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53a226: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 53a228: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a229: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a22a: mov ecx, edi */
  ecx = edi;
/* 53a22c: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x53a22fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53a22f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53a232: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53a233: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53a234: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53a23b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53a23c: mov esp, ebp */
  esp = ebp;
/* 53a23e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53a23f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_53a1e4(void) {
  LOAD_REGS();
L_53a1e4: /* 53a1e4: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 53a1e7: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53a1ec: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 53a1ef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53a1f0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 53a1f3: call 0x554df6 */
  esp -= 4; W32(esp, 0x53a1f8u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53a1f8(); return;
}

void f_53a1f8(void) {
  LOAD_REGS();
L_53a1f8: /* 53a1f8: push 0x56dcd8 */
  { uint32_t v = 0x56dcd8u; esp -= 4; W32(esp, v); }
/* 53a1fd: push 0x5aa678 */
  { uint32_t v = 0x5aa678u; esp -= 4; W32(esp, v); }
/* 53a202: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53a207u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53a207: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53a20a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53a20c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53a20e: call 0x554df6 */
  esp -= 4; W32(esp, 0x53a213u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 53a213: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 53a215: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53a217: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53a218: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53a219: call dword ptr [eax + 0x84] */
  { uint32_t t = R32((uint32_t)(eax + 0x84u)); esp -= 4; W32(esp, 0x53a21fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53a21f: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 53a221: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53a223: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x53a226u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53a226: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 53a228: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a229: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a22a: mov ecx, edi */
  ecx = edi;
/* 53a22c: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x53a22fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53a22f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53a232: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53a233: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53a234: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53a23b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53a23c: mov esp, ebp */
  esp = ebp;
/* 53a23e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53a23f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_53a242(void) {
  LOAD_REGS();
L_53a242: /* 53a242: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 53a245: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53a24a: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 53a24d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53a24e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 53a251: call 0x554df6 */
  esp -= 4; W32(esp, 0x53a256u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53a256(); return;
}

void f_53a256(void) {
  LOAD_REGS();
L_53a256: /* 53a256: push 0x56dca8 */
  { uint32_t v = 0x56dca8u; esp -= 4; W32(esp, v); }
/* 53a25b: push 0x5aa680 */
  { uint32_t v = 0x5aa680u; esp -= 4; W32(esp, v); }
/* 53a260: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53a265u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53a265: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 53a268: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53a26b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53a26d: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53a272u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53a272: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a273: push 0x5aa688 */
  { uint32_t v = 0x5aa688u; esp -= 4; W32(esp, v); }
/* 53a278: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53a27du); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53a27d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53a280: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53a282: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53a284: call 0x554df6 */
  esp -= 4; W32(esp, 0x53a289u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53a289: guest_badaddr(0x53a289); return;
}

void f_53a350(void) {
  LOAD_REGS();
L_53a350: /* 53a350: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53a351: mov ebp, esp */
  ebp = esp;
/* 53a353: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53a355: push 0x558a20 */
  { uint32_t v = 0x558a20u; esp -= 4; W32(esp, v); }
/* 53a35a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53a360: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a361: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53a368: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53a369: mov eax, 0x201c */
  eax = 0x201cu;
/* 53a36e: call 0x554f80 */
  esp -= 4; W32(esp, 0x53a373u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 53a373: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53a374: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53a375: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 53a378: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53a379: xor edi, edi */
  edi = 0;
/* 53a37b: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a37d: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53a380: mov dword ptr [ebp - 0x1c], 0x5aa694 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x5aa694u);
/* 53a387: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 53a38a: jne 0x53a3a3 */
  if (!zf) goto L_53a3a3;
L_53a38c: /* 53a38c: push 0x24a */
  { uint32_t v = 0x24au; esp -= 4; W32(esp, v); }
/* 53a391: push 0x5aa6a4 */
  { uint32_t v = 0x5aa6a4u; esp -= 4; W32(esp, v); }
/* 53a396: push 0x5aa6b0 */
  { uint32_t v = 0x5aa6b0u; esp -= 4; W32(esp, v); }
/* 53a39b: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53a3a0u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53a3a0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53a3a3: /* 53a3a3: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a3a5: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 53a3a8: je 0x53a3b2 */
  if (zf) goto L_53a3b2;
L_53a3aa: /* 53a3aa: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 53a3ad: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 53a3b0: jmp 0x53a3b5 */
  goto L_53a3b5;
L_53a3b2: /* 53a3b2: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
L_53a3b5: /* 53a3b5: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 53a3b8: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53a3bdu); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53a3bd: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 53a3c0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a3c2: je 0x53a680 */
  if (zf) goto L_53a680;
L_53a3c8: /* 53a3c8: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 53a3ca: mov ecx, edi */
  ecx = edi;
/* 53a3cc: call dword ptr [edx + 0xb0] */
  { uint32_t t = R32((uint32_t)(edx + 0xb0u)); esp -= 4; W32(esp, 0x53a3d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53a3d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a3d4: je 0x53a638 */
  if (zf) goto L_53a638;
L_53a3da: /* 53a3da: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 53a3dd: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 53a3e3: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 53a3e6: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 53a3e9: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 53a3ec: xor ebx, ebx */
  ebx = 0;
L_53a3ee: /* 53a3ee: cmp ebx, dword ptr [edi + 0x34] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53a3f1: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
/* 53a3f4: jge 0x53a638 */
  if ((sf == of)) goto L_53a638;
L_53a3fa: /* 53a3fa: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 53a3fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_53a400: /* 53a400: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a402: je 0x53a515 */
  if (zf) goto L_53a515;
L_53a408: /* 53a408: cmp eax, 0x6a60e0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a60e0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a40d: je 0x53a414 */
  if (zf) goto L_53a414;
L_53a40f: /* 53a40f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 53a412: jmp 0x53a400 */
  goto L_53a400;
L_53a414: /* 53a414: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a416: je 0x53a434 */
  if (zf) goto L_53a434;
L_53a418: /* 53a418: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 53a41b: jmp 0x53a420 */
  goto L_53a420;
L_53a420: /* 53a420: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a422: je 0x53a434 */
  if (zf) goto L_53a434;
L_53a424: /* 53a424: cmp eax, 0x6a60e0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a60e0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a429: je 0x53a430 */
  if (zf) goto L_53a430;
L_53a42b: /* 53a42b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 53a42e: jmp 0x53a420 */
  goto L_53a420;
L_53a430: /* 53a430: mov eax, edi */
  eax = edi;
/* 53a432: jmp 0x53a436 */
  goto L_53a436;
L_53a434: /* 53a434: xor eax, eax */
  eax = 0;
L_53a436: /* 53a436: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* 53a439: test byte ptr [edi + 0x3c], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x3cu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53a43d: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 53a440: je 0x53a45e */
  if (zf) goto L_53a45e;
L_53a442: /* 53a442: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
L_53a445: /* 53a445: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a447: je 0x53a45e */
  if (zf) goto L_53a45e;
L_53a449: /* 53a449: cmp eax, 0x6a75a8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a75a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a44e: je 0x53a455 */
  if (zf) goto L_53a455;
L_53a450: /* 53a450: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 53a453: jmp 0x53a445 */
  goto L_53a445;
L_53a455: /* 53a455: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
/* 53a45c: jmp 0x53a465 */
  goto L_53a465;
L_53a45e: /* 53a45e: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
L_53a465: /* 53a465: mov esi, dword ptr [edi + 0x38] */
  esi = R32((uint32_t)(edi + 0x38u));
/* 53a468: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 53a46b: imul esi, ebx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebx);
  esi = (uint32_t)r;
  }
/* 53a46e: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 53a471: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 53a473: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 53a475: xor ebx, ebx */
  ebx = 0;
L_53a477: /* 53a477: cmp ebx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53a47a: jge 0x53a62f */
  if ((sf == of)) goto L_53a62f;
L_53a480: /* 53a480: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 53a482: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53a484: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53a486: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53a488: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a489: lea eax, [ebp - 0x202c] */
  eax = (uint32_t)(ebp + 0xffffdfd4u);
/* 53a48f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a490: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53a491: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x53a497u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53a497: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a499: je 0x53a50c */
  if (zf) goto L_53a50c;
L_53a49b: /* 53a49b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 53a49e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a4a0: je 0x53a4d6 */
  if (zf) goto L_53a4d6;
L_53a4a2: /* 53a4a2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 53a4a4: mov edi, dword ptr [eax + ebx*4] */
  edi = R32((uint32_t)(eax + ebx*4));
/* 53a4a7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a4a9: je 0x53a4d3 */
  if (zf) goto L_53a4d3;
L_53a4ab: /* 53a4ab: test byte ptr [edi + 0x1c], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x1cu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53a4af: jne 0x53a4d3 */
  if (!zf) goto L_53a4d3;
L_53a4b1: /* 53a4b1: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 53a4b4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 53a4b7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 53a4b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53a4b9: push 0x5aa6c4 */
  { uint32_t v = 0x5aa6c4u; esp -= 4; W32(esp, v); }
/* 53a4be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53a4bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53a4c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53a4c2: call 0x4e4499 */
  esp -= 4; W32(esp, 0x53a4c7u); SPILL(); f_4e4499(); if (g_unwind) return; RELOAD();
/* 53a4c7: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 53a4ca: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53a4cd: or eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 53a4d0: mov dword ptr [edi + 0x1c], eax */
  W32((uint32_t)(edi + 0x1cu), eax);
L_53a4d3: /* 53a4d3: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_53a4d6: /* 53a4d6: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 53a4d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a4da: call 0x4e2491 */
  esp -= 4; W32(esp, 0x53a4dfu); SPILL(); f_4e2491(); if (g_unwind) return; RELOAD();
/* 53a4df: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 53a4e2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53a4e5: lea ecx, [ebp - 0x202c] */
  ecx = (uint32_t)(ebp + 0xffffdfd4u);
/* 53a4eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53a4ec: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 53a4f2: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 53a4f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53a4f6: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 53a4f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53a4fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a4fb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 53a4fe: push 0x5aa6cc */
  { uint32_t v = 0x5aa6ccu; esp -= 4; W32(esp, v); }
/* 53a503: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a504: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53a509u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53a509: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53a50c: /* 53a50c: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 53a50f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 53a510: jmp 0x53a477 */
  goto L_53a477;
L_53a515: /* 53a515: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 53a518: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a51a: je 0x53a533 */
  if (zf) goto L_53a533;
L_53a51c: /* 53a51c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_53a520: /* 53a520: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a522: je 0x53a533 */
  if (zf) goto L_53a533;
L_53a524: /* 53a524: cmp eax, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a527: je 0x53a52e */
  if (zf) goto L_53a52e;
L_53a529: /* 53a529: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 53a52c: jmp 0x53a520 */
  goto L_53a520;
L_53a52e: /* 53a52e: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 53a531: jmp 0x53a535 */
  goto L_53a535;
L_53a533: /* 53a533: xor eax, eax */
  eax = 0;
L_53a535: /* 53a535: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 53a537: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53a539: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a53a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 53a53d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a53e: lea ecx, [ebp - 0x202c] */
  ecx = (uint32_t)(ebp + 0xffffdfd4u);
/* 53a544: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53a545: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53a546: mov ecx, edi */
  ecx = edi;
/* 53a548: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x53a54eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53a54e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a550: je 0x53a632 */
  if (zf) goto L_53a632;
L_53a556: /* 53a556: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 53a559: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_53a560: /* 53a560: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a562: je 0x53a5b5 */
  if (zf) goto L_53a5b5;
L_53a564: /* 53a564: cmp eax, 0x6a75a8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a75a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a569: je 0x53a570 */
  if (zf) goto L_53a570;
L_53a56b: /* 53a56b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 53a56e: jmp 0x53a560 */
  goto L_53a560;
L_53a570: /* 53a570: test byte ptr [edi + 0x3c], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x3cu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53a574: je 0x53a5b5 */
  if (zf) goto L_53a5b5;
L_53a576: /* 53a576: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 53a579: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 53a57c: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 53a57f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 53a582: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 53a584: mov esi, dword ptr [edx + eax] */
  esi = R32((uint32_t)(edx + eax));
/* 53a587: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a589: je 0x53a5b5 */
  if (zf) goto L_53a5b5;
L_53a58b: /* 53a58b: test byte ptr [esi + 0x1c], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1cu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53a58f: jne 0x53a5b5 */
  if (!zf) goto L_53a5b5;
L_53a591: /* 53a591: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 53a594: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 53a597: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 53a598: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53a599: push 0x5aa6ec */
  { uint32_t v = 0x5aa6ecu; esp -= 4; W32(esp, v); }
/* 53a59e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53a59f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53a5a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53a5a2: call 0x4e4499 */
  esp -= 4; W32(esp, 0x53a5a7u); SPILL(); f_4e4499(); if (g_unwind) return; RELOAD();
/* 53a5a7: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 53a5aa: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53a5ad: or eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 53a5b0: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 53a5b3: jmp 0x53a5b8 */
  goto L_53a5b8;
L_53a5b5: /* 53a5b5: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_53a5b8: /* 53a5b8: cmp dword ptr [edi + 0x34], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x34u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a5bc: jne 0x53a5f9 */
  if (!zf) goto L_53a5f9;
L_53a5be: /* 53a5be: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 53a5c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53a5c2: call 0x4e2491 */
  esp -= 4; W32(esp, 0x53a5c7u); SPILL(); f_4e2491(); if (g_unwind) return; RELOAD();
/* 53a5c7: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 53a5ca: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53a5cd: lea ecx, [ebp - 0x202c] */
  ecx = (uint32_t)(ebp + 0xffffdfd4u);
/* 53a5d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53a5d4: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 53a5da: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 53a5dd: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 53a5e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53a5e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a5e2: push 0x5aa6f4 */
  { uint32_t v = 0x5aa6f4u; esp -= 4; W32(esp, v); }
/* 53a5e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53a5e8: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53a5edu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53a5ed: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 53a5f0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53a5f3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 53a5f4: jmp 0x53a3ee */
  goto L_53a3ee;
L_53a5f9: /* 53a5f9: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 53a5fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a5fd: call 0x4e2491 */
  esp -= 4; W32(esp, 0x53a602u); SPILL(); f_4e2491(); if (g_unwind) return; RELOAD();
/* 53a602: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 53a605: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53a608: lea ecx, [ebp - 0x202c] */
  ecx = (uint32_t)(ebp + 0xffffdfd4u);
/* 53a60e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53a60f: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 53a612: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53a613: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53a619: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 53a61c: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 53a61f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53a620: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a621: push 0x5aa70c */
  { uint32_t v = 0x5aa70cu; esp -= 4; W32(esp, v); }
/* 53a626: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53a627: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53a62cu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53a62c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53a62f: /* 53a62f: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
L_53a632: /* 53a632: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 53a633: jmp 0x53a3ee */
  goto L_53a3ee;
L_53a638: /* 53a638: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 53a63b: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 53a63e: jmp 0x53a3b5 */
  goto L_53a3b5;
L_53a680: /* 53a680: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53a683: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53a684: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53a685: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53a68c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53a68d: mov esp, ebp */
  esp = ebp;
/* 53a68f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53a690: ret  */
  esp += 4; SPILL(); return;
}

void f_53a41d(void) {
  LOAD_REGS();
  goto L_53a41d;
L_53a3b5: /* 53a3b5: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 53a3b8: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53a3bdu); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53a3bd: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 53a3c0: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a3c2: je 0x53a680 */
  if (zf) goto L_53a680;
L_53a3c8: /* 53a3c8: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 53a3ca: mov ecx, edi */
  ecx = edi;
/* 53a3cc: call dword ptr [edx + 0xb0] */
  { uint32_t t = R32((uint32_t)(edx + 0xb0u)); esp -= 4; W32(esp, 0x53a3d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53a3d2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a3d4: je 0x53a638 */
  if (zf) goto L_53a638;
L_53a3da: /* 53a3da: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 53a3dd: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 53a3e3: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 53a3e6: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 53a3e9: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 53a3ec: xor ebx, ebx */
  ebx = 0;
L_53a3ee: /* 53a3ee: cmp ebx, dword ptr [edi + 0x34] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53a3f1: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
/* 53a3f4: jge 0x53a638 */
  if ((sf == of)) goto L_53a638;
L_53a3fa: /* 53a3fa: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 53a3fd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_53a400: /* 53a400: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a402: je 0x53a515 */
  if (zf) goto L_53a515;
L_53a408: /* 53a408: cmp eax, 0x6a60e0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a60e0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a40d: je 0x53a414 */
  if (zf) goto L_53a414;
L_53a40f: /* 53a40f: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 53a412: jmp 0x53a400 */
  goto L_53a400;
L_53a414: /* 53a414: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a416: je 0x53a434 */
  if (zf) goto L_53a434;
L_53a418: /* 53a418: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 53a41b: jmp 0x53a420 */
  goto L_53a420;
L_53a41d: /* 53a41d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_53a420: /* 53a420: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a422: je 0x53a434 */
  if (zf) goto L_53a434;
L_53a424: /* 53a424: cmp eax, 0x6a60e0 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a60e0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a429: je 0x53a430 */
  if (zf) goto L_53a430;
L_53a42b: /* 53a42b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 53a42e: jmp 0x53a420 */
  goto L_53a420;
L_53a430: /* 53a430: mov eax, edi */
  eax = edi;
/* 53a432: jmp 0x53a436 */
  goto L_53a436;
L_53a434: /* 53a434: xor eax, eax */
  eax = 0;
L_53a436: /* 53a436: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* 53a439: test byte ptr [edi + 0x3c], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x3cu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53a43d: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 53a440: je 0x53a45e */
  if (zf) goto L_53a45e;
L_53a442: /* 53a442: mov eax, dword ptr [ecx + 0x24] */
  eax = R32((uint32_t)(ecx + 0x24u));
L_53a445: /* 53a445: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a447: je 0x53a45e */
  if (zf) goto L_53a45e;
L_53a449: /* 53a449: cmp eax, 0x6a75a8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a75a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a44e: je 0x53a455 */
  if (zf) goto L_53a455;
L_53a450: /* 53a450: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 53a453: jmp 0x53a445 */
  goto L_53a445;
L_53a455: /* 53a455: mov dword ptr [ebp - 0x20], 1 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x1u);
/* 53a45c: jmp 0x53a465 */
  goto L_53a465;
L_53a45e: /* 53a45e: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
L_53a465: /* 53a465: mov esi, dword ptr [edi + 0x38] */
  esi = R32((uint32_t)(edi + 0x38u));
/* 53a468: mov edx, dword ptr [edi + 0x48] */
  edx = R32((uint32_t)(edi + 0x48u));
/* 53a46b: imul esi, ebx */
  { int64_t r = (int64_t)(int32_t)(esi) * (int64_t)(int32_t)(ebx);
  esi = (uint32_t)r;
  }
/* 53a46e: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 53a471: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 53a473: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 53a475: xor ebx, ebx */
  ebx = 0;
L_53a477: /* 53a477: cmp ebx, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53a47a: jge 0x53a62f */
  if ((sf == of)) goto L_53a62f;
L_53a480: /* 53a480: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 53a482: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53a484: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53a486: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53a488: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a489: lea eax, [ebp - 0x202c] */
  eax = (uint32_t)(ebp + 0xffffdfd4u);
/* 53a48f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a490: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53a491: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x53a497u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53a497: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a499: je 0x53a50c */
  if (zf) goto L_53a50c;
L_53a49b: /* 53a49b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 53a49e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a4a0: je 0x53a4d6 */
  if (zf) goto L_53a4d6;
L_53a4a2: /* 53a4a2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 53a4a4: mov edi, dword ptr [eax + ebx*4] */
  edi = R32((uint32_t)(eax + ebx*4));
/* 53a4a7: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a4a9: je 0x53a4d3 */
  if (zf) goto L_53a4d3;
L_53a4ab: /* 53a4ab: test byte ptr [edi + 0x1c], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x1cu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53a4af: jne 0x53a4d3 */
  if (!zf) goto L_53a4d3;
L_53a4b1: /* 53a4b1: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 53a4b4: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 53a4b7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 53a4b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53a4b9: push 0x5aa6c4 */
  { uint32_t v = 0x5aa6c4u; esp -= 4; W32(esp, v); }
/* 53a4be: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53a4bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53a4c1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53a4c2: call 0x4e4499 */
  esp -= 4; W32(esp, 0x53a4c7u); SPILL(); f_4e4499(); if (g_unwind) return; RELOAD();
/* 53a4c7: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* 53a4ca: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53a4cd: or eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 53a4d0: mov dword ptr [edi + 0x1c], eax */
  W32((uint32_t)(edi + 0x1cu), eax);
L_53a4d3: /* 53a4d3: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_53a4d6: /* 53a4d6: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 53a4d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a4da: call 0x4e2491 */
  esp -= 4; W32(esp, 0x53a4dfu); SPILL(); f_4e2491(); if (g_unwind) return; RELOAD();
/* 53a4df: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 53a4e2: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53a4e5: lea ecx, [ebp - 0x202c] */
  ecx = (uint32_t)(ebp + 0xffffdfd4u);
/* 53a4eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53a4ec: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 53a4f2: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 53a4f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53a4f6: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 53a4f9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53a4fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a4fb: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 53a4fe: push 0x5aa6cc */
  { uint32_t v = 0x5aa6ccu; esp -= 4; W32(esp, v); }
/* 53a503: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a504: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53a509u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53a509: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53a50c: /* 53a50c: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 53a50f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 53a510: jmp 0x53a477 */
  goto L_53a477;
L_53a515: /* 53a515: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 53a518: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a51a: je 0x53a533 */
  if (zf) goto L_53a533;
L_53a51c: /* 53a51c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_53a520: /* 53a520: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a522: je 0x53a533 */
  if (zf) goto L_53a533;
L_53a524: /* 53a524: cmp eax, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a527: je 0x53a52e */
  if (zf) goto L_53a52e;
L_53a529: /* 53a529: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 53a52c: jmp 0x53a520 */
  goto L_53a520;
L_53a52e: /* 53a52e: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 53a531: jmp 0x53a535 */
  goto L_53a535;
L_53a533: /* 53a533: xor eax, eax */
  eax = 0;
L_53a535: /* 53a535: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 53a537: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53a539: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a53a: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 53a53d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a53e: lea ecx, [ebp - 0x202c] */
  ecx = (uint32_t)(ebp + 0xffffdfd4u);
/* 53a544: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53a545: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53a546: mov ecx, edi */
  ecx = edi;
/* 53a548: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x53a54eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53a54e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a550: je 0x53a632 */
  if (zf) goto L_53a632;
L_53a556: /* 53a556: mov eax, dword ptr [edi + 0x24] */
  eax = R32((uint32_t)(edi + 0x24u));
/* 53a559: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_53a560: /* 53a560: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a562: je 0x53a5b5 */
  if (zf) goto L_53a5b5;
L_53a564: /* 53a564: cmp eax, 0x6a75a8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a75a8u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a569: je 0x53a570 */
  if (zf) goto L_53a570;
L_53a56b: /* 53a56b: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 53a56e: jmp 0x53a560 */
  goto L_53a560;
L_53a570: /* 53a570: test byte ptr [edi + 0x3c], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x3cu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53a574: je 0x53a5b5 */
  if (zf) goto L_53a5b5;
L_53a576: /* 53a576: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 53a579: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 53a57c: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 53a57f: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 53a582: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 53a584: mov esi, dword ptr [edx + eax] */
  esi = R32((uint32_t)(edx + eax));
/* 53a587: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a589: je 0x53a5b5 */
  if (zf) goto L_53a5b5;
L_53a58b: /* 53a58b: test byte ptr [esi + 0x1c], 8 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x1cu))); uint8_t b = (uint8_t)(0x8u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53a58f: jne 0x53a5b5 */
  if (!zf) goto L_53a5b5;
L_53a591: /* 53a591: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 53a594: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 53a597: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 53a598: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53a599: push 0x5aa6ec */
  { uint32_t v = 0x5aa6ecu; esp -= 4; W32(esp, v); }
/* 53a59e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53a59f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53a5a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53a5a2: call 0x4e4499 */
  esp -= 4; W32(esp, 0x53a5a7u); SPILL(); f_4e4499(); if (g_unwind) return; RELOAD();
/* 53a5a7: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 53a5aa: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53a5ad: or eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 53a5b0: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 53a5b3: jmp 0x53a5b8 */
  goto L_53a5b8;
L_53a5b5: /* 53a5b5: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_53a5b8: /* 53a5b8: cmp dword ptr [edi + 0x34], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x34u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a5bc: jne 0x53a5f9 */
  if (!zf) goto L_53a5f9;
L_53a5be: /* 53a5be: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 53a5c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53a5c2: call 0x4e2491 */
  esp -= 4; W32(esp, 0x53a5c7u); SPILL(); f_4e2491(); if (g_unwind) return; RELOAD();
/* 53a5c7: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 53a5ca: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53a5cd: lea ecx, [ebp - 0x202c] */
  ecx = (uint32_t)(ebp + 0xffffdfd4u);
/* 53a5d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53a5d4: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 53a5da: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 53a5dd: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 53a5e0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53a5e1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a5e2: push 0x5aa6f4 */
  { uint32_t v = 0x5aa6f4u; esp -= 4; W32(esp, v); }
/* 53a5e7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53a5e8: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53a5edu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53a5ed: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* 53a5f0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53a5f3: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 53a5f4: jmp 0x53a3ee */
  goto L_53a3ee;
L_53a5f9: /* 53a5f9: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 53a5fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a5fd: call 0x4e2491 */
  esp -= 4; W32(esp, 0x53a602u); SPILL(); f_4e2491(); if (g_unwind) return; RELOAD();
/* 53a602: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 53a605: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53a608: lea ecx, [ebp - 0x202c] */
  ecx = (uint32_t)(ebp + 0xffffdfd4u);
/* 53a60e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53a60f: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 53a612: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53a613: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53a619: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 53a61c: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 53a61f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53a620: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a621: push 0x5aa70c */
  { uint32_t v = 0x5aa70cu; esp -= 4; W32(esp, v); }
/* 53a626: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53a627: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53a62cu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53a62c: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53a62f: /* 53a62f: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
L_53a632: /* 53a632: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 53a633: jmp 0x53a3ee */
  goto L_53a3ee;
L_53a638: /* 53a638: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 53a63b: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 53a63e: jmp 0x53a3b5 */
  goto L_53a3b5;
L_53a680: /* 53a680: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53a683: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53a684: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53a685: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53a68c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53a68d: mov esp, ebp */
  esp = ebp;
/* 53a68f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53a690: ret  */
  esp += 4; SPILL(); return;
}

void f_53a643(void) {
  LOAD_REGS();
L_53a643: /* 53a643: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 53a646: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53a64b: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 53a64e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53a64f: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 53a652: call 0x554df6 */
  esp -= 4; W32(esp, 0x53a657u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53a657(); return;
}

void f_53a657(void) {
  LOAD_REGS();
L_53a657: /* 53a657: push 0x56dcfc */
  { uint32_t v = 0x56dcfcu; esp -= 4; W32(esp, v); }
/* 53a65c: push 0x5aa72c */
  { uint32_t v = 0x5aa72cu; esp -= 4; W32(esp, v); }
/* 53a661: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53a666u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53a666: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 53a669: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53a66a: push 0x5aa734 */
  { uint32_t v = 0x5aa734u; esp -= 4; W32(esp, v); }
/* 53a66f: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53a674u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53a674: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53a677: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53a679: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53a67b: call 0x554df6 */
  esp -= 4; W32(esp, 0x53a680u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 53a680: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53a683: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53a684: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53a685: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53a68c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53a68d: mov esp, ebp */
  esp = ebp;
/* 53a68f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53a690: ret  */
  esp += 4; SPILL(); return;
}

void f_53a780(void) {
  LOAD_REGS();
L_53a780: /* 53a780: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53a781: mov ebp, esp */
  ebp = esp;
/* 53a783: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53a785: push 0x558a30 */
  { uint32_t v = 0x558a30u; esp -= 4; W32(esp, v); }
/* 53a78a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53a790: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a791: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53a798: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53a79b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53a79c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53a79d: mov esi, ecx */
  esi = ecx;
/* 53a79f: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 53a7a2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a7a4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53a7a5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53a7a8: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 53a7ab: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53a7b2: jne 0x53a7cb */
  if (!zf) goto L_53a7cb;
L_53a7b4: /* 53a7b4: push 0x291 */
  { uint32_t v = 0x291u; esp -= 4; W32(esp, v); }
/* 53a7b9: push 0x5aa740 */
  { uint32_t v = 0x5aa740u; esp -= 4; W32(esp, v); }
/* 53a7be: push 0x5aa74c */
  { uint32_t v = 0x5aa74cu; esp -= 4; W32(esp, v); }
/* 53a7c3: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53a7c8u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53a7c8: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53a7cb: /* 53a7cb: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 53a7ce: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a7d0: je 0x53a7de */
  if (zf) goto L_53a7de;
L_53a7d2: /* 53a7d2: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 53a7d8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53a7da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a7db: call dword ptr [edx + 0xc] */
  { uint32_t t = R32((uint32_t)(edx + 0xcu)); esp -= 4; W32(esp, 0x53a7deu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_53a7de: /* 53a7de: mov ecx, dword ptr [0x5a0ca0] */
  ecx = R32((uint32_t)(0x5a0ca0u));
/* 53a7e4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 53a7e6: push 0x5aa760 */
  { uint32_t v = 0x5aa760u; esp -= 4; W32(esp, v); }
/* 53a7eb: push 0x2c */
  { uint32_t v = 0x2cu; esp -= 4; W32(esp, v); }
/* 53a7ed: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x53a7efu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53a7ef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a7f1: je 0x53a7fd */
  if (zf) goto L_53a7fd;
L_53a7f3: /* 53a7f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53a7f4: mov ecx, eax */
  ecx = eax;
/* 53a7f6: call 0x4e340e */
  esp -= 4; W32(esp, 0x53a7fbu); SPILL(); f_4e340e(); if (g_unwind) return; RELOAD();
/* 53a7fb: jmp 0x53a7ff */
  goto L_53a7ff;
L_53a7fd: /* 53a7fd: xor eax, eax */
  eax = 0;
L_53a7ff: /* 53a7ff: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53a802: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 53a805: mov eax, dword ptr [esi + 0x1c] */
  eax = R32((uint32_t)(esi + 0x1cu));
/* 53a808: or eax, 0x2000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 53a80d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53a80e: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 53a811: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53a812: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53a819: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53a81a: mov esp, ebp */
  esp = ebp;
/* 53a81c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53a81d: ret  */
  esp += 4; SPILL(); return;
}

void f_53a81e(void) {
  LOAD_REGS();
L_53a81e: /* 53a81e: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 53a821: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53a826: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 53a829: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53a82a: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 53a82d: call 0x554df6 */
  esp -= 4; W32(esp, 0x53a832u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53a832(); return;
}

void f_53a832(void) {
  LOAD_REGS();
L_53a832: /* 53a832: push 0x56dd3c */
  { uint32_t v = 0x56dd3cu; esp -= 4; W32(esp, v); }
/* 53a837: push 0x5aa784 */
  { uint32_t v = 0x5aa784u; esp -= 4; W32(esp, v); }
/* 53a83c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53a841u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53a841: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53a844: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53a847: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53a849: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53a84eu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53a84e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a84f: push 0x5aa78c */
  { uint32_t v = 0x5aa78cu; esp -= 4; W32(esp, v); }
/* 53a854: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53a859u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53a859: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53a85c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53a85e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53a860: call 0x554df6 */
  esp -= 4; W32(esp, 0x53a865u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53a865: guest_badaddr(0x53a865); return;
}

void f_53a8b0(void) {
  LOAD_REGS();
L_53a8b0: /* 53a8b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53a8b1: mov ebp, esp */
  ebp = esp;
/* 53a8b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53a8b5: push 0x558a40 */
  { uint32_t v = 0x558a40u; esp -= 4; W32(esp, v); }
/* 53a8ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53a8c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a8c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53a8c8: sub esp, 0xac */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xacu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53a8ce: mov eax, dword ptr [0x5b2118] */
  eax = R32((uint32_t)(0x5b2118u));
/* 53a8d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53a8d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53a8d5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53a8d6: xor edi, edi */
  edi = 0;
/* 53a8d8: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a8da: mov esi, ecx */
  esi = ecx;
/* 53a8dc: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53a8df: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 53a8e2: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 53a8e5: jne 0x53a902 */
  if (!zf) goto L_53a902;
L_53a8e7: /* 53a8e7: xor eax, eax */
  eax = 0;
L_53a8e9: /* 53a8e9: lea esp, [ebp - 0xc4] */
  esp = (uint32_t)(ebp + 0xffffff3cu);
/* 53a8ef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53a8f2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53a8f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53a8fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53a8fb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53a8fc: mov esp, ebp */
  esp = ebp;
/* 53a8fe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53a8ff: ret 0xc */
  esp += 16; SPILL(); return;
L_53a902: /* 53a902: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 53a904: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 53a906: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 53a90c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a90d: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 53a910: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53a911: call 0x4e3256 */
  esp -= 4; W32(esp, 0x53a916u); SPILL(); f_4e3256(); if (g_unwind) return; RELOAD();
/* 53a916: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53a919: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a91b: je 0x53a8e7 */
  if (zf) goto L_53a8e7;
L_53a91d: /* 53a91d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53a91e: lea edx, [ebp - 0xb8] */
  edx = (uint32_t)(ebp + 0xffffff48u);
/* 53a924: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53a925: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 53a928: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x53a92du); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 53a92d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 53a92f: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a931: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 53a934: je 0x53a8e7 */
  if (zf) goto L_53a8e7;
L_53a936: /* 53a936: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 53a939: mov ecx, edx */
  ecx = edx;
/* 53a93b: and ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 53a941: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a943: je 0x53aa4d */
  if (zf) goto L_53aa4d;
L_53a949: /* 53a949: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 53a94c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a94e: je 0x53aa4d */
  if (zf) goto L_53aa4d;
L_53a954: /* 53a954: mov eax, dword ptr [eax + ecx*4 + 0x98] */
  eax = R32((uint32_t)(eax + ecx*4 + 0x98u));
/* 53a95b: jmp 0x53a960 */
  goto L_53a960;
L_53a960: /* 53a960: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a962: je 0x53aa4d */
  if (zf) goto L_53aa4d;
L_53a968: /* 53a968: cmp dword ptr [eax + 0x20], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x20u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a96b: jne 0x53aa45 */
  if (!zf) goto L_53aa45;
L_53a971: /* 53a971: mov ebx, eax */
  ebx = eax;
/* 53a973: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
L_53a976: /* 53a976: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a978: je 0x53a8e7 */
  if (zf) goto L_53a8e7;
L_53a97e: /* 53a97e: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 53a981: test dword ptr [eax + 0x498], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a98b: je 0x53a8e7 */
  if (zf) goto L_53a8e7;
L_53a991: /* 53a991: mov eax, dword ptr [ebx + 0x80] */
  eax = R32((uint32_t)(ebx + 0x80u));
/* 53a997: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53a99a: je 0x53a8e7 */
  if (zf) goto L_53a8e7;
L_53a9a0: /* 53a9a0: mov si, word ptr [ebx + 0x8a] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0x8au))) & 0xffffu);
/* 53a9a7: cmp si, di */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 53a9aa: je 0x53a9c5 */
  if (zf) goto L_53a9c5;
L_53a9ac: /* 53a9ac: movzx eax, si */
  eax = (uint32_t)((esi & 0xffffu));
/* 53a9af: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53a9b2: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 53a9b5: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53a9b8: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 53a9bb: call 0x554f80 */
  esp -= 4; W32(esp, 0x53a9c0u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 53a9c0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53a9c3: mov edi, esp */
  edi = esp;
L_53a9c5: /* 53a9c5: movzx eax, si */
  eax = (uint32_t)((esi & 0xffffu));
/* 53a9c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a9c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53a9ca: call 0x4e2ebe */
  esp -= 4; W32(esp, 0x53a9cfu); SPILL(); f_4e2ebe(); if (g_unwind) return; RELOAD();
/* 53a9cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53a9d2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53a9d3: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 53a9d6: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 53a9dd: call 0x4e14d3 */
  esp -= 4; W32(esp, 0x53a9e2u); SPILL(); f_4e14d3(); if (g_unwind) return; RELOAD();
/* 53a9e2: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
L_53a9e5: /* 53a9e5: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 53a9e8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a9ea: je 0x53aaef */
  if (zf) goto L_53aaef;
L_53a9f0: /* 53a9f0: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 53a9f3: and ecx, 0x480 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x480u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 53a9f9: cmp ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a9ff: jne 0x53aaef */
  if (!zf) goto L_53aaef;
L_53aa05: /* 53aa05: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53aa08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53aa0a: jne 0x53aa73 */
  if (!zf) goto L_53aa73;
L_53aa0c: /* 53aa0c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53aa0e: je 0x53aa73 */
  if (zf) goto L_53aa73;
L_53aa10: /* 53aa10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53aa11: call 0x4e2c6b */
  esp -= 4; W32(esp, 0x53aa16u); SPILL(); f_4e2c6b(); if (g_unwind) return; RELOAD();
/* 53aa16: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53aa19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53aa1b: je 0x53aa73 */
  if (zf) goto L_53aa73;
L_53aa1d: /* 53aa1d: mov edx, dword ptr [eax + 0x6c] */
  edx = R32((uint32_t)(eax + 0x6cu));
/* 53aa20: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53aa21: mov ecx, ebx */
  ecx = ebx;
/* 53aa23: call 0x4e2b3a */
  esp -= 4; W32(esp, 0x53aa28u); SPILL(); f_4e2b3a(); if (g_unwind) return; RELOAD();
/* 53aa28: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53aa2a: je 0x53aa73 */
  if (zf) goto L_53aa73;
L_53aa2c: /* 53aa2c: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 53aa2f: mov dword ptr [edi + eax], ebx */
  W32((uint32_t)(edi + eax), ebx);
L_53aa32: /* 53aa32: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 53aa35: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 53aa38: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 53aa3b: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53aa40u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53aa40: inc dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 53aa43: jmp 0x53a9e5 */
  goto L_53a9e5;
L_53aa45: /* 53aa45: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 53aa48: jmp 0x53a960 */
  goto L_53a960;
L_53aa4d: /* 53aa4d: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 53aa50: mov eax, dword ptr [eax + ecx*4 + 0x98] */
  eax = R32((uint32_t)(eax + ecx*4 + 0x98u));
L_53aa57: /* 53aa57: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53aa59: je 0x53a8e7 */
  if (zf) goto L_53a8e7;
L_53aa5f: /* 53aa5f: cmp dword ptr [eax + 0x20], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x20u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53aa62: jne 0x53aa6e */
  if (!zf) goto L_53aa6e;
L_53aa64: /* 53aa64: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 53aa67: mov ebx, eax */
  ebx = eax;
/* 53aa69: jmp 0x53a976 */
  goto L_53a976;
L_53aa6e: /* 53aa6e: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 53aa71: jmp 0x53aa57 */
  goto L_53aa57;
L_53aa73: /* 53aa73: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 53aa76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53aa77: call 0x4e3f94 */
  esp -= 4; W32(esp, 0x53aa7cu); SPILL(); f_4e3f94(); if (g_unwind) return; RELOAD();
/* 53aa7c: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 53aa7f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 53aa82: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 53aa84: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53aa87: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 53aa89: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53aa8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53aa8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53aa8d: mov ecx, esi */
  ecx = esi;
/* 53aa8f: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x53aa95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53aa95: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53aa97: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 53aa9a: jne 0x53aa32 */
  if (!zf) goto L_53aa32;
L_53aa9c: /* 53aa9c: test byte ptr [esi + 0x3c], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3cu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53aaa0: jne 0x53aaef */
  if (!zf) goto L_53aaef;
L_53aaa2: /* 53aaa2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53aaa4: push 0x5aa798 */
  { uint32_t v = 0x5aa798u; esp -= 4; W32(esp, v); }
/* 53aaa9: push 0x5aa7a4 */
  { uint32_t v = 0x5aa7a4u; esp -= 4; W32(esp, v); }
/* 53aaae: call 0x4e1613 */
  esp -= 4; W32(esp, 0x53aab3u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 53aab3: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 53aab9: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 53aabc: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 53aabf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53aac2: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 53aac5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53aac6: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 53aac9: mov ecx, dword ptr [ecx + edx*4] */
  ecx = R32((uint32_t)(ecx + edx*4));
/* 53aacc: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 53aacf: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 53aad2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53aad3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53aad4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53aad5: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53aadau); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53aada: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53aadd: /* 53aadd: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_53aae0: /* 53aae0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53aae2: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 53aae5: je 0x53ab05 */
  if (zf) goto L_53ab05;
L_53aae7: /* 53aae7: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 53aaea: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 53aaed: jmp 0x53ab0c */
  goto L_53ab0c;
L_53aaef: /* 53aaef: xor eax, eax */
  eax = 0;
/* 53aaf1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53aaf3: jne 0x53aadd */
  if (!zf) goto L_53aadd;
L_53aaf5: /* 53aaf5: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 53aaf8: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 53aafb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53aafd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53aafe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53aaff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53ab00: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x53ab03u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53ab03: jmp 0x53aae0 */
  goto L_53aae0;
L_53ab05: /* 53ab05: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
L_53ab0c: /* 53ab0c: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 53ab0f: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53ab14u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53ab14: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 53ab17: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ab19: je 0x53ab44 */
  if (zf) goto L_53ab44;
L_53ab1b: /* 53ab1b: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 53ab1e: and ecx, 0x480 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x480u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 53ab24: cmp ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53ab2a: jne 0x53ab44 */
  if (!zf) goto L_53ab44;
L_53ab2c: /* 53ab2c: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 53ab2f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 53ab31: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53ab33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53ab34: mov ecx, esi */
  ecx = esi;
/* 53ab36: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x53ab3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53ab3c: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 53ab3f: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 53ab42: jmp 0x53ab0c */
  goto L_53ab0c;
L_53ab44: /* 53ab44: mov eax, 1 */
  eax = 0x1u;
/* 53ab49: jmp 0x53a8e9 */
  goto L_53a8e9;
}

void f_53a902(void) {
  LOAD_REGS();
  goto L_53a902;
L_53a8e7: /* 53a8e7: xor eax, eax */
  eax = 0;
L_53a8e9: /* 53a8e9: lea esp, [ebp - 0xc4] */
  esp = (uint32_t)(ebp + 0xffffff3cu);
/* 53a8ef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53a8f2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53a8f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53a8fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53a8fb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53a8fc: mov esp, ebp */
  esp = ebp;
/* 53a8fe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53a8ff: ret 0xc */
  esp += 16; SPILL(); return;
L_53a902: /* 53a902: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 53a904: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 53a906: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 53a90c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a90d: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 53a910: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53a911: call 0x4e3256 */
  esp -= 4; W32(esp, 0x53a916u); SPILL(); f_4e3256(); if (g_unwind) return; RELOAD();
/* 53a916: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53a919: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a91b: je 0x53a8e7 */
  if (zf) goto L_53a8e7;
L_53a91d: /* 53a91d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53a91e: lea edx, [ebp - 0xb8] */
  edx = (uint32_t)(ebp + 0xffffff48u);
/* 53a924: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53a925: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 53a928: call 0x4e36a7 */
  esp -= 4; W32(esp, 0x53a92du); SPILL(); f_4e36a7(); if (g_unwind) return; RELOAD();
/* 53a92d: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 53a92f: cmp edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a931: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 53a934: je 0x53a8e7 */
  if (zf) goto L_53a8e7;
L_53a936: /* 53a936: mov eax, dword ptr [esi + 0xc] */
  eax = R32((uint32_t)(esi + 0xcu));
/* 53a939: mov ecx, edx */
  ecx = edx;
/* 53a93b: and ecx, 0xff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 53a941: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a943: je 0x53aa4d */
  if (zf) goto L_53aa4d;
L_53a949: /* 53a949: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 53a94c: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a94e: je 0x53aa4d */
  if (zf) goto L_53aa4d;
L_53a954: /* 53a954: mov eax, dword ptr [eax + ecx*4 + 0x98] */
  eax = R32((uint32_t)(eax + ecx*4 + 0x98u));
/* 53a95b: jmp 0x53a960 */
  goto L_53a960;
L_53a960: /* 53a960: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a962: je 0x53aa4d */
  if (zf) goto L_53aa4d;
L_53a968: /* 53a968: cmp dword ptr [eax + 0x20], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x20u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a96b: jne 0x53aa45 */
  if (!zf) goto L_53aa45;
L_53a971: /* 53a971: mov ebx, eax */
  ebx = eax;
/* 53a973: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
L_53a976: /* 53a976: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a978: je 0x53a8e7 */
  if (zf) goto L_53a8e7;
L_53a97e: /* 53a97e: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 53a981: test dword ptr [eax + 0x498], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a98b: je 0x53a8e7 */
  if (zf) goto L_53a8e7;
L_53a991: /* 53a991: mov eax, dword ptr [ebx + 0x80] */
  eax = R32((uint32_t)(ebx + 0x80u));
/* 53a997: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53a99a: je 0x53a8e7 */
  if (zf) goto L_53a8e7;
L_53a9a0: /* 53a9a0: mov si, word ptr [ebx + 0x8a] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0x8au))) & 0xffffu);
/* 53a9a7: cmp si, di */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 53a9aa: je 0x53a9c5 */
  if (zf) goto L_53a9c5;
L_53a9ac: /* 53a9ac: movzx eax, si */
  eax = (uint32_t)((esi & 0xffffu));
/* 53a9af: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53a9b2: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 53a9b5: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53a9b8: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 53a9bb: call 0x554f80 */
  esp -= 4; W32(esp, 0x53a9c0u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 53a9c0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53a9c3: mov edi, esp */
  edi = esp;
L_53a9c5: /* 53a9c5: movzx eax, si */
  eax = (uint32_t)((esi & 0xffffu));
/* 53a9c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a9c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53a9ca: call 0x4e2ebe */
  esp -= 4; W32(esp, 0x53a9cfu); SPILL(); f_4e2ebe(); if (g_unwind) return; RELOAD();
/* 53a9cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53a9d2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53a9d3: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 53a9d6: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 53a9dd: call 0x4e14d3 */
  esp -= 4; W32(esp, 0x53a9e2u); SPILL(); f_4e14d3(); if (g_unwind) return; RELOAD();
/* 53a9e2: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
L_53a9e5: /* 53a9e5: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 53a9e8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a9ea: je 0x53aaef */
  if (zf) goto L_53aaef;
L_53a9f0: /* 53a9f0: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 53a9f3: and ecx, 0x480 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x480u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 53a9f9: cmp ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a9ff: jne 0x53aaef */
  if (!zf) goto L_53aaef;
L_53aa05: /* 53aa05: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53aa08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53aa0a: jne 0x53aa73 */
  if (!zf) goto L_53aa73;
L_53aa0c: /* 53aa0c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53aa0e: je 0x53aa73 */
  if (zf) goto L_53aa73;
L_53aa10: /* 53aa10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53aa11: call 0x4e2c6b */
  esp -= 4; W32(esp, 0x53aa16u); SPILL(); f_4e2c6b(); if (g_unwind) return; RELOAD();
/* 53aa16: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53aa19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53aa1b: je 0x53aa73 */
  if (zf) goto L_53aa73;
L_53aa1d: /* 53aa1d: mov edx, dword ptr [eax + 0x6c] */
  edx = R32((uint32_t)(eax + 0x6cu));
/* 53aa20: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53aa21: mov ecx, ebx */
  ecx = ebx;
/* 53aa23: call 0x4e2b3a */
  esp -= 4; W32(esp, 0x53aa28u); SPILL(); f_4e2b3a(); if (g_unwind) return; RELOAD();
/* 53aa28: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53aa2a: je 0x53aa73 */
  if (zf) goto L_53aa73;
L_53aa2c: /* 53aa2c: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 53aa2f: mov dword ptr [edi + eax], ebx */
  W32((uint32_t)(edi + eax), ebx);
L_53aa32: /* 53aa32: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 53aa35: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 53aa38: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 53aa3b: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53aa40u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53aa40: inc dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 53aa43: jmp 0x53a9e5 */
  goto L_53a9e5;
L_53aa45: /* 53aa45: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 53aa48: jmp 0x53a960 */
  goto L_53a960;
L_53aa4d: /* 53aa4d: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 53aa50: mov eax, dword ptr [eax + ecx*4 + 0x98] */
  eax = R32((uint32_t)(eax + ecx*4 + 0x98u));
L_53aa57: /* 53aa57: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53aa59: je 0x53a8e7 */
  if (zf) goto L_53a8e7;
L_53aa5f: /* 53aa5f: cmp dword ptr [eax + 0x20], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x20u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53aa62: jne 0x53aa6e */
  if (!zf) goto L_53aa6e;
L_53aa64: /* 53aa64: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 53aa67: mov ebx, eax */
  ebx = eax;
/* 53aa69: jmp 0x53a976 */
  goto L_53a976;
L_53aa6e: /* 53aa6e: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 53aa71: jmp 0x53aa57 */
  goto L_53aa57;
L_53aa73: /* 53aa73: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 53aa76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53aa77: call 0x4e3f94 */
  esp -= 4; W32(esp, 0x53aa7cu); SPILL(); f_4e3f94(); if (g_unwind) return; RELOAD();
/* 53aa7c: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 53aa7f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 53aa82: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 53aa84: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53aa87: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 53aa89: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53aa8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53aa8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53aa8d: mov ecx, esi */
  ecx = esi;
/* 53aa8f: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x53aa95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53aa95: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53aa97: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 53aa9a: jne 0x53aa32 */
  if (!zf) goto L_53aa32;
L_53aa9c: /* 53aa9c: test byte ptr [esi + 0x3c], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3cu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53aaa0: jne 0x53aaef */
  if (!zf) goto L_53aaef;
L_53aaa2: /* 53aaa2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53aaa4: push 0x5aa798 */
  { uint32_t v = 0x5aa798u; esp -= 4; W32(esp, v); }
/* 53aaa9: push 0x5aa7a4 */
  { uint32_t v = 0x5aa7a4u; esp -= 4; W32(esp, v); }
/* 53aaae: call 0x4e1613 */
  esp -= 4; W32(esp, 0x53aab3u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 53aab3: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 53aab9: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 53aabc: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 53aabf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53aac2: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 53aac5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53aac6: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 53aac9: mov ecx, dword ptr [ecx + edx*4] */
  ecx = R32((uint32_t)(ecx + edx*4));
/* 53aacc: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 53aacf: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 53aad2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53aad3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53aad4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53aad5: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53aadau); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53aada: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53aadd: /* 53aadd: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_53aae0: /* 53aae0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53aae2: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 53aae5: je 0x53ab05 */
  if (zf) goto L_53ab05;
L_53aae7: /* 53aae7: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 53aaea: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 53aaed: jmp 0x53ab0c */
  goto L_53ab0c;
L_53aaef: /* 53aaef: xor eax, eax */
  eax = 0;
/* 53aaf1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53aaf3: jne 0x53aadd */
  if (!zf) goto L_53aadd;
L_53aaf5: /* 53aaf5: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 53aaf8: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 53aafb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53aafd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53aafe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53aaff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53ab00: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x53ab03u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53ab03: jmp 0x53aae0 */
  goto L_53aae0;
L_53ab05: /* 53ab05: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
L_53ab0c: /* 53ab0c: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 53ab0f: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53ab14u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53ab14: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 53ab17: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ab19: je 0x53ab44 */
  if (zf) goto L_53ab44;
L_53ab1b: /* 53ab1b: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 53ab1e: and ecx, 0x480 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x480u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 53ab24: cmp ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53ab2a: jne 0x53ab44 */
  if (!zf) goto L_53ab44;
L_53ab2c: /* 53ab2c: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 53ab2f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 53ab31: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53ab33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53ab34: mov ecx, esi */
  ecx = esi;
/* 53ab36: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x53ab3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53ab3c: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 53ab3f: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 53ab42: jmp 0x53ab0c */
  goto L_53ab0c;
L_53ab44: /* 53ab44: mov eax, 1 */
  eax = 0x1u;
/* 53ab49: jmp 0x53a8e9 */
  goto L_53a8e9;
}

void f_53a95d(void) {
  LOAD_REGS();
  goto L_53a95d;
L_53a8e7: /* 53a8e7: xor eax, eax */
  eax = 0;
L_53a8e9: /* 53a8e9: lea esp, [ebp - 0xc4] */
  esp = (uint32_t)(ebp + 0xffffff3cu);
/* 53a8ef: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53a8f2: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53a8f9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53a8fa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53a8fb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53a8fc: mov esp, ebp */
  esp = ebp;
/* 53a8fe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53a8ff: ret 0xc */
  esp += 16; SPILL(); return;
L_53a95d: /* 53a95d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_53a960: /* 53a960: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a962: je 0x53aa4d */
  if (zf) goto L_53aa4d;
L_53a968: /* 53a968: cmp dword ptr [eax + 0x20], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x20u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a96b: jne 0x53aa45 */
  if (!zf) goto L_53aa45;
L_53a971: /* 53a971: mov ebx, eax */
  ebx = eax;
/* 53a973: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
L_53a976: /* 53a976: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a978: je 0x53a8e7 */
  if (zf) goto L_53a8e7;
L_53a97e: /* 53a97e: mov eax, dword ptr [ebx + 0x24] */
  eax = R32((uint32_t)(ebx + 0x24u));
/* 53a981: test dword ptr [eax + 0x498], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x498u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a98b: je 0x53a8e7 */
  if (zf) goto L_53a8e7;
L_53a991: /* 53a991: mov eax, dword ptr [ebx + 0x80] */
  eax = R32((uint32_t)(ebx + 0x80u));
/* 53a997: test ah, 2 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53a99a: je 0x53a8e7 */
  if (zf) goto L_53a8e7;
L_53a9a0: /* 53a9a0: mov si, word ptr [ebx + 0x8a] */
  esi = (esi & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebx + 0x8au))) & 0xffffu);
/* 53a9a7: cmp si, di */
  { uint16_t a = (uint16_t)((esi & 0xffffu)); uint16_t b = (uint16_t)((edi & 0xffffu));
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 53a9aa: je 0x53a9c5 */
  if (zf) goto L_53a9c5;
L_53a9ac: /* 53a9ac: movzx eax, si */
  eax = (uint32_t)((esi & 0xffffu));
/* 53a9af: add eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53a9b2: and eax, 0xfffffff8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 53a9b5: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53a9b8: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 53a9bb: call 0x554f80 */
  esp -= 4; W32(esp, 0x53a9c0u); SPILL(); f_554f80(); if (g_unwind) return; RELOAD();
/* 53a9c0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53a9c3: mov edi, esp */
  edi = esp;
L_53a9c5: /* 53a9c5: movzx eax, si */
  eax = (uint32_t)((esi & 0xffffu));
/* 53a9c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53a9c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53a9ca: call 0x4e2ebe */
  esp -= 4; W32(esp, 0x53a9cfu); SPILL(); f_4e2ebe(); if (g_unwind) return; RELOAD();
/* 53a9cf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53a9d2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53a9d3: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 53a9d6: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 53a9dd: call 0x4e14d3 */
  esp -= 4; W32(esp, 0x53a9e2u); SPILL(); f_4e14d3(); if (g_unwind) return; RELOAD();
/* 53a9e2: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
L_53a9e5: /* 53a9e5: mov esi, dword ptr [ebp - 0x2c] */
  esi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 53a9e8: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53a9ea: je 0x53aaef */
  if (zf) goto L_53aaef;
L_53a9f0: /* 53a9f0: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 53a9f3: and ecx, 0x480 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x480u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 53a9f9: cmp ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53a9ff: jne 0x53aaef */
  if (!zf) goto L_53aaef;
L_53aa05: /* 53aa05: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53aa08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53aa0a: jne 0x53aa73 */
  if (!zf) goto L_53aa73;
L_53aa0c: /* 53aa0c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53aa0e: je 0x53aa73 */
  if (zf) goto L_53aa73;
L_53aa10: /* 53aa10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53aa11: call 0x4e2c6b */
  esp -= 4; W32(esp, 0x53aa16u); SPILL(); f_4e2c6b(); if (g_unwind) return; RELOAD();
/* 53aa16: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53aa19: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53aa1b: je 0x53aa73 */
  if (zf) goto L_53aa73;
L_53aa1d: /* 53aa1d: mov edx, dword ptr [eax + 0x6c] */
  edx = R32((uint32_t)(eax + 0x6cu));
/* 53aa20: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53aa21: mov ecx, ebx */
  ecx = ebx;
/* 53aa23: call 0x4e2b3a */
  esp -= 4; W32(esp, 0x53aa28u); SPILL(); f_4e2b3a(); if (g_unwind) return; RELOAD();
/* 53aa28: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53aa2a: je 0x53aa73 */
  if (zf) goto L_53aa73;
L_53aa2c: /* 53aa2c: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 53aa2f: mov dword ptr [edi + eax], ebx */
  W32((uint32_t)(edi + eax), ebx);
L_53aa32: /* 53aa32: mov eax, dword ptr [esi + 0x2c] */
  eax = R32((uint32_t)(esi + 0x2cu));
/* 53aa35: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 53aa38: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 53aa3b: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53aa40u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53aa40: inc dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 53aa43: jmp 0x53a9e5 */
  goto L_53a9e5;
L_53aa45: /* 53aa45: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 53aa48: jmp 0x53a960 */
  goto L_53a960;
L_53aa4d: /* 53aa4d: mov eax, dword ptr [esi + 0x24] */
  eax = R32((uint32_t)(esi + 0x24u));
/* 53aa50: mov eax, dword ptr [eax + ecx*4 + 0x98] */
  eax = R32((uint32_t)(eax + ecx*4 + 0x98u));
L_53aa57: /* 53aa57: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53aa59: je 0x53a8e7 */
  if (zf) goto L_53a8e7;
L_53aa5f: /* 53aa5f: cmp dword ptr [eax + 0x20], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x20u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53aa62: jne 0x53aa6e */
  if (!zf) goto L_53aa6e;
L_53aa64: /* 53aa64: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 53aa67: mov ebx, eax */
  ebx = eax;
/* 53aa69: jmp 0x53a976 */
  goto L_53a976;
L_53aa6e: /* 53aa6e: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 53aa71: jmp 0x53aa57 */
  goto L_53aa57;
L_53aa73: /* 53aa73: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 53aa76: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53aa77: call 0x4e3f94 */
  esp -= 4; W32(esp, 0x53aa7cu); SPILL(); f_4e3f94(); if (g_unwind) return; RELOAD();
/* 53aa7c: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 53aa7f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 53aa82: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 53aa84: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53aa87: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 53aa89: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53aa8b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53aa8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53aa8d: mov ecx, esi */
  ecx = esi;
/* 53aa8f: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x53aa95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53aa95: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53aa97: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 53aa9a: jne 0x53aa32 */
  if (!zf) goto L_53aa32;
L_53aa9c: /* 53aa9c: test byte ptr [esi + 0x3c], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x3cu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53aaa0: jne 0x53aaef */
  if (!zf) goto L_53aaef;
L_53aaa2: /* 53aaa2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53aaa4: push 0x5aa798 */
  { uint32_t v = 0x5aa798u; esp -= 4; W32(esp, v); }
/* 53aaa9: push 0x5aa7a4 */
  { uint32_t v = 0x5aa7a4u; esp -= 4; W32(esp, v); }
/* 53aaae: call 0x4e1613 */
  esp -= 4; W32(esp, 0x53aab3u); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 53aab3: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 53aab9: mov edx, dword ptr [esi + 0x20] */
  edx = R32((uint32_t)(esi + 0x20u));
/* 53aabc: mov edx, dword ptr [ecx + edx*4] */
  edx = R32((uint32_t)(ecx + edx*4));
/* 53aabf: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53aac2: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 53aac5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53aac6: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 53aac9: mov ecx, dword ptr [ecx + edx*4] */
  ecx = R32((uint32_t)(ecx + edx*4));
/* 53aacc: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 53aacf: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 53aad2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53aad3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53aad4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53aad5: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53aadau); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53aada: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53aadd: /* 53aadd: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_53aae0: /* 53aae0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53aae2: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 53aae5: je 0x53ab05 */
  if (zf) goto L_53ab05;
L_53aae7: /* 53aae7: mov eax, dword ptr [esi + 0x3c] */
  eax = R32((uint32_t)(esi + 0x3cu));
/* 53aaea: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 53aaed: jmp 0x53ab0c */
  goto L_53ab0c;
L_53aaef: /* 53aaef: xor eax, eax */
  eax = 0;
/* 53aaf1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53aaf3: jne 0x53aadd */
  if (!zf) goto L_53aadd;
L_53aaf5: /* 53aaf5: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 53aaf8: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 53aafb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 53aafd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53aafe: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53aaff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53ab00: call dword ptr [edx + 0x10] */
  { uint32_t t = R32((uint32_t)(edx + 0x10u)); esp -= 4; W32(esp, 0x53ab03u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53ab03: jmp 0x53aae0 */
  goto L_53aae0;
L_53ab05: /* 53ab05: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
L_53ab0c: /* 53ab0c: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 53ab0f: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53ab14u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53ab14: mov esi, dword ptr [ebp - 0x1c] */
  esi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 53ab17: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ab19: je 0x53ab44 */
  if (zf) goto L_53ab44;
L_53ab1b: /* 53ab1b: mov ecx, dword ptr [esi + 0x3c] */
  ecx = R32((uint32_t)(esi + 0x3cu));
/* 53ab1e: and ecx, 0x480 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x480u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 53ab24: cmp ecx, 0x80 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x80u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53ab2a: jne 0x53ab44 */
  if (!zf) goto L_53ab44;
L_53ab2c: /* 53ab2c: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 53ab2f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 53ab31: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53ab33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53ab34: mov ecx, esi */
  ecx = esi;
/* 53ab36: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x53ab3cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53ab3c: mov ecx, dword ptr [esi + 0x2c] */
  ecx = R32((uint32_t)(esi + 0x2cu));
/* 53ab3f: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 53ab42: jmp 0x53ab0c */
  goto L_53ab0c;
L_53ab44: /* 53ab44: mov eax, 1 */
  eax = 0x1u;
/* 53ab49: jmp 0x53a8e9 */
  goto L_53a8e9;
}

void f_53ab4e(void) {
  LOAD_REGS();
L_53ab4e: /* 53ab4e: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 53ab51: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53ab56: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 53ab59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53ab5a: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 53ab5d: call 0x554df6 */
  esp -= 4; W32(esp, 0x53ab62u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53ab62(); return;
}

void f_53ab62(void) {
  LOAD_REGS();
L_53ab62: /* 53ab62: push 0x56dd74 */
  { uint32_t v = 0x56dd74u; esp -= 4; W32(esp, v); }
/* 53ab67: push 0x5aa7bc */
  { uint32_t v = 0x5aa7bcu; esp -= 4; W32(esp, v); }
/* 53ab6c: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53ab71u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53ab71: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 53ab74: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53ab77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53ab79: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53ab7eu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53ab7e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53ab7f: push 0x5aa7c4 */
  { uint32_t v = 0x5aa7c4u; esp -= 4; W32(esp, v); }
/* 53ab84: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53ab89u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53ab89: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53ab8c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53ab8e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53ab90: call 0x554df6 */
  esp -= 4; W32(esp, 0x53ab95u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53ab95: guest_badaddr(0x53ab95); return;
}

void f_53ac60(void) {
  LOAD_REGS();
L_53ac60: /* 53ac60: mov eax, dword ptr [0x5b2118] */
  eax = R32((uint32_t)(0x5b2118u));
/* 53ac65: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ac67: jne 0x53ac6e */
  if (!zf) goto L_53ac6e;
L_53ac69: /* 53ac69: xor eax, eax */
  eax = 0;
/* 53ac6b: ret 8 */
  esp += 12; SPILL(); return;
L_53ac6e: /* 53ac6e: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 53ac72: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53ac73: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 53ac77: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53ac78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53ac79: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53ac7a: call 0x4e3c15 */
  esp -= 4; W32(esp, 0x53ac7fu); SPILL(); f_4e3c15(); if (g_unwind) return; RELOAD();
/* 53ac7f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ac81: je 0x53ac99 */
  if (zf) goto L_53ac99;
L_53ac83: /* 53ac83: mov edx, dword ptr [eax + 0x24] */
  edx = R32((uint32_t)(eax + 0x24u));
/* 53ac86: test dword ptr [edx + 0x498], 0x80000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x498u))); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53ac90: je 0x53ac99 */
  if (zf) goto L_53ac99;
L_53ac92: /* 53ac92: mov edi, eax */
  edi = eax;
/* 53ac94: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53ac95: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53ac96: ret 8 */
  esp += 12; SPILL(); return;
L_53ac99: /* 53ac99: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 53ac9e: mov esi, dword ptr [eax + esi*4] */
  esi = R32((uint32_t)(eax + esi*4));
/* 53aca1: xor edi, edi */
  edi = 0;
/* 53aca3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53aca4: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 53aca7: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53acacu); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53acac: mov ecx, dword ptr [0x5a0c94] */
  ecx = R32((uint32_t)(0x5a0c94u));
/* 53acb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53acb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53acb4: push 0x5aa7d0 */
  { uint32_t v = 0x5aa7d0u; esp -= 4; W32(esp, v); }
/* 53acb9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53acba: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53acbfu); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53acbf: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53acc2: mov eax, edi */
  eax = edi;
/* 53acc4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53acc5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53acc6: ret 8 */
  esp += 12; SPILL(); return;
}

void f_53acf0(void) {
  LOAD_REGS();
L_53acf0: /* 53acf0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53acf1: mov ebp, esp */
  ebp = esp;
/* 53acf3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53acf5: push 0x558a80 */
  { uint32_t v = 0x558a80u; esp -= 4; W32(esp, v); }
/* 53acfa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53ad00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53ad01: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53ad08: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53ad0b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 53ad0e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53ad0f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53ad10: xor ebx, ebx */
  ebx = 0;
/* 53ad12: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53ad14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53ad15: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53ad18: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 53ad1b: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 53ad1e: je 0x53ad28 */
  if (zf) goto L_53ad28;
L_53ad20: /* 53ad20: mov eax, dword ptr [eax + 0x3c] */
  eax = R32((uint32_t)(eax + 0x3cu));
/* 53ad23: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 53ad26: jmp 0x53ad2b */
  goto L_53ad2b;
L_53ad28: /* 53ad28: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
L_53ad2b: /* 53ad2b: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 53ad2e: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53ad33u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53ad33: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 53ad36: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53ad38: je 0x53aee5 */
  if (zf) goto L_53aee5;
L_53ad3e: /* 53ad3e: xor esi, esi */
  esi = 0;
L_53ad40: /* 53ad40: cmp esi, dword ptr [edi + 0x34] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53ad43: mov dword ptr [ebp + 8], esi */
  W32((uint32_t)(ebp + 0x8u), esi);
/* 53ad46: jge 0x53aeab */
  if ((sf == of)) goto L_53aeab;
L_53ad4c: /* 53ad4c: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 53ad4f: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 53ad52: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 53ad55: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 53ad58: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53ad5a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 53ad5e: je 0x53adda */
  if (zf) goto L_53adda;
L_53ad60: /* 53ad60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53ad61: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 53ad64: push 0x5aa850 */
  { uint32_t v = 0x5aa850u; esp -= 4; W32(esp, v); }
/* 53ad69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53ad6a: call 0x4e17e4 */
  esp -= 4; W32(esp, 0x53ad6fu); SPILL(); f_4e17e4(); if (g_unwind) return; RELOAD();
/* 53ad6f: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53ad72: mov esi, eax */
  esi = eax;
/* 53ad74: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 53ad77: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53ad79: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 53ad7d: je 0x53adb7 */
  if (zf) goto L_53adb7;
L_53ad7f: /* 53ad7f: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 53ad82: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53ad84: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 53ad87: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 53ad8a: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 53ad8d: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53ad92u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53ad92: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 53ad95: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53ad97: je 0x53adb7 */
  if (zf) goto L_53adb7;
L_53ad99: /* 53ad99: cmp dword ptr [esi + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53ad9c: je 0x53ada2 */
  if (zf) goto L_53ada2;
L_53ad9e: /* 53ad9e: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 53ada0: jmp 0x53ada7 */
  goto L_53ada7;
L_53ada2: /* 53ada2: mov esi, 0x5ed66c */
  esi = 0x5ed66cu;
L_53ada7: /* 53ada7: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 53adaa: add eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53adac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53adad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53adae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53adaf: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x53adb4u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 53adb4: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53adb7: /* 53adb7: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53adb9: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 53adbc: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 53adc0: mov dword ptr [ebp - 0x34], ebx */
  W32((uint32_t)(ebp + 0xffffffccu), ebx);
/* 53adc3: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 53adc6: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53adcbu); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53adcb: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 53adce: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 53add2: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53add7u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53add7: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_53adda: /* 53adda: cmp dword ptr [edi + 0x34], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x34u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53adde: jle 0x53ae3e */
  if ((zf || sf != of)) goto L_53ae3e;
L_53ade0: /* 53ade0: mov edx, dword ptr [edi + 0x20] */
  edx = R32((uint32_t)(edi + 0x20u));
/* 53ade3: mov eax, dword ptr [0x69a758] */
  eax = R32((uint32_t)(0x69a758u));
/* 53ade8: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* 53adeb: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53adec: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 53adef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53adf0: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 53adf3: push 0x5aa858 */
  { uint32_t v = 0x5aa858u; esp -= 4; W32(esp, v); }
/* 53adf8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53adf9: call 0x4e17e4 */
  esp -= 4; W32(esp, 0x53adfeu); SPILL(); f_4e17e4(); if (g_unwind) return; RELOAD();
/* 53adfe: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53ae01: cmp dword ptr [eax + 4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x4u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53ae04: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 53ae08: je 0x53ae0e */
  if (zf) goto L_53ae0e;
L_53ae0a: /* 53ae0a: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 53ae0c: jmp 0x53ae13 */
  goto L_53ae13;
L_53ae0e: /* 53ae0e: mov eax, 0x5ed66c */
  eax = 0x5ed66cu;
L_53ae13: /* 53ae13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53ae14: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 53ae17: call 0x4e180c */
  esp -= 4; W32(esp, 0x53ae1cu); SPILL(); f_4e180c(); if (g_unwind) return; RELOAD();
/* 53ae1c: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53ae1e: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 53ae21: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 53ae25: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 53ae28: mov dword ptr [ebp - 0x3c], ebx */
  W32((uint32_t)(ebp + 0xffffffc4u), ebx);
/* 53ae2b: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53ae30u); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53ae30: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 53ae33: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 53ae37: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53ae3cu); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53ae3c: jmp 0x53ae56 */
  goto L_53ae56;
L_53ae3e: /* 53ae3e: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 53ae44: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 53ae47: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 53ae4a: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 53ae4d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53ae4e: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 53ae51: call 0x4e180c */
  esp -= 4; W32(esp, 0x53ae56u); SPILL(); f_4e180c(); if (g_unwind) return; RELOAD();
L_53ae56: /* 53ae56: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 53ae59: mov ecx, dword ptr [edi + 0x48] */
  ecx = R32((uint32_t)(edi + 0x48u));
/* 53ae5c: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 53ae5f: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 53ae62: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53ae64: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 53ae67: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53ae69: cmp ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53ae6b: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 53ae6e: jne 0x53ae75 */
  if (!zf) goto L_53ae75;
L_53ae70: /* 53ae70: mov ecx, 0x5ed66c */
  ecx = 0x5ed66cu;
L_53ae75: /* 53ae75: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 53ae78: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53ae79: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 53ae7c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53ae7d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53ae7e: call 0x537d80 */
  esp -= 4; W32(esp, 0x53ae83u); SPILL(); f_537d80(); if (g_unwind) return; RELOAD();
/* 53ae83: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53ae86: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 53ae88: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 53ae8b: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 53ae8f: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 53ae92: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 53ae95: call 0x4e4502 */
  esp -= 4; W32(esp, 0x53ae9au); SPILL(); f_4e4502(); if (g_unwind) return; RELOAD();
/* 53ae9a: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 53ae9d: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 53aea0: call 0x4e2ecd */
  esp -= 4; W32(esp, 0x53aea5u); SPILL(); f_4e2ecd(); if (g_unwind) return; RELOAD();
/* 53aea5: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 53aea6: jmp 0x53ad40 */
  goto L_53ad40;
L_53aeab: /* 53aeab: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 53aeae: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 53aeb1: jmp 0x53ad2b */
  goto L_53ad2b;
L_53aee5: /* 53aee5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53aee8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53aee9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53aeea: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53aef1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53aef2: mov esp, ebp */
  esp = ebp;
/* 53aef4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53aef5: ret  */
  esp += 4; SPILL(); return;
}

void f_53aeb6(void) {
  LOAD_REGS();
L_53aeb6: /* 53aeb6: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53aeb9: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53aebe: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 53aec1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53aec2: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 53aec5: call 0x554df6 */
  esp -= 4; W32(esp, 0x53aecau); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53aeca(); return;
}

void f_53aeca(void) {
  LOAD_REGS();
L_53aeca: /* 53aeca: push 0x56ddb4 */
  { uint32_t v = 0x56ddb4u; esp -= 4; W32(esp, v); }
/* 53aecf: push 0x5aa868 */
  { uint32_t v = 0x5aa868u; esp -= 4; W32(esp, v); }
/* 53aed4: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53aed9u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53aed9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53aedc: xor ebx, ebx */
  ebx = 0;
/* 53aede: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53aedf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53aee0: call 0x554df6 */
  esp -= 4; W32(esp, 0x53aee5u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 53aee5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53aee8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53aee9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53aeea: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53aef1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53aef2: mov esp, ebp */
  esp = ebp;
/* 53aef4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53aef5: ret  */
  esp += 4; SPILL(); return;
}

void f_53af90(void) {
  LOAD_REGS();
L_53af90: /* 53af90: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53af91: mov ebp, esp */
  ebp = esp;
/* 53af93: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53af95: push 0x558aa0 */
  { uint32_t v = 0x558aa0u; esp -= 4; W32(esp, v); }
/* 53af9a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53afa0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53afa1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53afa8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53afab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53afac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53afad: mov esi, dword ptr [ecx + 0x24] */
  esi = R32((uint32_t)(ecx + 0x24u));
/* 53afb0: test byte ptr [esi + 0x498], 0x20 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x498u))); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53afb7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53afb8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53afbb: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 53afbe: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53afc5: je 0x53b018 */
  if (zf) goto L_53b018;
L_53afc7: /* 53afc7: mov eax, dword ptr [0x5b211c] */
  eax = R32((uint32_t)(0x5b211cu));
/* 53afcc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53afce: jne 0x53b018 */
  if (!zf) goto L_53b018;
L_53afd0: /* 53afd0: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 53afd3: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53afd6: je 0x53b02e */
  if (zf) goto L_53b02e;
L_53afd8: /* 53afd8: mov eax, dword ptr [ecx + 0x1c] */
  eax = R32((uint32_t)(ecx + 0x1cu));
/* 53afdb: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53afde: je 0x53b029 */
  if (zf) goto L_53b029;
L_53afe0: /* 53afe0: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* 53afe3: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 53afe6: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53afe8: je 0x53b029 */
  if (zf) goto L_53b029;
L_53afea: /* 53afea: mov edi, dword ptr [ecx + 0x20] */
  edi = R32((uint32_t)(ecx + 0x20u));
/* 53afed: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 53aff0: mov edx, dword ptr [edx + 0x20] */
  edx = R32((uint32_t)(edx + 0x20u));
/* 53aff3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53aff4: mov ecx, dword ptr [0x69a758] */
  ecx = R32((uint32_t)(0x69a758u));
/* 53affa: mov edi, dword ptr [ecx + edi*4] */
  edi = R32((uint32_t)(ecx + edi*4));
/* 53affd: mov eax, dword ptr [ecx + eax*4] */
  eax = R32((uint32_t)(ecx + eax*4));
/* 53b000: add edi, 0xc */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 53b003: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53b006: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53b007: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53b008: mov eax, dword ptr [ecx + edx*4] */
  eax = R32((uint32_t)(ecx + edx*4));
/* 53b00b: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
L_53b00e: /* 53b00e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53b00f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53b010: call 0x53acf0 */
  esp -= 4; W32(esp, 0x53b015u); SPILL(); f_53acf0(); if (g_unwind) return; RELOAD();
/* 53b015: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53b018: /* 53b018: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53b01b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53b01c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53b01d: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53b024: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53b025: mov esp, ebp */
  esp = ebp;
/* 53b027: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53b028: ret  */
  esp += 4; SPILL(); return;
L_53b029: /* 53b029: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53b02c: jne 0x53b033 */
  if (!zf) goto L_53b033;
L_53b02e: /* 53b02e: mov eax, dword ptr [esi + 0x18] */
  eax = R32((uint32_t)(esi + 0x18u));
/* 53b031: jmp 0x53b036 */
  goto L_53b036;
L_53b033: /* 53b033: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
L_53b036: /* 53b036: mov eax, dword ptr [eax + 0x20] */
  eax = R32((uint32_t)(eax + 0x20u));
/* 53b039: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53b03f: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 53b042: add eax, 0xc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53b045: cmp edi, -1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53b048: jne 0x53b059 */
  if (!zf) goto L_53b059;
L_53b04a: /* 53b04a: mov edi, dword ptr [esi + 0x20] */
  edi = R32((uint32_t)(esi + 0x20u));
/* 53b04d: mov edx, dword ptr [edx + edi*4] */
  edx = R32((uint32_t)(edx + edi*4));
/* 53b050: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53b051: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 53b054: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53b056: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53b057: jmp 0x53b00e */
  goto L_53b00e;
L_53b059: /* 53b059: mov edi, dword ptr [ecx + 0x20] */
  edi = R32((uint32_t)(ecx + 0x20u));
/* 53b05c: mov edx, dword ptr [edx + edi*4] */
  edx = R32((uint32_t)(edx + edi*4));
/* 53b05f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53b060: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 53b063: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53b065: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53b066: jmp 0x53b00e */
  goto L_53b00e;
}

void f_53b068(void) {
  LOAD_REGS();
L_53b068: /* 53b068: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 53b06b: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53b070: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 53b073: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53b074: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 53b077: call 0x554df6 */
  esp -= 4; W32(esp, 0x53b07cu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53b07c(); return;
}

void f_53b07c(void) {
  LOAD_REGS();
L_53b07c: /* 53b07c: push 0x56dde4 */
  { uint32_t v = 0x56dde4u; esp -= 4; W32(esp, v); }
/* 53b081: push 0x5aa870 */
  { uint32_t v = 0x5aa870u; esp -= 4; W32(esp, v); }
/* 53b086: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53b08bu); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53b08b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53b08e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53b091: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53b093: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53b098u); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53b098: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53b099: push 0x5aa878 */
  { uint32_t v = 0x5aa878u; esp -= 4; W32(esp, v); }
/* 53b09e: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53b0a3u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53b0a3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53b0a6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53b0a8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53b0aa: call 0x554df6 */
  esp -= 4; W32(esp, 0x53b0afu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53b0af: guest_badaddr(0x53b0af); return;
}

void f_53b100(void) {
  LOAD_REGS();
L_53b100: /* 53b100: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 53b104: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 53b10a: xor eax, eax */
  eax = 0;
/* 53b10c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_53b120(void) {
  LOAD_REGS();
L_53b120: /* 53b120: xor eax, eax */
  eax = 0;
/* 53b122: ret 4 */
  esp += 8; SPILL(); return;
}

void f_53b140(void) {
  LOAD_REGS();
L_53b140: /* 53b140: xor eax, eax */
  eax = 0;
/* 53b142: ret 4 */
  esp += 8; SPILL(); return;
}

void f_53b160(void) {
  LOAD_REGS();
L_53b160: /* 53b160: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53b161: mov ebp, esp */
  ebp = esp;
/* 53b163: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53b165: push 0x558ab0 */
  { uint32_t v = 0x558ab0u; esp -= 4; W32(esp, v); }
/* 53b16a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53b170: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53b171: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53b178: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53b17b: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 53b17e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53b17f: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 53b182: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53b183: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 53b186: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53b187: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 53b18a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53b18d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53b18e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53b18f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53b190: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53b191: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53b198: call 0x4e3c65 */
  esp -= 4; W32(esp, 0x53b19du); SPILL(); f_4e3c65(); if (g_unwind) return; RELOAD();
/* 53b19d: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53b1a0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53b1a2: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 53b1a5: jne 0x53b206 */
  if (!zf) goto L_53b206;
L_53b1a7: /* 53b1a7: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 53b1aa: jne 0x53b1b3 */
  if (!zf) goto L_53b1b3;
L_53b1ac: /* 53b1ac: mov esi, 0x5aa948 */
  esi = 0x5aa948u;
/* 53b1b1: jmp 0x53b1cd */
  goto L_53b1cd;
L_53b1b3: /* 53b1b3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53b1b5: je 0x53b1c8 */
  if (zf) goto L_53b1c8;
L_53b1b7: /* 53b1b7: mov ecx, dword ptr [esi + 0x20] */
  ecx = R32((uint32_t)(esi + 0x20u));
/* 53b1ba: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53b1c0: mov esi, dword ptr [edx + ecx*4] */
  esi = R32((uint32_t)(edx + ecx*4));
/* 53b1c3: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 53b1c6: jmp 0x53b1cd */
  goto L_53b1cd;
L_53b1c8: /* 53b1c8: mov esi, 0x5aa950 */
  esi = 0x5aa950u;
L_53b1cd: /* 53b1cd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53b1cf: push 0x5aa95c */
  { uint32_t v = 0x5aa95cu; esp -= 4; W32(esp, v); }
/* 53b1d4: push 0x5aa968 */
  { uint32_t v = 0x5aa968u; esp -= 4; W32(esp, v); }
/* 53b1d9: call 0x4e1613 */
  esp -= 4; W32(esp, 0x53b1deu); SPILL(); f_4e1613(); if (g_unwind) return; RELOAD();
/* 53b1de: mov edx, dword ptr [0x69a758] */
  edx = R32((uint32_t)(0x69a758u));
/* 53b1e4: mov ecx, dword ptr [ebx + 0x20] */
  ecx = R32((uint32_t)(ebx + 0x20u));
/* 53b1e7: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 53b1ea: mov edx, dword ptr [0x5a0c94] */
  edx = R32((uint32_t)(0x5a0c94u));
/* 53b1f0: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53b1f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53b1f4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53b1f5: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 53b1f8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53b1f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53b1fa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53b1fb: call 0x4e2d4c */
  esp -= 4; W32(esp, 0x53b200u); SPILL(); f_4e2d4c(); if (g_unwind) return; RELOAD();
/* 53b200: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 53b203: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53b206: /* 53b206: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53b209: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53b20a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53b20b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53b212: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53b213: mov esp, ebp */
  esp = ebp;
/* 53b215: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53b216: ret  */
  esp += 4; SPILL(); return;
}

void f_53b217(void) {
  LOAD_REGS();
L_53b217: /* 53b217: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 53b21a: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53b21f: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 53b222: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53b223: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 53b226: call 0x554df6 */
  esp -= 4; W32(esp, 0x53b22bu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53b22b(); return;
}

void f_53b22b(void) {
  LOAD_REGS();
L_53b22b: /* 53b22b: push 0x56de20 */
  { uint32_t v = 0x56de20u; esp -= 4; W32(esp, v); }
/* 53b230: push 0x5aa988 */
  { uint32_t v = 0x5aa988u; esp -= 4; W32(esp, v); }
/* 53b235: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53b23au); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53b23a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53b23d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53b23f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53b241: call 0x554df6 */
  esp -= 4; W32(esp, 0x53b246u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
L_53b246: guest_badaddr(0x53b246); return;
}

void f_53b290(void) {
  LOAD_REGS();
L_53b290: /* 53b290: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53b291: mov ebp, esp */
  ebp = esp;
/* 53b293: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53b295: push 0x558ac0 */
  { uint32_t v = 0x558ac0u; esp -= 4; W32(esp, v); }
/* 53b29a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53b2a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53b2a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53b2a8: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53b2ab: cmp dword ptr [ebp + 0xc], 0x28 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu))); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 53b2af: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53b2b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53b2b1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53b2b2: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53b2b5: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 53b2bc: jae 0x53b2d5 */
  if (!cf) goto L_53b2d5;
L_53b2be: /* 53b2be: push 0x4b7 */
  { uint32_t v = 0x4b7u; esp -= 4; W32(esp, v); }
/* 53b2c3: push 0x5aa990 */
  { uint32_t v = 0x5aa990u; esp -= 4; W32(esp, v); }
/* 53b2c8: push 0x5aa99c */
  { uint32_t v = 0x5aa99cu; esp -= 4; W32(esp, v); }
/* 53b2cd: call 0x4e33a5 */
  esp -= 4; W32(esp, 0x53b2d2u); SPILL(); f_4e33a5(); if (g_unwind) return; RELOAD();
/* 53b2d2: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53b2d5: /* 53b2d5: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 53b2d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53b2da: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 53b2dd: mov edx, 0x28 */
  edx = 0x28u;
/* 53b2e2: jne 0x53b353 */
  if (!zf) goto L_53b353;
L_53b2e4: /* 53b2e4: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53b2e6: je 0x53b304 */
  if (zf) goto L_53b304;
L_53b2e8: /* 53b2e8: mov eax, dword ptr [ebx + 0x4ec] */
  eax = R32((uint32_t)(ebx + 0x4ecu));
/* 53b2ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53b2f0: je 0x53b304 */
  if (zf) goto L_53b304;
L_53b2f2: /* 53b2f2: mov ecx, dword ptr [ebx + 0x4e8] */
  ecx = R32((uint32_t)(ebx + 0x4e8u));
/* 53b2f8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53b2fa: mov edi, eax */
  edi = eax;
/* 53b2fc: mov dword ptr [ebp + 0x14], ecx */
  W32((uint32_t)(ebp + 0x14u), ecx);
/* 53b2ff: mov dword ptr [ebp + 0x18], edi */
  W32((uint32_t)(ebp + 0x18u), edi);
/* 53b302: jne 0x53b356 */
  if (!zf) goto L_53b356;
L_53b304: /* 53b304: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
L_53b307: /* 53b307: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 53b30a: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53b30c: jge 0x53b331 */
  if ((sf == of)) goto L_53b331;
L_53b30e: /* 53b30e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 53b310: add edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 53b312: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 53b315: mov dword ptr [ebp + 0xc], edx */
  W32((uint32_t)(ebp + 0xcu), edx);
/* 53b318: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 53b31b: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 53b31e: xor eax, eax */
  eax = 0;
/* 53b320: mov ebx, ecx */
  ebx = ecx;
/* 53b322: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 53b325: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 53b328: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 53b32a: mov ecx, ebx */
  ecx = ebx;
/* 53b32c: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 53b32e: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
L_53b331: /* 53b331: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* 53b334: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53b336: je 0x53b3b7 */
  if (zf) goto L_53b3b7;
L_53b338: /* 53b338: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* 53b33b: mov eax, dword ptr [eax + 0x24] */
  eax = R32((uint32_t)(eax + 0x24u));
/* 53b33e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53b340: mov ebx, dword ptr [ebx + 0x4e8] */
  ebx = R32((uint32_t)(ebx + 0x4e8u));
/* 53b346: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 53b349: je 0x53b374 */
  if (zf) goto L_53b374;
L_53b34b: /* 53b34b: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* 53b34e: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 53b351: jmp 0x53b37b */
  goto L_53b37b;
L_53b353: /* 53b353: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
L_53b356: /* 53b356: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 53b359: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 53b35c: lea eax, [edi - 0x28] */
  eax = (uint32_t)(edi + 0xffffffd8u);
/* 53b35f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53b360: add ecx, 0x28 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 53b363: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53b364: lea edx, [esi + 0x28] */
  edx = (uint32_t)(esi + 0x28u);
/* 53b367: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53b368: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x53b36du); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 53b36d: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53b370: mov edx, edi */
  edx = edi;
/* 53b372: jmp 0x53b307 */
  goto L_53b307;
L_53b374: /* 53b374: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
L_53b37b: /* 53b37b: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 53b37e: call 0x4e2f63 */
  esp -= 4; W32(esp, 0x53b383u); SPILL(); f_4e2f63(); if (g_unwind) return; RELOAD();
/* 53b383: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 53b386: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53b388: je 0x53b3b4 */
  if (zf) goto L_53b3b4;
L_53b38a: /* 53b38a: mov eax, dword ptr [edi + 0x3c] */
  eax = R32((uint32_t)(edi + 0x3cu));
/* 53b38d: test ah, 0x20 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 53b390: je 0x53b3ac */
  if (zf) goto L_53b3ac;
L_53b392: /* 53b392: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 53b395: imul edx, dword ptr [edi + 0x34] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(edi + 0x34u)));
  edx = (uint32_t)r;
  }
/* 53b399: mov eax, dword ptr [edi + 0x48] */
  eax = R32((uint32_t)(edi + 0x48u));
/* 53b39c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53b39d: lea ecx, [eax + ebx] */
  ecx = (uint32_t)(eax + ebx);
/* 53b3a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53b3a1: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53b3a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53b3a4: call 0x4e3de1 */
  esp -= 4; W32(esp, 0x53b3a9u); SPILL(); f_4e3de1(); if (g_unwind) return; RELOAD();
/* 53b3a9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_53b3ac: /* 53b3ac: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 53b3af: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 53b3b2: jmp 0x53b37b */
  goto L_53b37b;
L_53b3b4: /* 53b3b4: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
L_53b3b7: /* 53b3b7: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53b3b9: je 0x53b44f */
  if (zf) goto L_53b44f;
L_53b3bf: /* 53b3bf: mov esi, dword ptr [ebx + 0x6c] */
  esi = R32((uint32_t)(ebx + 0x6cu));
L_53b3c2: /* 53b3c2: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53b3c4: je 0x53b44f */
  if (zf) goto L_53b44f;
L_53b3ca: /* 53b3ca: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 53b3cd: cmp eax, dword ptr [ebp + 0x18] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x18u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 53b3d0: jge 0x53b41b */
  if ((sf == of)) goto L_53b41b;
L_53b3d2: /* 53b3d2: mov ecx, dword ptr [esi + 0x38] */
  ecx = R32((uint32_t)(esi + 0x38u));
/* 53b3d5: imul ecx, dword ptr [esi + 0x34] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esi + 0x34u)));
  ecx = (uint32_t)r;
  }
/* 53b3d9: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 53b3dc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53b3de: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 53b3e1: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 53b3e4: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 53b3e7: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 53b3ea: xor eax, eax */
  eax = 0;
/* 53b3ec: mov ebx, ecx */
  ebx = ecx;
/* 53b3ee: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 53b3f1: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 53b3f4: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 53b3f6: mov ecx, ebx */
  ecx = ebx;
/* 53b3f8: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 53b3fa: mov ecx, dword ptr [ebp + 0x20] */
  ecx = R32((uint32_t)(ebp + 0x20u));
/* 53b3fd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53b3ff: jne 0x53b404 */
  if (!zf) goto L_53b404;
L_53b401: /* 53b401: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
L_53b404: /* 53b404: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 53b407: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 53b409: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53b40a: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 53b40d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 53b40f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 53b410: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53b412: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53b413: mov ecx, esi */
  ecx = esi;
/* 53b415: call dword ptr [edi + 0xa8] */
  { uint32_t t = R32((uint32_t)(edi + 0xa8u)); esp -= 4; W32(esp, 0x53b41bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_53b41b: /* 53b41b: mov esi, dword ptr [esi + 0x54] */
  esi = R32((uint32_t)(esi + 0x54u));
/* 53b41e: jmp 0x53b3c2 */
  goto L_53b3c2;
L_53b44f: /* 53b44f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53b452: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53b453: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53b454: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53b45b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53b45c: mov esp, ebp */
  esp = ebp;
/* 53b45e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53b45f: ret  */
  esp += 4; SPILL(); return;
}

void f_53b420(void) {
  LOAD_REGS();
L_53b420: /* 53b420: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 53b423: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53b428: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 53b42b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53b42c: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 53b42f: call 0x554df6 */
  esp -= 4; W32(esp, 0x53b434u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53b434(); return;
}

void f_53b434(void) {
  LOAD_REGS();
L_53b434: /* 53b434: push 0x56de70 */
  { uint32_t v = 0x56de70u; esp -= 4; W32(esp, v); }
/* 53b439: push 0x5aa9b8 */
  { uint32_t v = 0x5aa9b8u; esp -= 4; W32(esp, v); }
/* 53b43e: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53b443u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53b443: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53b446: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53b448: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53b44a: call 0x554df6 */
  esp -= 4; W32(esp, 0x53b44fu); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 53b44f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53b452: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53b453: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53b454: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53b45b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53b45c: mov esp, ebp */
  esp = ebp;
/* 53b45e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53b45f: ret  */
  esp += 4; SPILL(); return;
}

void f_53b4e0(void) {
  LOAD_REGS();
L_53b4e0: /* 53b4e0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 53b4e1: mov ebp, esp */
  ebp = esp;
/* 53b4e3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 53b4e5: push 0x558ad0 */
  { uint32_t v = 0x558ad0u; esp -= 4; W32(esp, v); }
/* 53b4ea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 53b4f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53b4f1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 53b4f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 53b4fb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 53b4fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 53b4ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 53b500: mov esi, dword ptr [eax + 0x6c] */
  esi = R32((uint32_t)(eax + 0x6cu));
/* 53b503: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 53b504: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 53b507: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 53b50a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
L_53b511: /* 53b511: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 53b513: mov dword ptr [ebp + 0xc], esi */
  W32((uint32_t)(ebp + 0xcu), esi);
/* 53b516: je 0x53b574 */
  if (zf) goto L_53b574;
L_53b518: /* 53b518: mov eax, dword ptr [esi + 0x48] */
  eax = R32((uint32_t)(esi + 0x48u));
/* 53b51b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 53b51d: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 53b51f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53b520: mov ecx, esi */
  ecx = esi;
/* 53b522: call dword ptr [edx + 0xac] */
  { uint32_t t = R32((uint32_t)(edx + 0xacu)); esp -= 4; W32(esp, 0x53b528u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 53b528: mov esi, dword ptr [esi + 0x54] */
  esi = R32((uint32_t)(esi + 0x54u));
/* 53b52b: jmp 0x53b511 */
  goto L_53b511;
L_53b574: /* 53b574: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53b577: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53b578: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53b579: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53b580: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53b581: mov esp, ebp */
  esp = ebp;
/* 53b583: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53b584: ret  */
  esp += 4; SPILL(); return;
}

void f_53b52d(void) {
  LOAD_REGS();
L_53b52d: /* 53b52d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 53b530: push 0x571094 */
  { uint32_t v = 0x571094u; esp -= 4; W32(esp, v); }
/* 53b535: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 53b538: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 53b539: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 53b53c: call 0x554df6 */
  esp -= 4; W32(esp, 0x53b541u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
  SPILL(); f_53b541(); return;
}

void f_53b541(void) {
  LOAD_REGS();
L_53b541: /* 53b541: push 0x56deac */
  { uint32_t v = 0x56deacu; esp -= 4; W32(esp, v); }
/* 53b546: push 0x5aa9c0 */
  { uint32_t v = 0x5aa9c0u; esp -= 4; W32(esp, v); }
/* 53b54b: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53b550u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53b550: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 53b553: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53b556: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53b558: call 0x4e27a2 */
  esp -= 4; W32(esp, 0x53b55du); SPILL(); f_4e27a2(); if (g_unwind) return; RELOAD();
/* 53b55d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 53b55e: push 0x5aa9c8 */
  { uint32_t v = 0x5aa9c8u; esp -= 4; W32(esp, v); }
/* 53b563: call 0x4e3f49 */
  esp -= 4; W32(esp, 0x53b568u); SPILL(); f_4e3f49(); if (g_unwind) return; RELOAD();
/* 53b568: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 53b56b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53b56d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 53b56f: call 0x554df6 */
  esp -= 4; W32(esp, 0x53b574u); SPILL(); f_554df6(); if (g_unwind) return; RELOAD();
/* 53b574: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 53b577: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 53b578: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 53b579: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 53b580: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 53b581: mov esp, ebp */
  esp = ebp;
/* 53b583: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 53b584: ret  */
  esp += 4; SPILL(); return;
}
