#include "recomp.h"
#include "rec_mod.h"

void f_8beab8(void) {
  LOAD_REGS();
L_8beab8: /* 8beab8: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 8beabf: nop  */
L_8beac0: /* 8beac0: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8beac3: cmp ecx, dword ptr [0xce82f0] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(0xce82f0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8beac9: jge 0x8bef4a */
  if ((sf == of)) goto L_8bef4a;
L_8beacf: /* 8beacf: mov eax, ecx */
  eax = ecx;
/* 8bead1: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bead4: mov eax, dword ptr [0xce82ec] */
  eax = R32((uint32_t)(0xce82ecu));
/* 8bead9: lea ebx, [eax + edx*4] */
  ebx = (uint32_t)(eax + edx*4);
/* 8beadc: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 8beadf: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8beae2: ja 0x8bef42 */
  if ((!cf && !zf)) goto L_8bef42;
L_8beae8: /* 8beae8: jmp dword ptr [eax*4 + 0x8bf660] */
  switch (R32((uint32_t)(eax*4 + 0x8bf660u))) {
    case 0x8beaefu: goto L_8beaef;
    case 0x8beb7fu: goto L_8beb7f;
    case 0x8bec18u: goto L_8bec18;
    case 0x8becabu: goto L_8becab;
    case 0x8bed5au: goto L_8bed5a;
    case 0x8beea4u: goto L_8beea4;
    case 0x8bf190u: goto L_8bf190;
    case 0x8bf220u: goto L_8bf220;
    case 0x8bf2b9u: goto L_8bf2b9;
    case 0x8bf34cu: goto L_8bf34c;
    case 0x8bf3fbu: goto L_8bf3fb;
    case 0x8bf545u: goto L_8bf545;
    default: guest_badjump(0x8beae8, R32((uint32_t)(eax*4 + 0x8bf660u))); return;
  }
L_8beaef: /* 8beaef: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8beaf2: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8beaf5: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8beafb: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8beb01: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8beb03: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8beb05: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8beb08: jp 0x8beb18 */
  if (pf) goto L_8beb18;
L_8beb0a: /* 8beb0a: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8beb11: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8beb18: /* 8beb18: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8beb1b: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8beb1e: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8beb20: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8beb23: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8beb26: lea ebx, [edx + eax*4] */
  ebx = (uint32_t)(edx + eax*4);
/* 8beb29: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8beb2c: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8beb2f: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8beb35u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8beb35: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8beb37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8beb38: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8beb39: lea eax, [ebp - 0x5c] */
  eax = (uint32_t)(ebp + 0xffffffa4u);
/* 8beb3c: push 0xaeaf84 */
  { uint32_t v = 0xaeaf84u; esp -= 4; W32(esp, v); }
/* 8beb41: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8beb42: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8beb48u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8beb48: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8beb4b: mov ecx, eax */
  ecx = eax;
/* 8beb4d: mov byte ptr [ebp - 4], 0x73 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x73u);
/* 8beb51: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8beb57u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8beb57: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8beb5a: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8beb5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8beb5d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8beb5f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8beb60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8beb61: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8beb67u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8beb67: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8beb6a: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8beb6d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8beb71: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8beb77u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8beb77: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 8beb7a: jmp 0x8beac0 */
  goto L_8beac0;
L_8beb7f: /* 8beb7f: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8beb82: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8beb85: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8beb8b: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8beb91: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8beb93: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8beb95: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8beb98: jp 0x8beba8 */
  if (pf) goto L_8beba8;
L_8beb9a: /* 8beb9a: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8beba1: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8beba8: /* 8beba8: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bebab: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bebae: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8bebb0: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bebb3: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bebb6: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bebb9: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bebbc: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bebbf: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bebc5u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bebc5: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bebc7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bebc8: shr ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8bebcb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bebcc: lea edx, [ebp - 0x90] */
  edx = (uint32_t)(ebp + 0xffffff70u);
/* 8bebd2: push 0xaeaf90 */
  { uint32_t v = 0xaeaf90u; esp -= 4; W32(esp, v); }
/* 8bebd7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bebd8: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bebdeu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bebde: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bebe1: mov ecx, eax */
  ecx = eax;
/* 8bebe3: mov byte ptr [ebp - 4], 0x74 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x74u);
/* 8bebe7: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bebedu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bebed: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bebf0: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bebf2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bebf3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bebf5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bebf6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bebf7: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bebfdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bebfd: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bec00: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 8bec06: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bec0a: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bec10u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bec10: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 8bec13: jmp 0x8beac0 */
  goto L_8beac0;
L_8bec18: /* 8bec18: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bec1b: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bec1e: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bec24: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bec2a: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bec2c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bec2e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bec31: jp 0x8bec41 */
  if (pf) goto L_8bec41;
L_8bec33: /* 8bec33: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bec3a: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bec41: /* 8bec41: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bec44: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bec47: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8bec49: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bec4c: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bec4f: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bec52: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bec55: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bec58: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bec5eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bec5e: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bec60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bec61: shr ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8bec64: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bec65: lea edx, [ebp - 0x80] */
  edx = (uint32_t)(ebp + 0xffffff80u);
/* 8bec68: push 0xaeafa8 */
  { uint32_t v = 0xaeafa8u; esp -= 4; W32(esp, v); }
/* 8bec6d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bec6e: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bec74u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bec74: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bec77: mov ecx, eax */
  ecx = eax;
/* 8bec79: mov byte ptr [ebp - 4], 0x75 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x75u);
/* 8bec7d: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bec83u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bec83: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bec86: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bec88: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bec89: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bec8b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bec8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bec8d: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bec93u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bec93: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bec96: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 8bec99: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bec9d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8beca3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8beca3: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 8beca6: jmp 0x8beac0 */
  goto L_8beac0;
L_8becab: /* 8becab: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8becae: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8becb1: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8becb7: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8becbd: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8becbf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8becc1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8becc4: jp 0x8becd4 */
  if (pf) goto L_8becd4;
L_8becc6: /* 8becc6: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8beccd: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8becd4: /* 8becd4: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8becd7: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8becda: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8becdc: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8becdf: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bece2: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bece5: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bece8: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8beceb: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8becf1u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8becf1: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8becf3: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8becf5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8becf7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8becf8: jge 0x8bed00 */
  if ((sf == of)) goto L_8bed00;
L_8becfa: /* 8becfa: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bed00: /* 8bed00: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bed06: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bed08: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bed0b: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 8bed0e: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bed14: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bed17: push 0xaeafc0 */
  { uint32_t v = 0xaeafc0u; esp -= 4; W32(esp, v); }
/* 8bed1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bed1d: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bed23u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bed23: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bed26: mov ecx, eax */
  ecx = eax;
/* 8bed28: mov byte ptr [ebp - 4], 0x76 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x76u);
/* 8bed2c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bed32u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bed32: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bed35: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bed37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bed38: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bed3a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bed3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bed3c: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bed42u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bed42: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bed45: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8bed48: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bed4c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bed52u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bed52: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 8bed55: jmp 0x8beac0 */
  goto L_8beac0;
L_8bed5a: /* 8bed5a: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8bed5c: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8bed5f: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8bed62: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 8bed65: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bed66: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bed69: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x8bed6fu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 8bed6f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bed71: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bed74: mov byte ptr [ebp - 4], 0x77 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x77u);
/* 8bed78: call dword ptr [0xcfa7cc] */
  esp -= 4; W32(esp, 0x8bed7eu); SPILL(); f_4e3b20(); if (g_unwind) return; /* Core!??AFString@@QAEAAGH@Z */ RELOAD();
/* 8bed7e: cmp word ptr [eax], 0x44 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x44u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8bed82: jne 0x8bedb9 */
  if (!zf) goto L_8bedb9;
L_8bed84: /* 8bed84: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8bed86: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bed89: call dword ptr [0xcfa7cc] */
  esp -= 4; W32(esp, 0x8bed8fu); SPILL(); f_4e3b20(); if (g_unwind) return; /* Core!??AFString@@QAEAAGH@Z */ RELOAD();
/* 8bed8f: cmp word ptr [eax], 0x72 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x72u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8bed93: jne 0x8bedb9 */
  if (!zf) goto L_8bedb9;
L_8bed95: /* 8bed95: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8bed97: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bed9a: cmp dword ptr [ecx + eax*4], 0x12c */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(0x12cu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8beda1: jb 0x8bedb9 */
  if (cf) goto L_8bedb9;
L_8beda3: /* 8beda3: mov byte ptr [ebp - 0x2c], 0 */
  W8((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 8beda7: mov byte ptr [ebp - 0x2b], 0 */
  W8((uint32_t)(ebp + 0xffffffd5u), 0x0u);
/* 8bedab: mov byte ptr [ebp - 0x2a], 0xff */
  W8((uint32_t)(ebp + 0xffffffd6u), 0xffu);
/* 8bedaf: mov byte ptr [ebp - 0x29], 0xff */
  W8((uint32_t)(ebp + 0xffffffd7u), 0xffu);
/* 8bedb3: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8bedb6: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
L_8bedb9: /* 8bedb9: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bedbc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bedbf: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bedc5: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bedcb: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bedcd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bedcf: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bedd2: jp 0x8bede2 */
  if (pf) goto L_8bede2;
L_8bedd4: /* 8bedd4: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8beddb: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bede2: /* 8bede2: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bede5: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bede8: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 8bedeb: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bedee: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8bedf1: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 8bedf4: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8bedf7: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8bedf9: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8bedfc: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8bedff: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bee05u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bee05: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bee08: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bee0a: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 8bee0d: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bee10: fild dword ptr [edx] */
  { double v = (double)(int32_t)R32((uint32_t)(edx)); FPUSH(v); }
/* 8bee12: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bee13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bee14: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8bee16: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bee18: jge 0x8bee20 */
  if ((sf == of)) goto L_8bee20;
L_8bee1a: /* 8bee1a: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bee20: /* 8bee20: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 8bee26: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8bee28: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bee2b: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 8bee2e: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bee34: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bee37: push 0xaeafd8 */
  { uint32_t v = 0xaeafd8u; esp -= 4; W32(esp, v); }
/* 8bee3c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bee3d: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bee43u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bee43: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bee46: mov ecx, eax */
  ecx = eax;
/* 8bee48: mov byte ptr [ebp - 4], 0x78 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x78u);
/* 8bee4c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bee52u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bee52: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bee55: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bee57: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bee58: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bee5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bee5b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bee5c: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bee62u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bee62: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bee65: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8bee68: mov byte ptr [ebp - 4], 0x77 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x77u);
/* 8bee6c: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bee72u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bee72: mov byte ptr [ebp - 0x34], 0 */
  W8((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8bee76: mov byte ptr [ebp - 0x33], 0xff */
  W8((uint32_t)(ebp + 0xffffffcdu), 0xffu);
/* 8bee7a: mov byte ptr [ebp - 0x32], 0 */
  W8((uint32_t)(ebp + 0xffffffceu), 0x0u);
/* 8bee7e: mov byte ptr [ebp - 0x31], 0xff */
  W8((uint32_t)(ebp + 0xffffffcfu), 0xffu);
/* 8bee82: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8bee85: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8bee88: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8bee8b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8bee8c: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bee8f: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 8bee92: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bee96: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bee9cu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bee9c: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 8bee9f: jmp 0x8beac0 */
  goto L_8beac0;
L_8beea4: /* 8beea4: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8beea7: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8beeaa: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8beeb0: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8beeb6: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8beeb8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8beeba: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8beebd: jp 0x8beecd */
  if (pf) goto L_8beecd;
L_8beebf: /* 8beebf: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8beec6: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8beecd: /* 8beecd: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8beed0: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8beed3: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 8beed6: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 8beed9: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 8beedb: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8beede: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 8beee1: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 8beee4: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 8beee7: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8beeea: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8beeed: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8beef3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8beef3: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8beef6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8beef7: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8beefa: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8beefc: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* 8beeff: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bef00: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bef01: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 8bef04: push 0xaeaffc */
  { uint32_t v = 0xaeaffcu; esp -= 4; W32(esp, v); }
/* 8bef09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bef0a: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bef10u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bef10: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bef13: mov ecx, eax */
  ecx = eax;
/* 8bef15: mov byte ptr [ebp - 4], 0x79 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x79u);
/* 8bef19: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bef1fu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bef1f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8bef21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bef22: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8bef25: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bef27: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bef28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bef29: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8bef2fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bef2f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bef32: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 8bef35: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bef39: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bef3fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bef3f: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
L_8bef42: /* 8bef42: inc dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffd0u), r);
  }
/* 8bef45: jmp 0x8beac0 */
  goto L_8beac0;
L_8bef4a: /* 8bef4a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8bef4d: mov eax, dword ptr [ecx + 0x4c] */
  eax = R32((uint32_t)(ecx + 0x4cu));
/* 8bef50: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8bef52: je 0x8bf5eb */
  if (zf) goto L_8bf5eb;
L_8bef58: /* 8bef58: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8bef5b: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 8bef5e: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8bef64: mov eax, dword ptr [ecx + 0x3c] */
  eax = R32((uint32_t)(ecx + 0x3cu));
/* 8bef67: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8bef69: je 0x8bf0c1 */
  if (zf) goto L_8bf0c1;
L_8bef6f: /* 8bef6f: mov ebx, dword ptr [eax + 0x38] */
  ebx = R32((uint32_t)(eax + 0x38u));
/* 8bef72: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8bef74: je 0x8bf0c1 */
  if (zf) goto L_8bf0c1;
L_8bef7a: /* 8bef7a: xor eax, eax */
  eax = 0;
/* 8bef7c: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8bef7f: nop  */
L_8bef80: /* 8bef80: cmp eax, 0x3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8bef85: jge 0x8befa0 */
  if ((sf == of)) goto L_8befa0;
L_8bef87: /* 8bef87: mov ecx, dword ptr [ebx + eax*4 + 0xeb4] */
  ecx = R32((uint32_t)(ebx + eax*4 + 0xeb4u));
/* 8bef8e: xor edx, edx */
  edx = 0;
/* 8bef90: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8bef92: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8bef95: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8bef98: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8bef9a: mov dword ptr [ebp + 0xc], ecx */
  W32((uint32_t)(ebp + 0xcu), ecx);
/* 8bef9d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8bef9e: jmp 0x8bef80 */
  goto L_8bef80;
L_8befa0: /* 8befa0: fld dword ptr [ebx + 0x1f0] */
  { double v = F32((uint32_t)(ebx + 0x1f0u)); FPUSH(v); }
/* 8befa6: fmul dword ptr [0xa0cecc] */
  ST0 = ST0 * (F32((uint32_t)(0xa0ceccu)));
/* 8befac: call 0x99c958 */
  esp -= 4; W32(esp, 0x8befb1u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8befb1: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 8befb4: mov edx, dword ptr [0xce84b4] */
  edx = R32((uint32_t)(0xce84b4u));
/* 8befba: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 8befbd: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 8befc0: mov ecx, dword ptr [0xce84b8] */
  ecx = R32((uint32_t)(0xce84b8u));
/* 8befc6: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8befc9: mov dword ptr [eax + ecx*4], edx */
  W32((uint32_t)(eax + ecx*4), edx);
/* 8befcc: fld dword ptr [ebx + 0x1e8] */
  { double v = F32((uint32_t)(ebx + 0x1e8u)); FPUSH(v); }
/* 8befd2: call 0x99c958 */
  esp -= 4; W32(esp, 0x8befd7u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8befd7: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 8befda: mov edx, dword ptr [0xce84bc] */
  edx = R32((uint32_t)(0xce84bcu));
/* 8befe0: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 8befe3: fld dword ptr [ebx + 0x1ec] */
  { double v = F32((uint32_t)(ebx + 0x1ecu)); FPUSH(v); }
/* 8befe9: call 0x99c958 */
  esp -= 4; W32(esp, 0x8befeeu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8befee: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 8beff1: mov edx, dword ptr [0xce84c0] */
  edx = R32((uint32_t)(0xce84c0u));
/* 8beff7: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 8beffa: fld dword ptr [ebx + 0x1e0] */
  { double v = F32((uint32_t)(ebx + 0x1e0u)); FPUSH(v); }
/* 8bf000: call 0x99c958 */
  esp -= 4; W32(esp, 0x8bf005u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8bf005: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 8bf008: mov edx, dword ptr [0xce84c4] */
  edx = R32((uint32_t)(0xce84c4u));
/* 8bf00e: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 8bf011: fld dword ptr [ebx + 0x1e4] */
  { double v = F32((uint32_t)(ebx + 0x1e4u)); FPUSH(v); }
/* 8bf017: call 0x99c958 */
  esp -= 4; W32(esp, 0x8bf01cu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8bf01c: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 8bf01f: mov edx, dword ptr [0xce84c8] */
  edx = R32((uint32_t)(0xce84c8u));
/* 8bf025: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 8bf028: fld dword ptr [ebx + 0x1d0] */
  { double v = F32((uint32_t)(ebx + 0x1d0u)); FPUSH(v); }
/* 8bf02e: call 0x99c958 */
  esp -= 4; W32(esp, 0x8bf033u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8bf033: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 8bf036: mov edx, dword ptr [0xce84cc] */
  edx = R32((uint32_t)(0xce84ccu));
/* 8bf03c: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 8bf03f: fld dword ptr [ebx + 0x1d4] */
  { double v = F32((uint32_t)(ebx + 0x1d4u)); FPUSH(v); }
/* 8bf045: call 0x99c958 */
  esp -= 4; W32(esp, 0x8bf04au); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8bf04a: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 8bf04d: mov edx, dword ptr [0xce84d0] */
  edx = R32((uint32_t)(0xce84d0u));
/* 8bf053: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 8bf056: fld dword ptr [ebx + 0x1d8] */
  { double v = F32((uint32_t)(ebx + 0x1d8u)); FPUSH(v); }
/* 8bf05c: call 0x99c958 */
  esp -= 4; W32(esp, 0x8bf061u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8bf061: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 8bf064: mov edx, dword ptr [0xce84d4] */
  edx = R32((uint32_t)(0xce84d4u));
/* 8bf06a: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 8bf06d: fld dword ptr [ebx + 0x1dc] */
  { double v = F32((uint32_t)(ebx + 0x1dcu)); FPUSH(v); }
/* 8bf073: call 0x99c958 */
  esp -= 4; W32(esp, 0x8bf078u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8bf078: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 8bf07b: mov edx, dword ptr [0xce84d8] */
  edx = R32((uint32_t)(0xce84d8u));
/* 8bf081: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 8bf084: fld dword ptr [ebx + 0x1c8] */
  { double v = F32((uint32_t)(ebx + 0x1c8u)); FPUSH(v); }
/* 8bf08a: call 0x99c958 */
  esp -= 4; W32(esp, 0x8bf08fu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8bf08f: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 8bf092: mov edx, dword ptr [0xce84dc] */
  edx = R32((uint32_t)(0xce84dcu));
/* 8bf098: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 8bf09b: fld dword ptr [ebx + 0x1cc] */
  { double v = F32((uint32_t)(ebx + 0x1ccu)); FPUSH(v); }
/* 8bf0a1: call 0x99c958 */
  esp -= 4; W32(esp, 0x8bf0a6u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8bf0a6: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* 8bf0a9: mov edx, dword ptr [0xce84e0] */
  edx = R32((uint32_t)(0xce84e0u));
/* 8bf0af: mov dword ptr [ecx + edx*4], eax */
  W32((uint32_t)(ecx + edx*4), eax);
/* 8bf0b2: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* 8bf0b5: mov ecx, dword ptr [ebx + 0x44] */
  ecx = R32((uint32_t)(ebx + 0x44u));
/* 8bf0b8: mov edx, dword ptr [0xce84e4] */
  edx = R32((uint32_t)(0xce84e4u));
/* 8bf0be: mov dword ptr [eax + edx*4], ecx */
  W32((uint32_t)(eax + edx*4), ecx);
L_8bf0c1: /* 8bf0c1: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bf0c4: mov byte ptr [ebp + 0xc], 0xff */
  W8((uint32_t)(ebp + 0xcu), 0xffu);
/* 8bf0c8: fadd dword ptr [0xa0a848] */
  ST0 = ST0 + (F32((uint32_t)(0xa0a848u)));
/* 8bf0ce: mov byte ptr [ebp + 0xd], 0xff */
  W8((uint32_t)(ebp + 0xdu), 0xffu);
/* 8bf0d2: mov byte ptr [ebp + 0xe], 0 */
  W8((uint32_t)(ebp + 0xeu), 0x0u);
/* 8bf0d6: mov byte ptr [ebp + 0xf], 0xff */
  W8((uint32_t)(ebp + 0xfu), 0xffu);
/* 8bf0da: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8bf0dd: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 8bf0e0: push 0xaeb024 */
  { uint32_t v = 0xaeb024u; esp -= 4; W32(esp, v); }
/* 8bf0e5: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8bf0e8: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8bf0eb: call dword ptr [0xcfa410] */
  esp -= 4; W32(esp, 0x8bf0f1u); SPILL(); f_4e3e5e(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@PBG@Z */ RELOAD();
/* 8bf0f1: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bf0f4: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bf0fa: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8bf0fd: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8bf103: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bf105: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bf107: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bf10a: jp 0x8bf11a */
  if (pf) goto L_8bf11a;
L_8bf10c: /* 8bf10c: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bf113: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bf11a: /* 8bf11a: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bf11d: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8bf120: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bf123: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bf129u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bf129: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8bf12b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf12c: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8bf12f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bf131: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf132: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bf133: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8bf139u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bf139: mov byte ptr [ebp + 0xc], 0 */
  W8((uint32_t)(ebp + 0xcu), 0x0u);
/* 8bf13d: mov byte ptr [ebp + 0xd], 0xff */
  W8((uint32_t)(ebp + 0xdu), 0xffu);
/* 8bf141: mov byte ptr [ebp + 0xe], 0 */
  W8((uint32_t)(ebp + 0xeu), 0x0u);
/* 8bf145: mov byte ptr [ebp + 0xf], 0xff */
  W8((uint32_t)(ebp + 0xfu), 0xffu);
/* 8bf149: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8bf14c: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bf14f: mov dword ptr [esi + 0x58], ecx */
  W32((uint32_t)(esi + 0x58u), ecx);
/* 8bf152: mov dword ptr [ebp + 0xc], 0 */
  W32((uint32_t)(ebp + 0xcu), 0x0u);
/* 8bf159: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8bf160: /* 8bf160: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8bf163: cmp edx, dword ptr [0xce82fc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(0xce82fcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8bf169: jge 0x8bf5eb */
  if ((sf == of)) goto L_8bf5eb;
L_8bf16f: /* 8bf16f: mov ecx, dword ptr [0xce82f8] */
  ecx = R32((uint32_t)(0xce82f8u));
/* 8bf175: mov eax, edx */
  eax = edx;
/* 8bf177: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8bf17a: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bf17d: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* 8bf180: cmp eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8bf183: ja 0x8bf5e3 */
  if ((!cf && !zf)) goto L_8bf5e3;
L_8bf189: /* 8bf189: jmp dword ptr [eax*4 + 0x8bf67c] */
  switch (R32((uint32_t)(eax*4 + 0x8bf67cu))) {
    case 0x8bf190u: goto L_8bf190;
    case 0x8bf220u: goto L_8bf220;
    case 0x8bf2b9u: goto L_8bf2b9;
    case 0x8bf34cu: goto L_8bf34c;
    case 0x8bf3fbu: goto L_8bf3fb;
    case 0x8bf545u: goto L_8bf545;
    default: guest_badjump(0x8bf189, R32((uint32_t)(eax*4 + 0x8bf67cu))); return;
  }
L_8bf190: /* 8bf190: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bf193: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8bf196: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bf19c: fild dword ptr [edx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x8cu)); FPUSH(v); }
/* 8bf1a2: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bf1a4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bf1a6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bf1a9: jp 0x8bf1b9 */
  if (pf) goto L_8bf1b9;
L_8bf1ab: /* 8bf1ab: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bf1b2: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bf1b9: /* 8bf1b9: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bf1bc: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bf1bf: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8bf1c1: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bf1c4: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bf1c7: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bf1ca: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bf1cd: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bf1d0: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bf1d6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bf1d6: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bf1d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf1d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bf1da: lea edx, [ebp - 0x5c] */
  edx = (uint32_t)(ebp + 0xffffffa4u);
/* 8bf1dd: push 0xaeb048 */
  { uint32_t v = 0xaeb048u; esp -= 4; W32(esp, v); }
/* 8bf1e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bf1e3: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bf1e9u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bf1e9: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bf1ec: mov ecx, eax */
  ecx = eax;
/* 8bf1ee: mov byte ptr [ebp - 4], 0x7a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7au);
/* 8bf1f2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bf1f8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bf1f8: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bf1fb: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bf1fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf1fe: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bf200: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bf201: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bf202: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bf208u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bf208: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bf20b: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8bf20e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bf212: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bf218u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bf218: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 8bf21b: jmp 0x8bf160 */
  goto L_8bf160;
L_8bf220: /* 8bf220: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bf223: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bf226: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bf22c: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bf232: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bf234: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bf236: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bf239: jp 0x8bf249 */
  if (pf) goto L_8bf249;
L_8bf23b: /* 8bf23b: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bf242: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bf249: /* 8bf249: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bf24c: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bf24f: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8bf251: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bf254: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bf257: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bf25a: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bf25d: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bf260: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bf266u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bf266: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bf268: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf269: shr ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8bf26c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bf26d: lea edx, [ebp - 0x90] */
  edx = (uint32_t)(ebp + 0xffffff70u);
/* 8bf273: push 0xaeb054 */
  { uint32_t v = 0xaeb054u; esp -= 4; W32(esp, v); }
/* 8bf278: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bf279: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bf27fu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bf27f: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bf282: mov ecx, eax */
  ecx = eax;
/* 8bf284: mov byte ptr [ebp - 4], 0x7b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7bu);
/* 8bf288: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bf28eu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bf28e: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bf291: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bf293: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf294: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bf296: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bf297: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bf298: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bf29eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bf29e: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bf2a1: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 8bf2a7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bf2ab: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bf2b1u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bf2b1: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 8bf2b4: jmp 0x8bf160 */
  goto L_8bf160;
L_8bf2b9: /* 8bf2b9: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bf2bc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bf2bf: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bf2c5: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bf2cb: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bf2cd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bf2cf: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bf2d2: jp 0x8bf2e2 */
  if (pf) goto L_8bf2e2;
L_8bf2d4: /* 8bf2d4: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bf2db: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bf2e2: /* 8bf2e2: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bf2e5: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bf2e8: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8bf2ea: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bf2ed: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bf2f0: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bf2f3: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bf2f6: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bf2f9: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bf2ffu); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bf2ff: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bf301: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf302: shr ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8bf305: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bf306: lea edx, [ebp - 0x80] */
  edx = (uint32_t)(ebp + 0xffffff80u);
/* 8bf309: push 0xaeb06c */
  { uint32_t v = 0xaeb06cu; esp -= 4; W32(esp, v); }
/* 8bf30e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bf30f: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bf315u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bf315: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bf318: mov ecx, eax */
  ecx = eax;
/* 8bf31a: mov byte ptr [ebp - 4], 0x7c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7cu);
/* 8bf31e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bf324u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bf324: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bf327: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bf329: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf32a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bf32c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bf32d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bf32e: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bf334u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bf334: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bf337: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 8bf33a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bf33e: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bf344u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bf344: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 8bf347: jmp 0x8bf160 */
  goto L_8bf160;
L_8bf34c: /* 8bf34c: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bf34f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bf352: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bf358: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bf35e: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bf360: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bf362: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bf365: jp 0x8bf375 */
  if (pf) goto L_8bf375;
L_8bf367: /* 8bf367: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bf36e: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bf375: /* 8bf375: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bf378: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bf37b: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8bf37d: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bf380: lea ebx, [ecx + eax*4] */
  ebx = (uint32_t)(ecx + eax*4);
/* 8bf383: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8bf386: mov eax, dword ptr [edi + 0x38] */
  eax = R32((uint32_t)(edi + 0x38u));
/* 8bf389: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8bf38c: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bf392u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bf392: fild dword ptr [ebx] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx)); FPUSH(v); }
/* 8bf394: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bf396: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bf398: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf399: jge 0x8bf3a1 */
  if ((sf == of)) goto L_8bf3a1;
L_8bf39b: /* 8bf39b: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bf3a1: /* 8bf3a1: mov edx, dword ptr [0xcfa77c] */
  edx = R32((uint32_t)(0xcfa77cu));
/* 8bf3a7: fmul qword ptr [edx] */
  ST0 = ST0 * (F64((uint32_t)(edx)));
/* 8bf3a9: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bf3ac: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 8bf3af: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bf3b5: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bf3b8: push 0xaeb084 */
  { uint32_t v = 0xaeb084u; esp -= 4; W32(esp, v); }
/* 8bf3bd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf3be: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bf3c4u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bf3c4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bf3c7: mov ecx, eax */
  ecx = eax;
/* 8bf3c9: mov byte ptr [ebp - 4], 0x7d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7du);
/* 8bf3cd: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bf3d3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bf3d3: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bf3d6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bf3d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf3d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bf3db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bf3dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bf3dd: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bf3e3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bf3e3: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bf3e6: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8bf3e9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bf3ed: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bf3f3u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bf3f3: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 8bf3f6: jmp 0x8bf160 */
  goto L_8bf160;
L_8bf3fb: /* 8bf3fb: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8bf3fd: mov ecx, dword ptr [edi + 0x38] */
  ecx = R32((uint32_t)(edi + 0x38u));
/* 8bf400: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8bf403: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 8bf406: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bf407: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bf40a: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x8bf410u); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
/* 8bf410: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bf412: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bf415: mov byte ptr [ebp - 4], 0x7e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7eu);
/* 8bf419: call dword ptr [0xcfa7cc] */
  esp -= 4; W32(esp, 0x8bf41fu); SPILL(); f_4e3b20(); if (g_unwind) return; /* Core!??AFString@@QAEAAGH@Z */ RELOAD();
/* 8bf41f: cmp word ptr [eax], 0x44 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x44u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8bf423: jne 0x8bf45a */
  if (!zf) goto L_8bf45a;
L_8bf425: /* 8bf425: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8bf427: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bf42a: call dword ptr [0xcfa7cc] */
  esp -= 4; W32(esp, 0x8bf430u); SPILL(); f_4e3b20(); if (g_unwind) return; /* Core!??AFString@@QAEAAGH@Z */ RELOAD();
/* 8bf430: cmp word ptr [eax], 0x72 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax))); uint16_t b = (uint16_t)(0x72u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8bf434: jne 0x8bf45a */
  if (!zf) goto L_8bf45a;
L_8bf436: /* 8bf436: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8bf438: mov ecx, dword ptr [edi + 0x2c] */
  ecx = R32((uint32_t)(edi + 0x2cu));
/* 8bf43b: cmp dword ptr [ecx + eax*4], 0x12c */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + eax*4))); uint32_t b = (uint32_t)(0x12cu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8bf442: jb 0x8bf45a */
  if (cf) goto L_8bf45a;
L_8bf444: /* 8bf444: mov byte ptr [ebp - 0x34], 0 */
  W8((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8bf448: mov byte ptr [ebp - 0x33], 0 */
  W8((uint32_t)(ebp + 0xffffffcdu), 0x0u);
/* 8bf44c: mov byte ptr [ebp - 0x32], 0xff */
  W8((uint32_t)(ebp + 0xffffffceu), 0xffu);
/* 8bf450: mov byte ptr [ebp - 0x31], 0xff */
  W8((uint32_t)(ebp + 0xffffffcfu), 0xffu);
/* 8bf454: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8bf457: mov dword ptr [esi + 0x58], edx */
  W32((uint32_t)(esi + 0x58u), edx);
L_8bf45a: /* 8bf45a: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bf45d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8bf460: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bf466: fild dword ptr [eax + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8cu)); FPUSH(v); }
/* 8bf46c: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bf46e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bf470: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bf473: jp 0x8bf483 */
  if (pf) goto L_8bf483;
L_8bf475: /* 8bf475: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bf47c: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bf483: /* 8bf483: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bf486: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bf489: mov ecx, dword ptr [ebx + 0xc] */
  ecx = R32((uint32_t)(ebx + 0xcu));
/* 8bf48c: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bf48f: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8bf492: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 8bf495: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8bf498: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8bf49a: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8bf49d: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8bf4a0: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bf4a6u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bf4a6: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* 8bf4a9: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8bf4ab: mov ecx, dword ptr [edx + ecx*4] */
  ecx = R32((uint32_t)(edx + ecx*4));
/* 8bf4ae: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8bf4b1: fild dword ptr [edx] */
  { double v = (double)(int32_t)R32((uint32_t)(edx)); FPUSH(v); }
/* 8bf4b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bf4b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf4b5: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8bf4b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8bf4b9: jge 0x8bf4c1 */
  if ((sf == of)) goto L_8bf4c1;
L_8bf4bb: /* 8bf4bb: fadd qword ptr [0xa0c228] */
  ST0 = ST0 + (F64((uint32_t)(0xa0c228u)));
L_8bf4c1: /* 8bf4c1: mov ecx, dword ptr [0xcfa77c] */
  ecx = R32((uint32_t)(0xcfa77cu));
/* 8bf4c7: fmul qword ptr [ecx] */
  ST0 = ST0 * (F64((uint32_t)(ecx)));
/* 8bf4c9: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8bf4cc: lea edx, [ebp - 0x50] */
  edx = (uint32_t)(ebp + 0xffffffb0u);
/* 8bf4cf: fmul qword ptr [0xa0b5e8] */
  ST0 = ST0 * (F64((uint32_t)(0xa0b5e8u)));
/* 8bf4d5: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8bf4d8: push 0xaeb09c */
  { uint32_t v = 0xaeb09cu; esp -= 4; W32(esp, v); }
/* 8bf4dd: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bf4de: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bf4e4u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bf4e4: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bf4e7: mov ecx, eax */
  ecx = eax;
/* 8bf4e9: mov byte ptr [ebp - 4], 0x7f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7fu);
/* 8bf4ed: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bf4f3u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bf4f3: mov edx, dword ptr [esi + 0x68] */
  edx = R32((uint32_t)(esi + 0x68u));
/* 8bf4f6: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8bf4f8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf4f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bf4fb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bf4fc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bf4fd: call dword ptr [ecx + 0x88] */
  { uint32_t t = R32((uint32_t)(ecx + 0x88u)); esp -= 4; W32(esp, 0x8bf503u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bf503: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bf506: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8bf509: mov byte ptr [ebp - 4], 0x7e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7eu);
/* 8bf50d: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bf513u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bf513: mov byte ptr [ebp - 0x2c], 0 */
  W8((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 8bf517: mov byte ptr [ebp - 0x2b], 0xff */
  W8((uint32_t)(ebp + 0xffffffd5u), 0xffu);
/* 8bf51b: mov byte ptr [ebp - 0x2a], 0 */
  W8((uint32_t)(ebp + 0xffffffd6u), 0x0u);
/* 8bf51f: mov byte ptr [ebp - 0x29], 0xff */
  W8((uint32_t)(ebp + 0xffffffd7u), 0xffu);
/* 8bf523: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8bf526: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8bf529: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8bf52c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8bf52d: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8bf530: mov dword ptr [ebp + 0xc], eax */
  W32((uint32_t)(ebp + 0xcu), eax);
/* 8bf533: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bf537: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bf53du); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bf53d: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 8bf540: jmp 0x8bf160 */
  goto L_8bf160;
L_8bf545: /* 8bf545: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 8bf548: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8bf54b: fadd dword ptr [0xa1737c] */
  ST0 = ST0 + (F32((uint32_t)(0xa1737cu)));
/* 8bf551: fild dword ptr [ecx + 0x8c] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x8cu)); FPUSH(v); }
/* 8bf557: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8bf559: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8bf55b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8bf55e: jp 0x8bf56e */
  if (pf) goto L_8bf56e;
L_8bf560: /* 8bf560: add dword ptr [ebp - 0x18], 0xc8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 8bf567: mov dword ptr [esi + 0x48], 0x41000000 */
  W32((uint32_t)(esi + 0x48u), 0x41000000u);
L_8bf56e: /* 8bf56e: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8bf571: fstp dword ptr [esi + 0x44] */
  WF32((uint32_t)(esi + 0x44u), ST0); FPOP();
/* 8bf574: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* 8bf577: mov edx, dword ptr [ebx + 0xc] */
  edx = R32((uint32_t)(ebx + 0xcu));
/* 8bf57a: mov ebx, dword ptr [ebx] */
  ebx = R32((uint32_t)(ebx));
/* 8bf57c: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8bf57f: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 8bf582: mov edx, dword ptr [edi + 0x38] */
  edx = R32((uint32_t)(edi + 0x38u));
/* 8bf585: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 8bf588: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8bf58b: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8bf58e: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bf594u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bf594: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8bf597: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf598: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8bf59b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8bf59d: mov eax, dword ptr [edx + ebx*4] */
  eax = R32((uint32_t)(edx + ebx*4));
/* 8bf5a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bf5a1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf5a2: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 8bf5a5: push 0xaeb0c0 */
  { uint32_t v = 0xaeb0c0u; esp -= 4; W32(esp, v); }
/* 8bf5aa: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8bf5ab: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x8bf5b1u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 8bf5b1: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bf5b4: mov ecx, eax */
  ecx = eax;
/* 8bf5b6: mov byte ptr [ebp - 4], 0x80 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x80u);
/* 8bf5ba: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x8bf5c0u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 8bf5c0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8bf5c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf5c3: mov eax, dword ptr [esi + 0x68] */
  eax = R32((uint32_t)(esi + 0x68u));
/* 8bf5c6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bf5c8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8bf5c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8bf5ca: call dword ptr [edx + 0x88] */
  { uint32_t t = R32((uint32_t)(edx + 0x88u)); esp -= 4; W32(esp, 0x8bf5d0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8bf5d0: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bf5d3: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 8bf5d6: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8bf5da: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bf5e0u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bf5e0: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
L_8bf5e3: /* 8bf5e3: inc dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xcu), r);
  }
/* 8bf5e6: jmp 0x8bf160 */
  goto L_8bf160;
L_8bf5eb: /* 8bf5eb: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8bf5ee: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8bf5f2: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8bf5f8u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8bf5f8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8bf5fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8bf5fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8bf5fd: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8bf604: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8bf605: mov esp, ebp */
  esp = ebp;
/* 8bf607: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8bf608: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8bf60b(void) {
  LOAD_REGS();
L_8bf60b: /* 8bf60b: mov ecx, dword ptr [ebp - 0x94] */
  ecx = R32((uint32_t)(ebp + 0xffffff6cu));
/* 8bf611: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8bf616: lea edx, [ebp - 0x84] */
  edx = (uint32_t)(ebp + 0xffffff7cu);
/* 8bf61c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8bf61d: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 8bf623: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8bf628u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8bf628(); return;
}

void f_8bf628(void) {
  LOAD_REGS();
L_8bf628: /* 8bf628: push 0xa1bc6c */
  { uint32_t v = 0xa1bc6cu; esp -= 4; W32(esp, v); }
/* 8bf62d: push 0xaeb0e8 */
  { uint32_t v = 0xaeb0e8u; esp -= 4; W32(esp, v); }
/* 8bf632: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8bf638u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8bf638: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8bf63b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bf63d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8bf63f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8bf644u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8bf644: mov al, 0xe5 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0xe5u) & 0xffu);
/* 8bf646: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8bf648: adc eax, 0x6a008be8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6a008be8u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  eax = r;
  }
/* 8bf64d: jmp 0xe63bf6dd */
  goto L_e63bf6dd;
L_e63bf6dd: guest_badaddr(0xe63bf6dd); return;
}

void f_8c1150(void) {
  LOAD_REGS();
L_8c1150: /* 8c1150: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c1151: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8c1153: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8c1155: mov esi, ecx */
  esi = ecx;
/* 8c1157: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8c115du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8c115d: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8c115f: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8c1162: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 8c1165: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8c1169: mov esi, dword ptr [edx] */
  esi = R32((uint32_t)(edx));
/* 8c116b: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 8c116d: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 8c1170: mov dword ptr [ecx + 4], esi */
  W32((uint32_t)(ecx + 0x4u), esi);
/* 8c1173: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8c1176: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8c1179: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c117a: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c1190(void) {
  LOAD_REGS();
L_8c1190: /* 8c1190: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c1191: mov ebp, esp */
  ebp = esp;
/* 8c1193: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8c1195: push 0x9d748a */
  { uint32_t v = 0x9d748au; esp -= 4; W32(esp, v); }
/* 8c119a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8c11a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c11a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8c11a8: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c11ab: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c11ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c11ad: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c11ae: xor ebx, ebx */
  ebx = 0;
/* 8c11b0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8c11b3: mov esi, ecx */
  esi = ecx;
/* 8c11b5: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8c11b8: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8c11bb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8c11be: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* 8c11c0: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8c11c4: mov dword ptr [ebp - 0x14], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffecu), 0xffffffffu);
/* 8c11cb: je 0x8c132b */
  if (zf) goto L_8c132b;
L_8c11d1: /* 8c11d1: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 8c11d2: je 0x8c128b */
  if (zf) goto L_8c128b;
L_8c11d8: /* 8c11d8: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 8c11d9: jne 0x8c13c8 */
  if (!zf) goto L_8c13c8;
L_8c11df: /* 8c11df: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8c11e1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8c11e3: lea ecx, [esi + 0x80] */
  ecx = (uint32_t)(esi + 0x80u);
/* 8c11e9: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8c11efu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8c11ef: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8c11f1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8c11f3: lea ecx, [esi + 0x8c] */
  ecx = (uint32_t)(esi + 0x8cu);
/* 8c11f9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8c11fc: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8c1202u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8c1202: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8c1204: lea edi, [esi + 0x98] */
  edi = (uint32_t)(esi + 0x98u);
/* 8c120a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8c120c: mov ecx, edi */
  ecx = edi;
/* 8c120e: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8c1214u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8c1214: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8c1216: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8c1219: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8c121c: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c121e: je 0x8c122a */
  if (zf) goto L_8c122a;
L_8c1220: /* 8c1220: lea edx, [ebp + 0x10] */
  edx = (uint32_t)(ebp + 0x10u);
/* 8c1223: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c1224: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x8c122au); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
L_8c122a: /* 8c122a: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8c122c: lea edi, [esi + 0xa4] */
  edi = (uint32_t)(esi + 0xa4u);
/* 8c1232: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8c1234: mov ecx, edi */
  ecx = edi;
/* 8c1236: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8c123cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8c123c: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8c123e: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8c1241: lea edi, [ecx + eax*4] */
  edi = (uint32_t)(ecx + eax*4);
/* 8c1244: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c1246: je 0x8c1273 */
  if (zf) goto L_8c1273;
L_8c1248: /* 8c1248: push 0xaea394 */
  { uint32_t v = 0xaea394u; esp -= 4; W32(esp, v); }
/* 8c124d: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 8c1250: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c1251: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 8c1254: call dword ptr [0xcfa3d0] */
  esp -= 4; W32(esp, 0x8c125au); SPILL(); f_4e2149(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@PBG@Z */ RELOAD();
/* 8c125a: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 8c125d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c125e: mov ebx, 4 */
  ebx = 0x4u;
/* 8c1263: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c1264: mov ecx, eax */
  ecx = eax;
/* 8c1266: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8c126a: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8c126d: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x8c1273u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
L_8c1273: /* 8c1273: test bl, 4 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c1276: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8c127d: je 0x8c13c8 */
  if (zf) goto L_8c13c8;
L_8c1283: /* 8c1283: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8c1286: jmp 0x8c13c2 */
  goto L_8c13c2;
L_8c128b: /* 8c128b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8c128d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8c128f: lea ecx, [esi + 0x50] */
  ecx = (uint32_t)(esi + 0x50u);
/* 8c1292: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8c1298u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8c1298: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8c129a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8c129c: lea ecx, [esi + 0x5c] */
  ecx = (uint32_t)(esi + 0x5cu);
/* 8c129f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8c12a2: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8c12a8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8c12a8: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8c12aa: lea edi, [esi + 0x68] */
  edi = (uint32_t)(esi + 0x68u);
/* 8c12ad: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8c12af: mov ecx, edi */
  ecx = edi;
/* 8c12b1: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8c12b7u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8c12b7: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8c12ba: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8c12bc: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8c12bf: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c12c1: je 0x8c12cd */
  if (zf) goto L_8c12cd;
L_8c12c3: /* 8c12c3: lea edx, [ebp + 0x10] */
  edx = (uint32_t)(ebp + 0x10u);
/* 8c12c6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c12c7: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x8c12cdu); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
L_8c12cd: /* 8c12cd: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8c12cf: lea edi, [esi + 0x74] */
  edi = (uint32_t)(esi + 0x74u);
/* 8c12d2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8c12d4: mov ecx, edi */
  ecx = edi;
/* 8c12d6: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8c12dcu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8c12dc: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8c12de: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8c12e1: lea edi, [ecx + eax*4] */
  edi = (uint32_t)(ecx + eax*4);
/* 8c12e4: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c12e6: je 0x8c1313 */
  if (zf) goto L_8c1313;
L_8c12e8: /* 8c12e8: push 0xaea390 */
  { uint32_t v = 0xaea390u; esp -= 4; W32(esp, v); }
/* 8c12ed: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 8c12f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c12f1: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 8c12f4: call dword ptr [0xcfa3d0] */
  esp -= 4; W32(esp, 0x8c12fau); SPILL(); f_4e2149(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@PBG@Z */ RELOAD();
/* 8c12fa: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 8c12fd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c12fe: mov ebx, 2 */
  ebx = 0x2u;
/* 8c1303: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c1304: mov ecx, eax */
  ecx = eax;
/* 8c1306: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8c130a: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8c130d: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x8c1313u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
L_8c1313: /* 8c1313: test bl, 2 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c1316: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8c131d: je 0x8c13c8 */
  if (zf) goto L_8c13c8;
L_8c1323: /* 8c1323: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 8c1326: jmp 0x8c13c2 */
  goto L_8c13c2;
L_8c132b: /* 8c132b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8c132d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8c132f: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 8c1332: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8c1338u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8c1338: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8c133a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8c133c: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 8c133f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8c1342: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8c1348u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8c1348: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8c134a: lea edi, [esi + 0x38] */
  edi = (uint32_t)(esi + 0x38u);
/* 8c134d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8c134f: mov ecx, edi */
  ecx = edi;
/* 8c1351: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8c1357u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8c1357: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8c135a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8c135c: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8c135f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c1361: je 0x8c136d */
  if (zf) goto L_8c136d;
L_8c1363: /* 8c1363: lea edx, [ebp + 0x10] */
  edx = (uint32_t)(ebp + 0x10u);
/* 8c1366: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c1367: call dword ptr [0xcfa1d4] */
  esp -= 4; W32(esp, 0x8c136du); SPILL(); f_4e3fc1(); if (g_unwind) return; /* Core!??0FString@@QAE@ABV0@@Z */ RELOAD();
L_8c136d: /* 8c136d: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8c136f: lea edi, [esi + 0x44] */
  edi = (uint32_t)(esi + 0x44u);
/* 8c1372: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8c1374: mov ecx, edi */
  ecx = edi;
/* 8c1376: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8c137cu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8c137c: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8c137e: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8c1381: lea edi, [ecx + eax*4] */
  edi = (uint32_t)(ecx + eax*4);
/* 8c1384: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c1386: je 0x8c13b3 */
  if (zf) goto L_8c13b3;
L_8c1388: /* 8c1388: push 0xaea38c */
  { uint32_t v = 0xaea38cu; esp -= 4; W32(esp, v); }
/* 8c138d: lea edx, [ebp - 0x44] */
  edx = (uint32_t)(ebp + 0xffffffbcu);
/* 8c1390: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c1391: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 8c1394: call dword ptr [0xcfa3d0] */
  esp -= 4; W32(esp, 0x8c139au); SPILL(); f_4e2149(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@PBG@Z */ RELOAD();
/* 8c139a: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 8c139d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c139e: mov ebx, 1 */
  ebx = 0x1u;
/* 8c13a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c13a4: mov ecx, eax */
  ecx = eax;
/* 8c13a6: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8c13aa: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8c13ad: call dword ptr [0xcfa660] */
  esp -= 4; W32(esp, 0x8c13b3u); SPILL(); f_4e4282(); if (g_unwind) return; /* Core!??HFString@@QAE?AV0@ABV0@@Z */ RELOAD();
L_8c13b3: /* 8c13b3: test bl, 1 */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c13b6: mov dword ptr [ebp - 4], 2 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8c13bd: je 0x8c13c8 */
  if (zf) goto L_8c13c8;
L_8c13bf: /* 8c13bf: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
L_8c13c2: /* 8c13c2: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8c13c8u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
L_8c13c8: /* 8c13c8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8c13cb: mov edi, dword ptr [ebp + 0x28] */
  edi = R32((uint32_t)(ebp + 0x28u));
/* 8c13ce: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8c13d1: lea esi, [esi + edx*4 + 0xb0] */
  esi = (uint32_t)(esi + edx*4 + 0xb0u);
/* 8c13d8: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8c13da: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8c13dc: mov ecx, esi */
  ecx = esi;
/* 8c13de: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8c13e4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8c13e4: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8c13e6: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8c13e9: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8c13ec: lea edx, [ecx + eax*4] */
  edx = (uint32_t)(ecx + eax*4);
/* 8c13ef: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8c13f2: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 8c13f4: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8c13f7: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 8c13fa: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 8c13fd: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8c1401: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8c1407u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8c1407: lea ecx, [ebp + 0x1c] */
  ecx = (uint32_t)(ebp + 0x1cu);
/* 8c140a: mov dword ptr [ebp - 4], 0xffffffff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffffffffu);
/* 8c1411: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x8c1417u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 8c1417: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c141a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c141b: mov eax, esi */
  eax = esi;
/* 8c141d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c141e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c1425: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c1426: mov esp, ebp */
  esp = ebp;
/* 8c1428: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c1429: ret 0x24 */
  esp += 40; SPILL(); return;
}

void f_8c142c(void) {
  LOAD_REGS();
L_8c142c: /* 8c142c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8c142f: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8c1434: lea edx, [ebp - 0x1c] */
  edx = (uint32_t)(ebp + 0xffffffe4u);
/* 8c1437: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c1438: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8c143b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c1440u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8c1440(); return;
}

void f_8c1440(void) {
  LOAD_REGS();
L_8c1440: /* 8c1440: push 0xa1bcf0 */
  { uint32_t v = 0xa1bcf0u; esp -= 4; W32(esp, v); }
/* 8c1445: push 0xaea398 */
  { uint32_t v = 0xaea398u; esp -= 4; W32(esp, v); }
/* 8c144a: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8c1450u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8c1450: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c1453: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c1455: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c1457: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c145cu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8c145c: guest_badaddr(0x8c145c); return;
}

void f_8c1520(void) {
  LOAD_REGS();
L_8c1520: /* 8c1520: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c1521: mov ebp, esp */
  ebp = esp;
/* 8c1523: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8c1525: push 0x9d78e8 */
  { uint32_t v = 0x9d78e8u; esp -= 4; W32(esp, v); }
/* 8c152a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8c1530: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c1531: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8c1538: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c153b: mov eax, dword ptr [0xce8204] */
  eax = R32((uint32_t)(0xce8204u));
/* 8c1540: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1541: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c1542: xor ebx, ebx */
  ebx = 0;
/* 8c1544: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c1546: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c1547: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8c154a: mov esi, ecx */
  esi = ecx;
/* 8c154c: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8c154f: je 0x8c15c2 */
  if (zf) goto L_8c15c2;
L_8c1551: /* 8c1551: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8c1554: xor eax, eax */
  eax = 0;
L_8c1556: /* 8c1556: cmp eax, dword ptr [0xce82b4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xce82b4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c155c: jge 0x8c1572 */
  if ((sf == of)) goto L_8c1572;
L_8c155e: /* 8c155e: mov edi, dword ptr [0xce82b0] */
  edi = R32((uint32_t)(0xce82b0u));
/* 8c1564: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8c1567: mov edx, dword ptr [edi + edx*4] */
  edx = R32((uint32_t)(edi + edx*4));
/* 8c156a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8c156c: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c156f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c1570: jmp 0x8c1556 */
  goto L_8c1556;
L_8c1572: /* 8c1572: lea ecx, [esi + 0x13c] */
  ecx = (uint32_t)(esi + 0x13cu);
/* 8c1578: xor eax, eax */
  eax = 0;
/* 8c157a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8c1580: /* 8c1580: cmp eax, dword ptr [0xce82c0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(0xce82c0u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c1586: jge 0x8c159c */
  if ((sf == of)) goto L_8c159c;
L_8c1588: /* 8c1588: mov edi, dword ptr [0xce82bc] */
  edi = R32((uint32_t)(0xce82bcu));
/* 8c158e: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8c1591: mov edx, dword ptr [edi + edx*4] */
  edx = R32((uint32_t)(edi + edx*4));
/* 8c1594: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8c1596: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c1599: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c159a: jmp 0x8c1580 */
  goto L_8c1580;
L_8c159c: /* 8c159c: add esi, 0x1a4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1a4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_8c15a2: /* 8c15a2: cmp ebx, dword ptr [0xce82fc] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(0xce82fcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c15a8: jge 0x8c33d5 */
  if ((sf == of)) goto L_8c33d5;
L_8c15ae: /* 8c15ae: mov ecx, dword ptr [0xce82f8] */
  ecx = R32((uint32_t)(0xce82f8u));
/* 8c15b4: lea eax, [ebx + ebx*2] */
  eax = (uint32_t)(ebx + ebx*2);
/* 8c15b7: mov edx, dword ptr [ecx + eax*4] */
  edx = R32((uint32_t)(ecx + eax*4));
/* 8c15ba: mov dword ptr [esi], edx */
  W32((uint32_t)(esi), edx);
/* 8c15bc: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8c15bf: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8c15c0: jmp 0x8c15a2 */
  goto L_8c15a2;
L_8c15c2: /* 8c15c2: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c15c4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c15c7: mov ecx, esp */
  ecx = esp;
/* 8c15c9: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c15cc: push 0xaeb0f8 */
  { uint32_t v = 0xaeb0f8u; esp -= 4; W32(esp, v); }
/* 8c15d1: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c15d7u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c15d7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c15da: mov ecx, esp */
  ecx = esp;
/* 8c15dc: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c15df: push 0xaeb104 */
  { uint32_t v = 0xaeb104u; esp -= 4; W32(esp, v); }
/* 8c15e4: mov edi, 1 */
  edi = 0x1u;
/* 8c15e9: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8c15ed: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c15f3u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c15f3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c15f4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c15f5: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c15fa: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c15fd: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1602u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1602: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c1604: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1607: mov ecx, esp */
  ecx = esp;
/* 8c1609: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c160c: push 0xaeb110 */
  { uint32_t v = 0xaeb110u; esp -= 4; W32(esp, v); }
/* 8c1611: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* 8c1614: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c161au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c161a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c161d: mov ecx, esp */
  ecx = esp;
/* 8c161f: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1622: push 0xaeb11c */
  { uint32_t v = 0xaeb11cu; esp -= 4; W32(esp, v); }
/* 8c1627: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8c162b: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1631u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1631: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1632: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1633: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1638: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c163b: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1640u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1640: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c1642: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1645: mov ecx, esp */
  ecx = esp;
/* 8c1647: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c164a: push 0xaeb12c */
  { uint32_t v = 0xaeb12cu; esp -= 4; W32(esp, v); }
/* 8c164f: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* 8c1652: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1658u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1658: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c165b: mov ecx, esp */
  ecx = esp;
/* 8c165d: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1660: push 0xaeb134 */
  { uint32_t v = 0xaeb134u; esp -= 4; W32(esp, v); }
/* 8c1665: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8c1669: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c166fu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c166f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1670: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1671: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1676: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1679: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c167eu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c167e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c167f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1682: mov ecx, esp */
  ecx = esp;
/* 8c1684: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1687: push 0xaeb144 */
  { uint32_t v = 0xaeb144u; esp -= 4; W32(esp, v); }
/* 8c168c: mov dword ptr [esi + 0x30], eax */
  W32((uint32_t)(esi + 0x30u), eax);
/* 8c168f: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1695u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1695: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1698: mov ecx, esp */
  ecx = esp;
/* 8c169a: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c169d: push 0xaeb14c */
  { uint32_t v = 0xaeb14cu; esp -= 4; W32(esp, v); }
/* 8c16a2: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8c16a6: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c16acu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c16ac: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c16ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c16ae: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c16b3: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c16b6: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c16bbu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c16bb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c16bc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c16bf: mov dword ptr [esi + 0x34], eax */
  W32((uint32_t)(esi + 0x34u), eax);
/* 8c16c2: mov ecx, esp */
  ecx = esp;
/* 8c16c4: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c16c7: push 0xaeb160 */
  { uint32_t v = 0xaeb160u; esp -= 4; W32(esp, v); }
/* 8c16cc: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c16d2u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c16d2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c16d5: mov ecx, esp */
  ecx = esp;
/* 8c16d7: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c16da: push 0xaeb168 */
  { uint32_t v = 0xaeb168u; esp -= 4; W32(esp, v); }
/* 8c16df: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 8c16e3: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c16e9u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c16e9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c16ea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c16eb: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c16f0: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c16f3: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c16f8u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c16f8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c16f9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c16fc: mov ecx, esp */
  ecx = esp;
/* 8c16fe: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1701: push 0xaeb174 */
  { uint32_t v = 0xaeb174u; esp -= 4; W32(esp, v); }
/* 8c1706: mov dword ptr [esi + 0x38], eax */
  W32((uint32_t)(esi + 0x38u), eax);
/* 8c1709: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c170fu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c170f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1712: mov ecx, esp */
  ecx = esp;
/* 8c1714: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1717: push 0xaeb17c */
  { uint32_t v = 0xaeb17cu; esp -= 4; W32(esp, v); }
/* 8c171c: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 8c1720: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1726u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1726: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1727: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1728: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c172d: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1730: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1735u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1735: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c1737: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c173a: mov ecx, esp */
  ecx = esp;
/* 8c173c: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c173f: push 0xaeb190 */
  { uint32_t v = 0xaeb190u; esp -= 4; W32(esp, v); }
/* 8c1744: mov dword ptr [esi + 0x3c], eax */
  W32((uint32_t)(esi + 0x3cu), eax);
/* 8c1747: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c174du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c174d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1750: mov ecx, esp */
  ecx = esp;
/* 8c1752: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1755: push 0xaeb198 */
  { uint32_t v = 0xaeb198u; esp -= 4; W32(esp, v); }
/* 8c175a: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 8c175e: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1764u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1764: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1765: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1766: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c176b: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c176e: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1773u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1773: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1774: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1777: mov ecx, esp */
  ecx = esp;
/* 8c1779: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c177c: push 0xaeb1b8 */
  { uint32_t v = 0xaeb1b8u; esp -= 4; W32(esp, v); }
/* 8c1781: mov dword ptr [esi + 0x40], eax */
  W32((uint32_t)(esi + 0x40u), eax);
/* 8c1784: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c178au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c178a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c178d: mov ecx, esp */
  ecx = esp;
/* 8c178f: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1792: push 0xaeb1c0 */
  { uint32_t v = 0xaeb1c0u; esp -= 4; W32(esp, v); }
/* 8c1797: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 8c179b: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c17a1u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c17a1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c17a2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c17a3: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c17a8: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c17ab: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c17b0u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c17b0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c17b1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c17b4: mov ecx, esp */
  ecx = esp;
/* 8c17b6: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c17b9: push 0xaeb1dc */
  { uint32_t v = 0xaeb1dcu; esp -= 4; W32(esp, v); }
/* 8c17be: mov dword ptr [esi + 0x44], eax */
  W32((uint32_t)(esi + 0x44u), eax);
/* 8c17c1: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c17c7u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c17c7: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 8c17cb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c17ce: mov ecx, esp */
  ecx = esp;
/* 8c17d0: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c17d3: push 0xaeb1f0 */
  { uint32_t v = 0xaeb1f0u; esp -= 4; W32(esp, v); }
/* 8c17d8: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c17deu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c17de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c17df: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c17e0: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c17e5: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c17e8: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c17edu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c17ed: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c17ef: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c17f2: mov ecx, esp */
  ecx = esp;
/* 8c17f4: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c17f7: push 0xaeb200 */
  { uint32_t v = 0xaeb200u; esp -= 4; W32(esp, v); }
/* 8c17fc: mov dword ptr [esi + 0x4c], eax */
  W32((uint32_t)(esi + 0x4cu), eax);
/* 8c17ff: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1805u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1805: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1808: mov ecx, esp */
  ecx = esp;
/* 8c180a: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c180d: push 0xaeb214 */
  { uint32_t v = 0xaeb214u; esp -= 4; W32(esp, v); }
/* 8c1812: mov byte ptr [ebp - 4], 0xa */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xau);
/* 8c1816: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c181cu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c181c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c181d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c181e: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1823: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1826: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c182bu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c182b: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c182d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1830: mov ecx, esp */
  ecx = esp;
/* 8c1832: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1835: push 0xaeb220 */
  { uint32_t v = 0xaeb220u; esp -= 4; W32(esp, v); }
/* 8c183a: mov dword ptr [esi + 0x50], eax */
  W32((uint32_t)(esi + 0x50u), eax);
/* 8c183d: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1843u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1843: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1846: mov ecx, esp */
  ecx = esp;
/* 8c1848: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c184b: push 0xaeb234 */
  { uint32_t v = 0xaeb234u; esp -= 4; W32(esp, v); }
/* 8c1850: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 8c1854: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c185au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c185a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c185b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c185c: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1861: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1864: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1869u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1869: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c186b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c186e: mov ecx, esp */
  ecx = esp;
/* 8c1870: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1873: push 0xaeb244 */
  { uint32_t v = 0xaeb244u; esp -= 4; W32(esp, v); }
/* 8c1878: mov dword ptr [esi + 0x54], eax */
  W32((uint32_t)(esi + 0x54u), eax);
/* 8c187b: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1881u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1881: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1884: mov ecx, esp */
  ecx = esp;
/* 8c1886: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1889: push 0xaeb258 */
  { uint32_t v = 0xaeb258u; esp -= 4; W32(esp, v); }
/* 8c188e: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 8c1892: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1898u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1898: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1899: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c189a: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c189f: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c18a2: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c18a7u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c18a7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c18a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c18ab: mov ecx, esp */
  ecx = esp;
/* 8c18ad: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c18b0: push 0xaeb268 */
  { uint32_t v = 0xaeb268u; esp -= 4; W32(esp, v); }
/* 8c18b5: mov dword ptr [esi + 0x58], eax */
  W32((uint32_t)(esi + 0x58u), eax);
/* 8c18b8: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c18beu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c18be: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c18c1: mov ecx, esp */
  ecx = esp;
/* 8c18c3: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c18c6: push 0xaeb27c */
  { uint32_t v = 0xaeb27cu; esp -= 4; W32(esp, v); }
/* 8c18cb: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 8c18cf: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c18d5u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c18d5: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c18d8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c18d9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c18da: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c18df: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c18e4u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c18e4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c18e5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c18e8: mov ecx, esp */
  ecx = esp;
/* 8c18ea: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c18ed: push 0xaeb294 */
  { uint32_t v = 0xaeb294u; esp -= 4; W32(esp, v); }
/* 8c18f2: mov dword ptr [esi + 0x5c], eax */
  W32((uint32_t)(esi + 0x5cu), eax);
/* 8c18f5: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c18fbu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c18fb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c18fe: mov ecx, esp */
  ecx = esp;
/* 8c1900: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1903: push 0xaeb2a8 */
  { uint32_t v = 0xaeb2a8u; esp -= 4; W32(esp, v); }
/* 8c1908: mov byte ptr [ebp - 4], 0xe */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xeu);
/* 8c190c: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1912u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1912: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1913: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1914: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1919: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c191c: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1921u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1921: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c1923: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1926: mov ecx, esp */
  ecx = esp;
/* 8c1928: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c192b: push 0xaeb2bc */
  { uint32_t v = 0xaeb2bcu; esp -= 4; W32(esp, v); }
/* 8c1930: mov dword ptr [esi + 0x60], eax */
  W32((uint32_t)(esi + 0x60u), eax);
/* 8c1933: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1939u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1939: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c193c: mov ecx, esp */
  ecx = esp;
/* 8c193e: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1941: push 0xaeb2cc */
  { uint32_t v = 0xaeb2ccu; esp -= 4; W32(esp, v); }
/* 8c1946: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 8c194a: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1950u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1950: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1951: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1952: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1957: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c195a: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c195fu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c195f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1960: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1963: mov ecx, esp */
  ecx = esp;
/* 8c1965: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1968: push 0xaeb2dc */
  { uint32_t v = 0xaeb2dcu; esp -= 4; W32(esp, v); }
/* 8c196d: mov dword ptr [esi + 0x64], eax */
  W32((uint32_t)(esi + 0x64u), eax);
/* 8c1970: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1976u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1976: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1979: mov ecx, esp */
  ecx = esp;
/* 8c197b: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c197e: push 0xaeb2ec */
  { uint32_t v = 0xaeb2ecu; esp -= 4; W32(esp, v); }
/* 8c1983: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 8c1987: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c198du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c198d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c198e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c198f: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1994: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1997: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c199cu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c199c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c199d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c19a0: mov ecx, esp */
  ecx = esp;
/* 8c19a2: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c19a5: push 0xaeb2f8 */
  { uint32_t v = 0xaeb2f8u; esp -= 4; W32(esp, v); }
/* 8c19aa: mov dword ptr [esi + 0x68], eax */
  W32((uint32_t)(esi + 0x68u), eax);
/* 8c19ad: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c19b3u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c19b3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c19b6: mov ecx, esp */
  ecx = esp;
/* 8c19b8: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c19bb: push 0xaeb308 */
  { uint32_t v = 0xaeb308u; esp -= 4; W32(esp, v); }
/* 8c19c0: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 8c19c4: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c19cau); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c19ca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c19cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c19cc: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c19d1: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c19d4: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c19d9u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c19d9: mov dword ptr [esi + 0x6c], eax */
  W32((uint32_t)(esi + 0x6cu), eax);
/* 8c19dc: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c19de: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c19e1: mov ecx, esp */
  ecx = esp;
/* 8c19e3: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c19e6: push 0xaeb31c */
  { uint32_t v = 0xaeb31cu; esp -= 4; W32(esp, v); }
/* 8c19eb: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c19f1u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c19f1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c19f4: mov ecx, esp */
  ecx = esp;
/* 8c19f6: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c19f9: push 0xaeb334 */
  { uint32_t v = 0xaeb334u; esp -= 4; W32(esp, v); }
/* 8c19fe: mov byte ptr [ebp - 4], 0x12 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x12u);
/* 8c1a02: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1a08u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1a08: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1a09: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1a0a: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1a0f: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1a12: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1a17u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1a17: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1a18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1a1b: mov ecx, esp */
  ecx = esp;
/* 8c1a1d: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1a20: push 0xaeb340 */
  { uint32_t v = 0xaeb340u; esp -= 4; W32(esp, v); }
/* 8c1a25: mov dword ptr [esi + 0x70], eax */
  W32((uint32_t)(esi + 0x70u), eax);
/* 8c1a28: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1a2eu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1a2e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1a31: mov ecx, esp */
  ecx = esp;
/* 8c1a33: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1a36: push 0xaeb358 */
  { uint32_t v = 0xaeb358u; esp -= 4; W32(esp, v); }
/* 8c1a3b: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 8c1a3f: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1a45u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1a45: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1a46: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1a47: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1a4c: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1a4f: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1a54u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1a54: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1a55: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1a58: mov ecx, esp */
  ecx = esp;
/* 8c1a5a: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1a5d: push 0xaeb36c */
  { uint32_t v = 0xaeb36cu; esp -= 4; W32(esp, v); }
/* 8c1a62: mov dword ptr [esi + 0x74], eax */
  W32((uint32_t)(esi + 0x74u), eax);
/* 8c1a65: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1a6bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1a6b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1a6e: mov ecx, esp */
  ecx = esp;
/* 8c1a70: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1a73: push 0xaeb384 */
  { uint32_t v = 0xaeb384u; esp -= 4; W32(esp, v); }
/* 8c1a78: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 8c1a7c: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1a82u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1a82: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1a83: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1a84: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1a89: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1a8c: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1a91u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1a91: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1a92: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1a95: mov ecx, esp */
  ecx = esp;
/* 8c1a97: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1a9a: push 0xaeb39c */
  { uint32_t v = 0xaeb39cu; esp -= 4; W32(esp, v); }
/* 8c1a9f: mov dword ptr [esi + 0x78], eax */
  W32((uint32_t)(esi + 0x78u), eax);
/* 8c1aa2: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1aa8u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1aa8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1aab: mov ecx, esp */
  ecx = esp;
/* 8c1aad: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1ab0: push 0xaeb3b4 */
  { uint32_t v = 0xaeb3b4u; esp -= 4; W32(esp, v); }
/* 8c1ab5: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* 8c1ab9: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1abfu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1abf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1ac0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1ac1: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1ac6: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1ac9: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1aceu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1ace: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1acf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1ad2: mov ecx, esp */
  ecx = esp;
/* 8c1ad4: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1ad7: mov dword ptr [esi + 0x7c], eax */
  W32((uint32_t)(esi + 0x7cu), eax);
/* 8c1ada: push 0xaeb3c8 */
  { uint32_t v = 0xaeb3c8u; esp -= 4; W32(esp, v); }
/* 8c1adf: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1ae5u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1ae5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1ae8: mov ecx, esp */
  ecx = esp;
/* 8c1aea: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1aed: push 0xaeb3e0 */
  { uint32_t v = 0xaeb3e0u; esp -= 4; W32(esp, v); }
/* 8c1af2: mov byte ptr [ebp - 4], 0x16 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x16u);
/* 8c1af6: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1afcu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1afc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1afd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1afe: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1b03: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1b06: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1b0bu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1b0b: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c1b0d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1b10: mov ecx, esp */
  ecx = esp;
/* 8c1b12: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1b15: push 0xaeb3f8 */
  { uint32_t v = 0xaeb3f8u; esp -= 4; W32(esp, v); }
/* 8c1b1a: mov dword ptr [esi + 0x80], eax */
  W32((uint32_t)(esi + 0x80u), eax);
/* 8c1b20: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1b26u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1b26: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1b29: mov ecx, esp */
  ecx = esp;
/* 8c1b2b: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1b2e: push 0xaeb410 */
  { uint32_t v = 0xaeb410u; esp -= 4; W32(esp, v); }
/* 8c1b33: mov byte ptr [ebp - 4], 0x17 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x17u);
/* 8c1b37: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1b3du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1b3d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1b3e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1b3f: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1b44: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1b47: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1b4cu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1b4c: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8c1b4e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1b51: mov ecx, esp */
  ecx = esp;
/* 8c1b53: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1b56: push 0xaeb424 */
  { uint32_t v = 0xaeb424u; esp -= 4; W32(esp, v); }
/* 8c1b5b: mov dword ptr [esi + 0x84], eax */
  W32((uint32_t)(esi + 0x84u), eax);
/* 8c1b61: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1b67u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1b67: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1b6a: mov ecx, esp */
  ecx = esp;
/* 8c1b6c: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1b6f: push 0xaeb43c */
  { uint32_t v = 0xaeb43cu; esp -= 4; W32(esp, v); }
/* 8c1b74: mov byte ptr [ebp - 4], 0x18 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x18u);
/* 8c1b78: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1b7eu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1b7e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1b7f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1b80: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1b85: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1b88: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1b8du); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1b8d: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c1b8f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1b92: mov ecx, esp */
  ecx = esp;
/* 8c1b94: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1b97: push 0xaeb458 */
  { uint32_t v = 0xaeb458u; esp -= 4; W32(esp, v); }
/* 8c1b9c: mov dword ptr [esi + 0x88], eax */
  W32((uint32_t)(esi + 0x88u), eax);
/* 8c1ba2: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1ba8u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1ba8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1bab: mov ecx, esp */
  ecx = esp;
/* 8c1bad: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1bb0: push 0xaeb470 */
  { uint32_t v = 0xaeb470u; esp -= 4; W32(esp, v); }
/* 8c1bb5: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 8c1bb9: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1bbfu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1bbf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1bc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1bc1: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1bc6: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1bc9: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1bceu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1bce: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c1bd0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1bd3: mov ecx, esp */
  ecx = esp;
/* 8c1bd5: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1bd8: push 0xaeb484 */
  { uint32_t v = 0xaeb484u; esp -= 4; W32(esp, v); }
/* 8c1bdd: mov dword ptr [esi + 0x8c], eax */
  W32((uint32_t)(esi + 0x8cu), eax);
/* 8c1be3: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1be9u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1be9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1bec: mov byte ptr [ebp - 4], 0x1a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1au);
/* 8c1bf0: mov ecx, esp */
  ecx = esp;
/* 8c1bf2: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1bf5: push 0xaeb494 */
  { uint32_t v = 0xaeb494u; esp -= 4; W32(esp, v); }
/* 8c1bfa: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1c00u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1c00: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1c01: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1c02: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1c07: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1c0a: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1c0fu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1c0f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1c10: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1c13: mov ecx, esp */
  ecx = esp;
/* 8c1c15: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1c18: push 0xaeb4a4 */
  { uint32_t v = 0xaeb4a4u; esp -= 4; W32(esp, v); }
/* 8c1c1d: mov dword ptr [esi + 0x90], eax */
  W32((uint32_t)(esi + 0x90u), eax);
/* 8c1c23: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1c29u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1c29: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1c2c: mov ecx, esp */
  ecx = esp;
/* 8c1c2e: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1c31: push 0xaeb4b4 */
  { uint32_t v = 0xaeb4b4u; esp -= 4; W32(esp, v); }
/* 8c1c36: mov byte ptr [ebp - 4], 0x1b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1bu);
/* 8c1c3a: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1c40u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1c40: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1c41: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1c42: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1c47: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1c4a: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1c4fu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1c4f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1c50: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1c53: mov ecx, esp */
  ecx = esp;
/* 8c1c55: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1c58: push 0xaeb4c4 */
  { uint32_t v = 0xaeb4c4u; esp -= 4; W32(esp, v); }
/* 8c1c5d: mov dword ptr [esi + 0x98], eax */
  W32((uint32_t)(esi + 0x98u), eax);
/* 8c1c63: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1c69u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1c69: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1c6c: mov ecx, esp */
  ecx = esp;
/* 8c1c6e: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1c71: push 0xaeb4d4 */
  { uint32_t v = 0xaeb4d4u; esp -= 4; W32(esp, v); }
/* 8c1c76: mov byte ptr [ebp - 4], 0x1c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1cu);
/* 8c1c7a: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1c80u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1c80: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1c81: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1c82: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1c87: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1c8a: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1c8fu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1c8f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1c90: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1c93: mov ecx, esp */
  ecx = esp;
/* 8c1c95: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1c98: push 0xaeb4e8 */
  { uint32_t v = 0xaeb4e8u; esp -= 4; W32(esp, v); }
/* 8c1c9d: mov dword ptr [esi + 0x9c], eax */
  W32((uint32_t)(esi + 0x9cu), eax);
/* 8c1ca3: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1ca9u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1ca9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1cac: mov ecx, esp */
  ecx = esp;
/* 8c1cae: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1cb1: push 0xaeb4f8 */
  { uint32_t v = 0xaeb4f8u; esp -= 4; W32(esp, v); }
/* 8c1cb6: mov byte ptr [ebp - 4], 0x1d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1du);
/* 8c1cba: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1cc0u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1cc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1cc1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1cc2: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1cc7: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1cca: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1ccfu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1ccf: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c1cd1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1cd4: mov ecx, esp */
  ecx = esp;
/* 8c1cd6: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1cd9: push 0xaeb518 */
  { uint32_t v = 0xaeb518u; esp -= 4; W32(esp, v); }
/* 8c1cde: mov dword ptr [esi + 0xa0], eax */
  W32((uint32_t)(esi + 0xa0u), eax);
/* 8c1ce4: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1ceau); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1cea: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1ced: mov ecx, esp */
  ecx = esp;
/* 8c1cef: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1cf2: push 0xaeb52c */
  { uint32_t v = 0xaeb52cu; esp -= 4; W32(esp, v); }
/* 8c1cf7: mov byte ptr [ebp - 4], 0x1e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1eu);
/* 8c1cfb: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1d01u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1d01: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1d04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1d05: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1d06: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1d0b: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1d10u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1d10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1d11: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1d14: mov ecx, esp */
  ecx = esp;
/* 8c1d16: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1d19: push 0xaeb53c */
  { uint32_t v = 0xaeb53cu; esp -= 4; W32(esp, v); }
/* 8c1d1e: mov dword ptr [esi + 0xa4], eax */
  W32((uint32_t)(esi + 0xa4u), eax);
/* 8c1d24: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1d2au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1d2a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1d2d: mov ecx, esp */
  ecx = esp;
/* 8c1d2f: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1d32: push 0xaeb550 */
  { uint32_t v = 0xaeb550u; esp -= 4; W32(esp, v); }
/* 8c1d37: mov byte ptr [ebp - 4], 0x1f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1fu);
/* 8c1d3b: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1d41u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1d41: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1d42: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1d43: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1d48: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1d4b: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1d50u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1d50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1d51: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1d54: mov ecx, esp */
  ecx = esp;
/* 8c1d56: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1d59: push 0xaeb564 */
  { uint32_t v = 0xaeb564u; esp -= 4; W32(esp, v); }
/* 8c1d5e: mov dword ptr [esi + 0xa8], eax */
  W32((uint32_t)(esi + 0xa8u), eax);
/* 8c1d64: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1d6au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1d6a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1d6d: mov ecx, esp */
  ecx = esp;
/* 8c1d6f: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1d72: push 0xaeb578 */
  { uint32_t v = 0xaeb578u; esp -= 4; W32(esp, v); }
/* 8c1d77: mov byte ptr [ebp - 4], 0x20 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x20u);
/* 8c1d7b: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1d81u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1d81: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1d82: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1d83: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1d88: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1d8b: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1d90u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1d90: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c1d92: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1d95: mov ecx, esp */
  ecx = esp;
/* 8c1d97: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1d9a: push 0xaeb590 */
  { uint32_t v = 0xaeb590u; esp -= 4; W32(esp, v); }
/* 8c1d9f: mov dword ptr [esi + 0xac], eax */
  W32((uint32_t)(esi + 0xacu), eax);
/* 8c1da5: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1dabu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1dab: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1dae: mov ecx, esp */
  ecx = esp;
/* 8c1db0: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1db3: push 0xaeb5a0 */
  { uint32_t v = 0xaeb5a0u; esp -= 4; W32(esp, v); }
/* 8c1db8: mov byte ptr [ebp - 4], 0x21 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x21u);
/* 8c1dbc: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1dc2u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1dc2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1dc3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1dc4: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1dc9: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1dcc: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1dd1u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1dd1: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c1dd3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1dd6: mov ecx, esp */
  ecx = esp;
/* 8c1dd8: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1ddb: push 0xaeb5ac */
  { uint32_t v = 0xaeb5acu; esp -= 4; W32(esp, v); }
/* 8c1de0: mov dword ptr [esi + 0xb0], eax */
  W32((uint32_t)(esi + 0xb0u), eax);
/* 8c1de6: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1decu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1dec: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1def: mov ecx, esp */
  ecx = esp;
/* 8c1df1: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1df4: push 0xaeb5b8 */
  { uint32_t v = 0xaeb5b8u; esp -= 4; W32(esp, v); }
/* 8c1df9: mov byte ptr [ebp - 4], 0x22 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x22u);
/* 8c1dfd: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1e03u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1e03: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1e04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1e05: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1e0a: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1e0d: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1e12u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1e12: mov dword ptr [esi + 0xb4], eax */
  W32((uint32_t)(esi + 0xb4u), eax);
/* 8c1e18: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c1e1a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1e1d: mov ecx, esp */
  ecx = esp;
/* 8c1e1f: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1e22: push 0xaeb5c4 */
  { uint32_t v = 0xaeb5c4u; esp -= 4; W32(esp, v); }
/* 8c1e27: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1e2du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1e2d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1e30: mov ecx, esp */
  ecx = esp;
/* 8c1e32: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1e35: push 0xaeb5d0 */
  { uint32_t v = 0xaeb5d0u; esp -= 4; W32(esp, v); }
/* 8c1e3a: mov byte ptr [ebp - 4], 0x23 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x23u);
/* 8c1e3e: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1e44u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1e44: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1e45: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1e46: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1e4b: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1e4e: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1e53u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1e53: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c1e55: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1e58: mov ecx, esp */
  ecx = esp;
/* 8c1e5a: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1e5d: push 0xaeb5e0 */
  { uint32_t v = 0xaeb5e0u; esp -= 4; W32(esp, v); }
/* 8c1e62: mov dword ptr [esi + 0xb8], eax */
  W32((uint32_t)(esi + 0xb8u), eax);
/* 8c1e68: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1e6eu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1e6e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1e71: mov ecx, esp */
  ecx = esp;
/* 8c1e73: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1e76: push 0xaeb5ec */
  { uint32_t v = 0xaeb5ecu; esp -= 4; W32(esp, v); }
/* 8c1e7b: mov byte ptr [ebp - 4], 0x24 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x24u);
/* 8c1e7f: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1e85u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1e85: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1e86: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1e87: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1e8c: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1e8f: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1e94u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1e94: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c1e96: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1e99: mov ecx, esp */
  ecx = esp;
/* 8c1e9b: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1e9e: push 0xaeb5f4 */
  { uint32_t v = 0xaeb5f4u; esp -= 4; W32(esp, v); }
/* 8c1ea3: mov dword ptr [esi + 0xbc], eax */
  W32((uint32_t)(esi + 0xbcu), eax);
/* 8c1ea9: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1eafu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1eaf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1eb2: mov ecx, esp */
  ecx = esp;
/* 8c1eb4: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1eb7: push 0xaeb600 */
  { uint32_t v = 0xaeb600u; esp -= 4; W32(esp, v); }
/* 8c1ebc: mov byte ptr [ebp - 4], 0x25 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x25u);
/* 8c1ec0: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1ec6u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1ec6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1ec7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1ec8: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1ecd: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1ed0: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1ed5u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1ed5: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c1ed7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1eda: mov ecx, esp */
  ecx = esp;
/* 8c1edc: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1edf: push 0xaeb60c */
  { uint32_t v = 0xaeb60cu; esp -= 4; W32(esp, v); }
/* 8c1ee4: mov dword ptr [esi + 0xc0], eax */
  W32((uint32_t)(esi + 0xc0u), eax);
/* 8c1eea: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1ef0u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1ef0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1ef3: mov ecx, esp */
  ecx = esp;
/* 8c1ef5: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1ef8: push 0xaeb618 */
  { uint32_t v = 0xaeb618u; esp -= 4; W32(esp, v); }
/* 8c1efd: mov byte ptr [ebp - 4], 0x26 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x26u);
/* 8c1f01: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1f07u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1f07: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1f08: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1f09: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1f0e: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1f11: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1f16u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1f16: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c1f18: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1f1b: mov ecx, esp */
  ecx = esp;
/* 8c1f1d: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1f20: push 0xaeb624 */
  { uint32_t v = 0xaeb624u; esp -= 4; W32(esp, v); }
/* 8c1f25: mov dword ptr [esi + 0xc4], eax */
  W32((uint32_t)(esi + 0xc4u), eax);
/* 8c1f2b: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1f31u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1f31: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1f34: mov ecx, esp */
  ecx = esp;
/* 8c1f36: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1f39: push 0xaeb630 */
  { uint32_t v = 0xaeb630u; esp -= 4; W32(esp, v); }
/* 8c1f3e: mov byte ptr [ebp - 4], 0x27 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x27u);
/* 8c1f42: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1f48u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1f48: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1f49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1f4a: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1f4f: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1f52: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1f57u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1f57: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c1f59: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1f5c: mov ecx, esp */
  ecx = esp;
/* 8c1f5e: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1f61: push 0xaeb63c */
  { uint32_t v = 0xaeb63cu; esp -= 4; W32(esp, v); }
/* 8c1f66: mov dword ptr [esi + 0xc8], eax */
  W32((uint32_t)(esi + 0xc8u), eax);
/* 8c1f6c: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1f72u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1f72: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1f75: mov ecx, esp */
  ecx = esp;
/* 8c1f77: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1f7a: push 0xaeb648 */
  { uint32_t v = 0xaeb648u; esp -= 4; W32(esp, v); }
/* 8c1f7f: mov byte ptr [ebp - 4], 0x28 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x28u);
/* 8c1f83: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1f89u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1f89: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1f8a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1f8b: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1f90: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1f93: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1f98u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1f98: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c1f9a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1f9d: mov ecx, esp */
  ecx = esp;
/* 8c1f9f: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1fa2: push 0xaeb654 */
  { uint32_t v = 0xaeb654u; esp -= 4; W32(esp, v); }
/* 8c1fa7: mov dword ptr [esi + 0xcc], eax */
  W32((uint32_t)(esi + 0xccu), eax);
/* 8c1fad: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1fb3u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1fb3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1fb6: mov ecx, esp */
  ecx = esp;
/* 8c1fb8: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1fbb: push 0xaeb668 */
  { uint32_t v = 0xaeb668u; esp -= 4; W32(esp, v); }
/* 8c1fc0: mov byte ptr [ebp - 4], 0x29 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x29u);
/* 8c1fc4: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1fcau); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1fca: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1fcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1fcc: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c1fd1: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c1fd4: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c1fd9u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c1fd9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c1fda: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1fdd: mov ecx, esp */
  ecx = esp;
/* 8c1fdf: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c1fe2: push 0xaeb680 */
  { uint32_t v = 0xaeb680u; esp -= 4; W32(esp, v); }
/* 8c1fe7: mov dword ptr [esi + 0xd0], eax */
  W32((uint32_t)(esi + 0xd0u), eax);
/* 8c1fed: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c1ff3u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c1ff3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c1ff6: mov ecx, esp */
  ecx = esp;
/* 8c1ff8: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c1ffb: push 0xaeb694 */
  { uint32_t v = 0xaeb694u; esp -= 4; W32(esp, v); }
/* 8c2000: mov byte ptr [ebp - 4], 0x2a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2au);
/* 8c2004: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c200au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c200a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c200b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c200c: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2011: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2014: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2019u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2019: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c201a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c201d: mov ecx, esp */
  ecx = esp;
/* 8c201f: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2022: push 0xaeb6a8 */
  { uint32_t v = 0xaeb6a8u; esp -= 4; W32(esp, v); }
/* 8c2027: mov dword ptr [esi + 0xd4], eax */
  W32((uint32_t)(esi + 0xd4u), eax);
/* 8c202d: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2033u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2033: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2036: mov byte ptr [ebp - 4], 0x2b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2bu);
/* 8c203a: mov ecx, esp */
  ecx = esp;
/* 8c203c: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c203f: push 0xaeb6bc */
  { uint32_t v = 0xaeb6bcu; esp -= 4; W32(esp, v); }
/* 8c2044: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c204au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c204a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c204b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c204c: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2051: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2054: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2059u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2059: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c205b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c205e: mov ecx, esp */
  ecx = esp;
/* 8c2060: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2063: push 0xaeb6dc */
  { uint32_t v = 0xaeb6dcu; esp -= 4; W32(esp, v); }
/* 8c2068: mov dword ptr [esi + 0xd8], eax */
  W32((uint32_t)(esi + 0xd8u), eax);
/* 8c206e: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2074u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2074: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2077: mov ecx, esp */
  ecx = esp;
/* 8c2079: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c207c: push 0xaeb6f0 */
  { uint32_t v = 0xaeb6f0u; esp -= 4; W32(esp, v); }
/* 8c2081: mov byte ptr [ebp - 4], 0x2c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2cu);
/* 8c2085: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c208bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c208b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c208c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c208d: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2092: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2095: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c209au); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c209a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c209b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c209e: mov ecx, esp */
  ecx = esp;
/* 8c20a0: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c20a3: push 0xaeb700 */
  { uint32_t v = 0xaeb700u; esp -= 4; W32(esp, v); }
/* 8c20a8: mov dword ptr [esi + 0xdc], eax */
  W32((uint32_t)(esi + 0xdcu), eax);
/* 8c20ae: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c20b4u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c20b4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c20b7: mov ecx, esp */
  ecx = esp;
/* 8c20b9: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c20bc: push 0xaeb718 */
  { uint32_t v = 0xaeb718u; esp -= 4; W32(esp, v); }
/* 8c20c1: mov byte ptr [ebp - 4], 0x2d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2du);
/* 8c20c5: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c20cbu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c20cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c20cc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c20cd: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c20d2: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c20d5: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c20dau); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c20da: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c20dc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c20df: mov ecx, esp */
  ecx = esp;
/* 8c20e1: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c20e4: push 0xaeb72c */
  { uint32_t v = 0xaeb72cu; esp -= 4; W32(esp, v); }
/* 8c20e9: mov dword ptr [esi + 0x114], eax */
  W32((uint32_t)(esi + 0x114u), eax);
/* 8c20ef: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c20f5u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c20f5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c20f8: mov ecx, esp */
  ecx = esp;
/* 8c20fa: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c20fd: push 0xaeb744 */
  { uint32_t v = 0xaeb744u; esp -= 4; W32(esp, v); }
/* 8c2102: mov byte ptr [ebp - 4], 0x2e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2eu);
/* 8c2106: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c210cu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c210c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c210d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c210e: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2113: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2116: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c211bu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c211b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c211c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c211f: mov ecx, esp */
  ecx = esp;
/* 8c2121: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2124: push 0xaeb758 */
  { uint32_t v = 0xaeb758u; esp -= 4; W32(esp, v); }
/* 8c2129: mov dword ptr [esi + 0x118], eax */
  W32((uint32_t)(esi + 0x118u), eax);
/* 8c212f: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2135u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2135: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2138: mov ecx, esp */
  ecx = esp;
/* 8c213a: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c213d: push 0xaeb770 */
  { uint32_t v = 0xaeb770u; esp -= 4; W32(esp, v); }
/* 8c2142: mov byte ptr [ebp - 4], 0x2f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2fu);
/* 8c2146: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c214cu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c214c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c214d: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2150: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2151: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2156: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c215bu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c215b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c215c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c215f: mov ecx, esp */
  ecx = esp;
/* 8c2161: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2164: push 0xaeb780 */
  { uint32_t v = 0xaeb780u; esp -= 4; W32(esp, v); }
/* 8c2169: mov dword ptr [esi + 0xe0], eax */
  W32((uint32_t)(esi + 0xe0u), eax);
/* 8c216f: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2175u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2175: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2178: mov ecx, esp */
  ecx = esp;
/* 8c217a: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c217d: push 0xaeb798 */
  { uint32_t v = 0xaeb798u; esp -= 4; W32(esp, v); }
/* 8c2182: mov byte ptr [ebp - 4], 0x30 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x30u);
/* 8c2186: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c218cu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c218c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c218d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c218e: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2193: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2196: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c219bu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c219b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c219c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c219f: mov ecx, esp */
  ecx = esp;
/* 8c21a1: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c21a4: push 0xaeb7c4 */
  { uint32_t v = 0xaeb7c4u; esp -= 4; W32(esp, v); }
/* 8c21a9: mov dword ptr [esi + 0xe4], eax */
  W32((uint32_t)(esi + 0xe4u), eax);
/* 8c21af: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c21b5u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c21b5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c21b8: mov ecx, esp */
  ecx = esp;
/* 8c21ba: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c21bd: push 0xaeb7dc */
  { uint32_t v = 0xaeb7dcu; esp -= 4; W32(esp, v); }
/* 8c21c2: mov byte ptr [ebp - 4], 0x31 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x31u);
/* 8c21c6: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c21ccu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c21cc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c21cd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c21ce: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c21d3: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c21d6: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c21dbu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c21db: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c21dd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c21e0: mov ecx, esp */
  ecx = esp;
/* 8c21e2: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c21e5: push 0xaeb80c */
  { uint32_t v = 0xaeb80cu; esp -= 4; W32(esp, v); }
/* 8c21ea: mov dword ptr [esi + 0xe8], eax */
  W32((uint32_t)(esi + 0xe8u), eax);
/* 8c21f0: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c21f6u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c21f6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c21f9: mov ecx, esp */
  ecx = esp;
/* 8c21fb: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c21fe: push 0xaeb824 */
  { uint32_t v = 0xaeb824u; esp -= 4; W32(esp, v); }
/* 8c2203: mov byte ptr [ebp - 4], 0x32 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x32u);
/* 8c2207: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c220du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c220d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c220e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c220f: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2214: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2217: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c221cu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c221c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c221d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2220: mov ecx, esp */
  ecx = esp;
/* 8c2222: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2225: push 0xaeb83c */
  { uint32_t v = 0xaeb83cu; esp -= 4; W32(esp, v); }
/* 8c222a: mov dword ptr [esi + 0xec], eax */
  W32((uint32_t)(esi + 0xecu), eax);
/* 8c2230: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2236u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2236: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2239: mov ecx, esp */
  ecx = esp;
/* 8c223b: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c223e: push 0xaeb854 */
  { uint32_t v = 0xaeb854u; esp -= 4; W32(esp, v); }
/* 8c2243: mov byte ptr [ebp - 4], 0x33 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x33u);
/* 8c2247: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c224du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c224d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c224e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c224f: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2254: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2257: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c225cu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c225c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c225d: mov dword ptr [esi + 0xf0], eax */
  W32((uint32_t)(esi + 0xf0u), eax);
/* 8c2263: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2266: mov ecx, esp */
  ecx = esp;
/* 8c2268: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c226b: push 0xaeb884 */
  { uint32_t v = 0xaeb884u; esp -= 4; W32(esp, v); }
/* 8c2270: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2276u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2276: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2279: mov ecx, esp */
  ecx = esp;
/* 8c227b: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c227e: push 0xaeb89c */
  { uint32_t v = 0xaeb89cu; esp -= 4; W32(esp, v); }
/* 8c2283: mov byte ptr [ebp - 4], 0x34 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x34u);
/* 8c2287: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c228du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c228d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c228e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c228f: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2294: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2297: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c229cu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c229c: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c229e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c22a1: mov ecx, esp */
  ecx = esp;
/* 8c22a3: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c22a6: push 0xaeb8d0 */
  { uint32_t v = 0xaeb8d0u; esp -= 4; W32(esp, v); }
/* 8c22ab: mov dword ptr [esi + 0xf4], eax */
  W32((uint32_t)(esi + 0xf4u), eax);
/* 8c22b1: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c22b7u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c22b7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c22ba: mov ecx, esp */
  ecx = esp;
/* 8c22bc: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c22bf: push 0xaeb8e8 */
  { uint32_t v = 0xaeb8e8u; esp -= 4; W32(esp, v); }
/* 8c22c4: mov byte ptr [ebp - 4], 0x35 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x35u);
/* 8c22c8: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c22ceu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c22ce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c22cf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c22d0: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c22d5: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c22d8: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c22ddu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c22dd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c22de: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c22e1: mov ecx, esp */
  ecx = esp;
/* 8c22e3: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c22e6: push 0xaeb904 */
  { uint32_t v = 0xaeb904u; esp -= 4; W32(esp, v); }
/* 8c22eb: mov dword ptr [esi + 0xf8], eax */
  W32((uint32_t)(esi + 0xf8u), eax);
/* 8c22f1: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c22f7u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c22f7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c22fa: mov ecx, esp */
  ecx = esp;
/* 8c22fc: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c22ff: push 0xaeb91c */
  { uint32_t v = 0xaeb91cu; esp -= 4; W32(esp, v); }
/* 8c2304: mov byte ptr [ebp - 4], 0x36 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x36u);
/* 8c2308: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c230eu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c230e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c230f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2310: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2315: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2318: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c231du); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c231d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c231e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2321: mov ecx, esp */
  ecx = esp;
/* 8c2323: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2326: push 0xaeb94c */
  { uint32_t v = 0xaeb94cu; esp -= 4; W32(esp, v); }
/* 8c232b: mov dword ptr [esi + 0xfc], eax */
  W32((uint32_t)(esi + 0xfcu), eax);
/* 8c2331: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2337u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2337: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c233a: mov ecx, esp */
  ecx = esp;
/* 8c233c: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c233f: push 0xaeb964 */
  { uint32_t v = 0xaeb964u; esp -= 4; W32(esp, v); }
/* 8c2344: mov byte ptr [ebp - 4], 0x37 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x37u);
/* 8c2348: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c234eu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c234e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c234f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2350: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2355: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2358: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c235du); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c235d: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c235f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2362: mov ecx, esp */
  ecx = esp;
/* 8c2364: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2367: push 0xaeb998 */
  { uint32_t v = 0xaeb998u; esp -= 4; W32(esp, v); }
/* 8c236c: mov dword ptr [esi + 0x100], eax */
  W32((uint32_t)(esi + 0x100u), eax);
/* 8c2372: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2378u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2378: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c237b: mov ecx, esp */
  ecx = esp;
/* 8c237d: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2380: push 0xaeb9b0 */
  { uint32_t v = 0xaeb9b0u; esp -= 4; W32(esp, v); }
/* 8c2385: mov byte ptr [ebp - 4], 0x38 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x38u);
/* 8c2389: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c238fu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c238f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2390: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2391: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2396: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2399: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c239eu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c239e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c239f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c23a2: mov ecx, esp */
  ecx = esp;
/* 8c23a4: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c23a7: push 0xaeb9cc */
  { uint32_t v = 0xaeb9ccu; esp -= 4; W32(esp, v); }
/* 8c23ac: mov dword ptr [esi + 0x104], eax */
  W32((uint32_t)(esi + 0x104u), eax);
/* 8c23b2: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c23b8u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c23b8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c23bb: mov ecx, esp */
  ecx = esp;
/* 8c23bd: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c23c0: push 0xaeb9e4 */
  { uint32_t v = 0xaeb9e4u; esp -= 4; W32(esp, v); }
/* 8c23c5: mov byte ptr [ebp - 4], 0x39 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x39u);
/* 8c23c9: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c23cfu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c23cf: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c23d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c23d1: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c23d6: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c23d9: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c23deu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c23de: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c23df: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c23e2: mov ecx, esp */
  ecx = esp;
/* 8c23e4: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c23e7: push 0xaeba18 */
  { uint32_t v = 0xaeba18u; esp -= 4; W32(esp, v); }
/* 8c23ec: mov dword ptr [esi + 0x108], eax */
  W32((uint32_t)(esi + 0x108u), eax);
/* 8c23f2: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c23f8u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c23f8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c23fb: mov ecx, esp */
  ecx = esp;
/* 8c23fd: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2400: push 0xaeba30 */
  { uint32_t v = 0xaeba30u; esp -= 4; W32(esp, v); }
/* 8c2405: mov byte ptr [ebp - 4], 0x3a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3au);
/* 8c2409: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c240fu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c240f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2410: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2411: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2416: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2419: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c241eu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c241e: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2420: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2423: mov ecx, esp */
  ecx = esp;
/* 8c2425: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2428: push 0xaeba68 */
  { uint32_t v = 0xaeba68u; esp -= 4; W32(esp, v); }
/* 8c242d: mov dword ptr [esi + 0x10c], eax */
  W32((uint32_t)(esi + 0x10cu), eax);
/* 8c2433: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2439u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2439: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c243c: mov ecx, esp */
  ecx = esp;
/* 8c243e: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2441: push 0xaeba80 */
  { uint32_t v = 0xaeba80u; esp -= 4; W32(esp, v); }
/* 8c2446: mov byte ptr [ebp - 4], 0x3b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3bu);
/* 8c244a: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2450u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2450: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2451: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2452: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2457: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c245a: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c245fu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c245f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2460: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2463: mov ecx, esp */
  ecx = esp;
/* 8c2465: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2468: push 0xaebaa0 */
  { uint32_t v = 0xaebaa0u; esp -= 4; W32(esp, v); }
/* 8c246d: mov dword ptr [esi + 0x110], eax */
  W32((uint32_t)(esi + 0x110u), eax);
/* 8c2473: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2479u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2479: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c247c: mov ecx, esp */
  ecx = esp;
/* 8c247e: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2481: mov byte ptr [ebp - 4], 0x3c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3cu);
/* 8c2485: push 0xaebaac */
  { uint32_t v = 0xaebaacu; esp -= 4; W32(esp, v); }
/* 8c248a: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2490u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2490: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2491: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2492: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2497: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c249a: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c249fu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c249f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c24a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c24a3: mov ecx, esp */
  ecx = esp;
/* 8c24a5: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c24a8: push 0xaebabc */
  { uint32_t v = 0xaebabcu; esp -= 4; W32(esp, v); }
/* 8c24ad: mov dword ptr [esi + 0x12c], eax */
  W32((uint32_t)(esi + 0x12cu), eax);
/* 8c24b3: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c24b9u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c24b9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c24bc: mov ecx, esp */
  ecx = esp;
/* 8c24be: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c24c1: push 0xaebac8 */
  { uint32_t v = 0xaebac8u; esp -= 4; W32(esp, v); }
/* 8c24c6: mov byte ptr [ebp - 4], 0x3d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3du);
/* 8c24ca: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c24d0u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c24d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c24d1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c24d2: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c24d7: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c24da: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c24dfu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c24df: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c24e1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c24e4: mov ecx, esp */
  ecx = esp;
/* 8c24e6: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c24e9: push 0xaebae0 */
  { uint32_t v = 0xaebae0u; esp -= 4; W32(esp, v); }
/* 8c24ee: mov dword ptr [esi + 0x130], eax */
  W32((uint32_t)(esi + 0x130u), eax);
/* 8c24f4: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c24fau); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c24fa: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c24fd: mov ecx, esp */
  ecx = esp;
/* 8c24ff: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2502: push 0xaebaec */
  { uint32_t v = 0xaebaecu; esp -= 4; W32(esp, v); }
/* 8c2507: mov byte ptr [ebp - 4], 0x3e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3eu);
/* 8c250b: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2511u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2511: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2512: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2513: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2518: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c251b: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2520u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2520: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2522: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2525: mov ecx, esp */
  ecx = esp;
/* 8c2527: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c252a: push 0xaebafc */
  { uint32_t v = 0xaebafcu; esp -= 4; W32(esp, v); }
/* 8c252f: mov dword ptr [esi + 0x134], eax */
  W32((uint32_t)(esi + 0x134u), eax);
/* 8c2535: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c253bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c253b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c253e: mov ecx, esp */
  ecx = esp;
/* 8c2540: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2543: push 0xaebb08 */
  { uint32_t v = 0xaebb08u; esp -= 4; W32(esp, v); }
/* 8c2548: mov byte ptr [ebp - 4], 0x3f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3fu);
/* 8c254c: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2552u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2552: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2553: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2554: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2559: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c255c: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2561u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2561: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2563: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2566: mov ecx, esp */
  ecx = esp;
/* 8c2568: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c256b: push 0xaebb24 */
  { uint32_t v = 0xaebb24u; esp -= 4; W32(esp, v); }
/* 8c2570: mov dword ptr [esi + 0x138], eax */
  W32((uint32_t)(esi + 0x138u), eax);
/* 8c2576: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c257cu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c257c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c257f: mov ecx, esp */
  ecx = esp;
/* 8c2581: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2584: push 0xaebb38 */
  { uint32_t v = 0xaebb38u; esp -= 4; W32(esp, v); }
/* 8c2589: mov byte ptr [ebp - 4], 0x40 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x40u);
/* 8c258d: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2593u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2593: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2594: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2597: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2598: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c259d: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c25a2u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c25a2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c25a3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c25a6: mov ecx, esp */
  ecx = esp;
/* 8c25a8: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c25ab: push 0xce81f4 */
  { uint32_t v = 0xce81f4u; esp -= 4; W32(esp, v); }
/* 8c25b0: mov dword ptr [esi + 0x11c], eax */
  W32((uint32_t)(esi + 0x11cu), eax);
/* 8c25b6: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c25bcu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c25bc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c25bf: mov ecx, esp */
  ecx = esp;
/* 8c25c1: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c25c4: push 0xaebb50 */
  { uint32_t v = 0xaebb50u; esp -= 4; W32(esp, v); }
/* 8c25c9: mov byte ptr [ebp - 4], 0x41 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x41u);
/* 8c25cd: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c25d3u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c25d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c25d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c25d5: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c25da: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c25dd: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c25e2u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c25e2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c25e3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c25e6: mov ecx, esp */
  ecx = esp;
/* 8c25e8: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c25eb: push 0xce81f8 */
  { uint32_t v = 0xce81f8u; esp -= 4; W32(esp, v); }
/* 8c25f0: mov dword ptr [esi + 0x120], eax */
  W32((uint32_t)(esi + 0x120u), eax);
/* 8c25f6: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c25fcu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c25fc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c25ff: mov ecx, esp */
  ecx = esp;
/* 8c2601: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2604: push 0xaebb7c */
  { uint32_t v = 0xaebb7cu; esp -= 4; W32(esp, v); }
/* 8c2609: mov byte ptr [ebp - 4], 0x42 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x42u);
/* 8c260d: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2613u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2613: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2614: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2615: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c261a: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c261d: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2622u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2622: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2623: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2626: mov ecx, esp */
  ecx = esp;
/* 8c2628: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c262b: push 0xce81fc */
  { uint32_t v = 0xce81fcu; esp -= 4; W32(esp, v); }
/* 8c2630: mov dword ptr [esi + 0x124], eax */
  W32((uint32_t)(esi + 0x124u), eax);
/* 8c2636: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c263cu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c263c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c263f: mov ecx, esp */
  ecx = esp;
/* 8c2641: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2644: push 0xaebbac */
  { uint32_t v = 0xaebbacu; esp -= 4; W32(esp, v); }
/* 8c2649: mov byte ptr [ebp - 4], 0x43 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x43u);
/* 8c264d: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2653u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2653: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2654: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2655: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c265a: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c265d: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2662u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2662: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2664: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2667: mov ecx, esp */
  ecx = esp;
/* 8c2669: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c266c: push 0xaebbe0 */
  { uint32_t v = 0xaebbe0u; esp -= 4; W32(esp, v); }
/* 8c2671: mov dword ptr [esi + 0x128], eax */
  W32((uint32_t)(esi + 0x128u), eax);
/* 8c2677: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c267du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c267d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2680: mov ecx, esp */
  ecx = esp;
/* 8c2682: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2685: push 0xaebbf4 */
  { uint32_t v = 0xaebbf4u; esp -= 4; W32(esp, v); }
/* 8c268a: mov byte ptr [ebp - 4], 0x44 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x44u);
/* 8c268e: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2694u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2694: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2695: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2696: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c269b: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c269e: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c26a3u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c26a3: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c26a5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c26a8: mov dword ptr [esi + 0x48], eax */
  W32((uint32_t)(esi + 0x48u), eax);
/* 8c26ab: mov ecx, esp */
  ecx = esp;
/* 8c26ad: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c26b0: push 0xaebbfc */
  { uint32_t v = 0xaebbfcu; esp -= 4; W32(esp, v); }
/* 8c26b5: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c26bbu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c26bb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c26be: mov ecx, esp */
  ecx = esp;
/* 8c26c0: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c26c3: push 0xaebc10 */
  { uint32_t v = 0xaebc10u; esp -= 4; W32(esp, v); }
/* 8c26c8: mov byte ptr [ebp - 4], 0x45 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x45u);
/* 8c26cc: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c26d2u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c26d2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c26d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c26d4: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c26d9: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c26dc: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c26e1u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c26e1: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c26e3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c26e6: mov ecx, esp */
  ecx = esp;
/* 8c26e8: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c26eb: push 0xaebc20 */
  { uint32_t v = 0xaebc20u; esp -= 4; W32(esp, v); }
/* 8c26f0: mov dword ptr [esi + 0x94], eax */
  W32((uint32_t)(esi + 0x94u), eax);
/* 8c26f6: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c26fcu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c26fc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c26ff: mov ecx, esp */
  ecx = esp;
/* 8c2701: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2704: push 0xaebc34 */
  { uint32_t v = 0xaebc34u; esp -= 4; W32(esp, v); }
/* 8c2709: mov byte ptr [ebp - 4], 0x46 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x46u);
/* 8c270d: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2713u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2713: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2714: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2715: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c271a: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c271d: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2722u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2722: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2724: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2727: mov ecx, esp */
  ecx = esp;
/* 8c2729: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c272c: push 0xaebc44 */
  { uint32_t v = 0xaebc44u; esp -= 4; W32(esp, v); }
/* 8c2731: mov dword ptr [esi + 0x1a0], eax */
  W32((uint32_t)(esi + 0x1a0u), eax);
/* 8c2737: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c273du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c273d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2740: mov ecx, esp */
  ecx = esp;
/* 8c2742: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2745: push 0xaebc50 */
  { uint32_t v = 0xaebc50u; esp -= 4; W32(esp, v); }
/* 8c274a: mov byte ptr [ebp - 4], 0x47 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x47u);
/* 8c274e: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2754u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2754: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2755: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2756: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c275b: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c275e: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2763u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2763: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2765: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2768: mov ecx, esp */
  ecx = esp;
/* 8c276a: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c276d: push 0xaebc64 */
  { uint32_t v = 0xaebc64u; esp -= 4; W32(esp, v); }
/* 8c2772: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8c2775: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c277bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c277b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c277e: mov ecx, esp */
  ecx = esp;
/* 8c2780: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2783: push 0xaebc70 */
  { uint32_t v = 0xaebc70u; esp -= 4; W32(esp, v); }
/* 8c2788: mov byte ptr [ebp - 4], 0x48 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x48u);
/* 8c278c: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2792u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2792: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2793: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2794: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2799: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c279c: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c27a1u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c27a1: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c27a3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c27a6: mov ecx, esp */
  ecx = esp;
/* 8c27a8: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c27ab: push 0xaebc8c */
  { uint32_t v = 0xaebc8cu; esp -= 4; W32(esp, v); }
/* 8c27b0: mov dword ptr [esi + 0x10], eax */
  W32((uint32_t)(esi + 0x10u), eax);
/* 8c27b3: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c27b9u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c27b9: mov byte ptr [ebp - 4], 0x49 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x49u);
/* 8c27bd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c27c0: mov ecx, esp */
  ecx = esp;
/* 8c27c2: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c27c5: push 0xaebc98 */
  { uint32_t v = 0xaebc98u; esp -= 4; W32(esp, v); }
/* 8c27ca: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c27d0u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c27d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c27d1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c27d2: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c27d7: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c27da: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c27dfu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c27df: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c27e1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c27e4: mov ecx, esp */
  ecx = esp;
/* 8c27e6: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c27e9: push 0xaebcb4 */
  { uint32_t v = 0xaebcb4u; esp -= 4; W32(esp, v); }
/* 8c27ee: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 8c27f1: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c27f7u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c27f7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c27fa: mov ecx, esp */
  ecx = esp;
/* 8c27fc: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c27ff: push 0xaebcc0 */
  { uint32_t v = 0xaebcc0u; esp -= 4; W32(esp, v); }
/* 8c2804: mov byte ptr [ebp - 4], 0x4a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4au);
/* 8c2808: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c280eu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c280e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c280f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2810: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2815: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2818: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c281du); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c281d: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c281f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2822: mov ecx, esp */
  ecx = esp;
/* 8c2824: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2827: push 0xaebce0 */
  { uint32_t v = 0xaebce0u; esp -= 4; W32(esp, v); }
/* 8c282c: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 8c282f: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2835u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2835: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2838: mov ecx, esp */
  ecx = esp;
/* 8c283a: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c283d: push 0xaebcec */
  { uint32_t v = 0xaebcecu; esp -= 4; W32(esp, v); }
/* 8c2842: mov byte ptr [ebp - 4], 0x4b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4bu);
/* 8c2846: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c284cu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c284c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c284d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c284e: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2853: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2856: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c285bu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c285b: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c285d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2860: mov ecx, esp */
  ecx = esp;
/* 8c2862: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2865: push 0xaebd00 */
  { uint32_t v = 0xaebd00u; esp -= 4; W32(esp, v); }
/* 8c286a: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 8c286d: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2873u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2873: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2876: mov ecx, esp */
  ecx = esp;
/* 8c2878: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c287b: push 0xaebd0c */
  { uint32_t v = 0xaebd0cu; esp -= 4; W32(esp, v); }
/* 8c2880: mov byte ptr [ebp - 4], 0x4c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4cu);
/* 8c2884: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c288au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c288a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c288b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c288c: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2891: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2894: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2899u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2899: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c289b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c289e: mov ecx, esp */
  ecx = esp;
/* 8c28a0: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c28a3: push 0xaebd20 */
  { uint32_t v = 0xaebd20u; esp -= 4; W32(esp, v); }
/* 8c28a8: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 8c28ab: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c28b1u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c28b1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c28b4: mov ecx, esp */
  ecx = esp;
/* 8c28b6: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c28b9: push 0xaebd2c */
  { uint32_t v = 0xaebd2cu; esp -= 4; W32(esp, v); }
/* 8c28be: mov byte ptr [ebp - 4], 0x4d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4du);
/* 8c28c2: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c28c8u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c28c8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c28c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c28ca: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c28cf: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c28d2: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c28d7u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c28d7: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c28d9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c28dc: mov ecx, esp */
  ecx = esp;
/* 8c28de: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c28e1: push 0xaebd58 */
  { uint32_t v = 0xaebd58u; esp -= 4; W32(esp, v); }
/* 8c28e6: mov dword ptr [esi + 0x24], eax */
  W32((uint32_t)(esi + 0x24u), eax);
/* 8c28e9: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c28efu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c28ef: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c28f2: mov ecx, esp */
  ecx = esp;
/* 8c28f4: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c28f7: push 0xaebd64 */
  { uint32_t v = 0xaebd64u; esp -= 4; W32(esp, v); }
/* 8c28fc: mov byte ptr [ebp - 4], 0x4e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4eu);
/* 8c2900: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2906u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2906: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2907: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2908: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c290d: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2910: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2915u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2915: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2917: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c291a: mov ecx, esp */
  ecx = esp;
/* 8c291c: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c291f: push 0xaebd88 */
  { uint32_t v = 0xaebd88u; esp -= 4; W32(esp, v); }
/* 8c2924: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* 8c2927: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c292du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c292d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2930: mov ecx, esp */
  ecx = esp;
/* 8c2932: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2935: push 0xaebd94 */
  { uint32_t v = 0xaebd94u; esp -= 4; W32(esp, v); }
/* 8c293a: mov byte ptr [ebp - 4], 0x4f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4fu);
/* 8c293e: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2944u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2944: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2945: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2946: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c294b: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c294e: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2953u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2953: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2955: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2958: mov ecx, esp */
  ecx = esp;
/* 8c295a: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c295d: push 0xaebda0 */
  { uint32_t v = 0xaebda0u; esp -= 4; W32(esp, v); }
/* 8c2962: mov dword ptr [esi + 0x2c], eax */
  W32((uint32_t)(esi + 0x2cu), eax);
/* 8c2965: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c296bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c296b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c296e: mov ecx, esp */
  ecx = esp;
/* 8c2970: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2973: push 0xaebdac */
  { uint32_t v = 0xaebdacu; esp -= 4; W32(esp, v); }
/* 8c2978: mov byte ptr [ebp - 4], 0x50 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x50u);
/* 8c297c: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2982u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2982: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2983: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2984: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2989: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c298c: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2991u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2991: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2993: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2996: mov ecx, esp */
  ecx = esp;
/* 8c2998: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c299b: push 0xaebdbc */
  { uint32_t v = 0xaebdbcu; esp -= 4; W32(esp, v); }
/* 8c29a0: mov dword ptr [esi + 0x13c], eax */
  W32((uint32_t)(esi + 0x13cu), eax);
/* 8c29a6: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c29acu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c29ac: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c29af: mov ecx, esp */
  ecx = esp;
/* 8c29b1: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c29b4: push 0xaebdc8 */
  { uint32_t v = 0xaebdc8u; esp -= 4; W32(esp, v); }
/* 8c29b9: mov byte ptr [ebp - 4], 0x51 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x51u);
/* 8c29bd: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c29c3u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c29c3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c29c4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c29c5: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c29ca: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c29cd: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c29d2u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c29d2: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c29d4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c29d7: mov ecx, esp */
  ecx = esp;
/* 8c29d9: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c29dc: push 0xaebde0 */
  { uint32_t v = 0xaebde0u; esp -= 4; W32(esp, v); }
/* 8c29e1: mov dword ptr [esi + 0x140], eax */
  W32((uint32_t)(esi + 0x140u), eax);
/* 8c29e7: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c29edu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c29ed: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c29f0: mov ecx, esp */
  ecx = esp;
/* 8c29f2: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c29f5: push 0xaebdec */
  { uint32_t v = 0xaebdecu; esp -= 4; W32(esp, v); }
/* 8c29fa: mov byte ptr [ebp - 4], 0x52 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x52u);
/* 8c29fe: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2a04u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2a04: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2a05: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2a06: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2a0b: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2a0e: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2a13u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2a13: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2a15: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2a18: mov ecx, esp */
  ecx = esp;
/* 8c2a1a: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2a1d: push 0xaebdf8 */
  { uint32_t v = 0xaebdf8u; esp -= 4; W32(esp, v); }
/* 8c2a22: mov dword ptr [esi + 0x144], eax */
  W32((uint32_t)(esi + 0x144u), eax);
/* 8c2a28: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2a2eu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2a2e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2a31: mov ecx, esp */
  ecx = esp;
/* 8c2a33: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2a36: push 0xaebe04 */
  { uint32_t v = 0xaebe04u; esp -= 4; W32(esp, v); }
/* 8c2a3b: mov byte ptr [ebp - 4], 0x53 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x53u);
/* 8c2a3f: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2a45u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2a45: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2a46: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2a47: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2a4c: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2a4f: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2a54u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2a54: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2a56: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2a59: mov ecx, esp */
  ecx = esp;
/* 8c2a5b: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2a5e: push 0xaebe10 */
  { uint32_t v = 0xaebe10u; esp -= 4; W32(esp, v); }
/* 8c2a63: mov dword ptr [esi + 0x148], eax */
  W32((uint32_t)(esi + 0x148u), eax);
/* 8c2a69: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2a6fu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2a6f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2a72: mov ecx, esp */
  ecx = esp;
/* 8c2a74: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2a77: push 0xaebe1c */
  { uint32_t v = 0xaebe1cu; esp -= 4; W32(esp, v); }
/* 8c2a7c: mov byte ptr [ebp - 4], 0x54 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x54u);
/* 8c2a80: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2a86u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2a86: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2a87: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2a88: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2a8d: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2a90: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2a95u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2a95: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2a97: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2a9a: mov ecx, esp */
  ecx = esp;
/* 8c2a9c: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2a9f: push 0xaebe24 */
  { uint32_t v = 0xaebe24u; esp -= 4; W32(esp, v); }
/* 8c2aa4: mov dword ptr [esi + 0x14c], eax */
  W32((uint32_t)(esi + 0x14cu), eax);
/* 8c2aaa: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2ab0u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2ab0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2ab3: mov ecx, esp */
  ecx = esp;
/* 8c2ab5: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2ab8: push 0xaebe30 */
  { uint32_t v = 0xaebe30u; esp -= 4; W32(esp, v); }
/* 8c2abd: mov byte ptr [ebp - 4], 0x55 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x55u);
/* 8c2ac1: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2ac7u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2ac7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2ac8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2ac9: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2ace: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2ad1: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2ad6u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2ad6: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2ad8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2adb: mov dword ptr [esi + 0x150], eax */
  W32((uint32_t)(esi + 0x150u), eax);
/* 8c2ae1: mov ecx, esp */
  ecx = esp;
/* 8c2ae3: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2ae6: push 0xaebe44 */
  { uint32_t v = 0xaebe44u; esp -= 4; W32(esp, v); }
/* 8c2aeb: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2af1u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2af1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2af4: mov ecx, esp */
  ecx = esp;
/* 8c2af6: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2af9: push 0xaebe50 */
  { uint32_t v = 0xaebe50u; esp -= 4; W32(esp, v); }
/* 8c2afe: mov byte ptr [ebp - 4], 0x56 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x56u);
/* 8c2b02: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2b08u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2b08: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2b09: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2b0a: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2b0f: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2b12: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2b17u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2b17: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2b19: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2b1c: mov ecx, esp */
  ecx = esp;
/* 8c2b1e: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2b21: push 0xaebe5c */
  { uint32_t v = 0xaebe5cu; esp -= 4; W32(esp, v); }
/* 8c2b26: mov dword ptr [esi + 0x154], eax */
  W32((uint32_t)(esi + 0x154u), eax);
/* 8c2b2c: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2b32u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2b32: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2b35: mov ecx, esp */
  ecx = esp;
/* 8c2b37: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2b3a: push 0xaebe68 */
  { uint32_t v = 0xaebe68u; esp -= 4; W32(esp, v); }
/* 8c2b3f: mov byte ptr [ebp - 4], 0x57 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x57u);
/* 8c2b43: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2b49u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2b49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2b4a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2b4b: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2b50: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2b53: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2b58u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2b58: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2b5a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2b5d: mov ecx, esp */
  ecx = esp;
/* 8c2b5f: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2b62: push 0xaebe8c */
  { uint32_t v = 0xaebe8cu; esp -= 4; W32(esp, v); }
/* 8c2b67: mov dword ptr [esi + 0x158], eax */
  W32((uint32_t)(esi + 0x158u), eax);
/* 8c2b6d: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2b73u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2b73: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2b76: mov ecx, esp */
  ecx = esp;
/* 8c2b78: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2b7b: push 0xaebe98 */
  { uint32_t v = 0xaebe98u; esp -= 4; W32(esp, v); }
/* 8c2b80: mov byte ptr [ebp - 4], 0x58 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x58u);
/* 8c2b84: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2b8au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2b8a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2b8b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2b8c: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2b91: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2b94: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2b99u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2b99: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2b9b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2b9e: mov ecx, esp */
  ecx = esp;
/* 8c2ba0: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2ba3: push 0xaebea8 */
  { uint32_t v = 0xaebea8u; esp -= 4; W32(esp, v); }
/* 8c2ba8: mov dword ptr [esi + 0x15c], eax */
  W32((uint32_t)(esi + 0x15cu), eax);
/* 8c2bae: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2bb4u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2bb4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2bb7: mov ecx, esp */
  ecx = esp;
/* 8c2bb9: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2bbc: push 0xaebeb4 */
  { uint32_t v = 0xaebeb4u; esp -= 4; W32(esp, v); }
/* 8c2bc1: mov byte ptr [ebp - 4], 0x59 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x59u);
/* 8c2bc5: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2bcbu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2bcb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2bcc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2bcd: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2bd2: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2bd5: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2bdau); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2bda: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2bdc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2bdf: mov ecx, esp */
  ecx = esp;
/* 8c2be1: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2be4: push 0xaebebc */
  { uint32_t v = 0xaebebcu; esp -= 4; W32(esp, v); }
/* 8c2be9: mov dword ptr [esi + 0x160], eax */
  W32((uint32_t)(esi + 0x160u), eax);
/* 8c2bef: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2bf5u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2bf5: mov byte ptr [ebp - 4], 0x5a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5au);
/* 8c2bf9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2bfc: mov ecx, esp */
  ecx = esp;
/* 8c2bfe: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2c01: push 0xaebec8 */
  { uint32_t v = 0xaebec8u; esp -= 4; W32(esp, v); }
/* 8c2c06: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2c0cu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2c0c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2c0d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2c0e: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2c13: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2c16: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2c1bu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2c1b: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2c1d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2c20: mov ecx, esp */
  ecx = esp;
/* 8c2c22: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2c25: push 0xaebedc */
  { uint32_t v = 0xaebedcu; esp -= 4; W32(esp, v); }
/* 8c2c2a: mov dword ptr [esi + 0x164], eax */
  W32((uint32_t)(esi + 0x164u), eax);
/* 8c2c30: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2c36u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2c36: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2c39: mov ecx, esp */
  ecx = esp;
/* 8c2c3b: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2c3e: push 0xaebee8 */
  { uint32_t v = 0xaebee8u; esp -= 4; W32(esp, v); }
/* 8c2c43: mov byte ptr [ebp - 4], 0x5b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5bu);
/* 8c2c47: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2c4du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2c4d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2c4e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2c4f: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2c54: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2c57: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2c5cu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2c5c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2c5d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2c60: mov ecx, esp */
  ecx = esp;
/* 8c2c62: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2c65: push 0xaebef8 */
  { uint32_t v = 0xaebef8u; esp -= 4; W32(esp, v); }
/* 8c2c6a: mov dword ptr [esi + 0x168], eax */
  W32((uint32_t)(esi + 0x168u), eax);
/* 8c2c70: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2c76u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2c76: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2c79: mov ecx, esp */
  ecx = esp;
/* 8c2c7b: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2c7e: push 0xaebf04 */
  { uint32_t v = 0xaebf04u; esp -= 4; W32(esp, v); }
/* 8c2c83: mov byte ptr [ebp - 4], 0x5c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5cu);
/* 8c2c87: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2c8du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2c8d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2c8e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2c8f: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2c94: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2c97: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2c9cu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2c9c: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2c9e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2ca1: mov ecx, esp */
  ecx = esp;
/* 8c2ca3: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2ca6: push 0xaebf10 */
  { uint32_t v = 0xaebf10u; esp -= 4; W32(esp, v); }
/* 8c2cab: mov dword ptr [esi + 0x174], eax */
  W32((uint32_t)(esi + 0x174u), eax);
/* 8c2cb1: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2cb7u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2cb7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2cba: mov ecx, esp */
  ecx = esp;
/* 8c2cbc: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2cbf: push 0xaebf1c */
  { uint32_t v = 0xaebf1cu; esp -= 4; W32(esp, v); }
/* 8c2cc4: mov byte ptr [ebp - 4], 0x5d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5du);
/* 8c2cc8: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2cceu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2cce: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2ccf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2cd0: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2cd5: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2cd8: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2cddu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2cdd: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2cdf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2ce2: mov ecx, esp */
  ecx = esp;
/* 8c2ce4: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2ce7: push 0xaebf28 */
  { uint32_t v = 0xaebf28u; esp -= 4; W32(esp, v); }
/* 8c2cec: mov dword ptr [esi + 0x170], eax */
  W32((uint32_t)(esi + 0x170u), eax);
/* 8c2cf2: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2cf8u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2cf8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2cfb: mov ecx, esp */
  ecx = esp;
/* 8c2cfd: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2d00: push 0xaebf34 */
  { uint32_t v = 0xaebf34u; esp -= 4; W32(esp, v); }
/* 8c2d05: mov byte ptr [ebp - 4], 0x5e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5eu);
/* 8c2d09: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2d0fu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2d0f: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2d12: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2d13: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2d14: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2d19: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2d1eu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2d1e: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2d20: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2d23: mov ecx, esp */
  ecx = esp;
/* 8c2d25: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2d28: push 0xaebf44 */
  { uint32_t v = 0xaebf44u; esp -= 4; W32(esp, v); }
/* 8c2d2d: mov dword ptr [esi + 0x16c], eax */
  W32((uint32_t)(esi + 0x16cu), eax);
/* 8c2d33: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2d39u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2d39: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2d3c: mov ecx, esp */
  ecx = esp;
/* 8c2d3e: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2d41: push 0xaebf50 */
  { uint32_t v = 0xaebf50u; esp -= 4; W32(esp, v); }
/* 8c2d46: mov byte ptr [ebp - 4], 0x5f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5fu);
/* 8c2d4a: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2d50u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2d50: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2d51: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2d52: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2d57: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2d5a: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2d5fu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2d5f: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2d61: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2d64: mov ecx, esp */
  ecx = esp;
/* 8c2d66: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2d69: push 0xaebf64 */
  { uint32_t v = 0xaebf64u; esp -= 4; W32(esp, v); }
/* 8c2d6e: mov dword ptr [esi + 0x178], eax */
  W32((uint32_t)(esi + 0x178u), eax);
/* 8c2d74: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2d7au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2d7a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2d7d: mov ecx, esp */
  ecx = esp;
/* 8c2d7f: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2d82: push 0xaebf70 */
  { uint32_t v = 0xaebf70u; esp -= 4; W32(esp, v); }
/* 8c2d87: mov byte ptr [ebp - 4], 0x60 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x60u);
/* 8c2d8b: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2d91u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2d91: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2d92: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2d93: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2d98: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2d9b: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2da0u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2da0: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2da2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2da5: mov ecx, esp */
  ecx = esp;
/* 8c2da7: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2daa: push 0xaebf84 */
  { uint32_t v = 0xaebf84u; esp -= 4; W32(esp, v); }
/* 8c2daf: mov dword ptr [esi + 0x17c], eax */
  W32((uint32_t)(esi + 0x17cu), eax);
/* 8c2db5: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2dbbu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2dbb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2dbe: mov ecx, esp */
  ecx = esp;
/* 8c2dc0: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2dc3: push 0xaebf90 */
  { uint32_t v = 0xaebf90u; esp -= 4; W32(esp, v); }
/* 8c2dc8: mov byte ptr [ebp - 4], 0x61 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x61u);
/* 8c2dcc: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2dd2u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2dd2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2dd3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2dd4: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2dd9: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2ddc: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2de1u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2de1: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2de3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2de6: mov ecx, esp */
  ecx = esp;
/* 8c2de8: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2deb: push 0xaebfa8 */
  { uint32_t v = 0xaebfa8u; esp -= 4; W32(esp, v); }
/* 8c2df0: mov dword ptr [esi + 0x180], eax */
  W32((uint32_t)(esi + 0x180u), eax);
/* 8c2df6: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2dfcu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2dfc: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2dff: mov ecx, esp */
  ecx = esp;
/* 8c2e01: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2e04: push 0xaebfb4 */
  { uint32_t v = 0xaebfb4u; esp -= 4; W32(esp, v); }
/* 8c2e09: mov byte ptr [ebp - 4], 0x62 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x62u);
/* 8c2e0d: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2e13u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2e13: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2e14: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2e15: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2e1a: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2e1d: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2e22u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2e22: mov dword ptr [esi + 0x184], eax */
  W32((uint32_t)(esi + 0x184u), eax);
/* 8c2e28: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2e2a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2e2d: mov ecx, esp */
  ecx = esp;
/* 8c2e2f: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2e32: push 0xaebfd4 */
  { uint32_t v = 0xaebfd4u; esp -= 4; W32(esp, v); }
/* 8c2e37: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2e3du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2e3d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2e40: mov ecx, esp */
  ecx = esp;
/* 8c2e42: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2e45: push 0xaebfe0 */
  { uint32_t v = 0xaebfe0u; esp -= 4; W32(esp, v); }
/* 8c2e4a: mov byte ptr [ebp - 4], 0x63 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x63u);
/* 8c2e4e: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2e54u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2e54: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2e55: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2e56: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2e5b: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2e5e: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2e63u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2e63: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2e65: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2e68: mov ecx, esp */
  ecx = esp;
/* 8c2e6a: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2e6d: push 0xaec000 */
  { uint32_t v = 0xaec000u; esp -= 4; W32(esp, v); }
/* 8c2e72: mov dword ptr [esi + 0x188], eax */
  W32((uint32_t)(esi + 0x188u), eax);
/* 8c2e78: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2e7eu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2e7e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2e81: mov ecx, esp */
  ecx = esp;
/* 8c2e83: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2e86: push 0xaec00c */
  { uint32_t v = 0xaec00cu; esp -= 4; W32(esp, v); }
/* 8c2e8b: mov byte ptr [ebp - 4], 0x64 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x64u);
/* 8c2e8f: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2e95u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2e95: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2e96: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2e97: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2e9c: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2e9f: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2ea4u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2ea4: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2ea6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2ea9: mov ecx, esp */
  ecx = esp;
/* 8c2eab: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2eae: push 0xaec030 */
  { uint32_t v = 0xaec030u; esp -= 4; W32(esp, v); }
/* 8c2eb3: mov dword ptr [esi + 0x18c], eax */
  W32((uint32_t)(esi + 0x18cu), eax);
/* 8c2eb9: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2ebfu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2ebf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2ec2: mov ecx, esp */
  ecx = esp;
/* 8c2ec4: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2ec7: push 0xaec03c */
  { uint32_t v = 0xaec03cu; esp -= 4; W32(esp, v); }
/* 8c2ecc: mov byte ptr [ebp - 4], 0x65 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x65u);
/* 8c2ed0: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2ed6u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2ed6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2ed7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2ed8: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2edd: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2ee0: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2ee5u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2ee5: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2ee7: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2eea: mov ecx, esp */
  ecx = esp;
/* 8c2eec: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2eef: push 0xaec054 */
  { uint32_t v = 0xaec054u; esp -= 4; W32(esp, v); }
/* 8c2ef4: mov dword ptr [esi + 0x190], eax */
  W32((uint32_t)(esi + 0x190u), eax);
/* 8c2efa: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2f00u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2f00: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2f03: mov ecx, esp */
  ecx = esp;
/* 8c2f05: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2f08: push 0xaec060 */
  { uint32_t v = 0xaec060u; esp -= 4; W32(esp, v); }
/* 8c2f0d: mov byte ptr [ebp - 4], 0x66 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x66u);
/* 8c2f11: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2f17u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2f17: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2f18: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2f19: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2f1e: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2f21: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2f26u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2f26: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2f28: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2f2b: mov ecx, esp */
  ecx = esp;
/* 8c2f2d: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2f30: mov dword ptr [esi + 0x194], eax */
  W32((uint32_t)(esi + 0x194u), eax);
/* 8c2f36: push 0xaec074 */
  { uint32_t v = 0xaec074u; esp -= 4; W32(esp, v); }
/* 8c2f3b: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2f41u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2f41: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2f44: mov ecx, esp */
  ecx = esp;
/* 8c2f46: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2f49: push 0xaec080 */
  { uint32_t v = 0xaec080u; esp -= 4; W32(esp, v); }
/* 8c2f4e: mov byte ptr [ebp - 4], 0x67 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x67u);
/* 8c2f52: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2f58u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2f58: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2f59: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2f5a: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2f5f: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2f62: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2f67u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2f67: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2f69: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2f6c: mov ecx, esp */
  ecx = esp;
/* 8c2f6e: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2f71: push 0xaec094 */
  { uint32_t v = 0xaec094u; esp -= 4; W32(esp, v); }
/* 8c2f76: mov dword ptr [esi + 0x198], eax */
  W32((uint32_t)(esi + 0x198u), eax);
/* 8c2f7c: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2f82u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2f82: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2f85: mov ecx, esp */
  ecx = esp;
/* 8c2f87: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2f8a: push 0xaec0a0 */
  { uint32_t v = 0xaec0a0u; esp -= 4; W32(esp, v); }
/* 8c2f8f: mov byte ptr [ebp - 4], 0x68 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x68u);
/* 8c2f93: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2f99u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2f99: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2f9a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c2f9b: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2fa0: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2fa3: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2fa8u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2fa8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2fa9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2fac: mov ecx, esp */
  ecx = esp;
/* 8c2fae: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2fb1: push 0xaec0b0 */
  { uint32_t v = 0xaec0b0u; esp -= 4; W32(esp, v); }
/* 8c2fb6: mov dword ptr [esi + 0x19c], eax */
  W32((uint32_t)(esi + 0x19cu), eax);
/* 8c2fbc: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2fc2u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2fc2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2fc5: mov ecx, esp */
  ecx = esp;
/* 8c2fc7: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c2fca: push 0xaec0b8 */
  { uint32_t v = 0xaec0b8u; esp -= 4; W32(esp, v); }
/* 8c2fcf: mov byte ptr [ebp - 4], 0x69 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x69u);
/* 8c2fd3: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c2fd9u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c2fd9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2fda: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c2fdc: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c2fe1: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c2fe4: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c2fe9u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c2fe9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c2fea: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c2fed: mov ecx, esp */
  ecx = esp;
/* 8c2fef: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c2ff2: push 0xaec0c4 */
  { uint32_t v = 0xaec0c4u; esp -= 4; W32(esp, v); }
/* 8c2ff7: mov dword ptr [esi + 0x1a4], eax */
  W32((uint32_t)(esi + 0x1a4u), eax);
/* 8c2ffd: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c3003u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c3003: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c3006: mov ecx, esp */
  ecx = esp;
/* 8c3008: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c300b: push 0xaec0cc */
  { uint32_t v = 0xaec0ccu; esp -= 4; W32(esp, v); }
/* 8c3010: mov byte ptr [ebp - 4], 0x6a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6au);
/* 8c3014: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c301au); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c301a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c301b: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c301d: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c3022: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c3025: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c302au); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c302a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8c302c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c302f: mov ecx, esp */
  ecx = esp;
/* 8c3031: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c3034: push 0xaec0e0 */
  { uint32_t v = 0xaec0e0u; esp -= 4; W32(esp, v); }
/* 8c3039: mov dword ptr [esi + 0x1a8], eax */
  W32((uint32_t)(esi + 0x1a8u), eax);
/* 8c303f: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c3045u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c3045: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c3048: mov byte ptr [ebp - 4], 0x6b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6bu);
/* 8c304c: mov ecx, esp */
  ecx = esp;
/* 8c304e: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c3051: push 0xaec0e8 */
  { uint32_t v = 0xaec0e8u; esp -= 4; W32(esp, v); }
/* 8c3056: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c305cu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c305c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c305d: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c305f: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c3064: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c3067: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c306cu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c306c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c306d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c3070: mov ecx, esp */
  ecx = esp;
/* 8c3072: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c3075: push 0xaec0fc */
  { uint32_t v = 0xaec0fcu; esp -= 4; W32(esp, v); }
/* 8c307a: mov dword ptr [esi + 0x1ac], eax */
  W32((uint32_t)(esi + 0x1acu), eax);
/* 8c3080: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c3086u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c3086: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c3089: mov ecx, esp */
  ecx = esp;
/* 8c308b: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c308e: push 0xaec104 */
  { uint32_t v = 0xaec104u; esp -= 4; W32(esp, v); }
/* 8c3093: mov byte ptr [ebp - 4], 0x6c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6cu);
/* 8c3097: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c309du); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c309d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c309e: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c30a0: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c30a5: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c30a8: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c30adu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c30ad: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8c30af: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c30b2: mov ecx, esp */
  ecx = esp;
/* 8c30b4: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c30b7: push 0xaec118 */
  { uint32_t v = 0xaec118u; esp -= 4; W32(esp, v); }
/* 8c30bc: mov dword ptr [esi + 0x1b0], eax */
  W32((uint32_t)(esi + 0x1b0u), eax);
/* 8c30c2: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c30c8u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c30c8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c30cb: mov ecx, esp */
  ecx = esp;
/* 8c30cd: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c30d0: push 0xaec120 */
  { uint32_t v = 0xaec120u; esp -= 4; W32(esp, v); }
/* 8c30d5: mov byte ptr [ebp - 4], 0x6d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6du);
/* 8c30d9: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c30dfu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c30df: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c30e0: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c30e2: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c30e7: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c30ea: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c30efu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c30ef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c30f0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c30f3: mov ecx, esp */
  ecx = esp;
/* 8c30f5: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c30f8: push 0xaec138 */
  { uint32_t v = 0xaec138u; esp -= 4; W32(esp, v); }
/* 8c30fd: mov dword ptr [esi + 0x1b4], eax */
  W32((uint32_t)(esi + 0x1b4u), eax);
/* 8c3103: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c3109u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c3109: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c310c: mov ecx, esp */
  ecx = esp;
/* 8c310e: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c3111: push 0xaec140 */
  { uint32_t v = 0xaec140u; esp -= 4; W32(esp, v); }
/* 8c3116: mov byte ptr [ebp - 4], 0x6e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6eu);
/* 8c311a: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c3120u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c3120: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c3121: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c3123: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c3128: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c312b: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c3130u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c3130: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8c3132: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c3135: mov ecx, esp */
  ecx = esp;
/* 8c3137: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c313a: push 0xaec158 */
  { uint32_t v = 0xaec158u; esp -= 4; W32(esp, v); }
/* 8c313f: mov dword ptr [esi + 0x1b8], eax */
  W32((uint32_t)(esi + 0x1b8u), eax);
/* 8c3145: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c314bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c314b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c314e: mov ecx, esp */
  ecx = esp;
/* 8c3150: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c3153: push 0xaec160 */
  { uint32_t v = 0xaec160u; esp -= 4; W32(esp, v); }
/* 8c3158: mov byte ptr [ebp - 4], 0x6f */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6fu);
/* 8c315c: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c3162u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c3162: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c3165: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c3166: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c3168: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c316d: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c3172u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c3172: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c3173: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c3176: mov ecx, esp */
  ecx = esp;
/* 8c3178: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c317b: push 0xaec170 */
  { uint32_t v = 0xaec170u; esp -= 4; W32(esp, v); }
/* 8c3180: mov dword ptr [esi + 0x1bc], eax */
  W32((uint32_t)(esi + 0x1bcu), eax);
/* 8c3186: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c318cu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c318c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c318f: mov ecx, esp */
  ecx = esp;
/* 8c3191: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c3194: push 0xaec178 */
  { uint32_t v = 0xaec178u; esp -= 4; W32(esp, v); }
/* 8c3199: mov byte ptr [ebp - 4], 0x70 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x70u);
/* 8c319d: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c31a3u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c31a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c31a4: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c31a6: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c31ab: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c31ae: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c31b3u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c31b3: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8c31b5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c31b8: mov ecx, esp */
  ecx = esp;
/* 8c31ba: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c31bd: push 0xaec188 */
  { uint32_t v = 0xaec188u; esp -= 4; W32(esp, v); }
/* 8c31c2: mov dword ptr [esi + 0x1c0], eax */
  W32((uint32_t)(esi + 0x1c0u), eax);
/* 8c31c8: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c31ceu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c31ce: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c31d1: mov ecx, esp */
  ecx = esp;
/* 8c31d3: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c31d6: push 0xaec190 */
  { uint32_t v = 0xaec190u; esp -= 4; W32(esp, v); }
/* 8c31db: mov byte ptr [ebp - 4], 0x71 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x71u);
/* 8c31df: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c31e5u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c31e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c31e6: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c31e8: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c31ed: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c31f0: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c31f5u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c31f5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c31f6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c31f9: mov ecx, esp */
  ecx = esp;
/* 8c31fb: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c31fe: push 0xaec1a0 */
  { uint32_t v = 0xaec1a0u; esp -= 4; W32(esp, v); }
/* 8c3203: mov dword ptr [esi + 0x1c4], eax */
  W32((uint32_t)(esi + 0x1c4u), eax);
/* 8c3209: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c320fu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c320f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c3212: mov ecx, esp */
  ecx = esp;
/* 8c3214: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c3217: push 0xaec1a8 */
  { uint32_t v = 0xaec1a8u; esp -= 4; W32(esp, v); }
/* 8c321c: mov byte ptr [ebp - 4], 0x72 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x72u);
/* 8c3220: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c3226u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c3226: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c3227: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c3229: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c322e: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c3231: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c3236u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c3236: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 8c3238: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c323b: mov ecx, esp */
  ecx = esp;
/* 8c323d: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c3240: push 0xaec1b8 */
  { uint32_t v = 0xaec1b8u; esp -= 4; W32(esp, v); }
/* 8c3245: mov dword ptr [esi + 0x1c8], eax */
  W32((uint32_t)(esi + 0x1c8u), eax);
/* 8c324b: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c3251u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c3251: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c3254: mov ecx, esp */
  ecx = esp;
/* 8c3256: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c3259: push 0xaec1c0 */
  { uint32_t v = 0xaec1c0u; esp -= 4; W32(esp, v); }
/* 8c325e: mov byte ptr [ebp - 4], 0x73 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x73u);
/* 8c3262: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c3268u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c3268: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c3269: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c326b: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c3270: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c3273: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c3278u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c3278: mov dword ptr [esi + 0x1cc], eax */
  W32((uint32_t)(esi + 0x1ccu), eax);
/* 8c327e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c327f: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c3282: mov ecx, esp */
  ecx = esp;
/* 8c3284: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c3287: push 0xaec1cc */
  { uint32_t v = 0xaec1ccu; esp -= 4; W32(esp, v); }
/* 8c328c: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c3292u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c3292: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c3295: mov ecx, esp */
  ecx = esp;
/* 8c3297: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c329a: push 0xaec1d4 */
  { uint32_t v = 0xaec1d4u; esp -= 4; W32(esp, v); }
/* 8c329f: mov byte ptr [ebp - 4], 0x74 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x74u);
/* 8c32a3: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c32a9u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c32a9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c32aa: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c32ac: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c32b1: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c32b4: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c32b9u); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c32b9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c32ba: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c32bd: mov ecx, esp */
  ecx = esp;
/* 8c32bf: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c32c2: push 0xaec1e0 */
  { uint32_t v = 0xaec1e0u; esp -= 4; W32(esp, v); }
/* 8c32c7: mov dword ptr [esi + 0x1d0], eax */
  W32((uint32_t)(esi + 0x1d0u), eax);
/* 8c32cd: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c32d3u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c32d3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c32d6: mov ecx, esp */
  ecx = esp;
/* 8c32d8: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c32db: push 0xaec1e8 */
  { uint32_t v = 0xaec1e8u; esp -= 4; W32(esp, v); }
/* 8c32e0: mov byte ptr [ebp - 4], 0x75 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x75u);
/* 8c32e4: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c32eau); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c32ea: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c32eb: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c32ed: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c32f2: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c32f5: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c32fau); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c32fa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c32fb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c32fe: mov ecx, esp */
  ecx = esp;
/* 8c3300: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c3303: push 0xaec1f4 */
  { uint32_t v = 0xaec1f4u; esp -= 4; W32(esp, v); }
/* 8c3308: mov dword ptr [esi + 0x1d4], eax */
  W32((uint32_t)(esi + 0x1d4u), eax);
/* 8c330e: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c3314u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c3314: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c3317: mov ecx, esp */
  ecx = esp;
/* 8c3319: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c331c: push 0xaec200 */
  { uint32_t v = 0xaec200u; esp -= 4; W32(esp, v); }
/* 8c3321: mov byte ptr [ebp - 4], 0x76 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x76u);
/* 8c3325: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c332bu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c332b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c332c: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c332e: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c3333: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c3336: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c333bu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c333b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c333c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c333f: mov ecx, esp */
  ecx = esp;
/* 8c3341: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c3344: push 0xaec20c */
  { uint32_t v = 0xaec20cu; esp -= 4; W32(esp, v); }
/* 8c3349: mov dword ptr [esi + 0x1d8], eax */
  W32((uint32_t)(esi + 0x1d8u), eax);
/* 8c334f: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c3355u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c3355: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c3358: mov ecx, esp */
  ecx = esp;
/* 8c335a: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c335d: push 0xaec218 */
  { uint32_t v = 0xaec218u; esp -= 4; W32(esp, v); }
/* 8c3362: mov byte ptr [ebp - 4], 0x77 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x77u);
/* 8c3366: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c336cu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c336c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c336d: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c336f: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c3374: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c3377: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c337cu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c337c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c337d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c3380: mov ecx, esp */
  ecx = esp;
/* 8c3382: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8c3385: push 0xaec220 */
  { uint32_t v = 0xaec220u; esp -= 4; W32(esp, v); }
/* 8c338a: mov dword ptr [esi + 0x1dc], eax */
  W32((uint32_t)(esi + 0x1dcu), eax);
/* 8c3390: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c3396u); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c3396: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c3399: mov ecx, esp */
  ecx = esp;
/* 8c339b: mov dword ptr [ebp - 0x18], esp */
  W32((uint32_t)(ebp + 0xffffffe8u), esp);
/* 8c339e: push 0xaec22c */
  { uint32_t v = 0xaec22cu; esp -= 4; W32(esp, v); }
/* 8c33a3: mov byte ptr [ebp - 4], 0x78 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x78u);
/* 8c33a7: call dword ptr [0xcfa2b8] */
  esp -= 4; W32(esp, 0x8c33adu); SPILL(); f_4e13de(); if (g_unwind) return; /* Core!??0FString@@QAE@PBG@Z */ RELOAD();
/* 8c33ad: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c33ae: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* 8c33b0: mov ecx, 0xce8200 */
  ecx = 0xce8200u;
/* 8c33b5: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 8c33b8: call 0x6cae34 */
  esp -= 4; W32(esp, 0x8c33bdu); SPILL(); f_6cae34(); if (g_unwind) return; RELOAD();
/* 8c33bd: mov dword ptr [esi + 0x1e0], eax */
  W32((uint32_t)(esi + 0x1e0u), eax);
/* 8c33c3: mov dword ptr [0xce8204], edi */
  W32((uint32_t)(0xce8204u), edi);
/* 8c33c9: mov dword ptr [0xce8208], edi */
  W32((uint32_t)(0xce8208u), edi);
/* 8c33cf: mov dword ptr [0xce821c], edi */
  W32((uint32_t)(0xce821cu), edi);
L_8c33d5: /* 8c33d5: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c33d8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c33d9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c33da: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c33e1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c33e2: mov esp, ebp */
  esp = ebp;
/* 8c33e4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c33e5: ret  */
  esp += 4; SPILL(); return;
}

void f_8c33e6(void) {
  LOAD_REGS();
L_8c33e6: /* 8c33e6: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8c33e9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8c33ee: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8c33f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c33f2: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8c33f5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c33fau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8c33fa(); return;
}

void f_8c33fa(void) {
  LOAD_REGS();
L_8c33fa: /* 8c33fa: push 0xa1bd24 */
  { uint32_t v = 0xa1bd24u; esp -= 4; W32(esp, v); }
/* 8c33ff: push 0xaec234 */
  { uint32_t v = 0xaec234u; esp -= 4; W32(esp, v); }
/* 8c3404: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8c340au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8c340a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c340d: xor ebx, ebx */
  ebx = 0;
/* 8c340f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c3410: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c3411: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c3416u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8c3416: guest_badaddr(0x8c3416); return;
}

void f_8c3be0(void) {
  LOAD_REGS();
L_8c3be0: /* 8c3be0: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8c3be2: push 0x9d7ab8 */
  { uint32_t v = 0x9d7ab8u; esp -= 4; W32(esp, v); }
/* 8c3be7: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8c3bed: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c3bee: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8c3bf5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c3bf6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c3bf7: mov esi, ecx */
  esi = ecx;
/* 8c3bf9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c3bfa: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 8c3bfd: mov dword ptr [esp + 8], esi */
  W32((uint32_t)(esp + 0x8u), esi);
/* 8c3c01: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8c3c07u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8c3c07: lea ecx, [esi + 0x2c] */
  ecx = (uint32_t)(esi + 0x2cu);
/* 8c3c0a: mov dword ptr [esp + 0x14], 0 */
  W32((uint32_t)(esp + 0x14u), 0x0u);
/* 8c3c12: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8c3c18u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8c3c18: lea ecx, [esi + 0x38] */
  ecx = (uint32_t)(esi + 0x38u);
/* 8c3c1b: mov byte ptr [esp + 0x14], 1 */
  W8((uint32_t)(esp + 0x14u), 0x1u);
/* 8c3c20: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8c3c26u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8c3c26: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* 8c3c29: mov byte ptr [esp + 0x14], 2 */
  W8((uint32_t)(esp + 0x14u), 0x2u);
/* 8c3c2e: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8c3c34u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8c3c34: lea ecx, [esi + 0x50] */
  ecx = (uint32_t)(esi + 0x50u);
/* 8c3c37: mov byte ptr [esp + 0x14], 3 */
  W8((uint32_t)(esp + 0x14u), 0x3u);
/* 8c3c3c: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8c3c42u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8c3c42: lea ecx, [esi + 0x5c] */
  ecx = (uint32_t)(esi + 0x5cu);
/* 8c3c45: mov byte ptr [esp + 0x14], 4 */
  W8((uint32_t)(esp + 0x14u), 0x4u);
/* 8c3c4a: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8c3c50u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8c3c50: lea ecx, [esi + 0x68] */
  ecx = (uint32_t)(esi + 0x68u);
/* 8c3c53: mov byte ptr [esp + 0x14], 5 */
  W8((uint32_t)(esp + 0x14u), 0x5u);
/* 8c3c58: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8c3c5eu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8c3c5e: lea ecx, [esi + 0x74] */
  ecx = (uint32_t)(esi + 0x74u);
/* 8c3c61: mov byte ptr [esp + 0x14], 6 */
  W8((uint32_t)(esp + 0x14u), 0x6u);
/* 8c3c66: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8c3c6cu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8c3c6c: lea ecx, [esi + 0x80] */
  ecx = (uint32_t)(esi + 0x80u);
/* 8c3c72: mov byte ptr [esp + 0x14], 7 */
  W8((uint32_t)(esp + 0x14u), 0x7u);
/* 8c3c77: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8c3c7du); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8c3c7d: lea ecx, [esi + 0x8c] */
  ecx = (uint32_t)(esi + 0x8cu);
/* 8c3c83: mov byte ptr [esp + 0x14], 8 */
  W8((uint32_t)(esp + 0x14u), 0x8u);
/* 8c3c88: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8c3c8eu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8c3c8e: lea ecx, [esi + 0x98] */
  ecx = (uint32_t)(esi + 0x98u);
/* 8c3c94: mov byte ptr [esp + 0x14], 9 */
  W8((uint32_t)(esp + 0x14u), 0x9u);
/* 8c3c99: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8c3c9fu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8c3c9f: lea ecx, [esi + 0xa4] */
  ecx = (uint32_t)(esi + 0xa4u);
/* 8c3ca5: mov byte ptr [esp + 0x14], 0xa */
  W8((uint32_t)(esp + 0x14u), 0xau);
/* 8c3caa: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8c3cb0u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8c3cb0: push 0x6c8828 */
  { uint32_t v = 0x6c8828u; esp -= 4; W32(esp, v); }
/* 8c3cb5: push 0x6c6eec */
  { uint32_t v = 0x6c6eecu; esp -= 4; W32(esp, v); }
/* 8c3cba: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* 8c3cbc: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8c3cbe: lea eax, [esi + 0xb0] */
  eax = (uint32_t)(esi + 0xb0u);
/* 8c3cc4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c3cc5: mov byte ptr [esp + 0x28], 0xb */
  W8((uint32_t)(esp + 0x28u), 0xbu);
/* 8c3cca: call 0x99cafe */
  esp -= 4; W32(esp, 0x8c3ccfu); SPILL(); f_99cafe(); if (g_unwind) return; RELOAD();
/* 8c3ccf: lea ecx, [esi + 0x104] */
  ecx = (uint32_t)(esi + 0x104u);
/* 8c3cd5: mov byte ptr [esp + 0x14], 0xc */
  W8((uint32_t)(esp + 0x14u), 0xcu);
/* 8c3cda: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8c3ce0u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8c3ce0: lea edi, [esi + 4] */
  edi = (uint32_t)(esi + 0x4u);
/* 8c3ce3: xor eax, eax */
  eax = 0;
/* 8c3ce5: mov ecx, 7 */
  ecx = 0x7u;
/* 8c3cea: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8c3cec: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8c3cf0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c3cf1: mov eax, esi */
  eax = esi;
/* 8c3cf3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c3cf4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c3cfb: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c3cfe: ret  */
  esp += 4; SPILL(); return;
}

void f_8c3d50(void) {
  LOAD_REGS();
L_8c3d50: /* 8c3d50: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8c3d52: sub eax, dword ptr [ecx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c3d54: imul eax, dword ptr [0xaec860] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(0xaec860u)));
  eax = (uint32_t)r;
  }
/* 8c3d5b: ret  */
  esp += 4; SPILL(); return;
}

void f_8c3d70(void) {
  LOAD_REGS();
L_8c3d70: /* 8c3d70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c3d71: mov ebp, esp */
  ebp = esp;
/* 8c3d73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8c3d75: push 0x9d7af0 */
  { uint32_t v = 0x9d7af0u; esp -= 4; W32(esp, v); }
/* 8c3d7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8c3d80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c3d81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8c3d88: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c3d8b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c3d8c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c3d8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c3d8e: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8c3d91: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8c3d98: call dword ptr [0xcfa230] */
  esp -= 4; W32(esp, 0x8c3d9eu); SPILL(); f_4e4110(); if (g_unwind) return; /* Core!?PostLoad@UObject@@UAEXXZ */ RELOAD();
/* 8c3d9e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c3da1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c3da2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c3da3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c3daa: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c3dab: mov esp, ebp */
  esp = ebp;
/* 8c3dad: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c3dae: ret  */
  esp += 4; SPILL(); return;
}

void f_8c3daf(void) {
  LOAD_REGS();
L_8c3daf: /* 8c3daf: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c3db2: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8c3db7: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8c3dba: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c3dbb: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8c3dbe: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c3dc3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8c3dc3(); return;
}

void f_8c3dc3(void) {
  LOAD_REGS();
L_8c3dc3: /* 8c3dc3: push 0xa1bd54 */
  { uint32_t v = 0xa1bd54u; esp -= 4; W32(esp, v); }
/* 8c3dc8: push 0xaec874 */
  { uint32_t v = 0xaec874u; esp -= 4; W32(esp, v); }
/* 8c3dcd: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8c3dd3u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8c3dd3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c3dd6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c3dd8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c3dda: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c3ddfu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8c3ddf: guest_badaddr(0x8c3ddf); return;
}

void f_8c3e00(void) {
  LOAD_REGS();
L_8c3e00: /* 8c3e00: mov eax, dword ptr [ecx + 0x6c] */
  eax = R32((uint32_t)(ecx + 0x6cu));
/* 8c3e03: add eax, dword ptr [esp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x8u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c3e07: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 8c3e0a: imul eax, dword ptr [edx + 0x128c] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(edx + 0x128cu)));
  eax = (uint32_t)r;
  }
/* 8c3e11: mov edx, dword ptr [ecx + 0x68] */
  edx = R32((uint32_t)(ecx + 0x68u));
/* 8c3e14: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8c3e18: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c3e1a: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c3e1c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8c3e30(void) {
  LOAD_REGS();
L_8c3e30: /* 8c3e30: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8c3e33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c3e34: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8c3e37: xor esi, esi */
  esi = 0;
/* 8c3e39: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8c3e3c: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8c3e3f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c3e41: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8c3e43: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8c3e45: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c3e47: fsub dword ptr [ecx + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xcu)));
/* 8c3e4a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8c3e50: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c3e52: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c3e55: jp 0x8c3e5c */
  if (pf) goto L_8c3e5c;
L_8c3e57: /* 8c3e57: mov esi, 1 */
  esi = 0x1u;
L_8c3e5c: /* 8c3e5c: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 8c3e5f: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8c3e62: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 8c3e65: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8c3e68: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c3e6a: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 8c3e6d: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8c3e6f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c3e71: fsub dword ptr [ecx + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x1cu)));
/* 8c3e74: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8c3e7a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c3e7c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c3e7f: jp 0x8c3e84 */
  if (pf) goto L_8c3e84;
L_8c3e81: /* 8c3e81: or esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_8c3e84: /* 8c3e84: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 8c3e87: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8c3e8a: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 8c3e8d: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8c3e90: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c3e92: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 8c3e95: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8c3e97: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c3e99: fsub dword ptr [ecx + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x2cu)));
/* 8c3e9c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8c3ea2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c3ea4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c3ea7: jp 0x8c3eac */
  if (pf) goto L_8c3eac;
L_8c3ea9: /* 8c3ea9: or esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_8c3eac: /* 8c3eac: fld dword ptr [ecx + 0x34] */
  { double v = F32((uint32_t)(ecx + 0x34u)); FPUSH(v); }
/* 8c3eaf: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8c3eb2: fld dword ptr [ecx + 0x38] */
  { double v = F32((uint32_t)(ecx + 0x38u)); FPUSH(v); }
/* 8c3eb5: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8c3eb8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c3eba: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* 8c3ebd: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8c3ebf: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c3ec1: fsub dword ptr [ecx + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x3cu)));
/* 8c3ec4: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8c3eca: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c3ecc: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c3ecf: jp 0x8c3ed4 */
  if (pf) goto L_8c3ed4;
L_8c3ed1: /* 8c3ed1: or esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_8c3ed4: /* 8c3ed4: fld dword ptr [ecx + 0x44] */
  { double v = F32((uint32_t)(ecx + 0x44u)); FPUSH(v); }
/* 8c3ed7: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8c3eda: fld dword ptr [ecx + 0x48] */
  { double v = F32((uint32_t)(ecx + 0x48u)); FPUSH(v); }
/* 8c3edd: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8c3ee0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c3ee2: fld dword ptr [ecx + 0x40] */
  { double v = F32((uint32_t)(ecx + 0x40u)); FPUSH(v); }
/* 8c3ee5: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8c3ee7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c3ee9: fsub dword ptr [ecx + 0x4c] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x4cu)));
/* 8c3eec: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8c3ef2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c3ef4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c3ef7: jp 0x8c3efc */
  if (pf) goto L_8c3efc;
L_8c3ef9: /* 8c3ef9: or esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_8c3efc: /* 8c3efc: fld dword ptr [ecx + 0x54] */
  { double v = F32((uint32_t)(ecx + 0x54u)); FPUSH(v); }
/* 8c3eff: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8c3f02: fld dword ptr [ecx + 0x58] */
  { double v = F32((uint32_t)(ecx + 0x58u)); FPUSH(v); }
/* 8c3f05: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8c3f08: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c3f0a: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8c3f0c: fmul dword ptr [ecx + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x50u)));
/* 8c3f0f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c3f11: fsub dword ptr [ecx + 0x5c] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x5cu)));
/* 8c3f14: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8c3f1a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c3f1c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c3f1f: jp 0x8c3f24 */
  if (pf) goto L_8c3f24;
L_8c3f21: /* 8c3f21: or esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a | b);
  esi = r;
  }
L_8c3f24: /* 8c3f24: mov eax, esi */
  eax = esi;
/* 8c3f26: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c3f27: ret  */
  esp += 4; SPILL(); return;
}

void f_8c3f70(void) {
  LOAD_REGS();
L_8c3f70: /* 8c3f70: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c3f71: mov ebp, esp */
  ebp = esp;
/* 8c3f73: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8c3f75: push 0x9d7b00 */
  { uint32_t v = 0x9d7b00u; esp -= 4; W32(esp, v); }
/* 8c3f7a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8c3f80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c3f81: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8c3f88: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c3f8b: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8c3f8e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c3f8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c3f90: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8c3f93: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c3f94: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c3f99: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8c3f9c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c3f9d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c3f9e: mov ecx, esi */
  ecx = esi;
/* 8c3fa0: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8c3fa7: call dword ptr [0xcfa530] */
  esp -= 4; W32(esp, 0x8c3fadu); SPILL(); f_4e310c(); if (g_unwind) return; /* Core!??0FBox@@QAE@ABVFVector@@0@Z */ RELOAD();
/* 8c3fad: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c3fb0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c3fb1: mov eax, esi */
  eax = esi;
/* 8c3fb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c3fb4: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c3fbb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c3fbc: mov esp, ebp */
  esp = ebp;
/* 8c3fbe: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c3fbf: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8c3fc2(void) {
  LOAD_REGS();
L_8c3fc2: /* 8c3fc2: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c3fc5: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8c3fca: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8c3fcd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c3fce: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8c3fd1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c3fd6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8c3fd6(); return;
}

void f_8c3fd6(void) {
  LOAD_REGS();
L_8c3fd6: /* 8c3fd6: push 0xa1bd90 */
  { uint32_t v = 0xa1bd90u; esp -= 4; W32(esp, v); }
/* 8c3fdb: push 0xaec948 */
  { uint32_t v = 0xaec948u; esp -= 4; W32(esp, v); }
/* 8c3fe0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8c3fe6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8c3fe6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c3fe9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c3feb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c3fed: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c3ff2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8c3ff2: guest_badaddr(0x8c3ff2); return;
}

void f_8c4030(void) {
  LOAD_REGS();
L_8c4030: /* 8c4030: mov eax, dword ptr [ecx + 0x128c] */
  eax = R32((uint32_t)(ecx + 0x128cu));
/* 8c4036: imul eax, dword ptr [esp + 8] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x8u)));
  eax = (uint32_t)r;
  }
/* 8c403b: add eax, dword ptr [esp + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c403f: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8c4060(void) {
  LOAD_REGS();
L_8c4060: /* 8c4060: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c4061: mov esi, ecx */
  esi = ecx;
/* 8c4063: lea ecx, [esi + 0x20] */
  ecx = (uint32_t)(esi + 0x20u);
/* 8c4066: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x8c406cu); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 8c406c: mov eax, esi */
  eax = esi;
/* 8c406e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c406f: ret  */
  esp += 4; SPILL(); return;
}

void f_8c4080(void) {
  LOAD_REGS();
L_8c4080: /* 8c4080: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c4081: mov ebp, esp */
  ebp = esp;
/* 8c4083: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8c4085: push 0x9d7b10 */
  { uint32_t v = 0x9d7b10u; esp -= 4; W32(esp, v); }
/* 8c408a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8c4090: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4091: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8c4098: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c409b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c409c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c409d: mov esi, ecx */
  esi = ecx;
/* 8c409f: mov eax, dword ptr [esi + 0xb0] */
  eax = R32((uint32_t)(esi + 0xb0u));
/* 8c40a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c40a7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c40a8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8c40ab: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8c40b2: je 0x8c40c5 */
  if (zf) goto L_8c40c5;
L_8c40b4: /* 8c40b4: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 8c40ba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c40bc: je 0x8c40c5 */
  if (zf) goto L_8c40c5;
L_8c40be: /* 8c40be: mov ecx, eax */
  ecx = eax;
/* 8c40c0: call 0x6c2649 */
  esp -= 4; W32(esp, 0x8c40c5u); SPILL(); f_6c2649(); if (g_unwind) return; RELOAD();
L_8c40c5: /* 8c40c5: mov ecx, esi */
  ecx = esi;
/* 8c40c7: call 0x6c1ee7 */
  esp -= 4; W32(esp, 0x8c40ccu); SPILL(); f_6c1ee7(); if (g_unwind) return; RELOAD();
/* 8c40cc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c40cf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c40d0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c40d1: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c40d8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c40d9: mov esp, ebp */
  esp = ebp;
/* 8c40db: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c40dc: ret  */
  esp += 4; SPILL(); return;
}

void f_8c40dd(void) {
  LOAD_REGS();
L_8c40dd: /* 8c40dd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c40e0: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8c40e5: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8c40e8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c40e9: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8c40ec: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c40f1u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8c40f1(); return;
}

void f_8c40f1(void) {
  LOAD_REGS();
L_8c40f1: /* 8c40f1: push 0xa1bdf0 */
  { uint32_t v = 0xa1bdf0u; esp -= 4; W32(esp, v); }
/* 8c40f6: push 0xaeca64 */
  { uint32_t v = 0xaeca64u; esp -= 4; W32(esp, v); }
/* 8c40fb: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8c4101u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8c4101: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c4104: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c4106: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c4108: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c410du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8c410d: guest_badaddr(0x8c410d); return;
}

void f_8c4140(void) {
  LOAD_REGS();
L_8c4140: /* 8c4140: sub esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c4143: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c4144: mov ebx, ecx */
  ebx = ecx;
/* 8c4146: fld dword ptr [ebx + 0x34c] */
  { double v = F32((uint32_t)(ebx + 0x34cu)); FPUSH(v); }
/* 8c414c: mov eax, dword ptr [ebx + 0x348] */
  eax = R32((uint32_t)(ebx + 0x348u));
/* 8c4152: fmul dword ptr [0xa181b8] */
  ST0 = ST0 * (F32((uint32_t)(0xa181b8u)));
/* 8c4158: mov ecx, dword ptr [ebx + 0x344] */
  ecx = R32((uint32_t)(ebx + 0x344u));
/* 8c415e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c415f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c4160: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 8c4164: fld dword ptr [ebx + 0x170] */
  { double v = F32((uint32_t)(ebx + 0x170u)); FPUSH(v); }
/* 8c416a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c416b: fdiv dword ptr [ebx + 0x344] */
  ST0 = ST0 / (F32((uint32_t)(ebx + 0x344u)));
/* 8c4171: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 8c4175: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c4176: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* 8c417a: mov dword ptr [esp + 0x30], ecx */
  W32((uint32_t)(esp + 0x30u), ecx);
/* 8c417e: lea eax, [esp + 0x24] */
  eax = (uint32_t)(esp + 0x24u);
/* 8c4182: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4183: lea ecx, [esp + 0x34] */
  ecx = (uint32_t)(esp + 0x34u);
/* 8c4187: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c4188: lea edx, [esp + 0x44] */
  edx = (uint32_t)(esp + 0x44u);
/* 8c418c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c418d: lea ecx, [esp + 0x54] */
  ecx = (uint32_t)(esp + 0x54u);
/* 8c4191: mov dword ptr [esp + 0x24], 0 */
  W32((uint32_t)(esp + 0x24u), 0x0u);
/* 8c4199: mov dword ptr [esp + 0x28], 0 */
  W32((uint32_t)(esp + 0x28u), 0x0u);
/* 8c41a1: mov dword ptr [esp + 0x30], 0 */
  W32((uint32_t)(esp + 0x30u), 0x0u);
/* 8c41a9: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 8c41b1: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 8c41b9: mov dword ptr [esp + 0x44], 0 */
  W32((uint32_t)(esp + 0x44u), 0x0u);
/* 8c41c1: fchs  */
  ST0 = -ST0;
/* 8c41c3: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 8c41c7: fld dword ptr [0xa08220] */
  { double v = F32((uint32_t)(0xa08220u)); FPUSH(v); }
/* 8c41cd: fdiv dword ptr [ebx + 0x348] */
  ST0 = ST0 / (F32((uint32_t)(ebx + 0x348u)));
/* 8c41d3: fmul dword ptr [ebx + 0x174] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x174u)));
/* 8c41d9: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 8c41dd: fld dword ptr [ebx + 0x178] */
  { double v = F32((uint32_t)(ebx + 0x178u)); FPUSH(v); }
/* 8c41e3: fdiv dword ptr [ebx + 0x34c] */
  ST0 = ST0 / (F32((uint32_t)(ebx + 0x34cu)));
/* 8c41e9: fmul dword ptr [0xa1be24] */
  ST0 = ST0 * (F32((uint32_t)(0xa1be24u)));
/* 8c41ef: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 8c41f3: call dword ptr [0xcfa5b0] */
  esp -= 4; W32(esp, 0x8c41f9u); SPILL(); f_4e317f(); if (g_unwind) return; /* Core!??0FCoords@@QAE@ABVFVector@@000@Z */ RELOAD();
/* 8c41f9: mov esi, eax */
  esi = eax;
/* 8c41fb: mov eax, dword ptr [ebx + 0x340] */
  eax = R32((uint32_t)(ebx + 0x340u));
/* 8c4201: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c4203: lea ebp, [ebx + 0x12ac] */
  ebp = (uint32_t)(ebx + 0x12acu);
/* 8c4209: mov ecx, 0xc */
  ecx = 0xcu;
/* 8c420e: mov edi, ebp */
  edi = ebp;
/* 8c4210: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c4212: je 0x8c4257 */
  if (zf) goto L_8c4257;
L_8c4214: /* 8c4214: mov eax, dword ptr [ebx + 0x128c] */
  eax = R32((uint32_t)(ebx + 0x128cu));
/* 8c421a: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8c421b: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c421d: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8c421f: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8c4223: mov eax, dword ptr [ebx + 0x1290] */
  eax = R32((uint32_t)(ebx + 0x1290u));
/* 8c4229: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8c422d: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8c422e: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c4230: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8c4232: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8c4236: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 8c423a: lea eax, [esp + 0x38] */
  eax = (uint32_t)(esp + 0x38u);
/* 8c423e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c423f: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8c4243: mov ecx, ebp */
  ecx = ebp;
/* 8c4245: mov dword ptr [esp + 0x44], 0x46fffe00 */
  W32((uint32_t)(esp + 0x44u), 0x46fffe00u);
/* 8c424d: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 8c4251: call dword ptr [0xcfac4c] */
  esp -= 4; W32(esp, 0x8c4257u); SPILL(); f_4e3918(); if (g_unwind) return; /* Core!??_0FCoords@@QAEAAV0@ABVFVector@@@Z */ RELOAD();
L_8c4257: /* 8c4257: lea ecx, [esp + 0x44] */
  ecx = (uint32_t)(esp + 0x44u);
/* 8c425b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c425c: mov ecx, ebp */
  ecx = ebp;
/* 8c425e: call dword ptr [0xcfaba8] */
  esp -= 4; W32(esp, 0x8c4264u); SPILL(); f_4e405c(); if (g_unwind) return; /* Core!?Inverse@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 8c4264: lea edi, [ebx + 0x12dc] */
  edi = (uint32_t)(ebx + 0x12dcu);
/* 8c426a: mov ecx, 0xc */
  ecx = 0xcu;
/* 8c426f: mov esi, eax */
  esi = eax;
/* 8c4271: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c4273: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c4274: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c4275: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c4276: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c4277: add esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c427a: ret  */
  esp += 4; SPILL(); return;
}

void f_8c42d0(void) {
  LOAD_REGS();
L_8c42d0: /* 8c42d0: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c42d3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c42d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c42d5: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 8c42d9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c42db: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c42dc: mov edi, ecx */
  edi = ecx;
/* 8c42de: jne 0x8c42fb */
  if (!zf) goto L_8c42fb;
L_8c42e0: /* 8c42e0: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* 8c42e4: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c42e7: jne 0x8c42f1 */
  if (!zf) goto L_8c42f1;
L_8c42e9: /* 8c42e9: mov esi, dword ptr [edi + 0x340] */
  esi = R32((uint32_t)(edi + 0x340u));
/* 8c42ef: jmp 0x8c42fb */
  goto L_8c42fb;
L_8c42f1: /* 8c42f1: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 8c42f4: mov esi, dword ptr [eax + edi + 0x354] */
  esi = R32((uint32_t)(eax + edi + 0x354u));
L_8c42fb: /* 8c42fb: fild dword ptr [esi + 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x40u)); FPUSH(v); }
/* 8c42fe: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* 8c4302: fidiv dword ptr [edi + 0x128c] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(edi + 0x128cu)));
/* 8c4308: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c430du); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c430d: fild dword ptr [esi + 0x44] */
  { double v = (double)(int32_t)R32((uint32_t)(esi + 0x44u)); FPUSH(v); }
/* 8c4310: mov ebx, eax */
  ebx = eax;
/* 8c4312: fmul dword ptr [esp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x28u)));
/* 8c4316: fidiv dword ptr [edi + 0x1290] */
  ST0 = ST0 / ((double)(int32_t)R32((uint32_t)(edi + 0x1290u)));
/* 8c431c: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c4321u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c4321: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c4322: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 8c4326: mov edi, eax */
  edi = eax;
/* 8c4328: call 0x6c2f36 */
  esp -= 4; W32(esp, 0x8c432du); SPILL(); f_6c2f36(); if (g_unwind) return; RELOAD();
/* 8c432d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c432f: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 8c4333: call 0x6c68b6 */
  esp -= 4; W32(esp, 0x8c4338u); SPILL(); f_6c68b6(); if (g_unwind) return; RELOAD();
/* 8c4338: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c433a: je 0x8c435c */
  if (zf) goto L_8c435c;
L_8c433c: /* 8c433c: mov cl, byte ptr [esi + 0x38] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x38u))) & 0xffu);
/* 8c433f: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c4341: je 0x8c434d */
  if (zf) goto L_8c434d;
L_8c4343: /* 8c4343: cmp cl, 5 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8c4346: je 0x8c4365 */
  if (zf) goto L_8c4365;
L_8c4348: /* 8c4348: cmp cl, 9 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8c434b: jne 0x8c435c */
  if (!zf) goto L_8c435c;
L_8c434d: /* 8c434d: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8c4350: mov dl, byte ptr [esp + 0x30] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x30u))) & 0xffu);
/* 8c4354: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* 8c4357: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c4359: mov byte ptr [ecx + ebx], dl */
  W8((uint32_t)(ecx + ebx), (edx & 0xffu));
L_8c435c: /* 8c435c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c435d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c435e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c435f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c4362: ret 0x14 */
  esp += 24; SPILL(); return;
L_8c4365: /* 8c4365: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8c4368: mov dl, byte ptr [esp + 0x30] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x30u))) & 0xffu);
/* 8c436c: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* 8c436f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c4370: add ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c4372: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c4373: mov byte ptr [eax + ecx*4 + 3], dl */
  W8((uint32_t)(eax + ecx*4 + 0x3u), (edx & 0xffu));
/* 8c4377: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c4378: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c437b: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8c43b0(void) {
  LOAD_REGS();
L_8c43b0: /* 8c43b0: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c43b3: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8c43b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c43b6: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8c43b8: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8c43bb: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8c43be: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8c43c1: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 8c43c5: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 8c43c8: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8c43ca: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8c43cc: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8c43d0: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 8c43d3: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8c43d6: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8c43da: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 8c43dd: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 8c43e0: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 8c43e4: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8c43e6: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8c43e8: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 8c43ea: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8c43ec: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8c43f0: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8c43f2: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 8c43f6: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8c43f8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8c43fa: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8c43fe: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8c4400: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 8c4404: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8c4406: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 8c440a: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8c440c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8c440e: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 8c4412: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8c4414: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8c4416: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8c441cu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8c441c: mov eax, esi */
  eax = esi;
/* 8c441e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c4421: ret  */
  esp += 4; SPILL(); return;
}

void f_8c4450(void) {
  LOAD_REGS();
L_8c4450: /* 8c4450: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c4451: mov ebp, esp */
  ebp = esp;
/* 8c4453: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8c4455: push 0x9d7b33 */
  { uint32_t v = 0x9d7b33u; esp -= 4; W32(esp, v); }
/* 8c445a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8c4460: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4461: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8c4468: sub esp, 0xfc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c446e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c446f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c4470: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c4471: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8c4474: mov ebx, edx */
  ebx = edx;
/* 8c4476: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8c4478: mov esi, ecx */
  esi = ecx;
/* 8c447a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c447b: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8c447e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8c4485: call 0x6c460b */
  esp -= 4; W32(esp, 0x8c448au); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 8c448a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8c448d: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8c4490: fsub dword ptr [0xa1737c] */
  ST0 = ST0 - (F32((uint32_t)(0xa1737cu)));
/* 8c4496: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8c4498: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8c449b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c449c: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8c449f: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8c44a2: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8c44a5: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8c44a8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c44ab: mov ecx, esp */
  ecx = esp;
/* 8c44ad: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8c44af: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8c44b2: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8c44b5: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c44b8: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8c44bb: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c44be: mov ecx, esi */
  ecx = esi;
/* 8c44c0: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 8c44c2: mov edx, esp */
  edx = esp;
/* 8c44c4: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 8c44c6: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 8c44c9: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8c44cc: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 8c44cf: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8c44d2: mov ecx, eax */
  ecx = eax;
/* 8c44d4: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8c44d8: call 0x6cc74d */
  esp -= 4; W32(esp, 0x8c44ddu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 8c44dd: lea ecx, [ebp - 0x5c] */
  ecx = (uint32_t)(ebp + 0xffffffa4u);
/* 8c44e0: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8c44e4: call 0x6cadcb */
  esp -= 4; W32(esp, 0x8c44e9u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
/* 8c44e9: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8c44ec: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 8c44ef: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c44f0: add edx, 0xd0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xd0u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c44f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c44f7: lea ecx, [ebp - 0x108] */
  ecx = (uint32_t)(ebp + 0xfffffef8u);
/* 8c44fd: call 0x6cbd48 */
  esp -= 4; W32(esp, 0x8c4502u); SPILL(); f_6cbd48(); if (g_unwind) return; RELOAD();
/* 8c4502: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8c4504: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 8c4507: mov ebx, dword ptr [0xb19028] */
  ebx = R32((uint32_t)(0xb19028u));
/* 8c450d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c4510: mov eax, esp */
  eax = esp;
/* 8c4512: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8c4514: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 8c4517: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8c451a: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 8c451d: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8c4520: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c4521: mov ecx, edi */
  ecx = edi;
/* 8c4523: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8c4527: call 0x6c6221 */
  esp -= 4; W32(esp, 0x8c452cu); SPILL(); f_6c6221(); if (g_unwind) return; RELOAD();
/* 8c452c: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8c452f: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8c4532: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8c4535: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 8c4538: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 8c453b: lea eax, [ebp - 0x4c] */
  eax = (uint32_t)(ebp + 0xffffffb4u);
/* 8c453e: lea ecx, [ebp - 0xf4] */
  ecx = (uint32_t)(ebp + 0xffffff0cu);
/* 8c4544: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 8c4547: mov dword ptr [ebp - 0x40], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x3f800000u);
/* 8c454e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8c4551: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 8c4554: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8c4557: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8c455a: lea edi, [ebp - 0x24] */
  edi = (uint32_t)(ebp + 0xffffffdcu);
/* 8c455d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8c455f: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8c4561: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8c4563: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8c4566: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8c4568: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8c456b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8c456d: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8c4570: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8c4573: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8c4576: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8c4579: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8c457c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8c457f: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8c4582: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8c4585: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8c4588: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8c458a: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8c458c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8c458e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8c4590: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c4592: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8c4595: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8c4598: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8c459b: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8c459e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8c45a1: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8c45a4: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8c45a7: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8c45aa: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8c45ac: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8c45ae: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8c45b0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8c45b2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c45b4: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8c45b7: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8c45ba: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8c45bd: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8c45c0: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8c45c3: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8c45c6: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8c45c9: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8c45cc: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8c45ce: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8c45d0: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8c45d2: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8c45d4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8c45d6: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8c45d8: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8c45da: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8c45dc: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8c45df: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8c45e2: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8c45e5: mov eax, dword ptr [ebx + 0x44] */
  eax = R32((uint32_t)(ebx + 0x44u));
/* 8c45e8: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8c45e9: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c45eb: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8c45ed: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8c45f0: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8c45f3: mov eax, dword ptr [ebx + 0x40] */
  eax = R32((uint32_t)(ebx + 0x40u));
/* 8c45f6: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8c45f7: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c45f9: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8c45fc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c45fd: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8c45ff: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c4600: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8c4603: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8c4606: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8c4609: fild dword ptr [ebx + 0x4c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x4cu)); FPUSH(v); }
/* 8c460c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c460d: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c4610: lea ecx, [ebp - 0x108] */
  ecx = (uint32_t)(ebp + 0xfffffef8u);
/* 8c4616: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8c461a: fild dword ptr [ebx + 0x48] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x48u)); FPUSH(v); }
/* 8c461d: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8c4620: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c4622: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8c4624: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c4626: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8c4629: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c462c: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 8c4630: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8c4633: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8c4635: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8c4639: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8c463c: fsub st(2) */
  ST0 = ST0 - STI(2);
/* 8c463e: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8c4642: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8c4645: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8c4647: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8c464a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8c464c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8c464e: call 0x6ca6b4 */
  esp -= 4; W32(esp, 0x8c4653u); SPILL(); f_6ca6b4(); if (g_unwind) return; RELOAD();
/* 8c4653: lea ecx, [ebp - 0x108] */
  ecx = (uint32_t)(ebp + 0xfffffef8u);
/* 8c4659: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8c465d: call 0x6caac4 */
  esp -= 4; W32(esp, 0x8c4662u); SPILL(); f_6caac4(); if (g_unwind) return; RELOAD();
/* 8c4662: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c4665: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c4666: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c4667: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c466e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c466f: mov esp, ebp */
  esp = ebp;
/* 8c4671: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c4672: ret  */
  esp += 4; SPILL(); return;
}

void f_8c4673(void) {
  LOAD_REGS();
L_8c4673: /* 8c4673: mov ecx, dword ptr [ebp - 0x60] */
  ecx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8c4676: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8c467b: lea edx, [ebp - 0x28] */
  edx = (uint32_t)(ebp + 0xffffffd8u);
/* 8c467e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c467f: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 8c4682: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c4687u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8c4687(); return;
}

void f_8c4687(void) {
  LOAD_REGS();
L_8c4687: /* 8c4687: push 0xa1be28 */
  { uint32_t v = 0xa1be28u; esp -= 4; W32(esp, v); }
/* 8c468c: push 0xaecc2c */
  { uint32_t v = 0xaecc2cu; esp -= 4; W32(esp, v); }
/* 8c4691: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8c4697u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8c4697: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c469a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c469c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c469e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c46a3u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8c46a3: guest_badaddr(0x8c46a3); return;
}

void f_8c4750(void) {
  LOAD_REGS();
L_8c4750: /* 8c4750: mov eax, ecx */
  eax = ecx;
/* 8c4752: ret  */
  esp += 4; SPILL(); return;
}

void f_8c4770(void) {
  LOAD_REGS();
L_8c4770: /* 8c4770: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8c4774: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8c4778: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8c477a: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8c477e: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 8c4781: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8c4785: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8c4788: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* 8c478c: mov dword ptr [ecx + 0x10], eax */
  W32((uint32_t)(ecx + 0x10u), eax);
/* 8c478f: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8c4793: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8c4796: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8c4798: mov dword ptr [ecx + 0x14], edx */
  W32((uint32_t)(ecx + 0x14u), edx);
/* 8c479b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8c479e: mov dword ptr [ecx + 0x18], edx */
  W32((uint32_t)(ecx + 0x18u), edx);
/* 8c47a1: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8c47a4: mov dword ptr [ecx + 0x1c], edx */
  W32((uint32_t)(ecx + 0x1cu), edx);
/* 8c47a7: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 8c47aa: mov dword ptr [ecx + 0x20], edx */
  W32((uint32_t)(ecx + 0x20u), edx);
/* 8c47ad: mov edx, dword ptr [eax + 0x10] */
  edx = R32((uint32_t)(eax + 0x10u));
/* 8c47b0: mov dword ptr [ecx + 0x24], edx */
  W32((uint32_t)(ecx + 0x24u), edx);
/* 8c47b3: mov edx, dword ptr [eax + 0x14] */
  edx = R32((uint32_t)(eax + 0x14u));
/* 8c47b6: mov dword ptr [ecx + 0x28], edx */
  W32((uint32_t)(ecx + 0x28u), edx);
/* 8c47b9: mov edx, dword ptr [eax + 0x18] */
  edx = R32((uint32_t)(eax + 0x18u));
/* 8c47bc: mov dword ptr [ecx + 0x2c], edx */
  W32((uint32_t)(ecx + 0x2cu), edx);
/* 8c47bf: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 8c47c2: mov dword ptr [ecx + 0x30], eax */
  W32((uint32_t)(ecx + 0x30u), eax);
/* 8c47c5: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_8c47f0(void) {
  LOAD_REGS();
L_8c47f0: /* 8c47f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c47f1: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8c47f5: xor edx, edx */
  edx = 0;
/* 8c47f7: lea eax, [ecx + 0x14] */
  eax = (uint32_t)(ecx + 0x14u);
/* 8c47fa: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8c47fc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8c4800: /* 8c4800: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8c4802: cmp ecx, dword ptr [esi + eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + eax)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c4805: jne 0x8c4819 */
  if (!zf) goto L_8c4819;
L_8c4807: /* 8c4807: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8c4808: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c480b: cmp edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c480e: jl 0x8c4800 */
  if ((sf != of)) goto L_8c4800;
L_8c4810: /* 8c4810: mov eax, 1 */
  eax = 0x1u;
/* 8c4815: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c4816: ret 4 */
  esp += 8; SPILL(); return;
L_8c4819: /* 8c4819: xor eax, eax */
  eax = 0;
/* 8c481b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c481c: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c4830(void) {
  LOAD_REGS();
L_8c4830: /* 8c4830: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* 8c4833: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c4834: mov esi, dword ptr [ecx + 0xc] */
  esi = R32((uint32_t)(ecx + 0xcu));
/* 8c4837: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8c4839: ja 0x8c4863 */
  if ((!cf && !zf)) goto L_8c4863;
L_8c483b: /* 8c483b: jb 0x8c486c */
  if (cf) goto L_8c486c;
L_8c483d: /* 8c483d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8c483f: mov esi, dword ptr [ecx] */
  esi = R32((uint32_t)(ecx));
/* 8c4841: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c4843: jne 0x8c484f */
  if (!zf) goto L_8c484f;
L_8c4845: /* 8c4845: mov esi, dword ptr [edx + 4] */
  esi = R32((uint32_t)(edx + 0x4u));
/* 8c4848: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8c484b: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c484d: je 0x8c4853 */
  if (zf) goto L_8c4853;
L_8c484f: /* 8c484f: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c4851: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c4852: ret  */
  esp += 4; SPILL(); return;
L_8c4853: /* 8c4853: mov eax, dword ptr [edx + 8] */
  eax = R32((uint32_t)(edx + 0x8u));
/* 8c4856: mov esi, dword ptr [ecx + 8] */
  esi = R32((uint32_t)(ecx + 0x8u));
/* 8c4859: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 8c485c: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 8c485f: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c4861: jle 0x8c486a */
  if ((zf || sf != of)) goto L_8c486a;
L_8c4863: /* 8c4863: mov eax, 1 */
  eax = 0x1u;
/* 8c4868: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c4869: ret  */
  esp += 4; SPILL(); return;
L_8c486a: /* 8c486a: jge 0x8c4871 */
  if ((sf == of)) goto L_8c4871;
L_8c486c: /* 8c486c: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8c486f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c4870: ret  */
  esp += 4; SPILL(); return;
L_8c4871: /* 8c4871: fld dword ptr [edx + 0x10] */
  { double v = F32((uint32_t)(edx + 0x10u)); FPUSH(v); }
/* 8c4874: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c4875: fsub dword ptr [ecx + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x10u)));
/* 8c4878: jmp 0x99c958 */
  SPILL(); f_99c958(); return;
}

void f_8c48a0(void) {
  LOAD_REGS();
L_8c48a0: /* 8c48a0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c48a1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c48a2: mov ebp, dword ptr [0xcfa1b0] */
  ebp = R32((uint32_t)(0xcfa1b0u));
/* 8c48a8: mov ebx, dword ptr [ebp + 4] */
  ebx = R32((uint32_t)(ebp + 0x4u));
/* 8c48ab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c48ac: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c48ad: mov edi, dword ptr [ebp] */
  edi = R32((uint32_t)(ebp));
/* 8c48b0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c48b2: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 8c48b7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c48b8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c48b9: mov esi, ecx */
  esi = ecx;
/* 8c48bb: call 0x99c910 */
  esp -= 4; W32(esp, 0x8c48c0u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 8c48c0: mov ecx, 0 */
  ecx = 0x0u;
/* 8c48c5: add eax, 0xe2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe2u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 8c48ca: adc edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 8c48cc: add edi, 1 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  edi = r;
  }
/* 8c48cf: mov dword ptr [ebp], edi */
  W32((uint32_t)(ebp), edi);
/* 8c48d2: mov edi, dword ptr [0xcfa1b0] */
  edi = R32((uint32_t)(0xcfa1b0u));
/* 8c48d8: adc ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  ebx = r;
  }
/* 8c48da: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 8c48dd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c48de: mov dword ptr [esi + 0xc], eax */
  W32((uint32_t)(esi + 0xcu), eax);
/* 8c48e1: mov dword ptr [esi + 0x10], edx */
  W32((uint32_t)(esi + 0x10u), edx);
/* 8c48e4: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 8c48e7: mov dword ptr [esi + 0x14], 0x7fffffff */
  W32((uint32_t)(esi + 0x14u), 0x7fffffffu);
/* 8c48ee: mov dword ptr [esi + 0x18], ecx */
  W32((uint32_t)(esi + 0x18u), ecx);
/* 8c48f1: mov dword ptr [esi + 0x1c], ecx */
  W32((uint32_t)(esi + 0x1cu), ecx);
/* 8c48f4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c48f5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c48f6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c48f7: ret  */
  esp += 4; SPILL(); return;
}

void f_8c4920(void) {
  LOAD_REGS();
L_8c4920: /* 8c4920: mov eax, dword ptr [eax + 0x34] */
  eax = R32((uint32_t)(eax + 0x34u));
/* 8c4923: sub eax, dword ptr [ecx + 0x34] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x34u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c4926: imul eax, dword ptr [0xaeccb4] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(0xaeccb4u)));
  eax = (uint32_t)r;
  }
/* 8c492d: ret  */
  esp += 4; SPILL(); return;
}

void f_8c4940(void) {
  LOAD_REGS();
L_8c4940: /* 8c4940: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8c4944: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c4945: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8c4947: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4948: mov esi, ecx */
  esi = ecx;
/* 8c494a: call dword ptr [0xcfa378] */
  esp -= 4; W32(esp, 0x8c4950u); SPILL(); f_4e3869(); if (g_unwind) return; /* Core!??0FArray@@IAE@HH@Z */ RELOAD();
/* 8c4950: mov eax, esi */
  eax = esi;
/* 8c4952: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c4953: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c4970(void) {
  LOAD_REGS();
L_8c4970: /* 8c4970: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8c4974: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* 8c4976: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4977: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8c497du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8c497d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c4990(void) {
  LOAD_REGS();
L_8c4990: /* 8c4990: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8c4994: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4995: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 8c4997: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8c499du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8c499d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c49b0(void) {
  LOAD_REGS();
L_8c49b0: /* 8c49b0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8c49b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c49b5: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 8c49b7: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8c49bdu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8c49bd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c49d0(void) {
  LOAD_REGS();
L_8c49d0: /* 8c49d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8c49d4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c49d5: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 8c49d7: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8c49ddu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8c49dd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c49f0(void) {
  LOAD_REGS();
L_8c49f0: /* 8c49f0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c49f1: mov esi, ecx */
  esi = ecx;
/* 8c49f3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8c49f9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8c49f9: mov eax, esi */
  eax = esi;
/* 8c49fb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c49fc: ret  */
  esp += 4; SPILL(); return;
}

void f_8c4a10(void) {
  LOAD_REGS();
L_8c4a10: /* 8c4a10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c4a11: mov esi, ecx */
  esi = ecx;
/* 8c4a13: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8c4a19u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8c4a19: mov eax, esi */
  eax = esi;
/* 8c4a1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c4a1c: ret  */
  esp += 4; SPILL(); return;
}

void f_8c4a30(void) {
  LOAD_REGS();
L_8c4a30: /* 8c4a30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8c4a34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4a35: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8c4a37: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8c4a3du); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8c4a3d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c4a50(void) {
  LOAD_REGS();
L_8c4a50: /* 8c4a50: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c4a51: mov esi, ecx */
  esi = ecx;
/* 8c4a53: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8c4a59u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8c4a59: mov eax, esi */
  eax = esi;
/* 8c4a5b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c4a5c: ret  */
  esp += 4; SPILL(); return;
}

void f_8c4a70(void) {
  LOAD_REGS();
L_8c4a70: /* 8c4a70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c4a71: mov esi, ecx */
  esi = ecx;
/* 8c4a73: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8c4a79u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8c4a79: mov eax, esi */
  eax = esi;
/* 8c4a7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c4a7c: ret  */
  esp += 4; SPILL(); return;
}

void f_8c4a90(void) {
  LOAD_REGS();
L_8c4a90: /* 8c4a90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8c4a94: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 8c4a96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4a97: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8c4a9du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8c4a9d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c4ab0(void) {
  LOAD_REGS();
L_8c4ab0: /* 8c4ab0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c4ab1: mov esi, ecx */
  esi = ecx;
/* 8c4ab3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8c4ab9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8c4ab9: mov eax, esi */
  eax = esi;
/* 8c4abb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c4abc: ret  */
  esp += 4; SPILL(); return;
}

void f_8c4ad0(void) {
  LOAD_REGS();
L_8c4ad0: /* 8c4ad0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8c4ad4: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8c4ad6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4ad7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8c4addu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8c4add: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c4af0(void) {
  LOAD_REGS();
L_8c4af0: /* 8c4af0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c4af1: mov esi, ecx */
  esi = ecx;
/* 8c4af3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8c4af9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8c4af9: mov eax, esi */
  eax = esi;
/* 8c4afb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c4afc: ret  */
  esp += 4; SPILL(); return;
}

void f_8c4b10(void) {
  LOAD_REGS();
L_8c4b10: /* 8c4b10: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c4b11: mov esi, ecx */
  esi = ecx;
/* 8c4b13: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8c4b19u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8c4b19: mov eax, esi */
  eax = esi;
/* 8c4b1b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c4b1c: ret  */
  esp += 4; SPILL(); return;
}

void f_8c4b30(void) {
  LOAD_REGS();
L_8c4b30: /* 8c4b30: mov eax, ecx */
  eax = ecx;
/* 8c4b32: ret  */
  esp += 4; SPILL(); return;
}

void f_8c4b50(void) {
  LOAD_REGS();
L_8c4b50: /* 8c4b50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8c4b54: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8c4b56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4b57: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8c4b5du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8c4b5d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c4b70(void) {
  LOAD_REGS();
L_8c4b70: /* 8c4b70: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c4b71: mov esi, ecx */
  esi = ecx;
/* 8c4b73: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8c4b79u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8c4b79: mov eax, esi */
  eax = esi;
/* 8c4b7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c4b7c: ret  */
  esp += 4; SPILL(); return;
}

void f_8c4b90(void) {
  LOAD_REGS();
L_8c4b90: /* 8c4b90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8c4b94: push 0x24 */
  { uint32_t v = 0x24u; esp -= 4; W32(esp, v); }
/* 8c4b96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4b97: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8c4b9du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8c4b9d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c4bb0(void) {
  LOAD_REGS();
L_8c4bb0: /* 8c4bb0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8c4bb4: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8c4bb6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4bb7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8c4bbdu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8c4bbd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c4bd0(void) {
  LOAD_REGS();
L_8c4bd0: /* 8c4bd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8c4bd4: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8c4bd6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4bd7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8c4bddu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8c4bdd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c4bf0(void) {
  LOAD_REGS();
L_8c4bf0: /* 8c4bf0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8c4bf4: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8c4bf6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4bf7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8c4bfdu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8c4bfd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c4c10(void) {
  LOAD_REGS();
L_8c4c10: /* 8c4c10: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8c4c14: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8c4c16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4c17: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8c4c1du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8c4c1d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c4c30(void) {
  LOAD_REGS();
L_8c4c30: /* 8c4c30: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8c4c34: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
/* 8c4c36: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4c37: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8c4c3du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8c4c3d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c4c50(void) {
  LOAD_REGS();
L_8c4c50: /* 8c4c50: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8c4c54: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8c4c56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4c57: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8c4c5du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8c4c5d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c4c70(void) {
  LOAD_REGS();
L_8c4c70: /* 8c4c70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8c4c74: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8c4c76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4c77: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8c4c7du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8c4c7d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c4c90(void) {
  LOAD_REGS();
L_8c4c90: /* 8c4c90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8c4c94: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 8c4c96: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4c97: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8c4c9du); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8c4c9d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c4cb0(void) {
  LOAD_REGS();
L_8c4cb0: /* 8c4cb0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c4cb1: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8c4cb5: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* 8c4cb9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c4cba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c4cbb: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8c4cbf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c4cc0: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8c4cc3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4cc4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c4cc5: call dword ptr [0xcfa518] */
  esp -= 4; W32(esp, 0x8c4ccbu); SPILL(); f_4e2324(); if (g_unwind) return; /* Core!?PushBytes@FMemStack@@QAEPAEHH@Z */ RELOAD();
/* 8c4ccb: mov edx, eax */
  edx = eax;
/* 8c4ccd: mov dword ptr [esp + 0x18], edx */
  W32((uint32_t)(esp + 0x18u), edx);
/* 8c4cd1: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* 8c4cd5: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8c4cd9: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 8c4cdd: xor eax, eax */
  eax = 0;
/* 8c4cdf: mov ebx, ecx */
  ebx = ecx;
/* 8c4ce1: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8c4ce4: and ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8c4ce7: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 8c4ce9: mov ecx, ebx */
  ecx = ebx;
/* 8c4ceb: rep stosb byte ptr es:[edi], al */
  if (!DF) { guest_stos8(edi, (uint8_t)eax, ecx); edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, (uint8_t)eax); edi += (DF ? -1 : 1); ecx--; } }
/* 8c4ced: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c4cee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c4cef: mov eax, edx */
  eax = edx;
/* 8c4cf1: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c4cf2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 8c4cf3: ret  */
  esp += 4; SPILL(); return;
}

void f_8c4d20(void) {
  LOAD_REGS();
L_8c4d20: /* 8c4d20: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8c4d24: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8c4d28: sub esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c4d2b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c4d2c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c4d2d: mov ecx, 0xd */
  ecx = 0xdu;
/* 8c4d32: mov esi, eax */
  esi = eax;
/* 8c4d34: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
/* 8c4d38: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c4d3a: mov ecx, 0xd */
  ecx = 0xdu;
/* 8c4d3f: mov esi, edx */
  esi = edx;
/* 8c4d41: mov edi, eax */
  edi = eax;
/* 8c4d43: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c4d45: mov ecx, 0xd */
  ecx = 0xdu;
/* 8c4d4a: lea esi, [esp + 8] */
  esi = (uint32_t)(esp + 0x8u);
/* 8c4d4e: mov edi, edx */
  edi = edx;
/* 8c4d50: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c4d52: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c4d53: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c4d54: add esp, 0x34 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c4d57: ret  */
  esp += 4; SPILL(); return;
}

void f_8c4d70(void) {
  LOAD_REGS();
L_8c4d70: /* 8c4d70: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8c4d74: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8c4d78: sub esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c4d7b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c4d7c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c4d7d: mov ecx, 0xe */
  ecx = 0xeu;
/* 8c4d82: mov esi, eax */
  esi = eax;
/* 8c4d84: lea edi, [esp + 8] */
  edi = (uint32_t)(esp + 0x8u);
/* 8c4d88: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c4d8a: mov ecx, 0xe */
  ecx = 0xeu;
/* 8c4d8f: mov esi, edx */
  esi = edx;
/* 8c4d91: mov edi, eax */
  edi = eax;
/* 8c4d93: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c4d95: mov ecx, 0xe */
  ecx = 0xeu;
/* 8c4d9a: lea esi, [esp + 8] */
  esi = (uint32_t)(esp + 0x8u);
/* 8c4d9e: mov edi, edx */
  edi = edx;
/* 8c4da0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c4da2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c4da3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c4da4: add esp, 0x38 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x38u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c4da7: ret  */
  esp += 4; SPILL(); return;
}

void f_8c4dc0(void) {
  LOAD_REGS();
L_8c4dc0: /* 8c4dc0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8c4dc4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8c4dc8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8c4dca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c4dcb: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x8c4dceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c4dce: ret  */
  esp += 4; SPILL(); return;
}

void f_8c4de0(void) {
  LOAD_REGS();
L_8c4de0: /* 8c4de0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8c4de4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c4de5: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 8c4deb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c4dec: lea ecx, [eax + 8] */
  ecx = (uint32_t)(eax + 0x8u);
/* 8c4def: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c4df0: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 8c4df3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c4df4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4df5: lea edi, [eax + 0xc] */
  edi = (uint32_t)(eax + 0xcu);
/* 8c4df8: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8c4dfc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4dfd: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8c4dffu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c4dff: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c4e02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4e03: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8c4e05u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c4e05: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c4e08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4e09: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8c4e0bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c4e0b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c4e0e: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* 8c4e11: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c4e12: lea edx, [edi + 4] */
  edx = (uint32_t)(edi + 0x4u);
/* 8c4e15: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c4e16: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c4e17: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4e18: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8c4e1au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c4e1a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c4e1d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4e1e: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8c4e20u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c4e20: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c4e23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4e24: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8c4e26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c4e26: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c4e29: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c4e2a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c4e2b: ret  */
  esp += 4; SPILL(); return;
}

void f_8c4e50(void) {
  LOAD_REGS();
L_8c4e50: /* 8c4e50: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 8c4e54: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c4e55: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c4e56: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c4e57: mov esi, dword ptr [0xcfa1b4] */
  esi = R32((uint32_t)(0xcfa1b4u));
/* 8c4e5d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c4e5e: mov edi, dword ptr [esp + 0x18] */
  edi = R32((uint32_t)(esp + 0x18u));
/* 8c4e62: lea eax, [edi + 8] */
  eax = (uint32_t)(edi + 0x8u);
/* 8c4e65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4e66: lea ecx, [edi + 4] */
  ecx = (uint32_t)(edi + 0x4u);
/* 8c4e69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c4e6a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c4e6b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c4e6c: lea ebx, [edi + 0xc] */
  ebx = (uint32_t)(edi + 0xcu);
/* 8c4e6f: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8c4e71u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c4e71: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c4e74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4e75: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8c4e77u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c4e77: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c4e7a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4e7b: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8c4e7du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c4e7d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c4e80: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 8c4e83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c4e84: lea edx, [ebx + 4] */
  edx = (uint32_t)(ebx + 0x4u);
/* 8c4e87: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c4e88: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c4e89: mov ebx, dword ptr [0xcfa280] */
  ebx = R32((uint32_t)(0xcfa280u));
/* 8c4e8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4e90: lea ebp, [edi + 0x18] */
  ebp = (uint32_t)(edi + 0x18u);
/* 8c4e93: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8c4e95u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c4e95: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c4e98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4e99: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8c4e9bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c4e9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c4e9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4e9f: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8c4ea1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c4ea1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c4ea4: lea ecx, [ebp + 8] */
  ecx = (uint32_t)(ebp + 0x8u);
/* 8c4ea7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c4ea8: lea edx, [ebp + 4] */
  edx = (uint32_t)(ebp + 0x4u);
/* 8c4eab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c4eac: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c4ead: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4eae: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8c4eb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c4eb0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c4eb3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4eb4: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8c4eb6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c4eb6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c4eb9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4eba: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8c4ebcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c4ebc: lea ecx, [edi + 0x24] */
  ecx = (uint32_t)(edi + 0x24u);
/* 8c4ebf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c4ec2: lea edx, [ecx + 8] */
  edx = (uint32_t)(ecx + 0x8u);
/* 8c4ec5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c4ec6: lea edx, [ecx + 4] */
  edx = (uint32_t)(ecx + 0x4u);
/* 8c4ec9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c4eca: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c4ecb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4ecc: lea ebx, [edi + 0x30] */
  ebx = (uint32_t)(edi + 0x30u);
/* 8c4ecf: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8c4ed1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c4ed1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c4ed4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4ed5: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8c4ed7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c4ed7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c4eda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4edb: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8c4eddu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c4edd: mov esi, dword ptr [0xcfa1b8] */
  esi = R32((uint32_t)(0xcfa1b8u));
/* 8c4ee3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c4ee6: add edi, 0x34 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x34u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8c4ee9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c4eea: lea ecx, [ebx + 3] */
  ecx = (uint32_t)(ebx + 0x3u);
/* 8c4eed: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c4eee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c4eef: lea edx, [ebx + 1] */
  edx = (uint32_t)(ebx + 0x1u);
/* 8c4ef2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c4ef3: add ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8c4ef6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c4ef7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4ef8: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8c4efau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c4efa: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c4efd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4efe: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8c4f00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c4f00: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c4f03: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4f04: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8c4f06u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c4f06: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c4f09: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4f0a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8c4f0cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c4f0c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c4f0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4f10: call dword ptr [0xcfa280] */
  esp -= 4; W32(esp, 0x8c4f16u); SPILL(); f_4e4160(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAH@Z */ RELOAD();
/* 8c4f16: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c4f19: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c4f1a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c4f1b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c4f1c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c4f1d: ret  */
  esp += 4; SPILL(); return;
}

void f_8c4f60(void) {
  LOAD_REGS();
L_8c4f60: /* 8c4f60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c4f61: mov esi, ecx */
  esi = ecx;
/* 8c4f63: lea ecx, [esi + 8] */
  ecx = (uint32_t)(esi + 0x8u);
/* 8c4f66: mov dword ptr [esi + 4], 0xffffffff */
  W32((uint32_t)(esi + 0x4u), 0xffffffffu);
/* 8c4f6d: call dword ptr [0xcfa28c] */
  esp -= 4; W32(esp, 0x8c4f73u); SPILL(); f_4e3dcd(); if (g_unwind) return; /* Core!??0?$TArray@G@@QAE@XZ */ RELOAD();
/* 8c4f73: xor eax, eax */
  eax = 0;
/* 8c4f75: mov dword ptr [esi + 0x14], eax */
  W32((uint32_t)(esi + 0x14u), eax);
/* 8c4f78: mov dword ptr [esi + 0x18], eax */
  W32((uint32_t)(esi + 0x18u), eax);
/* 8c4f7b: mov dword ptr [esi + 0x1c], eax */
  W32((uint32_t)(esi + 0x1cu), eax);
/* 8c4f7e: mov dword ptr [esi + 0x20], eax */
  W32((uint32_t)(esi + 0x20u), eax);
/* 8c4f81: mov eax, esi */
  eax = esi;
/* 8c4f83: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c4f84: ret  */
  esp += 4; SPILL(); return;
}

void f_8c4fa0(void) {
  LOAD_REGS();
L_8c4fa0: /* 8c4fa0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8c4fa4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8c4fa8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8c4faa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c4fab: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x8c4faeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c4fae: ret  */
  esp += 4; SPILL(); return;
}

void f_8c4fc0(void) {
  LOAD_REGS();
L_8c4fc0: /* 8c4fc0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8c4fc4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8c4fc8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8c4fca: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c4fcb: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x8c4fceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c4fce: ret  */
  esp += 4; SPILL(); return;
}

void f_8c4fe0(void) {
  LOAD_REGS();
L_8c4fe0: /* 8c4fe0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8c4fe4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c4fe5: mov esi, dword ptr [0xcfa280] */
  esi = R32((uint32_t)(0xcfa280u));
/* 8c4feb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c4fec: lea ecx, [eax + 0x10] */
  ecx = (uint32_t)(eax + 0x10u);
/* 8c4fef: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c4ff0: lea edx, [eax + 8] */
  edx = (uint32_t)(eax + 0x8u);
/* 8c4ff3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c4ff4: lea ecx, [eax + 0xc] */
  ecx = (uint32_t)(eax + 0xcu);
/* 8c4ff7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c4ff8: lea edx, [eax + 4] */
  edx = (uint32_t)(eax + 0x4u);
/* 8c4ffb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c4ffc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c4ffd: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* 8c5001: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c5002: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8c5004u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c5004: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c5007: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c5008: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8c500au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c500a: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
/* 8c5010: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c5013: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c5014: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8c5016u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c5016: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c5019: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c501a: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8c501cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c501c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c501f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c5020: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8c5022u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c5022: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c5025: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c5026: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c5027: ret  */
  esp += 4; SPILL(); return;
}

void f_8c5050(void) {
  LOAD_REGS();
L_8c5050: /* 8c5050: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8c5054: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8c5058: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8c505a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c505b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x8c505eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c505e: ret  */
  esp += 4; SPILL(); return;
}

void f_8c5070(void) {
  LOAD_REGS();
L_8c5070: /* 8c5070: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c5071: mov esi, ecx */
  esi = ecx;
/* 8c5073: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8c5079u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8c5079: mov eax, esi */
  eax = esi;
/* 8c507b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c507c: ret  */
  esp += 4; SPILL(); return;
}

void f_8c5090(void) {
  LOAD_REGS();
L_8c5090: /* 8c5090: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c5091: mov esi, ecx */
  esi = ecx;
/* 8c5093: lea ecx, [esi + 0xc] */
  ecx = (uint32_t)(esi + 0xcu);
/* 8c5096: call dword ptr [0xcfa1c8] */
  esp -= 4; W32(esp, 0x8c509cu); SPILL(); f_4e2d56(); if (g_unwind) return; /* Core!??0FRotator@@QAE@XZ */ RELOAD();
/* 8c509c: mov eax, esi */
  eax = esi;
/* 8c509e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c509f: ret  */
  esp += 4; SPILL(); return;
}

void f_8c50b0(void) {
  LOAD_REGS();
L_8c50b0: /* 8c50b0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c50b1: mov esi, ecx */
  esi = ecx;
/* 8c50b3: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8c50b9u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8c50b9: mov eax, esi */
  eax = esi;
/* 8c50bb: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c50bc: ret  */
  esp += 4; SPILL(); return;
}

void f_8c50d0(void) {
  LOAD_REGS();
L_8c50d0: /* 8c50d0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8c50d4: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* 8c50d6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c50d7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8c50ddu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8c50dd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c50f0(void) {
  LOAD_REGS();
L_8c50f0: /* 8c50f0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8c50f4: push 0x1c */
  { uint32_t v = 0x1cu; esp -= 4; W32(esp, v); }
/* 8c50f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c50f7: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8c50fdu); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8c50fd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c5110(void) {
  LOAD_REGS();
L_8c5110: /* 8c5110: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c5111: mov ebp, esp */
  ebp = esp;
/* 8c5113: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8c5115: push 0x9d7b50 */
  { uint32_t v = 0x9d7b50u; esp -= 4; W32(esp, v); }
/* 8c511a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8c5120: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c5121: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8c5128: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c512b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c512c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c512d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c512e: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8c5131: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8c5134: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c5135: mov esi, ecx */
  esi = ecx;
/* 8c5137: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8c513e: call 0x6c974b */
  esp -= 4; W32(esp, 0x8c5143u); SPILL(); f_6c974b(); if (g_unwind) return; RELOAD();
/* 8c5143: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8c5145: add esi, 0x54 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8c5148: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c5149: mov ecx, edi */
  ecx = edi;
/* 8c514b: call dword ptr [eax + 0x18] */
  { uint32_t t = R32((uint32_t)(eax + 0x18u)); esp -= 4; W32(esp, 0x8c514eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c514e: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c5151: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c5152: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c5153: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c515a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c515b: mov esp, ebp */
  esp = ebp;
/* 8c515d: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c515e: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8c5161(void) {
  LOAD_REGS();
L_8c5161: /* 8c5161: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c5164: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8c5169: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8c516c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c516d: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8c5170: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c5175u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8c5175(); return;
}

void f_8c5175(void) {
  LOAD_REGS();
L_8c5175: /* 8c5175: push 0xa1be44 */
  { uint32_t v = 0xa1be44u; esp -= 4; W32(esp, v); }
/* 8c517a: push 0xaec9a8 */
  { uint32_t v = 0xaec9a8u; esp -= 4; W32(esp, v); }
/* 8c517f: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8c5185u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8c5185: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c5188: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c518a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c518c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c5191u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8c5191: guest_badaddr(0x8c5191); return;
}

void f_8c51d0(void) {
  LOAD_REGS();
L_8c51d0: /* 8c51d0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c51d1: mov ebp, esp */
  ebp = esp;
/* 8c51d3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8c51d5: push 0x9d7b60 */
  { uint32_t v = 0x9d7b60u; esp -= 4; W32(esp, v); }
/* 8c51da: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8c51e0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c51e1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8c51e8: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c51eb: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8c51ee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c51ef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c51f0: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 8c51f3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c51f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c51f6: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8c51f9: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8c5200: jne 0x8c5222 */
  if (!zf) goto L_8c5222;
L_8c5202: /* 8c5202: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c5204: jge 0x8c520e */
  if ((sf == of)) goto L_8c520e;
L_8c5206: /* 8c5206: mov esi, dword ptr [ecx + 0x340] */
  esi = R32((uint32_t)(ecx + 0x340u));
/* 8c520c: jmp 0x8c521a */
  goto L_8c521a;
L_8c520e: /* 8c520e: mov edx, eax */
  edx = eax;
/* 8c5210: imul edx, edx, 0x78 */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x78u);
  edx = (uint32_t)r;
  }
/* 8c5213: mov esi, dword ptr [edx + ecx + 0x354] */
  esi = R32((uint32_t)(edx + ecx + 0x354u));
L_8c521a: /* 8c521a: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c521c: je 0x8c5337 */
  if (zf) goto L_8c5337;
L_8c5222: /* 8c5222: cmp eax, -2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c5225: je 0x8c5249 */
  if (zf) goto L_8c5249;
L_8c5227: /* 8c5227: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8c522a: imul eax, dword ptr [ebp + 8] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0x8u)));
  eax = (uint32_t)r;
  }
/* 8c522e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8c522f: idiv dword ptr [ecx + 0x128c] */
  { int32_t d = (int32_t)R32((uint32_t)(ecx + 0x128cu)); if (!d) d = (int32_t)guest_divzero(0x8c522f);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8c5235: mov ebx, eax */
  ebx = eax;
/* 8c5237: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 8c523a: imul eax, dword ptr [ebp + 0xc] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xcu)));
  eax = (uint32_t)r;
  }
/* 8c523e: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8c523f: idiv dword ptr [ecx + 0x1290] */
  { int32_t d = (int32_t)R32((uint32_t)(ecx + 0x1290u)); if (!d) d = (int32_t)guest_divzero(0x8c523f);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8c5245: mov edi, eax */
  edi = eax;
/* 8c5247: jmp 0x8c524f */
  goto L_8c524f;
L_8c5249: /* 8c5249: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8c524c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_8c524f: /* 8c524f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c5251: jl 0x8c5337 */
  if ((sf != of)) goto L_8c5337;
L_8c5257: /* 8c5257: cmp ebx, dword ptr [esi + 0x40] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x40u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c525a: jge 0x8c5337 */
  if ((sf == of)) goto L_8c5337;
L_8c5260: /* 8c5260: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c5262: jl 0x8c5337 */
  if ((sf != of)) goto L_8c5337;
L_8c5268: /* 8c5268: cmp edi, dword ptr [esi + 0x44] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x44u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c526b: jge 0x8c5337 */
  if ((sf == of)) goto L_8c5337;
L_8c5271: /* 8c5271: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c5272: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8c5275: call 0x6c2f36 */
  esp -= 4; W32(esp, 0x8c527au); SPILL(); f_6c2f36(); if (g_unwind) return; RELOAD();
/* 8c527a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c527c: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8c527f: call 0x6c68b6 */
  esp -= 4; W32(esp, 0x8c5284u); SPILL(); f_6c68b6(); if (g_unwind) return; RELOAD();
/* 8c5284: xor cl, cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 8c5286: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c5288: je 0x8c52f2 */
  if (zf) goto L_8c52f2;
L_8c528a: /* 8c528a: mov dl, byte ptr [esi + 0x38] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x38u))) & 0xffu);
/* 8c528d: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c528f: je 0x8c52dc */
  if (zf) goto L_8c52dc;
L_8c5291: /* 8c5291: cmp dl, 5 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8c5294: je 0x8c52bb */
  if (zf) goto L_8c52bb;
L_8c5296: /* 8c5296: cmp dl, 9 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x9u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8c5299: jne 0x8c52f2 */
  if (!zf) goto L_8c52f2;
L_8c529b: /* 8c529b: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8c529e: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* 8c52a1: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c52a3: mov cl, byte ptr [ecx + ebx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + ebx))) & 0xffu);
/* 8c52a6: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 8c52a8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c52ab: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c52b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c52b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c52b4: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c52b5: mov esp, ebp */
  esp = ebp;
/* 8c52b7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c52b8: ret 0x10 */
  esp += 20; SPILL(); return;
L_8c52bb: /* 8c52bb: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8c52be: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* 8c52c1: add edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c52c3: mov cl, byte ptr [eax + edx*4 + 3] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + edx*4 + 0x3u))) & 0xffu);
/* 8c52c7: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 8c52c9: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c52cc: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c52d3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c52d4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c52d5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c52d6: mov esp, ebp */
  esp = ebp;
/* 8c52d8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c52d9: ret 0x10 */
  esp += 20; SPILL(); return;
L_8c52dc: /* 8c52dc: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8c52df: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* 8c52e2: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c52e4: movzx edx, byte ptr [ecx + ebx] */
  edx = (uint32_t)(R8((uint32_t)(ecx + ebx)));
/* 8c52e8: mov eax, dword ptr [esi + 0x50] */
  eax = R32((uint32_t)(esi + 0x50u));
/* 8c52eb: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* 8c52ee: mov cl, byte ptr [ecx + edx*4 + 2] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + edx*4 + 0x2u))) & 0xffu);
L_8c52f2: /* 8c52f2: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* 8c52f4: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c52f7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c52fe: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c52ff: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c5300: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c5301: mov esp, ebp */
  esp = ebp;
/* 8c5303: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c5304: ret 0x10 */
  esp += 20; SPILL(); return;
L_8c5337: /* 8c5337: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c533a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c533b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c533c: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 8c533e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c5345: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c5346: mov esp, ebp */
  esp = ebp;
/* 8c5348: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c5349: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8c5307(void) {
  LOAD_REGS();
L_8c5307: /* 8c5307: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c530a: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8c530f: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8c5312: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c5313: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8c5316: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c531bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8c531b(); return;
}

void f_8c531b(void) {
  LOAD_REGS();
L_8c531b: /* 8c531b: push 0xa1be8c */
  { uint32_t v = 0xa1be8cu; esp -= 4; W32(esp, v); }
/* 8c5320: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8c5325: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8c532bu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8c532b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c532e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c5330: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c5332: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c5337u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8c5337: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c533a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c533b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c533c: xor al, al */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* 8c533e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c5345: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c5346: mov esp, ebp */
  esp = ebp;
/* 8c5348: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c5349: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8c53b0(void) {
  LOAD_REGS();
L_8c53b0: /* 8c53b0: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c53b3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c53b4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c53b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c53b6: mov esi, dword ptr [esp + 0x30] */
  esi = R32((uint32_t)(esp + 0x30u));
/* 8c53ba: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8c53bd: imul eax, dword ptr [esp + 0x28] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x28u)));
  eax = (uint32_t)r;
  }
/* 8c53c2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8c53c3: idiv dword ptr [ecx + 0x128c] */
  { int32_t d = (int32_t)R32((uint32_t)(ecx + 0x128cu)); if (!d) d = (int32_t)guest_divzero(0x8c53c3);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8c53c9: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c53ca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c53cb: xor ebp, ebp */
  ebp = 0;
/* 8c53cd: mov edi, eax */
  edi = eax;
/* 8c53cf: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 8c53d2: imul eax, dword ptr [esp + 0x34] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x34u)));
  eax = (uint32_t)r;
  }
/* 8c53d7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8c53d8: idiv dword ptr [ecx + 0x1290] */
  { int32_t d = (int32_t)R32((uint32_t)(ecx + 0x1290u)); if (!d) d = (int32_t)guest_divzero(0x8c53d8);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8c53de: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8c53e2: mov ebx, eax */
  ebx = eax;
/* 8c53e4: call 0x6c2f36 */
  esp -= 4; W32(esp, 0x8c53e9u); SPILL(); f_6c2f36(); if (g_unwind) return; RELOAD();
/* 8c53e9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c53ea: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8c53ee: call 0x6c68b6 */
  esp -= 4; W32(esp, 0x8c53f3u); SPILL(); f_6c68b6(); if (g_unwind) return; RELOAD();
/* 8c53f3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c53f5: je 0x8c541a */
  if (zf) goto L_8c541a;
L_8c53f7: /* 8c53f7: cmp byte ptr [esi + 0x38], 5 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x38u))); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8c53fb: jne 0x8c541a */
  if (!zf) goto L_8c541a;
L_8c53fd: /* 8c53fd: mov ecx, dword ptr [esi + 0x40] */
  ecx = R32((uint32_t)(esi + 0x40u));
/* 8c5400: imul ecx, ebx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(ebx);
  ecx = (uint32_t)r;
  }
/* 8c5403: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c5405: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 8c5408: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 8c540c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c540d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c540e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c540f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8c5411: mov eax, ecx */
  eax = ecx;
/* 8c5413: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c5414: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c5417: ret 0x10 */
  esp += 20; SPILL(); return;
L_8c541a: /* 8c541a: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* 8c541e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c541f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c5420: mov dword ptr [eax], ebp */
  W32((uint32_t)(eax), ebp);
/* 8c5422: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c5423: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c5424: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c5427: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8c5450(void) {
  LOAD_REGS();
L_8c5450: /* 8c5450: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c5453: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c5454: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c5455: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c5456: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 8c545a: mov eax, dword ptr [esi + 0x40] */
  eax = R32((uint32_t)(esi + 0x40u));
/* 8c545d: imul eax, dword ptr [esp + 0x24] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x24u)));
  eax = (uint32_t)r;
  }
/* 8c5462: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8c5463: idiv dword ptr [ecx + 0x128c] */
  { int32_t d = (int32_t)R32((uint32_t)(ecx + 0x128cu)); if (!d) d = (int32_t)guest_divzero(0x8c5463);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8c5469: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c546a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c546b: mov edi, eax */
  edi = eax;
/* 8c546d: mov eax, dword ptr [esi + 0x44] */
  eax = R32((uint32_t)(esi + 0x44u));
/* 8c5470: imul eax, dword ptr [esp + 0x30] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x30u)));
  eax = (uint32_t)r;
  }
/* 8c5475: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8c5476: idiv dword ptr [ecx + 0x1290] */
  { int32_t d = (int32_t)R32((uint32_t)(ecx + 0x1290u)); if (!d) d = (int32_t)guest_divzero(0x8c5476);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8c547c: mov ebx, eax */
  ebx = eax;
/* 8c547e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c547f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c5480: lea eax, [esp + 0x3c] */
  eax = (uint32_t)(esp + 0x3cu);
/* 8c5484: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c5485: call 0x6c16e5 */
  esp -= 4; W32(esp, 0x8c548au); SPILL(); f_6c16e5(); if (g_unwind) return; RELOAD();
/* 8c548a: mov cl, byte ptr [esp + 0x33] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esp + 0x33u))) & 0xffu);
/* 8c548e: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 8c5492: mov byte ptr [ebp + 3], cl */
  W8((uint32_t)(ebp + 0x3u), (ecx & 0xffu));
/* 8c5495: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c5496: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8c549a: call 0x6c2f36 */
  esp -= 4; W32(esp, 0x8c549fu); SPILL(); f_6c2f36(); if (g_unwind) return; RELOAD();
/* 8c549f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c54a1: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8c54a5: call 0x6c68b6 */
  esp -= 4; W32(esp, 0x8c54aau); SPILL(); f_6c68b6(); if (g_unwind) return; RELOAD();
/* 8c54aa: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c54ac: je 0x8c54c2 */
  if (zf) goto L_8c54c2;
L_8c54ae: /* 8c54ae: cmp byte ptr [esi + 0x38], 5 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x38u))); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8c54b2: jne 0x8c54c2 */
  if (!zf) goto L_8c54c2;
L_8c54b4: /* 8c54b4: mov edx, dword ptr [esi + 0x40] */
  edx = R32((uint32_t)(esi + 0x40u));
/* 8c54b7: mov ecx, dword ptr [ebp] */
  ecx = R32((uint32_t)(ebp));
/* 8c54ba: imul edx, ebx */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(ebx);
  edx = (uint32_t)r;
  }
/* 8c54bd: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c54bf: mov dword ptr [eax + edx*4], ecx */
  W32((uint32_t)(eax + edx*4), ecx);
L_8c54c2: /* 8c54c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c54c3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c54c4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c54c5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c54c6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c54c9: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8c54f0(void) {
  LOAD_REGS();
L_8c54f0: /* 8c54f0: mov eax, dword ptr [ecx + 0x340] */
  eax = R32((uint32_t)(ecx + 0x340u));
/* 8c54f6: mov cl, byte ptr [eax + 0x38] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x38u))) & 0xffu);
/* 8c54f9: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c54fb: je 0x8c5524 */
  if (zf) goto L_8c5524;
L_8c54fd: /* 8c54fd: cmp cl, 0xa */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8c5500: je 0x8c5508 */
  if (zf) goto L_8c5508;
L_8c5502: /* 8c5502: xor ax, ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(0) & 0xffffu);
/* 8c5505: ret 8 */
  esp += 12; SPILL(); return;
L_8c5508: /* 8c5508: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 8c550b: imul ecx, dword ptr [esp + 8] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x8u)));
  ecx = (uint32_t)r;
  }
/* 8c5510: add ecx, dword ptr [esp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c5514: mov edx, dword ptr [eax + 0xac] */
  edx = R32((uint32_t)(eax + 0xacu));
/* 8c551a: mov eax, dword ptr [edx + 0x1c] */
  eax = R32((uint32_t)(edx + 0x1cu));
/* 8c551d: mov ax, word ptr [eax + ecx*2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + ecx*2))) & 0xffffu);
/* 8c5521: ret 8 */
  esp += 12; SPILL(); return;
L_8c5524: /* 8c5524: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 8c5527: imul ecx, dword ptr [esp + 8] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x8u)));
  ecx = (uint32_t)r;
  }
/* 8c552c: mov edx, dword ptr [eax + 0xac] */
  edx = R32((uint32_t)(eax + 0xacu));
/* 8c5532: add ecx, dword ptr [edx + 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x1cu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c5535: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8c5539: movzx eax, byte ptr [ecx + eax] */
  eax = (uint32_t)(R8((uint32_t)(ecx + eax)));
/* 8c553d: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8c5540: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8c5570(void) {
  LOAD_REGS();
L_8c5570: /* 8c5570: mov eax, dword ptr [ecx + 0x340] */
  eax = R32((uint32_t)(ecx + 0x340u));
/* 8c5576: cmp byte ptr [eax + 0x38], 0xa */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0x38u))); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8c557a: jne 0x8c559a */
  if (!zf) goto L_8c559a;
L_8c557c: /* 8c557c: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 8c557f: imul ecx, dword ptr [esp + 8] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(esp + 0x8u)));
  ecx = (uint32_t)r;
  }
/* 8c5584: add ecx, dword ptr [esp + 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x4u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c5588: mov edx, dword ptr [eax + 0xac] */
  edx = R32((uint32_t)(eax + 0xacu));
/* 8c558e: mov eax, dword ptr [edx + 0x1c] */
  eax = R32((uint32_t)(edx + 0x1cu));
/* 8c5591: mov dx, word ptr [esp + 0xc] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esp + 0xcu))) & 0xffffu);
/* 8c5596: mov word ptr [eax + ecx*2], dx */
  W16((uint32_t)(eax + ecx*2), (edx & 0xffffu));
L_8c559a: /* 8c559a: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8c55b0(void) {
  LOAD_REGS();
L_8c55b0: /* 8c55b0: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c55b3: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 8c55b7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c55b8: mov ebx, dword ptr [esp + 0x40] */
  ebx = R32((uint32_t)(esp + 0x40u));
/* 8c55bc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c55bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c55be: mov esi, dword ptr [ecx + 0x128c] */
  esi = R32((uint32_t)(ecx + 0x128cu));
/* 8c55c4: mov eax, esi */
  eax = esi;
/* 8c55c6: imul eax, ebx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(ebx);
  eax = (uint32_t)r;
  }
/* 8c55c9: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c55cb: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c55cd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c55ce: mov edi, dword ptr [ecx + 0x12a0] */
  edi = R32((uint32_t)(ecx + 0x12a0u));
/* 8c55d4: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8c55d7: lea eax, [edi + eax*8] */
  eax = (uint32_t)(edi + eax*8);
/* 8c55da: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 8c55dd: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8c55df: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 8c55e3: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 8c55e7: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 8c55ea: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8c55ed: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 8c55f1: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 8c55f4: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8c55f7: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8c55fb: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* 8c55ff: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 8c5603: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8c5607: mov ebp, dword ptr [esp + 0x24] */
  ebp = R32((uint32_t)(esp + 0x24u));
/* 8c560b: mov dword ptr [esp + 0x18], ebp */
  W32((uint32_t)(esp + 0x18u), ebp);
/* 8c560f: jle 0x8c5649 */
  if ((zf || sf != of)) goto L_8c5649;
L_8c5611: /* 8c5611: fld dword ptr [eax - 0xc] */
  { double v = F32((uint32_t)(eax + 0xfffffff4u)); FPUSH(v); }
/* 8c5614: fadd dword ptr [eax - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffe8u)));
/* 8c5617: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 8c561a: fadd dword ptr [eax - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffecu)));
/* 8c561d: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 8c5620: fadd dword ptr [eax - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff0u)));
/* 8c5623: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 8c5627: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8c5629: fadd dword ptr [esp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x1cu)));
/* 8c562d: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8c5631: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8c5635: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8c5637: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8c563b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8c563d: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8c5641: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 8c5645: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_8c5649: /* 8c5649: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c564b: jle 0x8c56c6 */
  if ((zf || sf != of)) goto L_8c56c6;
L_8c564d: /* 8c564d: lea eax, [ebx - 1] */
  eax = (uint32_t)(ebx + 0xffffffffu);
/* 8c5650: imul eax, esi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(esi);
  eax = (uint32_t)r;
  }
/* 8c5653: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c5655: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c5657: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8c565a: lea eax, [edi + eax*8] */
  eax = (uint32_t)(edi + eax*8);
/* 8c565d: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 8c5660: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8c5662: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* 8c5665: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8c5668: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* 8c566b: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8c566e: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 8c5672: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8c5674: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 8c5678: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8c567c: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 8c5680: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8c5684: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 8c5688: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 8c568c: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 8c5690: jle 0x8c56c6 */
  if ((zf || sf != of)) goto L_8c56c6;
L_8c5692: /* 8c5692: fld dword ptr [eax - 0x18] */
  { double v = F32((uint32_t)(eax + 0xffffffe8u)); FPUSH(v); }
/* 8c5695: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* 8c5698: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* 8c569b: fadd dword ptr [eax - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffecu)));
/* 8c569e: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* 8c56a1: fadd dword ptr [eax - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff0u)));
/* 8c56a4: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 8c56a8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8c56aa: fadd dword ptr [esp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x10u)));
/* 8c56ae: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8c56b2: fadd dword ptr [esp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x14u)));
/* 8c56b6: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8c56ba: fld dword ptr [esp + 0x30] */
  { double v = F32((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* 8c56be: fadd dword ptr [esp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x18u)));
/* 8c56c2: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
L_8c56c6: /* 8c56c6: test byte ptr [ecx + 0x1260], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx + 0x1260u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c56cd: je 0x8c56fe */
  if (zf) goto L_8c56fe;
L_8c56cf: /* 8c56cf: lea ecx, [esp + 0x28] */
  ecx = (uint32_t)(esp + 0x28u);
/* 8c56d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c56d4: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8c56d8: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8c56deu); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8c56de: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8c56e0: fchs  */
  ST0 = -ST0;
/* 8c56e2: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 8c56e6: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8c56e9: fchs  */
  ST0 = -ST0;
/* 8c56eb: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 8c56ef: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8c56f2: lea eax, [esp + 0x1c] */
  eax = (uint32_t)(esp + 0x1cu);
/* 8c56f6: fchs  */
  ST0 = -ST0;
/* 8c56f8: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8c56fc: jmp 0x8c570d */
  goto L_8c570d;
L_8c56fe: /* 8c56fe: lea edx, [esp + 0x34] */
  edx = (uint32_t)(esp + 0x34u);
/* 8c5702: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c5703: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8c5707: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8c570du); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
L_8c570d: /* 8c570d: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 8c570f: mov ecx, dword ptr [esp + 0x44] */
  ecx = R32((uint32_t)(esp + 0x44u));
/* 8c5713: mov edx, ecx */
  edx = ecx;
/* 8c5715: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 8c5717: mov esi, dword ptr [eax + 4] */
  esi = R32((uint32_t)(eax + 0x4u));
/* 8c571a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c571b: mov dword ptr [edx + 4], esi */
  W32((uint32_t)(edx + 0x4u), esi);
/* 8c571e: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8c5721: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c5722: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c5723: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8c5726: mov eax, ecx */
  eax = ecx;
/* 8c5728: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c5729: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c572c: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8c5790(void) {
  LOAD_REGS();
L_8c5790: /* 8c5790: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c5791: mov ebp, esp */
  ebp = esp;
/* 8c5793: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8c5795: push 0x9d7b70 */
  { uint32_t v = 0x9d7b70u; esp -= 4; W32(esp, v); }
/* 8c579a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8c57a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c57a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8c57a8: sub esp, 0x150 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x150u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c57ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c57af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c57b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c57b1: mov edi, ecx */
  edi = ecx;
/* 8c57b3: xor ecx, ecx */
  ecx = 0;
/* 8c57b5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8c57b8: mov dword ptr [ebp - 0x4c], edi */
  W32((uint32_t)(ebp + 0xffffffb4u), edi);
/* 8c57bb: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
L_8c57be: /* 8c57be: cmp ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 8c57c1: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 8c57c4: jae 0x8c59e6 */
  if (!cf) goto L_8c59e6;
L_8c57ca: /* 8c57ca: mov eax, ecx */
  eax = ecx;
/* 8c57cc: imul eax, eax, 0x78 */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x78u);
  eax = (uint32_t)r;
  }
/* 8c57cf: lea ebx, [eax + edi] */
  ebx = (uint32_t)(eax + edi);
/* 8c57d2: mov eax, dword ptr [ebx + 0x350] */
  eax = R32((uint32_t)(ebx + 0x350u));
/* 8c57d8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c57da: je 0x8c59b0 */
  if (zf) goto L_8c59b0;
L_8c57e0: /* 8c57e0: mov eax, dword ptr [ebx + 0x354] */
  eax = R32((uint32_t)(ebx + 0x354u));
/* 8c57e6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c57e8: je 0x8c59b0 */
  if (zf) goto L_8c59b0;
L_8c57ee: /* 8c57ee: mov cl, byte ptr [eax + 0x38] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x38u))) & 0xffu);
/* 8c57f1: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c57f3: jne 0x8c5818 */
  if (!zf) goto L_8c5818;
L_8c57f5: /* 8c57f5: xor esi, esi */
  esi = 0;
L_8c57f7: /* 8c57f7: cmp esi, 0x100 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c57fd: jge 0x8c5818 */
  if ((sf == of)) goto L_8c5818;
L_8c57ff: /* 8c57ff: mov ecx, dword ptr [ebx + 0x354] */
  ecx = R32((uint32_t)(ebx + 0x354u));
/* 8c5805: mov edx, dword ptr [ecx + 0x50] */
  edx = R32((uint32_t)(ecx + 0x50u));
/* 8c5808: mov eax, dword ptr [edx + 0x28] */
  eax = R32((uint32_t)(edx + 0x28u));
/* 8c580b: mov cl, byte ptr [eax + esi*4 + 2] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + esi*4 + 0x2u))) & 0xffu);
/* 8c580f: lea eax, [eax + esi*4] */
  eax = (uint32_t)(eax + esi*4);
/* 8c5812: mov byte ptr [eax + 3], cl */
  W8((uint32_t)(eax + 0x3u), (ecx & 0xffu));
/* 8c5815: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8c5816: jmp 0x8c57f7 */
  goto L_8c57f7;
L_8c5818: /* 8c5818: fld dword ptr [ebx + 0x36c] */
  { double v = F32((uint32_t)(ebx + 0x36cu)); FPUSH(v); }
/* 8c581e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c5820: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c5825u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c5825: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c5826: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c5828: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 8c582b: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x8c5831u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 8c5831: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 8c5837: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c5838: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 8c583b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c583c: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c583f: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x8c5845u); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 8c5845: lea eax, [ebp - 0xfc] */
  eax = (uint32_t)(ebp + 0xffffff04u);
/* 8c584b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c584c: lea ecx, [edi + 0x12dc] */
  ecx = (uint32_t)(edi + 0x12dcu);
/* 8c5852: call dword ptr [0xcfa2f8] */
  esp -= 4; W32(esp, 0x8c5858u); SPILL(); f_4e1c17(); if (g_unwind) return; /* Core!?Transpose@FCoords@@QBE?AV1@XZ */ RELOAD();
/* 8c5858: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c5859: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8c585c: call dword ptr [0xcfaba4] */
  esp -= 4; W32(esp, 0x8c5862u); SPILL(); f_4e2d33(); if (g_unwind) return; /* Core!??XFCoords@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 8c5862: mov ecx, dword ptr [ebx + 0x358] */
  ecx = R32((uint32_t)(ebx + 0x358u));
/* 8c5868: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c5869: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* 8c586c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c586d: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 8c5870: call dword ptr [0xcfaafc] */
  esp -= 4; W32(esp, 0x8c5876u); SPILL(); f_4e1136(); if (g_unwind) return; /* Core!??_0FVector@@QAE?AV0@M@Z */ RELOAD();
/* 8c5876: mov eax, dword ptr [ebx + 0x35c] */
  eax = R32((uint32_t)(ebx + 0x35cu));
/* 8c587c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c587d: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 8c5883: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c5884: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 8c5887: call dword ptr [0xcfaafc] */
  esp -= 4; W32(esp, 0x8c588du); SPILL(); f_4e1136(); if (g_unwind) return; /* Core!??_0FVector@@QAE?AV0@M@Z */ RELOAD();
/* 8c588d: fld dword ptr [ebx + 0x364] */
  { double v = F32((uint32_t)(ebx + 0x364u)); FPUSH(v); }
/* 8c5893: fmul dword ptr [ebx + 0x35c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x35cu)));
/* 8c5899: add edi, 0x12ac */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x12acu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8c589f: fld dword ptr [ebx + 0x360] */
  { double v = F32((uint32_t)(ebx + 0x360u)); FPUSH(v); }
/* 8c58a5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c58a6: fmul dword ptr [ebx + 0x358] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x358u)));
/* 8c58ac: lea edx, [ebp - 0x74] */
  edx = (uint32_t)(ebp + 0xffffff8cu);
/* 8c58af: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c58b0: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8c58b3: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 8c58b6: mov dword ptr [ebp - 0x50], 0 */
  W32((uint32_t)(ebp + 0xffffffb0u), 0x0u);
/* 8c58bd: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 8c58c0: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x8c58c6u); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8c58c6: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8c58c9: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8c58cb: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8c58ce: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8c58d1: fadd dword ptr [eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x4u)));
/* 8c58d4: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8c58d7: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8c58da: fadd dword ptr [eax + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x8u)));
/* 8c58dd: movzx eax, byte ptr [ebx + 0x368] */
  eax = (uint32_t)(R8((uint32_t)(ebx + 0x368u)));
/* 8c58e4: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 8c58e5: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8c58e8: je 0x8c590d */
  if (zf) goto L_8c590d;
L_8c58ea: /* 8c58ea: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* 8c58eb: jne 0x8c5945 */
  if (!zf) goto L_8c5945;
L_8c58ed: /* 8c58ed: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8c58f0: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8c58f3: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8c58f6: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8c58f9: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8c58fc: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8c58ff: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8c5902: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 8c5905: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8c5908: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8c590b: jmp 0x8c593f */
  goto L_8c593f;
L_8c590d: /* 8c590d: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8c5910: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8c5913: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8c5916: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8c5919: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8c591c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8c591e: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8c5921: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 8c5924: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8c5927: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8c592a: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8c592d: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8c5930: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8c5933: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8c5936: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8c5939: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8c593c: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_8c593f: /* 8c593f: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8c5942: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
L_8c5945: /* 8c5945: lea ecx, [ebx + 0x370] */
  ecx = (uint32_t)(ebx + 0x370u);
/* 8c594b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c594c: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 8c5952: lea edx, [ebp - 0x15c] */
  edx = (uint32_t)(ebp + 0xfffffea4u);
/* 8c5958: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c5959: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c595c: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x8c5962u); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 8c5962: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c5963: lea eax, [ebp - 0x12c] */
  eax = (uint32_t)(ebp + 0xfffffed4u);
/* 8c5969: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c596a: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8c596d: call dword ptr [0xcfa564] */
  esp -= 4; W32(esp, 0x8c5973u); SPILL(); f_4e1721(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 8c5973: mov esi, eax */
  esi = eax;
/* 8c5975: mov ecx, 0xc */
  ecx = 0xcu;
/* 8c597a: lea edi, [ebp - 0x40] */
  edi = (uint32_t)(ebp + 0xffffffc0u);
/* 8c597d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c597f: lea ecx, [ebp - 0xcc] */
  ecx = (uint32_t)(ebp + 0xffffff34u);
/* 8c5985: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c5986: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8c5989: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x8c598fu); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 8c598f: mov esi, eax */
  esi = eax;
/* 8c5991: lea edi, [ebx + 0x37c] */
  edi = (uint32_t)(ebx + 0x37cu);
/* 8c5997: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8c599c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8c599e: lea ecx, [ebp - 0xcc] */
  ecx = (uint32_t)(ebp + 0xffffff34u);
/* 8c59a4: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8c59aau); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8c59aa: mov edi, dword ptr [ebp - 0x4c] */
  edi = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8c59ad: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
L_8c59b0: /* 8c59b0: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8c59b1: jmp 0x8c57be */
  goto L_8c57be;
L_8c59e6: /* 8c59e6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c59e9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c59ea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c59eb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c59f2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c59f3: mov esp, ebp */
  esp = ebp;
/* 8c59f5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c59f6: ret  */
  esp += 4; SPILL(); return;
}

void f_8c59b6(void) {
  LOAD_REGS();
L_8c59b6: /* 8c59b6: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8c59b9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8c59be: lea eax, [ebp - 0x48] */
  eax = (uint32_t)(ebp + 0xffffffb8u);
/* 8c59c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c59c2: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 8c59c5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c59cau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8c59ca(); return;
}

void f_8c59ca(void) {
  LOAD_REGS();
L_8c59ca: /* 8c59ca: push 0xa1bed0 */
  { uint32_t v = 0xa1bed0u; esp -= 4; W32(esp, v); }
/* 8c59cf: push 0xaecb70 */
  { uint32_t v = 0xaecb70u; esp -= 4; W32(esp, v); }
/* 8c59d4: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8c59dau); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8c59da: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c59dd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c59df: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8c59e1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8c59e6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8c59e6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c59e9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c59ea: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c59eb: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c59f2: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c59f3: mov esp, ebp */
  esp = ebp;
/* 8c59f5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c59f6: ret  */
  esp += 4; SPILL(); return;
}

void f_8c5aa0(void) {
  LOAD_REGS();
L_8c5aa0: /* 8c5aa0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c5aa3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c5aa4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c5aa5: mov esi, ecx */
  esi = ecx;
/* 8c5aa7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c5aa8: lea eax, [esi + 0x12dc] */
  eax = (uint32_t)(esi + 0x12dcu);
/* 8c5aae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c5aaf: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 8c5ab3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c5ab4: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* 8c5ab8: call dword ptr [0xcfa364] */
  esp -= 4; W32(esp, 0x8c5abeu); SPILL(); f_4e1af5(); if (g_unwind) return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8c5abe: mov edx, dword ptr [esp + 0xc] */
  edx = R32((uint32_t)(esp + 0xcu));
/* 8c5ac2: mov ebx, dword ptr [0xcfa5d8] */
  ebx = R32((uint32_t)(0xcfa5d8u));
/* 8c5ac8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c5ac9: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8c5acbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c5acb: mov edi, eax */
  edi = eax;
/* 8c5acd: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* 8c5ad1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c5ad2: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8c5ad4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8c5ad4: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* 8c5ad8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c5adb: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c5add: je 0x8c5ae1 */
  if (zf) goto L_8c5ae1;
L_8c5adf: /* 8c5adf: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
L_8c5ae1: /* 8c5ae1: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* 8c5ae5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c5ae7: je 0x8c5aeb */
  if (zf) goto L_8c5aeb;
L_8c5ae9: /* 8c5ae9: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_8c5aeb: /* 8c5aeb: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c5aed: jl 0x8c5b3c */
  if ((sf != of)) goto L_8c5b3c;
L_8c5aef: /* 8c5aef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c5af1: jl 0x8c5b3c */
  if ((sf != of)) goto L_8c5b3c;
L_8c5af3: /* 8c5af3: mov ecx, dword ptr [esi + 0x128c] */
  ecx = R32((uint32_t)(esi + 0x128cu));
/* 8c5af9: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c5afb: jge 0x8c5b3c */
  if ((sf == of)) goto L_8c5b3c;
L_8c5afd: /* 8c5afd: cmp eax, dword ptr [esi + 0x1290] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x1290u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c5b03: jge 0x8c5b3c */
  if ((sf == of)) goto L_8c5b3c;
L_8c5b05: /* 8c5b05: mov edx, dword ptr [esp + 0x20] */
  edx = R32((uint32_t)(esp + 0x20u));
/* 8c5b09: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c5b0b: je 0x8c5b2e */
  if (zf) goto L_8c5b2e;
L_8c5b0d: /* 8c5b0d: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* 8c5b10: mov eax, dword ptr [esi + 0x1280] */
  eax = R32((uint32_t)(esi + 0x1280u));
/* 8c5b16: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c5b18: lea ecx, [ecx + ecx*2] */
  ecx = (uint32_t)(ecx + ecx*2);
/* 8c5b1b: lea ecx, [eax + ecx*4] */
  ecx = (uint32_t)(eax + ecx*4);
/* 8c5b1e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8c5b20: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8c5b22: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8c5b25: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8c5b28: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8c5b2b: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
L_8c5b2e: /* 8c5b2e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c5b2f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c5b30: mov eax, 1 */
  eax = 0x1u;
/* 8c5b35: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c5b36: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c5b39: ret 0x10 */
  esp += 20; SPILL(); return;
L_8c5b3c: /* 8c5b3c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c5b3d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c5b3e: xor eax, eax */
  eax = 0;
/* 8c5b40: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c5b41: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c5b44: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8c5b80(void) {
  LOAD_REGS();
L_8c5b80: /* 8c5b80: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8c5b81: mov ebp, esp */
  ebp = esp;
/* 8c5b83: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8c5b85: push 0x9d7b80 */
  { uint32_t v = 0x9d7b80u; esp -= 4; W32(esp, v); }
/* 8c5b8a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8c5b90: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c5b91: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8c5b98: sub esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c5b9b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8c5b9c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8c5b9d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8c5b9e: xor esi, esi */
  esi = 0;
/* 8c5ba0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8c5ba3: mov ebx, ecx */
  ebx = ecx;
/* 8c5ba5: mov dword ptr [ebp - 4], esi */
  W32((uint32_t)(ebp + 0xfffffffcu), esi);
/* 8c5ba8: jmp 0x8c5bb0 */
  goto L_8c5bb0;
L_8c5bb0: /* 8c5bb0: cmp esi, dword ptr [ebx + 0x1310] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c5bb6: jge 0x8c5c3c */
  if ((sf == of)) goto L_8c5c3c;
L_8c5bbc: /* 8c5bbc: mov ecx, dword ptr [ebx + 0x130c] */
  ecx = R32((uint32_t)(ebx + 0x130cu));
/* 8c5bc2: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 8c5bc5: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8c5bc8: mov dword ptr [eax + ecx + 0x10], 0 */
  W32((uint32_t)(eax + ecx + 0x10u), 0x0u);
/* 8c5bd0: mov edx, dword ptr [ebx + 0x130c] */
  edx = R32((uint32_t)(ebx + 0x130cu));
/* 8c5bd6: lea edi, [eax + edx] */
  edi = (uint32_t)(eax + edx);
/* 8c5bd9: mov eax, dword ptr [ebx + 0x340] */
  eax = R32((uint32_t)(ebx + 0x340u));
/* 8c5bdf: mov cl, byte ptr [eax + 0x38] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x38u))) & 0xffu);
/* 8c5be2: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c5be4: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 8c5be7: je 0x8c5c17 */
  if (zf) goto L_8c5c17;
L_8c5be9: /* 8c5be9: cmp cl, 0xa */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8c5bec: je 0x8c5bf9 */
  if (zf) goto L_8c5bf9;
L_8c5bee: /* 8c5bee: xor eax, eax */
  eax = 0;
/* 8c5bf0: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 8c5bf3: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 8c5bf6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8c5bf7: jmp 0x8c5bb0 */
  goto L_8c5bb0;
L_8c5bf9: /* 8c5bf9: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 8c5bfc: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 8c5bff: add ecx, dword ptr [edi] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c5c01: mov edx, dword ptr [eax + 0xac] */
  edx = R32((uint32_t)(eax + 0xacu));
/* 8c5c07: mov eax, dword ptr [edx + 0x1c] */
  eax = R32((uint32_t)(edx + 0x1cu));
/* 8c5c0a: mov ax, word ptr [eax + ecx*2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + ecx*2))) & 0xffffu);
/* 8c5c0e: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 8c5c11: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 8c5c14: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8c5c15: jmp 0x8c5bb0 */
  goto L_8c5bb0;
L_8c5c17: /* 8c5c17: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 8c5c1a: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 8c5c1d: mov edx, dword ptr [eax + 0xac] */
  edx = R32((uint32_t)(eax + 0xacu));
/* 8c5c23: add ecx, dword ptr [edx + 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x1cu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c5c26: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8c5c28: movzx ax, byte ptr [ecx + eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(ecx + eax)))) & 0xffffu);
/* 8c5c2d: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8c5c30: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 8c5c33: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 8c5c36: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8c5c37: jmp 0x8c5bb0 */
  goto L_8c5bb0;
L_8c5c3c: /* 8c5c3c: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 8c5c3f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c5c40: lea ecx, [ebx + 0x17c] */
  ecx = (uint32_t)(ebx + 0x17cu);
/* 8c5c46: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x8c5c4cu); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 8c5c4c: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8c5c4f: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8c5c52: lea edx, [ebx + 0x12dc] */
  edx = (uint32_t)(ebx + 0x12dcu);
/* 8c5c58: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8c5c5b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c5c5c: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8c5c5f: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 8c5c62: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8c5c65: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8c5c67: lea eax, [ebp - 0x70] */
  eax = (uint32_t)(ebp + 0xffffff90u);
/* 8c5c6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c5c6b: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 8c5c6e: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 8c5c71: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8c5c74: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x8c5c7au); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8c5c7a: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8c5c7d: call dword ptr [0xcfa8a0] */
  esp -= 4; W32(esp, 0x8c5c83u); SPILL(); f_4e23dd(); if (g_unwind) return; /* Core!?Size2D@FVector@@QBEMXZ */ RELOAD();
/* 8c5c83: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 8c5c86: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 8c5c8c: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c5c91u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c5c91: mov ecx, dword ptr [ebx + 0x1310] */
  ecx = R32((uint32_t)(ebx + 0x1310u));
/* 8c5c97: mov edi, eax */
  edi = eax;
/* 8c5c99: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 8c5c9c: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 8c5c9f: xor edx, edx */
  edx = 0;
L_8c5ca1: /* 8c5ca1: cmp edx, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c5ca4: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8c5ca7: jge 0x8c6087 */
  if ((sf == of)) goto L_8c6087;
L_8c5cad: /* 8c5cad: lea ecx, [edx + edx*4] */
  ecx = (uint32_t)(edx + edx*4);
/* 8c5cb0: mov edx, dword ptr [ebx + 0x130c] */
  edx = R32((uint32_t)(ebx + 0x130cu));
/* 8c5cb6: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8c5cb9: mov eax, dword ptr [ecx + edx] */
  eax = R32((uint32_t)(ecx + edx));
/* 8c5cbc: lea esi, [ebx + 0x130c] */
  esi = (uint32_t)(ebx + 0x130cu);
/* 8c5cc2: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8c5cc5: mov eax, dword ptr [ebx + 0x128c] */
  eax = R32((uint32_t)(ebx + 0x128cu));
/* 8c5ccb: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8c5cce: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c5cd0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8c5cd3: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 8c5cd6: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8c5cd9: add eax, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c5cdc: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8c5cdf: mov eax, dword ptr [ebx + 0x1280] */
  eax = R32((uint32_t)(ebx + 0x1280u));
/* 8c5ce5: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* 8c5ce8: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8c5cea: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 8c5ced: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8c5cf0: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8c5cf3: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 8c5cf6: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c5cf9: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 8c5cfc: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c5cfe: xor edx, edx */
  edx = 0;
/* 8c5d00: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c5d02: setle dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* 8c5d05: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 8c5d0c: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8c5d0d: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8c5d0f: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
L_8c5d12: /* 8c5d12: mov eax, dword ptr [ebx + 0x1290] */
  eax = R32((uint32_t)(ebx + 0x1290u));
/* 8c5d18: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 8c5d1b: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8c5d1e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8c5d1f: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c5d21: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c5d23: jg 0x8c5d27 */
  if ((!zf && sf == of)) goto L_8c5d27;
L_8c5d25: /* 8c5d25: mov eax, ecx */
  eax = ecx;
L_8c5d27: /* 8c5d27: cmp dword ptr [ebp - 0x18], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c5d2a: jg 0x8c5de4 */
  if ((!zf && sf == of)) goto L_8c5de4;
L_8c5d30: /* 8c5d30: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8c5d33: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c5d35: xor ecx, ecx */
  ecx = 0;
/* 8c5d37: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c5d39: setle cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* 8c5d3c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8c5d3d: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8c5d3f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
L_8c5d42: /* 8c5d42: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8c5d44: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8c5d47: mov eax, dword ptr [ebx + 0x128c] */
  eax = R32((uint32_t)(ebx + 0x128cu));
/* 8c5d4d: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c5d4f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8c5d51: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8c5d53: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8c5d56: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
/* 8c5d59: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c5d5b: jg 0x8c5d5f */
  if ((!zf && sf == of)) goto L_8c5d5f;
L_8c5d5d: /* 8c5d5d: mov edx, edi */
  edx = edi;
L_8c5d5f: /* 8c5d5f: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8c5d62: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c5d64: jg 0x8c5dd5 */
  if ((!zf && sf == of)) goto L_8c5dd5;
L_8c5d66: /* 8c5d66: imul eax, dword ptr [ebp - 0x18] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  eax = (uint32_t)r;
  }
/* 8c5d6a: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8c5d6d: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c5d6f: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8c5d72: mov eax, dword ptr [ebx + 0x1280] */
  eax = R32((uint32_t)(ebx + 0x1280u));
/* 8c5d78: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 8c5d7b: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8c5d7e: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 8c5d81: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 8c5d84: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8c5d87: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 8c5d8a: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8c5d8c: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 8c5d8f: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 8c5d92: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8c5d95: call dword ptr [0xcfa8a0] */
  esp -= 4; W32(esp, 0x8c5d9bu); SPILL(); f_4e23dd(); if (g_unwind) return; /* Core!?Size2D@FVector@@QBEMXZ */ RELOAD();
/* 8c5d9b: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8c5d9e: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8c5da1: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 8c5da4: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8c5da7: fcomp dword ptr [ebp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xcu)));
  FPOP();
/* 8c5daa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c5dac: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c5daf: jp 0x8c5dc9 */
  if (pf) goto L_8c5dc9;
L_8c5db1: /* 8c5db1: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8c5db4: fcomp dword ptr [ebp - 0x28] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd8u)));
  FPOP();
/* 8c5db7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c5db9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c5dbc: jp 0x8c5dc9 */
  if (pf) goto L_8c5dc9;
L_8c5dbe: /* 8c5dbe: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8c5dc1: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c5dc6u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c5dc6: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
L_8c5dc9: /* 8c5dc9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8c5dca: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8c5dcd: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8c5dd0: jmp 0x8c5d42 */
  goto L_8c5d42;
L_8c5dd5: /* 8c5dd5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c5dd8: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8c5ddb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c5ddc: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8c5ddf: jmp 0x8c5d12 */
  goto L_8c5d12;
L_8c5de4: /* 8c5de4: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8c5de7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8c5de9: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c5deb: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8c5dee: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 8c5df1: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c5df3: xor ecx, ecx */
  ecx = 0;
/* 8c5df5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c5df7: setle cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* 8c5dfa: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8c5dfb: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8c5dfd: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
L_8c5e00: /* 8c5e00: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8c5e03: mov eax, dword ptr [ebx + 0x1290] */
  eax = R32((uint32_t)(ebx + 0x1290u));
/* 8c5e09: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 8c5e0c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8c5e0d: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c5e0f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c5e11: jg 0x8c5e15 */
  if ((!zf && sf == of)) goto L_8c5e15;
L_8c5e13: /* 8c5e13: mov eax, ecx */
  eax = ecx;
L_8c5e15: /* 8c5e15: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c5e18: jg 0x8c6051 */
  if ((!zf && sf == of)) goto L_8c6051;
L_8c5e1e: /* 8c5e1e: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8c5e21: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8c5e23: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c5e25: xor ecx, ecx */
  ecx = 0;
/* 8c5e27: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c5e29: setle cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* 8c5e2c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8c5e2d: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8c5e2f: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
L_8c5e32: /* 8c5e32: mov eax, dword ptr [ebx + 0x128c] */
  eax = R32((uint32_t)(ebx + 0x128cu));
/* 8c5e38: lea edi, [edx + edx*4] */
  edi = (uint32_t)(edx + edx*4);
/* 8c5e3b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8c5e3d: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8c5e40: lea ecx, [edi + edx] */
  ecx = (uint32_t)(edi + edx);
/* 8c5e43: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8c5e46: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8c5e49: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8c5e4b: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c5e4d: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
/* 8c5e50: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c5e52: jg 0x8c5e56 */
  if ((!zf && sf == of)) goto L_8c5e56;
L_8c5e54: /* 8c5e54: mov edx, ecx */
  edx = ecx;
L_8c5e56: /* 8c5e56: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c5e59: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c5e5b: jg 0x8c603f */
  if ((!zf && sf == of)) goto L_8c603f;
L_8c5e61: /* 8c5e61: imul eax, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  eax = (uint32_t)r;
  }
/* 8c5e65: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8c5e68: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c5e6a: mov ecx, dword ptr [ebx + 0x1280] */
  ecx = R32((uint32_t)(ebx + 0x1280u));
/* 8c5e70: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8c5e73: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8c5e76: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 8c5e79: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 8c5e7c: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 8c5e7f: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8c5e82: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 8c5e85: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8c5e87: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 8c5e8a: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 8c5e8d: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 8c5e90: call dword ptr [0xcfa8a0] */
  esp -= 4; W32(esp, 0x8c5e96u); SPILL(); f_4e23dd(); if (g_unwind) return; /* Core!?Size2D@FVector@@QBEMXZ */ RELOAD();
/* 8c5e96: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 8c5e99: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8c5e9c: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 8c5e9e: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8c5ea1: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8c5ea4: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 8c5ea7: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c5eacu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c5eac: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8c5eaf: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8c5eb2: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8c5eb5: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8c5eb8: fcomp dword ptr [ebp - 0x20] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe0u)));
  FPOP();
/* 8c5ebb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c5ebd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c5ec0: je 0x8c602e */
  if (zf) goto L_8c602e;
L_8c5ec6: /* 8c5ec6: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 8c5ec9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c5ecb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c5ece: jne 0x8c5f02 */
  if (!zf) goto L_8c5f02;
L_8c5ed0: /* 8c5ed0: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8c5ed3: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c5ed6: fdiv dword ptr [ebp - 0x20] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8c5ed9: fmul qword ptr [0xa178a8] */
  ST0 = ST0 * (F64((uint32_t)(0xa178a8u)));
/* 8c5edf: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8c5ee2: call dword ptr [0xcfa89c] */
  esp -= 4; W32(esp, 0x8c5ee8u); SPILL(); f_4e1807(); if (g_unwind) return; /* Core!?appCos@@YANN@Z */ RELOAD();
/* 8c5ee8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8c5eea: fst qword ptr [ebp - 0x34] */
  WF64((uint32_t)(ebp + 0xffffffccu), ST0);
/* 8c5eed: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 8c5ef3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c5ef6: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 8c5efc: fmul dword ptr [edi + edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + edx + 0xcu)));
/* 8c5f00: jmp 0x8c5f08 */
  goto L_8c5f08;
L_8c5f02: /* 8c5f02: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_8c5f08: /* 8c5f08: mov eax, dword ptr [0xb18ffc] */
  eax = R32((uint32_t)(0xb18ffcu));
/* 8c5f0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c5f0f: je 0x8c5f1e */
  if (zf) goto L_8c5f1e;
L_8c5f11: /* 8c5f11: mov eax, dword ptr [0xb19048] */
  eax = R32((uint32_t)(0xb19048u));
/* 8c5f16: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* 8c5f19: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8c5f1c: jmp 0x8c5f27 */
  goto L_8c5f27;
L_8c5f1e: /* 8c5f1e: mov edx, dword ptr [0xb1907c] */
  edx = R32((uint32_t)(0xb1907cu));
/* 8c5f24: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
L_8c5f27: /* 8c5f27: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8c5f2a: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 8c5f30: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8c5f32: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8c5f35: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8c5f37: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8c5f3a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8c5f40: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c5f42: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c5f45: jne 0x8c6030 */
  if (!zf) goto L_8c6030;
L_8c5f4b: /* 8c5f4b: xor edi, edi */
  edi = 0;
/* 8c5f4d: xor edx, edx */
  edx = 0;
/* 8c5f4f: nop  */
L_8c5f50: /* 8c5f50: cmp edx, dword ptr [ebx + 0x1310] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c5f56: jge 0x8c5f8a */
  if ((sf == of)) goto L_8c5f8a;
L_8c5f58: /* 8c5f58: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8c5f5a: lea eax, [edx + edx*4] */
  eax = (uint32_t)(edx + edx*4);
/* 8c5f5d: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8c5f60: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c5f63: cmp dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c5f65: jne 0x8c5f87 */
  if (!zf) goto L_8c5f87;
L_8c5f67: /* 8c5f67: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8c5f6a: cmp dword ptr [ecx + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c5f6d: jne 0x8c5f87 */
  if (!zf) goto L_8c5f87;
L_8c5f6f: /* 8c5f6f: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 8c5f72: mov edi, 1 */
  edi = 0x1u;
/* 8c5f77: fcomp dword ptr [ebp - 0x20] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe0u)));
  FPOP();
/* 8c5f7a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c5f7c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c5f7f: jp 0x8c5f87 */
  if (pf) goto L_8c5f87;
L_8c5f81: /* 8c5f81: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8c5f84: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
L_8c5f87: /* 8c5f87: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8c5f88: jmp 0x8c5f50 */
  goto L_8c5f50;
L_8c5f8a: /* 8c5f8a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c5f8c: jne 0x8c6030 */
  if (!zf) goto L_8c6030;
L_8c5f92: /* 8c5f92: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8c5f94: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8c5f96: mov ecx, esi */
  ecx = esi;
/* 8c5f98: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8c5f9eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8c5f9e: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8c5fa1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8c5fa3: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c5fa6: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8c5fa9: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8c5fac: mov dword ptr [eax + ecx], edx */
  W32((uint32_t)(eax + ecx), edx);
/* 8c5faf: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8c5fb1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8c5fb4: mov dword ptr [eax + ecx + 4], edx */
  W32((uint32_t)(eax + ecx + 0x4u), edx);
/* 8c5fb8: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8c5fba: fstp dword ptr [eax + ecx + 0xc] */
  WF32((uint32_t)(eax + ecx + 0xcu), ST0); FPOP();
/* 8c5fbe: mov ecx, dword ptr [ebx + 0x340] */
  ecx = R32((uint32_t)(ebx + 0x340u));
/* 8c5fc4: mov dl, byte ptr [ecx + 0x38] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x38u))) & 0xffu);
/* 8c5fc7: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c5fc9: je 0x8c5fef */
  if (zf) goto L_8c5fef;
L_8c5fcb: /* 8c5fcb: cmp dl, 0xa */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8c5fce: je 0x8c5fd4 */
  if (zf) goto L_8c5fd4;
L_8c5fd0: /* 8c5fd0: xor ecx, ecx */
  ecx = 0;
/* 8c5fd2: jmp 0x8c600c */
  goto L_8c600c;
L_8c5fd4: /* 8c5fd4: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 8c5fd7: imul edx, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  edx = (uint32_t)r;
  }
/* 8c5fdb: mov ecx, dword ptr [ecx + 0xac] */
  ecx = R32((uint32_t)(ecx + 0xacu));
/* 8c5fe1: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c5fe4: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* 8c5fe7: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c5fe9: mov cx, word ptr [ecx + edx*2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + edx*2))) & 0xffffu);
/* 8c5fed: jmp 0x8c600c */
  goto L_8c600c;
L_8c5fef: /* 8c5fef: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 8c5ff2: imul edx, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  edx = (uint32_t)r;
  }
/* 8c5ff6: mov ecx, dword ptr [ecx + 0xac] */
  ecx = R32((uint32_t)(ecx + 0xacu));
/* 8c5ffc: mov edi, dword ptr [ecx + 0x1c] */
  edi = R32((uint32_t)(ecx + 0x1cu));
/* 8c5fff: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c6002: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c6004: movzx cx, byte ptr [edx + ecx] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(edx + ecx)))) & 0xffffu);
/* 8c6009: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
L_8c600c: /* 8c600c: movzx edx, cx */
  edx = (uint32_t)((ecx & 0xffffu));
/* 8c600f: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8c6011: mov dword ptr [eax + ecx + 8], edx */
  W32((uint32_t)(eax + ecx + 0x8u), edx);
/* 8c6015: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8c6017: mov dword ptr [eax + edx + 0x10], 0 */
  W32((uint32_t)(eax + edx + 0x10u), 0x0u);
/* 8c601f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c6022: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8c6025: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c6026: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8c6029: jmp 0x8c5e32 */
  goto L_8c5e32;
L_8c602e: /* 8c602e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8c6030: /* 8c6030: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c6033: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8c6036: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c6037: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8c603a: jmp 0x8c5e32 */
  goto L_8c5e32;
L_8c603f: /* 8c603f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8c6042: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8c6045: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8c6048: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c6049: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8c604c: jmp 0x8c5e00 */
  goto L_8c5e00;
L_8c6051: /* 8c6051: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8c6052: jmp 0x8c5ca1 */
  goto L_8c5ca1;
L_8c6087: /* 8c6087: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c608a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c608b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c608c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c6093: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c6094: mov esp, ebp */
  esp = ebp;
/* 8c6096: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c6097: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8c5baa(void) {
  LOAD_REGS();
L_8c5baa: /* 8c5baa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8c5bb0: /* 8c5bb0: cmp esi, dword ptr [ebx + 0x1310] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c5bb6: jge 0x8c5c3c */
  if ((sf == of)) goto L_8c5c3c;
L_8c5bbc: /* 8c5bbc: mov ecx, dword ptr [ebx + 0x130c] */
  ecx = R32((uint32_t)(ebx + 0x130cu));
/* 8c5bc2: lea eax, [esi + esi*4] */
  eax = (uint32_t)(esi + esi*4);
/* 8c5bc5: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8c5bc8: mov dword ptr [eax + ecx + 0x10], 0 */
  W32((uint32_t)(eax + ecx + 0x10u), 0x0u);
/* 8c5bd0: mov edx, dword ptr [ebx + 0x130c] */
  edx = R32((uint32_t)(ebx + 0x130cu));
/* 8c5bd6: lea edi, [eax + edx] */
  edi = (uint32_t)(eax + edx);
/* 8c5bd9: mov eax, dword ptr [ebx + 0x340] */
  eax = R32((uint32_t)(ebx + 0x340u));
/* 8c5bdf: mov cl, byte ptr [eax + 0x38] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax + 0x38u))) & 0xffu);
/* 8c5be2: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c5be4: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 8c5be7: je 0x8c5c17 */
  if (zf) goto L_8c5c17;
L_8c5be9: /* 8c5be9: cmp cl, 0xa */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8c5bec: je 0x8c5bf9 */
  if (zf) goto L_8c5bf9;
L_8c5bee: /* 8c5bee: xor eax, eax */
  eax = 0;
/* 8c5bf0: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 8c5bf3: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 8c5bf6: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8c5bf7: jmp 0x8c5bb0 */
  goto L_8c5bb0;
L_8c5bf9: /* 8c5bf9: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 8c5bfc: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 8c5bff: add ecx, dword ptr [edi] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c5c01: mov edx, dword ptr [eax + 0xac] */
  edx = R32((uint32_t)(eax + 0xacu));
/* 8c5c07: mov eax, dword ptr [edx + 0x1c] */
  eax = R32((uint32_t)(edx + 0x1cu));
/* 8c5c0a: mov ax, word ptr [eax + ecx*2] */
  eax = (eax & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(eax + ecx*2))) & 0xffffu);
/* 8c5c0e: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 8c5c11: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 8c5c14: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8c5c15: jmp 0x8c5bb0 */
  goto L_8c5bb0;
L_8c5c17: /* 8c5c17: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* 8c5c1a: imul ecx, edx */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edx);
  ecx = (uint32_t)r;
  }
/* 8c5c1d: mov edx, dword ptr [eax + 0xac] */
  edx = R32((uint32_t)(eax + 0xacu));
/* 8c5c23: add ecx, dword ptr [edx + 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(edx + 0x1cu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c5c26: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8c5c28: movzx ax, byte ptr [ecx + eax] */
  eax = (eax & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(ecx + eax)))) & 0xffffu);
/* 8c5c2d: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8c5c30: movzx eax, ax */
  eax = (uint32_t)((eax & 0xffffu));
/* 8c5c33: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 8c5c36: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8c5c37: jmp 0x8c5bb0 */
  goto L_8c5bb0;
L_8c5c3c: /* 8c5c3c: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 8c5c3f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8c5c40: lea ecx, [ebx + 0x17c] */
  ecx = (uint32_t)(ebx + 0x17cu);
/* 8c5c46: call dword ptr [0xcfa7dc] */
  esp -= 4; W32(esp, 0x8c5c4cu); SPILL(); f_4e30a8(); if (g_unwind) return; /* Core!?Vector@FRotator@@QAE?AVFVector@@XZ */ RELOAD();
/* 8c5c4c: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8c5c4f: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8c5c52: lea edx, [ebx + 0x12dc] */
  edx = (uint32_t)(ebx + 0x12dcu);
/* 8c5c58: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8c5c5b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8c5c5c: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8c5c5f: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 8c5c62: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* 8c5c65: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8c5c67: lea eax, [ebp - 0x70] */
  eax = (uint32_t)(ebp + 0xffffff90u);
/* 8c5c6a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8c5c6b: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 8c5c6e: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 8c5c71: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8c5c74: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x8c5c7au); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8c5c7a: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8c5c7d: call dword ptr [0xcfa8a0] */
  esp -= 4; W32(esp, 0x8c5c83u); SPILL(); f_4e23dd(); if (g_unwind) return; /* Core!?Size2D@FVector@@QBEMXZ */ RELOAD();
/* 8c5c83: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 8c5c86: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 8c5c8c: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c5c91u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c5c91: mov ecx, dword ptr [ebx + 0x1310] */
  ecx = R32((uint32_t)(ebx + 0x1310u));
/* 8c5c97: mov edi, eax */
  edi = eax;
/* 8c5c99: mov dword ptr [ebp - 0x24], edi */
  W32((uint32_t)(ebp + 0xffffffdcu), edi);
/* 8c5c9c: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 8c5c9f: xor edx, edx */
  edx = 0;
L_8c5ca1: /* 8c5ca1: cmp edx, dword ptr [ebp - 0x38] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c5ca4: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8c5ca7: jge 0x8c6087 */
  if ((sf == of)) goto L_8c6087;
L_8c5cad: /* 8c5cad: lea ecx, [edx + edx*4] */
  ecx = (uint32_t)(edx + edx*4);
/* 8c5cb0: mov edx, dword ptr [ebx + 0x130c] */
  edx = R32((uint32_t)(ebx + 0x130cu));
/* 8c5cb6: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8c5cb9: mov eax, dword ptr [ecx + edx] */
  eax = R32((uint32_t)(ecx + edx));
/* 8c5cbc: lea esi, [ebx + 0x130c] */
  esi = (uint32_t)(ebx + 0x130cu);
/* 8c5cc2: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8c5cc5: mov eax, dword ptr [ebx + 0x128c] */
  eax = R32((uint32_t)(ebx + 0x128cu));
/* 8c5ccb: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8c5cce: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c5cd0: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8c5cd3: imul eax, edx */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edx);
  eax = (uint32_t)r;
  }
/* 8c5cd6: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8c5cd9: add eax, dword ptr [ebp - 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c5cdc: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8c5cdf: mov eax, dword ptr [ebx + 0x1280] */
  eax = R32((uint32_t)(ebx + 0x1280u));
/* 8c5ce5: lea edx, [eax + edx*4] */
  edx = (uint32_t)(eax + edx*4);
/* 8c5ce8: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8c5cea: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
/* 8c5ced: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 8c5cf0: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8c5cf3: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 8c5cf6: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c5cf9: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 8c5cfc: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c5cfe: xor edx, edx */
  edx = 0;
/* 8c5d00: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c5d02: setle dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* 8c5d05: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 8c5d0c: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  edx = r;
  }
/* 8c5d0d: and edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* 8c5d0f: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
L_8c5d12: /* 8c5d12: mov eax, dword ptr [ebx + 0x1290] */
  eax = R32((uint32_t)(ebx + 0x1290u));
/* 8c5d18: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 8c5d1b: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8c5d1e: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8c5d1f: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c5d21: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c5d23: jg 0x8c5d27 */
  if ((!zf && sf == of)) goto L_8c5d27;
L_8c5d25: /* 8c5d25: mov eax, ecx */
  eax = ecx;
L_8c5d27: /* 8c5d27: cmp dword ptr [ebp - 0x18], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c5d2a: jg 0x8c5de4 */
  if ((!zf && sf == of)) goto L_8c5de4;
L_8c5d30: /* 8c5d30: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8c5d33: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c5d35: xor ecx, ecx */
  ecx = 0;
/* 8c5d37: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c5d39: setle cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* 8c5d3c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8c5d3d: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8c5d3f: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
L_8c5d42: /* 8c5d42: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8c5d44: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8c5d47: mov eax, dword ptr [ebx + 0x128c] */
  eax = R32((uint32_t)(ebx + 0x128cu));
/* 8c5d4d: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c5d4f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8c5d51: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8c5d53: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8c5d56: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
/* 8c5d59: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c5d5b: jg 0x8c5d5f */
  if ((!zf && sf == of)) goto L_8c5d5f;
L_8c5d5d: /* 8c5d5d: mov edx, edi */
  edx = edi;
L_8c5d5f: /* 8c5d5f: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8c5d62: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c5d64: jg 0x8c5dd5 */
  if ((!zf && sf == of)) goto L_8c5dd5;
L_8c5d66: /* 8c5d66: imul eax, dword ptr [ebp - 0x18] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  eax = (uint32_t)r;
  }
/* 8c5d6a: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8c5d6d: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c5d6f: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8c5d72: mov eax, dword ptr [ebx + 0x1280] */
  eax = R32((uint32_t)(ebx + 0x1280u));
/* 8c5d78: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 8c5d7b: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 8c5d7e: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 8c5d81: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 8c5d84: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8c5d87: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 8c5d8a: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8c5d8c: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 8c5d8f: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 8c5d92: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8c5d95: call dword ptr [0xcfa8a0] */
  esp -= 4; W32(esp, 0x8c5d9bu); SPILL(); f_4e23dd(); if (g_unwind) return; /* Core!?Size2D@FVector@@QBEMXZ */ RELOAD();
/* 8c5d9b: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8c5d9e: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8c5da1: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 8c5da4: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8c5da7: fcomp dword ptr [ebp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xcu)));
  FPOP();
/* 8c5daa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c5dac: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c5daf: jp 0x8c5dc9 */
  if (pf) goto L_8c5dc9;
L_8c5db1: /* 8c5db1: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8c5db4: fcomp dword ptr [ebp - 0x28] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffd8u)));
  FPOP();
/* 8c5db7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c5db9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c5dbc: jp 0x8c5dc9 */
  if (pf) goto L_8c5dc9;
L_8c5dbe: /* 8c5dbe: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8c5dc1: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c5dc6u); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c5dc6: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
L_8c5dc9: /* 8c5dc9: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8c5dca: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8c5dcd: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8c5dd0: jmp 0x8c5d42 */
  goto L_8c5d42;
L_8c5dd5: /* 8c5dd5: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c5dd8: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8c5ddb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c5ddc: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8c5ddf: jmp 0x8c5d12 */
  goto L_8c5d12;
L_8c5de4: /* 8c5de4: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8c5de7: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8c5de9: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c5deb: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8c5dee: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 8c5df1: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c5df3: xor ecx, ecx */
  ecx = 0;
/* 8c5df5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c5df7: setle cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* 8c5dfa: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8c5dfb: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8c5dfd: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
L_8c5e00: /* 8c5e00: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8c5e03: mov eax, dword ptr [ebx + 0x1290] */
  eax = R32((uint32_t)(ebx + 0x1290u));
/* 8c5e09: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
/* 8c5e0c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8c5e0d: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c5e0f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c5e11: jg 0x8c5e15 */
  if ((!zf && sf == of)) goto L_8c5e15;
L_8c5e13: /* 8c5e13: mov eax, ecx */
  eax = ecx;
L_8c5e15: /* 8c5e15: cmp dword ptr [ebp - 0x14], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c5e18: jg 0x8c6051 */
  if ((!zf && sf == of)) goto L_8c6051;
L_8c5e1e: /* 8c5e1e: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8c5e21: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8c5e23: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 8c5e25: xor ecx, ecx */
  ecx = 0;
/* 8c5e27: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8c5e29: setle cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* 8c5e2c: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* 8c5e2d: and ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8c5e2f: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
L_8c5e32: /* 8c5e32: mov eax, dword ptr [ebx + 0x128c] */
  eax = R32((uint32_t)(ebx + 0x128cu));
/* 8c5e38: lea edi, [edx + edx*4] */
  edi = (uint32_t)(edx + edx*4);
/* 8c5e3b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8c5e3d: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* 8c5e40: lea ecx, [edi + edx] */
  ecx = (uint32_t)(edi + edx);
/* 8c5e43: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8c5e46: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8c5e49: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8c5e4b: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8c5e4d: lea edx, [eax - 1] */
  edx = (uint32_t)(eax + 0xffffffffu);
/* 8c5e50: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c5e52: jg 0x8c5e56 */
  if ((!zf && sf == of)) goto L_8c5e56;
L_8c5e54: /* 8c5e54: mov edx, ecx */
  edx = ecx;
L_8c5e56: /* 8c5e56: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c5e59: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c5e5b: jg 0x8c603f */
  if ((!zf && sf == of)) goto L_8c603f;
L_8c5e61: /* 8c5e61: imul eax, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  eax = (uint32_t)r;
  }
/* 8c5e65: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8c5e68: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8c5e6a: mov ecx, dword ptr [ebx + 0x1280] */
  ecx = R32((uint32_t)(ebx + 0x1280u));
/* 8c5e70: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8c5e73: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8c5e76: lea ecx, [ebp - 0x64] */
  ecx = (uint32_t)(ebp + 0xffffff9cu);
/* 8c5e79: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 8c5e7c: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 8c5e7f: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8c5e82: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 8c5e85: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8c5e87: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 8c5e8a: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 8c5e8d: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 8c5e90: call dword ptr [0xcfa8a0] */
  esp -= 4; W32(esp, 0x8c5e96u); SPILL(); f_4e23dd(); if (g_unwind) return; /* Core!?Size2D@FVector@@QBEMXZ */ RELOAD();
/* 8c5e96: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 8c5e99: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8c5e9c: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* 8c5e9e: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8c5ea1: fild dword ptr [ebp - 0x2c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8c5ea4: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 8c5ea7: call 0x99c958 */
  esp -= 4; W32(esp, 0x8c5eacu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8c5eac: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8c5eaf: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8c5eb2: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8c5eb5: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8c5eb8: fcomp dword ptr [ebp - 0x20] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe0u)));
  FPOP();
/* 8c5ebb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c5ebd: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c5ec0: je 0x8c602e */
  if (zf) goto L_8c602e;
L_8c5ec6: /* 8c5ec6: fcomp dword ptr [ebp + 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x8u)));
  FPOP();
/* 8c5ec9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c5ecb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c5ece: jne 0x8c5f02 */
  if (!zf) goto L_8c5f02;
L_8c5ed0: /* 8c5ed0: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8c5ed3: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8c5ed6: fdiv dword ptr [ebp - 0x20] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8c5ed9: fmul qword ptr [0xa178a8] */
  ST0 = ST0 * (F64((uint32_t)(0xa178a8u)));
/* 8c5edf: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8c5ee2: call dword ptr [0xcfa89c] */
  esp -= 4; W32(esp, 0x8c5ee8u); SPILL(); f_4e1807(); if (g_unwind) return; /* Core!?appCos@@YANN@Z */ RELOAD();
/* 8c5ee8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8c5eea: fst qword ptr [ebp - 0x34] */
  WF64((uint32_t)(ebp + 0xffffffccu), ST0);
/* 8c5eed: fmul qword ptr [0xa07e30] */
  ST0 = ST0 * (F64((uint32_t)(0xa07e30u)));
/* 8c5ef3: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8c5ef6: fadd qword ptr [0xa07e30] */
  ST0 = ST0 + (F64((uint32_t)(0xa07e30u)));
/* 8c5efc: fmul dword ptr [edi + edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edi + edx + 0xcu)));
/* 8c5f00: jmp 0x8c5f08 */
  goto L_8c5f08;
L_8c5f02: /* 8c5f02: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_8c5f08: /* 8c5f08: mov eax, dword ptr [0xb18ffc] */
  eax = R32((uint32_t)(0xb18ffcu));
/* 8c5f0d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c5f0f: je 0x8c5f1e */
  if (zf) goto L_8c5f1e;
L_8c5f11: /* 8c5f11: mov eax, dword ptr [0xb19048] */
  eax = R32((uint32_t)(0xb19048u));
/* 8c5f16: mov ecx, dword ptr [eax + 0x5c] */
  ecx = R32((uint32_t)(eax + 0x5cu));
/* 8c5f19: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8c5f1c: jmp 0x8c5f27 */
  goto L_8c5f27;
L_8c5f1e: /* 8c5f1e: mov edx, dword ptr [0xb1907c] */
  edx = R32((uint32_t)(0xb1907cu));
/* 8c5f24: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
L_8c5f27: /* 8c5f27: fild dword ptr [ebp - 0x30] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8c5f2a: fmul dword ptr [0x9f7c0c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7c0cu)));
/* 8c5f30: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8c5f32: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8c5f35: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8c5f37: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8c5f3a: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8c5f40: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c5f42: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c5f45: jne 0x8c6030 */
  if (!zf) goto L_8c6030;
L_8c5f4b: /* 8c5f4b: xor edi, edi */
  edi = 0;
/* 8c5f4d: xor edx, edx */
  edx = 0;
/* 8c5f4f: nop  */
L_8c5f50: /* 8c5f50: cmp edx, dword ptr [ebx + 0x1310] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x1310u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8c5f56: jge 0x8c5f8a */
  if ((sf == of)) goto L_8c5f8a;
L_8c5f58: /* 8c5f58: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8c5f5a: lea eax, [edx + edx*4] */
  eax = (uint32_t)(edx + edx*4);
/* 8c5f5d: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8c5f60: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c5f63: cmp dword ptr [ecx], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c5f65: jne 0x8c5f87 */
  if (!zf) goto L_8c5f87;
L_8c5f67: /* 8c5f67: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8c5f6a: cmp dword ptr [ecx + 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8c5f6d: jne 0x8c5f87 */
  if (!zf) goto L_8c5f87;
L_8c5f6f: /* 8c5f6f: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 8c5f72: mov edi, 1 */
  edi = 0x1u;
/* 8c5f77: fcomp dword ptr [ebp - 0x20] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe0u)));
  FPOP();
/* 8c5f7a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8c5f7c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8c5f7f: jp 0x8c5f87 */
  if (pf) goto L_8c5f87;
L_8c5f81: /* 8c5f81: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8c5f84: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
L_8c5f87: /* 8c5f87: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8c5f88: jmp 0x8c5f50 */
  goto L_8c5f50;
L_8c5f8a: /* 8c5f8a: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8c5f8c: jne 0x8c6030 */
  if (!zf) goto L_8c6030;
L_8c5f92: /* 8c5f92: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* 8c5f94: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8c5f96: mov ecx, esi */
  ecx = esi;
/* 8c5f98: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8c5f9eu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8c5f9e: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8c5fa1: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8c5fa3: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c5fa6: lea eax, [eax + eax*4] */
  eax = (uint32_t)(eax + eax*4);
/* 8c5fa9: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8c5fac: mov dword ptr [eax + ecx], edx */
  W32((uint32_t)(eax + ecx), edx);
/* 8c5faf: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8c5fb1: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8c5fb4: mov dword ptr [eax + ecx + 4], edx */
  W32((uint32_t)(eax + ecx + 0x4u), edx);
/* 8c5fb8: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8c5fba: fstp dword ptr [eax + ecx + 0xc] */
  WF32((uint32_t)(eax + ecx + 0xcu), ST0); FPOP();
/* 8c5fbe: mov ecx, dword ptr [ebx + 0x340] */
  ecx = R32((uint32_t)(ebx + 0x340u));
/* 8c5fc4: mov dl, byte ptr [ecx + 0x38] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ecx + 0x38u))) & 0xffu);
/* 8c5fc7: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8c5fc9: je 0x8c5fef */
  if (zf) goto L_8c5fef;
L_8c5fcb: /* 8c5fcb: cmp dl, 0xa */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 8c5fce: je 0x8c5fd4 */
  if (zf) goto L_8c5fd4;
L_8c5fd0: /* 8c5fd0: xor ecx, ecx */
  ecx = 0;
/* 8c5fd2: jmp 0x8c600c */
  goto L_8c600c;
L_8c5fd4: /* 8c5fd4: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 8c5fd7: imul edx, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  edx = (uint32_t)r;
  }
/* 8c5fdb: mov ecx, dword ptr [ecx + 0xac] */
  ecx = R32((uint32_t)(ecx + 0xacu));
/* 8c5fe1: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c5fe4: mov ecx, dword ptr [ecx + 0x1c] */
  ecx = R32((uint32_t)(ecx + 0x1cu));
/* 8c5fe7: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c5fe9: mov cx, word ptr [ecx + edx*2] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ecx + edx*2))) & 0xffffu);
/* 8c5fed: jmp 0x8c600c */
  goto L_8c600c;
L_8c5fef: /* 8c5fef: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* 8c5ff2: imul edx, dword ptr [ebp - 0x14] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  edx = (uint32_t)r;
  }
/* 8c5ff6: mov ecx, dword ptr [ecx + 0xac] */
  ecx = R32((uint32_t)(ecx + 0xacu));
/* 8c5ffc: mov edi, dword ptr [ecx + 0x1c] */
  edi = R32((uint32_t)(ecx + 0x1cu));
/* 8c5fff: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c6002: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8c6004: movzx cx, byte ptr [edx + ecx] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)((uint32_t)(R8((uint32_t)(edx + ecx)))) & 0xffffu);
/* 8c6009: shl ecx, 8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
L_8c600c: /* 8c600c: movzx edx, cx */
  edx = (uint32_t)((ecx & 0xffffu));
/* 8c600f: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8c6011: mov dword ptr [eax + ecx + 8], edx */
  W32((uint32_t)(eax + ecx + 0x8u), edx);
/* 8c6015: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8c6017: mov dword ptr [eax + edx + 0x10], 0 */
  W32((uint32_t)(eax + edx + 0x10u), 0x0u);
/* 8c601f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c6022: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8c6025: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c6026: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8c6029: jmp 0x8c5e32 */
  goto L_8c5e32;
L_8c602e: /* 8c602e: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8c6030: /* 8c6030: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8c6033: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8c6036: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c6037: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8c603a: jmp 0x8c5e32 */
  goto L_8c5e32;
L_8c603f: /* 8c603f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8c6042: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8c6045: mov edi, dword ptr [ebp - 0x24] */
  edi = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8c6048: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8c6049: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8c604c: jmp 0x8c5e00 */
  goto L_8c5e00;
L_8c6051: /* 8c6051: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8c6052: jmp 0x8c5ca1 */
  goto L_8c5ca1;
L_8c6087: /* 8c6087: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8c608a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8c608b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8c608c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8c6093: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8c6094: mov esp, ebp */
  esp = ebp;
/* 8c6096: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8c6097: ret 8 */
  esp += 12; SPILL(); return;
}
