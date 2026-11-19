#include "recomp.h"
#include "rec_mod.h"

void f_8e910d(void) {
  LOAD_REGS();
  goto L_8e910d;
L_8e8ff7: /* 8e8ff7: xor ebx, ebx */
  ebx = 0;
/* 8e8ff9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8e9000: /* 8e9000: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 8e9003: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e9004: call 0x6c5961 */
  esp -= 4; W32(esp, 0x8e9009u); SPILL(); f_6c5961(); if (g_unwind) return; RELOAD();
/* 8e9009: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e900b: je 0x8e9307 */
  if (zf) goto L_8e9307;
L_8e9011: /* 8e9011: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8e9014: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e901a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e901c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e901f: jne 0x8e9307 */
  if (!zf) goto L_8e9307;
L_8e9025: /* 8e9025: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8e9028: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8e9029: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e902c: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8e902f: jg 0x8e9307 */
  if ((!zf && sf == of)) goto L_8e9307;
L_8e9035: /* 8e9035: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8e9037: mov ecx, esi */
  ecx = esi;
/* 8e9039: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x8e903fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e903f: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e9041: jne 0x8e9307 */
  if (!zf) goto L_8e9307;
L_8e9047: /* 8e9047: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* 8e904d: mov eax, dword ptr [esi + 0xbc] */
  eax = R32((uint32_t)(esi + 0xbcu));
/* 8e9053: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e9059: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8e905c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e905e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e9061: jne 0x8e92a6 */
  if (!zf) goto L_8e92a6;
L_8e9067: /* 8e9067: fld dword ptr [esi + 0xb8] */
  { double v = F32((uint32_t)(esi + 0xb8u)); FPUSH(v); }
/* 8e906d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e9073: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e9075: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e9078: jne 0x8e9085 */
  if (!zf) goto L_8e9085;
L_8e907a: /* 8e907a: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8e907d: fmul dword ptr [esi + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xb8u)));
/* 8e9083: jmp 0x8e90b9 */
  goto L_8e90b9;
L_8e9085: /* 8e9085: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 8e9088: add ecx, 0x188 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e908e: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x8e9094u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 8e9094: fst dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0);
/* 8e9097: fmul dword ptr [esi + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xb8u)));
/* 8e909d: fchs  */
  ST0 = -ST0;
/* 8e909f: fld dword ptr [0xa0d56c] */
  { double v = F32((uint32_t)(0xa0d56cu)); FPUSH(v); }
/* 8e90a5: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8e90a7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e90a9: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e90ac: jne 0x8e90b6 */
  if (!zf) goto L_8e90b6;
L_8e90ae: /* 8e90ae: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e90b0: fld dword ptr [0xa0d56c] */
  { double v = F32((uint32_t)(0xa0d56cu)); FPUSH(v); }
L_8e90b6: /* 8e90b6: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
L_8e90b9: /* 8e90b9: fadd dword ptr [esi + 0xbc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xbcu)));
/* 8e90bf: mov eax, dword ptr [esi + 0xe0] */
  eax = R32((uint32_t)(esi + 0xe0u));
/* 8e90c5: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e90c7: fstp dword ptr [esi + 0xbc] */
  WF32((uint32_t)(esi + 0xbcu), ST0); FPOP();
/* 8e90cd: je 0x8e91e7 */
  if (zf) goto L_8e91e7;
L_8e90d3: /* 8e90d3: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 8e90d6: cmp dword ptr [ecx + 0xd0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xd0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e90dc: je 0x8e91e7 */
  if (zf) goto L_8e91e7;
L_8e90e2: /* 8e90e2: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 8e90e8: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8e90ea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e90eb: mov ecx, esi */
  ecx = esi;
/* 8e90ed: call dword ptr [edx + 0xb4] */
  { uint32_t t = R32((uint32_t)(edx + 0xb4u)); esp -= 4; W32(esp, 0x8e90f3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e90f3: mov edi, eax */
  edi = eax;
/* 8e90f5: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e90f7: je 0x8e91e7 */
  if (zf) goto L_8e91e7;
L_8e90fd: /* 8e90fd: mov dword ptr [ebp - 0x24], 0x47c35000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x47c35000u);
/* 8e9104: mov dword ptr [ebp - 0x1c], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffffe4u), 0xffffffffu);
/* 8e910b: jmp 0x8e9110 */
  goto L_8e9110;
L_8e910d: /* 8e910d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8e9110: /* 8e9110: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8e9112: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e9113: mov ecx, esi */
  ecx = esi;
/* 8e9115: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x8e911bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e911b: cmp ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e911d: jge 0x8e9177 */
  if ((sf == of)) goto L_8e9177;
L_8e911f: /* 8e911f: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8e9121: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e9122: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e9123: mov ecx, esi */
  ecx = esi;
/* 8e9125: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x8e912bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e912b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8e912e: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8e9131: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8e9134: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8e9137: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 8e913a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e913c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e913f: jp 0x8e9174 */
  if (pf) goto L_8e9174;
L_8e9141: /* 8e9141: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* 8e9147: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 8e914a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e914c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e914f: jne 0x8e9174 */
  if (!zf) goto L_8e9174;
L_8e9151: /* 8e9151: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8e9154: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8e9157: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e915a: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8e915d: je 0x8e9169 */
  if (zf) goto L_8e9169;
L_8e915f: /* 8e915f: fcom dword ptr [ebp - 0x24] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffdcu)));
/* 8e9162: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e9164: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e9167: jp 0x8e9172 */
  if (pf) goto L_8e9172;
L_8e9169: /* 8e9169: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* 8e916c: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8e916f: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8e9170: jmp 0x8e9110 */
  goto L_8e9110;
L_8e9172: /* 8e9172: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8e9174: /* 8e9174: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8e9175: jmp 0x8e9110 */
  goto L_8e9110;
L_8e9177: /* 8e9177: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8e917a: cmp ebx, -1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e917d: jle 0x8e91e5 */
  if ((zf || sf != of)) goto L_8e91e5;
L_8e917f: /* 8e917f: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8e9181: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e9182: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e9183: mov ecx, esi */
  ecx = esi;
/* 8e9185: call dword ptr [edx + 0xd0] */
  { uint32_t t = R32((uint32_t)(edx + 0xd0u)); esp -= 4; W32(esp, 0x8e918bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e918b: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8e918e: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* 8e9194: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8e9196: fsub dword ptr [ebp - 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 8e9199: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e919a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e919b: mov ecx, esi */
  ecx = esi;
/* 8e919d: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8e91a0: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* 8e91a6: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8e91a9: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 8e91ab: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8e91ae: call dword ptr [eax + 0xd0] */
  { uint32_t t = R32((uint32_t)(eax + 0xd0u)); esp -= 4; W32(esp, 0x8e91b4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e91b4: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8e91b7: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8e91b9: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8e91bc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e91bd: mov dword ptr [esi + 0xbc], ecx */
  W32((uint32_t)(esi + 0xbcu), ecx);
/* 8e91c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e91c4: mov ecx, esi */
  ecx = esi;
/* 8e91c6: call dword ptr [edx + 0xd8] */
  { uint32_t t = R32((uint32_t)(edx + 0xd8u)); esp -= 4; W32(esp, 0x8e91ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e91cc: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e91ce: je 0x8e8ff7 */
  if (zf) goto L_8e8ff7;
L_8e91d4: /* 8e91d4: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 8e91d7: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8e91d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e91da: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e91db: mov ecx, eax */
  ecx = eax;
/* 8e91dd: call dword ptr [edx + 0x68] */
  { uint32_t t = R32((uint32_t)(edx + 0x68u)); esp -= 4; W32(esp, 0x8e91e0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e91e0: jmp 0x8e8ff7 */
  goto L_8e8ff7;
L_8e91e5: /* 8e91e5: xor ebx, ebx */
  ebx = 0;
L_8e91e7: /* 8e91e7: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* 8e91ed: fcomp dword ptr [esi + 0xc0] */
  fpu_com(ST0, F32((uint32_t)(esi + 0xc0u)));
  FPOP();
/* 8e91f3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e91f5: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e91f8: jnp 0x8e9307 */
  if (!pf) goto L_8e9307;
L_8e91fe: /* 8e91fe: mov eax, dword ptr [esi + 0xdc] */
  eax = R32((uint32_t)(esi + 0xdcu));
/* 8e9204: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* 8e920a: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e920c: je 0x8e926c */
  if (zf) goto L_8e926c;
L_8e920e: /* 8e920e: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 8e9214: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e9216: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e9219: jp 0x8e9224 */
  if (pf) goto L_8e9224;
L_8e921b: /* 8e921b: mov dword ptr [ebp + 8], 0 */
  W32((uint32_t)(ebp + 0x8u), 0x0u);
/* 8e9222: jmp 0x8e9247 */
  goto L_8e9247;
L_8e9224: /* 8e9224: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* 8e922a: fsub dword ptr [0x9f48a0] */
  ST0 = ST0 - (F32((uint32_t)(0x9f48a0u)));
/* 8e9230: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8e9233: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* 8e9239: mov dword ptr [esi + 0xbc], ebx */
  W32((uint32_t)(esi + 0xbcu), ebx);
/* 8e923f: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8e9242: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 8e9244: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
L_8e9247: /* 8e9247: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8e924a: fcomp dword ptr [esi + 0xc0] */
  fpu_com(ST0, F32((uint32_t)(esi + 0xc0u)));
  FPOP();
/* 8e9250: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e9252: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e9255: jp 0x8e9000 */
  if (pf) goto L_8e9000;
L_8e925b: /* 8e925b: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 8e925e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8e9260: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e9261: call dword ptr [edx + 0xd4] */
  { uint32_t t = R32((uint32_t)(edx + 0xd4u)); esp -= 4; W32(esp, 0x8e9267u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e9267: jmp 0x8e9000 */
  goto L_8e9000;
L_8e926c: /* 8e926c: fsub dword ptr [esi + 0xc0] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xc0u)));
/* 8e9272: mov eax, dword ptr [esi + 0xc0] */
  eax = R32((uint32_t)(esi + 0xc0u));
/* 8e9278: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 8e927b: mov dword ptr [esi + 0xb8], ebx */
  W32((uint32_t)(esi + 0xb8u), ebx);
/* 8e9281: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8e9284: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* 8e928a: mov dword ptr [esi + 0xbc], eax */
  W32((uint32_t)(esi + 0xbcu), eax);
/* 8e9290: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8e9293: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8e9295: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e9296: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 8e9298: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8e929b: call dword ptr [edx + 0xd4] */
  { uint32_t t = R32((uint32_t)(edx + 0xd4u)); esp -= 4; W32(esp, 0x8e92a1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e92a1: jmp 0x8e9000 */
  goto L_8e9000;
L_8e92a6: /* 8e92a6: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8e92a9: fmul dword ptr [esi + 0xc4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xc4u)));
/* 8e92af: fadd dword ptr [esi + 0xbc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xbcu)));
/* 8e92b5: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8e92bb: fst dword ptr [esi + 0xbc] */
  WF32((uint32_t)(esi + 0xbcu), ST0);
/* 8e92c1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e92c3: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e92c6: jne 0x8e9305 */
  if (!zf) goto L_8e9305;
L_8e92c8: /* 8e92c8: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8e92cb: mov dword ptr [esi + 0xbc], ebx */
  W32((uint32_t)(esi + 0xbcu), ebx);
/* 8e92d1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8e92d3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8e92d5: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8e92d8: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* 8e92da: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* 8e92dd: fld dword ptr [esi + 0xb8] */
  { double v = F32((uint32_t)(esi + 0xb8u)); FPUSH(v); }
/* 8e92e3: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e92e9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e92eb: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e92ee: jp 0x8e9000 */
  if (pf) goto L_8e9000;
L_8e92f4: /* 8e92f4: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 8e92f7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8e92f9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e92fa: call dword ptr [eax + 0xd4] */
  { uint32_t t = R32((uint32_t)(eax + 0xd4u)); esp -= 4; W32(esp, 0x8e9300u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e9300: jmp 0x8e9000 */
  goto L_8e9000;
L_8e9305: /* 8e9305: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8e9307: /* 8e9307: mov ecx, dword ptr [esi + 0xdc] */
  ecx = R32((uint32_t)(esi + 0xdcu));
/* 8e930d: mov edx, dword ptr [esi + 0xc0] */
  edx = R32((uint32_t)(esi + 0xc0u));
/* 8e9313: mov eax, dword ptr [esi + 0xc4] */
  eax = R32((uint32_t)(esi + 0xc4u));
/* 8e9319: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e931a: mov ecx, dword ptr [esi + 0xbc] */
  ecx = R32((uint32_t)(esi + 0xbcu));
/* 8e9320: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e9321: mov edx, dword ptr [esi + 0xb8] */
  edx = R32((uint32_t)(esi + 0xb8u));
/* 8e9327: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e9328: mov eax, dword ptr [esi + 0xb4] */
  eax = R32((uint32_t)(esi + 0xb4u));
/* 8e932e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e932f: mov ecx, dword ptr [esi + 0x58] */
  ecx = R32((uint32_t)(esi + 0x58u));
/* 8e9332: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e9333: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e9334: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e9335: call 0x6c21c1 */
  esp -= 4; W32(esp, 0x8e933au); SPILL(); f_6c21c1(); if (g_unwind) return; RELOAD();
/* 8e933a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8e933c: mov ecx, esi */
  ecx = esi;
/* 8e933e: call dword ptr [edx + 0xa0] */
  { uint32_t t = R32((uint32_t)(edx + 0xa0u)); esp -= 4; W32(esp, 0x8e9344u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e9344: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e9346: mov ecx, esi */
  ecx = esi;
/* 8e9348: je 0x8e9353 */
  if (zf) goto L_8e9353;
L_8e934a: /* 8e934a: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8e934c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8e934e: call dword ptr [eax + 0xc] */
  { uint32_t t = R32((uint32_t)(eax + 0xcu)); esp -= 4; W32(esp, 0x8e9351u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e9351: jmp 0x8e935c */
  goto L_8e935c;
L_8e9353: /* 8e9353: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8e9355: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e9356: call dword ptr [edx + 0x9c] */
  { uint32_t t = R32((uint32_t)(edx + 0x9cu)); esp -= 4; W32(esp, 0x8e935cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8e935c: /* 8e935c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e935f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e9360: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e9361: mov eax, 1 */
  eax = 0x1u;
/* 8e9366: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e936d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e936e: mov esp, ebp */
  esp = ebp;
/* 8e9370: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e9371: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e9374(void) {
  LOAD_REGS();
L_8e9374: /* 8e9374: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8e9377: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e937c: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 8e937f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e9380: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8e9383: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e9388u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e9388(); return;
}

void f_8e9388(void) {
  LOAD_REGS();
L_8e9388: /* 8e9388: push 0xa1dffc */
  { uint32_t v = 0xa1dffcu; esp -= 4; W32(esp, v); }
/* 8e938d: push 0xaede68 */
  { uint32_t v = 0xaede68u; esp -= 4; W32(esp, v); }
/* 8e9392: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e9398u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e9398: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e939b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e939d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e939f: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e93a4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e93a4: guest_badaddr(0x8e93a4); return;
}

void f_8e94b0(void) {
  LOAD_REGS();
L_8e94b0: /* 8e94b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e94b1: mov ebp, esp */
  ebp = esp;
/* 8e94b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e94b5: push 0x9d8c60 */
  { uint32_t v = 0x9d8c60u; esp -= 4; W32(esp, v); }
/* 8e94ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e94c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e94c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e94c8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e94cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e94cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e94cd: mov esi, ecx */
  esi = ecx;
/* 8e94cf: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8e94d2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8e94d4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e94d5: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e94d8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e94d9: xor ebx, ebx */
  ebx = 0;
/* 8e94db: mov ecx, esi */
  ecx = esi;
/* 8e94dd: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 8e94e0: call dword ptr [eax + 0xb4] */
  { uint32_t t = R32((uint32_t)(eax + 0xb4u)); esp -= 4; W32(esp, 0x8e94e6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e94e6: mov edi, eax */
  edi = eax;
/* 8e94e8: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e94ea: jne 0x8e952e */
  if (!zf) goto L_8e952e;
L_8e94ec: /* 8e94ec: mov ecx, dword ptr [esi + 0x54] */
  ecx = R32((uint32_t)(esi + 0x54u));
/* 8e94ef: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8e94f5u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8e94f5: lea ecx, [ebp + 0xc] */
  ecx = (uint32_t)(ebp + 0xcu);
/* 8e94f8: mov esi, eax */
  esi = eax;
/* 8e94fa: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x8e9500u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 8e9500: mov edx, dword ptr [0xcfa3b8] */
  edx = R32((uint32_t)(0xcfa3b8u));
/* 8e9506: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e9507: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e9508: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 8e950a: push 0xaede70 */
  { uint32_t v = 0xaede70u; esp -= 4; W32(esp, v); }
/* 8e950f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e9510: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8e9516u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8e9516: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8e9519: /* 8e9519: xor eax, eax */
  eax = 0;
/* 8e951b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e951e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e9525: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e9526: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e9527: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e9528: mov esp, ebp */
  esp = ebp;
/* 8e952a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e952b: ret 0x14 */
  esp += 24; SPILL(); return;
L_8e952e: /* 8e952e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8e9530: mov ecx, esi */
  ecx = esi;
/* 8e9532: call dword ptr [edx + 0x8c] */
  { uint32_t t = R32((uint32_t)(edx + 0x8cu)); esp -= 4; W32(esp, 0x8e9538u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e9538: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e953a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8e953d: je 0x8e9519 */
  if (zf) goto L_8e9519;
L_8e953f: /* 8e953f: cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e9542: jne 0x8e9715 */
  if (!zf) goto L_8e9715;
L_8e9548: /* 8e9548: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8e954b: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e9551: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e9553: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e9556: jne 0x8e994e */
  if (!zf) goto L_8e994e;
L_8e955c: /* 8e955c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e955d: lea ecx, [ebp + 0x18] */
  ecx = (uint32_t)(ebp + 0x18u);
/* 8e9560: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8e9566u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8e9566: lea eax, [ebp + 0x18] */
  eax = (uint32_t)(ebp + 0x18u);
/* 8e9569: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 8e956f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e9570: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x8e9576u); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 8e9576: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e9578: je 0x8e9581 */
  if (zf) goto L_8e9581;
L_8e957a: /* 8e957a: mov dword ptr [ebp + 0x14], 0 */
  W32((uint32_t)(ebp + 0x14u), 0x0u);
L_8e9581: /* 8e9581: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8e9583: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e9584: mov ecx, esi */
  ecx = esi;
/* 8e9586: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x8e958cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e958c: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 8e958f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8e9592: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8e9595: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8e9597: mov dword ptr [esi + 0xb4], ecx */
  W32((uint32_t)(esi + 0xb4u), ecx);
/* 8e959d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e959e: mov ecx, esi */
  ecx = esi;
/* 8e95a0: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8e95a3: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x8e95a9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e95a9: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8e95ac: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8e95b2: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8e95b4: fdiv dword ptr [ebp - 0x14] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8e95b7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e95b8: mov ecx, esi */
  ecx = esi;
/* 8e95ba: fst dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0);
/* 8e95bd: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8e95c0: fst dword ptr [esi + 0xcc] */
  WF32((uint32_t)(esi + 0xccu), ST0);
/* 8e95c6: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 8e95c9: fstp dword ptr [esi + 0xb8] */
  WF32((uint32_t)(esi + 0xb8u), ST0); FPOP();
/* 8e95cf: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8e95d5: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 8e95d8: fstp dword ptr [esi + 0xc0] */
  WF32((uint32_t)(esi + 0xc0u), ST0); FPOP();
/* 8e95de: call dword ptr [eax + 0xcc] */
  { uint32_t t = R32((uint32_t)(eax + 0xccu)); esp -= 4; W32(esp, 0x8e95e4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e95e4: fld dword ptr [esi + 0xc0] */
  { double v = F32((uint32_t)(esi + 0xc0u)); FPUSH(v); }
/* 8e95ea: xor ecx, ecx */
  ecx = 0;
/* 8e95ec: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e95f2: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e95f4: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8e95f7: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8e95fa: mov dword ptr [esi + 0xd8], ebx */
  W32((uint32_t)(esi + 0xd8u), ebx);
/* 8e9600: mov dword ptr [esi + 0xdc], ebx */
  W32((uint32_t)(esi + 0xdcu), ebx);
/* 8e9606: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e9608: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e960e: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e9611: mov dword ptr [esi + 0xe0], ecx */
  W32((uint32_t)(esi + 0xe0u), ecx);
/* 8e9617: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e9619: jp 0x8e9655 */
  if (pf) goto L_8e9655;
L_8e961b: /* 8e961b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e961e: mov dword ptr [esi + 0xe0], ebx */
  W32((uint32_t)(esi + 0xe0u), ebx);
/* 8e9624: mov dword ptr [esi + 0xc8], ebx */
  W32((uint32_t)(esi + 0xc8u), ebx);
/* 8e962a: jne 0x8e9643 */
  if (!zf) goto L_8e9643;
L_8e962c: /* 8e962c: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8e9632: fdiv dword ptr [ebp + 0x14] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x14u)));
/* 8e9635: fstp dword ptr [esi + 0xc4] */
  WF32((uint32_t)(esi + 0xc4u), ST0); FPOP();
/* 8e963b: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 8e963e: jmp 0x8e9842 */
  goto L_8e9842;
L_8e9643: /* 8e9643: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 8e9646: mov dword ptr [esi + 0xc4], 0x41200000 */
  W32((uint32_t)(esi + 0xc4u), 0x41200000u);
/* 8e9650: jmp 0x8e9842 */
  goto L_8e9842;
L_8e9655: /* 8e9655: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e9658: jne 0x8e967d */
  if (!zf) goto L_8e967d;
L_8e965a: /* 8e965a: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8e965d: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 8e9660: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 8e9666: fstp dword ptr [esi + 0xc4] */
  WF32((uint32_t)(esi + 0xc4u), ST0); FPOP();
/* 8e966c: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 8e966f: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e9675: fstp dword ptr [esi + 0xbc] */
  WF32((uint32_t)(esi + 0xbcu), ST0); FPOP();
/* 8e967b: jmp 0x8e96f1 */
  goto L_8e96f1;
L_8e967d: /* 8e967d: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8e9680: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 8e9686: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e9688: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e968b: jp 0x8e96e1 */
  if (pf) goto L_8e96e1;
L_8e968d: /* 8e968d: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 8e9690: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e9696: fstp dword ptr [esi + 0xbc] */
  WF32((uint32_t)(esi + 0xbcu), ST0); FPOP();
/* 8e969c: fld dword ptr [esi + 0xc8] */
  { double v = F32((uint32_t)(esi + 0xc8u)); FPUSH(v); }
/* 8e96a2: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e96a8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e96aa: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e96ad: je 0x8e98ba */
  if (zf) goto L_8e98ba;
L_8e96b3: /* 8e96b3: fld dword ptr [esi + 0xc8] */
  { double v = F32((uint32_t)(esi + 0xc8u)); FPUSH(v); }
/* 8e96b9: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e96bf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e96c1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e96c4: jp 0x8e9925 */
  if (pf) goto L_8e9925;
L_8e96ca: /* 8e96ca: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e96cd: add ecx, 0x188 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e96d3: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x8e96d9u); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 8e96d9: fst dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0);
/* 8e96dc: jmp 0x8e98f0 */
  goto L_8e98f0;
L_8e96e1: /* 8e96e1: mov dword ptr [esi + 0xbc], 0x3a83126f */
  W32((uint32_t)(esi + 0xbcu), 0x3a83126fu);
L_8e96eb: /* 8e96eb: mov dword ptr [esi + 0xc4], ebx */
  W32((uint32_t)(esi + 0xc4u), ebx);
L_8e96f1: /* 8e96f1: mov eax, dword ptr [esi + 0xb8] */
  eax = R32((uint32_t)(esi + 0xb8u));
/* 8e96f7: mov dword ptr [esi + 0xc8], eax */
  W32((uint32_t)(esi + 0xc8u), eax);
L_8e96fd: /* 8e96fd: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e9700: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e9701: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e9702: mov eax, 1 */
  eax = 0x1u;
/* 8e9707: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e970e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e970f: mov esp, ebp */
  esp = ebp;
/* 8e9711: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e9712: ret 0x14 */
  esp += 24; SPILL(); return;
L_8e9715: /* 8e9715: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8e9717: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e9718: mov ecx, esi */
  ecx = esi;
/* 8e971a: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x8e9720u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e9720: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 8e9723: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8e9726: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8e9728: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e9729: mov ecx, esi */
  ecx = esi;
/* 8e972b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8e972e: call dword ptr [edx + 0xc8] */
  { uint32_t t = R32((uint32_t)(edx + 0xc8u)); esp -= 4; W32(esp, 0x8e9734u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e9734: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* 8e9737: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8e973a: lea edx, [ebp + 0xc] */
  edx = (uint32_t)(ebp + 0xcu);
/* 8e973d: lea ecx, [esi + 0xb4] */
  ecx = (uint32_t)(esi + 0xb4u);
/* 8e9743: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e9744: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8e9747: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x8e974du); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 8e974d: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e974f: je 0x8e9797 */
  if (zf) goto L_8e9797;
L_8e9751: /* 8e9751: cmp dword ptr [esi + 0xdc], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xdcu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e9757: je 0x8e9797 */
  if (zf) goto L_8e9797;
L_8e9759: /* 8e9759: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e975c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e975d: call 0x6c5961 */
  esp -= 4; W32(esp, 0x8e9762u); SPILL(); f_6c5961(); if (g_unwind) return; RELOAD();
/* 8e9762: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e9764: je 0x8e9797 */
  if (zf) goto L_8e9797;
L_8e9766: /* 8e9766: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8e9768: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e9769: mov ecx, esi */
  ecx = esi;
/* 8e976b: call dword ptr [eax + 0xc8] */
  { uint32_t t = R32((uint32_t)(eax + 0xc8u)); esp -= 4; W32(esp, 0x8e9771u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e9771: fst dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0);
/* 8e9774: fdiv dword ptr [ebp - 0x14] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8e9777: mov dword ptr [esi + 0xd8], ebx */
  W32((uint32_t)(esi + 0xd8u), ebx);
/* 8e977d: fst dword ptr [esi + 0xcc] */
  WF32((uint32_t)(esi + 0xccu), ST0);
/* 8e9783: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 8e9786: fst dword ptr [esi + 0xb8] */
  WF32((uint32_t)(esi + 0xb8u), ST0);
/* 8e978c: fstp dword ptr [esi + 0xc8] */
  WF32((uint32_t)(esi + 0xc8u), ST0); FPOP();
/* 8e9792: jmp 0x8e96fd */
  goto L_8e96fd;
L_8e9797: /* 8e9797: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8e979d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8e97a0: fdiv dword ptr [ebp - 0x14] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8e97a3: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8e97a5: mov dword ptr [esi + 0xb4], ecx */
  W32((uint32_t)(esi + 0xb4u), ecx);
/* 8e97ab: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e97ac: mov ecx, esi */
  ecx = esi;
/* 8e97ae: fst dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0);
/* 8e97b1: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8e97b4: fst dword ptr [esi + 0xcc] */
  WF32((uint32_t)(esi + 0xccu), ST0);
/* 8e97ba: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 8e97bd: fstp dword ptr [esi + 0xb8] */
  WF32((uint32_t)(esi + 0xb8u), ST0); FPOP();
/* 8e97c3: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8e97c9: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* 8e97cc: fstp dword ptr [esi + 0xc0] */
  WF32((uint32_t)(esi + 0xc0u), ST0); FPOP();
/* 8e97d2: call dword ptr [edx + 0xcc] */
  { uint32_t t = R32((uint32_t)(edx + 0xccu)); esp -= 4; W32(esp, 0x8e97d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e97d8: fld dword ptr [esi + 0xc0] */
  { double v = F32((uint32_t)(esi + 0xc0u)); FPUSH(v); }
/* 8e97de: xor ecx, ecx */
  ecx = 0;
/* 8e97e0: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e97e6: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8e97e8: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8e97eb: setne cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 8e97ee: mov dword ptr [esi + 0xd8], ebx */
  W32((uint32_t)(esi + 0xd8u), ebx);
/* 8e97f4: mov dword ptr [esi + 0xdc], 1 */
  W32((uint32_t)(esi + 0xdcu), 0x1u);
/* 8e97fe: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e9800: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e9806: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e9809: mov dword ptr [esi + 0xe0], ecx */
  W32((uint32_t)(esi + 0xe0u), ecx);
/* 8e980f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e9811: jp 0x8e9859 */
  if (pf) goto L_8e9859;
L_8e9813: /* 8e9813: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e9816: mov dword ptr [esi + 0xe0], ebx */
  W32((uint32_t)(esi + 0xe0u), ebx);
/* 8e981c: mov dword ptr [esi + 0xc8], ebx */
  W32((uint32_t)(esi + 0xc8u), ebx);
/* 8e9822: jne 0x8e9835 */
  if (!zf) goto L_8e9835;
L_8e9824: /* 8e9824: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8e982a: fdiv dword ptr [ebp + 0x14] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x14u)));
/* 8e982d: fstp dword ptr [esi + 0xc4] */
  WF32((uint32_t)(esi + 0xc4u), ST0); FPOP();
/* 8e9833: jmp 0x8e983f */
  goto L_8e983f;
L_8e9835: /* 8e9835: mov dword ptr [esi + 0xc4], 0x41200000 */
  W32((uint32_t)(esi + 0xc4u), 0x41200000u);
L_8e983f: /* 8e983f: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
L_8e9842: /* 8e9842: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e9848: mov dword ptr [esi + 0xb8], ebx */
  W32((uint32_t)(esi + 0xb8u), ebx);
/* 8e984e: fstp dword ptr [esi + 0xbc] */
  WF32((uint32_t)(esi + 0xbcu), ST0); FPOP();
/* 8e9854: jmp 0x8e96f1 */
  goto L_8e96f1;
L_8e9859: /* 8e9859: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e985c: jne 0x8e9884 */
  if (!zf) goto L_8e9884;
L_8e985e: /* 8e985e: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8e9861: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 8e9864: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 8e986a: fstp dword ptr [esi + 0xc4] */
  WF32((uint32_t)(esi + 0xc4u), ST0); FPOP();
/* 8e9870: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 8e9873: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e9879: fstp dword ptr [esi + 0xbc] */
  WF32((uint32_t)(esi + 0xbcu), ST0); FPOP();
/* 8e987f: jmp 0x8e96f1 */
  goto L_8e96f1;
L_8e9884: /* 8e9884: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8e9887: fcomp dword ptr [0xa08220] */
  fpu_com(ST0, F32((uint32_t)(0xa08220u)));
  FPOP();
/* 8e988d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e988f: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e9892: jp 0x8e993f */
  if (pf) goto L_8e993f;
L_8e9898: /* 8e9898: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 8e989b: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e98a1: fstp dword ptr [esi + 0xbc] */
  WF32((uint32_t)(esi + 0xbcu), ST0); FPOP();
/* 8e98a7: fld dword ptr [esi + 0xc8] */
  { double v = F32((uint32_t)(esi + 0xc8u)); FPUSH(v); }
/* 8e98ad: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e98b3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e98b5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e98b8: jne 0x8e98cb */
  if (!zf) goto L_8e98cb;
L_8e98ba: /* 8e98ba: mov edx, dword ptr [esi + 0xc8] */
  edx = R32((uint32_t)(esi + 0xc8u));
/* 8e98c0: mov dword ptr [esi + 0xc4], edx */
  W32((uint32_t)(esi + 0xc4u), edx);
/* 8e98c6: jmp 0x8e96f1 */
  goto L_8e96f1;
L_8e98cb: /* 8e98cb: fld dword ptr [esi + 0xc8] */
  { double v = F32((uint32_t)(esi + 0xc8u)); FPUSH(v); }
/* 8e98d1: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e98d7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e98d9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e98dc: jp 0x8e9925 */
  if (pf) goto L_8e9925;
L_8e98de: /* 8e98de: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e98e1: add ecx, 0x188 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x188u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e98e7: call dword ptr [0xcfa580] */
  esp -= 4; W32(esp, 0x8e98edu); SPILL(); f_4e10c8(); if (g_unwind) return; /* Core!?Size@FVector@@QBEMXZ */ RELOAD();
/* 8e98ed: fst dword ptr [ebp + 0x14] */
  WF32((uint32_t)(ebp + 0x14u), ST0);
L_8e98f0: /* 8e98f0: fmul dword ptr [esi + 0xc8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xc8u)));
/* 8e98f6: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e98f9: fmul dword ptr [0xa08220] */
  ST0 = ST0 * (F32((uint32_t)(0xa08220u)));
/* 8e98ff: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8e9903: fld dword ptr [esi + 0xb8] */
  { double v = F32((uint32_t)(esi + 0xb8u)); FPUSH(v); }
/* 8e9909: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8e990f: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8e9912: call 0x6c47be */
  esp -= 4; W32(esp, 0x8e9917u); SPILL(); f_6c47be(); if (g_unwind) return; RELOAD();
/* 8e9917: fstp dword ptr [esi + 0xc4] */
  WF32((uint32_t)(esi + 0xc4u), ST0); FPOP();
/* 8e991d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e9920: jmp 0x8e96f1 */
  goto L_8e96f1;
L_8e9925: /* 8e9925: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8e9928: fmul dword ptr [0xa09e94] */
  ST0 = ST0 * (F32((uint32_t)(0xa09e94u)));
/* 8e992e: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 8e9934: fstp dword ptr [esi + 0xc4] */
  WF32((uint32_t)(esi + 0xc4u), ST0); FPOP();
/* 8e993a: jmp 0x8e96f1 */
  goto L_8e96f1;
L_8e993f: /* 8e993f: mov dword ptr [esi + 0xbc], 0x38d1b717 */
  W32((uint32_t)(esi + 0xbcu), 0x38d1b717u);
/* 8e9949: jmp 0x8e96eb */
  goto L_8e96eb;
L_8e994e: /* 8e994e: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8e9951: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e9957: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e9959: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8e995c: jp 0x8e9519 */
  if (pf) goto L_8e9519;
L_8e9962: /* 8e9962: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8e9964: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e9965: mov ecx, esi */
  ecx = esi;
/* 8e9967: call dword ptr [edx + 0xc4] */
  { uint32_t t = R32((uint32_t)(edx + 0xc4u)); esp -= 4; W32(esp, 0x8e996du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e996d: fst dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0);
/* 8e9970: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8e9973: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8e9976: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e997c: mov dword ptr [esi + 0xb4], eax */
  W32((uint32_t)(esi + 0xb4u), eax);
/* 8e9982: mov dword ptr [esi + 0xc0], ebx */
  W32((uint32_t)(esi + 0xc0u), ebx);
/* 8e9988: mov dword ptr [esi + 0xe0], ebx */
  W32((uint32_t)(esi + 0xe0u), ebx);
/* 8e998e: mov dword ptr [esi + 0xd8], ebx */
  W32((uint32_t)(esi + 0xd8u), ebx);
/* 8e9994: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e9996: mov dword ptr [esi + 0xdc], ebx */
  W32((uint32_t)(esi + 0xdcu), ebx);
/* 8e999c: mov dword ptr [esi + 0xb8], ebx */
  W32((uint32_t)(esi + 0xb8u), ebx);
/* 8e99a2: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e99a5: mov dword ptr [esi + 0xc8], ebx */
  W32((uint32_t)(esi + 0xc8u), ebx);
/* 8e99ab: jne 0x8e99d3 */
  if (!zf) goto L_8e99d3;
L_8e99ad: /* 8e99ad: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8e99b0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8e99b2: fdivr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) / ST0;
/* 8e99b8: fstp dword ptr [esi + 0xc4] */
  WF32((uint32_t)(esi + 0xc4u), ST0); FPOP();
/* 8e99be: fld dword ptr [0xa08220] */
  { double v = F32((uint32_t)(0xa08220u)); FPUSH(v); }
/* 8e99c4: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* 8e99c6: fstp dword ptr [esi + 0xbc] */
  WF32((uint32_t)(esi + 0xbcu), ST0); FPOP();
/* 8e99cc: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e99ce: jmp 0x8e96fd */
  goto L_8e96fd;
L_8e99d3: /* 8e99d3: mov dword ptr [esi + 0xc4], ebx */
  W32((uint32_t)(esi + 0xc4u), ebx);
/* 8e99d9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e99db: mov dword ptr [esi + 0xbc], ebx */
  W32((uint32_t)(esi + 0xbcu), ebx);
/* 8e99e1: jmp 0x8e96fd */
  goto L_8e96fd;
}

void f_8e99e6(void) {
  LOAD_REGS();
L_8e99e6: /* 8e99e6: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8e99e9: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e99ee: lea edx, [ebp - 0x20] */
  edx = (uint32_t)(ebp + 0xffffffe0u);
/* 8e99f1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e99f2: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8e99f5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e99fau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e99fa(); return;
}

void f_8e99fa(void) {
  LOAD_REGS();
L_8e99fa: /* 8e99fa: push 0xa1e024 */
  { uint32_t v = 0xa1e024u; esp -= 4; W32(esp, v); }
/* 8e99ff: push 0xaeded0 */
  { uint32_t v = 0xaeded0u; esp -= 4; W32(esp, v); }
/* 8e9a04: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e9a0au); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e9a0a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e9a0d: xor ebx, ebx */
  ebx = 0;
/* 8e9a0f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e9a10: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e9a11: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e9a16u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e9a16: guest_badaddr(0x8e9a16); return;
}

void f_8e9b80(void) {
  LOAD_REGS();
L_8e9b80: /* 8e9b80: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8e9b82: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x8e9b88u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e9b88: mov ecx, eax */
  ecx = eax;
/* 8e9b8a: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8e9b8e: mov edx, dword ptr [ecx + 0x158] */
  edx = R32((uint32_t)(ecx + 0x158u));
/* 8e9b94: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 8e9b97: add ecx, 0x158 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x158u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e9b9d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e9b9f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e9bc0(void) {
  LOAD_REGS();
L_8e9bc0: /* 8e9bc0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e9bc1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e9bc2: mov esi, ecx */
  esi = ecx;
/* 8e9bc4: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8e9bc6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e9bc7: xor edi, edi */
  edi = 0;
/* 8e9bc9: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x8e9bcfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e9bcf: mov ecx, dword ptr [eax + 0x15c] */
  ecx = R32((uint32_t)(eax + 0x15cu));
/* 8e9bd5: add eax, 0x158 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x158u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e9bda: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8e9bdc: jle 0x8e9c1f */
  if ((zf || sf != of)) goto L_8e9c1f;
L_8e9bde: /* 8e9bde: xor ebx, ebx */
  ebx = 0;
L_8e9be0: /* 8e9be0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8e9be2: mov ecx, esi */
  ecx = esi;
/* 8e9be4: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x8e9beau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e9bea: add eax, 0x158 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x158u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e9bef: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8e9bf1: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e9bf3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e9bf4: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8e9bf8: call dword ptr [0xcfa3f0] */
  esp -= 4; W32(esp, 0x8e9bfeu); SPILL(); f_4e29be(); if (g_unwind) return; /* Core!??8FName@@QBEHABV0@@Z */ RELOAD();
/* 8e9bfe: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e9c00: mov ecx, esi */
  ecx = esi;
/* 8e9c02: jne 0x8e9c27 */
  if (!zf) goto L_8e9c27;
L_8e9c04: /* 8e9c04: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8e9c06: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8e9c07: add ebx, 0x2c */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8e9c0a: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x8e9c10u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e9c10: mov ecx, dword ptr [eax + 0x15c] */
  ecx = R32((uint32_t)(eax + 0x15cu));
/* 8e9c16: add eax, 0x158 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x158u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e9c1b: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8e9c1d: jl 0x8e9be0 */
  if ((sf != of)) goto L_8e9be0;
L_8e9c1f: /* 8e9c1f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e9c20: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e9c21: xor eax, eax */
  eax = 0;
/* 8e9c23: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e9c24: ret 4 */
  esp += 8; SPILL(); return;
L_8e9c27: /* 8e9c27: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8e9c29: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x8e9c2fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e9c2f: mov ecx, eax */
  ecx = eax;
/* 8e9c31: mov edx, dword ptr [ecx + 0x158] */
  edx = R32((uint32_t)(ecx + 0x158u));
/* 8e9c37: mov eax, edi */
  eax = edi;
/* 8e9c39: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 8e9c3c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e9c3d: add ecx, 0x158 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x158u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e9c43: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e9c44: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8e9c46: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e9c47: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8e9c80(void) {
  LOAD_REGS();
L_8e9c80: /* 8e9c80: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8e9c84: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8e9c87: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e9c89: je 0x8e9c99 */
  if (zf) goto L_8e9c99;
L_8e9c8b: /* 8e9c8b: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 8e9c8e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8e9c90: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8e9c94: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8e9c96: ret 8 */
  esp += 12; SPILL(); return;
L_8e9c99: /* 8e9c99: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e9c9a: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8e9c9e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e9ca0: mov ecx, esi */
  ecx = esi;
/* 8e9ca2: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8e9ca8u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8e9ca8: mov eax, esi */
  eax = esi;
/* 8e9caa: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e9cab: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8e9cc0(void) {
  LOAD_REGS();
L_8e9cc0: /* 8e9cc0: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8e9cc4: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8e9cc8: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 8e9ccb: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8e9cce: fld dword ptr [edx + eax*4] */
  { double v = F32((uint32_t)(edx + eax*4)); FPUSH(v); }
/* 8e9cd1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8e9cf0(void) {
  LOAD_REGS();
L_8e9cf0: /* 8e9cf0: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8e9cf4: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8e9cf8: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 8e9cfb: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8e9cfe: lea ecx, [edx + eax*4 + 4] */
  ecx = (uint32_t)(edx + eax*4 + 0x4u);
/* 8e9d02: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x8e9d08u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 8e9d08: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8e9d20(void) {
  LOAD_REGS();
L_8e9d20: /* 8e9d20: mov eax, dword ptr [esp + 8] */
  eax = R32((uint32_t)(esp + 0x8u));
/* 8e9d24: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8e9d28: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* 8e9d2b: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8e9d2e: mov eax, dword ptr [edx + eax*4 + 8] */
  eax = R32((uint32_t)(edx + eax*4 + 0x8u));
/* 8e9d32: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8e9d50(void) {
  LOAD_REGS();
L_8e9d50: /* 8e9d50: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e9d51: mov ebp, esp */
  ebp = esp;
/* 8e9d53: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e9d55: push 0x9d8c70 */
  { uint32_t v = 0x9d8c70u; esp -= 4; W32(esp, v); }
/* 8e9d5a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e9d60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e9d61: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e9d68: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e9d6b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e9d6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e9d6d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e9d6e: mov esi, ecx */
  esi = ecx;
/* 8e9d70: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 8e9d73: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e9d76: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e9d7d: call dword ptr [0xcfa370] */
  esp -= 4; W32(esp, 0x8e9d83u); SPILL(); f_4e205e(); if (g_unwind) return; /* Core!??0FBox@@QAE@XZ */ RELOAD();
/* 8e9d83: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8e9d85: mov ecx, esi */
  ecx = esi;
/* 8e9d87: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x8e9d8du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e9d8d: mov ecx, dword ptr [esi + 0xb4] */
  ecx = R32((uint32_t)(esi + 0xb4u));
/* 8e9d93: mov ebx, eax */
  ebx = eax;
/* 8e9d95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e9d96: mov ecx, esi */
  ecx = esi;
/* 8e9d98: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8e9d9b: call 0x6ccf90 */
  esp -= 4; W32(esp, 0x8e9da0u); SPILL(); f_6ccf90(); if (g_unwind) return; RELOAD();
/* 8e9da0: mov edi, eax */
  edi = eax;
/* 8e9da2: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8e9da4: je 0x8e9e0e */
  if (zf) goto L_8e9e0e;
L_8e9da6: /* 8e9da6: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* 8e9dac: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8e9db2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e9db4: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e9db7: jne 0x8e9e0e */
  if (!zf) goto L_8e9e0e;
L_8e9db9: /* 8e9db9: fld dword ptr [esi + 0xbc] */
  { double v = F32((uint32_t)(esi + 0xbcu)); FPUSH(v); }
/* 8e9dbf: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e9dc0: fadd dword ptr [0x9f48a0] */
  ST0 = ST0 + (F32((uint32_t)(0x9f48a0u)));
/* 8e9dc6: fimul dword ptr [edi + 0x14] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(edi + 0x14u)));
/* 8e9dc9: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8e9dcc: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x8e9dd2u); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 8e9dd2: mov esi, dword ptr [edi + 0x14] */
  esi = R32((uint32_t)(edi + 0x14u));
/* 8e9dd5: mov ebx, eax */
  ebx = eax;
/* 8e9dd7: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8e9dd8: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x8e9dd8);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8e9dda: lea eax, [ebx + 1] */
  eax = (uint32_t)(ebx + 0x1u);
/* 8e9ddd: mov edi, dword ptr [edi + 0x10] */
  edi = R32((uint32_t)(edi + 0x10u));
/* 8e9de0: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e9de3: mov ecx, edx */
  ecx = edx;
/* 8e9de5: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8e9de6: idiv esi */
  { int32_t d = (int32_t)esi; if (!d) d = (int32_t)guest_divzero(0x8e9de6);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8e9de8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8e9deb: mov eax, dword ptr [eax + 0x164] */
  eax = R32((uint32_t)(eax + 0x164u));
/* 8e9df1: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e9df3: imul ecx, ecx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x1cu);
  ecx = (uint32_t)r;
  }
/* 8e9df6: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8e9df8: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8e9dfa: imul edx, edx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x1cu);
  edx = (uint32_t)r;
  }
/* 8e9dfd: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8e9dff: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e9e00: lea edx, [ebp - 0x54] */
  edx = (uint32_t)(ebp + 0xffffffacu);
/* 8e9e03: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e9e04: call dword ptr [0xcfaaf8] */
  esp -= 4; W32(esp, 0x8e9e0au); SPILL(); f_4e31ca(); if (g_unwind) return; /* Core!??HFBox@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 8e9e0a: mov esi, eax */
  esi = eax;
/* 8e9e0c: jmp 0x8e9e11 */
  goto L_8e9e11;
L_8e9e0e: /* 8e9e0e: lea esi, [ebx + 0x28] */
  esi = (uint32_t)(ebx + 0x28u);
L_8e9e11: /* 8e9e11: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8e9e14: lea edi, [ebp - 0x38] */
  edi = (uint32_t)(ebp + 0xffffffc8u);
/* 8e9e17: mov ecx, 7 */
  ecx = 0x7u;
/* 8e9e1c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8e9e1e: mov ecx, 7 */
  ecx = 0x7u;
/* 8e9e23: lea esi, [ebp - 0x38] */
  esi = (uint32_t)(ebp + 0xffffffc8u);
/* 8e9e26: mov edi, eax */
  edi = eax;
/* 8e9e28: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8e9e2a: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e9e2d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e9e2e: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e9e2f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e9e36: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e9e37: mov esp, ebp */
  esp = ebp;
/* 8e9e39: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e9e3a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8e9e3d(void) {
  LOAD_REGS();
L_8e9e3d: /* 8e9e3d: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8e9e40: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e9e45: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 8e9e48: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8e9e49: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8e9e4c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e9e51u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e9e51(); return;
}

void f_8e9e51(void) {
  LOAD_REGS();
L_8e9e51: /* 8e9e51: push 0xa1e068 */
  { uint32_t v = 0xa1e068u; esp -= 4; W32(esp, v); }
/* 8e9e56: push 0xaedf64 */
  { uint32_t v = 0xaedf64u; esp -= 4; W32(esp, v); }
/* 8e9e5b: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e9e61u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e9e61: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e9e64: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e9e66: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e9e68: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e9e6du); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e9e6d: guest_badaddr(0x8e9e6d); return;
}

void f_8e9ec0(void) {
  LOAD_REGS();
L_8e9ec0: /* 8e9ec0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8e9ec1: mov ebp, esp */
  ebp = esp;
/* 8e9ec3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8e9ec5: push 0x9d8c80 */
  { uint32_t v = 0x9d8c80u; esp -= 4; W32(esp, v); }
/* 8e9eca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8e9ed0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8e9ed1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8e9ed8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8e9edb: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8e9edd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8e9ede: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8e9edf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8e9ee0: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8e9ee3: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8e9eea: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x8e9ef0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8e9ef0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8e9ef3: mov ecx, eax */
  ecx = eax;
/* 8e9ef5: lea edx, [ecx + 0x78] */
  edx = (uint32_t)(ecx + 0x78u);
/* 8e9ef8: mov eax, edx */
  eax = edx;
/* 8e9efa: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 8e9efc: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8e9eff: mov dword ptr [eax + 4], esi */
  W32((uint32_t)(eax + 0x4u), esi);
/* 8e9f02: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 8e9f05: mov dword ptr [eax + 8], esi */
  W32((uint32_t)(eax + 0x8u), esi);
/* 8e9f08: fld dword ptr [ecx + 0x80] */
  { double v = F32((uint32_t)(ecx + 0x80u)); FPUSH(v); }
/* 8e9f0e: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8e9f14: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e9f16: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e9f19: je 0x8e9f1d */
  if (zf) goto L_8e9f1d;
L_8e9f1b: /* 8e9f1b: fchs  */
  ST0 = -ST0;
L_8e9f1d: /* 8e9f1d: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 8e9f20: fld dword ptr [ecx + 0x7c] */
  { double v = F32((uint32_t)(ecx + 0x7cu)); FPUSH(v); }
/* 8e9f23: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8e9f29: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e9f2b: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e9f2e: je 0x8e9f32 */
  if (zf) goto L_8e9f32;
L_8e9f30: /* 8e9f30: fchs  */
  ST0 = -ST0;
L_8e9f32: /* 8e9f32: fcom dword ptr [ebp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x10u)));
/* 8e9f35: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e9f37: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e9f3a: jne 0x8e9f41 */
  if (!zf) goto L_8e9f41;
L_8e9f3c: /* 8e9f3c: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 8e9f3f: jmp 0x8e9f49 */
  goto L_8e9f49;
L_8e9f41: /* 8e9f41: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8e9f44: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e9f46: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
L_8e9f49: /* 8e9f49: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8e9f4b: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8e9f51: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e9f53: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e9f56: je 0x8e9f5a */
  if (zf) goto L_8e9f5a;
L_8e9f58: /* 8e9f58: fchs  */
  ST0 = -ST0;
L_8e9f5a: /* 8e9f5a: fcom dword ptr [ebp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0x10u)));
/* 8e9f5d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8e9f5f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8e9f62: je 0x8e9f69 */
  if (zf) goto L_8e9f69;
L_8e9f64: /* 8e9f64: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8e9f66: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
L_8e9f69: /* 8e9f69: fmul dword ptr [ecx + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x50u)));
/* 8e9f6c: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8e9f6d: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8e9f6e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8e9f6f: fmul dword ptr [0xa0d5a4] */
  ST0 = ST0 * (F32((uint32_t)(0xa0d5a4u)));
/* 8e9f75: fstp dword ptr [ecx + 0xd8] */
  WF32((uint32_t)(ecx + 0xd8u), ST0); FPOP();
/* 8e9f7b: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8e9f7e: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8e9f85: mov esp, ebp */
  esp = ebp;
/* 8e9f87: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8e9f88: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8e9f8b(void) {
  LOAD_REGS();
L_8e9f8b: /* 8e9f8b: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8e9f8e: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8e9f93: lea edx, [ebp - 0x14] */
  edx = (uint32_t)(ebp + 0xffffffecu);
/* 8e9f96: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8e9f97: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8e9f9a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e9f9fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8e9f9f(); return;
}

void f_8e9f9f(void) {
  LOAD_REGS();
L_8e9f9f: /* 8e9f9f: push 0xa1e0c8 */
  { uint32_t v = 0xa1e0c8u; esp -= 4; W32(esp, v); }
/* 8e9fa4: push 0xaedf74 */
  { uint32_t v = 0xaedf74u; esp -= 4; W32(esp, v); }
/* 8e9fa9: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8e9fafu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8e9faf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8e9fb2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e9fb4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8e9fb6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8e9fbbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8e9fbb: guest_badaddr(0x8e9fbb); return;
}

void f_8ea000(void) {
  LOAD_REGS();
L_8ea000: /* 8ea000: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ea002: push 0x9d8d61 */
  { uint32_t v = 0x9d8d61u; esp -= 4; W32(esp, v); }
/* 8ea007: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ea00d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ea00e: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ea015: sub esp, 0x3a8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3a8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ea01b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ea01c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ea01d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ea01e: mov ebx, ecx */
  ebx = ecx;
/* 8ea020: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ea021: mov dword ptr [esp + 0xb0], ebx */
  W32((uint32_t)(esp + 0xb0u), ebx);
/* 8ea028: mov dword ptr [esp + 0xb4], 0 */
  W32((uint32_t)(esp + 0xb4u), 0x0u);
/* 8ea033: mov eax, dword ptr [ebx + 0x78] */
  eax = R32((uint32_t)(ebx + 0x78u));
/* 8ea036: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ea038: mov ebp, dword ptr [ebx + 0x58] */
  ebp = R32((uint32_t)(ebx + 0x58u));
/* 8ea03b: mov dword ptr [esp + 0x3c0], 1 */
  W32((uint32_t)(esp + 0x3c0u), 0x1u);
/* 8ea046: je 0x8ea314 */
  if (zf) goto L_8ea314;
L_8ea04c: /* 8ea04c: lea eax, [ebp + 0x170] */
  eax = (uint32_t)(ebp + 0x170u);
/* 8ea052: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8ea054: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8ea057: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8ea05a: mov dword ptr [esp + 0x18], ecx */
  W32((uint32_t)(esp + 0x18u), ecx);
/* 8ea05e: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 8ea062: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8ea066: mov dword ptr [esp + 0x30], 0x3f800000 */
  W32((uint32_t)(esp + 0x30u), 0x3f800000u);
/* 8ea06e: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 8ea076: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 8ea07e: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 8ea086: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 8ea08e: mov dword ptr [esp + 0x44], 0x3f800000 */
  W32((uint32_t)(esp + 0x44u), 0x3f800000u);
/* 8ea096: mov dword ptr [esp + 0x48], 0 */
  W32((uint32_t)(esp + 0x48u), 0x0u);
/* 8ea09e: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* 8ea0a6: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 8ea0ae: mov dword ptr [esp + 0x54], 0 */
  W32((uint32_t)(esp + 0x54u), 0x0u);
/* 8ea0b6: mov dword ptr [esp + 0x58], 0x3f800000 */
  W32((uint32_t)(esp + 0x58u), 0x3f800000u);
/* 8ea0be: mov dword ptr [esp + 0x5c], 0 */
  W32((uint32_t)(esp + 0x5cu), 0x0u);
/* 8ea0c6: mov dword ptr [esp + 0x60], ecx */
  W32((uint32_t)(esp + 0x60u), ecx);
/* 8ea0ca: mov dword ptr [esp + 0x64], edx */
  W32((uint32_t)(esp + 0x64u), edx);
/* 8ea0ce: mov dword ptr [esp + 0x68], eax */
  W32((uint32_t)(esp + 0x68u), eax);
/* 8ea0d2: mov dword ptr [esp + 0x6c], 0x3f800000 */
  W32((uint32_t)(esp + 0x6cu), 0x3f800000u);
/* 8ea0da: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8ea0df: lea esi, [esp + 0x30] */
  esi = (uint32_t)(esp + 0x30u);
/* 8ea0e3: lea edi, [esp + 0x178] */
  edi = (uint32_t)(esp + 0x178u);
/* 8ea0ea: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ea0ec: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8ea0f1: lea esi, [esp + 0x30] */
  esi = (uint32_t)(esp + 0x30u);
/* 8ea0f5: lea edi, [esp + 0x1f8] */
  edi = (uint32_t)(esp + 0x1f8u);
/* 8ea0fc: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ea0fe: lea ecx, [ebp + 0x17c] */
  ecx = (uint32_t)(ebp + 0x17cu);
/* 8ea104: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8ea106: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ea109: mov edx, esp */
  edx = esp;
/* 8ea10b: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8ea10d: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8ea110: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8ea113: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8ea116: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8ea119: lea ecx, [esp + 0x144] */
  ecx = (uint32_t)(esp + 0x144u);
/* 8ea120: call 0x6c9160 */
  esp -= 4; W32(esp, 0x8ea125u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 8ea125: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8ea12a: mov esi, eax */
  esi = eax;
/* 8ea12c: lea edi, [esp + 0x238] */
  edi = (uint32_t)(esp + 0x238u);
/* 8ea133: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ea135: mov esi, eax */
  esi = eax;
/* 8ea137: fld dword ptr [ebp + 0x284] */
  { double v = F32((uint32_t)(ebp + 0x284u)); FPUSH(v); }
/* 8ea13d: mov eax, dword ptr [ebx + 0x54] */
  eax = R32((uint32_t)(ebx + 0x54u));
/* 8ea140: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8ea142: add eax, 0x78 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8ea145: fmul dword ptr [ebp + 0x290] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x290u)));
/* 8ea14b: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8ea150: lea edi, [esp + 0xf8] */
  edi = (uint32_t)(esp + 0xf8u);
/* 8ea157: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ea159: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8ea15d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8ea15f: fmul dword ptr [ebp + 0x28c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x28cu)));
/* 8ea165: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8ea169: fmul dword ptr [ebp + 0x288] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x288u)));
/* 8ea16f: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8ea173: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8ea177: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8ea17a: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8ea17e: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8ea181: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8ea185: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8ea187: mov dword ptr [esp + 0x74], 0 */
  W32((uint32_t)(esp + 0x74u), 0x0u);
/* 8ea18f: mov dword ptr [esp + 0x78], 0 */
  W32((uint32_t)(esp + 0x78u), 0x0u);
/* 8ea197: mov dword ptr [esp + 0x7c], 0 */
  W32((uint32_t)(esp + 0x7cu), 0x0u);
/* 8ea19f: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 8ea1a3: mov dword ptr [esp + 0x80], 0 */
  W32((uint32_t)(esp + 0x80u), 0x0u);
/* 8ea1ae: mov dword ptr [esp + 0x88], 0 */
  W32((uint32_t)(esp + 0x88u), 0x0u);
/* 8ea1b9: fstp dword ptr [esp + 0x84] */
  WF32((uint32_t)(esp + 0x84u), ST0); FPOP();
/* 8ea1c0: mov dword ptr [esp + 0x8c], 0 */
  W32((uint32_t)(esp + 0x8cu), 0x0u);
/* 8ea1cb: mov dword ptr [esp + 0x90], 0 */
  W32((uint32_t)(esp + 0x90u), 0x0u);
/* 8ea1d6: mov dword ptr [esp + 0x94], 0 */
  W32((uint32_t)(esp + 0x94u), 0x0u);
/* 8ea1e1: fstp dword ptr [esp + 0x98] */
  WF32((uint32_t)(esp + 0x98u), ST0); FPOP();
/* 8ea1e8: mov dword ptr [esp + 0x9c], 0 */
  W32((uint32_t)(esp + 0x9cu), 0x0u);
/* 8ea1f3: mov dword ptr [esp + 0xa0], 0 */
  W32((uint32_t)(esp + 0xa0u), 0x0u);
/* 8ea1fe: mov dword ptr [esp + 0xa4], 0 */
  W32((uint32_t)(esp + 0xa4u), 0x0u);
/* 8ea209: mov dword ptr [esp + 0xa8], 0 */
  W32((uint32_t)(esp + 0xa8u), 0x0u);
/* 8ea214: mov dword ptr [esp + 0xac], 0x3f800000 */
  W32((uint32_t)(esp + 0xacu), 0x3f800000u);
/* 8ea21f: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ea222: mov edi, esp */
  edi = esp;
/* 8ea224: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8ea229: lea esi, [esp + 0x138] */
  esi = (uint32_t)(esp + 0x138u);
/* 8ea230: lea edx, [esp + 0x2b8] */
  edx = (uint32_t)(esp + 0x2b8u);
/* 8ea237: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ea239: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ea23a: lea ecx, [esp + 0xb4] */
  ecx = (uint32_t)(esp + 0xb4u);
/* 8ea241: mov byte ptr [esp + 0x404], 6 */
  W8((uint32_t)(esp + 0x404u), 0x6u);
/* 8ea249: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8ea24fu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8ea24f: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ea252: mov edi, esp */
  edi = esp;
/* 8ea254: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8ea259: lea esi, [esp + 0x238] */
  esi = (uint32_t)(esp + 0x238u);
/* 8ea260: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ea262: lea ecx, [esp + 0x1f8] */
  ecx = (uint32_t)(esp + 0x1f8u);
/* 8ea269: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ea26a: mov ecx, eax */
  ecx = eax;
/* 8ea26c: mov byte ptr [esp + 0x404], 7 */
  W8((uint32_t)(esp + 0x404u), 0x7u);
/* 8ea274: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8ea27au); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8ea27a: mov esi, eax */
  esi = eax;
/* 8ea27c: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8ea281: lea edi, [esp + 0xb8] */
  edi = (uint32_t)(esp + 0xb8u);
/* 8ea288: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ea28a: lea ecx, [esp + 0x1b8] */
  ecx = (uint32_t)(esp + 0x1b8u);
/* 8ea291: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ea297u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ea297: lea ecx, [esp + 0x278] */
  ecx = (uint32_t)(esp + 0x278u);
/* 8ea29e: mov byte ptr [esp + 0x3c0], 6 */
  W8((uint32_t)(esp + 0x3c0u), 0x6u);
/* 8ea2a6: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ea2acu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ea2ac: lea ecx, [esp + 0x70] */
  ecx = (uint32_t)(esp + 0x70u);
/* 8ea2b0: mov byte ptr [esp + 0x3c0], 5 */
  W8((uint32_t)(esp + 0x3c0u), 0x5u);
/* 8ea2b8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ea2beu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ea2be: lea ecx, [esp + 0x238] */
  ecx = (uint32_t)(esp + 0x238u);
/* 8ea2c5: mov byte ptr [esp + 0x3c0], 4 */
  W8((uint32_t)(esp + 0x3c0u), 0x4u);
/* 8ea2cd: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ea2d3u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ea2d3: lea ecx, [esp + 0x138] */
  ecx = (uint32_t)(esp + 0x138u);
/* 8ea2da: mov byte ptr [esp + 0x3c0], 3 */
  W8((uint32_t)(esp + 0x3c0u), 0x3u);
/* 8ea2e2: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ea2e8u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ea2e8: lea ecx, [esp + 0x178] */
  ecx = (uint32_t)(esp + 0x178u);
/* 8ea2ef: mov byte ptr [esp + 0x3c0], 2 */
  W8((uint32_t)(esp + 0x3c0u), 0x2u);
/* 8ea2f7: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ea2fdu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ea2fd: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 8ea301: mov byte ptr [esp + 0x3c0], 1 */
  W8((uint32_t)(esp + 0x3c0u), 0x1u);
/* 8ea309: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ea30fu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ea30f: jmp 0x8ea69a */
  goto L_8ea69a;
L_8ea314: /* 8ea314: fld dword ptr [ebp + 0x29c] */
  { double v = F32((uint32_t)(ebp + 0x29cu)); FPUSH(v); }
/* 8ea31a: fadd dword ptr [ebp + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x178u)));
/* 8ea320: fld dword ptr [ebp + 0x298] */
  { double v = F32((uint32_t)(ebp + 0x298u)); FPUSH(v); }
/* 8ea326: fadd dword ptr [ebp + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x174u)));
/* 8ea32c: fld dword ptr [ebp + 0x170] */
  { double v = F32((uint32_t)(ebp + 0x170u)); FPUSH(v); }
/* 8ea332: fadd dword ptr [ebp + 0x294] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x294u)));
/* 8ea338: mov dword ptr [esp + 0x30], 0x3f800000 */
  W32((uint32_t)(esp + 0x30u), 0x3f800000u);
/* 8ea340: mov dword ptr [esp + 0x34], 0 */
  W32((uint32_t)(esp + 0x34u), 0x0u);
/* 8ea348: mov dword ptr [esp + 0x38], 0 */
  W32((uint32_t)(esp + 0x38u), 0x0u);
/* 8ea350: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 8ea354: mov dword ptr [esp + 0x3c], 0 */
  W32((uint32_t)(esp + 0x3cu), 0x0u);
/* 8ea35c: mov dword ptr [esp + 0x40], 0 */
  W32((uint32_t)(esp + 0x40u), 0x0u);
/* 8ea364: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 8ea368: mov dword ptr [esp + 0x44], 0x3f800000 */
  W32((uint32_t)(esp + 0x44u), 0x3f800000u);
/* 8ea370: mov dword ptr [esp + 0x48], 0 */
  W32((uint32_t)(esp + 0x48u), 0x0u);
/* 8ea378: fstp dword ptr [esp + 0x68] */
  WF32((uint32_t)(esp + 0x68u), ST0); FPOP();
/* 8ea37c: mov dword ptr [esp + 0x4c], 0 */
  W32((uint32_t)(esp + 0x4cu), 0x0u);
/* 8ea384: mov dword ptr [esp + 0x50], 0 */
  W32((uint32_t)(esp + 0x50u), 0x0u);
/* 8ea38c: mov dword ptr [esp + 0x54], 0 */
  W32((uint32_t)(esp + 0x54u), 0x0u);
/* 8ea394: mov dword ptr [esp + 0x58], 0x3f800000 */
  W32((uint32_t)(esp + 0x58u), 0x3f800000u);
/* 8ea39c: mov dword ptr [esp + 0x5c], 0 */
  W32((uint32_t)(esp + 0x5cu), 0x0u);
/* 8ea3a4: mov dword ptr [esp + 0x6c], 0x3f800000 */
  W32((uint32_t)(esp + 0x6cu), 0x3f800000u);
/* 8ea3ac: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8ea3b1: lea esi, [esp + 0x30] */
  esi = (uint32_t)(esp + 0x30u);
/* 8ea3b5: lea edi, [esp + 0x378] */
  edi = (uint32_t)(esp + 0x378u);
/* 8ea3bc: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ea3be: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8ea3c3: lea esi, [esp + 0x30] */
  esi = (uint32_t)(esp + 0x30u);
/* 8ea3c7: lea edi, [esp + 0x238] */
  edi = (uint32_t)(esp + 0x238u);
/* 8ea3ce: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ea3d0: lea edx, [ebp + 0x17c] */
  edx = (uint32_t)(ebp + 0x17cu);
/* 8ea3d6: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 8ea3d8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ea3db: mov eax, esp */
  eax = esp;
/* 8ea3dd: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8ea3df: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8ea3e2: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8ea3e5: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8ea3e8: lea ecx, [esp + 0x304] */
  ecx = (uint32_t)(esp + 0x304u);
/* 8ea3ef: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8ea3f2: call 0x6c9160 */
  esp -= 4; W32(esp, 0x8ea3f7u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 8ea3f7: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8ea3fc: mov esi, eax */
  esi = eax;
/* 8ea3fe: lea edi, [esp + 0x338] */
  edi = (uint32_t)(esp + 0x338u);
/* 8ea405: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ea407: mov ebx, dword ptr [ebx + 0x54] */
  ebx = R32((uint32_t)(ebx + 0x54u));
/* 8ea40a: mov esi, eax */
  esi = eax;
/* 8ea40c: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8ea411: lea edi, [esp + 0x138] */
  edi = (uint32_t)(esp + 0x138u);
/* 8ea418: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ea41a: lea eax, [ebx + 0x90] */
  eax = (uint32_t)(ebx + 0x90u);
/* 8ea420: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8ea422: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ea425: mov ecx, esp */
  ecx = esp;
/* 8ea427: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8ea429: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8ea42c: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8ea42f: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8ea432: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8ea435: lea ecx, [esp + 0x2c4] */
  ecx = (uint32_t)(esp + 0x2c4u);
/* 8ea43c: call 0x6c9160 */
  esp -= 4; W32(esp, 0x8ea441u); SPILL(); f_6c9160(); if (g_unwind) return; RELOAD();
/* 8ea441: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8ea446: mov esi, eax */
  esi = eax;
/* 8ea448: lea edi, [esp + 0xf8] */
  edi = (uint32_t)(esp + 0xf8u);
/* 8ea44f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ea451: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8ea456: fld dword ptr [ebp + 0x284] */
  { double v = F32((uint32_t)(ebp + 0x284u)); FPUSH(v); }
/* 8ea45c: mov esi, eax */
  esi = eax;
/* 8ea45e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8ea460: lea edi, [esp + 0x178] */
  edi = (uint32_t)(esp + 0x178u);
/* 8ea467: fmul dword ptr [ebp + 0x290] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x290u)));
/* 8ea46d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ea46f: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8ea473: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8ea475: fmul dword ptr [ebp + 0x28c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x28cu)));
/* 8ea47b: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8ea47f: fmul dword ptr [ebp + 0x288] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x288u)));
/* 8ea485: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8ea489: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8ea48d: fmul dword ptr [ebx + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x80u)));
/* 8ea493: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8ea497: fmul dword ptr [ebx + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x7cu)));
/* 8ea49a: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8ea49e: fmul dword ptr [ebx + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x78u)));
/* 8ea4a1: mov dword ptr [esp + 0x74], 0 */
  W32((uint32_t)(esp + 0x74u), 0x0u);
/* 8ea4a9: mov dword ptr [esp + 0x78], 0 */
  W32((uint32_t)(esp + 0x78u), 0x0u);
/* 8ea4b1: mov dword ptr [esp + 0x7c], 0 */
  W32((uint32_t)(esp + 0x7cu), 0x0u);
/* 8ea4b9: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 8ea4bd: mov dword ptr [esp + 0x80], 0 */
  W32((uint32_t)(esp + 0x80u), 0x0u);
/* 8ea4c8: mov dword ptr [esp + 0x88], 0 */
  W32((uint32_t)(esp + 0x88u), 0x0u);
/* 8ea4d3: fstp dword ptr [esp + 0x84] */
  WF32((uint32_t)(esp + 0x84u), ST0); FPOP();
/* 8ea4da: mov dword ptr [esp + 0x8c], 0 */
  W32((uint32_t)(esp + 0x8cu), 0x0u);
/* 8ea4e5: mov dword ptr [esp + 0x90], 0 */
  W32((uint32_t)(esp + 0x90u), 0x0u);
/* 8ea4f0: fstp dword ptr [esp + 0x98] */
  WF32((uint32_t)(esp + 0x98u), ST0); FPOP();
/* 8ea4f7: mov dword ptr [esp + 0x94], 0 */
  W32((uint32_t)(esp + 0x94u), 0x0u);
/* 8ea502: mov dword ptr [esp + 0x9c], 0 */
  W32((uint32_t)(esp + 0x9cu), 0x0u);
/* 8ea50d: mov dword ptr [esp + 0xa0], 0 */
  W32((uint32_t)(esp + 0xa0u), 0x0u);
/* 8ea518: mov dword ptr [esp + 0xa4], 0 */
  W32((uint32_t)(esp + 0xa4u), 0x0u);
/* 8ea523: mov dword ptr [esp + 0xa8], 0 */
  W32((uint32_t)(esp + 0xa8u), 0x0u);
/* 8ea52e: mov dword ptr [esp + 0xac], 0x3f800000 */
  W32((uint32_t)(esp + 0xacu), 0x3f800000u);
/* 8ea539: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ea53c: mov edi, esp */
  edi = esp;
/* 8ea53e: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8ea543: lea esi, [esp + 0x1b8] */
  esi = (uint32_t)(esp + 0x1b8u);
/* 8ea54a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ea54c: lea ecx, [esp + 0x238] */
  ecx = (uint32_t)(esp + 0x238u);
/* 8ea553: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ea554: lea ecx, [esp + 0xb4] */
  ecx = (uint32_t)(esp + 0xb4u);
/* 8ea55b: mov byte ptr [esp + 0x404], 0xe */
  W8((uint32_t)(esp + 0x404u), 0xeu);
/* 8ea563: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8ea569u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8ea569: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ea56c: mov edi, esp */
  edi = esp;
/* 8ea56e: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8ea573: lea esi, [esp + 0x178] */
  esi = (uint32_t)(esp + 0x178u);
/* 8ea57a: lea edx, [esp + 0x1f8] */
  edx = (uint32_t)(esp + 0x1f8u);
/* 8ea581: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ea583: mov bl, 0xf */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0xfu) & 0xffu);
/* 8ea585: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ea586: mov ecx, eax */
  ecx = eax;
/* 8ea588: mov byte ptr [esp + 0x404], bl */
  W8((uint32_t)(esp + 0x404u), (ebx & 0xffu));
/* 8ea58f: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8ea595u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8ea595: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ea598: mov edi, esp */
  edi = esp;
/* 8ea59a: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8ea59f: lea esi, [esp + 0x278] */
  esi = (uint32_t)(esp + 0x278u);
/* 8ea5a6: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ea5a8: lea ecx, [esp + 0x2b8] */
  ecx = (uint32_t)(esp + 0x2b8u);
/* 8ea5af: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ea5b0: mov ecx, eax */
  ecx = eax;
/* 8ea5b2: mov byte ptr [esp + 0x404], 0x10 */
  W8((uint32_t)(esp + 0x404u), 0x10u);
/* 8ea5ba: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x8ea5c0u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 8ea5c0: mov esi, eax */
  esi = eax;
/* 8ea5c2: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8ea5c7: lea edi, [esp + 0xb8] */
  edi = (uint32_t)(esp + 0xb8u);
/* 8ea5ce: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ea5d0: lea ecx, [esp + 0x278] */
  ecx = (uint32_t)(esp + 0x278u);
/* 8ea5d7: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ea5ddu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ea5dd: lea ecx, [esp + 0x1b8] */
  ecx = (uint32_t)(esp + 0x1b8u);
/* 8ea5e4: mov byte ptr [esp + 0x3c0], bl */
  W8((uint32_t)(esp + 0x3c0u), (ebx & 0xffu));
/* 8ea5eb: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ea5f1u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ea5f1: lea ecx, [esp + 0x1f8] */
  ecx = (uint32_t)(esp + 0x1f8u);
/* 8ea5f8: mov byte ptr [esp + 0x3c0], 0xe */
  W8((uint32_t)(esp + 0x3c0u), 0xeu);
/* 8ea600: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ea606u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ea606: lea ecx, [esp + 0x70] */
  ecx = (uint32_t)(esp + 0x70u);
/* 8ea60a: mov byte ptr [esp + 0x3c0], 0xd */
  W8((uint32_t)(esp + 0x3c0u), 0xdu);
/* 8ea612: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ea618u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ea618: lea ecx, [esp + 0xf8] */
  ecx = (uint32_t)(esp + 0xf8u);
/* 8ea61f: mov byte ptr [esp + 0x3c0], 0xc */
  W8((uint32_t)(esp + 0x3c0u), 0xcu);
/* 8ea627: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ea62du); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ea62d: lea ecx, [esp + 0x2b8] */
  ecx = (uint32_t)(esp + 0x2b8u);
/* 8ea634: mov byte ptr [esp + 0x3c0], 0xb */
  W8((uint32_t)(esp + 0x3c0u), 0xbu);
/* 8ea63c: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ea642u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ea642: mov byte ptr [esp + 0x3c0], 0xa */
  W8((uint32_t)(esp + 0x3c0u), 0xau);
/* 8ea64a: lea ecx, [esp + 0x338] */
  ecx = (uint32_t)(esp + 0x338u);
/* 8ea651: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ea657u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ea657: lea ecx, [esp + 0x2f8] */
  ecx = (uint32_t)(esp + 0x2f8u);
/* 8ea65e: mov byte ptr [esp + 0x3c0], 9 */
  W8((uint32_t)(esp + 0x3c0u), 0x9u);
/* 8ea666: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ea66cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ea66c: lea ecx, [esp + 0x378] */
  ecx = (uint32_t)(esp + 0x378u);
/* 8ea673: mov byte ptr [esp + 0x3c0], 8 */
  W8((uint32_t)(esp + 0x3c0u), 0x8u);
/* 8ea67b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ea681u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ea681: lea ecx, [esp + 0x30] */
  ecx = (uint32_t)(esp + 0x30u);
/* 8ea685: mov byte ptr [esp + 0x3c0], 1 */
  W8((uint32_t)(esp + 0x3c0u), 0x1u);
/* 8ea68d: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ea693u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ea693: mov ebx, dword ptr [esp + 0xb0] */
  ebx = R32((uint32_t)(esp + 0xb0u));
L_8ea69a: /* 8ea69a: mov eax, dword ptr [esp + 0xdc] */
  eax = R32((uint32_t)(esp + 0xdcu));
/* 8ea6a1: fld dword ptr [esp + 0xc8] */
  { double v = F32((uint32_t)(esp + 0xc8u)); FPUSH(v); }
/* 8ea6a8: mov edx, dword ptr [esp + 0xcc] */
  edx = R32((uint32_t)(esp + 0xccu));
/* 8ea6af: fld dword ptr [esp + 0xd8] */
  { double v = F32((uint32_t)(esp + 0xd8u)); FPUSH(v); }
/* 8ea6b6: mov ecx, dword ptr [esp + 0xd0] */
  ecx = R32((uint32_t)(esp + 0xd0u));
/* 8ea6bd: mov dword ptr [esp + 0x20], eax */
  W32((uint32_t)(esp + 0x20u), eax);
/* 8ea6c1: mov eax, dword ptr [ebx + 0x78] */
  eax = R32((uint32_t)(ebx + 0x78u));
/* 8ea6c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ea6c6: mov dword ptr [esp + 0x1c], edx */
  W32((uint32_t)(esp + 0x1cu), edx);
/* 8ea6ca: mov edx, dword ptr [esp + 0xe0] */
  edx = R32((uint32_t)(esp + 0xe0u));
/* 8ea6d1: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* 8ea6d5: mov dword ptr [esp + 0x2c], edx */
  W32((uint32_t)(esp + 0x2cu), edx);
/* 8ea6d9: jne 0x8ea79f */
  if (!zf) goto L_8ea79f;
L_8ea6df: /* 8ea6df: mov ebx, dword ptr [ebx + 0x54] */
  ebx = R32((uint32_t)(ebx + 0x54u));
/* 8ea6e2: fld dword ptr [ebx + 0x8c] */
  { double v = F32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8ea6e8: fchs  */
  ST0 = -ST0;
/* 8ea6ea: fld dword ptr [ebx + 0x88] */
  { double v = F32((uint32_t)(ebx + 0x88u)); FPUSH(v); }
/* 8ea6f0: fchs  */
  ST0 = -ST0;
/* 8ea6f2: fld dword ptr [ebx + 0x84] */
  { double v = F32((uint32_t)(ebx + 0x84u)); FPUSH(v); }
/* 8ea6f8: fchs  */
  ST0 = -ST0;
/* 8ea6fa: fmul dword ptr [esp + 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xb8u)));
/* 8ea701: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8ea703: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8ea705: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* 8ea707: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8ea709: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8ea70b: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 8ea70d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ea70f: fadd dword ptr [esp + 0xe8] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xe8u)));
/* 8ea716: fstp dword ptr [esp + 0xe8] */
  WF32((uint32_t)(esp + 0xe8u), ST0); FPOP();
/* 8ea71d: fstp st(1) */
  STI(1) = ST0; FPOP();
/* 8ea71f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ea721: fld dword ptr [ebx + 0x8c] */
  { double v = F32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8ea727: fchs  */
  ST0 = -ST0;
/* 8ea729: fld dword ptr [ebx + 0x88] */
  { double v = F32((uint32_t)(ebx + 0x88u)); FPUSH(v); }
/* 8ea72f: fchs  */
  ST0 = -ST0;
/* 8ea731: fld dword ptr [ebx + 0x84] */
  { double v = F32((uint32_t)(ebx + 0x84u)); FPUSH(v); }
/* 8ea737: fchs  */
  ST0 = -ST0;
/* 8ea739: fmul dword ptr [esp + 0xbc] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xbcu)));
/* 8ea740: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8ea744: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8ea746: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ea748: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8ea74c: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8ea74e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ea750: fadd dword ptr [esp + 0xec] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xecu)));
/* 8ea757: fstp dword ptr [esp + 0xec] */
  WF32((uint32_t)(esp + 0xecu), ST0); FPOP();
/* 8ea75e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ea760: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ea762: fld dword ptr [ebx + 0x8c] */
  { double v = F32((uint32_t)(ebx + 0x8cu)); FPUSH(v); }
/* 8ea768: fchs  */
  ST0 = -ST0;
/* 8ea76a: fld dword ptr [ebx + 0x88] */
  { double v = F32((uint32_t)(ebx + 0x88u)); FPUSH(v); }
/* 8ea770: fchs  */
  ST0 = -ST0;
/* 8ea772: fld dword ptr [ebx + 0x84] */
  { double v = F32((uint32_t)(ebx + 0x84u)); FPUSH(v); }
/* 8ea778: fchs  */
  ST0 = -ST0;
/* 8ea77a: fmul dword ptr [esp + 0xc0] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0xc0u)));
/* 8ea781: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8ea785: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 8ea787: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ea789: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8ea78d: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 8ea78f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ea791: fadd dword ptr [esp + 0xf0] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xf0u)));
/* 8ea798: fstp dword ptr [esp + 0xf0] */
  WF32((uint32_t)(esp + 0xf0u), ST0); FPOP();
L_8ea79f: /* 8ea79f: mov ebx, dword ptr [esp + 0x3c8] */
  ebx = R32((uint32_t)(esp + 0x3c8u));
/* 8ea7a6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ea7a8: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8ea7ad: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ea7af: lea esi, [esp + 0xb8] */
  esi = (uint32_t)(esp + 0xb8u);
/* 8ea7b6: mov edi, ebx */
  edi = ebx;
/* 8ea7b8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ea7ba: lea ecx, [esp + 0xb8] */
  ecx = (uint32_t)(esp + 0xb8u);
/* 8ea7c1: mov dword ptr [esp + 0xb4], 1 */
  W32((uint32_t)(esp + 0xb4u), 0x1u);
/* 8ea7cc: mov byte ptr [esp + 0x3c0], 0 */
  W8((uint32_t)(esp + 0x3c0u), 0x0u);
/* 8ea7d4: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ea7dau); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ea7da: mov ecx, dword ptr [esp + 0x3b8] */
  ecx = R32((uint32_t)(esp + 0x3b8u));
/* 8ea7e1: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ea7e2: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ea7e3: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ea7e4: mov eax, ebx */
  eax = ebx;
/* 8ea7e6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ea7ed: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ea7ee: add esp, 0x3b4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3b4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ea7f4: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8eaa00(void) {
  LOAD_REGS();
L_8eaa00: /* 8eaa00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8eaa01: lea eax, [esp] */
  eax = (uint32_t)(esp);
/* 8eaa05: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eaa06: lea ecx, [esp + 0x10] */
  ecx = (uint32_t)(esp + 0x10u);
/* 8eaa0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8eaa0b: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 8eaa0f: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8eaa12: mov dword ptr [esp + 8], 0 */
  W32((uint32_t)(esp + 0x8u), 0x0u);
/* 8eaa1a: call 0x6c9390 */
  esp -= 4; W32(esp, 0x8eaa1fu); SPILL(); f_6c9390(); if (g_unwind) return; RELOAD();
/* 8eaa1f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* 8eaa20: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8eaa40(void) {
  LOAD_REGS();
L_8eaa40: /* 8eaa40: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8eaa41: mov ebp, esp */
  ebp = esp;
/* 8eaa43: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8eaa45: push 0x9d8db0 */
  { uint32_t v = 0x9d8db0u; esp -= 4; W32(esp, v); }
/* 8eaa4a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8eaa50: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eaa51: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8eaa58: sub esp, 0xa4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8eaa5e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8eaa5f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8eaa60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8eaa61: mov ebx, ecx */
  ebx = ecx;
/* 8eaa63: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8eaa65: xor edi, edi */
  edi = 0;
/* 8eaa67: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8eaa6a: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 8eaa6d: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8eaa70: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x8eaa76u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eaa76: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8eaa79: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8eaa7b: mov esi, eax */
  esi = eax;
/* 8eaa7d: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 8eaa80: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eaa82: mov dword ptr [ebp - 0x30], esi */
  W32((uint32_t)(ebp + 0xffffffd0u), esi);
/* 8eaa85: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 8eaa88: jle 0x8eaa8d */
  if ((zf || sf != of)) goto L_8eaa8d;
L_8eaa8a: /* 8eaa8a: mov dword ptr [ebp - 0x4c], eax */
  W32((uint32_t)(ebp + 0xffffffb4u), eax);
L_8eaa8d: /* 8eaa8d: cmp dword ptr [ebx + 0x80], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x80u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8eaa93: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8eaa96: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8eaa99: mov dword ptr [ebp - 0x2c], 1 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x1u);
/* 8eaaa0: je 0x8eaab8 */
  if (zf) goto L_8eaab8;
L_8eaaa2: /* 8eaaa2: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8eaaa4: mov ecx, ebx */
  ecx = ebx;
/* 8eaaa6: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x8eaaacu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eaaac: cmp dword ptr [ebx + 0xa0], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xa0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8eaab2: je 0x8eab58 */
  if (zf) goto L_8eab58;
L_8eaab8: /* 8eaab8: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8eaaba: mov ecx, ebx */
  ecx = ebx;
/* 8eaabc: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x8eaac2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eaac2: cmp dword ptr [ebx + 0xa0], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xa0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8eaac8: je 0x8eab01 */
  if (zf) goto L_8eab01;
L_8eaaca: /* 8eaaca: lea ecx, [ebx + 0x7c] */
  ecx = (uint32_t)(ebx + 0x7cu);
/* 8eaacd: xor eax, eax */
  eax = 0;
/* 8eaacf: nop  */
L_8eaad0: /* 8eaad0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eaad3: jge 0x8eaad8 */
  if ((sf == of)) goto L_8eaad8;
L_8eaad5: /* 8eaad5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8eaad6: jmp 0x8eaad0 */
  goto L_8eaad0;
L_8eaad8: /* 8eaad8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8eaad9: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8eaadb: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8eaae1u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8eaae1: lea ecx, [ebx + 0x88] */
  ecx = (uint32_t)(ebx + 0x88u);
/* 8eaae7: xor eax, eax */
  eax = 0;
/* 8eaae9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8eaaf0: /* 8eaaf0: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eaaf3: jge 0x8eaaf8 */
  if ((sf == of)) goto L_8eaaf8;
L_8eaaf5: /* 8eaaf5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8eaaf6: jmp 0x8eaaf0 */
  goto L_8eaaf0;
L_8eaaf8: /* 8eaaf8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8eaaf9: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8eaafb: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8eab01u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
L_8eab01: /* 8eab01: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 8eab04: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8eab06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eab07: lea ecx, [ebx + 0x7c] */
  ecx = (uint32_t)(ebx + 0x7cu);
/* 8eab0a: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8eab10u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8eab10: mov eax, dword ptr [esi + 0x5c] */
  eax = R32((uint32_t)(esi + 0x5cu));
/* 8eab13: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8eab15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eab16: lea ecx, [ebx + 0x88] */
  ecx = (uint32_t)(ebx + 0x88u);
/* 8eab1c: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8eab22u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8eab22: mov eax, dword ptr [ebx] */
  eax = R32((uint32_t)(ebx));
/* 8eab24: mov ecx, ebx */
  ecx = ebx;
/* 8eab26: mov dword ptr [ebp - 0x2c], edi */
  W32((uint32_t)(ebp + 0xffffffd4u), edi);
/* 8eab29: mov dword ptr [ebx + 0xa4], 0x3f800000 */
  W32((uint32_t)(ebx + 0xa4u), 0x3f800000u);
/* 8eab33: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x8eab39u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eab39: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8eab3a: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8eab3d: mov dword ptr [ebx + 0xa0], eax */
  W32((uint32_t)(ebx + 0xa0u), eax);
/* 8eab43: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8eab49u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8eab49: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8eab4c: mov dword ptr [ebx + 0x98], ecx */
  W32((uint32_t)(ebx + 0x98u), ecx);
/* 8eab52: mov dword ptr [ebx + 0x94], edi */
  W32((uint32_t)(ebx + 0x94u), edi);
L_8eab58: /* 8eab58: mov edx, dword ptr [ebx + 0xb4] */
  edx = R32((uint32_t)(ebx + 0xb4u));
/* 8eab5e: mov esi, dword ptr [ebx + 0x7c] */
  esi = R32((uint32_t)(ebx + 0x7cu));
/* 8eab61: mov edi, dword ptr [ebx + 0x88] */
  edi = R32((uint32_t)(ebx + 0x88u));
/* 8eab67: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8eab68: mov ecx, ebx */
  ecx = ebx;
/* 8eab6a: call 0x6ccf90 */
  esp -= 4; W32(esp, 0x8eab6fu); SPILL(); f_6ccf90(); if (g_unwind) return; RELOAD();
/* 8eab6f: fld dword ptr [ebx + 0xbc] */
  { double v = F32((uint32_t)(ebx + 0xbcu)); FPUSH(v); }
/* 8eab75: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8eab7b: mov edx, eax */
  edx = eax;
/* 8eab7d: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8eab80: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8eab82: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8eab85: je 0x8eaf69 */
  if (zf) goto L_8eaf69;
L_8eab8b: /* 8eab8b: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8eab8e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8eab90: je 0x8eaf69 */
  if (zf) goto L_8eaf69;
L_8eab96: /* 8eab96: mov ecx, dword ptr [ebx + 0x9c] */
  ecx = R32((uint32_t)(ebx + 0x9cu));
/* 8eab9c: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8eab9f: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eaba1: jle 0x8eaba8 */
  if ((zf || sf != of)) goto L_8eaba8;
L_8eaba3: /* 8eaba3: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 8eaba6: mov eax, ecx */
  eax = ecx;
L_8eaba8: /* 8eaba8: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8eabaa: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8eabad: mov dword ptr [ebx + 0x9c], eax */
  W32((uint32_t)(ebx + 0x9cu), eax);
/* 8eabb3: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8eabb5: je 0x8eabd2 */
  if (zf) goto L_8eabd2;
L_8eabb7: /* 8eabb7: fild dword ptr [edx + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 8eabba: mov edx, dword ptr [edx + 0x10] */
  edx = R32((uint32_t)(edx + 0x10u));
/* 8eabbd: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8eabc0: imul edx, dword ptr [eax + 0x5c] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(eax + 0x5cu)));
  edx = (uint32_t)r;
  }
/* 8eabc4: fdivr dword ptr [0xa08220] */
  ST0 = (F32((uint32_t)(0xa08220u))) / ST0;
/* 8eabca: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 8eabcd: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8eabd0: jmp 0x8eabe0 */
  goto L_8eabe0;
L_8eabd2: /* 8eabd2: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 8eabd9: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
L_8eabe0: /* 8eabe0: fld dword ptr [ebx + 0xbc] */
  { double v = F32((uint32_t)(ebx + 0xbcu)); FPUSH(v); }
/* 8eabe6: lea eax, [ebx + 0xb4] */
  eax = (uint32_t)(ebx + 0xb4u);
/* 8eabec: fdiv dword ptr [ebx + 0x94] */
  ST0 = ST0 / (F32((uint32_t)(ebx + 0x94u)));
/* 8eabf2: lea ecx, [ebx + 0x98] */
  ecx = (uint32_t)(ebx + 0x98u);
/* 8eabf8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eabf9: fsubr dword ptr [0x9f48a0] */
  ST0 = (F32((uint32_t)(0x9f48a0u))) - ST0;
/* 8eabff: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8eac02: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x8eac08u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 8eac08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8eac0a: je 0x8eac16 */
  if (zf) goto L_8eac16;
L_8eac0c: /* 8eac0c: mov dword ptr [ebx + 0xa4], 0 */
  W32((uint32_t)(ebx + 0xa4u), 0x0u);
L_8eac16: /* 8eac16: lea eax, [ebx + 0xb4] */
  eax = (uint32_t)(ebx + 0xb4u);
/* 8eac1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eac1d: lea ecx, [ebx + 0x98] */
  ecx = (uint32_t)(ebx + 0x98u);
/* 8eac23: call dword ptr [0xcfa558] */
  esp -= 4; W32(esp, 0x8eac29u); SPILL(); f_4e27ca(); if (g_unwind) return; /* Core!??9FName@@QBEHABV0@@Z */ RELOAD();
/* 8eac29: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8eac2b: jne 0x8eac4d */
  if (!zf) goto L_8eac4d;
L_8eac2d: /* 8eac2d: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8eac30: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8eac36: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8eac38: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8eac3b: jnp 0x8eac4d */
  if (!pf) goto L_8eac4d;
L_8eac3d: /* 8eac3d: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8eac40: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 8eac46: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8eac48: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8eac4b: jne 0x8eac69 */
  if (!zf) goto L_8eac69;
L_8eac4d: /* 8eac4d: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8eac50: mov edx, dword ptr [ebx + 0xb4] */
  edx = R32((uint32_t)(ebx + 0xb4u));
/* 8eac56: mov dword ptr [ebx + 0x94], ecx */
  W32((uint32_t)(ebx + 0x94u), ecx);
/* 8eac5c: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8eac63: mov dword ptr [ebx + 0x98], edx */
  W32((uint32_t)(ebx + 0x98u), edx);
L_8eac69: /* 8eac69: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8eac6f: fsub dword ptr [ebx + 0xa4] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0xa4u)));
/* 8eac75: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8eac78: fadd dword ptr [ebx + 0xa4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0xa4u)));
/* 8eac7e: fst dword ptr [ebx + 0xa4] */
  WF32((uint32_t)(ebx + 0xa4u), ST0);
/* 8eac84: fcomp dword ptr [0xa1e13c] */
  fpu_com(ST0, F32((uint32_t)(0xa1e13cu)));
  FPOP();
/* 8eac8a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8eac8c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8eac8f: jne 0x8eadb6 */
  if (!zf) goto L_8eadb6;
L_8eac95: /* 8eac95: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8eac98: cmp eax, dword ptr [ebp - 0x4c] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffb4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eac9b: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8eaca2: jge 0x8eaf23 */
  if ((sf == of)) goto L_8eaf23;
L_8eaca8: /* 8eaca8: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8eacab: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8eacae: mov eax, dword ptr [edx + 0x60] */
  eax = R32((uint32_t)(edx + 0x60u));
/* 8eacb1: mov edx, dword ptr [edx + 0x140] */
  edx = R32((uint32_t)(edx + 0x140u));
/* 8eacb7: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8eacba: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8eacbc: add edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8eacbe: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8eacc1: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8eacc4: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
L_8eacc7: /* 8eacc7: mov edx, dword ptr [ebp - 0x4c] */
  edx = R32((uint32_t)(ebp + 0xffffffb4u));
/* 8eacca: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eaccc: jge 0x8eada8 */
  if ((sf == of)) goto L_8eada8;
L_8eacd2: /* 8eacd2: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 8eacd5: mov edx, eax */
  edx = eax;
/* 8eacd7: shl edx, 0x15 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8eacda: sar edx, 0x15 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 21;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8eacdd: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8eace0: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8eace3: mov edx, eax */
  edx = eax;
/* 8eace5: shl edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8eace8: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 8eaceb: mov ebx, dword ptr [ebp - 0x48] */
  ebx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8eacee: sar edx, 0x15 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 21;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8eacf1: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8eacf4: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8eacf7: sar eax, 0x16 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 22;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8eacfa: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8eacfd: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 8ead00: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8ead03: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8ead06: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8ead09: lea eax, [edx + esi] */
  eax = (uint32_t)(edx + esi);
/* 8ead0c: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 8ead0e: mov ebx, dword ptr [ebp - 0x44] */
  ebx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8ead11: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 8ead14: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8ead17: mov ebx, dword ptr [ebp - 0x40] */
  ebx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8ead1a: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 8ead1d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ead20: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 8ead23: mov ebx, eax */
  ebx = eax;
/* 8ead25: and ebx, 0x3ff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8ead2b: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8ead2d: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 8ead30: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8ead33: jge 0x8ead3b */
  if ((sf == of)) goto L_8ead3b;
L_8ead35: /* 8ead35: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_8ead3b: /* 8ead3b: fsub dword ptr [0xa16934] */
  ST0 = ST0 - (F32((uint32_t)(0xa16934u)));
/* 8ead41: mov ebx, eax */
  ebx = eax;
/* 8ead43: shr ebx, 0xa */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 8ead46: and ebx, 0x3ff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8ead4c: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8ead4e: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8ead51: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 8ead54: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8ead57: jge 0x8ead5f */
  if ((sf == of)) goto L_8ead5f;
L_8ead59: /* 8ead59: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_8ead5f: /* 8ead5f: fsub dword ptr [0xa16934] */
  ST0 = ST0 - (F32((uint32_t)(0xa16934u)));
/* 8ead65: shr eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8ead68: and eax, 0x3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8ead6d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8ead6f: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8ead72: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8ead75: fild dword ptr [ebp - 0x20] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 8ead78: jge 0x8ead80 */
  if ((sf == of)) goto L_8ead80;
L_8ead7a: /* 8ead7a: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_8ead80: /* 8ead80: fsub dword ptr [0xa16934] */
  ST0 = ST0 - (F32((uint32_t)(0xa16934u)));
/* 8ead86: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8ead89: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8ead8c: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8ead8e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8ead90: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8ead93: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8ead96: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8ead99: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8ead9c: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8ead9f: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8eada2: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8eada3: jmp 0x8eacc7 */
  goto L_8eacc7;
L_8eada8: /* 8eada8: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8eadab: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8eadad: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 8eadb0: mov dword ptr [ebx + 0x9c], edx */
  W32((uint32_t)(ebx + 0x9cu), edx);
L_8eadb6: /* 8eadb6: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8eadb9: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8eadbf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8eadc1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8eadc4: jnp 0x8eaf23 */
  if (!pf) goto L_8eaf23;
L_8eadca: /* 8eadca: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8eadcd: mov eax, dword ptr [ecx + 0x60] */
  eax = R32((uint32_t)(ecx + 0x60u));
/* 8eadd0: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8eadd3: mov ecx, dword ptr [ecx + 0x140] */
  ecx = R32((uint32_t)(ecx + 0x140u));
/* 8eadd9: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8eaddc: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8eadde: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8eade0: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8eade3: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8eade6: xor edx, edx */
  edx = 0;
/* 8eade8: jmp 0x8eadf0 */
  goto L_8eadf0;
L_8eadf0: /* 8eadf0: cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eadf3: jge 0x8eaf23 */
  if ((sf == of)) goto L_8eaf23;
L_8eadf9: /* 8eadf9: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 8eadfc: mov ebx, eax */
  ebx = eax;
/* 8eadfe: shl ebx, 0x15 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 8eae01: sar ebx, 0x15 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 21;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 8eae04: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8eae07: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8eae0a: mov ebx, eax */
  ebx = eax;
/* 8eae0c: shl ebx, 0xa */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 8eae0f: sar ebx, 0x15 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 21;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 8eae12: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8eae15: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8eae18: sar eax, 0x16 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 22;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8eae1b: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8eae1e: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8eae21: lea eax, [edx + edx*2] */
  eax = (uint32_t)(edx + edx*2);
/* 8eae24: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8eae27: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 8eae2a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8eae2c: fsub dword ptr [eax + esi] */
  ST0 = ST0 - (F32((uint32_t)(eax + esi)));
/* 8eae2f: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 8eae32: fsub dword ptr [eax + esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + esi + 0x4u)));
/* 8eae36: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 8eae39: fsub dword ptr [eax + esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + esi + 0x8u)));
/* 8eae3d: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 8eae40: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8eae43: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 8eae46: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8eae48: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8eae4b: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 8eae4e: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8eae51: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 8eae54: fadd dword ptr [eax + esi] */
  ST0 = ST0 + (F32((uint32_t)(eax + esi)));
/* 8eae57: fstp dword ptr [eax + esi] */
  WF32((uint32_t)(eax + esi), ST0); FPOP();
/* 8eae5a: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 8eae5d: fadd dword ptr [eax + esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + esi + 0x4u)));
/* 8eae61: fstp dword ptr [eax + esi + 4] */
  WF32((uint32_t)(eax + esi + 0x4u), ST0); FPOP();
/* 8eae65: fadd dword ptr [eax + esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + esi + 0x8u)));
/* 8eae69: fstp dword ptr [eax + esi + 8] */
  WF32((uint32_t)(eax + esi + 0x8u), ST0); FPOP();
/* 8eae6d: mov ecx, dword ptr [ecx + edx*4] */
  ecx = R32((uint32_t)(ecx + edx*4));
/* 8eae70: mov ebx, ecx */
  ebx = ecx;
/* 8eae72: and ebx, 0x3ff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8eae78: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8eae7a: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8eae7d: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8eae80: jge 0x8eae88 */
  if ((sf == of)) goto L_8eae88;
L_8eae82: /* 8eae82: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_8eae88: /* 8eae88: fsub dword ptr [0xa16934] */
  ST0 = ST0 - (F32((uint32_t)(0xa16934u)));
/* 8eae8e: mov ebx, ecx */
  ebx = ecx;
/* 8eae90: shr ebx, 0xa */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 8eae93: and ebx, 0x3ff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8eae99: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8eae9b: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8eae9e: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8eaea1: jge 0x8eaea9 */
  if ((sf == of)) goto L_8eaea9;
L_8eaea3: /* 8eaea3: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_8eaea9: /* 8eaea9: fsub dword ptr [0xa16934] */
  ST0 = ST0 - (F32((uint32_t)(0xa16934u)));
/* 8eaeaf: shr ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8eaeb2: and ecx, 0x3ff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8eaeb8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8eaeba: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8eaebd: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8eaec0: jge 0x8eaec8 */
  if ((sf == of)) goto L_8eaec8;
L_8eaec2: /* 8eaec2: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_8eaec8: /* 8eaec8: fsub dword ptr [0xa16934] */
  ST0 = ST0 - (F32((uint32_t)(0xa16934u)));
/* 8eaece: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8eaed1: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8eaed4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8eaed5: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8eaed8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8eaeda: fsub dword ptr [eax + edi] */
  ST0 = ST0 - (F32((uint32_t)(eax + edi)));
/* 8eaedd: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 8eaee0: fsub dword ptr [eax + edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + edi + 0x4u)));
/* 8eaee4: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8eaee7: fsub dword ptr [eax + edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + edi + 0x8u)));
/* 8eaeeb: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 8eaeee: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8eaef1: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 8eaef4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8eaef6: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8eaef9: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 8eaefc: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8eaeff: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 8eaf02: fadd dword ptr [eax + edi] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi)));
/* 8eaf05: fstp dword ptr [eax + edi] */
  WF32((uint32_t)(eax + edi), ST0); FPOP();
/* 8eaf08: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 8eaf0b: fadd dword ptr [eax + edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi + 0x4u)));
/* 8eaf0f: fstp dword ptr [eax + edi + 4] */
  WF32((uint32_t)(eax + edi + 0x4u), ST0); FPOP();
/* 8eaf13: lea eax, [eax + edi + 8] */
  eax = (uint32_t)(eax + edi + 0x8u);
/* 8eaf17: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8eaf19: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8eaf1b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8eaf1e: jmp 0x8eadf0 */
  goto L_8eadf0;
L_8eaf23: /* 8eaf23: mov edx, dword ptr [ebx + 0xbc] */
  edx = R32((uint32_t)(ebx + 0xbcu));
/* 8eaf29: mov dword ptr [ebx + 0x94], edx */
  W32((uint32_t)(ebx + 0x94u), edx);
L_8eaf2f: /* 8eaf2f: cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8eaf33: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8eaf36: jne 0x8eb32f */
  if (!zf) goto L_8eb32f;
L_8eaf3c: /* 8eaf3c: xor eax, eax */
  eax = 0;
/* 8eaf3e: mov edi, edi */
  edi = edi;
L_8eaf40: /* 8eaf40: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8eaf43: cmp eax, dword ptr [edx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eaf45: jge 0x8eb3c2 */
  if ((sf == of)) goto L_8eb3c2;
L_8eaf4b: /* 8eaf4b: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8eaf4e: lea edx, [esi + edx*4] */
  edx = (uint32_t)(esi + edx*4);
/* 8eaf51: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 8eaf53: mov edi, ecx */
  edi = ecx;
/* 8eaf55: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 8eaf57: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 8eaf5a: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 8eaf5d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8eaf60: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 8eaf63: add ecx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8eaf66: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8eaf67: jmp 0x8eaf40 */
  goto L_8eaf40;
L_8eaf69: /* 8eaf69: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8eaf6c: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8eaf6f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8eaf71: xor ecx, ecx */
  ecx = 0;
/* 8eaf73: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8eaf75: mov dword ptr [ebx + 0x9c], eax */
  W32((uint32_t)(ebx + 0x9cu), eax);
/* 8eaf7b: je 0x8eb238 */
  if (zf) goto L_8eb238;
L_8eaf81: /* 8eaf81: fld dword ptr [ebx + 0xbc] */
  { double v = F32((uint32_t)(ebx + 0xbcu)); FPUSH(v); }
/* 8eaf87: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8eaf8d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8eaf8f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8eaf92: je 0x8eaf9c */
  if (zf) goto L_8eaf9c;
L_8eaf94: /* 8eaf94: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8eaf96: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
L_8eaf9c: /* 8eaf9c: fild dword ptr [edx + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(edx + 0x14u)); FPUSH(v); }
/* 8eaf9f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8eafa1: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8eafa4: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8eafa7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8eafa8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8eafaa: call dword ptr [0xcfa3dc] */
  esp -= 4; W32(esp, 0x8eafb0u); SPILL(); f_4e392c(); if (g_unwind) return; /* Core!?appFloor@@YAHM@Z */ RELOAD();
/* 8eafb0: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8eafb3: mov ebx, eax */
  ebx = eax;
/* 8eafb5: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8eafb8: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* 8eafbb: mov eax, dword ptr [eax + 0x10] */
  eax = R32((uint32_t)(eax + 0x10u));
/* 8eafbe: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8eafc1: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8eafc4: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8eafc7: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eafca: fsubr dword ptr [ebp - 0x24] */
  ST0 = (F32((uint32_t)(ebp + 0xffffffdcu))) - ST0;
/* 8eafcd: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8eafd0: mov eax, dword ptr [edx + 0x5c] */
  eax = R32((uint32_t)(edx + 0x5cu));
/* 8eafd3: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8eafd6: mov eax, ebx */
  eax = ebx;
/* 8eafd8: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8eafdb: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8eafdc: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 8eafdf: idiv ecx */
  { int32_t d = (int32_t)ecx; if (!d) d = (int32_t)guest_divzero(0x8eafdf);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8eafe1: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8eafe7: lea eax, [ebx + 1] */
  eax = (uint32_t)(ebx + 0x1u);
/* 8eafea: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8eafed: mov ecx, edx */
  ecx = edx;
/* 8eafef: add ecx, dword ptr [ebp - 0x24] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffdcu)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8eaff2: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* 8eaff3: imul ecx, dword ptr [ebp - 0x18] */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  ecx = (uint32_t)r;
  }
/* 8eaff7: idiv dword ptr [ebp - 0x14] */
  { int32_t d = (int32_t)R32((uint32_t)(ebp + 0xffffffecu)); if (!d) d = (int32_t)guest_divzero(0x8eaff7);
  int64_t n = (int64_t)(((uint64_t)edx << 32) | eax);
  if (d == -1) { eax = (uint32_t)(0 - (uint64_t)n); edx = 0; } else { eax = (uint32_t)(int32_t)(n / d); edx = (uint32_t)(int32_t)(n % d); } }
/* 8eaffa: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8eaffd: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8eafff: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8eb001: imul edx, dword ptr [ebx + 0x5c] */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(R32((uint32_t)(ebx + 0x5cu)));
  edx = (uint32_t)r;
  }
/* 8eb005: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8eb008: jnp 0x8eb23b */
  if (!pf) goto L_8eb23b;
L_8eb00e: /* 8eb00e: mov eax, dword ptr [ebx + 0x60] */
  eax = R32((uint32_t)(ebx + 0x60u));
/* 8eb011: lea eax, [eax + ecx*4] */
  eax = (uint32_t)(eax + ecx*4);
/* 8eb014: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8eb017: mov eax, dword ptr [ebx + 0x60] */
  eax = R32((uint32_t)(ebx + 0x60u));
/* 8eb01a: mov ebx, dword ptr [ebx + 0x140] */
  ebx = R32((uint32_t)(ebx + 0x140u));
/* 8eb020: lea eax, [eax + edx*4] */
  eax = (uint32_t)(eax + edx*4);
/* 8eb023: lea ecx, [ebx + ecx*4] */
  ecx = (uint32_t)(ebx + ecx*4);
/* 8eb026: lea edx, [ebx + edx*4] */
  edx = (uint32_t)(ebx + edx*4);
/* 8eb029: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8eb02c: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 8eb02f: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 8eb032: xor eax, eax */
  eax = 0;
L_8eb034: /* 8eb034: cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eb037: jge 0x8eaf2f */
  if ((sf == of)) goto L_8eaf2f;
L_8eb03d: /* 8eb03d: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8eb040: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 8eb043: mov edx, ecx */
  edx = ecx;
/* 8eb045: shl edx, 0x15 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8eb048: sar edx, 0x15 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 21;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8eb04b: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8eb04e: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8eb051: mov edx, ecx */
  edx = ecx;
/* 8eb053: shl edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8eb056: sar edx, 0x15 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 21;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8eb059: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8eb05c: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8eb05f: sar ecx, 0x16 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 22;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 8eb062: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8eb065: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8eb068: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8eb06b: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 8eb06e: mov edx, ecx */
  edx = ecx;
/* 8eb070: shl edx, 0x15 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8eb073: sar edx, 0x15 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 21;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8eb076: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8eb079: mov edx, ecx */
  edx = ecx;
/* 8eb07b: shl edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8eb07e: sar edx, 0x15 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 21;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8eb081: sar ecx, 0x16 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 22;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 8eb084: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 8eb087: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8eb08a: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8eb08d: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8eb090: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8eb093: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8eb096: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8eb099: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8eb09c: lea ecx, [edx + esi] */
  ecx = (uint32_t)(edx + esi);
/* 8eb09f: fstp dword ptr [ebp - 0x84] */
  WF32((uint32_t)(ebp + 0xffffff7cu), ST0); FPOP();
/* 8eb0a5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8eb0a7: fsub st(3) */
  ST0 = ST0 - STI(3);
/* 8eb0a9: fstp dword ptr [ebp - 0xa4] */
  WF32((uint32_t)(ebp + 0xffffff5cu), ST0); FPOP();
/* 8eb0af: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8eb0b1: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 8eb0b7: fsub dword ptr [ebp - 0x6c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff94u)));
/* 8eb0ba: fld dword ptr [ebp - 0xa4] */
  { double v = F32((uint32_t)(ebp + 0xffffff5cu)); FPUSH(v); }
/* 8eb0c0: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8eb0c3: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8eb0c6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8eb0c8: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8eb0cb: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8eb0ce: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8eb0d1: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8eb0d4: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8eb0d7: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 8eb0d9: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 8eb0dc: mov ebx, dword ptr [ebp - 0x48] */
  ebx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8eb0df: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8eb0e2: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8eb0e4: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8eb0e6: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8eb0e9: mov ebx, dword ptr [ebp - 0x44] */
  ebx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8eb0ec: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8eb0ee: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8eb0f1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8eb0f3: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8eb0f6: fadd dword ptr [ebp - 0x6c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff94u)));
/* 8eb0f9: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8eb0fc: mov ebx, dword ptr [ebp - 0x40] */
  ebx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8eb0ff: mov dword ptr [ecx + 8], ebx */
  W32((uint32_t)(ecx + 0x8u), ebx);
/* 8eb102: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8eb105: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 8eb108: mov ebx, ecx */
  ebx = ecx;
/* 8eb10a: and ebx, 0x3ff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8eb110: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8eb113: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8eb115: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8eb118: jge 0x8eb120 */
  if ((sf == of)) goto L_8eb120;
L_8eb11a: /* 8eb11a: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_8eb120: /* 8eb120: fsub dword ptr [0xa16934] */
  ST0 = ST0 - (F32((uint32_t)(0xa16934u)));
/* 8eb126: mov ebx, ecx */
  ebx = ecx;
/* 8eb128: shr ebx, 0xa */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 8eb12b: and ebx, 0x3ff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8eb131: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8eb133: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8eb136: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8eb139: jge 0x8eb141 */
  if ((sf == of)) goto L_8eb141;
L_8eb13b: /* 8eb13b: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_8eb141: /* 8eb141: fsub dword ptr [0xa16934] */
  ST0 = ST0 - (F32((uint32_t)(0xa16934u)));
/* 8eb147: shr ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8eb14a: and ecx, 0x3ff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8eb150: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8eb152: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8eb155: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8eb158: jge 0x8eb160 */
  if ((sf == of)) goto L_8eb160;
L_8eb15a: /* 8eb15a: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_8eb160: /* 8eb160: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8eb163: fsub dword ptr [0xa16934] */
  ST0 = ST0 - (F32((uint32_t)(0xa16934u)));
/* 8eb169: mov ecx, dword ptr [ecx + eax*4] */
  ecx = R32((uint32_t)(ecx + eax*4));
/* 8eb16c: mov ebx, ecx */
  ebx = ecx;
/* 8eb16e: and ebx, 0x3ff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8eb174: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8eb176: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 8eb179: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8eb17c: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8eb17f: jge 0x8eb187 */
  if ((sf == of)) goto L_8eb187;
L_8eb181: /* 8eb181: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_8eb187: /* 8eb187: fsub dword ptr [0xa16934] */
  ST0 = ST0 - (F32((uint32_t)(0xa16934u)));
/* 8eb18d: mov ebx, ecx */
  ebx = ecx;
/* 8eb18f: shr ebx, 0xa */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 8eb192: and ebx, 0x3ff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8eb198: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8eb19a: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8eb19d: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8eb1a0: jge 0x8eb1a8 */
  if ((sf == of)) goto L_8eb1a8;
L_8eb1a2: /* 8eb1a2: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_8eb1a8: /* 8eb1a8: fsub dword ptr [0xa16934] */
  ST0 = ST0 - (F32((uint32_t)(0xa16934u)));
/* 8eb1ae: shr ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8eb1b1: and ecx, 0x3ff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8eb1b7: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8eb1b9: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8eb1bc: fild dword ptr [ebp - 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8eb1bf: jge 0x8eb1c7 */
  if ((sf == of)) goto L_8eb1c7;
L_8eb1c1: /* 8eb1c1: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_8eb1c7: /* 8eb1c7: fsub dword ptr [0xa16934] */
  ST0 = ST0 - (F32((uint32_t)(0xa16934u)));
/* 8eb1cd: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8eb1cf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8eb1d0: fstp dword ptr [ebp - 0x90] */
  WF32((uint32_t)(ebp + 0xffffff70u), ST0); FPOP();
/* 8eb1d6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8eb1d8: fsub st(3) */
  ST0 = ST0 - STI(3);
/* 8eb1da: fstp dword ptr [ebp - 0xb0] */
  WF32((uint32_t)(ebp + 0xffffff50u), ST0); FPOP();
/* 8eb1e0: fsub st(1) */
  ST0 = ST0 - STI(1);
/* 8eb1e2: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 8eb1e8: fsub dword ptr [ebp - 0x78] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff88u)));
/* 8eb1eb: fld dword ptr [ebp - 0xb0] */
  { double v = F32((uint32_t)(ebp + 0xffffff50u)); FPUSH(v); }
/* 8eb1f1: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8eb1f4: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 8eb1f7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8eb1f9: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8eb1fc: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 8eb1ff: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8eb202: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 8eb205: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 8eb208: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 8eb20a: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 8eb20d: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8eb210: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 8eb213: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8eb215: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8eb217: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 8eb21a: mov ecx, dword ptr [ebp - 0x54] */
  ecx = R32((uint32_t)(ebp + 0xffffffacu));
/* 8eb21d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8eb21f: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8eb222: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8eb224: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 8eb227: fadd dword ptr [ebp - 0x78] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff88u)));
/* 8eb22a: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8eb22d: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 8eb230: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8eb233: jmp 0x8eb034 */
  goto L_8eb034;
L_8eb238: /* 8eb238: mov ebx, dword ptr [ebp - 0x30] */
  ebx = R32((uint32_t)(ebp + 0xffffffd0u));
L_8eb23b: /* 8eb23b: mov eax, dword ptr [ebx + 0x60] */
  eax = R32((uint32_t)(ebx + 0x60u));
/* 8eb23e: mov ebx, dword ptr [ebx + 0x140] */
  ebx = R32((uint32_t)(ebx + 0x140u));
/* 8eb244: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8eb247: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8eb249: add ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8eb24b: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8eb24e: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* 8eb251: xor ecx, ecx */
  ecx = 0;
L_8eb253: /* 8eb253: cmp ecx, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eb256: jge 0x8eaf2f */
  if ((sf == of)) goto L_8eaf2f;
L_8eb25c: /* 8eb25c: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 8eb25f: mov edx, eax */
  edx = eax;
/* 8eb261: shl edx, 0x15 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8eb264: sar edx, 0x15 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 21;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8eb267: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8eb26a: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8eb26d: mov edx, eax */
  edx = eax;
/* 8eb26f: shl edx, 0xa */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8eb272: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 8eb275: mov ebx, dword ptr [ebp - 0x3c] */
  ebx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8eb278: sar edx, 0x15 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 21;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8eb27b: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8eb27e: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8eb281: sar eax, 0x16 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 22;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8eb284: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8eb287: lea edx, [ecx + ecx*2] */
  edx = (uint32_t)(ecx + ecx*2);
/* 8eb28a: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 8eb28d: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 8eb290: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8eb293: lea eax, [edx + esi] */
  eax = (uint32_t)(edx + esi);
/* 8eb296: mov dword ptr [eax], ebx */
  W32((uint32_t)(eax), ebx);
/* 8eb298: mov ebx, dword ptr [ebp - 0x38] */
  ebx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8eb29b: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 8eb29e: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8eb2a1: mov ebx, dword ptr [ebp - 0x34] */
  ebx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8eb2a4: mov dword ptr [eax + 8], ebx */
  W32((uint32_t)(eax + 0x8u), ebx);
/* 8eb2a7: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8eb2aa: mov eax, dword ptr [eax + ecx*4] */
  eax = R32((uint32_t)(eax + ecx*4));
/* 8eb2ad: mov ebx, eax */
  ebx = eax;
/* 8eb2af: and ebx, 0x3ff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8eb2b5: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8eb2b7: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8eb2ba: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8eb2bd: jge 0x8eb2c5 */
  if ((sf == of)) goto L_8eb2c5;
L_8eb2bf: /* 8eb2bf: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_8eb2c5: /* 8eb2c5: fsub dword ptr [0xa16934] */
  ST0 = ST0 - (F32((uint32_t)(0xa16934u)));
/* 8eb2cb: mov ebx, eax */
  ebx = eax;
/* 8eb2cd: shr ebx, 0xa */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 8eb2d0: and ebx, 0x3ff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8eb2d6: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8eb2d8: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 8eb2db: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8eb2de: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8eb2e1: jge 0x8eb2e9 */
  if ((sf == of)) goto L_8eb2e9;
L_8eb2e3: /* 8eb2e3: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_8eb2e9: /* 8eb2e9: fsub dword ptr [0xa16934] */
  ST0 = ST0 - (F32((uint32_t)(0xa16934u)));
/* 8eb2ef: shr eax, 0x14 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* 8eb2f2: and eax, 0x3ff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* 8eb2f7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8eb2f9: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 8eb2fc: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8eb2ff: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8eb302: jge 0x8eb30a */
  if ((sf == of)) goto L_8eb30a;
L_8eb304: /* 8eb304: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_8eb30a: /* 8eb30a: fsub dword ptr [0xa16934] */
  ST0 = ST0 - (F32((uint32_t)(0xa16934u)));
/* 8eb310: mov eax, dword ptr [ebp - 0x48] */
  eax = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8eb313: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8eb315: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8eb317: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8eb31a: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8eb31d: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8eb320: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8eb323: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8eb326: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8eb329: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 8eb32a: jmp 0x8eb253 */
  goto L_8eb253;
L_8eb32f: /* 8eb32f: xor edx, edx */
  edx = 0;
L_8eb331: /* 8eb331: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8eb334: cmp edx, dword ptr [eax + 0xc4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xc4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eb33a: mov dword ptr [ebp + 0x18], edx */
  W32((uint32_t)(ebp + 0x18u), edx);
/* 8eb33d: jge 0x8eb3c2 */
  if ((sf == of)) goto L_8eb3c2;
L_8eb343: /* 8eb343: mov eax, dword ptr [eax + 0xc0] */
  eax = R32((uint32_t)(eax + 0xc0u));
/* 8eb349: lea ebx, [edx + edx*2] */
  ebx = (uint32_t)(edx + edx*2);
/* 8eb34c: movzx eax, word ptr [eax + ebx*4] */
  eax = (uint32_t)(R16((uint32_t)(eax + ebx*4)));
/* 8eb350: cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eb353: jge 0x8eb389 */
  if ((sf == of)) goto L_8eb389;
L_8eb355: /* 8eb355: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8eb358: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8eb35b: lea edx, [eax + esi] */
  edx = (uint32_t)(eax + esi);
/* 8eb35e: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 8eb360: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8eb362: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 8eb365: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8eb368: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8eb36b: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8eb36e: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8eb371: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8eb373: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8eb375: lea edx, [ecx + 0xc] */
  edx = (uint32_t)(ecx + 0xcu);
/* 8eb378: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 8eb37a: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8eb37d: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 8eb380: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8eb383: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8eb386: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
L_8eb389: /* 8eb389: add ecx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8eb38c: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 8eb38f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8eb390: jmp 0x8eb331 */
  goto L_8eb331;
L_8eb3c2: /* 8eb3c2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8eb3c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8eb3c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8eb3c7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8eb3ce: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8eb3cf: mov esp, ebp */
  esp = ebp;
/* 8eb3d1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8eb3d2: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_8eadea(void) {
  LOAD_REGS();
L_8eadea: /* 8eadea: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8eadf0: /* 8eadf0: cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eadf3: jge 0x8eaf23 */
  if ((sf == of)) goto L_8eaf23;
L_8eadf9: /* 8eadf9: mov eax, dword ptr [eax + edx*4] */
  eax = R32((uint32_t)(eax + edx*4));
/* 8eadfc: mov ebx, eax */
  ebx = eax;
/* 8eadfe: shl ebx, 0x15 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 8eae01: sar ebx, 0x15 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 21;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 8eae04: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8eae07: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8eae0a: mov ebx, eax */
  ebx = eax;
/* 8eae0c: shl ebx, 0xa */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 8eae0f: sar ebx, 0x15 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 21;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* 8eae12: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8eae15: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8eae18: sar eax, 0x16 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 22;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8eae1b: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8eae1e: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8eae21: lea eax, [edx + edx*2] */
  eax = (uint32_t)(edx + edx*2);
/* 8eae24: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8eae27: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 8eae2a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8eae2c: fsub dword ptr [eax + esi] */
  ST0 = ST0 - (F32((uint32_t)(eax + esi)));
/* 8eae2f: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 8eae32: fsub dword ptr [eax + esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + esi + 0x4u)));
/* 8eae36: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 8eae39: fsub dword ptr [eax + esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + esi + 0x8u)));
/* 8eae3d: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 8eae40: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8eae43: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 8eae46: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8eae48: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8eae4b: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 8eae4e: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8eae51: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 8eae54: fadd dword ptr [eax + esi] */
  ST0 = ST0 + (F32((uint32_t)(eax + esi)));
/* 8eae57: fstp dword ptr [eax + esi] */
  WF32((uint32_t)(eax + esi), ST0); FPOP();
/* 8eae5a: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 8eae5d: fadd dword ptr [eax + esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + esi + 0x4u)));
/* 8eae61: fstp dword ptr [eax + esi + 4] */
  WF32((uint32_t)(eax + esi + 0x4u), ST0); FPOP();
/* 8eae65: fadd dword ptr [eax + esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(eax + esi + 0x8u)));
/* 8eae69: fstp dword ptr [eax + esi + 8] */
  WF32((uint32_t)(eax + esi + 0x8u), ST0); FPOP();
/* 8eae6d: mov ecx, dword ptr [ecx + edx*4] */
  ecx = R32((uint32_t)(ecx + edx*4));
/* 8eae70: mov ebx, ecx */
  ebx = ecx;
/* 8eae72: and ebx, 0x3ff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8eae78: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8eae7a: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8eae7d: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8eae80: jge 0x8eae88 */
  if ((sf == of)) goto L_8eae88;
L_8eae82: /* 8eae82: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_8eae88: /* 8eae88: fsub dword ptr [0xa16934] */
  ST0 = ST0 - (F32((uint32_t)(0xa16934u)));
/* 8eae8e: mov ebx, ecx */
  ebx = ecx;
/* 8eae90: shr ebx, 0xa */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebx = r;
  }
/* 8eae93: and ebx, 0x3ff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 8eae99: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8eae9b: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8eae9e: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8eaea1: jge 0x8eaea9 */
  if ((sf == of)) goto L_8eaea9;
L_8eaea3: /* 8eaea3: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_8eaea9: /* 8eaea9: fsub dword ptr [0xa16934] */
  ST0 = ST0 - (F32((uint32_t)(0xa16934u)));
/* 8eaeaf: shr ecx, 0x14 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8eaeb2: and ecx, 0x3ff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* 8eaeb8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 8eaeba: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8eaebd: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8eaec0: jge 0x8eaec8 */
  if ((sf == of)) goto L_8eaec8;
L_8eaec2: /* 8eaec2: fadd dword ptr [0xa0e704] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e704u)));
L_8eaec8: /* 8eaec8: fsub dword ptr [0xa16934] */
  ST0 = ST0 - (F32((uint32_t)(0xa16934u)));
/* 8eaece: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8eaed1: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8eaed4: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8eaed5: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 8eaed8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8eaeda: fsub dword ptr [eax + edi] */
  ST0 = ST0 - (F32((uint32_t)(eax + edi)));
/* 8eaedd: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 8eaee0: fsub dword ptr [eax + edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + edi + 0x4u)));
/* 8eaee4: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8eaee7: fsub dword ptr [eax + edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + edi + 0x8u)));
/* 8eaeeb: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 8eaeee: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8eaef1: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 8eaef4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8eaef6: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8eaef9: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 8eaefc: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8eaeff: fld dword ptr [ebp - 0x64] */
  { double v = F32((uint32_t)(ebp + 0xffffff9cu)); FPUSH(v); }
/* 8eaf02: fadd dword ptr [eax + edi] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi)));
/* 8eaf05: fstp dword ptr [eax + edi] */
  WF32((uint32_t)(eax + edi), ST0); FPOP();
/* 8eaf08: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 8eaf0b: fadd dword ptr [eax + edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi + 0x4u)));
/* 8eaf0f: fstp dword ptr [eax + edi + 4] */
  WF32((uint32_t)(eax + edi + 0x4u), ST0); FPOP();
/* 8eaf13: lea eax, [eax + edi + 8] */
  eax = (uint32_t)(eax + edi + 0x8u);
/* 8eaf17: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 8eaf19: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8eaf1b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8eaf1e: jmp 0x8eadf0 */
  goto L_8eadf0;
L_8eaf23: /* 8eaf23: mov edx, dword ptr [ebx + 0xbc] */
  edx = R32((uint32_t)(ebx + 0xbcu));
/* 8eaf29: mov dword ptr [ebx + 0x94], edx */
  W32((uint32_t)(ebx + 0x94u), edx);
/* 8eaf2f: cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8eaf33: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8eaf36: jne 0x8eb32f */
  if (!zf) goto L_8eb32f;
L_8eaf3c: /* 8eaf3c: xor eax, eax */
  eax = 0;
/* 8eaf3e: mov edi, edi */
  edi = edi;
L_8eaf40: /* 8eaf40: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 8eaf43: cmp eax, dword ptr [edx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edx)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eaf45: jge 0x8eb3c2 */
  if ((sf == of)) goto L_8eb3c2;
L_8eaf4b: /* 8eaf4b: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8eaf4e: lea edx, [esi + edx*4] */
  edx = (uint32_t)(esi + edx*4);
/* 8eaf51: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 8eaf53: mov edi, ecx */
  edi = ecx;
/* 8eaf55: mov dword ptr [edi], ebx */
  W32((uint32_t)(edi), ebx);
/* 8eaf57: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 8eaf5a: mov dword ptr [edi + 4], ebx */
  W32((uint32_t)(edi + 0x4u), ebx);
/* 8eaf5d: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8eaf60: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 8eaf63: add ecx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8eaf66: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8eaf67: jmp 0x8eaf40 */
  goto L_8eaf40;
L_8eb32f: /* 8eb32f: xor edx, edx */
  edx = 0;
L_8eb331: /* 8eb331: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8eb334: cmp edx, dword ptr [eax + 0xc4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0xc4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eb33a: mov dword ptr [ebp + 0x18], edx */
  W32((uint32_t)(ebp + 0x18u), edx);
/* 8eb33d: jge 0x8eb3c2 */
  if ((sf == of)) goto L_8eb3c2;
L_8eb343: /* 8eb343: mov eax, dword ptr [eax + 0xc0] */
  eax = R32((uint32_t)(eax + 0xc0u));
/* 8eb349: lea ebx, [edx + edx*2] */
  ebx = (uint32_t)(edx + edx*2);
/* 8eb34c: movzx eax, word ptr [eax + ebx*4] */
  eax = (uint32_t)(R16((uint32_t)(eax + ebx*4)));
/* 8eb350: cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eb353: jge 0x8eb389 */
  if ((sf == of)) goto L_8eb389;
L_8eb355: /* 8eb355: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 8eb358: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8eb35b: lea edx, [eax + esi] */
  edx = (uint32_t)(eax + esi);
/* 8eb35e: mov ebx, dword ptr [edx] */
  ebx = R32((uint32_t)(edx));
/* 8eb360: mov dword ptr [ecx], ebx */
  W32((uint32_t)(ecx), ebx);
/* 8eb362: mov ebx, dword ptr [edx + 4] */
  ebx = R32((uint32_t)(edx + 0x4u));
/* 8eb365: mov dword ptr [ecx + 4], ebx */
  W32((uint32_t)(ecx + 0x4u), ebx);
/* 8eb368: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 8eb36b: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8eb36e: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8eb371: add eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8eb373: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 8eb375: lea edx, [ecx + 0xc] */
  edx = (uint32_t)(ecx + 0xcu);
/* 8eb378: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 8eb37a: mov ebx, dword ptr [eax + 4] */
  ebx = R32((uint32_t)(eax + 0x4u));
/* 8eb37d: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 8eb380: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8eb383: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8eb386: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
L_8eb389: /* 8eb389: add ecx, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8eb38c: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* 8eb38f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8eb390: jmp 0x8eb331 */
  goto L_8eb331;
L_8eb3c2: /* 8eb3c2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8eb3c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8eb3c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8eb3c7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8eb3ce: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8eb3cf: mov esp, ebp */
  esp = ebp;
/* 8eb3d1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8eb3d2: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_8eb392(void) {
  LOAD_REGS();
L_8eb392: /* 8eb392: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8eb395: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8eb39a: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* 8eb39d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8eb39e: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 8eb3a1: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8eb3a6u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8eb3a6(); return;
}

void f_8eb3a6(void) {
  LOAD_REGS();
L_8eb3a6: /* 8eb3a6: push 0xa1e0f8 */
  { uint32_t v = 0xa1e0f8u; esp -= 4; W32(esp, v); }
/* 8eb3ab: push 0xaee11c */
  { uint32_t v = 0xaee11cu; esp -= 4; W32(esp, v); }
/* 8eb3b0: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8eb3b6u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8eb3b6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eb3b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8eb3bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8eb3bd: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8eb3c2u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8eb3c2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8eb3c5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8eb3c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8eb3c7: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8eb3ce: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8eb3cf: mov esp, ebp */
  esp = ebp;
/* 8eb3d1: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8eb3d2: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_8eb650(void) {
  LOAD_REGS();
L_8eb650: /* 8eb650: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8eb651: mov ebp, esp */
  ebp = esp;
/* 8eb653: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8eb655: push 0x9d8dc0 */
  { uint32_t v = 0x9d8dc0u; esp -= 4; W32(esp, v); }
/* 8eb65a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8eb660: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eb661: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8eb668: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8eb66b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8eb66c: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8eb66f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8eb670: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8eb673: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8eb674: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8eb677: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8eb679: xor edi, edi */
  edi = 0;
/* 8eb67b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8eb67c: mov ecx, esi */
  ecx = esi;
/* 8eb67e: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8eb681: call dword ptr [0xcfa384] */
  esp -= 4; W32(esp, 0x8eb687u); SPILL(); f_4e44b2(); if (g_unwind) return; /* Core!?CountBytes@FArray@@QAEXAAVFArchive@@H@Z */ RELOAD();
/* 8eb687: mov ecx, ebx */
  ecx = ebx;
/* 8eb689: call dword ptr [0xcfa2bc] */
  esp -= 4; W32(esp, 0x8eb68fu); SPILL(); f_4e1c08(); if (g_unwind) return; /* Core!?IsLoading@FArchive@@QAEHXZ */ RELOAD();
/* 8eb68f: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8eb691: je 0x8eb757 */
  if (zf) goto L_8eb757;
L_8eb697: /* 8eb697: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* 8eb69a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eb69b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8eb69c: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8eb6a2u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8eb6a2: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8eb6a5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eb6a8: xor eax, eax */
  eax = 0;
/* 8eb6aa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8eb6b0: /* 8eb6b0: cmp eax, dword ptr [esi + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eb6b3: jge 0x8eb6b8 */
  if ((sf == of)) goto L_8eb6b8;
L_8eb6b5: /* 8eb6b5: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8eb6b6: jmp 0x8eb6b0 */
  goto L_8eb6b0;
L_8eb6b8: /* 8eb6b8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8eb6b9: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8eb6bb: mov ecx, esi */
  ecx = esi;
/* 8eb6bd: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8eb6c3u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8eb6c3: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8eb6c6: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
/* 8eb6cc: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8eb6d0: /* 8eb6d0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8eb6d3: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eb6d6: jge 0x8eb7e8 */
  if ((sf == of)) goto L_8eb7e8;
L_8eb6dc: /* 8eb6dc: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 8eb6de: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8eb6e0: mov ecx, esi */
  ecx = esi;
/* 8eb6e2: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8eb6e8u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8eb6e8: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 8eb6ea: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8eb6ed: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8eb6ef: je 0x8eb6fd */
  if (zf) goto L_8eb6fd;
L_8eb6f1: /* 8eb6f1: mov ecx, eax */
  ecx = eax;
/* 8eb6f3: call dword ptr [0xcfaac8] */
  esp -= 4; W32(esp, 0x8eb6f9u); SPILL(); f_4e2b35(); if (g_unwind) return; /* Core!??0FSphere@@QAE@XZ */ RELOAD();
/* 8eb6f9: mov esi, eax */
  esi = eax;
/* 8eb6fb: jmp 0x8eb6ff */
  goto L_8eb6ff;
L_8eb6fd: /* 8eb6fd: xor esi, esi */
  esi = 0;
L_8eb6ff: /* 8eb6ff: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8eb702: mov ecx, ebx */
  ecx = ebx;
/* 8eb704: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8eb70au); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8eb70a: cmp eax, 0x3d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eb70d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8eb70e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8eb70f: jg 0x8eb722 */
  if ((!zf && sf == of)) goto L_8eb722;
L_8eb711: /* 8eb711: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8eb713u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eb713: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eb716: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 8eb719: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8eb71a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eb71b: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8eb71du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eb71d: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8eb720: jmp 0x8eb73b */
  goto L_8eb73b;
L_8eb722: /* 8eb722: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8eb724u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eb724: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eb727: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8eb72a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8eb72b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eb72c: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8eb72eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eb72e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eb731: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 8eb734: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8eb735: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eb736: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8eb738u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eb738: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
L_8eb73b: /* 8eb73b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eb73e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8eb73f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eb740: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8eb742u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eb742: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8eb745: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8eb748: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 8eb74b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eb74e: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8eb74f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8eb752: jmp 0x8eb6d0 */
  goto L_8eb6d0;
L_8eb757: /* 8eb757: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 8eb75a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eb75b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8eb75c: call dword ptr [0xcfa1f0] */
  esp -= 4; W32(esp, 0x8eb762u); SPILL(); f_4e2f2c(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAVFCompactIndex@@@Z */ RELOAD();
/* 8eb762: mov edi, dword ptr [0xcfa1b4] */
  edi = R32((uint32_t)(0xcfa1b4u));
/* 8eb768: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eb76b: xor ebx, ebx */
  ebx = 0;
/* 8eb76d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8eb770: /* 8eb770: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8eb773: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eb775: lea eax, [esi + 4] */
  eax = (uint32_t)(esi + 0x4u);
/* 8eb778: jge 0x8eb7e5 */
  if ((sf == of)) goto L_8eb7e5;
L_8eb77a: /* 8eb77a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8eb77d: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8eb77f: mov esi, ebx */
  esi = ebx;
/* 8eb781: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8eb784: add esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8eb786: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8eb789: call dword ptr [0xcfa284] */
  esp -= 4; W32(esp, 0x8eb78fu); SPILL(); f_4e3143(); if (g_unwind) return; /* Core!?Ver@FArchive@@QAEHXZ */ RELOAD();
/* 8eb78f: cmp eax, 0x3d */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3du);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eb792: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8eb793: jg 0x8eb7b8 */
  if ((!zf && sf == of)) goto L_8eb7b8;
L_8eb795: /* 8eb795: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8eb798: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8eb799: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8eb79bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eb79b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eb79e: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 8eb7a1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8eb7a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eb7a3: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8eb7a5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eb7a5: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eb7a8: add esi, 8 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8eb7ab: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8eb7ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eb7ad: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8eb7afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eb7af: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8eb7b2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eb7b5: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8eb7b6: jmp 0x8eb770 */
  goto L_8eb770;
L_8eb7b8: /* 8eb7b8: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8eb7bb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eb7bc: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8eb7beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eb7be: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eb7c1: lea ecx, [esi + 4] */
  ecx = (uint32_t)(esi + 0x4u);
/* 8eb7c4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8eb7c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eb7c6: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8eb7c8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eb7c8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eb7cb: lea edx, [esi + 8] */
  edx = (uint32_t)(esi + 0x8u);
/* 8eb7ce: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8eb7cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eb7d0: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8eb7d2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eb7d2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eb7d5: add esi, 0xc */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8eb7d8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8eb7d9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eb7da: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8eb7dcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eb7dc: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8eb7df: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eb7e2: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8eb7e3: jmp 0x8eb770 */
  goto L_8eb770;
L_8eb7e5: /* 8eb7e5: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
L_8eb7e8: /* 8eb7e8: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8eb7eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8eb7ec: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8eb7ed: mov eax, ebx */
  eax = ebx;
/* 8eb7ef: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8eb7f6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8eb7f7: mov esp, ebp */
  esp = ebp;
/* 8eb7f9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8eb7fa: ret  */
  esp += 4; SPILL(); return;
}

void f_8eb7fb(void) {
  LOAD_REGS();
L_8eb7fb: /* 8eb7fb: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8eb7fe: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8eb803: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 8eb806: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8eb807: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8eb80a: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8eb80fu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8eb80f(); return;
}

void f_8eb80f(void) {
  LOAD_REGS();
L_8eb80f: /* 8eb80f: push 0xa1e140 */
  { uint32_t v = 0xa1e140u; esp -= 4; W32(esp, v); }
/* 8eb814: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8eb819: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8eb81fu); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8eb81f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eb822: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8eb824: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8eb826: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8eb82bu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8eb82b: guest_badaddr(0x8eb82b); return;
}

void f_8eb8b0(void) {
  LOAD_REGS();
L_8eb8b0: /* 8eb8b0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8eb8b1: mov ebp, esp */
  ebp = esp;
/* 8eb8b3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8eb8b5: push 0x9d8dd0 */
  { uint32_t v = 0x9d8dd0u; esp -= 4; W32(esp, v); }
/* 8eb8ba: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8eb8c0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eb8c1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8eb8c8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8eb8cb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8eb8cc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8eb8cd: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8eb8d0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8eb8d1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8eb8d4: mov edi, ecx */
  edi = ecx;
/* 8eb8d6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8eb8d7: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 8eb8da: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8eb8e1: call 0x6c86d9 */
  esp -= 4; W32(esp, 0x8eb8e6u); SPILL(); f_6c86d9(); if (g_unwind) return; RELOAD();
/* 8eb8e6: mov ecx, esi */
  ecx = esi;
/* 8eb8e8: call dword ptr [0xcfa42c] */
  esp -= 4; W32(esp, 0x8eb8eeu); SPILL(); f_4e4101(); if (g_unwind) return; /* Core!?IsPersistent@FArchive@@QAEHXZ */ RELOAD();
/* 8eb8ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8eb8f0: jne 0x8eb960 */
  if (!zf) goto L_8eb960;
L_8eb8f2: /* 8eb8f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8eb8f3: mov ecx, edi */
  ecx = edi;
/* 8eb8f5: call 0x6c86d9 */
  esp -= 4; W32(esp, 0x8eb8fau); SPILL(); f_6c86d9(); if (g_unwind) return; RELOAD();
/* 8eb8fa: lea eax, [edi + 0x7c] */
  eax = (uint32_t)(edi + 0x7cu);
/* 8eb8fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eb8fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8eb8ff: call 0x6c1505 */
  esp -= 4; W32(esp, 0x8eb904u); SPILL(); f_6c1505(); if (g_unwind) return; RELOAD();
/* 8eb904: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eb907: lea ecx, [edi + 0x88] */
  ecx = (uint32_t)(edi + 0x88u);
/* 8eb90d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8eb90e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8eb90f: call 0x6c1505 */
  esp -= 4; W32(esp, 0x8eb914u); SPILL(); f_6c1505(); if (g_unwind) return; RELOAD();
/* 8eb914: mov ebx, dword ptr [0xcfa1b4] */
  ebx = R32((uint32_t)(0xcfa1b4u));
/* 8eb91a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eb91d: lea edx, [edi + 0x94] */
  edx = (uint32_t)(edi + 0x94u);
/* 8eb923: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8eb924: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8eb925: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8eb927u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eb927: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8eb929: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eb92c: lea ecx, [edi + 0x98] */
  ecx = (uint32_t)(edi + 0x98u);
/* 8eb932: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8eb933: mov ecx, esi */
  ecx = esi;
/* 8eb935: call dword ptr [eax + 0x1c] */
  { uint32_t t = R32((uint32_t)(eax + 0x1cu)); esp -= 4; W32(esp, 0x8eb938u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eb938: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8eb93a: lea eax, [edi + 0xa0] */
  eax = (uint32_t)(edi + 0xa0u);
/* 8eb940: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eb941: mov ecx, esi */
  ecx = esi;
/* 8eb943: call dword ptr [edx + 0x18] */
  { uint32_t t = R32((uint32_t)(edx + 0x18u)); esp -= 4; W32(esp, 0x8eb946u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eb946: lea ecx, [edi + 0xa4] */
  ecx = (uint32_t)(edi + 0xa4u);
/* 8eb94c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8eb94d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8eb94e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8eb950u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eb950: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eb953: add edi, 0xa8 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8eb959: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8eb95a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8eb95b: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8eb95du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eb95d: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8eb960: /* 8eb960: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8eb963: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8eb964: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8eb965: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8eb96c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8eb96d: mov esp, ebp */
  esp = ebp;
/* 8eb96f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8eb970: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8eb973(void) {
  LOAD_REGS();
L_8eb973: /* 8eb973: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8eb976: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8eb97b: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8eb97e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eb97f: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8eb982: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8eb987u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8eb987(); return;
}

void f_8eb987(void) {
  LOAD_REGS();
L_8eb987: /* 8eb987: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 8eb98d: push 0xa1e158 */
  { uint32_t v = 0xa1e158u; esp -= 4; W32(esp, v); }
/* 8eb992: push 0xaede44 */
  { uint32_t v = 0xaede44u; esp -= 4; W32(esp, v); }
/* 8eb997: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8eb999u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eb999: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8eb99c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eb99f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8eb9a1: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8eb9a7u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8eb9a7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eb9a8: push 0xaede4c */
  { uint32_t v = 0xaede4cu; esp -= 4; W32(esp, v); }
/* 8eb9ad: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8eb9afu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eb9af: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eb9b2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8eb9b4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8eb9b6: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8eb9bbu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8eb9bb: guest_badaddr(0x8eb9bb); return;
}

void f_8eba10(void) {
  LOAD_REGS();
L_8eba10: /* 8eba10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8eba11: mov ebp, esp */
  ebp = esp;
/* 8eba13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8eba15: push 0x9d8df0 */
  { uint32_t v = 0x9d8df0u; esp -= 4; W32(esp, v); }
/* 8eba1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8eba20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eba21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8eba28: sub esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8eba2b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8eba2d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8eba2e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8eba2f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8eba30: xor edi, edi */
  edi = 0;
/* 8eba32: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8eba35: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* 8eba38: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x8eba3eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eba3e: mov ecx, dword ptr [0xcfa508] */
  ecx = R32((uint32_t)(0xcfa508u));
/* 8eba44: push 0xaedfb0 */
  { uint32_t v = 0xaedfb0u; esp -= 4; W32(esp, v); }
/* 8eba49: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8eba4a: mov ebx, eax */
  ebx = eax;
/* 8eba4c: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8eba4e: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8eba50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8eba51: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eba52: call dword ptr [edx + 0x14] */
  { uint32_t t = R32((uint32_t)(edx + 0x14u)); esp -= 4; W32(esp, 0x8eba55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eba55: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eba58: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8eba5b: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8eba61u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8eba61: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8eba65: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8eba68: jmp 0x8eba70 */
  goto L_8eba70;
L_8eba70: /* 8eba70: cmp edi, dword ptr [ebx + 0x180] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x180u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eba76: jge 0x8ebba1 */
  if ((sf == of)) goto L_8ebba1;
L_8eba7c: /* 8eba7c: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 8eba7f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8eba85u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8eba85: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8eba89: xor esi, esi */
  esi = 0;
/* 8eba8b: jmp 0x8eba90 */
  goto L_8eba90;
L_8eba90: /* 8eba90: mov eax, dword ptr [ebx + 0x17c] */
  eax = R32((uint32_t)(ebx + 0x17cu));
/* 8eba96: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eba98: jge 0x8ebb2d */
  if ((sf == of)) goto L_8ebb2d;
L_8eba9e: /* 8eba9e: mov ecx, dword ptr [ebx + 0x60] */
  ecx = R32((uint32_t)(ebx + 0x60u));
/* 8ebaa1: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 8ebaa4: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8ebaa6: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8ebaa9: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8ebaab: mov edx, eax */
  edx = eax;
/* 8ebaad: mov ecx, eax */
  ecx = eax;
/* 8ebaaf: sar edx, 0x16 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 22;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8ebab2: shl ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8ebab5: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8ebab8: sar ecx, 0x15 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 21;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 8ebabb: shl eax, 0x15 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8ebabe: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ebac1: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8ebac4: sar eax, 0x15 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 21;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8ebac7: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8ebac9: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ebacc: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8ebacf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ebad1: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 8ebad4: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ebad7: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8ebada: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8ebadd: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8ebae0: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8ebae6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8ebae6: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8ebae9: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8ebaec: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8ebaef: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8ebaf2: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8ebaf5: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8ebaf8: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 8ebafa: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8ebafd: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8ebaff: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8ebb02: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ebb04: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8ebb07: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8ebb0du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8ebb0d: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8ebb10: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8ebb13: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8ebb16: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8ebb19: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8ebb1c: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 8ebb1e: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ebb21: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8ebb24: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8ebb27: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8ebb28: jmp 0x8eba90 */
  goto L_8eba90;
L_8ebb2d: /* 8ebb2d: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8ebb30: imul edi, edi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x1cu);
  edi = (uint32_t)r;
  }
/* 8ebb33: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8ebb36: mov edx, dword ptr [ebx + 0x164] */
  edx = R32((uint32_t)(ebx + 0x164u));
/* 8ebb3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ebb3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ebb3e: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8ebb41: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8ebb43: call dword ptr [0xcfaac0] */
  esp -= 4; W32(esp, 0x8ebb49u); SPILL(); f_4e143d(); if (g_unwind) return; /* Core!??0FBox@@QAE@PBVFVector@@H@Z */ RELOAD();
/* 8ebb49: mov esi, eax */
  esi = eax;
/* 8ebb4b: mov ecx, 7 */
  ecx = 0x7u;
/* 8ebb50: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ebb52: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ebb55: mov eax, dword ptr [ebx + 0x170] */
  eax = R32((uint32_t)(ebx + 0x170u));
/* 8ebb5b: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8ebb5e: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8ebb61: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8ebb63: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8ebb66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ebb67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ebb68: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8ebb6b: call dword ptr [0xcfa55c] */
  esp -= 4; W32(esp, 0x8ebb71u); SPILL(); f_4e34c2(); if (g_unwind) return; /* Core!??0FSphere@@QAE@PBVFVector@@H@Z */ RELOAD();
/* 8ebb71: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8ebb73: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 8ebb75: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8ebb78: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 8ebb7b: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8ebb7e: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 8ebb81: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 8ebb84: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 8ebb87: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 8ebb8a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ebb8e: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8ebb93u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8ebb93: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ebb96: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8ebb97: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8ebb9a: mov edi, eax */
  edi = eax;
/* 8ebb9c: jmp 0x8eba70 */
  goto L_8eba70;
L_8ebba1: /* 8ebba1: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8ebba4: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8ebba7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ebba8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ebba9: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8ebbac: call dword ptr [0xcfaac0] */
  esp -= 4; W32(esp, 0x8ebbb2u); SPILL(); f_4e143d(); if (g_unwind) return; /* Core!??0FBox@@QAE@PBVFVector@@H@Z */ RELOAD();
/* 8ebbb2: lea edi, [ebx + 0x28] */
  edi = (uint32_t)(ebx + 0x28u);
/* 8ebbb5: mov esi, eax */
  esi = eax;
/* 8ebbb7: mov ecx, 7 */
  ecx = 0x7u;
/* 8ebbbc: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 8ebbbf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ebbc1: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8ebbc4: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8ebbc7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ebbc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ebbc9: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8ebbcc: call dword ptr [0xcfa55c] */
  esp -= 4; W32(esp, 0x8ebbd2u); SPILL(); f_4e34c2(); if (g_unwind) return; /* Core!??0FSphere@@QAE@PBVFVector@@H@Z */ RELOAD();
/* 8ebbd2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8ebbd4: lea esi, [ebx + 0x44] */
  esi = (uint32_t)(ebx + 0x44u);
/* 8ebbd7: mov ecx, esi */
  ecx = esi;
/* 8ebbd9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8ebbdb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8ebbde: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8ebbe1: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8ebbe4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8ebbe7: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8ebbea: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 8ebbed: mov ecx, ebx */
  ecx = ebx;
/* 8ebbef: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8ebbf5u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8ebbf5: mov ecx, dword ptr [ebx + 0x180] */
  ecx = R32((uint32_t)(ebx + 0x180u));
/* 8ebbfb: fld dword ptr [ebx + 0x50] */
  { double v = F32((uint32_t)(ebx + 0x50u)); FPUSH(v); }
/* 8ebbfe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ebbff: sub esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ebc02: fstp qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 8ebc06: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ebc09: fld dword ptr [ebx + 0x4c] */
  { double v = F32((uint32_t)(ebx + 0x4cu)); FPUSH(v); }
/* 8ebc0c: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 8ebc10: fld dword ptr [ebx + 0x48] */
  { double v = F32((uint32_t)(ebx + 0x48u)); FPUSH(v); }
/* 8ebc13: fstp qword ptr [esp + 0x38] */
  WF64((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8ebc17: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8ebc19: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 8ebc1d: fld dword ptr [ebx + 0x3c] */
  { double v = F32((uint32_t)(ebx + 0x3cu)); FPUSH(v); }
/* 8ebc20: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8ebc24: fld dword ptr [ebx + 0x38] */
  { double v = F32((uint32_t)(ebx + 0x38u)); FPUSH(v); }
/* 8ebc27: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 8ebc2b: fld dword ptr [ebx + 0x34] */
  { double v = F32((uint32_t)(ebx + 0x34u)); FPUSH(v); }
/* 8ebc2e: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 8ebc32: fld dword ptr [ebx + 0x30] */
  { double v = F32((uint32_t)(ebx + 0x30u)); FPUSH(v); }
/* 8ebc35: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8ebc39: fld dword ptr [ebx + 0x2c] */
  { double v = F32((uint32_t)(ebx + 0x2cu)); FPUSH(v); }
/* 8ebc3c: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8ebc40: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8ebc42: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8ebc45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ebc46: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8ebc4b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8ebc4d: push 0xaedfd0 */
  { uint32_t v = 0xaedfd0u; esp -= 4; W32(esp, v); }
/* 8ebc52: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 8ebc57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ebc58: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8ebc5eu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8ebc5e: add esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ebc61: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8ebc64: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ebc68: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8ebc6du); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8ebc6d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ebc70: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ebc71: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ebc72: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ebc79: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ebc7a: mov esp, ebp */
  esp = ebp;
/* 8ebc7c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ebc7d: ret  */
  esp += 4; SPILL(); return;
}

void f_8eba6a(void) {
  LOAD_REGS();
L_8eba6a: /* 8eba6a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_8eba70: /* 8eba70: cmp edi, dword ptr [ebx + 0x180] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x180u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eba76: jge 0x8ebba1 */
  if ((sf == of)) goto L_8ebba1;
L_8eba7c: /* 8eba7c: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 8eba7f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8eba85u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8eba85: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8eba89: xor esi, esi */
  esi = 0;
/* 8eba8b: jmp 0x8eba90 */
  goto L_8eba90;
L_8eba90: /* 8eba90: mov eax, dword ptr [ebx + 0x17c] */
  eax = R32((uint32_t)(ebx + 0x17cu));
/* 8eba96: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eba98: jge 0x8ebb2d */
  if ((sf == of)) goto L_8ebb2d;
L_8eba9e: /* 8eba9e: mov ecx, dword ptr [ebx + 0x60] */
  ecx = R32((uint32_t)(ebx + 0x60u));
/* 8ebaa1: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 8ebaa4: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8ebaa6: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8ebaa9: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8ebaab: mov edx, eax */
  edx = eax;
/* 8ebaad: mov ecx, eax */
  ecx = eax;
/* 8ebaaf: sar edx, 0x16 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 22;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8ebab2: shl ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8ebab5: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8ebab8: sar ecx, 0x15 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 21;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 8ebabb: shl eax, 0x15 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8ebabe: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ebac1: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8ebac4: sar eax, 0x15 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 21;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8ebac7: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8ebac9: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ebacc: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8ebacf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ebad1: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 8ebad4: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ebad7: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8ebada: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8ebadd: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8ebae0: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8ebae6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8ebae6: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8ebae9: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8ebaec: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8ebaef: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8ebaf2: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8ebaf5: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8ebaf8: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 8ebafa: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8ebafd: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8ebaff: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8ebb02: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ebb04: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8ebb07: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8ebb0du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8ebb0d: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8ebb10: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8ebb13: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8ebb16: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8ebb19: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8ebb1c: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 8ebb1e: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ebb21: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8ebb24: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8ebb27: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8ebb28: jmp 0x8eba90 */
  goto L_8eba90;
L_8ebb2d: /* 8ebb2d: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8ebb30: imul edi, edi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x1cu);
  edi = (uint32_t)r;
  }
/* 8ebb33: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8ebb36: mov edx, dword ptr [ebx + 0x164] */
  edx = R32((uint32_t)(ebx + 0x164u));
/* 8ebb3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ebb3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ebb3e: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8ebb41: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8ebb43: call dword ptr [0xcfaac0] */
  esp -= 4; W32(esp, 0x8ebb49u); SPILL(); f_4e143d(); if (g_unwind) return; /* Core!??0FBox@@QAE@PBVFVector@@H@Z */ RELOAD();
/* 8ebb49: mov esi, eax */
  esi = eax;
/* 8ebb4b: mov ecx, 7 */
  ecx = 0x7u;
/* 8ebb50: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ebb52: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ebb55: mov eax, dword ptr [ebx + 0x170] */
  eax = R32((uint32_t)(ebx + 0x170u));
/* 8ebb5b: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8ebb5e: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8ebb61: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8ebb63: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8ebb66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ebb67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ebb68: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8ebb6b: call dword ptr [0xcfa55c] */
  esp -= 4; W32(esp, 0x8ebb71u); SPILL(); f_4e34c2(); if (g_unwind) return; /* Core!??0FSphere@@QAE@PBVFVector@@H@Z */ RELOAD();
/* 8ebb71: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8ebb73: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 8ebb75: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8ebb78: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 8ebb7b: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8ebb7e: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 8ebb81: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 8ebb84: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 8ebb87: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 8ebb8a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ebb8e: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8ebb93u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8ebb93: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ebb96: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8ebb97: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8ebb9a: mov edi, eax */
  edi = eax;
/* 8ebb9c: jmp 0x8eba70 */
  goto L_8eba70;
L_8ebba1: /* 8ebba1: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8ebba4: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8ebba7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ebba8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ebba9: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8ebbac: call dword ptr [0xcfaac0] */
  esp -= 4; W32(esp, 0x8ebbb2u); SPILL(); f_4e143d(); if (g_unwind) return; /* Core!??0FBox@@QAE@PBVFVector@@H@Z */ RELOAD();
/* 8ebbb2: lea edi, [ebx + 0x28] */
  edi = (uint32_t)(ebx + 0x28u);
/* 8ebbb5: mov esi, eax */
  esi = eax;
/* 8ebbb7: mov ecx, 7 */
  ecx = 0x7u;
/* 8ebbbc: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 8ebbbf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ebbc1: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8ebbc4: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8ebbc7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ebbc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ebbc9: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8ebbcc: call dword ptr [0xcfa55c] */
  esp -= 4; W32(esp, 0x8ebbd2u); SPILL(); f_4e34c2(); if (g_unwind) return; /* Core!??0FSphere@@QAE@PBVFVector@@H@Z */ RELOAD();
/* 8ebbd2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8ebbd4: lea esi, [ebx + 0x44] */
  esi = (uint32_t)(ebx + 0x44u);
/* 8ebbd7: mov ecx, esi */
  ecx = esi;
/* 8ebbd9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8ebbdb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8ebbde: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8ebbe1: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8ebbe4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8ebbe7: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8ebbea: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 8ebbed: mov ecx, ebx */
  ecx = ebx;
/* 8ebbef: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8ebbf5u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8ebbf5: mov ecx, dword ptr [ebx + 0x180] */
  ecx = R32((uint32_t)(ebx + 0x180u));
/* 8ebbfb: fld dword ptr [ebx + 0x50] */
  { double v = F32((uint32_t)(ebx + 0x50u)); FPUSH(v); }
/* 8ebbfe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ebbff: sub esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ebc02: fstp qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 8ebc06: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ebc09: fld dword ptr [ebx + 0x4c] */
  { double v = F32((uint32_t)(ebx + 0x4cu)); FPUSH(v); }
/* 8ebc0c: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 8ebc10: fld dword ptr [ebx + 0x48] */
  { double v = F32((uint32_t)(ebx + 0x48u)); FPUSH(v); }
/* 8ebc13: fstp qword ptr [esp + 0x38] */
  WF64((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8ebc17: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8ebc19: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 8ebc1d: fld dword ptr [ebx + 0x3c] */
  { double v = F32((uint32_t)(ebx + 0x3cu)); FPUSH(v); }
/* 8ebc20: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8ebc24: fld dword ptr [ebx + 0x38] */
  { double v = F32((uint32_t)(ebx + 0x38u)); FPUSH(v); }
/* 8ebc27: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 8ebc2b: fld dword ptr [ebx + 0x34] */
  { double v = F32((uint32_t)(ebx + 0x34u)); FPUSH(v); }
/* 8ebc2e: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 8ebc32: fld dword ptr [ebx + 0x30] */
  { double v = F32((uint32_t)(ebx + 0x30u)); FPUSH(v); }
/* 8ebc35: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8ebc39: fld dword ptr [ebx + 0x2c] */
  { double v = F32((uint32_t)(ebx + 0x2cu)); FPUSH(v); }
/* 8ebc3c: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8ebc40: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8ebc42: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8ebc45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ebc46: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8ebc4b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8ebc4d: push 0xaedfd0 */
  { uint32_t v = 0xaedfd0u; esp -= 4; W32(esp, v); }
/* 8ebc52: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 8ebc57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ebc58: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8ebc5eu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8ebc5e: add esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ebc61: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8ebc64: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ebc68: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8ebc6du); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8ebc6d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ebc70: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ebc71: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ebc72: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ebc79: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ebc7a: mov esp, ebp */
  esp = ebp;
/* 8ebc7c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ebc7d: ret  */
  esp += 4; SPILL(); return;
}

void f_8eba8d(void) {
  LOAD_REGS();
  goto L_8eba8d;
L_8eba70: /* 8eba70: cmp edi, dword ptr [ebx + 0x180] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x180u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eba76: jge 0x8ebba1 */
  if ((sf == of)) goto L_8ebba1;
L_8eba7c: /* 8eba7c: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 8eba7f: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8eba85u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8eba85: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8eba89: xor esi, esi */
  esi = 0;
/* 8eba8b: jmp 0x8eba90 */
  goto L_8eba90;
L_8eba8d: /* 8eba8d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8eba90: /* 8eba90: mov eax, dword ptr [ebx + 0x17c] */
  eax = R32((uint32_t)(ebx + 0x17cu));
/* 8eba96: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eba98: jge 0x8ebb2d */
  if ((sf == of)) goto L_8ebb2d;
L_8eba9e: /* 8eba9e: mov ecx, dword ptr [ebx + 0x60] */
  ecx = R32((uint32_t)(ebx + 0x60u));
/* 8ebaa1: imul eax, edi */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(edi);
  eax = (uint32_t)r;
  }
/* 8ebaa4: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8ebaa6: lea eax, [ecx + eax*4] */
  eax = (uint32_t)(ecx + eax*4);
/* 8ebaa9: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8ebaab: mov edx, eax */
  edx = eax;
/* 8ebaad: mov ecx, eax */
  ecx = eax;
/* 8ebaaf: sar edx, 0x16 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 22;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
/* 8ebab2: shl ecx, 0xa */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8ebab5: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8ebab8: sar ecx, 0x15 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 21;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* 8ebabb: shl eax, 0x15 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 21;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8ebabe: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ebac1: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8ebac4: sar eax, 0x15 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 21;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* 8ebac7: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8ebac9: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ebacc: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8ebacf: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ebad1: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 8ebad4: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8ebad7: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8ebada: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8ebadd: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8ebae0: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8ebae6u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8ebae6: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8ebae9: lea edx, [eax + eax*2] */
  edx = (uint32_t)(eax + eax*2);
/* 8ebaec: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8ebaef: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 8ebaf2: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8ebaf5: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8ebaf8: mov dword ptr [ecx], edi */
  W32((uint32_t)(ecx), edi);
/* 8ebafa: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8ebafd: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8ebaff: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8ebb02: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ebb04: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8ebb07: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8ebb0du); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8ebb0d: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8ebb10: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8ebb13: lea eax, [edx + ecx*4] */
  eax = (uint32_t)(edx + ecx*4);
/* 8ebb16: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8ebb19: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8ebb1c: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 8ebb1e: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ebb21: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 8ebb24: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 8ebb27: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8ebb28: jmp 0x8eba90 */
  goto L_8eba90;
L_8ebb2d: /* 8ebb2d: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8ebb30: imul edi, edi, 0x1c */
  { int64_t r = (int64_t)(int32_t)(edi) * (int64_t)(int32_t)(0x1cu);
  edi = (uint32_t)r;
  }
/* 8ebb33: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8ebb36: mov edx, dword ptr [ebx + 0x164] */
  edx = R32((uint32_t)(ebx + 0x164u));
/* 8ebb3c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ebb3d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ebb3e: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8ebb41: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8ebb43: call dword ptr [0xcfaac0] */
  esp -= 4; W32(esp, 0x8ebb49u); SPILL(); f_4e143d(); if (g_unwind) return; /* Core!??0FBox@@QAE@PBVFVector@@H@Z */ RELOAD();
/* 8ebb49: mov esi, eax */
  esi = eax;
/* 8ebb4b: mov ecx, 7 */
  ecx = 0x7u;
/* 8ebb50: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ebb52: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ebb55: mov eax, dword ptr [ebx + 0x170] */
  eax = R32((uint32_t)(ebx + 0x170u));
/* 8ebb5b: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8ebb5e: shl esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 8ebb61: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8ebb63: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8ebb66: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ebb67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ebb68: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8ebb6b: call dword ptr [0xcfa55c] */
  esp -= 4; W32(esp, 0x8ebb71u); SPILL(); f_4e34c2(); if (g_unwind) return; /* Core!??0FSphere@@QAE@PBVFVector@@H@Z */ RELOAD();
/* 8ebb71: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8ebb73: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* 8ebb75: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8ebb78: mov dword ptr [esi + 4], edx */
  W32((uint32_t)(esi + 0x4u), edx);
/* 8ebb7b: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* 8ebb7e: mov dword ptr [esi + 8], ecx */
  W32((uint32_t)(esi + 0x8u), ecx);
/* 8ebb81: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* 8ebb84: lea ecx, [ebp - 0x38] */
  ecx = (uint32_t)(ebp + 0xffffffc8u);
/* 8ebb87: mov dword ptr [esi + 0xc], edx */
  W32((uint32_t)(esi + 0xcu), edx);
/* 8ebb8a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ebb8e: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8ebb93u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8ebb93: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ebb96: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8ebb97: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8ebb9a: mov edi, eax */
  edi = eax;
/* 8ebb9c: jmp 0x8eba70 */
  goto L_8eba70;
L_8ebba1: /* 8ebba1: mov eax, dword ptr [ebp - 0x40] */
  eax = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8ebba4: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8ebba7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ebba8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ebba9: lea ecx, [ebp - 0x70] */
  ecx = (uint32_t)(ebp + 0xffffff90u);
/* 8ebbac: call dword ptr [0xcfaac0] */
  esp -= 4; W32(esp, 0x8ebbb2u); SPILL(); f_4e143d(); if (g_unwind) return; /* Core!??0FBox@@QAE@PBVFVector@@H@Z */ RELOAD();
/* 8ebbb2: lea edi, [ebx + 0x28] */
  edi = (uint32_t)(ebx + 0x28u);
/* 8ebbb5: mov esi, eax */
  esi = eax;
/* 8ebbb7: mov ecx, 7 */
  ecx = 0x7u;
/* 8ebbbc: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* 8ebbbf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ebbc1: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8ebbc4: mov eax, dword ptr [ebp - 0x44] */
  eax = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8ebbc7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ebbc8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ebbc9: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 8ebbcc: call dword ptr [0xcfa55c] */
  esp -= 4; W32(esp, 0x8ebbd2u); SPILL(); f_4e34c2(); if (g_unwind) return; /* Core!??0FSphere@@QAE@PBVFVector@@H@Z */ RELOAD();
/* 8ebbd2: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8ebbd4: lea esi, [ebx + 0x44] */
  esi = (uint32_t)(ebx + 0x44u);
/* 8ebbd7: mov ecx, esi */
  ecx = esi;
/* 8ebbd9: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8ebbdb: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8ebbde: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8ebbe1: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* 8ebbe4: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8ebbe7: mov eax, dword ptr [eax + 0xc] */
  eax = R32((uint32_t)(eax + 0xcu));
/* 8ebbea: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* 8ebbed: mov ecx, ebx */
  ecx = ebx;
/* 8ebbef: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8ebbf5u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8ebbf5: mov ecx, dword ptr [ebx + 0x180] */
  ecx = R32((uint32_t)(ebx + 0x180u));
/* 8ebbfb: fld dword ptr [ebx + 0x50] */
  { double v = F32((uint32_t)(ebx + 0x50u)); FPUSH(v); }
/* 8ebbfe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ebbff: sub esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ebc02: fstp qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 8ebc06: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ebc09: fld dword ptr [ebx + 0x4c] */
  { double v = F32((uint32_t)(ebx + 0x4cu)); FPUSH(v); }
/* 8ebc0c: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 8ebc10: fld dword ptr [ebx + 0x48] */
  { double v = F32((uint32_t)(ebx + 0x48u)); FPUSH(v); }
/* 8ebc13: fstp qword ptr [esp + 0x38] */
  WF64((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8ebc17: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8ebc19: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 8ebc1d: fld dword ptr [ebx + 0x3c] */
  { double v = F32((uint32_t)(ebx + 0x3cu)); FPUSH(v); }
/* 8ebc20: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8ebc24: fld dword ptr [ebx + 0x38] */
  { double v = F32((uint32_t)(ebx + 0x38u)); FPUSH(v); }
/* 8ebc27: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 8ebc2b: fld dword ptr [ebx + 0x34] */
  { double v = F32((uint32_t)(ebx + 0x34u)); FPUSH(v); }
/* 8ebc2e: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 8ebc32: fld dword ptr [ebx + 0x30] */
  { double v = F32((uint32_t)(ebx + 0x30u)); FPUSH(v); }
/* 8ebc35: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8ebc39: fld dword ptr [ebx + 0x2c] */
  { double v = F32((uint32_t)(ebx + 0x2cu)); FPUSH(v); }
/* 8ebc3c: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8ebc40: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8ebc42: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8ebc45: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ebc46: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8ebc4b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8ebc4d: push 0xaedfd0 */
  { uint32_t v = 0xaedfd0u; esp -= 4; W32(esp, v); }
/* 8ebc52: push 0x2f8 */
  { uint32_t v = 0x2f8u; esp -= 4; W32(esp, v); }
/* 8ebc57: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ebc58: call dword ptr [0xcfa794] */
  esp -= 4; W32(esp, 0x8ebc5eu); SPILL(); f_4e30df(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXW4EName@@PBGZZ */ RELOAD();
/* 8ebc5e: add esp, 0x64 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ebc61: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8ebc64: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ebc68: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8ebc6du); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8ebc6d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ebc70: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ebc71: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ebc72: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ebc79: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ebc7a: mov esp, ebp */
  esp = ebp;
/* 8ebc7c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ebc7d: ret  */
  esp += 4; SPILL(); return;
}

void f_8ebc7e(void) {
  LOAD_REGS();
L_8ebc7e: /* 8ebc7e: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8ebc81: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ebc86: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* 8ebc89: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ebc8a: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 8ebc8d: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ebc92u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ebc92(); return;
}

void f_8ebc92(void) {
  LOAD_REGS();
L_8ebc92: /* 8ebc92: push 0xa1e1a0 */
  { uint32_t v = 0xa1e1a0u; esp -= 4; W32(esp, v); }
/* 8ebc97: push 0xaee080 */
  { uint32_t v = 0xaee080u; esp -= 4; W32(esp, v); }
/* 8ebc9c: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ebca2u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ebca2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ebca5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ebca7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ebca9: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ebcaeu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8ebcae: guest_badaddr(0x8ebcae); return;
}

void f_8ebd60(void) {
  LOAD_REGS();
L_8ebd60: /* 8ebd60: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ebd61: mov ebp, esp */
  ebp = esp;
/* 8ebd63: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ebd65: push 0x9d8e08 */
  { uint32_t v = 0x9d8e08u; esp -= 4; W32(esp, v); }
/* 8ebd6a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ebd70: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ebd71: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ebd78: sub esp, 0x140 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x140u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ebd7e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ebd7f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ebd80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ebd81: mov edi, ecx */
  edi = ecx;
/* 8ebd83: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8ebd86: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ebd89: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ebd90: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8ebd96u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8ebd96: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 8ebd98: mov ecx, edi */
  ecx = edi;
/* 8ebd9a: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ebd9e: call dword ptr [eax + 0x94] */
  { uint32_t t = R32((uint32_t)(eax + 0x94u)); esp -= 4; W32(esp, 0x8ebda4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ebda4: mov ebx, eax */
  ebx = eax;
/* 8ebda6: mov eax, dword ptr [ebx + 0x5c] */
  eax = R32((uint32_t)(ebx + 0x5cu));
/* 8ebda9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ebdaa: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8ebdac: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8ebdaf: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x8ebdb5u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 8ebdb5: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8ebdb8: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8ebdbb: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8ebdbe: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 8ebdc0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ebdc2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ebdc3: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* 8ebdc5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ebdc6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ebdc8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ebdc9: mov ecx, edi */
  ecx = edi;
/* 8ebdcb: call dword ptr [edx + 0x114] */
  { uint32_t t = R32((uint32_t)(edx + 0x114u)); esp -= 4; W32(esp, 0x8ebdd1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ebdd1: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 8ebdd4: call dword ptr [0xcfa434] */
  esp -= 4; W32(esp, 0x8ebddau); SPILL(); f_4e125d(); if (g_unwind) return; /* Core!??0FCoords@@QAE@XZ */ RELOAD();
/* 8ebdda: fld dword ptr [esi + 0x290] */
  { double v = F32((uint32_t)(esi + 0x290u)); FPUSH(v); }
/* 8ebde0: fmul dword ptr [ebx + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x80u)));
/* 8ebde6: mov eax, dword ptr [edi + 0x78] */
  eax = R32((uint32_t)(edi + 0x78u));
/* 8ebde9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ebdeb: fld dword ptr [esi + 0x28c] */
  { double v = F32((uint32_t)(esi + 0x28cu)); FPUSH(v); }
/* 8ebdf1: fmul dword ptr [ebx + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x7cu)));
/* 8ebdf4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ebdf6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ebdf8: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8ebdfb: fld dword ptr [ebx + 0x78] */
  { double v = F32((uint32_t)(ebx + 0x78u)); FPUSH(v); }
/* 8ebdfe: fmul dword ptr [esi + 0x288] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x288u)));
/* 8ebe04: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8ebe07: je 0x8ebe91 */
  if (zf) goto L_8ebe91;
L_8ebe0d: /* 8ebe0d: mov edx, dword ptr [esi + 0x284] */
  edx = R32((uint32_t)(esi + 0x284u));
/* 8ebe13: mov dword ptr [ebp + 8], edx */
  W32((uint32_t)(ebp + 0x8u), edx);
/* 8ebe16: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8ebe19: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 8ebe1c: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ebe1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ebe20: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8ebe23: lea ecx, [ebp - 0x34] */
  ecx = (uint32_t)(ebp + 0xffffffccu);
/* 8ebe26: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8ebe29: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8ebe2c: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8ebe2f: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8ebe32: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8ebe35: call dword ptr [0xcfab94] */
  esp -= 4; W32(esp, 0x8ebe3bu); SPILL(); f_4e2653(); if (g_unwind) return; /* Core!??0FScale@@QAE@ABVFVector@@MW4ESheerAxis@@@Z */ RELOAD();
/* 8ebe3b: lea ecx, [esi + 0x170] */
  ecx = (uint32_t)(esi + 0x170u);
/* 8ebe41: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ebe42: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 8ebe48: lea edx, [ebp - 0x11c] */
  edx = (uint32_t)(ebp + 0xfffffee4u);
/* 8ebe4e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ebe4f: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ebe52: mov edi, eax */
  edi = eax;
/* 8ebe54: call dword ptr [0xcfa2d4] */
  esp -= 4; W32(esp, 0x8ebe5au); SPILL(); f_4e4179(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFVector@@@Z */ RELOAD();
/* 8ebe5a: add esi, 0x17c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8ebe60: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ebe61: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 8ebe67: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ebe68: mov ecx, eax */
  ecx = eax;
/* 8ebe6a: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x8ebe70u); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 8ebe70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ebe71: lea edx, [ebp - 0xec] */
  edx = (uint32_t)(ebp + 0xffffff14u);
/* 8ebe77: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ebe78: mov ecx, eax */
  ecx = eax;
/* 8ebe7a: call dword ptr [0xcfa2f0] */
  esp -= 4; W32(esp, 0x8ebe80u); SPILL(); f_4e11b3(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFScale@@@Z */ RELOAD();
/* 8ebe80: mov ecx, 0xc */
  ecx = 0xcu;
/* 8ebe85: mov esi, eax */
  esi = eax;
/* 8ebe87: lea edi, [ebp - 0x78] */
  edi = (uint32_t)(ebp + 0xffffff88u);
/* 8ebe8a: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ebe8c: jmp 0x8ebf77 */
  goto L_8ebf77;
L_8ebe91: /* 8ebe91: mov eax, dword ptr [esi + 0x284] */
  eax = R32((uint32_t)(esi + 0x284u));
/* 8ebe97: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* 8ebe9a: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8ebe9d: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8ebea0: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8ebea3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ebea4: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8ebea7: lea ecx, [ebp - 0x8c] */
  ecx = (uint32_t)(ebp + 0xffffff74u);
/* 8ebead: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8ebeb0: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8ebeb3: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8ebeb6: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8ebeb9: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8ebebc: fld dword ptr [esi + 0x29c] */
  { double v = F32((uint32_t)(esi + 0x29cu)); FPUSH(v); }
/* 8ebec2: fadd dword ptr [esi + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x178u)));
/* 8ebec8: fld dword ptr [esi + 0x298] */
  { double v = F32((uint32_t)(esi + 0x298u)); FPUSH(v); }
/* 8ebece: fadd dword ptr [esi + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x174u)));
/* 8ebed4: fld dword ptr [esi + 0x294] */
  { double v = F32((uint32_t)(esi + 0x294u)); FPUSH(v); }
/* 8ebeda: fadd dword ptr [esi + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x170u)));
/* 8ebee0: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8ebee3: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8ebee6: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8ebee9: call dword ptr [0xcfab94] */
  esp -= 4; W32(esp, 0x8ebeefu); SPILL(); f_4e2653(); if (g_unwind) return; /* Core!??0FScale@@QAE@ABVFVector@@MW4ESheerAxis@@@Z */ RELOAD();
/* 8ebeef: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 8ebef5: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 8ebef8: mov edi, eax */
  edi = eax;
/* 8ebefa: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ebefb: lea eax, [ebp - 0xec] */
  eax = (uint32_t)(ebp + 0xffffff14u);
/* 8ebf01: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ebf02: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8ebf05: call dword ptr [0xcfa2d4] */
  esp -= 4; W32(esp, 0x8ebf0bu); SPILL(); f_4e4179(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFVector@@@Z */ RELOAD();
/* 8ebf0b: add esi, 0x17c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x17cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8ebf11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ebf12: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 8ebf18: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ebf19: mov ecx, eax */
  ecx = eax;
/* 8ebf1b: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x8ebf21u); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 8ebf21: lea edx, [ebx + 0x90] */
  edx = (uint32_t)(ebx + 0x90u);
/* 8ebf27: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ebf28: lea ecx, [ebp - 0x11c] */
  ecx = (uint32_t)(ebp + 0xfffffee4u);
/* 8ebf2e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ebf2f: mov ecx, eax */
  ecx = eax;
/* 8ebf31: call dword ptr [0xcfa2d0] */
  esp -= 4; W32(esp, 0x8ebf37u); SPILL(); f_4e1bd1(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 8ebf37: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ebf38: lea edx, [ebp - 0x14c] */
  edx = (uint32_t)(ebp + 0xfffffeb4u);
/* 8ebf3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ebf3f: mov ecx, eax */
  ecx = eax;
/* 8ebf41: call dword ptr [0xcfa2f0] */
  esp -= 4; W32(esp, 0x8ebf47u); SPILL(); f_4e11b3(); if (g_unwind) return; /* Core!??DFCoords@@QBE?AV0@ABVFScale@@@Z */ RELOAD();
/* 8ebf47: mov ecx, 0xc */
  ecx = 0xcu;
/* 8ebf4c: mov esi, eax */
  esi = eax;
/* 8ebf4e: lea edi, [ebp - 0x78] */
  edi = (uint32_t)(ebp + 0xffffff88u);
/* 8ebf51: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ebf53: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 8ebf56: fadd dword ptr [ebx + 0x84] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x84u)));
/* 8ebf5c: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 8ebf5f: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 8ebf62: fadd dword ptr [ebx + 0x88] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x88u)));
/* 8ebf68: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 8ebf6b: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 8ebf6e: fadd dword ptr [ebx + 0x8c] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8cu)));
/* 8ebf74: fstp dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0); FPOP();
L_8ebf77: /* 8ebf77: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8ebf7a: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* 8ebf7d: xor esi, esi */
  esi = 0;
/* 8ebf7f: nop  */
L_8ebf80: /* 8ebf80: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8ebf83: cmp esi, dword ptr [eax] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ebf85: jge 0x8ebfb5 */
  if ((sf == of)) goto L_8ebfb5;
L_8ebf87: /* 8ebf87: lea ecx, [ebp - 0x78] */
  ecx = (uint32_t)(ebp + 0xffffff88u);
/* 8ebf8a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ebf8b: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8ebf8e: lea edx, [ebp - 0x2c] */
  edx = (uint32_t)(ebp + 0xffffffd4u);
/* 8ebf91: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 8ebf94: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ebf95: lea ecx, [ecx + eax*4] */
  ecx = (uint32_t)(ecx + eax*4);
/* 8ebf98: call dword ptr [0xcfa364] */
  esp -= 4; W32(esp, 0x8ebf9eu); SPILL(); f_4e1af5(); if (g_unwind) return; /* Core!?TransformPointBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8ebf9e: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8ebfa0: mov edx, edi */
  edx = edi;
/* 8ebfa2: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 8ebfa4: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8ebfa7: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 8ebfaa: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8ebfad: add edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 8ebfaf: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8ebfb2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8ebfb3: jmp 0x8ebf80 */
  goto L_8ebf80;
L_8ebfb5: /* 8ebfb5: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 8ebfb8: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ebfbc: call 0x6c9543 */
  esp -= 4; W32(esp, 0x8ebfc1u); SPILL(); f_6c9543(); if (g_unwind) return; RELOAD();
/* 8ebfc1: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ebfc4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ebfc5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ebfc6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ebfcd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ebfce: mov esp, ebp */
  esp = ebp;
/* 8ebfd0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ebfd1: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8ebfd4(void) {
  LOAD_REGS();
L_8ebfd4: /* 8ebfd4: mov ecx, dword ptr [ebp - 0x48] */
  ecx = R32((uint32_t)(ebp + 0xffffffb8u));
/* 8ebfd7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ebfdc: lea edx, [ebp - 0x38] */
  edx = (uint32_t)(ebp + 0xffffffc8u);
/* 8ebfdf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ebfe0: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 8ebfe3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ebfe8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ebfe8(); return;
}

void f_8ebfe8(void) {
  LOAD_REGS();
L_8ebfe8: /* 8ebfe8: push 0xa1e1f8 */
  { uint32_t v = 0xa1e1f8u; esp -= 4; W32(esp, v); }
/* 8ebfed: push 0xaee114 */
  { uint32_t v = 0xaee114u; esp -= 4; W32(esp, v); }
/* 8ebff2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ebff8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ebff8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ebffb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ebffd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ebfff: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ec004u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8ec004: guest_badaddr(0x8ec004); return;
}

void f_8ec0c0(void) {
  LOAD_REGS();
L_8ec0c0: /* 8ec0c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ec0c1: mov ebp, esp */
  ebp = esp;
/* 8ec0c3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ec0c5: push 0x9d8e2b */
  { uint32_t v = 0x9d8e2bu; esp -= 4; W32(esp, v); }
/* 8ec0ca: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ec0d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ec0d1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ec0d8: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ec0db: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ec0dc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ec0dd: mov esi, ecx */
  esi = ecx;
/* 8ec0df: mov eax, dword ptr [esi + 0x1d4] */
  eax = R32((uint32_t)(esi + 0x1d4u));
/* 8ec0e5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ec0e7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ec0e8: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ec0eb: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ec0f2: je 0x8ec107 */
  if (zf) goto L_8ec107;
L_8ec0f4: /* 8ec0f4: xor eax, eax */
  eax = 0;
/* 8ec0f6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ec0f9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ec100: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ec101: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ec102: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ec103: mov esp, ebp */
  esp = ebp;
/* 8ec105: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ec106: ret  */
  esp += 4; SPILL(); return;
L_8ec107: /* 8ec107: lea ecx, [esi + 0x18c] */
  ecx = (uint32_t)(esi + 0x18cu);
/* 8ec10d: xor eax, eax */
  eax = 0;
/* 8ec10f: nop  */
L_8ec110: /* 8ec110: cmp eax, dword ptr [ecx + 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ec113: jge 0x8ec118 */
  if ((sf == of)) goto L_8ec118;
L_8ec115: /* 8ec115: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8ec116: jmp 0x8ec110 */
  goto L_8ec110;
L_8ec118: /* 8ec118: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ec11a: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8ec11c: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x8ec122u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 8ec122: mov eax, dword ptr [esi + 0xc4] */
  eax = R32((uint32_t)(esi + 0xc4u));
/* 8ec128: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8ec12a: lea edi, [esi + 0x18c] */
  edi = (uint32_t)(esi + 0x18cu);
/* 8ec130: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ec131: mov ecx, edi */
  ecx = edi;
/* 8ec133: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8ec139u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8ec139: inc dword ptr [esi + 0x1a0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x1a0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(esi + 0x1a0u), r);
  }
/* 8ec13f: xor edx, edx */
  edx = 0;
L_8ec141: /* 8ec141: cmp edx, dword ptr [esi + 0xc4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xc4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ec147: jge 0x8ec175 */
  if ((sf == of)) goto L_8ec175;
L_8ec149: /* 8ec149: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 8ec14b: mov ebx, dword ptr [esi + 0xc0] */
  ebx = R32((uint32_t)(esi + 0xc0u));
/* 8ec151: mov eax, edx */
  eax = edx;
/* 8ec153: shl eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 8ec156: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8ec158: lea ecx, [edx + edx*2] */
  ecx = (uint32_t)(edx + edx*2);
/* 8ec15b: shl ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 8ec15e: fld dword ptr [ebx + ecx + 4] */
  { double v = F32((uint32_t)(ebx + ecx + 0x4u)); FPUSH(v); }
/* 8ec162: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 8ec163: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* 8ec166: mov ebx, dword ptr [esi + 0xc0] */
  ebx = R32((uint32_t)(esi + 0xc0u));
/* 8ec16c: fld dword ptr [ebx + ecx + 8] */
  { double v = F32((uint32_t)(ebx + ecx + 0x8u)); FPUSH(v); }
/* 8ec170: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* 8ec173: jmp 0x8ec141 */
  goto L_8ec141;
L_8ec175: /* 8ec175: mov eax, dword ptr [esi + 0xc4] */
  eax = R32((uint32_t)(esi + 0xc4u));
/* 8ec17b: mov ecx, dword ptr [esi + 0x190] */
  ecx = R32((uint32_t)(esi + 0x190u));
/* 8ec181: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ec182: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8ec187: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ec188: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8ec18a: push 0xaee088 */
  { uint32_t v = 0xaee088u; esp -= 4; W32(esp, v); }
/* 8ec18f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ec190: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8ec196u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8ec196: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ec199: xor eax, eax */
  eax = 0;
/* 8ec19b: xor edi, edi */
  edi = 0;
/* 8ec19d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_8ec1a0: /* 8ec1a0: cmp edi, dword ptr [esi + 0xac] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0xacu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ec1a6: jge 0x8ec23d */
  if ((sf == of)) goto L_8ec23d;
L_8ec1ac: /* 8ec1ac: mov edx, dword ptr [esi + 0xa8] */
  edx = R32((uint32_t)(esi + 0xa8u));
/* 8ec1b2: mov ecx, dword ptr [edx + edi*8] */
  ecx = R32((uint32_t)(edx + edi*8));
/* 8ec1b5: mov edx, dword ptr [edx + edi*8 + 4] */
  edx = R32((uint32_t)(edx + edi*8 + 0x4u));
/* 8ec1b9: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 8ec1bc: mov ecx, edx */
  ecx = edx;
/* 8ec1be: shr ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 16;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* 8ec1c1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ec1c3: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8ec1c6: je 0x8ec1cf */
  if (zf) goto L_8ec1cf;
L_8ec1c8: /* 8ec1c8: movzx edx, word ptr [eax] */
  edx = (uint32_t)(R16((uint32_t)(eax)));
/* 8ec1cb: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ec1cd: je 0x8ec233 */
  if (zf) goto L_8ec233;
L_8ec1cf: /* 8ec1cf: xor eax, eax */
  eax = 0;
/* 8ec1d1: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 8ec1d4: lea ebx, [eax + esi + 0x1d0] */
  ebx = (uint32_t)(eax + esi + 0x1d0u);
/* 8ec1db: push 0x5c */
  { uint32_t v = 0x5cu; esp -= 4; W32(esp, v); }
/* 8ec1dd: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ec1df: mov ecx, ebx */
  ecx = ebx;
/* 8ec1e1: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8ec1e7u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8ec1e7: imul eax, eax, 0x5c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x5cu);
  eax = (uint32_t)r;
  }
/* 8ec1ea: add eax, dword ptr [ebx] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx)));
  uint32_t r = (uint32_t)(a + b);
  zf = (r) == 0;
  eax = r;
  }
/* 8ec1ec: mov ebx, eax */
  ebx = eax;
/* 8ec1ee: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 8ec1f1: je 0x8ec20f */
  if (zf) goto L_8ec20f;
L_8ec1f3: /* 8ec1f3: lea ecx, [ebx + 0x14] */
  ecx = (uint32_t)(ebx + 0x14u);
/* 8ec1f6: call 0x6c3873 */
  esp -= 4; W32(esp, 0x8ec1fbu); SPILL(); f_6c3873(); if (g_unwind) return; RELOAD();
/* 8ec1fb: lea ecx, [ebx + 0x40] */
  ecx = (uint32_t)(ebx + 0x40u);
/* 8ec1fe: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ec202: call 0x6c89b3 */
  esp -= 4; W32(esp, 0x8ec207u); SPILL(); f_6c89b3(); if (g_unwind) return; RELOAD();
/* 8ec207: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ec20b: mov eax, ebx */
  eax = ebx;
/* 8ec20d: jmp 0x8ec211 */
  goto L_8ec211;
L_8ec20f: /* 8ec20f: xor eax, eax */
  eax = 0;
L_8ec211: /* 8ec211: mov cx, word ptr [ebp - 0x1e] */
  ecx = (ecx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffffe2u))) & 0xffffu);
/* 8ec215: mov word ptr [eax], cx */
  W16((uint32_t)(eax), (ecx & 0xffffu));
/* 8ec218: xor ecx, ecx */
  ecx = 0;
/* 8ec21a: mov word ptr [eax + 0xe], di */
  W16((uint32_t)(eax + 0xeu), (edi & 0xffffu));
/* 8ec21e: mov word ptr [eax + 4], cx */
  W16((uint32_t)(eax + 0x4u), (ecx & 0xffffu));
/* 8ec222: mov dx, word ptr [esi + 0xc4] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(esi + 0xc4u))) & 0xffffu);
/* 8ec229: dec dx */
  { uint16_t a = (uint16_t)((edx & 0xffffu));
  uint16_t r = (uint16_t)(a - 1);
  edx = (edx & 0xffff0000u) | ((uint32_t)(r) & 0xffffu);
  }
/* 8ec22b: mov word ptr [eax + 6], dx */
  W16((uint32_t)(eax + 0x6u), (edx & 0xffffu));
/* 8ec22f: mov word ptr [eax + 0x10], cx */
  W16((uint32_t)(eax + 0x10u), (ecx & 0xffffu));
L_8ec233: /* 8ec233: inc word ptr [eax + 0x10] */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + 0x10u)));
  uint16_t r = (uint16_t)(a + 1);
  W16((uint32_t)(eax + 0x10u), r);
  }
/* 8ec237: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8ec238: jmp 0x8ec1a0 */
  goto L_8ec1a0;
L_8ec23d: /* 8ec23d: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ec240: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ec241: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ec242: mov eax, 1 */
  eax = 0x1u;
/* 8ec247: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ec24e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ec24f: mov esp, ebp */
  esp = ebp;
/* 8ec251: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ec252: ret  */
  esp += 4; SPILL(); return;
}

void f_8ec253(void) {
  LOAD_REGS();
L_8ec253: /* 8ec253: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ec256: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ec25b: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8ec25e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ec25f: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8ec262: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ec267u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ec267(); return;
}

void f_8ec267(void) {
  LOAD_REGS();
L_8ec267: /* 8ec267: push 0xa1e244 */
  { uint32_t v = 0xa1e244u; esp -= 4; W32(esp, v); }
/* 8ec26c: push 0xaee10c */
  { uint32_t v = 0xaee10cu; esp -= 4; W32(esp, v); }
/* 8ec271: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ec277u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ec277: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ec27a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ec27c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ec27e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ec283u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8ec283: guest_badaddr(0x8ec283); return;
}

void f_8ec310(void) {
  LOAD_REGS();
L_8ec310: /* 8ec310: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ec311: mov ebp, esp */
  ebp = esp;
/* 8ec313: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ec315: push 0x9d8e67 */
  { uint32_t v = 0x9d8e67u; esp -= 4; W32(esp, v); }
/* 8ec31a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ec320: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ec321: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ec328: sub esp, 0xf4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xf4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ec32e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8ec331: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8ec333: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ec334: mov ebx, dword ptr [eax + 0xd0] */
  ebx = R32((uint32_t)(eax + 0xd0u));
/* 8ec33a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ec33b: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 8ec33e: mov eax, dword ptr [ebx + 0x1d4] */
  eax = R32((uint32_t)(ebx + 0x1d4u));
/* 8ec344: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ec346: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ec347: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ec34a: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8ec34d: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ec354: jne 0x8ec35d */
  if (!zf) goto L_8ec35d;
L_8ec356: /* 8ec356: mov ecx, ebx */
  ecx = ebx;
/* 8ec358: call 0x6c9809 */
  esp -= 4; W32(esp, 0x8ec35du); SPILL(); f_6c9809(); if (g_unwind) return; RELOAD();
L_8ec35d: /* 8ec35d: mov esi, dword ptr [0xcfa350] */
  esi = R32((uint32_t)(0xcfa350u));
/* 8ec363: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8ec368: lea edi, [ebp - 0xc0] */
  edi = (uint32_t)(ebp + 0xffffff40u);
/* 8ec36e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ec370: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8ec373: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8ec375: lea eax, [ebp - 0x100] */
  eax = (uint32_t)(ebp + 0xffffff00u);
/* 8ec37b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ec37c: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ec380: call dword ptr [edx + 0x118] */
  { uint32_t t = R32((uint32_t)(edx + 0x118u)); esp -= 4; W32(esp, 0x8ec386u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ec386: mov esi, eax */
  esi = eax;
/* 8ec388: mov ecx, 0x10 */
  ecx = 0x10u;
/* 8ec38d: lea edi, [ebp - 0xc0] */
  edi = (uint32_t)(ebp + 0xffffff40u);
/* 8ec393: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ec395: lea ecx, [ebp - 0x100] */
  ecx = (uint32_t)(ebp + 0xffffff00u);
/* 8ec39b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ec3a1u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ec3a1: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8ec3a4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8ec3a6: lea eax, [ebp - 0xc0] */
  eax = (uint32_t)(ebp + 0xffffff40u);
/* 8ec3ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ec3ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ec3af: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x8ec3b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ec3b2: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8ec3b5: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8ec3b8: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 8ec3bb: fld dword ptr [edx + 0x348] */
  { double v = F32((uint32_t)(edx + 0x348u)); FPUSH(v); }
/* 8ec3c1: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ec3c4: fmul qword ptr [0xa167b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa167b8u)));
/* 8ec3ca: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 8ec3cd: call dword ptr [0xcfab08] */
  esp -= 4; W32(esp, 0x8ec3d3u); SPILL(); f_4e2a3b(); if (g_unwind) return; /* Core!?appTan@@YANN@Z */ RELOAD();
/* 8ec3d3: mov eax, dword ptr [esi + 4] */
  eax = R32((uint32_t)(esi + 0x4u));
/* 8ec3d6: fst qword ptr [ebp - 0x38] */
  WF64((uint32_t)(ebp + 0xffffffc8u), ST0);
/* 8ec3d9: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8ec3dc: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8ec3df: fild dword ptr [ebx + 0x5c] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0x5cu)); FPUSH(v); }
/* 8ec3e2: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ec3e5: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ec3e8: lea ecx, [edi + 0x170] */
  ecx = (uint32_t)(edi + 0x170u);
/* 8ec3ee: fmul dword ptr [0xa15bb4] */
  ST0 = ST0 * (F32((uint32_t)(0xa15bb4u)));
/* 8ec3f4: mov edx, esp */
  edx = esp;
/* 8ec3f6: fadd dword ptr [0xa0e1c0] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e1c0u)));
/* 8ec3fc: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8ec3ff: fild dword ptr [eax + 0x88] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x88u)); FPUSH(v); }
/* 8ec405: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8ec407: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8ec409: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8ec40c: fmul dword ptr [0xa1a81c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a81cu)));
/* 8ec412: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8ec415: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8ec418: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 8ec41b: fadd dword ptr [0xa0d56c] */
  ST0 = ST0 + (F32((uint32_t)(0xa0d56cu)));
/* 8ec421: lea edx, [ebp - 0x40] */
  edx = (uint32_t)(ebp + 0xffffffc0u);
/* 8ec424: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ec425: mov ecx, esi */
  ecx = esi;
/* 8ec427: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8ec42a: call 0x6c6221 */
  esp -= 4; W32(esp, 0x8ec42fu); SPILL(); f_6c6221(); if (g_unwind) return; RELOAD();
/* 8ec42f: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 8ec432: fsub dword ptr [ebx + 0xe8] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0xe8u)));
/* 8ec438: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8ec43e: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8ec440: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ec442: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ec445: jne 0x8ec44f */
  if (!zf) goto L_8ec44f;
L_8ec447: /* 8ec447: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ec449: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_8ec44f: /* 8ec44f: fmul dword ptr [ebx + 0xdc] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xdcu)));
/* 8ec455: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8ec458: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8ec45b: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8ec45e: fld dword ptr [edi + 0x284] */
  { double v = F32((uint32_t)(edi + 0x284u)); FPUSH(v); }
/* 8ec464: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8ec46a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ec46c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ec46f: je 0x8ec473 */
  if (zf) goto L_8ec473;
L_8ec471: /* 8ec471: fchs  */
  ST0 = -ST0;
L_8ec473: /* 8ec473: lea ecx, [edi + 0x288] */
  ecx = (uint32_t)(edi + 0x288u);
/* 8ec479: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8ec47c: call dword ptr [0xcfab1c] */
  esp -= 4; W32(esp, 0x8ec482u); SPILL(); f_4e21c1(); if (g_unwind) return; /* Core!?GetAbsMax@FVector@@QBEMXZ */ RELOAD();
/* 8ec482: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8ec485: fld dword ptr [edi + 0xf0] */
  { double v = F32((uint32_t)(edi + 0xf0u)); FPUSH(v); }
/* 8ec48b: mov esi, dword ptr [ebx + 0x5c] */
  esi = R32((uint32_t)(ebx + 0x5cu));
/* 8ec48e: fdiv dword ptr [ebp - 0x18] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8ec491: fmul dword ptr [ebx + 0xd8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xd8u)));
/* 8ec497: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8ec49a: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 8ec49d: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* 8ec4a0: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 8ec4a3: fmul dword ptr [0xa1e2b4] */
  ST0 = ST0 * (F32((uint32_t)(0xa1e2b4u)));
/* 8ec4a9: fimul dword ptr [ebp - 0x20] */
  ST0 = ST0 * ((double)(int32_t)R32((uint32_t)(ebp + 0xffffffe0u)));
/* 8ec4ac: fild dword ptr [ebx + 0xe0] */
  { double v = (double)(int32_t)R32((uint32_t)(ebx + 0xe0u)); FPUSH(v); }
/* 8ec4b2: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* 8ec4b5: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8ec4b7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ec4b9: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ec4bc: jne 0x8ec4c8 */
  if (!zf) goto L_8ec4c8;
L_8ec4be: /* 8ec4be: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8ec4c1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ec4c3: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8ec4c6: jmp 0x8ec4cb */
  goto L_8ec4cb;
L_8ec4c8: /* 8ec4c8: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
L_8ec4cb: /* 8ec4cb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ec4ce: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ec4cf: call dword ptr [0xcfa5d8] */
  esp -= 4; W32(esp, 0x8ec4d5u); SPILL(); f_4e15aa(); if (g_unwind) return; /* Core!?appRound@@YAHM@Z */ RELOAD();
/* 8ec4d5: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ec4d8: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ec4da: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8ec4dd: jle 0x8ec4e2 */
  if ((zf || sf != of)) goto L_8ec4e2;
L_8ec4df: /* 8ec4df: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
L_8ec4e2: /* 8ec4e2: mov eax, dword ptr [ebx + 0x1d4] */
  eax = R32((uint32_t)(ebx + 0x1d4u));
/* 8ec4e8: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ec4ea: je 0x8ecc20 */
  if (zf) goto L_8ecc20;
L_8ec4f0: /* 8ec4f0: mov eax, dword ptr [edi + 0x278] */
  eax = R32((uint32_t)(edi + 0x278u));
/* 8ec4f6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ec4f8: jne 0x8ec522 */
  if (!zf) goto L_8ec522;
L_8ec4fa: /* 8ec4fa: mov eax, dword ptr [edi + 0xc0] */
  eax = R32((uint32_t)(edi + 0xc0u));
/* 8ec500: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ec502: je 0x8ec50e */
  if (zf) goto L_8ec50e;
L_8ec504: /* 8ec504: mov eax, dword ptr [eax + 0x388] */
  eax = R32((uint32_t)(eax + 0x388u));
/* 8ec50a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ec50c: jne 0x8ec522 */
  if (!zf) goto L_8ec522;
L_8ec50e: /* 8ec50e: mov edx, dword ptr [edi + 0xb0] */
  edx = R32((uint32_t)(edi + 0xb0u));
/* 8ec514: mov eax, dword ptr [edx + 0x388] */
  eax = R32((uint32_t)(edx + 0x388u));
/* 8ec51a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ec51c: je 0x8ecc20 */
  if (zf) goto L_8ecc20;
L_8ec522: /* 8ec522: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* 8ec525: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 8ec528: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x8ec52du); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 8ec52d: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8ec530: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8ec532: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 8ec535: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ec538: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ec53a: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 8ec53d: lea eax, [ebp - 0x54] */
  eax = (uint32_t)(ebp + 0xffffffacu);
/* 8ec540: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ec541: mov eax, dword ptr [ebx + 0x18c] */
  eax = R32((uint32_t)(ebx + 0x18cu));
/* 8ec547: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8ec549: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ec54a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ec54b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ec54c: call dword ptr [edx + 0x114] */
  { uint32_t t = R32((uint32_t)(edx + 0x114u)); esp -= 4; W32(esp, 0x8ec552u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ec552: lea ecx, [ebp - 0x80] */
  ecx = (uint32_t)(ebp + 0xffffff80u);
/* 8ec555: call 0x6c89b3 */
  esp -= 4; W32(esp, 0x8ec55au); SPILL(); f_6c89b3(); if (g_unwind) return; RELOAD();
/* 8ec55a: mov eax, dword ptr [ebx + 0xac] */
  eax = R32((uint32_t)(ebx + 0xacu));
/* 8ec560: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8ec563: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ec564: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 8ec567: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8ec56b: call dword ptr [0xcfa3a0] */
  esp -= 4; W32(esp, 0x8ec571u); SPILL(); f_4e264e(); if (g_unwind) return; /* Core!?Empty@?$TArray@G@@QAEXH@Z */ RELOAD();
/* 8ec571: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8ec574: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8ec57au); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8ec57a: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8ec57e: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
L_8ec585: /* 8ec585: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ec588: cmp edx, dword ptr [ebx + 0x1d4] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x1d4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ec58e: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 8ec591: jge 0x8ec673 */
  if ((sf == of)) goto L_8ec673;
L_8ec597: /* 8ec597: mov ecx, dword ptr [ebx + 0x1d0] */
  ecx = R32((uint32_t)(ebx + 0x1d0u));
/* 8ec59d: mov eax, edx */
  eax = edx;
/* 8ec59f: mov dx, word ptr [ebp - 0x78] */
  edx = (edx & 0xffff0000u) | ((uint32_t)(R16((uint32_t)(ebp + 0xffffff88u))) & 0xffffu);
/* 8ec5a3: xor edi, edi */
  edi = 0;
/* 8ec5a5: imul eax, eax, 0x5c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x5cu);
  eax = (uint32_t)r;
  }
/* 8ec5a8: mov word ptr [ecx + eax + 2], dx */
  W16((uint32_t)(ecx + eax + 0x2u), (edx & 0xffffu));
/* 8ec5ad: mov ecx, dword ptr [ebx + 0x1d0] */
  ecx = R32((uint32_t)(ebx + 0x1d0u));
/* 8ec5b3: movzx edx, word ptr [ecx + eax + 0xe] */
  edx = (uint32_t)(R16((uint32_t)(ecx + eax + 0xeu)));
/* 8ec5b8: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 8ec5bb: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 8ec5be: mov edi, edi */
  edi = edi;
L_8ec5c0: /* 8ec5c0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ec5c3: mov ecx, dword ptr [ebx + 0x1d0] */
  ecx = R32((uint32_t)(ebx + 0x1d0u));
/* 8ec5c9: imul eax, eax, 0x5c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x5cu);
  eax = (uint32_t)r;
  }
/* 8ec5cc: movzx edx, word ptr [eax + ecx + 0x10] */
  edx = (uint32_t)(R16((uint32_t)(eax + ecx + 0x10u)));
/* 8ec5d1: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ec5d3: jge 0x8ec652 */
  if ((sf == of)) goto L_8ec652;
L_8ec5d5: /* 8ec5d5: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8ec5d8: lea esi, [edi + eax] */
  esi = (uint32_t)(edi + eax);
/* 8ec5db: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ec5dc: lea ecx, [ebx + 0x9c] */
  ecx = (uint32_t)(ebx + 0x9cu);
/* 8ec5e2: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8ec5e8u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8ec5e8: movzx ecx, word ptr [eax] */
  ecx = (uint32_t)(R16((uint32_t)(eax)));
/* 8ec5eb: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ec5ee: jg 0x8ec64c */
  if ((!zf && sf == of)) goto L_8ec64c;
L_8ec5f0: /* 8ec5f0: mov edx, dword ptr [ebx + 0xa8] */
  edx = R32((uint32_t)(ebx + 0xa8u));
/* 8ec5f6: mov eax, dword ptr [edx + esi*8] */
  eax = R32((uint32_t)(edx + esi*8));
/* 8ec5f9: mov ecx, dword ptr [edx + esi*8 + 4] */
  ecx = R32((uint32_t)(edx + esi*8 + 0x4u));
/* 8ec5fd: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 8ec600: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 8ec603: xor esi, esi */
  esi = 0;
L_8ec605: /* 8ec605: cmp esi, 3 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ec608: jge 0x8ec649 */
  if ((sf == of)) goto L_8ec649;
L_8ec60a: /* 8ec60a: lea edx, [esi + esi] */
  edx = (uint32_t)(esi + esi);
/* 8ec60d: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* 8ec610: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
L_8ec612: /* 8ec612: movzx eax, word ptr [eax] */
  eax = (uint32_t)(R16((uint32_t)(eax)));
/* 8ec615: mov edx, dword ptr [ebx + 0xc0] */
  edx = R32((uint32_t)(ebx + 0xc0u));
/* 8ec61b: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 8ec61e: movzx ecx, word ptr [edx + ecx*4] */
  ecx = (uint32_t)(R16((uint32_t)(edx + ecx*4)));
/* 8ec622: cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ec625: jl 0x8ec636 */
  if ((sf != of)) goto L_8ec636;
L_8ec627: /* 8ec627: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ec628: lea ecx, [ebx + 0xb4] */
  ecx = (uint32_t)(ebx + 0xb4u);
/* 8ec62e: call dword ptr [0xcfa3ac] */
  esp -= 4; W32(esp, 0x8ec634u); SPILL(); f_4e173f(); if (g_unwind) return; /* Core!??R?$TArray@G@@QAEAAGH@Z */ RELOAD();
/* 8ec634: jmp 0x8ec612 */
  goto L_8ec612;
L_8ec636: /* 8ec636: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8ec639: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* 8ec63c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ec63d: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 8ec640: call dword ptr [0xcfab0c] */
  esp -= 4; W32(esp, 0x8ec646u); SPILL(); f_4e30f8(); if (g_unwind) return; /* Core!?AddItem@?$TArray@G@@QAEHABG@Z */ RELOAD();
/* 8ec646: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8ec647: jmp 0x8ec605 */
  goto L_8ec605;
L_8ec649: /* 8ec649: inc dword ptr [ebp - 0x14] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
L_8ec64c: /* 8ec64c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8ec64d: jmp 0x8ec5c0 */
  goto L_8ec5c0;
L_8ec652: /* 8ec652: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 8ec654: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ec656: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8ec659: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8ec65fu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8ec65f: mov ecx, dword ptr [ebp - 0x60] */
  ecx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8ec662: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ec665: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8ec668: mov dword ptr [ecx + eax*4], edx */
  W32((uint32_t)(ecx + eax*4), edx);
/* 8ec66b: inc dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* 8ec66e: jmp 0x8ec585 */
  goto L_8ec585;
L_8ec673: /* 8ec673: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8ec676: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ec678: je 0x8ec737 */
  if (zf) goto L_8ec737;
L_8ec67e: /* 8ec67e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8ec681: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ec684: add eax, 0xa8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8ec689: mov ecx, esp */
  ecx = esp;
/* 8ec68b: mov dword ptr [ebp + 0x10], esp */
  W32((uint32_t)(ebp + 0x10u), esp);
/* 8ec68e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ec68f: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x8ec695u); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 8ec695: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8ec698: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 8ec69b: mov eax, dword ptr [ecx + 0x30] */
  eax = R32((uint32_t)(ecx + 0x30u));
/* 8ec69e: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8ec6a0: xor ecx, ecx */
  ecx = 0;
/* 8ec6a2: cmp dword ptr [eax + 0x540], 7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x540u))); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ec6a9: sete cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8ec6ac: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ec6ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ec6af: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ec6b1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ec6b3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ec6b5: mov ecx, esi */
  ecx = esi;
/* 8ec6b7: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x8ec6bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ec6ba: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8ec6bd: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8ec6c0: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x8ec6c6u); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 8ec6c6: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 8ec6c9: mov eax, dword ptr [eax + 0x100] */
  eax = R32((uint32_t)(eax + 0x100u));
/* 8ec6cf: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* 8ec6d2: test dword ptr [edi + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ec6dc: je 0x8ec713 */
  if (zf) goto L_8ec713;
L_8ec6de: /* 8ec6de: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8ec6e1: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8ec6e4: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 8ec6e7: test dword ptr [eax + 0x534], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ec6f1: je 0x8ec713 */
  if (zf) goto L_8ec713;
L_8ec6f3: /* 8ec6f3: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8ec6f5: mov byte ptr [ebp + 0x10], 0x4b */
  W8((uint32_t)(ebp + 0x10u), 0x4bu);
/* 8ec6f9: mov byte ptr [ebp + 0x11], 0xff */
  W8((uint32_t)(ebp + 0x11u), 0xffu);
/* 8ec6fd: mov byte ptr [ebp + 0x12], 0x78 */
  W8((uint32_t)(ebp + 0x12u), 0x78u);
/* 8ec701: mov byte ptr [ebp + 0x13], 0xff */
  W8((uint32_t)(ebp + 0x13u), 0xffu);
/* 8ec705: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 8ec708: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ec709: mov ecx, esi */
  ecx = esi;
/* 8ec70b: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x8ec70eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ec70e: jmp 0x8ec894 */
  goto L_8ec894;
L_8ec713: /* 8ec713: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 8ec716: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ec717: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 8ec71a: call 0x6c3e7c */
  esp -= 4; W32(esp, 0x8ec71fu); SPILL(); f_6c3e7c(); if (g_unwind) return; RELOAD();
/* 8ec71f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ec720: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 8ec723: call 0x6c576d */
  esp -= 4; W32(esp, 0x8ec728u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 8ec728: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 8ec72a: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8ec72c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ec72d: mov ecx, esi */
  ecx = esi;
/* 8ec72f: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x8ec732u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ec732: jmp 0x8ec894 */
  goto L_8ec894;
L_8ec737: /* 8ec737: test dword ptr [edi + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ec741: je 0x8ec7b1 */
  if (zf) goto L_8ec7b1;
L_8ec743: /* 8ec743: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8ec746: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8ec749: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 8ec74c: test dword ptr [eax + 0x534], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ec756: je 0x8ec7b1 */
  if (zf) goto L_8ec7b1;
L_8ec758: /* 8ec758: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ec75b: mov ecx, esp */
  ecx = esp;
/* 8ec75d: mov dword ptr [ebp + 0x10], esp */
  W32((uint32_t)(ebp + 0x10u), esp);
/* 8ec760: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ec762: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ec765: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 8ec76c: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8ec76f: mov edx, esp */
  edx = esp;
/* 8ec771: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8ec773: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 8ec77a: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8ec77d: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8ec780: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 8ec787: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 8ec78a: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8ec78d: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x8ec793u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 8ec793: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8ec795: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ec797: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ec799: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ec79b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ec79d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ec79f: mov ecx, esi */
  ecx = esi;
/* 8ec7a1: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x8ec7a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ec7a4: mov al, 0x80 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x80u) & 0xffu);
/* 8ec7a6: mov byte ptr [ebp + 0x10], al */
  W8((uint32_t)(ebp + 0x10u), (eax & 0xffu));
/* 8ec7a9: mov byte ptr [ebp + 0x12], al */
  W8((uint32_t)(ebp + 0x12u), (eax & 0xffu));
/* 8ec7ac: jmp 0x8ec881 */
  goto L_8ec881;
L_8ec7b1: /* 8ec7b1: test byte ptr [edi + 0x86], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi + 0x86u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ec7b8: je 0x8ec7c8 */
  if (zf) goto L_8ec7c8;
L_8ec7ba: /* 8ec7ba: mov ecx, dword ptr [edi + 0x5c] */
  ecx = R32((uint32_t)(edi + 0x5cu));
/* 8ec7bd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ec7bf: je 0x8ec7c8 */
  if (zf) goto L_8ec7c8;
L_8ec7c1: /* 8ec7c1: call 0x6cadd5 */
  esp -= 4; W32(esp, 0x8ec7c6u); SPILL(); f_6cadd5(); if (g_unwind) return; RELOAD();
/* 8ec7c6: jmp 0x8ec7ca */
  goto L_8ec7ca;
L_8ec7c8: /* 8ec7c8: mov eax, edi */
  eax = edi;
L_8ec7ca: /* 8ec7ca: mov ecx, dword ptr [eax + 0x84] */
  ecx = R32((uint32_t)(eax + 0x84u));
/* 8ec7d0: test ch, 0x20 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ec7d3: jne 0x8ec879 */
  if (!zf) goto L_8ec879;
L_8ec7d9: /* 8ec7d9: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8ec7dc: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8ec7df: call 0x6cbd7a */
  esp -= 4; W32(esp, 0x8ec7e4u); SPILL(); f_6cbd7a(); if (g_unwind) return; RELOAD();
/* 8ec7e4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ec7e6: je 0x8ec879 */
  if (zf) goto L_8ec879;
L_8ec7ec: /* 8ec7ec: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8ec7ef: movzx ecx, byte ptr [eax + 0x2b1] */
  ecx = (uint32_t)(R8((uint32_t)(eax + 0x2b1u)));
/* 8ec7f6: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8ec7f9: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ec7fc: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 8ec7ff: add edx, 0xa8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8ec805: mov ecx, esp */
  ecx = esp;
/* 8ec807: mov dword ptr [ebp - 0x24], esp */
  W32((uint32_t)(ebp + 0xffffffdcu), esp);
/* 8ec80a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ec80b: xor edi, edi */
  edi = 0;
/* 8ec80d: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x8ec813u); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 8ec813: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8ec816: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 8ec819: mov edx, dword ptr [edx + 0x30] */
  edx = R32((uint32_t)(edx + 0x30u));
/* 8ec81c: mov esi, dword ptr [edx + 0x540] */
  esi = R32((uint32_t)(edx + 0x540u));
/* 8ec822: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8ec825: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8ec827: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 8ec82a: xor ebx, ebx */
  ebx = 0;
/* 8ec82c: cmp esi, 7 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ec82f: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8ec832: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ec833: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ec834: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ec836: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ec837: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ec839: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x8ec83cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ec83c: mov ebx, dword ptr [ebp - 0x24] */
  ebx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8ec83f: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
L_8ec842: /* 8ec842: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ec844: je 0x8ec862 */
  if (zf) goto L_8ec862;
L_8ec846: /* 8ec846: cmp edi, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ec849: jge 0x8ec862 */
  if ((sf == of)) goto L_8ec862;
L_8ec84b: /* 8ec84b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8ec84d: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8ec850: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8ec852: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 8ec857: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ec858: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ec859: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x8ec85cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ec85c: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 8ec85f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8ec860: jmp 0x8ec842 */
  goto L_8ec842;
L_8ec862: /* 8ec862: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8ec865: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8ec868: mov edx, dword ptr [edx + 0xb8] */
  edx = R32((uint32_t)(edx + 0xb8u));
/* 8ec86e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8ec870: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ec871: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x8ec874u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ec874: mov esi, dword ptr [ebp + 0x18] */
  esi = R32((uint32_t)(ebp + 0x18u));
/* 8ec877: jmp 0x8ec894 */
  goto L_8ec894;
L_8ec879: /* 8ec879: mov byte ptr [ebp + 0x10], 0xff */
  W8((uint32_t)(ebp + 0x10u), 0xffu);
/* 8ec87d: mov byte ptr [ebp + 0x12], 0xff */
  W8((uint32_t)(ebp + 0x12u), 0xffu);
L_8ec881: /* 8ec881: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8ec883: mov byte ptr [ebp + 0x13], 0xff */
  W8((uint32_t)(ebp + 0x13u), 0xffu);
/* 8ec887: mov byte ptr [ebp + 0x11], 0xff */
  W8((uint32_t)(ebp + 0x11u), 0xffu);
/* 8ec88b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8ec88e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ec88f: mov ecx, esi */
  ecx = esi;
/* 8ec891: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x8ec894u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8ec894: /* 8ec894: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8ec896: lea eax, [ebx + 0x184] */
  eax = (uint32_t)(ebx + 0x184u);
/* 8ec89c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ec89d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ec89f: mov ecx, esi */
  ecx = esi;
/* 8ec8a1: call dword ptr [edx + 0x50] */
  { uint32_t t = R32((uint32_t)(edx + 0x50u)); esp -= 4; W32(esp, 0x8ec8a4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ec8a4: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8ec8a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ec8a7: lea eax, [ebp - 0x80] */
  eax = (uint32_t)(ebp + 0xffffff80u);
/* 8ec8aa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ec8ab: mov ecx, esi */
  ecx = esi;
/* 8ec8ad: call dword ptr [edx + 0x58] */
  { uint32_t t = R32((uint32_t)(edx + 0x58u)); esp -= 4; W32(esp, 0x8ec8b0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ec8b0: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 8ec8b3: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8ec8b6: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8ec8b9: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x8ec8beu); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 8ec8be: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ec8c0: je 0x8ec95a */
  if (zf) goto L_8ec95a;
L_8ec8c6: /* 8ec8c6: mov eax, dword ptr [0xcebda0] */
  eax = R32((uint32_t)(0xcebda0u));
/* 8ec8cb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ec8cd: jne 0x8ec950 */
  if (!zf) goto L_8ec950;
L_8ec8d3: /* 8ec8d3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ec8d5: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 8ec8d8: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8ec8deu); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8ec8de: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 8ec8e3: mov ecx, 0xb88020 */
  ecx = 0xb88020u;
/* 8ec8e8: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8ec8eeu); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8ec8ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ec8f0: jne 0x8ec90a */
  if (!zf) goto L_8ec90a;
L_8ec8f2: /* 8ec8f2: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8ec8f7: push 0xaee150 */
  { uint32_t v = 0xaee150u; esp -= 4; W32(esp, v); }
/* 8ec8fc: push 0xaee194 */
  { uint32_t v = 0xaee194u; esp -= 4; W32(esp, v); }
/* 8ec901: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8ec907u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8ec907: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8ec90a: /* 8ec90a: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8ec910u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8ec910: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8ec916: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8ec918: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8ec91b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ec91d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ec91e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ec920: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ec922: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ec923: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ec924: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 8ec929: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8ec92fu); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8ec92f: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 8ec935: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ec938: push 0xcebda0 */
  { uint32_t v = 0xcebda0u; esp -= 4; W32(esp, v); }
/* 8ec93d: mov dword ptr [0xcebda0], eax */
  W32((uint32_t)(0xcebda0u), eax);
/* 8ec942: call 0x6c1203 */
  esp -= 4; W32(esp, 0x8ec947u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 8ec947: mov eax, dword ptr [0xcebda0] */
  eax = R32((uint32_t)(0xcebda0u));
/* 8ec94c: or dword ptr [eax + 0x5c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x5cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x5cu), r);
  }
L_8ec950: /* 8ec950: mov eax, dword ptr [0xcebda0] */
  eax = R32((uint32_t)(0xcebda0u));
/* 8ec955: jmp 0x8ec9ef */
  goto L_8ec9ef;
L_8ec95a: /* 8ec95a: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 8ec95d: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 8ec960: cmp dword ptr [edx + 0x540], 7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x540u))); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8ec967: jne 0x8ec9fd */
  if (!zf) goto L_8ec9fd;
L_8ec96d: /* 8ec96d: mov eax, dword ptr [0xcebd9c] */
  eax = R32((uint32_t)(0xcebd9cu));
/* 8ec972: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ec974: jne 0x8ec9ea */
  if (!zf) goto L_8ec9ea;
L_8ec976: /* 8ec976: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ec978: lea ecx, [ebp + 0x10] */
  ecx = (uint32_t)(ebp + 0x10u);
/* 8ec97b: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8ec981u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8ec981: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 8ec986: mov ecx, 0xb88020 */
  ecx = 0xb88020u;
/* 8ec98b: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8ec991u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8ec991: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ec993: jne 0x8ec9ad */
  if (!zf) goto L_8ec9ad;
L_8ec995: /* 8ec995: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8ec99a: push 0xaee150 */
  { uint32_t v = 0xaee150u; esp -= 4; W32(esp, v); }
/* 8ec99f: push 0xaee194 */
  { uint32_t v = 0xaee194u; esp -= 4; W32(esp, v); }
/* 8ec9a4: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8ec9aau); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8ec9aa: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8ec9ad: /* 8ec9ad: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8ec9b3u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8ec9b3: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8ec9b9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8ec9bb: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8ec9be: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ec9c0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ec9c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ec9c3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ec9c5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ec9c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ec9c7: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 8ec9cc: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8ec9d2u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8ec9d2: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 8ec9d8: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ec9db: push 0xcebd9c */
  { uint32_t v = 0xcebd9cu; esp -= 4; W32(esp, v); }
/* 8ec9e0: mov dword ptr [0xcebd9c], eax */
  W32((uint32_t)(0xcebd9cu), eax);
/* 8ec9e5: call 0x6c1203 */
  esp -= 4; W32(esp, 0x8ec9eau); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
L_8ec9ea: /* 8ec9ea: mov eax, dword ptr [0xcebd9c] */
  eax = R32((uint32_t)(0xcebd9cu));
L_8ec9ef: /* 8ec9ef: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8ec9f1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ec9f3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ec9f5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ec9f7: mov ecx, esi */
  ecx = esi;
/* 8ec9f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ec9fa: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x8ec9fdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8ec9fd: /* 8ec9fd: xor edi, edi */
  edi = 0;
L_8ec9ff: /* 8ec9ff: xor eax, eax */
  eax = 0;
/* 8eca01: imul eax, eax, 0x2c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x2cu);
  eax = (uint32_t)r;
  }
/* 8eca04: lea ecx, [eax + ebx] */
  ecx = (uint32_t)(eax + ebx);
/* 8eca07: cmp edi, dword ptr [ecx + 0x1d4] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0x1d4u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eca0d: mov dword ptr [ebp + 0x10], edi */
  W32((uint32_t)(ebp + 0x10u), edi);
/* 8eca10: jge 0x8ecb82 */
  if ((sf == of)) goto L_8ecb82;
L_8eca16: /* 8eca16: mov esi, dword ptr [ebx + 0x1d0] */
  esi = R32((uint32_t)(ebx + 0x1d0u));
/* 8eca1c: mov edx, dword ptr [ebp - 0x60] */
  edx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8eca1f: mov eax, edi */
  eax = edi;
/* 8eca21: imul eax, eax, 0x5c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x5cu);
  eax = (uint32_t)r;
  }
/* 8eca24: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8eca26: cmp dword ptr [edx + edi*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + edi*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8eca2a: je 0x8ecb7c */
  if (zf) goto L_8ecb7c;
L_8eca30: /* 8eca30: mov ecx, dword ptr [ecx + 0x1d0] */
  ecx = R32((uint32_t)(ecx + 0x1d0u));
/* 8eca36: cmp word ptr [ecx + eax + 0x10], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ecx + eax + 0x10u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 8eca3c: je 0x8ecb7c */
  if (zf) goto L_8ecb7c;
L_8eca42: /* 8eca42: mov edi, dword ptr [ebp - 0x2c] */
  edi = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8eca45: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* 8eca47: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8eca48: mov ecx, ebx */
  ecx = ebx;
/* 8eca4a: call dword ptr [edx + 0x90] */
  { uint32_t t = R32((uint32_t)(edx + 0x90u)); esp -= 4; W32(esp, 0x8eca50u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eca50: movzx ecx, word ptr [esi] */
  ecx = (uint32_t)(R16((uint32_t)(esi)));
/* 8eca53: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8eca55: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8eca56: mov edi, dword ptr [ebx + 0xcc] */
  edi = R32((uint32_t)(ebx + 0xccu));
/* 8eca5c: mov ecx, dword ptr [edi + ecx*8 + 4] */
  ecx = R32((uint32_t)(edi + ecx*8 + 0x4u));
/* 8eca60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8eca61: mov ecx, eax */
  ecx = eax;
/* 8eca63: call dword ptr [edx + 0x110] */
  { uint32_t t = R32((uint32_t)(edx + 0x110u)); esp -= 4; W32(esp, 0x8eca69u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eca69: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8eca6c: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8eca6f: mov edi, eax */
  edi = eax;
/* 8eca71: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x8eca76u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 8eca76: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8eca78: jne 0x8ecab8 */
  if (!zf) goto L_8ecab8;
L_8eca7a: /* 8eca7a: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8eca7d: mov ecx, dword ptr [eax + 0x6c] */
  ecx = R32((uint32_t)(eax + 0x6cu));
/* 8eca80: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8eca82: jne 0x8ecab8 */
  if (!zf) goto L_8ecab8;
L_8eca84: /* 8eca84: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8eca87: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 8eca89: movzx eax, word ptr [esi] */
  eax = (uint32_t)(R16((uint32_t)(esi)));
/* 8eca8c: mov edx, dword ptr [ecx + 0x2a4] */
  edx = R32((uint32_t)(ecx + 0x2a4u));
/* 8eca92: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8eca94: jge 0x8ecaa4 */
  if ((sf == of)) goto L_8ecaa4;
L_8eca96: /* 8eca96: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8eca98: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eca99: call dword ptr [edx + 0xa8] */
  { uint32_t t = R32((uint32_t)(edx + 0xa8u)); esp -= 4; W32(esp, 0x8eca9fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8eca9f: jmp 0x8ecb47 */
  goto L_8ecb47;
L_8ecaa4: /* 8ecaa4: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8ecaa7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8ecaa9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ecaab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ecaad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ecaaf: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ecab0: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x8ecab3u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ecab3: jmp 0x8ecb56 */
  goto L_8ecb56;
L_8ecab8: /* 8ecab8: mov eax, dword ptr [0xcebd98] */
  eax = R32((uint32_t)(0xcebd98u));
/* 8ecabd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ecabf: jne 0x8ecb42 */
  if (!zf) goto L_8ecb42;
L_8ecac5: /* 8ecac5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ecac7: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8ecaca: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8ecad0u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8ecad0: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 8ecad5: mov ecx, 0xb88020 */
  ecx = 0xb88020u;
/* 8ecada: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8ecae0u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8ecae0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ecae2: jne 0x8ecafc */
  if (!zf) goto L_8ecafc;
L_8ecae4: /* 8ecae4: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8ecae9: push 0xaee150 */
  { uint32_t v = 0xaee150u; esp -= 4; W32(esp, v); }
/* 8ecaee: push 0xaee194 */
  { uint32_t v = 0xaee194u; esp -= 4; W32(esp, v); }
/* 8ecaf3: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8ecaf9u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8ecaf9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8ecafc: /* 8ecafc: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8ecb02u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8ecb02: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8ecb08: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8ecb0a: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8ecb0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ecb0f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ecb10: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ecb12: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ecb14: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ecb15: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ecb16: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 8ecb1b: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8ecb21u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8ecb21: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 8ecb27: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ecb2a: push 0xcebd98 */
  { uint32_t v = 0xcebd98u; esp -= 4; W32(esp, v); }
/* 8ecb2f: mov dword ptr [0xcebd98], eax */
  W32((uint32_t)(0xcebd98u), eax);
/* 8ecb34: call 0x6c1203 */
  esp -= 4; W32(esp, 0x8ecb39u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 8ecb39: mov eax, dword ptr [0xcebd98] */
  eax = R32((uint32_t)(0xcebd98u));
/* 8ecb3e: or dword ptr [eax + 0x5c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x5cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x5cu), r);
  }
L_8ecb42: /* 8ecb42: mov eax, dword ptr [0xcebd98] */
  eax = R32((uint32_t)(0xcebd98u));
L_8ecb47: /* 8ecb47: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8ecb4a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8ecb4c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ecb4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ecb50: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ecb52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ecb53: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x8ecb56u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8ecb56: /* 8ecb56: movzx eax, word ptr [esi + 6] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x6u)));
/* 8ecb5a: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 8ecb5d: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8ecb60: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8ecb62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ecb63: movzx eax, word ptr [esi + 4] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x4u)));
/* 8ecb67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ecb68: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8ecb6b: mov eax, dword ptr [eax + edi*4] */
  eax = R32((uint32_t)(eax + edi*4));
/* 8ecb6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ecb6f: movzx eax, word ptr [esi + 2] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x2u)));
/* 8ecb73: add eax, dword ptr [ebp - 0x28] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd8u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8ecb76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ecb77: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ecb79: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0x8ecb7cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8ecb7c: /* 8ecb7c: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8ecb7d: jmp 0x8ec9ff */
  goto L_8ec9ff;
L_8ecb82: /* 8ecb82: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8ecb85: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8ecb88: mov eax, dword ptr [edx + 0x104] */
  eax = R32((uint32_t)(edx + 0x104u));
/* 8ecb8e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ecb90: je 0x8ecc07 */
  if (zf) goto L_8ecc07;
L_8ecb92: /* 8ecb92: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 8ecb95: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8ecb97: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ecb98: lea ecx, [ebp - 0xe0] */
  ecx = (uint32_t)(ebp + 0xffffff20u);
/* 8ecb9e: call 0x6c460b */
  esp -= 4; W32(esp, 0x8ecba3u); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 8ecba3: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8ecba6: mov eax, dword ptr [0xcfa350] */
  eax = R32((uint32_t)(0xcfa350u));
/* 8ecbab: add esi, 0x8c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8ecbb1: mov ecx, 7 */
  ecx = 0x7u;
/* 8ecbb6: lea edi, [ebp - 0x4c] */
  edi = (uint32_t)(ebp + 0xffffffb4u);
/* 8ecbb9: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ecbbb: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8ecbbe: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8ecbc0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ecbc1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ecbc3: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 8ecbc7: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x8ecbcau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ecbca: mov byte ptr [ebp + 0x18], 0xff */
  W8((uint32_t)(ebp + 0x18u), 0xffu);
/* 8ecbce: mov byte ptr [ebp + 0x19], 0x5a */
  W8((uint32_t)(ebp + 0x19u), 0x5au);
/* 8ecbd2: mov byte ptr [ebp + 0x1a], 0x48 */
  W8((uint32_t)(ebp + 0x1au), 0x48u);
/* 8ecbd6: mov byte ptr [ebp + 0x1b], 0xff */
  W8((uint32_t)(ebp + 0x1bu), 0xffu);
/* 8ecbda: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8ecbdd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ecbde: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ecbe1: mov edi, esp */
  edi = esp;
/* 8ecbe3: mov ecx, 7 */
  ecx = 0x7u;
/* 8ecbe8: lea esi, [ebp - 0x4c] */
  esi = (uint32_t)(ebp + 0xffffffb4u);
/* 8ecbeb: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8ecbed: lea ecx, [ebp - 0xe0] */
  ecx = (uint32_t)(ebp + 0xffffff20u);
/* 8ecbf3: call 0x6c9eb7 */
  esp -= 4; W32(esp, 0x8ecbf8u); SPILL(); f_6c9eb7(); if (g_unwind) return; RELOAD();
/* 8ecbf8: lea ecx, [ebp - 0xe0] */
  ecx = (uint32_t)(ebp + 0xffffff20u);
/* 8ecbfe: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 8ecc02: call 0x6cadcb */
  esp -= 4; W32(esp, 0x8ecc07u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
L_8ecc07: /* 8ecc07: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 8ecc0a: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8ecc0e: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x8ecc13u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 8ecc13: lea ecx, [ebp - 0x7c] */
  ecx = (uint32_t)(ebp + 0xffffff84u);
/* 8ecc16: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8ecc1a: call dword ptr [0xcfa288] */
  esp -= 4; W32(esp, 0x8ecc20u); SPILL(); f_4e2ecd(); if (g_unwind) return; /* Core!??1?$TArray@G@@QAE@XZ */ RELOAD();
L_8ecc20: /* 8ecc20: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 8ecc26: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ecc2a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ecc30u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ecc30: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ecc33: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ecc34: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ecc35: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ecc3c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ecc3d: mov esp, ebp */
  esp = ebp;
/* 8ecc3f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ecc40: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_8ecc43(void) {
  LOAD_REGS();
L_8ecc43: /* 8ecc43: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8ecc46: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ecc4b: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 8ecc4e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ecc4f: mov dword ptr [ebp - 0x50], edx */
  W32((uint32_t)(ebp + 0xffffffb0u), edx);
/* 8ecc52: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ecc57u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ecc57(); return;
}

void f_8ecc57(void) {
  LOAD_REGS();
L_8ecc57: /* 8ecc57: push 0xa1e288 */
  { uint32_t v = 0xa1e288u; esp -= 4; W32(esp, v); }
/* 8ecc5c: push 0xaee144 */
  { uint32_t v = 0xaee144u; esp -= 4; W32(esp, v); }
/* 8ecc61: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ecc67u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ecc67: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ecc6a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ecc6c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ecc6e: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ecc73u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8ecc73: guest_badaddr(0x8ecc73); return;
}

void f_8ecee0(void) {
  LOAD_REGS();
L_8ecee0: /* 8ecee0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ecee1: mov ebp, esp */
  ebp = esp;
/* 8ecee3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ecee5: push 0x9d8e80 */
  { uint32_t v = 0x9d8e80u; esp -= 4; W32(esp, v); }
/* 8eceea: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ecef0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ecef1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ecef8: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ecefb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ecefc: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ecefd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ecefe: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 8ecf01: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ecf04: mov esi, ecx */
  esi = ecx;
/* 8ecf06: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ecf07: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* 8ecf0a: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ecf11: call 0x6ca029 */
  esp -= 4; W32(esp, 0x8ecf16u); SPILL(); f_6ca029(); if (g_unwind) return; RELOAD();
/* 8ecf16: lea eax, [esi + 0x18c] */
  eax = (uint32_t)(esi + 0x18cu);
/* 8ecf1c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ecf1d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ecf1e: call 0x6ca209 */
  esp -= 4; W32(esp, 0x8ecf23u); SPILL(); f_6ca209(); if (g_unwind) return; RELOAD();
/* 8ecf23: mov ebx, dword ptr [0xcfa280] */
  ebx = R32((uint32_t)(0xcfa280u));
/* 8ecf29: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ecf2c: lea ecx, [esi + 0x1a0] */
  ecx = (uint32_t)(esi + 0x1a0u);
/* 8ecf32: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ecf33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ecf34: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8ecf36u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ecf36: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ecf39: lea edx, [esi + 0x134] */
  edx = (uint32_t)(esi + 0x134u);
/* 8ecf3f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ecf40: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ecf41: call 0x6cb447 */
  esp -= 4; W32(esp, 0x8ecf46u); SPILL(); f_6cb447(); if (g_unwind) return; RELOAD();
/* 8ecf46: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ecf49: lea eax, [esi + 0x14c] */
  eax = (uint32_t)(esi + 0x14cu);
/* 8ecf4f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ecf50: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ecf51: call 0x6c67df */
  esp -= 4; W32(esp, 0x8ecf56u); SPILL(); f_6c67df(); if (g_unwind) return; RELOAD();
/* 8ecf56: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ecf59: lea ecx, [esi + 0x158] */
  ecx = (uint32_t)(esi + 0x158u);
/* 8ecf5f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ecf60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ecf61: call 0x6c2b2b */
  esp -= 4; W32(esp, 0x8ecf66u); SPILL(); f_6c2b2b(); if (g_unwind) return; RELOAD();
/* 8ecf66: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ecf69: lea edx, [esi + 0x140] */
  edx = (uint32_t)(esi + 0x140u);
/* 8ecf6f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ecf70: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ecf71: call 0x6c2b12 */
  esp -= 4; W32(esp, 0x8ecf76u); SPILL(); f_6c2b12(); if (g_unwind) return; RELOAD();
/* 8ecf76: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ecf79: lea eax, [esi + 0x17c] */
  eax = (uint32_t)(esi + 0x17cu);
/* 8ecf7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ecf80: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ecf81: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8ecf83u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ecf83: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ecf86: lea ecx, [esi + 0x180] */
  ecx = (uint32_t)(esi + 0x180u);
/* 8ecf8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ecf8d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ecf8e: call ebx */
  { uint32_t t = ebx; esp -= 4; W32(esp, 0x8ecf90u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ecf90: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ecf93: lea edx, [esi + 0x164] */
  edx = (uint32_t)(esi + 0x164u);
/* 8ecf99: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ecf9a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ecf9b: call 0x6c526d */
  esp -= 4; W32(esp, 0x8ecfa0u); SPILL(); f_6c526d(); if (g_unwind) return; RELOAD();
/* 8ecfa0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ecfa3: lea eax, [esi + 0x170] */
  eax = (uint32_t)(esi + 0x170u);
/* 8ecfa9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ecfaa: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ecfab: call 0x6c7eb4 */
  esp -= 4; W32(esp, 0x8ecfb0u); SPILL(); f_6c7eb4(); if (g_unwind) return; RELOAD();
/* 8ecfb0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ecfb3: mov ecx, edi */
  ecx = edi;
/* 8ecfb5: call dword ptr [0xcfa42c] */
  esp -= 4; W32(esp, 0x8ecfbbu); SPILL(); f_4e4101(); if (g_unwind) return; /* Core!?IsPersistent@FArchive@@QAEHXZ */ RELOAD();
/* 8ecfbb: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ecfbd: jne 0x8ed06f */
  if (!zf) goto L_8ed06f;
L_8ecfc3: /* 8ecfc3: lea ebx, [esi + 0x1b0] */
  ebx = (uint32_t)(esi + 0x1b0u);
/* 8ecfc9: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ecfca: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ecfcb: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x8ecfd1u); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 8ecfd1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ecfd4: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 8ecfd7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ecfd8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ecfd9: call 0x6c5dd0 */
  esp -= 4; W32(esp, 0x8ecfdeu); SPILL(); f_6c5dd0(); if (g_unwind) return; RELOAD();
/* 8ecfde: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ecfe1: add ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8ecfe4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ecfe5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ecfe6: call 0x6cbd75 */
  esp -= 4; W32(esp, 0x8ecfebu); SPILL(); f_6cbd75(); if (g_unwind) return; RELOAD();
/* 8ecfeb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ecfee: lea ebx, [esi + 0x1dc] */
  ebx = (uint32_t)(esi + 0x1dcu);
/* 8ecff4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ecff5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ecff6: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x8ecffcu); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 8ecffc: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ecfff: lea edx, [ebx + 4] */
  edx = (uint32_t)(ebx + 0x4u);
/* 8ed002: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ed003: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ed004: call 0x6c5dd0 */
  esp -= 4; W32(esp, 0x8ed009u); SPILL(); f_6c5dd0(); if (g_unwind) return; RELOAD();
/* 8ed009: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ed00c: add ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8ed00f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ed010: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ed011: call 0x6cbd75 */
  esp -= 4; W32(esp, 0x8ed016u); SPILL(); f_6cbd75(); if (g_unwind) return; RELOAD();
/* 8ed016: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ed019: lea ebx, [esi + 0x208] */
  ebx = (uint32_t)(esi + 0x208u);
/* 8ed01f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ed020: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ed021: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x8ed027u); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 8ed027: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ed02a: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 8ed02d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ed02e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ed02f: call 0x6c5dd0 */
  esp -= 4; W32(esp, 0x8ed034u); SPILL(); f_6c5dd0(); if (g_unwind) return; RELOAD();
/* 8ed034: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ed037: add ebx, 0x20 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8ed03a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ed03b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ed03c: call 0x6cbd75 */
  esp -= 4; W32(esp, 0x8ed041u); SPILL(); f_6cbd75(); if (g_unwind) return; RELOAD();
/* 8ed041: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ed044: add esi, 0x234 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x234u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8ed04a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ed04b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ed04c: call dword ptr [0xcfa1b4] */
  esp -= 4; W32(esp, 0x8ed052u); SPILL(); f_4e415b(); if (g_unwind) return; /* Core!??6@YAAAVFArchive@@AAV0@AAM@Z */ RELOAD();
/* 8ed052: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ed055: lea edx, [esi + 4] */
  edx = (uint32_t)(esi + 0x4u);
/* 8ed058: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ed059: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ed05a: call 0x6c5dd0 */
  esp -= 4; W32(esp, 0x8ed05fu); SPILL(); f_6c5dd0(); if (g_unwind) return; RELOAD();
/* 8ed05f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ed062: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8ed065: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ed066: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ed067: call 0x6cbd75 */
  esp -= 4; W32(esp, 0x8ed06cu); SPILL(); f_6cbd75(); if (g_unwind) return; RELOAD();
/* 8ed06c: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8ed06f: /* 8ed06f: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ed072: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ed073: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ed074: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ed07b: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ed07c: mov esp, ebp */
  esp = ebp;
/* 8ed07e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ed07f: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8ed082(void) {
  LOAD_REGS();
L_8ed082: /* 8ed082: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ed085: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ed08a: lea ecx, [ebp - 0x14] */
  ecx = (uint32_t)(ebp + 0xffffffecu);
/* 8ed08d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ed08e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 8ed091: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ed096u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ed096(); return;
}

void f_8ed096(void) {
  LOAD_REGS();
L_8ed096: /* 8ed096: mov esi, dword ptr [0xcfa1ec] */
  esi = R32((uint32_t)(0xcfa1ecu));
/* 8ed09c: push 0xa1e2b8 */
  { uint32_t v = 0xa1e2b8u; esp -= 4; W32(esp, v); }
/* 8ed0a1: push 0xaedf40 */
  { uint32_t v = 0xaedf40u; esp -= 4; W32(esp, v); }
/* 8ed0a6: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8ed0a8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ed0a8: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ed0ab: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ed0ae: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ed0b0: call dword ptr [0xcfa3a8] */
  esp -= 4; W32(esp, 0x8ed0b6u); SPILL(); f_4e27a2(); if (g_unwind) return; /* Core!?GetFullName@UObject@@QBEPBGPAG@Z */ RELOAD();
/* 8ed0b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ed0b7: push 0xaedf48 */
  { uint32_t v = 0xaedf48u; esp -= 4; W32(esp, v); }
/* 8ed0bc: call esi */
  { uint32_t t = esi; esp -= 4; W32(esp, 0x8ed0beu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ed0be: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ed0c1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ed0c3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ed0c5: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ed0cau); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8ed0ca: guest_badaddr(0x8ed0ca); return;
}

void f_8ed150(void) {
  LOAD_REGS();
L_8ed150: /* 8ed150: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ed151: mov esi, dword ptr [esp + 8] */
  esi = R32((uint32_t)(esp + 0x8u));
/* 8ed155: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ed157: je 0x8ed16e */
  if (zf) goto L_8ed16e;
L_8ed159: /* 8ed159: push 0xcecf50 */
  { uint32_t v = 0xcecf50u; esp -= 4; W32(esp, v); }
/* 8ed15e: mov ecx, esi */
  ecx = esi;
/* 8ed160: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8ed166u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8ed166: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ed168: je 0x8ed16e */
  if (zf) goto L_8ed16e;
L_8ed16a: /* 8ed16a: mov eax, esi */
  eax = esi;
/* 8ed16c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ed16d: ret  */
  esp += 4; SPILL(); return;
L_8ed16e: /* 8ed16e: xor eax, eax */
  eax = 0;
/* 8ed170: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ed171: ret  */
  esp += 4; SPILL(); return;
}

void f_8ed190(void) {
  LOAD_REGS();
L_8ed190: /* 8ed190: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ed191: mov ebp, esp */
  ebp = esp;
/* 8ed193: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8ed195: push 0x9d8e90 */
  { uint32_t v = 0x9d8e90u; esp -= 4; W32(esp, v); }
/* 8ed19a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8ed1a0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ed1a1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8ed1a8: sub esp, 0xe4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xe4u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ed1ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ed1af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ed1b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ed1b1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8ed1b4: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 8ed1b7: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8ed1be: call 0x6c3aa8 */
  esp -= 4; W32(esp, 0x8ed1c3u); SPILL(); f_6c3aa8(); if (g_unwind) return; RELOAD();
/* 8ed1c3: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ed1c6: mov ecx, dword ptr [eax + 0x3b0] */
  ecx = R32((uint32_t)(eax + 0x3b0u));
/* 8ed1cc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ed1ce: je 0x8ed700 */
  if (zf) goto L_8ed700;
L_8ed1d4: /* 8ed1d4: mov ecx, dword ptr [eax + 0x280] */
  ecx = R32((uint32_t)(eax + 0x280u));
/* 8ed1da: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8ed1dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ed1de: lea edx, [ebp - 0x6c] */
  edx = (uint32_t)(ebp + 0xffffff94u);
/* 8ed1e1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ed1e2: call dword ptr [eax + 0x70] */
  { uint32_t t = R32((uint32_t)(eax + 0x70u)); esp -= 4; W32(esp, 0x8ed1e5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ed1e5: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ed1e8: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8ed1ea: lea edx, [ebp - 0xd8] */
  edx = (uint32_t)(ebp + 0xffffff28u);
/* 8ed1f0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ed1f1: call dword ptr [eax + 0xb8] */
  { uint32_t t = R32((uint32_t)(eax + 0xb8u)); esp -= 4; W32(esp, 0x8ed1f7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ed1f7: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 8ed1fa: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8ed1fd: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8ed200: mov eax, dword ptr [ebp - 0x6c] */
  eax = R32((uint32_t)(ebp + 0xffffff94u));
/* 8ed203: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 8ed206: lea eax, [ebp - 0x50] */
  eax = (uint32_t)(ebp + 0xffffffb0u);
/* 8ed209: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 8ed20c: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 8ed20f: mov dword ptr [ebp - 0x44], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x3f800000u);
/* 8ed216: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8ed219: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ed21c: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8ed21f: lea edi, [ebp - 0x30] */
  edi = (uint32_t)(ebp + 0xffffffd0u);
/* 8ed222: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8ed224: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8ed226: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8ed228: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8ed22b: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8ed22d: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8ed230: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8ed232: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8ed235: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8ed238: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8ed23b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8ed23e: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8ed241: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8ed244: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8ed247: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8ed24a: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8ed24d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8ed24f: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8ed251: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8ed253: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8ed255: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ed257: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8ed25a: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8ed25d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8ed260: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8ed263: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8ed266: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8ed269: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8ed26c: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8ed26f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8ed271: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8ed273: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8ed275: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8ed277: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ed279: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8ed27c: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8ed27f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8ed282: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8ed285: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8ed288: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8ed28b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8ed28e: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8ed291: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8ed293: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8ed295: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8ed297: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8ed299: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ed29b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8ed29d: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8ed29f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ed2a1: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8ed2a4: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8ed2a7: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8ed2aa: mov ecx, dword ptr [ebp - 0x30] */
  ecx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8ed2ad: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8ed2b0: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8ed2b3: mov dword ptr [ebp - 0x6c], ecx */
  W32((uint32_t)(ebp + 0xffffff94u), ecx);
/* 8ed2b6: lea ecx, [ebp - 0xd8] */
  ecx = (uint32_t)(ebp + 0xffffff28u);
/* 8ed2bc: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 8ed2bf: mov dword ptr [ebp - 0x64], eax */
  W32((uint32_t)(ebp + 0xffffff9cu), eax);
/* 8ed2c2: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ed2c8u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ed2c8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ed2cb: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8ed2cd: lea eax, [ebp - 0xd8] */
  eax = (uint32_t)(ebp + 0xffffff28u);
/* 8ed2d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ed2d4: call dword ptr [edx + 0xb8] */
  { uint32_t t = R32((uint32_t)(edx + 0xb8u)); esp -= 4; W32(esp, 0x8ed2dau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ed2da: mov ecx, dword ptr [ebp - 0x60] */
  ecx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8ed2dd: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 8ed2e0: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8ed2e3: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8ed2e6: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 8ed2e9: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8ed2ec: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 8ed2ef: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 8ed2f2: mov dword ptr [ebp - 0x44], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x3f800000u);
/* 8ed2f9: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 8ed2fc: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ed2ff: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8ed302: lea edi, [ebp - 0x30] */
  edi = (uint32_t)(ebp + 0xffffffd0u);
/* 8ed305: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8ed307: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8ed309: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8ed30b: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8ed30e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8ed310: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8ed313: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8ed315: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8ed318: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8ed31b: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8ed31e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8ed321: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8ed324: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8ed327: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8ed32a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8ed32d: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8ed330: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8ed332: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8ed334: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8ed336: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8ed338: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ed33a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8ed33d: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8ed340: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8ed343: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8ed346: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8ed349: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8ed34c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8ed34f: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8ed352: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8ed354: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8ed356: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8ed358: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8ed35a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ed35c: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8ed35f: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8ed362: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8ed365: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8ed368: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8ed36b: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8ed36e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8ed371: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8ed374: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8ed376: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8ed378: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8ed37a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8ed37c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ed37e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8ed380: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8ed382: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ed384: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8ed387: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8ed38a: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8ed38d: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8ed390: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8ed393: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8ed396: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 8ed399: lea ecx, [ebp - 0xd8] */
  ecx = (uint32_t)(ebp + 0xffffff28u);
/* 8ed39f: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 8ed3a2: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 8ed3a5: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ed3abu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ed3ab: lea edx, [ebp - 0x3c] */
  edx = (uint32_t)(ebp + 0xffffffc4u);
/* 8ed3ae: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ed3af: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 8ed3b2: call dword ptr [0xcfa348] */
  esp -= 4; W32(esp, 0x8ed3b8u); SPILL(); f_4e1703(); if (g_unwind) return; /* Core!?GetExtent@FBox@@QBE?AVFVector@@XZ */ RELOAD();
/* 8ed3b8: xor esi, esi */
  esi = 0;
L_8ed3ba: /* 8ed3ba: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ed3bd: mov eax, dword ptr [eax + 0x3b0] */
  eax = R32((uint32_t)(eax + 0x3b0u));
/* 8ed3c3: cmp esi, dword ptr [eax + 0x340] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x340u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ed3c9: mov dword ptr [ebp - 0x20], esi */
  W32((uint32_t)(ebp + 0xffffffe0u), esi);
/* 8ed3cc: jge 0x8ed700 */
  if ((sf == of)) goto L_8ed700;
L_8ed3d2: /* 8ed3d2: mov edx, dword ptr [eax + 0x33c] */
  edx = R32((uint32_t)(eax + 0x33cu));
/* 8ed3d8: lea ecx, [esi + esi*8] */
  ecx = (uint32_t)(esi + esi*8);
/* 8ed3db: lea ebx, [edx + ecx*4] */
  ebx = (uint32_t)(edx + ecx*4);
/* 8ed3de: lea ecx, [ebx + 4] */
  ecx = (uint32_t)(ebx + 0x4u);
/* 8ed3e1: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x8ed3e7u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 8ed3e7: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 8ed3ea: call 0x99c958 */
  esp -= 4; W32(esp, 0x8ed3efu); SPILL(); f_99c958(); if (g_unwind) return; RELOAD();
/* 8ed3ef: mov dword ptr [ebp - 0x78], eax */
  W32((uint32_t)(ebp + 0xffffff88u), eax);
/* 8ed3f2: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8ed3f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8ed400: /* 8ed400: mov eax, dword ptr [ebp - 0x78] */
  eax = R32((uint32_t)(ebp + 0xffffff88u));
/* 8ed403: cmp dword ptr [ebp - 0x18], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8ed406: jge 0x8ed6c7 */
  if ((sf == of)) goto L_8ed6c7;
L_8ed40c: /* 8ed40c: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 8ed40f: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8ed412: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ed413: fchs  */
  ST0 = -ST0;
/* 8ed415: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ed416: lea ecx, [ebp - 0xe0] */
  ecx = (uint32_t)(ebp + 0xffffff20u);
/* 8ed41c: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8ed41f: call dword ptr [0xcfac70] */
  esp -= 4; W32(esp, 0x8ed425u); SPILL(); f_4e1ac8(); if (g_unwind) return; /* Core!??0FRange@@QAE@MM@Z */ RELOAD();
/* 8ed425: mov ecx, eax */
  ecx = eax;
/* 8ed427: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x8ed42du); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 8ed42d: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8ed430: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 8ed433: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8ed436: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ed437: fchs  */
  ST0 = -ST0;
/* 8ed439: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ed43a: lea ecx, [ebp - 0xf0] */
  ecx = (uint32_t)(ebp + 0xffffff10u);
/* 8ed440: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8ed443: call dword ptr [0xcfac70] */
  esp -= 4; W32(esp, 0x8ed449u); SPILL(); f_4e1ac8(); if (g_unwind) return; /* Core!??0FRange@@QAE@MM@Z */ RELOAD();
/* 8ed449: mov ecx, eax */
  ecx = eax;
/* 8ed44b: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x8ed451u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 8ed451: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 8ed454: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 8ed457: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* 8ed45a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ed45b: fchs  */
  ST0 = -ST0;
/* 8ed45d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ed45e: lea ecx, [ebp - 0xe8] */
  ecx = (uint32_t)(ebp + 0xffffff18u);
/* 8ed464: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8ed467: call dword ptr [0xcfac70] */
  esp -= 4; W32(esp, 0x8ed46du); SPILL(); f_4e1ac8(); if (g_unwind) return; /* Core!??0FRange@@QAE@MM@Z */ RELOAD();
/* 8ed46d: mov ecx, eax */
  ecx = eax;
/* 8ed46f: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x8ed475u); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 8ed475: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 8ed478: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 8ed47b: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ed47e: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8ed481: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 8ed487: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ed48a: mov dword ptr [ebp - 0x7c], eax */
  W32((uint32_t)(ebp + 0xffffff84u), eax);
/* 8ed48d: lea eax, [ebp - 0xd8] */
  eax = (uint32_t)(ebp + 0xffffff28u);
/* 8ed493: mov dword ptr [ebp - 0x80], edx */
  W32((uint32_t)(ebp + 0xffffff80u), edx);
/* 8ed496: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8ed498: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ed499: call dword ptr [edx + 0xb8] */
  { uint32_t t = R32((uint32_t)(edx + 0xb8u)); esp -= 4; W32(esp, 0x8ed49fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ed49f: mov ecx, dword ptr [ebp - 0x84] */
  ecx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 8ed4a5: mov edx, dword ptr [ebp - 0x80] */
  edx = R32((uint32_t)(ebp + 0xffffff80u));
/* 8ed4a8: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 8ed4ab: mov eax, dword ptr [ebp - 0x7c] */
  eax = R32((uint32_t)(ebp + 0xffffff84u));
/* 8ed4ae: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8ed4b1: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8ed4b4: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 8ed4b7: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 8ed4ba: mov dword ptr [ebp - 0x24], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x3f800000u);
/* 8ed4c1: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 8ed4c4: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 8ed4c7: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ed4ca: lea edi, [ebp - 0x94] */
  edi = (uint32_t)(ebp + 0xffffff6cu);
/* 8ed4d0: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8ed4d2: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8ed4d4: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8ed4d6: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8ed4d9: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8ed4db: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8ed4de: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8ed4e0: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8ed4e3: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8ed4e6: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8ed4e9: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8ed4ec: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8ed4ef: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8ed4f2: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8ed4f5: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8ed4f8: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 8ed4fb: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8ed4fd: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8ed4ff: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8ed501: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8ed503: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ed505: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8ed508: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 8ed50b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8ed50e: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 8ed511: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8ed514: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 8ed517: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8ed51a: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 8ed51d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8ed51f: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8ed521: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8ed523: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8ed525: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ed527: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8ed52a: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 8ed52d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8ed530: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 8ed533: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8ed536: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 8ed539: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8ed53c: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 8ed53f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8ed541: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 8ed543: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8ed545: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 8ed547: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ed549: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 8ed54b: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8ed54d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ed54f: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8ed552: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8ed555: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 8ed558: lea ecx, [ebp - 0xd8] */
  ecx = (uint32_t)(ebp + 0xffffff28u);
/* 8ed55e: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8ed564u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8ed564: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ed567: mov esi, dword ptr [edx + 0xb4] */
  esi = R32((uint32_t)(edx + 0xb4u));
/* 8ed56d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ed56f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ed571: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ed573: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ed575: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ed577: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ed579: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ed57b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ed57d: lea ecx, [ebp - 0x4c] */
  ecx = (uint32_t)(ebp + 0xffffffb4u);
/* 8ed580: call dword ptr [0xcfa1cc] */
  esp -= 4; W32(esp, 0x8ed586u); SPILL(); f_4e433b(); if (g_unwind) return; /* Core!??0FRotator@@QAE@HHH@Z */ RELOAD();
/* 8ed586: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 8ed588: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ed58b: mov ecx, esp */
  ecx = esp;
/* 8ed58d: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8ed58f: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 8ed592: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 8ed595: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 8ed598: mov edx, dword ptr [ebp - 0x94] */
  edx = R32((uint32_t)(ebp + 0xffffff6cu));
/* 8ed59e: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 8ed5a1: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ed5a4: mov ecx, esp */
  ecx = esp;
/* 8ed5a6: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 8ed5a8: mov eax, dword ptr [ebp - 0x90] */
  eax = R32((uint32_t)(ebp + 0xffffff70u));
/* 8ed5ae: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* 8ed5b4: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 8ed5b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ed5b8: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 8ed5bb: mov ecx, esp */
  ecx = esp;
/* 8ed5bd: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 8ed5c0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ed5c2: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x8ed5c8u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 8ed5c8: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8ed5ca: push 0xcecf50 */
  { uint32_t v = 0xcecf50u; esp -= 4; W32(esp, v); }
/* 8ed5cf: mov ecx, esi */
  ecx = esi;
/* 8ed5d1: call dword ptr [eax + 0xac] */
  { uint32_t t = R32((uint32_t)(eax + 0xacu)); esp -= 4; W32(esp, 0x8ed5d7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ed5d7: mov esi, eax */
  esi = eax;
/* 8ed5d9: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ed5db: je 0x8ed6b8 */
  if (zf) goto L_8ed6b8;
L_8ed5e1: /* 8ed5e1: push 0xcecf50 */
  { uint32_t v = 0xcecf50u; esp -= 4; W32(esp, v); }
/* 8ed5e6: mov ecx, esi */
  ecx = esi;
/* 8ed5e8: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x8ed5eeu); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 8ed5ee: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ed5f0: je 0x8ed6b8 */
  if (zf) goto L_8ed6b8;
L_8ed5f6: /* 8ed5f6: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8ed5f8: mov dword ptr [esi + 0x54], ecx */
  W32((uint32_t)(esi + 0x54u), ecx);
/* 8ed5fb: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ed5fe: mov edx, dword ptr [ebx + 0x14] */
  edx = R32((uint32_t)(ebx + 0x14u));
/* 8ed601: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8ed607: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ed608: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ed609: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ed60a: call 0x6cb816 */
  esp -= 4; W32(esp, 0x8ed60fu); SPILL(); f_6cb816(); if (g_unwind) return; RELOAD();
/* 8ed60f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ed611: jne 0x8ed636 */
  if (!zf) goto L_8ed636;
L_8ed613: /* 8ed613: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8ed616: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 8ed61c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8ed61e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ed620: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ed621: call dword ptr [edx + 0xa4] */
  { uint32_t t = R32((uint32_t)(edx + 0xa4u)); esp -= 4; W32(esp, 0x8ed627u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ed627: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ed62a: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8ed62d: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8ed62e: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8ed631: jmp 0x8ed400 */
  goto L_8ed400;
L_8ed636: /* 8ed636: mov eax, dword ptr [ebx + 0x18] */
  eax = R32((uint32_t)(ebx + 0x18u));
/* 8ed639: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ed63b: mov edi, dword ptr [0xcfa5ec] */
  edi = R32((uint32_t)(0xcfa5ecu));
/* 8ed641: je 0x8ed659 */
  if (zf) goto L_8ed659;
L_8ed643: /* 8ed643: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8ed645u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ed645: and eax, 0x8000ffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000ffffu);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 8ed64a: jns 0x8ed653 */
  if (!sf) goto L_8ed653;
L_8ed64c: /* 8ed64c: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8ed64d: or eax, 0xffff0000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffff0000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8ed652: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_8ed653: /* 8ed653: add dword ptr [esi + 0x17c], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x17cu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0x17cu), r);
  }
L_8ed659: /* 8ed659: mov eax, dword ptr [ebx + 0x1c] */
  eax = R32((uint32_t)(ebx + 0x1cu));
/* 8ed65c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ed65e: je 0x8ed676 */
  if (zf) goto L_8ed676;
L_8ed660: /* 8ed660: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8ed662u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ed662: and eax, 0x8000ffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000ffffu);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 8ed667: jns 0x8ed670 */
  if (!sf) goto L_8ed670;
L_8ed669: /* 8ed669: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8ed66a: or eax, 0xffff0000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffff0000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8ed66f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_8ed670: /* 8ed670: add dword ptr [esi + 0x180], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x180u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0x180u), r);
  }
L_8ed676: /* 8ed676: mov eax, dword ptr [ebx + 0x20] */
  eax = R32((uint32_t)(ebx + 0x20u));
/* 8ed679: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ed67b: je 0x8ed693 */
  if (zf) goto L_8ed693;
L_8ed67d: /* 8ed67d: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x8ed67fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8ed67f: and eax, 0x8000ffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8000ffffu);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  eax = r;
  }
/* 8ed684: jns 0x8ed68d */
  if (!sf) goto L_8ed68d;
L_8ed686: /* 8ed686: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 8ed687: or eax, 0xffff0000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffff0000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 8ed68c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_8ed68d: /* 8ed68d: add dword ptr [esi + 0x184], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x184u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0x184u), r);
  }
L_8ed693: /* 8ed693: lea edi, [ebx + 0xc] */
  edi = (uint32_t)(ebx + 0xcu);
/* 8ed696: mov ecx, edi */
  ecx = edi;
/* 8ed698: call dword ptr [0xcfac6c] */
  esp -= 4; W32(esp, 0x8ed69eu); SPILL(); f_4e3238(); if (g_unwind) return; /* Core!?IsZero@FRange@@QBEHXZ */ RELOAD();
/* 8ed69e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ed6a0: jne 0x8ed6b8 */
  if (!zf) goto L_8ed6b8;
L_8ed6a2: /* 8ed6a2: mov ecx, edi */
  ecx = edi;
/* 8ed6a4: call dword ptr [0xcfa574] */
  esp -= 4; W32(esp, 0x8ed6aau); SPILL(); f_4e2b4e(); if (g_unwind) return; /* Core!?GetRand@FRange@@QBEMXZ */ RELOAD();
/* 8ed6aa: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8ed6ad: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8ed6b0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ed6b1: mov ecx, esi */
  ecx = esi;
/* 8ed6b3: call 0x6c25ef */
  esp -= 4; W32(esp, 0x8ed6b8u); SPILL(); f_6c25ef(); if (g_unwind) return; RELOAD();
L_8ed6b8: /* 8ed6b8: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8ed6bb: mov esi, dword ptr [ebp - 0x20] */
  esi = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8ed6be: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 8ed6bf: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8ed6c2: jmp 0x8ed400 */
  goto L_8ed400;
L_8ed6c7: /* 8ed6c7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8ed6c8: jmp 0x8ed3ba */
  goto L_8ed3ba;
L_8ed700: /* 8ed700: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ed703: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ed704: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ed705: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ed70c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ed70d: mov esp, ebp */
  esp = ebp;
/* 8ed70f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ed710: ret  */
  esp += 4; SPILL(); return;
}

void f_8ed6cd(void) {
  LOAD_REGS();
L_8ed6cd: /* 8ed6cd: mov ecx, dword ptr [ebp - 0x98] */
  ecx = R32((uint32_t)(ebp + 0xffffff68u));
/* 8ed6d3: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8ed6d8: lea edx, [ebp - 0x70] */
  edx = (uint32_t)(ebp + 0xffffff90u);
/* 8ed6db: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ed6dc: mov dword ptr [ebp - 0x70], ecx */
  W32((uint32_t)(ebp + 0xffffff90u), ecx);
/* 8ed6df: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ed6e4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8ed6e4(); return;
}

void f_8ed6e4(void) {
  LOAD_REGS();
L_8ed6e4: /* 8ed6e4: push 0xa1e2ec */
  { uint32_t v = 0xa1e2ecu; esp -= 4; W32(esp, v); }
/* 8ed6e9: push 0xaee2b0 */
  { uint32_t v = 0xaee2b0u; esp -= 4; W32(esp, v); }
/* 8ed6ee: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ed6f4u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ed6f4: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ed6f7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ed6f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ed6fb: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ed700u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
/* 8ed700: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8ed703: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ed704: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ed705: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8ed70c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ed70d: mov esp, ebp */
  esp = ebp;
/* 8ed70f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ed710: ret  */
  esp += 4; SPILL(); return;
}

void f_8ed890(void) {
  LOAD_REGS();
L_8ed890: /* 8ed890: fld dword ptr [esp + 4] */
  { double v = F32((uint32_t)(esp + 0x4u)); FPUSH(v); }
/* 8ed894: fcomp dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
  FPOP();
/* 8ed896: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ed898: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ed89b: jne 0x8ed8b3 */
  if (!zf) goto L_8ed8b3;
L_8ed89d: /* 8ed89d: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8ed8a1: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* 8ed8a3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8ed8a5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8ed8a7: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 8ed8aa: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8ed8ad: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 8ed8b0: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
L_8ed8b3: /* 8ed8b3: ret  */
  esp += 4; SPILL(); return;
}

void f_8ed8d0(void) {
  LOAD_REGS();
L_8ed8d0: /* 8ed8d0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8ed8d4: mov eax, ecx */
  eax = ecx;
/* 8ed8d6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8ed8da: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8ed8dc: fsub dword ptr [edx] */
  ST0 = ST0 - (F32((uint32_t)(edx)));
/* 8ed8de: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* 8ed8e0: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8ed8e3: fsub dword ptr [edx + 4] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x4u)));
/* 8ed8e6: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* 8ed8e9: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8ed8ec: fsub dword ptr [edx + 8] */
  ST0 = ST0 - (F32((uint32_t)(edx + 0x8u)));
/* 8ed8ef: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* 8ed8f2: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 8ed8f5: fadd dword ptr [edx] */
  ST0 = ST0 + (F32((uint32_t)(edx)));
/* 8ed8f7: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* 8ed8fa: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 8ed8fd: fadd dword ptr [edx + 4] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x4u)));
/* 8ed900: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* 8ed903: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 8ed906: fadd dword ptr [edx + 8] */
  ST0 = ST0 + (F32((uint32_t)(edx + 0x8u)));
/* 8ed909: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* 8ed90c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8ed920(void) {
  LOAD_REGS();
L_8ed920: /* 8ed920: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 8ed924: fld dword ptr [0xaee378] */
  { double v = F32((uint32_t)(0xaee378u)); FPUSH(v); }
/* 8ed92a: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8ed92d: fld dword ptr [0xaee370] */
  { double v = F32((uint32_t)(0xaee370u)); FPUSH(v); }
/* 8ed933: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8ed935: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ed937: fld dword ptr [0xaee374] */
  { double v = F32((uint32_t)(0xaee374u)); FPUSH(v); }
/* 8ed93d: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8ed940: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ed942: fcom dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
/* 8ed944: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ed946: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ed949: jp 0x8ed94d */
  if (pf) goto L_8ed94d;
L_8ed94b: /* 8ed94b: fst dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0);
L_8ed94d: /* 8ed94d: fcom dword ptr [ecx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xcu)));
/* 8ed950: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ed952: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ed955: jne 0x8ed95c */
  if (!zf) goto L_8ed95c;
L_8ed957: /* 8ed957: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* 8ed95a: jmp 0x8ed95e */
  goto L_8ed95e;
L_8ed95c: /* 8ed95c: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8ed95e: /* 8ed95e: fld dword ptr [0xaee384] */
  { double v = F32((uint32_t)(0xaee384u)); FPUSH(v); }
/* 8ed964: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8ed967: fld dword ptr [0xaee37c] */
  { double v = F32((uint32_t)(0xaee37cu)); FPUSH(v); }
/* 8ed96d: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8ed96f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ed971: fld dword ptr [0xaee380] */
  { double v = F32((uint32_t)(0xaee380u)); FPUSH(v); }
/* 8ed977: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8ed97a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ed97c: fcom dword ptr [ecx + 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x4u)));
/* 8ed97f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ed981: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ed984: jp 0x8ed989 */
  if (pf) goto L_8ed989;
L_8ed986: /* 8ed986: fst dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0);
L_8ed989: /* 8ed989: fcom dword ptr [ecx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x10u)));
/* 8ed98c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ed98e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ed991: jne 0x8ed998 */
  if (!zf) goto L_8ed998;
L_8ed993: /* 8ed993: fstp dword ptr [ecx + 0x10] */
  WF32((uint32_t)(ecx + 0x10u), ST0); FPOP();
/* 8ed996: jmp 0x8ed99a */
  goto L_8ed99a;
L_8ed998: /* 8ed998: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8ed99a: /* 8ed99a: fld dword ptr [0xaee390] */
  { double v = F32((uint32_t)(0xaee390u)); FPUSH(v); }
/* 8ed9a0: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8ed9a3: fld dword ptr [0xaee388] */
  { double v = F32((uint32_t)(0xaee388u)); FPUSH(v); }
/* 8ed9a9: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8ed9ab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ed9ad: fld dword ptr [0xaee38c] */
  { double v = F32((uint32_t)(0xaee38cu)); FPUSH(v); }
/* 8ed9b3: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8ed9b6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ed9b8: fcom dword ptr [ecx + 8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x8u)));
/* 8ed9bb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ed9bd: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ed9c0: jp 0x8ed9c5 */
  if (pf) goto L_8ed9c5;
L_8ed9c2: /* 8ed9c2: fst dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0);
L_8ed9c5: /* 8ed9c5: fcom dword ptr [ecx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x14u)));
/* 8ed9c8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ed9ca: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ed9cd: jne 0x8ed9d5 */
  if (!zf) goto L_8ed9d5;
L_8ed9cf: /* 8ed9cf: fstp dword ptr [ecx + 0x14] */
  WF32((uint32_t)(ecx + 0x14u), ST0); FPOP();
/* 8ed9d2: ret 4 */
  esp += 8; SPILL(); return;
L_8ed9d5: /* 8ed9d5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ed9d7: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8eda10(void) {
  LOAD_REGS();
L_8eda10: /* 8eda10: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8eda11: mov ebp, esp */
  ebp = esp;
/* 8eda13: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8eda15: push 0x9d8ea0 */
  { uint32_t v = 0x9d8ea0u; esp -= 4; W32(esp, v); }
/* 8eda1a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8eda20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eda21: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8eda28: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8eda2b: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8eda2c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8eda2d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 8eda30: fld dword ptr [esi + 0xd8] */
  { double v = F32((uint32_t)(esi + 0xd8u)); FPUSH(v); }
/* 8eda36: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8eda37: mov edi, ecx */
  edi = ecx;
/* 8eda39: fcomp dword ptr [edi] */
  fpu_com(ST0, F32((uint32_t)(edi)));
  FPOP();
/* 8eda3b: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8eda3e: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8eda45: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 8eda4c: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 8eda53: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8eda55: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 8eda5c: mov ecx, 1 */
  ecx = 0x1u;
/* 8eda61: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8eda64: jp 0x8eda81 */
  if (pf) goto L_8eda81;
L_8eda66: /* 8eda66: fld dword ptr [esi + 0xf0] */
  { double v = F32((uint32_t)(esi + 0xf0u)); FPUSH(v); }
/* 8eda6c: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8eda72: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8eda74: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8eda77: jnp 0x8edcaf */
  if (!pf) goto L_8edcaf;
L_8eda7d: /* 8eda7d: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8eda7f: jmp 0x8edaab */
  goto L_8edaab;
L_8eda81: /* 8eda81: fld dword ptr [esi + 0xd8] */
  { double v = F32((uint32_t)(esi + 0xd8u)); FPUSH(v); }
/* 8eda87: fcomp dword ptr [edi + 0xc] */
  fpu_com(ST0, F32((uint32_t)(edi + 0xcu)));
  FPOP();
/* 8eda8a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8eda8c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8eda8f: jne 0x8edabc */
  if (!zf) goto L_8edabc;
L_8eda91: /* 8eda91: fld dword ptr [esi + 0xf0] */
  { double v = F32((uint32_t)(esi + 0xf0u)); FPUSH(v); }
/* 8eda97: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8eda9d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8eda9f: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8edaa2: je 0x8edcaf */
  if (zf) goto L_8edcaf;
L_8edaa8: /* 8edaa8: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
L_8edaab: /* 8edaab: fsub dword ptr [esi + 0xd8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xd8u)));
/* 8edab1: xor ecx, ecx */
  ecx = 0;
/* 8edab3: fmul dword ptr [esi + 0xfc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xfcu)));
/* 8edab9: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
L_8edabc: /* 8edabc: fld dword ptr [esi + 0xdc] */
  { double v = F32((uint32_t)(esi + 0xdcu)); FPUSH(v); }
/* 8edac2: fcomp dword ptr [edi + 4] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x4u)));
  FPOP();
/* 8edac5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8edac7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8edaca: jp 0x8edae8 */
  if (pf) goto L_8edae8;
L_8edacc: /* 8edacc: fld dword ptr [esi + 0xf4] */
  { double v = F32((uint32_t)(esi + 0xf4u)); FPUSH(v); }
/* 8edad2: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8edad8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8edada: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8edadd: jnp 0x8edcaf */
  if (!pf) goto L_8edcaf;
L_8edae3: /* 8edae3: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8edae6: jmp 0x8edb12 */
  goto L_8edb12;
L_8edae8: /* 8edae8: fld dword ptr [esi + 0xdc] */
  { double v = F32((uint32_t)(esi + 0xdcu)); FPUSH(v); }
/* 8edaee: fcomp dword ptr [edi + 0x10] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x10u)));
  FPOP();
/* 8edaf1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8edaf3: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8edaf6: jne 0x8edb23 */
  if (!zf) goto L_8edb23;
L_8edaf8: /* 8edaf8: fld dword ptr [esi + 0xf4] */
  { double v = F32((uint32_t)(esi + 0xf4u)); FPUSH(v); }
/* 8edafe: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8edb04: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8edb06: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8edb09: je 0x8edcaf */
  if (zf) goto L_8edcaf;
L_8edb0f: /* 8edb0f: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
L_8edb12: /* 8edb12: fsub dword ptr [esi + 0xdc] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xdcu)));
/* 8edb18: xor ecx, ecx */
  ecx = 0;
/* 8edb1a: fmul dword ptr [esi + 0x100] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x100u)));
/* 8edb20: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
L_8edb23: /* 8edb23: fld dword ptr [esi + 0xe0] */
  { double v = F32((uint32_t)(esi + 0xe0u)); FPUSH(v); }
/* 8edb29: fcomp dword ptr [edi + 8] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x8u)));
  FPOP();
/* 8edb2c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8edb2e: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8edb31: jp 0x8edc6f */
  if (pf) goto L_8edc6f;
L_8edb37: /* 8edb37: fld dword ptr [esi + 0xf8] */
  { double v = F32((uint32_t)(esi + 0xf8u)); FPUSH(v); }
/* 8edb3d: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8edb43: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8edb45: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8edb48: jnp 0x8edcaf */
  if (!pf) goto L_8edcaf;
L_8edb4e: /* 8edb4e: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
L_8edb51: /* 8edb51: fsub dword ptr [esi + 0xe0] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0xe0u)));
/* 8edb57: fmul dword ptr [esi + 0x104] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x104u)));
/* 8edb5d: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
L_8edb60: /* 8edb60: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8edb63: call dword ptr [0xcfaad8] */
  esp -= 4; W32(esp, 0x8edb69u); SPILL(); f_4e231f(); if (g_unwind) return; /* Core!?GetMax@FVector@@QBEMXZ */ RELOAD();
/* 8edb69: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 8edb6c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 8edb6f: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* 8edb71: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8edb74: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8edb7a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8edb7c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8edb7f: jne 0x8edcaf */
  if (!zf) goto L_8edcaf;
L_8edb85: /* 8edb85: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8edb88: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 8edb8e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8edb90: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8edb93: jp 0x8edcaf */
  if (pf) goto L_8edcaf;
L_8edb99: /* 8edb99: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8edb9c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8edb9e: fmul dword ptr [esi + 0xf0] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xf0u)));
/* 8edba4: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8edba6: fmul dword ptr [esi + 0xf4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xf4u)));
/* 8edbac: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8edbaf: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8edbb1: fmul dword ptr [esi + 0xf8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xf8u)));
/* 8edbb7: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8edbba: fadd dword ptr [esi + 0xd8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xd8u)));
/* 8edbc0: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8edbc3: fadd dword ptr [esi + 0xdc] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xdcu)));
/* 8edbc9: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8edbcc: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 8edbcf: fadd dword ptr [esi + 0xe0] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0xe0u)));
/* 8edbd5: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8edbd8: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8edbda: fsub dword ptr [0xa0973c] */
  ST0 = ST0 - (F32((uint32_t)(0xa0973cu)));
/* 8edbe0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8edbe2: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8edbe4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8edbe6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8edbe9: jne 0x8edcad */
  if (!zf) goto L_8edcad;
L_8edbef: /* 8edbef: fld dword ptr [edi + 0xc] */
  { double v = F32((uint32_t)(edi + 0xcu)); FPUSH(v); }
/* 8edbf2: fadd dword ptr [0xa0973c] */
  ST0 = ST0 + (F32((uint32_t)(0xa0973cu)));
/* 8edbf8: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8edbfa: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 8edbfc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8edbfe: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8edc01: jp 0x8edcaf */
  if (pf) goto L_8edcaf;
L_8edc07: /* 8edc07: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8edc0a: fsub dword ptr [0xa0973c] */
  ST0 = ST0 - (F32((uint32_t)(0xa0973cu)));
/* 8edc10: fcomp dword ptr [ebp - 0x20] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe0u)));
  FPOP();
/* 8edc13: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8edc15: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8edc18: jp 0x8edcaf */
  if (pf) goto L_8edcaf;
L_8edc1e: /* 8edc1e: fld dword ptr [edi + 0x10] */
  { double v = F32((uint32_t)(edi + 0x10u)); FPUSH(v); }
/* 8edc21: fadd dword ptr [0xa0973c] */
  ST0 = ST0 + (F32((uint32_t)(0xa0973cu)));
/* 8edc27: fcomp dword ptr [ebp - 0x20] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe0u)));
  FPOP();
/* 8edc2a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8edc2c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8edc2f: jne 0x8edcaf */
  if (!zf) goto L_8edcaf;
L_8edc31: /* 8edc31: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 8edc34: fsub dword ptr [0xa0973c] */
  ST0 = ST0 - (F32((uint32_t)(0xa0973cu)));
/* 8edc3a: fcomp dword ptr [ebp - 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe4u)));
  FPOP();
/* 8edc3d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8edc3f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8edc42: jp 0x8edcaf */
  if (pf) goto L_8edcaf;
L_8edc44: /* 8edc44: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 8edc47: fadd dword ptr [0xa0973c] */
  ST0 = ST0 + (F32((uint32_t)(0xa0973cu)));
/* 8edc4d: fcomp dword ptr [ebp - 0x1c] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe4u)));
  FPOP();
/* 8edc50: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8edc52: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8edc55: jne 0x8edcaf */
  if (!zf) goto L_8edcaf;
L_8edc57: /* 8edc57: mov eax, 1 */
  eax = 0x1u;
/* 8edc5c: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8edc5f: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8edc66: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8edc67: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8edc68: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8edc69: mov esp, ebp */
  esp = ebp;
/* 8edc6b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8edc6c: ret 8 */
  esp += 12; SPILL(); return;
L_8edc6f: /* 8edc6f: fld dword ptr [esi + 0xe0] */
  { double v = F32((uint32_t)(esi + 0xe0u)); FPUSH(v); }
/* 8edc75: fcomp dword ptr [edi + 0x14] */
  fpu_com(ST0, F32((uint32_t)(edi + 0x14u)));
  FPOP();
/* 8edc78: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8edc7a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8edc7d: jne 0x8edc9a */
  if (!zf) goto L_8edc9a;
L_8edc7f: /* 8edc7f: fld dword ptr [esi + 0xf8] */
  { double v = F32((uint32_t)(esi + 0xf8u)); FPUSH(v); }
/* 8edc85: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8edc8b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8edc8d: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8edc90: je 0x8edcaf */
  if (zf) goto L_8edcaf;
L_8edc92: /* 8edc92: fld dword ptr [edi + 0x14] */
  { double v = F32((uint32_t)(edi + 0x14u)); FPUSH(v); }
/* 8edc95: jmp 0x8edb51 */
  goto L_8edb51;
L_8edc9a: /* 8edc9a: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8edc9c: je 0x8edb60 */
  if (zf) goto L_8edb60;
L_8edca2: /* 8edca2: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8edca5: mov dword ptr [eax], 0 */
  W32((uint32_t)(eax), 0x0u);
/* 8edcab: jmp 0x8edc57 */
  goto L_8edc57;
L_8edcad: /* 8edcad: fstp st(0) */
  STI(0) = ST0; FPOP();
L_8edcaf: /* 8edcaf: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8edcb2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8edcb3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8edcb4: xor eax, eax */
  eax = 0;
/* 8edcb6: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8edcbd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8edcbe: mov esp, ebp */
  esp = ebp;
/* 8edcc0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8edcc1: ret 8 */
  esp += 12; SPILL(); return;
}

void f_8edcc4(void) {
  LOAD_REGS();
L_8edcc4: /* 8edcc4: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8edcc7: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8edccc: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* 8edccf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8edcd0: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 8edcd3: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8edcd8u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8edcd8(); return;
}

void f_8edcd8(void) {
  LOAD_REGS();
L_8edcd8: /* 8edcd8: push 0xa1e324 */
  { uint32_t v = 0xa1e324u; esp -= 4; W32(esp, v); }
/* 8edcdd: push 0xac38f0 */
  { uint32_t v = 0xac38f0u; esp -= 4; W32(esp, v); }
/* 8edce2: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8edce8u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8edce8: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8edceb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8edced: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8edcef: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8edcf4u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8edcf4: guest_badaddr(0x8edcf4); return;
}

void f_8eddc0(void) {
  LOAD_REGS();
L_8eddc0: /* 8eddc0: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 8eddc4: fld dword ptr [edx + 0xd8] */
  { double v = F32((uint32_t)(edx + 0xd8u)); FPUSH(v); }
/* 8eddca: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 8eddcc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8eddce: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8eddd1: jne 0x8ede2b */
  if (!zf) goto L_8ede2b;
L_8eddd3: /* 8eddd3: fld dword ptr [edx + 0xd8] */
  { double v = F32((uint32_t)(edx + 0xd8u)); FPUSH(v); }
/* 8eddd9: fcomp dword ptr [ecx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xcu)));
  FPOP();
/* 8edddc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8eddde: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8edde1: jp 0x8ede2b */
  if (pf) goto L_8ede2b;
L_8edde3: /* 8edde3: fld dword ptr [edx + 0xdc] */
  { double v = F32((uint32_t)(edx + 0xdcu)); FPUSH(v); }
/* 8edde9: fcomp dword ptr [ecx + 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x4u)));
  FPOP();
/* 8eddec: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8eddee: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8eddf1: jne 0x8ede2b */
  if (!zf) goto L_8ede2b;
L_8eddf3: /* 8eddf3: fld dword ptr [edx + 0xdc] */
  { double v = F32((uint32_t)(edx + 0xdcu)); FPUSH(v); }
/* 8eddf9: fcomp dword ptr [ecx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x10u)));
  FPOP();
/* 8eddfc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8eddfe: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ede01: jp 0x8ede2b */
  if (pf) goto L_8ede2b;
L_8ede03: /* 8ede03: fld dword ptr [edx + 0xe0] */
  { double v = F32((uint32_t)(edx + 0xe0u)); FPUSH(v); }
/* 8ede09: fcomp dword ptr [ecx + 8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x8u)));
  FPOP();
/* 8ede0c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ede0e: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ede11: jne 0x8ede2b */
  if (!zf) goto L_8ede2b;
L_8ede13: /* 8ede13: fld dword ptr [edx + 0xe0] */
  { double v = F32((uint32_t)(edx + 0xe0u)); FPUSH(v); }
/* 8ede19: fcomp dword ptr [ecx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x14u)));
  FPOP();
/* 8ede1c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ede1e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ede21: jp 0x8ede2b */
  if (pf) goto L_8ede2b;
L_8ede23: /* 8ede23: mov eax, 1 */
  eax = 0x1u;
/* 8ede28: ret 4 */
  esp += 8; SPILL(); return;
L_8ede2b: /* 8ede2b: xor eax, eax */
  eax = 0;
/* 8ede2d: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8ede50(void) {
  LOAD_REGS();
L_8ede50: /* 8ede50: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8ede52: mov edx, dword ptr [esp + 4] */
  edx = R32((uint32_t)(esp + 0x4u));
/* 8ede56: fcomp dword ptr [edx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(edx + 0xcu)));
  FPOP();
/* 8ede59: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ede5b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ede5e: je 0x8edea8 */
  if (zf) goto L_8edea8;
L_8ede60: /* 8ede60: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 8ede62: fcomp dword ptr [ecx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xcu)));
  FPOP();
/* 8ede65: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ede67: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ede6a: je 0x8edea8 */
  if (zf) goto L_8edea8;
L_8ede6c: /* 8ede6c: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8ede6f: fcomp dword ptr [edx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x10u)));
  FPOP();
/* 8ede72: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ede74: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ede77: je 0x8edea8 */
  if (zf) goto L_8edea8;
L_8ede79: /* 8ede79: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 8ede7c: fcomp dword ptr [ecx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x10u)));
  FPOP();
/* 8ede7f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ede81: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ede84: je 0x8edea8 */
  if (zf) goto L_8edea8;
L_8ede86: /* 8ede86: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8ede89: fcomp dword ptr [edx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(edx + 0x14u)));
  FPOP();
/* 8ede8c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ede8e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ede91: je 0x8edea8 */
  if (zf) goto L_8edea8;
L_8ede93: /* 8ede93: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 8ede96: fcomp dword ptr [ecx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x14u)));
  FPOP();
/* 8ede99: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ede9b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ede9e: je 0x8edea8 */
  if (zf) goto L_8edea8;
L_8edea0: /* 8edea0: mov eax, 1 */
  eax = 0x1u;
/* 8edea5: ret 4 */
  esp += 8; SPILL(); return;
L_8edea8: /* 8edea8: xor eax, eax */
  eax = 0;
/* 8edeaa: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8eded0(void) {
  LOAD_REGS();
L_8eded0: /* 8eded0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8eded1: mov ebp, esp */
  ebp = esp;
/* 8eded3: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 8eded5: push 0x9d8ebc */
  { uint32_t v = 0x9d8ebcu; esp -= 4; W32(esp, v); }
/* 8ededa: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 8edee0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8edee1: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 8edee8: sub esp, 0xb0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xb0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8edeee: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8edeef: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8edef0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8edef1: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 8edef4: mov ebx, ecx */
  ebx = ecx;
/* 8edef6: call dword ptr [0xcfa370] */
  esp -= 4; W32(esp, 0x8edefcu); SPILL(); f_4e205e(); if (g_unwind) return; /* Core!??0FBox@@QAE@XZ */ RELOAD();
/* 8edefc: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 8edeff: mov dword ptr [ebx + 0x1c], eax */
  W32((uint32_t)(ebx + 0x1cu), eax);
/* 8edf02: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8edf05: lea ecx, [eax + 0x108] */
  ecx = (uint32_t)(eax + 0x108u);
/* 8edf0b: add eax, 0x114 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x114u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8edf10: mov dword ptr [ebx + 0x20], ecx */
  W32((uint32_t)(ebx + 0x20u), ecx);
/* 8edf13: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8edf16: mov dword ptr [ebx + 0x24], eax */
  W32((uint32_t)(ebx + 0x24u), eax);
/* 8edf19: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8edf1b: lea eax, [ebp - 0xbc] */
  eax = (uint32_t)(ebp + 0xffffff44u);
/* 8edf21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8edf22: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8edf29: call dword ptr [edx + 0xbc] */
  { uint32_t t = R32((uint32_t)(edx + 0xbcu)); esp -= 4; W32(esp, 0x8edf2fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8edf2f: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 8edf32: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8edf35: mov ecx, dword ptr [esi + 0xc] */
  ecx = R32((uint32_t)(esi + 0xcu));
/* 8edf38: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8edf3b: mov eax, ecx */
  eax = ecx;
/* 8edf3d: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8edf40: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8edf43: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8edf46: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8edf49: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8edf4c: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 8edf4f: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 8edf52: lea edx, [ebp - 0x34] */
  edx = (uint32_t)(ebp + 0xffffffccu);
/* 8edf55: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 8edf58: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 8edf5b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8edf5c: lea eax, [ebp - 0x7c] */
  eax = (uint32_t)(ebp + 0xffffff84u);
/* 8edf5f: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 8edf62: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 8edf65: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8edf66: mov ecx, esi */
  ecx = esi;
/* 8edf68: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 8edf6c: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 8edf73: mov dword ptr [ebp - 0x14], 0 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x0u);
/* 8edf7a: call dword ptr [0xcfaab8] */
  esp -= 4; W32(esp, 0x8edf80u); SPILL(); f_4e3b1b(); if (g_unwind) return; /* Core!??HFPlane@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 8edf80: lea ecx, [ebp - 0x20] */
  ecx = (uint32_t)(ebp + 0xffffffe0u);
/* 8edf83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8edf84: lea edx, [ebp - 0x60] */
  edx = (uint32_t)(ebp + 0xffffffa0u);
/* 8edf87: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8edf88: mov ecx, esi */
  ecx = esi;
/* 8edf8a: mov edi, eax */
  edi = eax;
/* 8edf8c: call dword ptr [0xcfa588] */
  esp -= 4; W32(esp, 0x8edf92u); SPILL(); f_4e420a(); if (g_unwind) return; /* Core!??GFPlane@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 8edf92: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8edf93: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8edf94: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8edf97: call dword ptr [0xcfa530] */
  esp -= 4; W32(esp, 0x8edf9du); SPILL(); f_4e310c(); if (g_unwind) return; /* Core!??0FBox@@QAE@ABVFVector@@0@Z */ RELOAD();
/* 8edf9d: lea eax, [ebp - 0xbc] */
  eax = (uint32_t)(ebp + 0xffffff44u);
/* 8edfa3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8edfa4: lea ecx, [ebp - 0x6c] */
  ecx = (uint32_t)(ebp + 0xffffff94u);
/* 8edfa7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8edfa8: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 8edfab: call dword ptr [0xcfa638] */
  esp -= 4; W32(esp, 0x8edfb1u); SPILL(); f_4e2806(); if (g_unwind) return; /* Core!?TransformBy@FBox@@QBE?AV1@ABVFMatrix@@@Z */ RELOAD();
/* 8edfb1: mov esi, eax */
  esi = eax;
/* 8edfb3: mov ecx, 7 */
  ecx = 0x7u;
/* 8edfb8: mov edi, ebx */
  edi = ebx;
/* 8edfba: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 8edfbc: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 8edfc2: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8edfc6: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x8edfccu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 8edfcc: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8edfcf: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8edfd0: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8edfd1: mov eax, ebx */
  eax = ebx;
/* 8edfd3: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8edfda: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8edfdb: mov esp, ebp */
  esp = ebp;
/* 8edfdd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8edfde: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_8edfe1(void) {
  LOAD_REGS();
L_8edfe1: /* 8edfe1: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* 8edfe4: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 8edfe9: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* 8edfec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8edfed: mov dword ptr [ebp - 0x24], edx */
  W32((uint32_t)(ebp + 0xffffffdcu), edx);
/* 8edff0: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8edff5u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8edff5(); return;
}

void f_8edff5(void) {
  LOAD_REGS();
L_8edff5: /* 8edff5: push 0xa1e350 */
  { uint32_t v = 0xa1e350u; esp -= 4; W32(esp, v); }
/* 8edffa: push 0xaee32c */
  { uint32_t v = 0xaee32cu; esp -= 4; W32(esp, v); }
/* 8edfff: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8ee005u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8ee005: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ee008: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ee00a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8ee00c: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8ee011u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8ee011: guest_badaddr(0x8ee011); return;
}

void f_8ee080(void) {
  LOAD_REGS();
L_8ee080: /* 8ee080: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8ee082: call dword ptr [0xcfa380] */
  esp -= 4; W32(esp, 0x8ee088u); SPILL(); f_4e3fda(); if (g_unwind) return; /* Core!?Shrink@FArray@@QAEXH@Z */ RELOAD();
/* 8ee088: ret  */
  esp += 4; SPILL(); return;
}

void f_8ee0a0(void) {
  LOAD_REGS();
L_8ee0a0: /* 8ee0a0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8ee0a4: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 8ee0a6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ee0a7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8ee0adu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8ee0ad: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8ee0c0(void) {
  LOAD_REGS();
L_8ee0c0: /* 8ee0c0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* 8ee0c4: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* 8ee0c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ee0c7: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8ee0cdu); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8ee0cd: ret 4 */
  esp += 8; SPILL(); return;
}

void f_8ee0e0(void) {
  LOAD_REGS();
L_8ee0e0: /* 8ee0e0: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* 8ee0e4: mov eax, ecx */
  eax = ecx;
/* 8ee0e6: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* 8ee0ea: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 8ee0ec: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* 8ee0f0: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 8ee0f3: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 8ee0f6: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_8ee110(void) {
  LOAD_REGS();
L_8ee110: /* 8ee110: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ee113: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8ee117: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ee118: fsub dword ptr [esp + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x20u)));
/* 8ee11c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ee11d: mov esi, dword ptr [esp + 0x20] */
  esi = R32((uint32_t)(esp + 0x20u));
/* 8ee121: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 8ee125: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 8ee129: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8ee12c: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 8ee12f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8ee132: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 8ee135: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee137: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8ee139: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8ee13b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee13d: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 8ee141: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 8ee144: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 8ee147: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 8ee14a: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 8ee14d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee14f: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8ee151: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8ee153: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee155: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8ee158: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 8ee15b: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8ee15e: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 8ee161: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee163: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8ee165: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8ee167: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee169: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 8ee16d: fcom dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
/* 8ee171: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ee173: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ee176: jp 0x8ee17c */
  if (pf) goto L_8ee17c;
L_8ee178: /* 8ee178: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8ee17a: jmp 0x8ee180 */
  goto L_8ee180;
L_8ee17c: /* 8ee17c: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
L_8ee180: /* 8ee180: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 8ee184: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8ee186: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ee188: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ee18b: jp 0x8ee193 */
  if (pf) goto L_8ee193;
L_8ee18d: /* 8ee18d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ee18f: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_8ee193: /* 8ee193: fsub dword ptr [esp + 0x2c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x2cu)));
/* 8ee197: fstp dword ptr [esp + 0xc] */
  WF32((uint32_t)(esp + 0xcu), ST0); FPOP();
/* 8ee19b: fcom dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
/* 8ee19f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ee1a1: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ee1a4: je 0x8ee1ac */
  if (zf) goto L_8ee1ac;
L_8ee1a6: /* 8ee1a6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ee1a8: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
L_8ee1ac: /* 8ee1ac: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* 8ee1b0: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8ee1b2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ee1b4: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ee1b7: jne 0x8ee1bf */
  if (!zf) goto L_8ee1bf;
L_8ee1b9: /* 8ee1b9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ee1bb: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
L_8ee1bf: /* 8ee1bf: fadd dword ptr [esp + 0x2c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x2cu)));
/* 8ee1c3: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 8ee1c7: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8ee1cb: fcomp dword ptr [esp + 0xc] */
  fpu_com(ST0, F32((uint32_t)(esp + 0xcu)));
  FPOP();
/* 8ee1cf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ee1d1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ee1d4: jp 0x8ee25e */
  if (pf) goto L_8ee25e;
L_8ee1da: /* 8ee1da: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8ee1de: fcomp dword ptr [0xa19c0c] */
  fpu_com(ST0, F32((uint32_t)(0xa19c0cu)));
  FPOP();
/* 8ee1e4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ee1e6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ee1e9: jnp 0x8ee32b */
  if (!pf) goto L_8ee32b;
L_8ee1ef: /* 8ee1ef: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8ee1f1: fchs  */
  ST0 = -ST0;
/* 8ee1f3: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 8ee1f7: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8ee1fa: fchs  */
  ST0 = -ST0;
/* 8ee1fc: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8ee200: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 8ee203: fchs  */
  ST0 = -ST0;
/* 8ee205: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 8ee209: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8ee20f: fdiv dword ptr [esp + 0x20] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x20u)));
/* 8ee213: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 8ee217: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 8ee21b: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ee21d: fcom dword ptr [ebp] */
  fpu_com(ST0, F32((uint32_t)(ebp)));
/* 8ee220: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ee222: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ee225: jne 0x8ee24d */
  if (!zf) goto L_8ee24d;
L_8ee227: /* 8ee227: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 8ee22b: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 8ee22e: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8ee232: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8ee236: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 8ee23a: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8ee23e: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 8ee240: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 8ee243: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 8ee245: mov dword ptr [edi + 8], edx */
  W32((uint32_t)(edi + 0x8u), edx);
/* 8ee248: jmp 0x8ee2fd */
  goto L_8ee2fd;
L_8ee24d: /* 8ee24d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ee24f: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8ee253: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 8ee257: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 8ee259: jmp 0x8ee2fd */
  goto L_8ee2fd;
L_8ee25e: /* 8ee25e: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8ee262: fcomp dword ptr [esp + 0x2c] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x2cu)));
  FPOP();
/* 8ee266: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8ee26a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ee26c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ee26f: jne 0x8ee2cd */
  if (!zf) goto L_8ee2cd;
L_8ee271: /* 8ee271: fcomp dword ptr [0xa1d850] */
  fpu_com(ST0, F32((uint32_t)(0xa1d850u)));
  FPOP();
/* 8ee277: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ee279: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ee27c: je 0x8ee32b */
  if (zf) goto L_8ee32b;
L_8ee282: /* 8ee282: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 8ee288: fdiv dword ptr [esp + 0x20] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x20u)));
/* 8ee28c: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8ee290: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 8ee294: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8ee296: fcom dword ptr [ebp] */
  fpu_com(ST0, F32((uint32_t)(ebp)));
/* 8ee299: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ee29b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ee29e: jne 0x8ee2bf */
  if (!zf) goto L_8ee2bf;
L_8ee2a0: /* 8ee2a0: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 8ee2a3: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8ee2a5: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 8ee2a9: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
/* 8ee2ab: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8ee2ae: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 8ee2b2: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
/* 8ee2b5: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* 8ee2b8: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 8ee2ba: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
/* 8ee2bd: jmp 0x8ee2fd */
  goto L_8ee2fd;
L_8ee2bf: /* 8ee2bf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ee2c1: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 8ee2c5: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 8ee2c9: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 8ee2cb: jmp 0x8ee2fd */
  goto L_8ee2fd;
L_8ee2cd: /* 8ee2cd: fcomp dword ptr [0xa19c0c] */
  fpu_com(ST0, F32((uint32_t)(0xa19c0cu)));
  FPOP();
/* 8ee2d3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ee2d5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ee2d8: jne 0x8ee2e0 */
  if (!zf) goto L_8ee2e0;
L_8ee2da: /* 8ee2da: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8ee2de: jmp 0x8ee2f5 */
  goto L_8ee2f5;
L_8ee2e0: /* 8ee2e0: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8ee2e4: fcomp dword ptr [0xa1d850] */
  fpu_com(ST0, F32((uint32_t)(0xa1d850u)));
  FPOP();
/* 8ee2ea: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ee2ec: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ee2ef: jp 0x8ee314 */
  if (pf) goto L_8ee314;
L_8ee2f1: /* 8ee2f1: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
L_8ee2f5: /* 8ee2f5: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* 8ee2f9: fdiv dword ptr [esp + 0x20] */
  ST0 = ST0 / (F32((uint32_t)(esp + 0x20u)));
L_8ee2fd: /* 8ee2fd: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 8ee2ff: fst dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0);
/* 8ee303: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 8ee305: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ee307: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ee30a: jp 0x8ee312 */
  if (pf) goto L_8ee312;
L_8ee30c: /* 8ee30c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8ee30e: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
L_8ee312: /* 8ee312: fstp dword ptr [ebx] */
  WF32((uint32_t)(ebx), ST0); FPOP();
L_8ee314: /* 8ee314: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 8ee316: fcomp dword ptr [ebp] */
  fpu_com(ST0, F32((uint32_t)(ebp)));
  FPOP();
/* 8ee319: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ee31b: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ee31e: jne 0x8ee32b */
  if (!zf) goto L_8ee32b;
L_8ee320: /* 8ee320: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ee321: mov eax, 1 */
  eax = 0x1u;
/* 8ee326: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ee327: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ee32a: ret  */
  esp += 4; SPILL(); return;
L_8ee32b: /* 8ee32b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ee32c: xor eax, eax */
  eax = 0;
/* 8ee32e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ee32f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ee332: ret  */
  esp += 4; SPILL(); return;
}

void f_8ee3d0(void) {
  LOAD_REGS();
L_8ee3d0: /* 8ee3d0: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8ee3d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ee3d4: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 8ee3d7: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 8ee3db: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8ee3de: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ee3df: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 8ee3e2: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 8ee3e6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ee3e7: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ee3ea: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee3ec: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8ee3ee: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8ee3f0: mov eax, dword ptr [esp + 0x18] */
  eax = R32((uint32_t)(esp + 0x18u));
/* 8ee3f4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee3f6: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8ee3fa: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* 8ee3fd: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* 8ee400: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* 8ee403: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 8ee406: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee408: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8ee40a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8ee40c: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* 8ee410: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee412: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8ee415: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ee416: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* 8ee41a: call 0x8ee110 */
  esp -= 4; W32(esp, 0x8ee41fu); SPILL(); f_8ee110(); if (g_unwind) return; RELOAD();
/* 8ee41f: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ee422: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ee423: ret  */
  esp += 4; SPILL(); return;
}

void f_8ee450(void) {
  LOAD_REGS();
L_8ee450: /* 8ee450: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ee453: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8ee456: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ee457: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 8ee45a: mov ebx, dword ptr [esp + 0x24] */
  ebx = R32((uint32_t)(esp + 0x24u));
/* 8ee45e: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8ee461: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ee462: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8ee465: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 8ee469: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ee46a: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 8ee46e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ee470: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ee471: mov edi, edx */
  edi = edx;
/* 8ee473: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8ee477: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8ee479: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8ee47c: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8ee47e: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* 8ee481: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ee483: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 8ee487: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* 8ee48a: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8ee48c: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* 8ee48e: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8ee492: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8ee495: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8ee497: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 8ee49b: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8ee4a1u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8ee4a1: fcomp dword ptr [0xa19c0c] */
  fpu_com(ST0, F32((uint32_t)(0xa19c0cu)));
  FPOP();
/* 8ee4a7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ee4a9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 8ee4ac: jp 0x8ee4bb */
  if (pf) goto L_8ee4bb;
L_8ee4ae: /* 8ee4ae: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ee4af: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ee4b0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ee4b1: mov eax, 1 */
  eax = 0x1u;
/* 8ee4b6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ee4b7: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ee4ba: ret  */
  esp += 4; SPILL(); return;
L_8ee4bb: /* 8ee4bb: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8ee4bf: fmul dword ptr [ebp + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x8u)));
/* 8ee4c2: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8ee4c6: fmul dword ptr [ebp + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x4u)));
/* 8ee4c9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee4cb: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8ee4cf: fmul dword ptr [ebp] */
  ST0 = ST0 * (F32((uint32_t)(ebp)));
/* 8ee4d2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee4d4: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8ee4da: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ee4dc: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ee4df: je 0x8ee4e3 */
  if (zf) goto L_8ee4e3;
L_8ee4e1: /* 8ee4e1: fchs  */
  ST0 = -ST0;
L_8ee4e3: /* 8ee4e3: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 8ee4e7: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8ee4eb: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8ee4ee: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8ee4f2: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8ee4f5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee4f7: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8ee4fb: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8ee4fd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee4ff: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8ee505: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ee507: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ee50a: je 0x8ee50e */
  if (zf) goto L_8ee50e;
L_8ee50c: /* 8ee50c: fchs  */
  ST0 = -ST0;
L_8ee50e: /* 8ee50e: mov eax, dword ptr [esp + 0x3c] */
  eax = R32((uint32_t)(esp + 0x3cu));
/* 8ee512: fld dword ptr [esp + 0x1c] */
  { double v = F32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* 8ee516: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8ee519: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* 8ee51d: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8ee520: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee522: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 8ee526: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8ee528: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee52a: fcom dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
/* 8ee530: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8ee532: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8ee535: je 0x8ee539 */
  if (zf) goto L_8ee539;
L_8ee537: /* 8ee537: fchs  */
  ST0 = -ST0;
L_8ee539: /* 8ee539: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* 8ee53c: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 8ee540: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ee542: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* 8ee546: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* 8ee549: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ee54a: mov eax, dword ptr [esp + 0x30] */
  eax = R32((uint32_t)(esp + 0x30u));
/* 8ee54e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee550: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8ee552: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* 8ee554: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee556: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 8ee55a: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8ee55e: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* 8ee562: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 8ee565: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ee566: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8ee56a: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ee56d: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 8ee570: lea ecx, [esp + 0x24] */
  ecx = (uint32_t)(esp + 0x24u);
/* 8ee574: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee576: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8ee57a: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 8ee57c: mov edi, dword ptr [esp + 0x5c] */
  edi = R32((uint32_t)(esp + 0x5cu));
/* 8ee580: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee582: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8ee586: fld dword ptr [esp + 0x2c] */
  { double v = F32((uint32_t)(esp + 0x2cu)); FPUSH(v); }
/* 8ee58a: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 8ee58d: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8ee591: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 8ee594: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee596: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8ee59a: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* 8ee59c: mov ebx, dword ptr [esp + 0x58] */
  ebx = R32((uint32_t)(esp + 0x58u));
/* 8ee5a0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee5a2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8ee5a5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ee5a6: mov edx, dword ptr [esp + 0x3c] */
  edx = R32((uint32_t)(esp + 0x3cu));
/* 8ee5aa: call 0x8ee110 */
  esp -= 4; W32(esp, 0x8ee5afu); SPILL(); f_8ee110(); if (g_unwind) return; RELOAD();
/* 8ee5af: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ee5b2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ee5b3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8ee5b4: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ee5b5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ee5b6: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ee5b9: ret  */
  esp += 4; SPILL(); return;
}

void f_8ee620(void) {
  LOAD_REGS();
L_8ee620: /* 8ee620: sub esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ee623: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 8ee627: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8ee629: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ee62a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ee62b: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 8ee62f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ee630: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* 8ee634: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 8ee638: mov ecx, edi */
  ecx = edi;
/* 8ee63a: mov dword ptr [esp + 0xc], 0xbf800000 */
  W32((uint32_t)(esp + 0xcu), 0xbf800000u);
/* 8ee642: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8ee648u); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8ee648: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 8ee64c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8ee64e: lea eax, [esp + 0xc] */
  eax = (uint32_t)(esp + 0xcu);
/* 8ee652: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ee653: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 8ee657: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 8ee65b: mov edx, dword ptr [esp + 0x38] */
  edx = R32((uint32_t)(esp + 0x38u));
/* 8ee65f: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8ee662: mov ecx, dword ptr [esp + 0x18] */
  ecx = R32((uint32_t)(esp + 0x18u));
/* 8ee666: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8ee669: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ee66a: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8ee66c: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 8ee670: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 8ee672: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ee675: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 8ee679: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee67b: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 8ee67e: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8ee681: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 8ee685: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee687: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8ee68b: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8ee68d: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8ee68f: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8ee692: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 8ee695: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee697: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8ee69a: mov eax, ebp */
  eax = ebp;
/* 8ee69c: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 8ee69f: mov edi, dword ptr [esp + 0x68] */
  edi = R32((uint32_t)(esp + 0x68u));
/* 8ee6a3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee6a5: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8ee6a8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ee6a9: mov edx, esi */
  edx = esi;
/* 8ee6ab: call 0x8ee110 */
  esp -= 4; W32(esp, 0x8ee6b0u); SPILL(); f_8ee110(); if (g_unwind) return; RELOAD();
/* 8ee6b0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ee6b3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ee6b5: jne 0x8ee6c0 */
  if (!zf) goto L_8ee6c0;
L_8ee6b7: /* 8ee6b7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8ee6b8: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8ee6b9: xor eax, eax */
  eax = 0;
/* 8ee6bb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8ee6bc: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ee6bf: ret  */
  esp += 4; SPILL(); return;
L_8ee6c0: /* 8ee6c0: mov edi, dword ptr [esp + 0x4c] */
  edi = R32((uint32_t)(esp + 0x4cu));
/* 8ee6c4: mov ecx, edi */
  ecx = edi;
/* 8ee6c6: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8ee6ccu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8ee6cc: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 8ee6d0: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8ee6d3: mov eax, dword ptr [esp + 0x40] */
  eax = R32((uint32_t)(esp + 0x40u));
/* 8ee6d7: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 8ee6db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ee6dc: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 8ee6e0: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 8ee6e4: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8ee6e6: mov edx, dword ptr [esp + 0x18] */
  edx = R32((uint32_t)(esp + 0x18u));
/* 8ee6ea: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* 8ee6ec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ee6ed: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8ee6f0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8ee6f3: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 8ee6f6: lea ebx, [esp + 0x20] */
  ebx = (uint32_t)(esp + 0x20u);
/* 8ee6fa: mov edx, esi */
  edx = esi;
/* 8ee6fc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee6fe: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8ee701: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 8ee705: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 8ee708: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee70a: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* 8ee70e: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 8ee711: fmul dword ptr [edi + 8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x8u)));
/* 8ee714: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 8ee717: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* 8ee71a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee71c: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8ee71e: mov edi, dword ptr [esp + 0x68] */
  edi = R32((uint32_t)(esp + 0x68u));
/* 8ee722: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8ee724: mov eax, dword ptr [esp + 0x44] */
  eax = R32((uint32_t)(esp + 0x44u));
/* 8ee728: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8ee72a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8ee72d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ee72e: mov eax, ebp */
  eax = ebp;
/* 8ee730: call 0x8ee110 */
  esp -= 4; W32(esp, 0x8ee735u); SPILL(); f_8ee110(); if (g_unwind) return; RELOAD();
/* 8ee735: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ee738: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ee73a: je 0x8ee6b7 */
  if (zf) goto L_8ee6b7;
L_8ee740: /* 8ee740: lea ecx, [esp + 0xc] */
  ecx = (uint32_t)(esp + 0xcu);
/* 8ee744: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ee745: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 8ee749: call dword ptr [0xcfa584] */
  esp -= 4; W32(esp, 0x8ee74fu); SPILL(); f_4e3111(); if (g_unwind) return; /* Core!?SizeSquared@FVector@@QBEMXZ */ RELOAD();
/* 8ee74f: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 8ee753: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8ee756: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* 8ee75a: mov edx, dword ptr [esp + 0x40] */
  edx = R32((uint32_t)(esp + 0x40u));
/* 8ee75e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ee75f: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 8ee763: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 8ee766: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ee767: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ee768: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ee769: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 8ee76d: lea ebx, [esp + 0x24] */
  ebx = (uint32_t)(esp + 0x24u);
/* 8ee771: call 0x8ee3d0 */
  esp -= 4; W32(esp, 0x8ee776u); SPILL(); f_8ee3d0(); if (g_unwind) return; RELOAD();
/* 8ee776: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ee779: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ee77b: je 0x8ee6b7 */
  if (zf) goto L_8ee6b7;
L_8ee781: /* 8ee781: mov edi, dword ptr [esp + 0x34] */
  edi = R32((uint32_t)(esp + 0x34u));
/* 8ee785: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8ee787: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 8ee789: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 8ee78d: mov ebx, dword ptr [esp + 0x50] */
  ebx = R32((uint32_t)(esp + 0x50u));
/* 8ee791: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ee792: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* 8ee796: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 8ee79a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8ee79d: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 8ee7a1: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 8ee7a4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ee7a5: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 8ee7a9: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 8ee7ad: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 8ee7b1: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8ee7b4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ee7b5: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 8ee7b8: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 8ee7bc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ee7bd: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 8ee7c1: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 8ee7c5: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 8ee7c8: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ee7c9: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 8ee7cb: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ee7cc: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 8ee7d0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ee7d1: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* 8ee7d5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ee7d6: fld dword ptr [ebp + 4] */
  { double v = F32((uint32_t)(ebp + 0x4u)); FPUSH(v); }
/* 8ee7d9: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ee7da: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 8ee7dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ee7de: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ee7df: lea eax, [esp + 0x44] */
  eax = (uint32_t)(esp + 0x44u);
/* 8ee7e3: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 8ee7e7: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8ee7ea: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 8ee7ee: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 8ee7f1: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 8ee7f5: call 0x8ee450 */
  esp -= 4; W32(esp, 0x8ee7fau); SPILL(); f_8ee450(); if (g_unwind) return; RELOAD();
/* 8ee7fa: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ee7fd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ee7ff: je 0x8ee6b7 */
  if (zf) goto L_8ee6b7;
L_8ee805: /* 8ee805: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 8ee809: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8ee80b: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 8ee80d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ee80e: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 8ee812: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 8ee816: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ee817: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 8ee81b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8ee81e: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 8ee822: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 8ee825: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8ee829: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ee82a: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 8ee82e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ee82f: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 8ee833: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ee834: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ee835: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 8ee839: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ee83a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ee83b: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 8ee83f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8ee842: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ee843: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 8ee846: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ee847: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ee848: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 8ee84c: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 8ee850: call 0x8ee450 */
  esp -= 4; W32(esp, 0x8ee855u); SPILL(); f_8ee450(); if (g_unwind) return; RELOAD();
/* 8ee855: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ee858: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ee85a: je 0x8ee6b7 */
  if (zf) goto L_8ee6b7;
L_8ee860: /* 8ee860: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 8ee864: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 8ee867: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 8ee869: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ee86a: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 8ee86e: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 8ee872: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ee873: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 8ee877: fld dword ptr [ebp + 4] */
  { double v = F32((uint32_t)(ebp + 0x4u)); FPUSH(v); }
/* 8ee87a: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 8ee87e: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 8ee881: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8ee885: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ee886: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 8ee88a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ee88b: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 8ee88f: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ee890: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ee891: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 8ee895: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ee896: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ee897: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 8ee89b: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8ee89e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ee89f: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 8ee8a2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ee8a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ee8a4: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 8ee8a8: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 8ee8ac: call 0x8ee450 */
  esp -= 4; W32(esp, 0x8ee8b1u); SPILL(); f_8ee450(); if (g_unwind) return; RELOAD();
/* 8ee8b1: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ee8b4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ee8b6: je 0x8ee6b7 */
  if (zf) goto L_8ee6b7;
L_8ee8bc: /* 8ee8bc: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 8ee8c0: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8ee8c2: fsub dword ptr [ebp] */
  ST0 = ST0 - (F32((uint32_t)(ebp)));
/* 8ee8c5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ee8c6: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 8ee8ca: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 8ee8ce: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ee8cf: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 8ee8d3: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8ee8d6: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 8ee8da: fsub dword ptr [ebp + 4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x4u)));
/* 8ee8dd: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8ee8e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ee8e2: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 8ee8e6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ee8e7: mov edx, dword ptr [esp + 0x50] */
  edx = R32((uint32_t)(esp + 0x50u));
/* 8ee8eb: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ee8ec: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ee8ed: mov eax, dword ptr [esp + 0x60] */
  eax = R32((uint32_t)(esp + 0x60u));
/* 8ee8f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ee8f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ee8f3: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 8ee8f7: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 8ee8fa: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ee8fb: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 8ee8fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ee8ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ee900: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 8ee904: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 8ee908: call 0x8ee450 */
  esp -= 4; W32(esp, 0x8ee90du); SPILL(); f_8ee450(); if (g_unwind) return; RELOAD();
/* 8ee90d: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ee910: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ee912: je 0x8ee6b7 */
  if (zf) goto L_8ee6b7;
L_8ee918: /* 8ee918: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 8ee91c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8ee91e: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 8ee920: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ee921: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 8ee925: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 8ee929: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ee92a: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 8ee92e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8ee931: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 8ee935: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 8ee938: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8ee93c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ee93d: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 8ee941: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ee942: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 8ee946: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ee947: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ee948: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ee949: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ee94a: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 8ee94e: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 8ee952: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8ee955: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ee956: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 8ee959: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ee95a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ee95b: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 8ee95f: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 8ee963: call 0x8ee450 */
  esp -= 4; W32(esp, 0x8ee968u); SPILL(); f_8ee450(); if (g_unwind) return; RELOAD();
/* 8ee968: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ee96b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ee96d: je 0x8ee6b7 */
  if (zf) goto L_8ee6b7;
L_8ee973: /* 8ee973: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 8ee977: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 8ee97a: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 8ee97c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ee97d: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 8ee981: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8ee985: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ee986: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 8ee98a: fld dword ptr [ebp + 4] */
  { double v = F32((uint32_t)(ebp + 0x4u)); FPUSH(v); }
/* 8ee98d: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 8ee991: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 8ee994: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 8ee998: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ee999: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 8ee99d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ee99e: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 8ee9a2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ee9a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ee9a4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ee9a5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ee9a6: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 8ee9aa: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 8ee9ae: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8ee9b1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8ee9b2: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 8ee9b5: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8ee9b6: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8ee9b7: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 8ee9bb: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 8ee9bf: call 0x8ee450 */
  esp -= 4; W32(esp, 0x8ee9c4u); SPILL(); f_8ee450(); if (g_unwind) return; RELOAD();
/* 8ee9c4: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8ee9c7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8ee9c9: je 0x8ee6b7 */
  if (zf) goto L_8ee6b7;
L_8ee9cf: /* 8ee9cf: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 8ee9d3: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8ee9d5: fsub dword ptr [ebp] */
  ST0 = ST0 - (F32((uint32_t)(ebp)));
/* 8ee9d8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ee9d9: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 8ee9dd: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8ee9e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8ee9e2: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 8ee9e6: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8ee9e9: mov ecx, dword ptr [esp + 0x50] */
  ecx = R32((uint32_t)(esp + 0x50u));
/* 8ee9ed: fsub dword ptr [ebp + 4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x4u)));
/* 8ee9f0: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 8ee9f4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8ee9f5: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 8ee9f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8ee9fa: mov eax, dword ptr [esp + 0x5c] */
  eax = R32((uint32_t)(esp + 0x5cu));
/* 8ee9fe: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8ee9ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eea00: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8eea01: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8eea02: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 8eea06: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 8eea0a: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 8eea0d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8eea0e: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 8eea11: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8eea12: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8eea13: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 8eea17: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 8eea1b: call 0x8ee450 */
  esp -= 4; W32(esp, 0x8eea20u); SPILL(); f_8ee450(); if (g_unwind) return; RELOAD();
/* 8eea20: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eea23: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8eea25: je 0x8ee6b7 */
  if (zf) goto L_8ee6b7;
L_8eea2b: /* 8eea2b: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* 8eea2f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8eea31: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* 8eea33: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eea34: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* 8eea38: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8eea3c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8eea3d: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 8eea41: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8eea44: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 8eea48: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* 8eea4b: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 8eea4f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8eea50: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 8eea54: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eea55: mov eax, dword ptr [esp + 0x4c] */
  eax = R32((uint32_t)(esp + 0x4cu));
/* 8eea59: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8eea5a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8eea5b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8eea5c: mov edx, dword ptr [esp + 0x5c] */
  edx = R32((uint32_t)(esp + 0x5cu));
/* 8eea60: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eea61: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 8eea65: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 8eea68: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8eea69: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* 8eea6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8eea6d: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8eea6e: mov eax, ebx */
  eax = ebx;
/* 8eea70: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 8eea74: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 8eea78: call 0x8ee450 */
  esp -= 4; W32(esp, 0x8eea7du); SPILL(); f_8ee450(); if (g_unwind) return; RELOAD();
/* 8eea7d: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eea80: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8eea82: je 0x8ee6b7 */
  if (zf) goto L_8ee6b7;
L_8eea88: /* 8eea88: mov ecx, dword ptr [esp + 0x58] */
  ecx = R32((uint32_t)(esp + 0x58u));
/* 8eea8c: fld dword ptr [ebp] */
  { double v = F32((uint32_t)(ebp)); FPUSH(v); }
/* 8eea8f: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* 8eea91: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8eea92: mov ecx, dword ptr [esp + 0x48] */
  ecx = R32((uint32_t)(esp + 0x48u));
/* 8eea96: lea edx, [esp + 0x14] */
  edx = (uint32_t)(esp + 0x14u);
/* 8eea9a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8eea9b: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 8eea9f: fld dword ptr [ebp + 4] */
  { double v = F32((uint32_t)(ebp + 0x4u)); FPUSH(v); }
/* 8eeaa2: mov edx, dword ptr [esp + 0x54] */
  edx = R32((uint32_t)(esp + 0x54u));
/* 8eeaa6: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* 8eeaa9: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 8eeaad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eeaae: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 8eeab2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8eeab3: mov ecx, dword ptr [esp + 0x4c] */
  ecx = R32((uint32_t)(esp + 0x4cu));
/* 8eeab7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8eeab8: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8eeab9: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 8eeabd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eeabe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8eeabf: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 8eeac3: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* 8eeac6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8eeac7: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* 8eeaca: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8eeacb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8eeacc: mov eax, ebx */
  eax = ebx;
/* 8eeace: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 8eead2: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 8eead6: call 0x8ee450 */
  esp -= 4; W32(esp, 0x8eeadbu); SPILL(); f_8ee450(); if (g_unwind) return; RELOAD();
/* 8eeadb: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eeade: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8eeae0: je 0x8ee6b7 */
  if (zf) goto L_8ee6b7;
L_8eeae6: /* 8eeae6: mov edx, dword ptr [esp + 0x58] */
  edx = R32((uint32_t)(esp + 0x58u));
/* 8eeaea: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 8eeaec: fsub dword ptr [ebp] */
  ST0 = ST0 - (F32((uint32_t)(ebp)));
/* 8eeaef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8eeaf0: mov edx, dword ptr [esp + 0x48] */
  edx = R32((uint32_t)(esp + 0x48u));
/* 8eeaf4: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* 8eeaf8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eeaf9: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* 8eeafd: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 8eeb00: mov eax, dword ptr [esp + 0x54] */
  eax = R32((uint32_t)(esp + 0x54u));
/* 8eeb04: fsub dword ptr [ebp + 4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x4u)));
/* 8eeb07: lea ecx, [esp + 0x14] */
  ecx = (uint32_t)(esp + 0x14u);
/* 8eeb0b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8eeb0c: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 8eeb10: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8eeb11: mov edx, dword ptr [esp + 0x4c] */
  edx = R32((uint32_t)(esp + 0x4cu));
/* 8eeb15: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8eeb16: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8eeb17: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8eeb18: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8eeb19: mov edx, dword ptr [esp + 0x60] */
  edx = R32((uint32_t)(esp + 0x60u));
/* 8eeb1d: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* 8eeb21: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 8eeb24: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 8eeb25: fsub dword ptr [ebp + 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x8u)));
/* 8eeb28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8eeb29: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8eeb2a: mov eax, ebx */
  eax = ebx;
/* 8eeb2c: fstp dword ptr [esp + 0x58] */
  WF32((uint32_t)(esp + 0x58u), ST0); FPOP();
/* 8eeb30: lea ecx, [esp + 0x50] */
  ecx = (uint32_t)(esp + 0x50u);
/* 8eeb34: call 0x8ee450 */
  esp -= 4; W32(esp, 0x8eeb39u); SPILL(); f_8ee450(); if (g_unwind) return; RELOAD();
/* 8eeb39: add esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eeb3c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8eeb3e: je 0x8ee6b7 */
  if (zf) goto L_8ee6b7;
L_8eeb44: /* 8eeb44: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* 8eeb48: fcomp dword ptr [0x9f402c] */
  fpu_com(ST0, F32((uint32_t)(0x9f402cu)));
  FPOP();
/* 8eeb4e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 8eeb50: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8eeb53: jne 0x8eeb6b */
  if (!zf) goto L_8eeb6b;
L_8eeb55: /* 8eeb55: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* 8eeb59: mov ecx, dword ptr [esp + 0x54] */
  ecx = R32((uint32_t)(esp + 0x54u));
/* 8eeb5d: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8eeb5e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8eeb5f: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 8eeb61: mov eax, 1 */
  eax = 0x1u;
/* 8eeb66: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8eeb67: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eeb6a: ret  */
  esp += 4; SPILL(); return;
L_8eeb6b: /* 8eeb6b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8eeb6c: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8eeb6d: mov eax, 2 */
  eax = 0x2u;
/* 8eeb72: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8eeb73: add esp, 0x24 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x24u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8eeb76: ret  */
  esp += 4; SPILL(); return;
}
