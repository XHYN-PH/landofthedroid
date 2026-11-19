#include "recomp.h"
#include "rec_mod.h"

void f_e9c423(void) {
  LOAD_REGS();
L_e9c423: /* e9c423: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9c425: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9c42au); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9c42a: jmp dword ptr [0xeba0a0] */
  { uint32_t t = R32((uint32_t)(0xeba0a0u)); SPILL(); call_ind(t); return; }
}

void f_e9c430(void) {
  LOAD_REGS();
L_e9c430: /* e9c430: jmp dword ptr [0xeba0a0] */
  { uint32_t t = R32((uint32_t)(0xeba0a0u)); SPILL(); call_ind(t); return; }
}

void f_e9c436(void) {
  LOAD_REGS();
L_e9c436: /* e9c436: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9c437: mov ebp, esp */
  ebp = esp;
/* e9c439: sub esp, 0x54 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x54u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9c43c: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* e9c43f: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* e9c442: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* e9c444: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* e9c447: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* e9c44a: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* e9c44d: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* e9c450: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* e9c453: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e9c456: fmul st(2) */
  ST0 = ST0 * STI(2);
/* e9c458: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* e9c45b: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* e9c45e: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e9c461: fmul st(2) */
  ST0 = ST0 * STI(2);
/* e9c463: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* e9c466: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* e9c469: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* e9c46c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c46e: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* e9c471: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* e9c474: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* e9c477: fstp dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* e9c47a: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* e9c47d: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9c480: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* e9c483: fmul st(2) */
  ST0 = ST0 * STI(2);
/* e9c485: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e9c488: fmul st(2) */
  ST0 = ST0 * STI(2);
/* e9c48a: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c48c: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* e9c48f: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* e9c492: fmul st(2) */
  ST0 = ST0 * STI(2);
/* e9c494: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* e9c497: fmul st(2) */
  ST0 = ST0 * STI(2);
/* e9c499: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c49b: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* e9c49e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9c4a0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9c4a2: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9c4a5: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* e9c4a8: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e9c4ab: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* e9c4ae: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c4b0: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* e9c4b3: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* e9c4b6: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* e9c4b9: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* e9c4bc: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* e9c4bf: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c4c1: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* e9c4c4: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* e9c4c7: mov dword ptr [ebp + 0x10], ecx */
  W32((uint32_t)(ebp + 0x10u), ecx);
/* e9c4ca: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* e9c4cd: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* e9c4d0: fmul dword ptr [ebp - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffffcu)));
/* e9c4d3: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c4d5: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* e9c4d8: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* e9c4db: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* e9c4de: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* e9c4e1: fst dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0);
/* e9c4e4: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* e9c4e7: fst dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0);
/* e9c4ea: fld dword ptr [eax + 0x28] */
  { double v = F32((uint32_t)(eax + 0x28u)); FPUSH(v); }
/* e9c4ed: fst dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0);
/* e9c4f0: fld dword ptr [eax + 0x2c] */
  { double v = F32((uint32_t)(eax + 0x2cu)); FPUSH(v); }
/* e9c4f3: fst dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0);
/* e9c4f6: fld st(5) */
  { double v = STI(5); FPUSH(v); }
/* e9c4f8: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* e9c4fb: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* e9c4fd: fmul dword ptr [ebp - 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffff8u)));
/* e9c500: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c502: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9c504: fmul dword ptr [ebp - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffff4u)));
/* e9c507: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c509: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* e9c50c: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9c50e: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* e9c511: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* e9c514: fmul dword ptr [ebp - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffff4u)));
/* e9c517: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c519: fld st(6) */
  { double v = STI(6); FPUSH(v); }
/* e9c51b: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* e9c51e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c520: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* e9c523: fld st(5) */
  { double v = STI(5); FPUSH(v); }
/* e9c525: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* e9c528: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9c52a: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* e9c52d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c52f: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* e9c532: fmul dword ptr [ebp - 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffff8u)));
/* e9c535: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c537: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* e9c53a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9c53c: fmul dword ptr [ebp - 0x34] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffccu)));
/* e9c53f: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* e9c542: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* e9c545: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c547: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* e9c549: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* e9c54c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c54e: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* e9c551: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9c554: fmul st(3) */
  ST0 = ST0 * STI(3);
/* e9c556: fld dword ptr [ebp - 0xc] */
  { double v = F32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* e9c559: fmul st(2) */
  ST0 = ST0 * STI(2);
/* e9c55b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c55d: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* e9c560: fmul st(6) */
  ST0 = ST0 * STI(6);
/* e9c562: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c564: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* e9c567: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* e9c56a: fmul st(5) */
  ST0 = ST0 * STI(5);
/* e9c56c: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* e9c56f: fmul st(4) */
  ST0 = ST0 * STI(4);
/* e9c571: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c573: fld dword ptr [ebp - 0xc] */
  { double v = F32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* e9c576: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* e9c579: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c57b: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* e9c57e: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* e9c581: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9c583: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9c586: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* e9c589: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c58b: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* e9c58e: fmul st(6) */
  ST0 = ST0 * STI(6);
/* e9c590: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c592: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* e9c595: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* e9c598: fmul st(3) */
  ST0 = ST0 * STI(3);
/* e9c59a: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* e9c59d: fmul st(2) */
  ST0 = ST0 * STI(2);
/* e9c59f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c5a1: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* e9c5a4: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* e9c5a7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c5a9: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* e9c5ac: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9c5ae: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9c5b0: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9c5b2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9c5b4: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9c5b6: fmul st(4) */
  ST0 = ST0 * STI(4);
/* e9c5b8: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c5ba: fstp dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* e9c5bd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9c5bf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9c5c1: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9c5c3: fmul dword ptr [ebp - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffffcu)));
/* e9c5c6: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* e9c5c9: fmul st(2) */
  ST0 = ST0 * STI(2);
/* e9c5cb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c5cd: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* e9c5d0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9c5d2: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* e9c5d5: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* e9c5d8: fmul st(2) */
  ST0 = ST0 * STI(2);
/* e9c5da: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c5dc: fstp st(2) */
  STI(2) = ST0; FPOP();
/* e9c5de: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9c5e0: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* e9c5e3: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9c5e5: fmul dword ptr [ebp - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffffcu)));
/* e9c5e8: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* e9c5eb: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* e9c5ee: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* e9c5f1: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* e9c5f4: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* e9c5f7: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* e9c5fa: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* e9c5fd: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c5ff: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* e9c602: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* e9c605: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* e9c608: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* e9c60b: fmul dword ptr [ebp - 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe0u)));
/* e9c60e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c610: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* e9c613: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* e9c616: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* e9c619: fmul dword ptr [ebp - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffffcu)));
/* e9c61c: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* e9c61f: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* e9c622: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* e9c625: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c627: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* e9c62a: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* e9c62d: mov eax, dword ptr [eax + 0x34] */
  eax = R32((uint32_t)(eax + 0x34u));
/* e9c630: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9c633: mov dword ptr [ebp + 0x10], eax */
  W32((uint32_t)(ebp + 0x10u), eax);
/* e9c636: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9c638: fld dword ptr [ebp - 0xc] */
  { double v = F32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* e9c63b: fmul dword ptr [ebp - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffffcu)));
/* e9c63e: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c640: fld st(5) */
  { double v = STI(5); FPUSH(v); }
/* e9c642: fmul st(3) */
  ST0 = ST0 * STI(3);
/* e9c644: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c646: fstp dword ptr [ebp - 0x10] */
  WF32((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* e9c649: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9c64b: fmul st(2) */
  ST0 = ST0 * STI(2);
/* e9c64d: fld st(6) */
  { double v = STI(6); FPUSH(v); }
/* e9c64f: fmul st(2) */
  ST0 = ST0 * STI(2);
/* e9c651: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c653: fld dword ptr [ebp - 0xc] */
  { double v = F32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* e9c656: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* e9c659: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c65b: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* e9c65e: fld st(5) */
  { double v = STI(5); FPUSH(v); }
/* e9c660: fmul dword ptr [ebp - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffffcu)));
/* e9c663: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9c666: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* e9c669: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c66b: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9c66d: fmul st(3) */
  ST0 = ST0 * STI(3);
/* e9c66f: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c671: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* e9c674: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9c676: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9c678: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* e9c67a: fmul dword ptr [ebp - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffffcu)));
/* e9c67d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c67f: fld st(5) */
  { double v = STI(5); FPUSH(v); }
/* e9c681: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* e9c684: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c686: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* e9c689: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9c68b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9c68d: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9c68f: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* e9c692: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9c695: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* e9c698: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c69a: fld dword ptr [ebp - 0xc] */
  { double v = F32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* e9c69d: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* e9c6a0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c6a2: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* e9c6a5: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9c6a7: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* e9c6aa: fld dword ptr [ebp - 0xc] */
  { double v = F32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* e9c6ad: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* e9c6b0: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c6b2: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9c6b4: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e9c6b7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9c6b9: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* e9c6bc: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c6be: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* e9c6c1: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* e9c6c4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9c6c6: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* e9c6c8: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* e9c6cb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c6cd: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9c6d0: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* e9c6d3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c6d5: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* e9c6d8: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9c6da: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* e9c6dd: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9c6df: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* e9c6e2: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c6e4: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9c6e6: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* e9c6e9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9c6eb: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* e9c6ee: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9c6f0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9c6f2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9c6f4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9c6f6: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* e9c6f9: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* e9c6fc: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* e9c6ff: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* e9c702: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c704: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* e9c707: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* e9c70a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c70c: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* e9c70f: fmul dword ptr [ebp - 0x38] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc8u)));
/* e9c712: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9c714: je 0xe9c718 */
  if (zf) goto L_e9c718;
L_e9c716: /* e9c716: fst dword ptr [eax] */
  WF32((uint32_t)(eax), ST0);
L_e9c718: /* e9c718: fld1  */
  FPUSH(1.0);
/* e9c71a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9c71b: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* e9c71d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9c71e: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* e9c721: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9c723: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9c726: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* e9c729: call 0xeac806 */
  esp -= 4; W32(esp, 0xe9c72eu); SPILL(); f_eac806(); if (g_unwind) return; RELOAD();
/* e9c72e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9c730: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9c731: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9c732: je 0xe9c7bf */
  if (zf) goto L_e9c7bf;
L_e9c738: /* e9c738: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9c73b: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9c73e: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* e9c741: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9c743: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9c745: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* e9c748: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9c74a: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9c74d: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* e9c750: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9c752: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* e9c755: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* e9c758: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9c75a: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* e9c75d: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* e9c760: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9c762: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* e9c765: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* e9c768: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9c76a: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* e9c76d: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9c770: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9c772: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* e9c775: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* e9c778: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9c77a: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* e9c77d: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* e9c780: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9c782: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* e9c785: fld dword ptr [ebp - 0x3c] */
  { double v = F32((uint32_t)(ebp + 0xffffffc4u)); FPUSH(v); }
/* e9c788: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9c78a: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* e9c78d: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* e9c790: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9c792: fstp dword ptr [eax + 0x28] */
  WF32((uint32_t)(eax + 0x28u), ST0); FPOP();
/* e9c795: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* e9c798: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9c79a: fstp dword ptr [eax + 0x2c] */
  WF32((uint32_t)(eax + 0x2cu), ST0); FPOP();
/* e9c79d: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* e9c7a0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9c7a2: fstp dword ptr [eax + 0x30] */
  WF32((uint32_t)(eax + 0x30u), ST0); FPOP();
/* e9c7a5: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* e9c7a8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9c7aa: fstp dword ptr [eax + 0x34] */
  WF32((uint32_t)(eax + 0x34u), ST0); FPOP();
/* e9c7ad: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* e9c7b0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9c7b2: fstp dword ptr [eax + 0x38] */
  WF32((uint32_t)(eax + 0x38u), ST0); FPOP();
/* e9c7b5: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* e9c7b8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9c7ba: fstp dword ptr [eax + 0x3c] */
  WF32((uint32_t)(eax + 0x3cu), ST0); FPOP();
/* e9c7bd: fstp st(0) */
  STI(0) = ST0; FPOP();
L_e9c7bf: /* e9c7bf: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9c7c0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e9c7c3(void) {
  LOAD_REGS();
L_e9c7c3: /* e9c7c3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9c7c5: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9c7cau); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9c7ca: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* e9c7ce: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9c7d1: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* e9c7d5: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* e9c7d9: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e9c7dd: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* e9c7e1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9c7e4: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* e9c7e8: call dword ptr [0xeba0dc] */
  { uint32_t t = R32((uint32_t)(0xeba0dcu)); esp -= 4; W32(esp, 0xe9c7eeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9c7ee: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_e9c7f1(void) {
  LOAD_REGS();
L_e9c7f1: /* e9c7f1: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e9c7f5: fldz  */
  FPUSH(0.0);
/* e9c7f7: fstp dword ptr [eax + 0x38] */
  WF32((uint32_t)(eax + 0x38u), ST0); FPOP();
/* e9c7fa: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e9c7fe: fldz  */
  FPUSH(0.0);
/* e9c800: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* e9c802: fstp dword ptr [eax + 0x34] */
  WF32((uint32_t)(eax + 0x34u), ST0); FPOP();
/* e9c805: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e9c809: fldz  */
  FPUSH(0.0);
/* e9c80b: mov dword ptr [eax + 0x14], ecx */
  W32((uint32_t)(eax + 0x14u), ecx);
/* e9c80e: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9c812: fstp dword ptr [eax + 0x30] */
  WF32((uint32_t)(eax + 0x30u), ST0); FPOP();
/* e9c815: mov dword ptr [eax + 0x28], ecx */
  W32((uint32_t)(eax + 0x28u), ecx);
/* e9c818: fldz  */
  FPUSH(0.0);
/* e9c81a: fstp dword ptr [eax + 0x2c] */
  WF32((uint32_t)(eax + 0x2cu), ST0); FPOP();
/* e9c81d: fldz  */
  FPUSH(0.0);
/* e9c81f: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* e9c822: fldz  */
  FPUSH(0.0);
/* e9c824: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* e9c827: fldz  */
  FPUSH(0.0);
/* e9c829: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* e9c82c: fldz  */
  FPUSH(0.0);
/* e9c82e: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* e9c831: fldz  */
  FPUSH(0.0);
/* e9c833: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* e9c836: fldz  */
  FPUSH(0.0);
/* e9c838: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* e9c83b: fldz  */
  FPUSH(0.0);
/* e9c83d: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* e9c840: fldz  */
  FPUSH(0.0);
/* e9c842: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9c845: fld1  */
  FPUSH(1.0);
/* e9c847: fstp dword ptr [eax + 0x3c] */
  WF32((uint32_t)(eax + 0x3cu), ST0); FPOP();
/* e9c84a: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_e9c84d(void) {
  LOAD_REGS();
L_e9c84d: /* e9c84d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9c84f: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9c854u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9c854: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* e9c858: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9c85b: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* e9c85f: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* e9c863: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e9c867: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* e9c86b: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9c86e: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* e9c872: call dword ptr [0xeba0c0] */
  { uint32_t t = R32((uint32_t)(0xeba0c0u)); esp -= 4; W32(esp, 0xe9c878u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9c878: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_e9c87b(void) {
  LOAD_REGS();
L_e9c87b: /* e9c87b: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e9c87f: fldz  */
  FPUSH(0.0);
/* e9c881: fstp dword ptr [eax + 0x2c] */
  WF32((uint32_t)(eax + 0x2cu), ST0); FPOP();
/* e9c884: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* e9c888: fldz  */
  FPUSH(0.0);
/* e9c88a: mov dword ptr [eax + 0x30], ecx */
  W32((uint32_t)(eax + 0x30u), ecx);
/* e9c88d: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* e9c890: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e9c894: fldz  */
  FPUSH(0.0);
/* e9c896: mov dword ptr [eax + 0x34], ecx */
  W32((uint32_t)(eax + 0x34u), ecx);
/* e9c899: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* e9c89d: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* e9c8a0: mov dword ptr [eax + 0x38], ecx */
  W32((uint32_t)(eax + 0x38u), ecx);
/* e9c8a3: fldz  */
  FPUSH(0.0);
/* e9c8a5: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* e9c8a8: fldz  */
  FPUSH(0.0);
/* e9c8aa: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* e9c8ad: fldz  */
  FPUSH(0.0);
/* e9c8af: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* e9c8b2: fldz  */
  FPUSH(0.0);
/* e9c8b4: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* e9c8b7: fldz  */
  FPUSH(0.0);
/* e9c8b9: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* e9c8bc: fldz  */
  FPUSH(0.0);
/* e9c8be: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9c8c1: fld1  */
  FPUSH(1.0);
/* e9c8c3: fstp dword ptr [eax + 0x3c] */
  WF32((uint32_t)(eax + 0x3cu), ST0); FPOP();
/* e9c8c6: fld1  */
  FPUSH(1.0);
/* e9c8c8: fstp dword ptr [eax + 0x28] */
  WF32((uint32_t)(eax + 0x28u), ST0); FPOP();
/* e9c8cb: fld1  */
  FPUSH(1.0);
/* e9c8cd: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* e9c8d0: fld1  */
  FPUSH(1.0);
/* e9c8d2: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9c8d4: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_e9c8d7(void) {
  LOAD_REGS();
L_e9c8d7: /* e9c8d7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9c8d9: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9c8deu); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9c8de: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* e9c8e2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9c8e3: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9c8e6: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* e9c8ea: call dword ptr [0xeba0d0] */
  { uint32_t t = R32((uint32_t)(0xeba0d0u)); esp -= 4; W32(esp, 0xe9c8f0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9c8f0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e9c8f3(void) {
  LOAD_REGS();
L_e9c8f3: /* e9c8f3: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9c8f4: mov ebp, esp */
  ebp = esp;
/* e9c8f6: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9c8f9: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* e9c8fc: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* e9c8ff: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* e9c902: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* e9c905: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* e9c908: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e9c90b: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9c90e: fsincos  */
  { double v = ST0; ST0 = sin(v); FPUSH(cos(v)); FSW_CC &= ~0x400; }
/* e9c910: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* e9c912: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9c914: fld1  */
  FPUSH(1.0);
/* e9c916: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9c919: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9c91b: fldz  */
  FPUSH(0.0);
/* e9c91d: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* e9c920: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9c923: mov dword ptr [eax + 0x18], ecx */
  W32((uint32_t)(eax + 0x18u), ecx);
/* e9c926: fldz  */
  FPUSH(0.0);
/* e9c928: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* e9c92b: fldz  */
  FPUSH(0.0);
/* e9c92d: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* e9c930: fldz  */
  FPUSH(0.0);
/* e9c932: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* e9c935: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9c938: fst dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0);
/* e9c93b: fldz  */
  FPUSH(0.0);
/* e9c93d: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* e9c940: fldz  */
  FPUSH(0.0);
/* e9c942: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* e9c945: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9c948: fchs  */
  ST0 = -ST0;
/* e9c94a: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* e9c94d: fstp dword ptr [eax + 0x28] */
  WF32((uint32_t)(eax + 0x28u), ST0); FPOP();
/* e9c950: fldz  */
  FPUSH(0.0);
/* e9c952: fstp dword ptr [eax + 0x2c] */
  WF32((uint32_t)(eax + 0x2cu), ST0); FPOP();
/* e9c955: fldz  */
  FPUSH(0.0);
/* e9c957: fstp dword ptr [eax + 0x30] */
  WF32((uint32_t)(eax + 0x30u), ST0); FPOP();
/* e9c95a: fldz  */
  FPUSH(0.0);
/* e9c95c: fstp dword ptr [eax + 0x34] */
  WF32((uint32_t)(eax + 0x34u), ST0); FPOP();
/* e9c95f: fldz  */
  FPUSH(0.0);
/* e9c961: fstp dword ptr [eax + 0x38] */
  WF32((uint32_t)(eax + 0x38u), ST0); FPOP();
/* e9c964: fld1  */
  FPUSH(1.0);
/* e9c966: fstp dword ptr [eax + 0x3c] */
  WF32((uint32_t)(eax + 0x3cu), ST0); FPOP();
/* e9c969: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9c96a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e9c96d(void) {
  LOAD_REGS();
L_e9c96d: /* e9c96d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9c96f: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9c974u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9c974: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* e9c978: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9c979: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9c97c: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* e9c980: call dword ptr [0xeba0d4] */
  { uint32_t t = R32((uint32_t)(0xeba0d4u)); esp -= 4; W32(esp, 0xe9c986u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9c986: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e9c989(void) {
  LOAD_REGS();
L_e9c989: /* e9c989: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9c98a: mov ebp, esp */
  ebp = esp;
/* e9c98c: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9c98f: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* e9c992: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* e9c995: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* e9c998: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* e9c99b: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* e9c99e: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e9c9a1: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9c9a4: fsincos  */
  { double v = ST0; ST0 = sin(v); FPUSH(cos(v)); FSW_CC &= ~0x400; }
/* e9c9a6: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* e9c9a8: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9c9aa: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9c9ad: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9c9b0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9c9b2: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9c9b4: fldz  */
  FPUSH(0.0);
/* e9c9b6: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9c9b9: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9c9bc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9c9be: fchs  */
  ST0 = -ST0;
/* e9c9c0: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* e9c9c3: fldz  */
  FPUSH(0.0);
/* e9c9c5: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* e9c9c8: fldz  */
  FPUSH(0.0);
/* e9c9ca: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* e9c9cd: fld1  */
  FPUSH(1.0);
/* e9c9cf: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* e9c9d2: fldz  */
  FPUSH(0.0);
/* e9c9d4: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* e9c9d7: fldz  */
  FPUSH(0.0);
/* e9c9d9: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* e9c9dc: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* e9c9df: fldz  */
  FPUSH(0.0);
/* e9c9e1: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* e9c9e4: fstp dword ptr [eax + 0x28] */
  WF32((uint32_t)(eax + 0x28u), ST0); FPOP();
/* e9c9e7: fldz  */
  FPUSH(0.0);
/* e9c9e9: fstp dword ptr [eax + 0x2c] */
  WF32((uint32_t)(eax + 0x2cu), ST0); FPOP();
/* e9c9ec: fldz  */
  FPUSH(0.0);
/* e9c9ee: fstp dword ptr [eax + 0x30] */
  WF32((uint32_t)(eax + 0x30u), ST0); FPOP();
/* e9c9f1: fldz  */
  FPUSH(0.0);
/* e9c9f3: fstp dword ptr [eax + 0x34] */
  WF32((uint32_t)(eax + 0x34u), ST0); FPOP();
/* e9c9f6: fldz  */
  FPUSH(0.0);
/* e9c9f8: fstp dword ptr [eax + 0x38] */
  WF32((uint32_t)(eax + 0x38u), ST0); FPOP();
/* e9c9fb: fld1  */
  FPUSH(1.0);
/* e9c9fd: fstp dword ptr [eax + 0x3c] */
  WF32((uint32_t)(eax + 0x3cu), ST0); FPOP();
/* e9ca00: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9ca01: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e9ca04(void) {
  LOAD_REGS();
L_e9ca04: /* e9ca04: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9ca06: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9ca0bu); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9ca0b: fld dword ptr [esp + 8] */
  { double v = F32((uint32_t)(esp + 0x8u)); FPUSH(v); }
/* e9ca0f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9ca10: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9ca13: push dword ptr [esp + 8] */
  { uint32_t v = R32((uint32_t)(esp + 0x8u)); esp -= 4; W32(esp, v); }
/* e9ca17: call dword ptr [0xeba0d8] */
  { uint32_t t = R32((uint32_t)(0xeba0d8u)); esp -= 4; W32(esp, 0xe9ca1du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9ca1d: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e9ca20(void) {
  LOAD_REGS();
L_e9ca20: /* e9ca20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9ca21: mov ebp, esp */
  ebp = esp;
/* e9ca23: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9ca26: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* e9ca29: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* e9ca2c: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* e9ca2f: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* e9ca32: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* e9ca35: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e9ca38: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9ca3b: fsincos  */
  { double v = ST0; ST0 = sin(v); FPUSH(cos(v)); FSW_CC &= ~0x400; }
/* e9ca3d: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* e9ca3f: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9ca41: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9ca44: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9ca47: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9ca49: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9ca4b: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* e9ca4e: fldz  */
  FPUSH(0.0);
/* e9ca50: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* e9ca53: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* e9ca56: fldz  */
  FPUSH(0.0);
/* e9ca58: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* e9ca5b: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9ca5e: fchs  */
  ST0 = -ST0;
/* e9ca60: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* e9ca63: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* e9ca66: fldz  */
  FPUSH(0.0);
/* e9ca68: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* e9ca6b: fldz  */
  FPUSH(0.0);
/* e9ca6d: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* e9ca70: fldz  */
  FPUSH(0.0);
/* e9ca72: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* e9ca75: fldz  */
  FPUSH(0.0);
/* e9ca77: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* e9ca7a: fld1  */
  FPUSH(1.0);
/* e9ca7c: fstp dword ptr [eax + 0x28] */
  WF32((uint32_t)(eax + 0x28u), ST0); FPOP();
/* e9ca7f: fldz  */
  FPUSH(0.0);
/* e9ca81: fstp dword ptr [eax + 0x2c] */
  WF32((uint32_t)(eax + 0x2cu), ST0); FPOP();
/* e9ca84: fldz  */
  FPUSH(0.0);
/* e9ca86: fstp dword ptr [eax + 0x30] */
  WF32((uint32_t)(eax + 0x30u), ST0); FPOP();
/* e9ca89: fldz  */
  FPUSH(0.0);
/* e9ca8b: fstp dword ptr [eax + 0x34] */
  WF32((uint32_t)(eax + 0x34u), ST0); FPOP();
/* e9ca8e: fldz  */
  FPUSH(0.0);
/* e9ca90: fstp dword ptr [eax + 0x38] */
  WF32((uint32_t)(eax + 0x38u), ST0); FPOP();
/* e9ca93: fld1  */
  FPUSH(1.0);
/* e9ca95: fstp dword ptr [eax + 0x3c] */
  WF32((uint32_t)(eax + 0x3cu), ST0); FPOP();
/* e9ca98: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9ca99: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e9ca9c(void) {
  LOAD_REGS();
L_e9ca9c: /* e9ca9c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9ca9e: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9caa3u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9caa3: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* e9caa7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9caa8: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9caab: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* e9caaf: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* e9cab3: call dword ptr [0xeba100] */
  { uint32_t t = R32((uint32_t)(0xeba100u)); esp -= 4; W32(esp, 0xe9cab9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9cab9: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e9cabc(void) {
  LOAD_REGS();
L_e9cabc: /* e9cabc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9cabd: mov ebp, esp */
  ebp = esp;
/* e9cabf: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9cac2: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* e9cac5: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* e9cac8: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9cac9: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* e9cacc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9cacd: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* e9cad0: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* e9cad3: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e9cad6: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* e9cad9: fsincos  */
  { double v = ST0; ST0 = sin(v); FPUSH(cos(v)); FSW_CC &= ~0x400; }
/* e9cadb: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* e9cadd: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9cadf: fld1  */
  FPUSH(1.0);
/* e9cae1: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* e9cae4: fsub dword ptr [ebp - 4] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffffcu)));
/* e9cae7: lea edi, [ebp - 0x1c] */
  edi = (uint32_t)(ebp + 0xffffffe4u);
/* e9caea: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9caeb: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* e9caee: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* e9caf1: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9caf2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9caf3: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* e9caf6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9caf7: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9caf8: call 0xe9b627 */
  esp -= 4; W32(esp, 0xe9cafdu); SPILL(); f_e9b627(); if (g_unwind) return; RELOAD();
/* e9cafd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9cb00: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* e9cb03: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e9cb06: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* e9cb09: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9cb0b: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* e9cb0e: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* e9cb11: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e9cb14: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9cb16: fmul st(2) */
  ST0 = ST0 * STI(2);
/* e9cb18: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9cb1a: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* e9cb1d: fmul st(3) */
  ST0 = ST0 * STI(3);
/* e9cb1f: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* e9cb22: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* e9cb25: fmul st(4) */
  ST0 = ST0 * STI(4);
/* e9cb27: fadd dword ptr [ebp - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffffcu)));
/* e9cb2a: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9cb2c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9cb2e: fmul dword ptr [ebp - 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffff8u)));
/* e9cb31: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* e9cb34: fadd st(1) */
  ST0 = ST0 + STI(1);
/* e9cb36: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9cb39: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e9cb3c: fmul dword ptr [ebp - 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffff8u)));
/* e9cb3f: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* e9cb42: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9cb44: fsub st(1) */
  ST0 = ST0 - STI(1);
/* e9cb46: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* e9cb49: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9cb4b: fldz  */
  FPUSH(0.0);
/* e9cb4d: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* e9cb50: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* e9cb53: fsub st(1) */
  ST0 = ST0 - STI(1);
/* e9cb55: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* e9cb58: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9cb5a: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e9cb5d: fmul dword ptr [ebp - 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe8u)));
/* e9cb60: fmul st(4) */
  ST0 = ST0 * STI(4);
/* e9cb62: fadd dword ptr [ebp - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffffcu)));
/* e9cb65: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* e9cb68: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* e9cb6b: fmul dword ptr [ebp - 8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffff8u)));
/* e9cb6e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9cb70: fadd st(3) */
  ST0 = ST0 + STI(3);
/* e9cb72: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* e9cb75: fldz  */
  FPUSH(0.0);
/* e9cb77: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* e9cb7a: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9cb7d: fadd st(2) */
  ST0 = ST0 + STI(2);
/* e9cb7f: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* e9cb82: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9cb84: fsub st(1) */
  ST0 = ST0 - STI(1);
/* e9cb86: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* e9cb89: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9cb8b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9cb8d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9cb8f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9cb91: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9cb93: fmul st(2) */
  ST0 = ST0 * STI(2);
/* e9cb95: fadd dword ptr [ebp - 4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffffcu)));
/* e9cb98: fstp dword ptr [eax + 0x28] */
  WF32((uint32_t)(eax + 0x28u), ST0); FPOP();
/* e9cb9b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9cb9c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9cb9d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9cb9f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9cba1: fldz  */
  FPUSH(0.0);
/* e9cba3: fstp dword ptr [eax + 0x2c] */
  WF32((uint32_t)(eax + 0x2cu), ST0); FPOP();
/* e9cba6: fldz  */
  FPUSH(0.0);
/* e9cba8: fstp dword ptr [eax + 0x30] */
  WF32((uint32_t)(eax + 0x30u), ST0); FPOP();
/* e9cbab: fldz  */
  FPUSH(0.0);
/* e9cbad: fstp dword ptr [eax + 0x34] */
  WF32((uint32_t)(eax + 0x34u), ST0); FPOP();
/* e9cbb0: fldz  */
  FPUSH(0.0);
/* e9cbb2: fstp dword ptr [eax + 0x38] */
  WF32((uint32_t)(eax + 0x38u), ST0); FPOP();
/* e9cbb5: fld1  */
  FPUSH(1.0);
/* e9cbb7: fstp dword ptr [eax + 0x3c] */
  WF32((uint32_t)(eax + 0x3cu), ST0); FPOP();
/* e9cbba: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9cbbb: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e9cbbe(void) {
  LOAD_REGS();
L_e9cbbe: /* e9cbbe: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9cbc0: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9cbc5u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9cbc5: jmp dword ptr [0xeba0f0] */
  { uint32_t t = R32((uint32_t)(0xeba0f0u)); SPILL(); call_ind(t); return; }
}

void f_e9cbcb(void) {
  LOAD_REGS();
L_e9cbcb: /* e9cbcb: jmp dword ptr [0xeba0f0] */
  { uint32_t t = R32((uint32_t)(0xeba0f0u)); SPILL(); call_ind(t); return; }
}

void f_e9cbd1(void) {
  LOAD_REGS();
L_e9cbd1: /* e9cbd1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9cbd2: mov ebp, esp */
  ebp = esp;
/* e9cbd4: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9cbd7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e9cbda: fld dword ptr [0xeb34fc] */
  { double v = F32((uint32_t)(0xeb34fcu)); FPUSH(v); }
/* e9cbe0: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* e9cbe2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9cbe4: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* e9cbe7: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* e9cbea: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9cbec: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* e9cbef: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* e9cbf2: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9cbf5: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* e9cbf8: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9cbfb: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* e9cbfe: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9cc00: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* e9cc03: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9cc06: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* e9cc08: fstp dword ptr [ebp - 0x10] */
  WF32((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* e9cc0b: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9cc0e: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* e9cc10: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* e9cc13: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9cc15: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* e9cc17: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* e9cc1a: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9cc1d: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* e9cc20: fstp dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* e9cc23: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9cc25: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* e9cc28: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* e9cc2b: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9cc2d: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* e9cc30: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9cc33: fld1  */
  FPUSH(1.0);
/* e9cc35: fsub dword ptr [ebp - 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffff4u)));
/* e9cc38: fsub st(1) */
  ST0 = ST0 - STI(1);
/* e9cc3a: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9cc3c: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9cc3f: fadd st(2) */
  ST0 = ST0 + STI(2);
/* e9cc41: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9cc44: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9cc47: fsub st(3) */
  ST0 = ST0 - STI(3);
/* e9cc49: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* e9cc4c: fldz  */
  FPUSH(0.0);
/* e9cc4e: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* e9cc51: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9cc54: fsub st(2) */
  ST0 = ST0 - STI(2);
/* e9cc56: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* e9cc59: fld1  */
  FPUSH(1.0);
/* e9cc5b: fsub dword ptr [ebp - 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffff0u)));
/* e9cc5e: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* e9cc61: fsub st(1) */
  ST0 = ST0 - STI(1);
/* e9cc63: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* e9cc66: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9cc68: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9cc6a: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9cc6d: fadd st(2) */
  ST0 = ST0 + STI(2);
/* e9cc6f: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* e9cc72: fldz  */
  FPUSH(0.0);
/* e9cc74: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* e9cc77: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9cc7a: fadd st(1) */
  ST0 = ST0 + STI(1);
/* e9cc7c: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* e9cc7f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9cc81: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9cc84: fsub st(1) */
  ST0 = ST0 - STI(1);
/* e9cc86: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* e9cc89: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9cc8b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9cc8d: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* e9cc90: fsub dword ptr [ebp - 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffff4u)));
/* e9cc93: fstp dword ptr [eax + 0x28] */
  WF32((uint32_t)(eax + 0x28u), ST0); FPOP();
/* e9cc96: fldz  */
  FPUSH(0.0);
/* e9cc98: fstp dword ptr [eax + 0x2c] */
  WF32((uint32_t)(eax + 0x2cu), ST0); FPOP();
/* e9cc9b: fldz  */
  FPUSH(0.0);
/* e9cc9d: fstp dword ptr [eax + 0x30] */
  WF32((uint32_t)(eax + 0x30u), ST0); FPOP();
/* e9cca0: fldz  */
  FPUSH(0.0);
/* e9cca2: fstp dword ptr [eax + 0x34] */
  WF32((uint32_t)(eax + 0x34u), ST0); FPOP();
/* e9cca5: fldz  */
  FPUSH(0.0);
/* e9cca7: fstp dword ptr [eax + 0x38] */
  WF32((uint32_t)(eax + 0x38u), ST0); FPOP();
/* e9ccaa: fld1  */
  FPUSH(1.0);
/* e9ccac: fstp dword ptr [eax + 0x3c] */
  WF32((uint32_t)(eax + 0x3cu), ST0); FPOP();
/* e9ccaf: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9ccb0: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e9ccb3(void) {
  LOAD_REGS();
L_e9ccb3: /* e9ccb3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9ccb5: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9ccbau); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9ccba: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* e9ccbe: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9ccc1: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* e9ccc5: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* e9ccc9: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e9cccd: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* e9ccd1: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9ccd4: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* e9ccd8: call dword ptr [0xeba0f8] */
  { uint32_t t = R32((uint32_t)(0xeba0f8u)); esp -= 4; W32(esp, 0xe9ccdeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9ccde: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_e9cce1(void) {
  LOAD_REGS();
L_e9cce1: /* e9cce1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9cce2: mov ebp, esp */
  ebp = esp;
/* e9cce4: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9cce6: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9ccebu); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9cceb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9ccec: jmp dword ptr [0xeba0f4] */
  { uint32_t t = R32((uint32_t)(0xeba0f4u)); SPILL(); call_ind(t); return; }
}

void f_e9ccf2(void) {
  LOAD_REGS();
L_e9ccf2: /* e9ccf2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9ccf3: mov ebp, esp */
  ebp = esp;
/* e9ccf5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9ccf7: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9ccfcu); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9ccfc: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9ccff: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* e9cd02: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* e9cd05: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* e9cd08: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9cd09: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9cd0c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* e9cd0f: call dword ptr [0xeba0fc] */
  { uint32_t t = R32((uint32_t)(0xeba0fcu)); esp -= 4; W32(esp, 0xe9cd15u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9cd15: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9cd16: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_e9cd19(void) {
  LOAD_REGS();
L_e9cd19: /* e9cd19: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9cd1a: mov ebp, esp */
  ebp = esp;
/* e9cd1c: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* e9cd1f: sub esp, 0x48 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x48u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9cd22: cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x14u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9cd26: fldz  */
  FPUSH(0.0);
/* e9cd28: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9cd29: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e9cd2c: fstp dword ptr [esi + 0x38] */
  WF32((uint32_t)(esi + 0x38u), ST0); FPOP();
/* e9cd2f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9cd30: fldz  */
  FPUSH(0.0);
/* e9cd32: fstp dword ptr [esi + 0x34] */
  WF32((uint32_t)(esi + 0x34u), ST0); FPOP();
/* e9cd35: fldz  */
  FPUSH(0.0);
/* e9cd37: fstp dword ptr [esi + 0x30] */
  WF32((uint32_t)(esi + 0x30u), ST0); FPOP();
/* e9cd3a: fldz  */
  FPUSH(0.0);
/* e9cd3c: fstp dword ptr [esi + 0x2c] */
  WF32((uint32_t)(esi + 0x2cu), ST0); FPOP();
/* e9cd3f: fldz  */
  FPUSH(0.0);
/* e9cd41: fstp dword ptr [esi + 0x24] */
  WF32((uint32_t)(esi + 0x24u), ST0); FPOP();
/* e9cd44: fldz  */
  FPUSH(0.0);
/* e9cd46: fstp dword ptr [esi + 0x20] */
  WF32((uint32_t)(esi + 0x20u), ST0); FPOP();
/* e9cd49: fldz  */
  FPUSH(0.0);
/* e9cd4b: fstp dword ptr [esi + 0x1c] */
  WF32((uint32_t)(esi + 0x1cu), ST0); FPOP();
/* e9cd4e: fldz  */
  FPUSH(0.0);
/* e9cd50: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* e9cd53: fldz  */
  FPUSH(0.0);
/* e9cd55: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* e9cd58: fldz  */
  FPUSH(0.0);
/* e9cd5a: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* e9cd5d: fldz  */
  FPUSH(0.0);
/* e9cd5f: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* e9cd62: fldz  */
  FPUSH(0.0);
/* e9cd64: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* e9cd67: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9cd6a: fst dword ptr [esi] */
  WF32((uint32_t)(esi), ST0);
/* e9cd6c: fst dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0);
/* e9cd6f: fstp dword ptr [esi + 0x28] */
  WF32((uint32_t)(esi + 0x28u), ST0); FPOP();
/* e9cd72: fld1  */
  FPUSH(1.0);
/* e9cd74: fstp dword ptr [esi + 0x3c] */
  WF32((uint32_t)(esi + 0x3cu), ST0); FPOP();
/* e9cd77: je 0xe9cdd4 */
  if (zf) goto L_e9cdd4;
L_e9cd79: /* e9cd79: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* e9cd7c: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* e9cd80: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9cd81: call 0xe9cbcb */
  esp -= 4; W32(esp, 0xe9cd86u); SPILL(); f_e9cbcb(); if (g_unwind) return; RELOAD();
/* e9cd86: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* e9cd89: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9cd8b: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* e9cd8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9cd90: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9cd91: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9cd92: je 0xe9cdcf */
  if (zf) goto L_e9cdcf;
L_e9cd94: /* e9cd94: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* e9cd97: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* e9cd99: fstp dword ptr [esi + 0x30] */
  WF32((uint32_t)(esi + 0x30u), ST0); FPOP();
/* e9cd9c: fld dword ptr [esi + 0x34] */
  { double v = F32((uint32_t)(esi + 0x34u)); FPUSH(v); }
/* e9cd9f: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* e9cda2: fstp dword ptr [esi + 0x34] */
  WF32((uint32_t)(esi + 0x34u), ST0); FPOP();
/* e9cda5: fld dword ptr [esi + 0x38] */
  { double v = F32((uint32_t)(esi + 0x38u)); FPUSH(v); }
/* e9cda8: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* e9cdab: fstp dword ptr [esi + 0x38] */
  WF32((uint32_t)(esi + 0x38u), ST0); FPOP();
/* e9cdae: call 0xe9bf24 */
  esp -= 4; W32(esp, 0xe9cdb3u); SPILL(); f_e9bf24(); if (g_unwind) return; RELOAD();
/* e9cdb3: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* e9cdb5: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* e9cdb8: fstp dword ptr [esi + 0x30] */
  WF32((uint32_t)(esi + 0x30u), ST0); FPOP();
/* e9cdbb: fld dword ptr [esi + 0x34] */
  { double v = F32((uint32_t)(esi + 0x34u)); FPUSH(v); }
/* e9cdbe: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* e9cdc1: fstp dword ptr [esi + 0x34] */
  WF32((uint32_t)(esi + 0x34u), ST0); FPOP();
/* e9cdc4: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* e9cdc7: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* e9cdca: fstp dword ptr [esi + 0x38] */
  WF32((uint32_t)(esi + 0x38u), ST0); FPOP();
/* e9cdcd: jmp 0xe9cdd4 */
  goto L_e9cdd4;
L_e9cdcf: /* e9cdcf: call 0xe9bf24 */
  esp -= 4; W32(esp, 0xe9cdd4u); SPILL(); f_e9bf24(); if (g_unwind) return; RELOAD();
L_e9cdd4: /* e9cdd4: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* e9cdd7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9cdd9: je 0xe9cdf5 */
  if (zf) goto L_e9cdf5;
L_e9cddb: /* e9cddb: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* e9cddd: fadd dword ptr [esi + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x30u)));
/* e9cde0: fstp dword ptr [esi + 0x30] */
  WF32((uint32_t)(esi + 0x30u), ST0); FPOP();
/* e9cde3: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* e9cde6: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* e9cde9: fstp dword ptr [esi + 0x34] */
  WF32((uint32_t)(esi + 0x34u), ST0); FPOP();
/* e9cdec: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* e9cdef: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* e9cdf2: fstp dword ptr [esi + 0x38] */
  WF32((uint32_t)(esi + 0x38u), ST0); FPOP();
L_e9cdf5: /* e9cdf5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9cdf6: mov eax, esi */
  eax = esi;
/* e9cdf8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9cdf9: mov esp, ebp */
  esp = ebp;
/* e9cdfb: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9cdfc: ret 0x14 */
  esp += 24; SPILL(); return;
}

void f_e9cdff(void) {
  LOAD_REGS();
L_e9cdff: /* e9cdff: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9ce01: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9ce06u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9ce06: jmp dword ptr [0xeba0c4] */
  { uint32_t t = R32((uint32_t)(0xeba0c4u)); SPILL(); call_ind(t); return; }
}

void f_e9ce0c(void) {
  LOAD_REGS();
L_e9ce0c: /* e9ce0c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9ce0e: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9ce13u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9ce13: jmp dword ptr [0xeba0c8] */
  { uint32_t t = R32((uint32_t)(0xeba0c8u)); SPILL(); call_ind(t); return; }
}

void f_e9ce19(void) {
  LOAD_REGS();
L_e9ce19: /* e9ce19: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9ce1b: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9ce20u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9ce20: jmp dword ptr [0xeba0b4] */
  { uint32_t t = R32((uint32_t)(0xeba0b4u)); SPILL(); call_ind(t); return; }
}

void f_e9ce26(void) {
  LOAD_REGS();
L_e9ce26: /* e9ce26: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9ce27: mov ebp, esp */
  ebp = esp;
/* e9ce29: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e9ce2c: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* e9ce2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9ce30: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* e9ce33: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* e9ce36: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* e9ce38: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9ce3a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9ce3c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9ce3e: fmul st(3) */
  ST0 = ST0 * STI(3);
/* e9ce40: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9ce42: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9ce44: fmul st(4) */
  ST0 = ST0 * STI(4);
/* e9ce46: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9ce48: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* e9ce4a: fmul st(5) */
  ST0 = ST0 * STI(5);
/* e9ce4c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9ce4e: fstp st(4) */
  STI(4) = ST0; FPOP();
/* e9ce50: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9ce52: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9ce54: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9ce56: fcom dword ptr [0xeb3500] */
  fpu_com(ST0, F32((uint32_t)(0xeb3500u)));
/* e9ce5c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e9ce5e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9ce61: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e9ce64: jne 0xe9ce9f */
  if (!zf) goto L_e9ce9f;
L_e9ce66: /* e9ce66: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9ce68: je 0xe9ce88 */
  if (zf) goto L_e9ce88;
L_e9ce6a: /* e9ce6a: fsqrt  */
  ST0 = sqrt(ST0);
/* e9ce6c: fdivr dword ptr [0xeaed44] */
  ST0 = (F32((uint32_t)(0xeaed44u))) / ST0;
/* e9ce72: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9ce74: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9ce76: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9ce78: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9ce7a: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9ce7d: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9ce80: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* e9ce83: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* e9ce86: jmp 0xe9ce8a */
  goto L_e9ce8a;
L_e9ce88: /* e9ce88: fstp st(0) */
  STI(0) = ST0; FPOP();
L_e9ce8a: /* e9ce8a: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* e9ce8d: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9ce8f: je 0xe9cebe */
  if (zf) goto L_e9cebe;
L_e9ce91: /* e9ce91: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* e9ce94: call 0xeac800 */
  esp -= 4; W32(esp, 0xe9ce99u); SPILL(); hle_CIacos(); RELOAD();
/* e9ce99: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* e9ce9b: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* e9ce9d: jmp 0xe9cebe */
  goto L_e9cebe;
L_e9ce9f: /* e9ce9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9cea1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9cea3: je 0xe9ceb3 */
  if (zf) goto L_e9ceb3;
L_e9cea5: /* e9cea5: fld1  */
  FPUSH(1.0);
/* e9cea7: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9cea9: fldz  */
  FPUSH(0.0);
/* e9ceab: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9ceae: fldz  */
  FPUSH(0.0);
/* e9ceb0: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
L_e9ceb3: /* e9ceb3: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* e9ceb6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9ceb8: je 0xe9cebe */
  if (zf) goto L_e9cebe;
L_e9ceba: /* e9ceba: fldz  */
  FPUSH(0.0);
/* e9cebc: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
L_e9cebe: /* e9cebe: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9cebf: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9cec0: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e9cec3(void) {
  LOAD_REGS();
L_e9cec3: /* e9cec3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9cec5: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9cecau); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9ceca: jmp dword ptr [0xeba0b8] */
  { uint32_t t = R32((uint32_t)(0xeba0b8u)); SPILL(); call_ind(t); return; }
}

void f_e9ced0(void) {
  LOAD_REGS();
L_e9ced0: /* e9ced0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9ced1: mov ebp, esp */
  ebp = esp;
/* e9ced3: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9ced6: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e9ced9: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* e9cedc: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* e9cede: fadd dword ptr [ecx + 0x28] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x28u)));
/* e9cee1: fcom dword ptr [0xeae4b8] */
  fpu_com(ST0, F32((uint32_t)(0xeae4b8u)));
/* e9cee7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e9cee9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9ceec: jne 0xe9cf2f */
  if (!zf) goto L_e9cf2f;
L_e9ceee: /* e9ceee: fadd dword ptr [0xeaed44] */
  ST0 = ST0 + (F32((uint32_t)(0xeaed44u)));
/* e9cef4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9cef7: fsqrt  */
  ST0 = sqrt(ST0);
/* e9cef9: fmul dword ptr [0xeaed40] */
  ST0 = ST0 * (F32((uint32_t)(0xeaed40u)));
/* e9ceff: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9cf01: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* e9cf04: fdivr dword ptr [0xeb3504] */
  ST0 = (F32((uint32_t)(0xeb3504u))) / ST0;
/* e9cf0a: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* e9cf0d: fsub dword ptr [ecx + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x24u)));
/* e9cf10: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9cf12: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9cf14: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* e9cf17: fsub dword ptr [ecx + 8] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x8u)));
/* e9cf1a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9cf1c: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9cf1f: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* e9cf22: fsub dword ptr [ecx + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x10u)));
/* e9cf25: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9cf27: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* e9cf2a: jmp 0xe9cffe */
  goto L_e9cffe;
L_e9cf2f: /* e9cf2f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9cf31: and dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* e9cf35: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* e9cf37: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9cf38: fsub dword ptr [ecx + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x14u)));
/* e9cf3b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9cf3c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9cf3d: xor ebx, ebx */
  ebx = 0;
/* e9cf3f: fsub dword ptr [ecx + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x28u)));
/* e9cf42: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* e9cf43: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e9cf45: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* e9cf46: fst dword ptr [ebp - 0x10] */
  WF32((uint32_t)(ebp + 0xfffffff0u), ST0);
/* e9cf49: mov dword ptr [ebp - 0x1c], ebx */
  W32((uint32_t)(ebp + 0xffffffe4u), ebx);
/* e9cf4c: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* e9cf4f: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* e9cf52: fsub dword ptr [ecx] */
  ST0 = ST0 - (F32((uint32_t)(ecx)));
/* e9cf54: fsub dword ptr [ecx + 0x28] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0x28u)));
/* e9cf57: fstp dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* e9cf5a: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* e9cf5d: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* e9cf5f: fsubr dword ptr [ecx + 0x28] */
  ST0 = (F32((uint32_t)(ecx + 0x28u))) - ST0;
/* e9cf62: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* e9cf65: fcomp dword ptr [ebp - 0xc] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xfffffff4u)));
  FPOP();
/* e9cf68: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e9cf6a: test bl, ah */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)(((eax >> 8) & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9cf6c: jne 0xe9cf70 */
  if (!zf) goto L_e9cf70;
L_e9cf6e: /* e9cf6e: xor ebx, ebx */
  ebx = 0;
L_e9cf70: /* e9cf70: fld dword ptr [ebp + ebx*4 - 0x10] */
  { double v = F32((uint32_t)(ebp + ebx*4 + 0xfffffff0u)); FPUSH(v); }
/* e9cf74: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
/* e9cf77: fcomp dword ptr [ebp - 8] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xfffffff8u)));
  FPOP();
/* e9cf7a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e9cf7c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9cf7f: je 0xe9cf86 */
  if (zf) goto L_e9cf86;
L_e9cf81: /* e9cf81: mov ebx, edx */
  ebx = edx;
/* e9cf83: mov dword ptr [ebp + 0xc], ebx */
  W32((uint32_t)(ebp + 0xcu), ebx);
L_e9cf86: /* e9cf86: mov edx, ebx */
  edx = ebx;
/* e9cf88: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* e9cf8b: fld dword ptr [ebp + edx - 0x10] */
  { double v = F32((uint32_t)(ebp + edx + 0xfffffff0u)); FPUSH(v); }
/* e9cf8f: mov edi, dword ptr [ebp + edx - 0x1c] */
  edi = R32((uint32_t)(ebp + edx + 0xffffffe4u));
/* e9cf93: fadd dword ptr [0xeaed44] */
  ST0 = ST0 + (F32((uint32_t)(0xeaed44u)));
/* e9cf99: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9cf9c: mov esi, edi */
  esi = edi;
/* e9cf9e: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* e9cfa1: fsqrt  */
  ST0 = sqrt(ST0);
/* e9cfa3: add ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e9cfa5: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e9cfa8: add edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* e9cfaa: fmul dword ptr [0xeaed40] */
  ST0 = ST0 * (F32((uint32_t)(0xeaed40u)));
/* e9cfb0: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9cfb2: fstp dword ptr [edx + eax] */
  WF32((uint32_t)(edx + eax), ST0); FPOP();
/* e9cfb5: fdivr dword ptr [0xeb3504] */
  ST0 = (F32((uint32_t)(0xeb3504u))) / ST0;
/* e9cfbb: fld dword ptr [ecx + ebx*4] */
  { double v = F32((uint32_t)(ecx + ebx*4)); FPUSH(v); }
/* e9cfbe: fadd dword ptr [ecx + edi*4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + edi*4)));
/* e9cfc1: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* e9cfc4: mov edi, dword ptr [ebp + esi - 0x1c] */
  edi = R32((uint32_t)(ebp + esi + 0xffffffe4u));
/* e9cfc8: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
/* e9cfcb: add ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e9cfcd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9cfcf: mov dword ptr [ebp + 8], edi */
  W32((uint32_t)(ebp + 0x8u), edi);
/* e9cfd2: mov edi, dword ptr [ebp + esi - 0x1c] */
  edi = R32((uint32_t)(ebp + esi + 0xffffffe4u));
/* e9cfd6: fstp dword ptr [esi + eax] */
  WF32((uint32_t)(esi + eax), ST0); FPOP();
/* e9cfd9: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e9cfdb: fld dword ptr [ecx + ebx*4] */
  { double v = F32((uint32_t)(ecx + ebx*4)); FPUSH(v); }
/* e9cfde: add esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e9cfe0: fadd dword ptr [ecx + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + edx*4)));
/* e9cfe3: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e9cfe6: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* e9cfe9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9cfeb: fstp dword ptr [edx + eax] */
  WF32((uint32_t)(edx + eax), ST0); FPOP();
/* e9cfee: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* e9cff0: fld dword ptr [ecx + esi*4] */
  { double v = F32((uint32_t)(ecx + esi*4)); FPUSH(v); }
/* e9cff3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9cff4: fsub dword ptr [ecx + edx*4] */
  ST0 = ST0 - (F32((uint32_t)(ecx + edx*4)));
/* e9cff7: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9cff8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9cff9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9cffb: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
L_e9cffe: /* e9cffe: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9d000: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9d001: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e9d004(void) {
  LOAD_REGS();
L_e9d004: /* e9d004: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9d006: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9d00bu); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9d00b: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* e9d00f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d010: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9d013: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* e9d017: push dword ptr [esp + 0xc] */
  { uint32_t v = R32((uint32_t)(esp + 0xcu)); esp -= 4; W32(esp, v); }
/* e9d01b: call dword ptr [0xeba0cc] */
  { uint32_t t = R32((uint32_t)(0xeba0ccu)); esp -= 4; W32(esp, 0xe9d021u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9d021: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e9d024(void) {
  LOAD_REGS();
L_e9d024: /* e9d024: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9d025: mov ebp, esp */
  ebp = esp;
/* e9d027: sub esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9d02a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* e9d02d: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* e9d030: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9d031: call 0xe9b627 */
  esp -= 4; W32(esp, 0xe9d036u); SPILL(); f_e9b627(); if (g_unwind) return; RELOAD();
/* e9d036: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* e9d039: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e9d03c: fmul dword ptr [0xeaed40] */
  ST0 = ST0 * (F32((uint32_t)(0xeaed40u)));
/* e9d042: lea eax, [ecx + 0xc] */
  eax = (uint32_t)(ecx + 0xcu);
/* e9d045: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* e9d048: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* e9d04b: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* e9d04e: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* e9d051: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* e9d054: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* e9d057: fld dword ptr [ebp + 8] */
  { double v = F32((uint32_t)(ebp + 0x8u)); FPUSH(v); }
/* e9d05a: fsincos  */
  { double v = ST0; ST0 = sin(v); FPUSH(cos(v)); FSW_CC &= ~0x400; }
/* e9d05c: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* e9d05e: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9d060: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* e9d063: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* e9d066: mov eax, ecx */
  eax = ecx;
/* e9d068: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* e9d06a: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* e9d06d: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* e9d070: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* e9d073: fld dword ptr [ebp - 0xc] */
  { double v = F32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* e9d076: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* e9d079: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* e9d07c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9d07d: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e9d080(void) {
  LOAD_REGS();
L_e9d080: /* e9d080: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9d082: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9d087u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9d087: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* e9d08b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9d08e: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* e9d092: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* e9d096: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e9d09a: fld dword ptr [esp + 0x14] */
  { double v = F32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* e9d09e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9d0a1: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* e9d0a5: call dword ptr [0xeba0bc] */
  { uint32_t t = R32((uint32_t)(0xeba0bcu)); esp -= 4; W32(esp, 0xe9d0abu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9d0ab: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_e9d0ae(void) {
  LOAD_REGS();
L_e9d0ae: /* e9d0ae: jmp dword ptr [0xeba0bc] */
  { uint32_t t = R32((uint32_t)(0xeba0bcu)); SPILL(); call_ind(t); return; }
}

void f_e9d0b4(void) {
  LOAD_REGS();
L_e9d0b4: /* e9d0b4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9d0b5: mov ebp, esp */
  ebp = esp;
/* e9d0b7: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9d0ba: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* e9d0bd: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* e9d0c0: fmul dword ptr [0xeaed40] */
  ST0 = ST0 * (F32((uint32_t)(0xeaed40u)));
/* e9d0c6: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* e9d0c9: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* e9d0cc: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* e9d0cf: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* e9d0d2: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* e9d0d5: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* e9d0d8: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e9d0db: fsincos  */
  { double v = ST0; ST0 = sin(v); FPUSH(cos(v)); FSW_CC &= ~0x400; }
/* e9d0dd: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* e9d0df: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9d0e1: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* e9d0e4: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* e9d0e7: fmul dword ptr [0xeaed40] */
  ST0 = ST0 * (F32((uint32_t)(0xeaed40u)));
/* e9d0ed: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* e9d0f0: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* e9d0f3: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* e9d0f6: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* e9d0f9: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* e9d0fc: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* e9d0ff: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* e9d102: fsincos  */
  { double v = ST0; ST0 = sin(v); FPUSH(cos(v)); FSW_CC &= ~0x400; }
/* e9d104: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* e9d106: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9d108: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9d10b: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* e9d10e: fmul dword ptr [0xeaed40] */
  ST0 = ST0 * (F32((uint32_t)(0xeaed40u)));
/* e9d114: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* e9d117: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* e9d11a: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* e9d11d: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* e9d120: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* e9d123: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* e9d126: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* e9d129: fsincos  */
  { double v = ST0; ST0 = sin(v); FPUSH(cos(v)); FSW_CC &= ~0x400; }
/* e9d12b: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* e9d12d: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9d12f: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* e9d132: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9d135: fmul dword ptr [ebp - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffff4u)));
/* e9d138: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9d13b: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* e9d13e: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9d141: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9d143: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9d145: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* e9d148: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d14a: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9d14c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9d14e: fmul dword ptr [ebp - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffffcu)));
/* e9d151: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9d153: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* e9d156: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9d158: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9d15b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9d15d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9d15f: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9d162: fmul dword ptr [ebp - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffff4u)));
/* e9d165: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* e9d168: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* e9d16b: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9d16d: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* e9d170: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9d172: fmul dword ptr [ebp - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffffcu)));
/* e9d175: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9d177: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* e9d17a: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* e9d17d: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9d17f: fmul dword ptr [ebp - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffffcu)));
/* e9d182: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d184: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* e9d187: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9d189: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9d18a: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_e9d18d(void) {
  LOAD_REGS();
L_e9d18d: /* e9d18d: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9d18f: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9d194u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9d194: jmp dword ptr [0xeba0a4] */
  { uint32_t t = R32((uint32_t)(0xeba0a4u)); SPILL(); call_ind(t); return; }
}

void f_e9d19a(void) {
  LOAD_REGS();
L_e9d19a: /* e9d19a: jmp dword ptr [0xeba0a4] */
  { uint32_t t = R32((uint32_t)(0xeba0a4u)); SPILL(); call_ind(t); return; }
}

void f_e9d1a0(void) {
  LOAD_REGS();
L_e9d1a0: /* e9d1a0: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e9d1a4: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* e9d1a8: mov ecx, dword ptr [esp + 4] */
  ecx = R32((uint32_t)(esp + 0x4u));
/* e9d1ac: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* e9d1af: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* e9d1b1: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* e9d1b4: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* e9d1b7: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* e9d1ba: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* e9d1bd: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* e9d1c0: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* e9d1c3: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* e9d1c5: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* e9d1c7: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* e9d1ca: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* e9d1cc: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* e9d1cf: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* e9d1d1: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* e9d1d4: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* e9d1d6: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* e9d1d8: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* e9d1da: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* e9d1dc: fsubp st(4) */
  STI(4) = STI(4) - ST0;
  FPOP();
/* e9d1de: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* e9d1e0: fsubp st(4) */
  STI(4) = STI(4) - ST0;
  FPOP();
/* e9d1e2: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* e9d1e5: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* e9d1e8: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* e9d1eb: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* e9d1ed: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* e9d1f0: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* e9d1f3: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* e9d1f6: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* e9d1f9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* e9d1fb: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* e9d1fd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* e9d1ff: fsubp st(4) */
  STI(4) = STI(4) - ST0;
  FPOP();
/* e9d201: fsubp st(4) */
  STI(4) = STI(4) - ST0;
  FPOP();
/* e9d203: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* e9d206: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* e9d209: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* e9d20c: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* e9d20f: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* e9d212: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* e9d214: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* e9d217: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* e9d21a: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* e9d21c: fsubp st(4) */
  STI(4) = STI(4) - ST0;
  FPOP();
/* e9d21e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* e9d220: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* e9d222: fsubp st(4) */
  STI(4) = STI(4) - ST0;
  FPOP();
/* e9d224: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* e9d226: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* e9d229: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* e9d22c: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
/* e9d22f: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e9d233: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e9d236(void) {
  LOAD_REGS();
L_e9d236: /* e9d236: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9d238: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9d23du); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9d23d: jmp dword ptr [0xeba0a8] */
  { uint32_t t = R32((uint32_t)(0xeba0a8u)); SPILL(); call_ind(t); return; }
}

void f_e9d243(void) {
  LOAD_REGS();
L_e9d243: /* e9d243: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9d245: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9d24au); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9d24a: jmp dword ptr [0xeba108] */
  { uint32_t t = R32((uint32_t)(0xeba108u)); SPILL(); call_ind(t); return; }
}

void f_e9d250(void) {
  LOAD_REGS();
L_e9d250: /* e9d250: jmp dword ptr [0xeba108] */
  { uint32_t t = R32((uint32_t)(0xeba108u)); SPILL(); call_ind(t); return; }
}

void f_e9d256(void) {
  LOAD_REGS();
L_e9d256: /* e9d256: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9d257: mov ebp, esp */
  ebp = esp;
/* e9d259: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* e9d25c: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* e9d25f: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e9d262: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* e9d265: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* e9d268: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* e9d26a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9d26c: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9d26e: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9d270: fmul st(3) */
  ST0 = ST0 * STI(3);
/* e9d272: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d274: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9d276: fmul st(4) */
  ST0 = ST0 * STI(4);
/* e9d278: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d27a: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* e9d27c: fmul st(5) */
  ST0 = ST0 * STI(5);
/* e9d27e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d280: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* e9d283: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9d285: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9d287: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9d289: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9d28b: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9d28e: fcomp dword ptr [0xeb3508] */
  fpu_com(ST0, F32((uint32_t)(0xeb3508u)));
  FPOP();
/* e9d294: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e9d296: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9d299: jne 0xe9d2f1 */
  if (!zf) goto L_e9d2f1;
L_e9d29b: /* e9d29b: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* e9d29d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d29e: fchs  */
  ST0 = -ST0;
/* e9d2a0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d2a1: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* e9d2a3: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* e9d2a6: fchs  */
  ST0 = -ST0;
/* e9d2a8: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* e9d2ab: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* e9d2ae: fchs  */
  ST0 = -ST0;
/* e9d2b0: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* e9d2b3: mov eax, dword ptr [edx + 0xc] */
  eax = R32((uint32_t)(edx + 0xcu));
/* e9d2b6: fld1  */
  FPUSH(1.0);
/* e9d2b8: mov dword ptr [ecx + 0xc], eax */
  W32((uint32_t)(ecx + 0xcu), eax);
/* e9d2bb: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e9d2bf: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9d2c2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9d2c5: call 0xe9b3b6 */
  esp -= 4; W32(esp, 0xe9d2cau); SPILL(); f_e9b3b6(); if (g_unwind) return; RELOAD();
/* e9d2ca: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9d2cd: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9d2cf: jne 0xe9d304 */
  if (!zf) goto L_e9d304;
L_e9d2d1: /* e9d2d1: fld1  */
  FPUSH(1.0);
/* e9d2d3: fdiv dword ptr [ebp + 0xc] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xcu)));
/* e9d2d6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9d2d8: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9d2da: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* e9d2dc: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9d2de: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9d2e1: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* e9d2e4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9d2e6: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* e9d2e9: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* e9d2ec: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* e9d2ef: jmp 0xe9d301 */
  goto L_e9d301;
L_e9d2f1: /* e9d2f1: fldz  */
  FPUSH(0.0);
/* e9d2f3: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* e9d2f5: fldz  */
  FPUSH(0.0);
/* e9d2f7: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* e9d2fa: fldz  */
  FPUSH(0.0);
/* e9d2fc: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* e9d2ff: fldz  */
  FPUSH(0.0);
L_e9d301: /* e9d301: fstp dword ptr [ecx + 0xc] */
  WF32((uint32_t)(ecx + 0xcu), ST0); FPOP();
L_e9d304: /* e9d304: mov eax, ecx */
  eax = ecx;
/* e9d306: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9d307: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e9d30a(void) {
  LOAD_REGS();
L_e9d30a: /* e9d30a: jmp dword ptr [0xeba134] */
  { uint32_t t = R32((uint32_t)(0xeba134u)); SPILL(); call_ind(t); return; }
}

void f_e9d310(void) {
  LOAD_REGS();
L_e9d310: /* e9d310: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9d311: mov ebp, esp */
  ebp = esp;
/* e9d313: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d314: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9d315: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* e9d318: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* e9d31b: fcomp dword ptr [0xeaed44] */
  fpu_com(ST0, F32((uint32_t)(0xeaed44u)));
  FPOP();
/* e9d321: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e9d323: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* e9d326: jp 0xe9d371 */
  if (pf) goto L_e9d371;
L_e9d328: /* e9d328: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* e9d32b: call 0xeac800 */
  esp -= 4; W32(esp, 0xe9d330u); SPILL(); hle_CIacos(); RELOAD();
/* e9d330: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* e9d333: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* e9d335: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d336: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d337: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* e9d33a: fldz  */
  FPUSH(0.0);
/* e9d33c: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e9d340: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9d343: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9d346: call 0xe9b3b6 */
  esp -= 4; W32(esp, 0xe9d34bu); SPILL(); f_e9b3b6(); if (g_unwind) return; RELOAD();
/* e9d34b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9d34e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9d350: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9d353: jne 0xe9d374 */
  if (!zf) goto L_e9d374;
L_e9d355: /* e9d355: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9d358: fdiv dword ptr [ebp - 4] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xfffffffcu)));
/* e9d35b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9d35d: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* e9d35f: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9d361: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9d363: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* e9d366: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9d369: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* e9d36c: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* e9d36f: jmp 0xe9d384 */
  goto L_e9d384;
L_e9d371: /* e9d371: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
L_e9d374: /* e9d374: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* e9d376: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9d378: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* e9d37b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* e9d37e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* e9d381: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
L_e9d384: /* e9d384: fldz  */
  FPUSH(0.0);
/* e9d386: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9d387: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* e9d38a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9d38b: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e9d38e(void) {
  LOAD_REGS();
L_e9d38e: /* e9d38e: jmp dword ptr [0xeba138] */
  { uint32_t t = R32((uint32_t)(0xeba138u)); SPILL(); call_ind(t); return; }
}

void f_e9d394(void) {
  LOAD_REGS();
L_e9d394: /* e9d394: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9d395: mov ebp, esp */
  ebp = esp;
/* e9d397: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d398: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d399: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e9d39c: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* e9d39f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9d3a0: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* e9d3a3: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e9d3a6: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* e9d3a8: lea eax, [esi + 0xc] */
  eax = (uint32_t)(esi + 0xcu);
/* e9d3ab: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9d3ad: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
/* e9d3b0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9d3b2: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* e9d3b5: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9d3b7: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* e9d3ba: fmul st(3) */
  ST0 = ST0 * STI(3);
/* e9d3bc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d3be: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9d3c0: fmul st(4) */
  ST0 = ST0 * STI(4);
/* e9d3c2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d3c4: fsqrt  */
  ST0 = sqrt(ST0);
/* e9d3c6: fstp st(3) */
  STI(3) = ST0; FPOP();
/* e9d3c8: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9d3ca: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9d3cc: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* e9d3cf: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* e9d3d2: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* e9d3d5: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9d3d8: fsincos  */
  { double v = ST0; ST0 = sin(v); FPUSH(cos(v)); FSW_CC &= ~0x400; }
/* e9d3da: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* e9d3dc: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9d3de: fldz  */
  FPUSH(0.0);
/* e9d3e0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d3e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d3e2: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e9d3e6: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9d3e9: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9d3ec: call 0xe9b3b6 */
  esp -= 4; W32(esp, 0xe9d3f1u); SPILL(); f_e9b3b6(); if (g_unwind) return; RELOAD();
/* e9d3f1: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9d3f4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9d3f6: je 0xe9d40e */
  if (zf) goto L_e9d40e;
L_e9d3f8: /* e9d3f8: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9d3fa: je 0xe9d428 */
  if (zf) goto L_e9d428;
L_e9d3fc: /* e9d3fc: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* e9d3fe: mov dword ptr [esi], eax */
  W32((uint32_t)(esi), eax);
/* e9d400: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* e9d403: mov dword ptr [esi + 4], eax */
  W32((uint32_t)(esi + 0x4u), eax);
/* e9d406: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* e9d409: mov dword ptr [esi + 8], eax */
  W32((uint32_t)(esi + 0x8u), eax);
/* e9d40c: jmp 0xe9d428 */
  goto L_e9d428;
L_e9d40e: /* e9d40e: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9d411: fdiv dword ptr [ebp - 4] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xfffffffcu)));
/* e9d414: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9d416: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9d418: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* e9d41a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9d41c: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9d41f: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* e9d422: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* e9d425: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
L_e9d428: /* e9d428: mov eax, esi */
  eax = esi;
/* e9d42a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9d42b: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9d42c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e9d42f(void) {
  LOAD_REGS();
L_e9d42f: /* e9d42f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9d431: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9d436u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9d436: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* e9d43a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d43b: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9d43e: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* e9d442: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* e9d446: push dword ptr [esp + 0x10] */
  { uint32_t v = R32((uint32_t)(esp + 0x10u)); esp -= 4; W32(esp, v); }
/* e9d44a: call dword ptr [0xeba0e4] */
  { uint32_t t = R32((uint32_t)(0xeba0e4u)); esp -= 4; W32(esp, 0xe9d450u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9d450: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_e9d453(void) {
  LOAD_REGS();
L_e9d453: /* e9d453: jmp dword ptr [0xeba0e4] */
  { uint32_t t = R32((uint32_t)(0xeba0e4u)); SPILL(); call_ind(t); return; }
}

void f_e9d459(void) {
  LOAD_REGS();
L_e9d459: /* e9d459: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9d45a: mov ebp, esp */
  ebp = esp;
/* e9d45c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d45d: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e9d460: fld1  */
  FPUSH(1.0);
/* e9d462: fsub dword ptr [ebp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x14u)));
/* e9d465: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e9d468: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* e9d46a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* e9d46c: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* e9d46f: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* e9d472: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d474: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* e9d477: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9d47a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d47c: fld dword ptr [edx + 0xc] */
  { double v = F32((uint32_t)(edx + 0xcu)); FPUSH(v); }
/* e9d47f: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* e9d482: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d484: fcom dword ptr [0xeae4b8] */
  fpu_com(ST0, F32((uint32_t)(0xeae4b8u)));
/* e9d48a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e9d48c: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9d48f: jne 0xe9d498 */
  if (!zf) goto L_e9d498;
L_e9d491: /* e9d491: fld1  */
  FPUSH(1.0);
/* e9d493: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* e9d496: jmp 0xe9d49f */
  goto L_e9d49f;
L_e9d498: /* e9d498: mov dword ptr [ebp + 0xc], 0xbf800000 */
  W32((uint32_t)(ebp + 0xcu), 0xbf800000u);
L_e9d49f: /* e9d49f: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9d4a2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9d4a4: fst dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0);
/* e9d4a7: fstp st(1) */
  STI(1) = ST0; FPOP();
/* e9d4a9: fld1  */
  FPUSH(1.0);
/* e9d4ab: fsub st(1) */
  ST0 = ST0 - STI(1);
/* e9d4ad: fcomp dword ptr [0xeb34ec] */
  fpu_com(ST0, F32((uint32_t)(0xeb34ecu)));
  FPOP();
/* e9d4b3: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e9d4b5: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9d4b8: jne 0xe9d4f4 */
  if (!zf) goto L_e9d4f4;
L_e9d4ba: /* e9d4ba: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9d4bc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9d4be: fsubr dword ptr [0xeaed44] */
  ST0 = (F32((uint32_t)(0xeaed44u))) - ST0;
/* e9d4c4: fsqrt  */
  ST0 = sqrt(ST0);
/* e9d4c6: fstp st(1) */
  STI(1) = ST0; FPOP();
/* e9d4c8: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9d4ca: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* e9d4cd: fpatan  */
  STI(1) = atan2(STI(1), ST0); FPOP();
/* e9d4cf: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* e9d4d2: fld1  */
  FPUSH(1.0);
/* e9d4d4: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* e9d4d6: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* e9d4d9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9d4db: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* e9d4de: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9d4e0: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* e9d4e2: fstp st(1) */
  STI(1) = ST0; FPOP();
/* e9d4e4: fmul dword ptr [ebp - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffffcu)));
/* e9d4e7: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* e9d4ea: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* e9d4ed: fsin  */
  ST0 = sin(ST0); FSW_CC &= ~0x400;
/* e9d4ef: fmul dword ptr [ebp - 4] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffffcu)));
/* e9d4f2: jmp 0xe9d4f9 */
  goto L_e9d4f9;
L_e9d4f4: /* e9d4f4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9d4f6: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
L_e9d4f9: /* e9d4f9: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* e9d4fc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9d4ff: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9d501: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9d503: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9d505: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* e9d507: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d509: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9d50b: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9d50d: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* e9d510: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9d512: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9d515: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d517: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9d51a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9d51c: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* e9d51f: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9d521: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* e9d524: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d526: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* e9d529: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* e9d52c: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9d52e: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* e9d531: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d533: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* e9d536: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9d538: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9d539: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_e9d53c(void) {
  LOAD_REGS();
L_e9d53c: /* e9d53c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9d53d: mov ebp, esp */
  ebp = esp;
/* e9d53f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9d541: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9d546u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9d546: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9d549: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d54a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9d54d: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* e9d550: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* e9d553: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* e9d556: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* e9d559: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* e9d55c: call dword ptr [0xeba104] */
  { uint32_t t = R32((uint32_t)(0xeba104u)); esp -= 4; W32(esp, 0xe9d562u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9d562: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9d563: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_e9d566(void) {
  LOAD_REGS();
L_e9d566: /* e9d566: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9d567: mov ebp, esp */
  ebp = esp;
/* e9d569: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9d56c: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9d56f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d570: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9d573: push dword ptr [ebp + 0x18] */
  { uint32_t v = R32((uint32_t)(ebp + 0x18u)); esp -= 4; W32(esp, v); }
/* e9d576: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* e9d579: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* e9d57c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9d57d: call 0xe9d453 */
  esp -= 4; W32(esp, 0xe9d582u); SPILL(); f_e9d453(); if (g_unwind) return; RELOAD();
/* e9d582: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9d585: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d586: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9d589: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* e9d58c: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* e9d58f: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* e9d592: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9d593: call 0xe9d453 */
  esp -= 4; W32(esp, 0xe9d598u); SPILL(); f_e9d453(); if (g_unwind) return; RELOAD();
/* e9d598: fld1  */
  FPUSH(1.0);
/* e9d59a: fsub dword ptr [ebp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x1cu)));
/* e9d59d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d59e: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* e9d5a1: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* e9d5a4: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* e9d5a6: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9d5a9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9d5aa: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* e9d5ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9d5ae: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* e9d5b1: call 0xe9d453 */
  esp -= 4; W32(esp, 0xe9d5b6u); SPILL(); f_e9d453(); if (g_unwind) return; RELOAD();
/* e9d5b6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9d5b9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9d5ba: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_e9d5bd(void) {
  LOAD_REGS();
L_e9d5bd: /* e9d5bd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9d5be: mov ebp, esp */
  ebp = esp;
/* e9d5c0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9d5c2: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9d5c7u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9d5c7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9d5c8: jmp dword ptr [0xeba10c] */
  { uint32_t t = R32((uint32_t)(0xeba10cu)); SPILL(); call_ind(t); return; }
}

void f_e9d5ce(void) {
  LOAD_REGS();
L_e9d5ce: /* e9d5ce: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9d5cf: mov ebp, esp */
  ebp = esp;
/* e9d5d1: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9d5d3: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9d5d8u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9d5d8: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9d5db: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d5dc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d5dd: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e9d5e1: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* e9d5e4: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9d5e7: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* e9d5ea: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* e9d5ed: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* e9d5f0: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* e9d5f3: call dword ptr [0xeba0e8] */
  { uint32_t t = R32((uint32_t)(0xeba0e8u)); esp -= 4; W32(esp, 0xe9d5f9u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* e9d5f9: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9d5fa: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_e9d5fd(void) {
  LOAD_REGS();
L_e9d5fd: /* e9d5fd: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9d5fe: mov ebp, esp */
  ebp = esp;
/* e9d600: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9d603: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* e9d606: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9d607: fadd dword ptr [ebp + 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x1cu)));
/* e9d60a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d60b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d60c: fstp dword ptr [ebp + 0x18] */
  WF32((uint32_t)(ebp + 0x18u), ST0); FPOP();
/* e9d60f: fldz  */
  FPUSH(0.0);
/* e9d611: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e9d615: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* e9d618: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9d61b: call 0xe9b3b6 */
  esp -= 4; W32(esp, 0xe9d620u); SPILL(); f_e9b3b6(); if (g_unwind) return; RELOAD();
/* e9d620: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9d623: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9d625: je 0xe9d63a */
  if (zf) goto L_e9d63a;
L_e9d627: /* e9d627: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* e9d62a: cmp dword ptr [ebp + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9d62d: je 0xe9d680 */
  if (zf) goto L_e9d680;
L_e9d62f: /* e9d62f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9d630: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* e9d633: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9d634: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9d635: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9d636: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9d637: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9d638: jmp 0xe9d680 */
  goto L_e9d680;
L_e9d63a: /* e9d63a: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* e9d63d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d63e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9d641: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* e9d644: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* e9d647: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* e9d64a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9d64b: call 0xe9d453 */
  esp -= 4; W32(esp, 0xe9d650u); SPILL(); f_e9d453(); if (g_unwind) return; RELOAD();
/* e9d650: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* e9d653: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d654: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9d657: push dword ptr [ebp + 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0x14u)); esp -= 4; W32(esp, v); }
/* e9d65a: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* e9d65d: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* e9d660: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9d661: call 0xe9d453 */
  esp -= 4; W32(esp, 0xe9d666u); SPILL(); f_e9d453(); if (g_unwind) return; RELOAD();
/* e9d666: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* e9d669: fdiv dword ptr [ebp + 0x18] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0x18u)));
/* e9d66c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d66d: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* e9d670: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9d673: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9d674: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* e9d677: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9d678: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* e9d67b: call 0xe9d453 */
  esp -= 4; W32(esp, 0xe9d680u); SPILL(); f_e9d453(); if (g_unwind) return; RELOAD();
L_e9d680: /* e9d680: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9d683: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9d684: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9d685: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_e9d688(void) {
  LOAD_REGS();
L_e9d688: /* e9d688: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9d68a: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9d68fu); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9d68f: jmp dword ptr [0xeba0ac] */
  { uint32_t t = R32((uint32_t)(0xeba0acu)); SPILL(); call_ind(t); return; }
}

void f_e9d695(void) {
  LOAD_REGS();
L_e9d695: /* e9d695: jmp dword ptr [0xeba0ac] */
  { uint32_t t = R32((uint32_t)(0xeba0acu)); SPILL(); call_ind(t); return; }
}

void f_e9d69b(void) {
  LOAD_REGS();
L_e9d69b: /* e9d69b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9d69c: mov ebp, esp */
  ebp = esp;
/* e9d69e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9d69f: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* e9d6a2: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* e9d6a5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d6a6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* e9d6a9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d6aa: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* e9d6ac: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9d6ae: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9d6b0: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9d6b2: fmul st(3) */
  ST0 = ST0 * STI(3);
/* e9d6b4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d6b6: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9d6b8: fmul st(4) */
  ST0 = ST0 * STI(4);
/* e9d6ba: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d6bc: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* e9d6bf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9d6c1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9d6c3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9d6c5: fld1  */
  FPUSH(1.0);
/* e9d6c7: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e9d6cb: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9d6ce: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9d6d1: call 0xe9b3b6 */
  esp -= 4; W32(esp, 0xe9d6d6u); SPILL(); f_e9b3b6(); if (g_unwind) return; RELOAD();
/* e9d6d6: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9d6d9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9d6db: je 0xe9d6ee */
  if (zf) goto L_e9d6ee;
L_e9d6dd: /* e9d6dd: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9d6e0: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9d6e2: je 0xe9d73a */
  if (zf) goto L_e9d73a;
L_e9d6e4: /* e9d6e4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9d6e5: mov edi, eax */
  edi = eax;
/* e9d6e7: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9d6e8: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9d6e9: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9d6ea: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9d6eb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9d6ec: jmp 0xe9d73a */
  goto L_e9d73a;
L_e9d6ee: /* e9d6ee: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9d6f1: fcomp dword ptr [0xeb3500] */
  fpu_com(ST0, F32((uint32_t)(0xeb3500u)));
  FPOP();
/* e9d6f7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e9d6f9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9d6fc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9d6ff: jne 0xe9d727 */
  if (!zf) goto L_e9d727;
L_e9d701: /* e9d701: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9d704: fsqrt  */
  ST0 = sqrt(ST0);
/* e9d706: fdivr dword ptr [0xeaed44] */
  ST0 = (F32((uint32_t)(0xeaed44u))) / ST0;
/* e9d70c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9d70e: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* e9d710: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9d712: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9d714: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* e9d717: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9d71a: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9d71c: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* e9d71f: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* e9d722: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* e9d725: jmp 0xe9d737 */
  goto L_e9d737;
L_e9d727: /* e9d727: fldz  */
  FPUSH(0.0);
/* e9d729: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9d72b: fldz  */
  FPUSH(0.0);
/* e9d72d: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9d730: fldz  */
  FPUSH(0.0);
/* e9d732: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* e9d735: fldz  */
  FPUSH(0.0);
L_e9d737: /* e9d737: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
L_e9d73a: /* e9d73a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9d73b: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9d73c: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e9d73f(void) {
  LOAD_REGS();
L_e9d73f: /* e9d73f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9d741: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9d746u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9d746: jmp dword ptr [0xeba0b0] */
  { uint32_t t = R32((uint32_t)(0xeba0b0u)); SPILL(); call_ind(t); return; }
}

void f_e9d74c(void) {
  LOAD_REGS();
L_e9d74c: /* e9d74c: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9d74d: mov ebp, esp */
  ebp = esp;
/* e9d74f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e9d752: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* e9d754: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9d755: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* e9d758: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* e9d75a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9d75b: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* e9d75e: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* e9d761: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* e9d764: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d766: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* e9d769: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* e9d76c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d76e: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* e9d770: fmul dword ptr [edi] */
  ST0 = ST0 * (F32((uint32_t)(edi)));
/* e9d772: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* e9d775: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* e9d778: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d77a: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* e9d77d: fmul dword ptr [edi + 4] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0x4u)));
/* e9d780: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d782: fsubr st(1) */
  ST0 = STI(1) - ST0;
/* e9d784: fcom dword ptr [0xeae4b8] */
  fpu_com(ST0, F32((uint32_t)(0xeae4b8u)));
/* e9d78a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e9d78c: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* e9d78f: jp 0xe9d797 */
  if (pf) goto L_e9d797;
L_e9d791: /* e9d791: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9d793: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9d795: jmp 0xe9d7b8 */
  goto L_e9d7b8;
L_e9d797: /* e9d797: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9d799: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d79a: fadd dword ptr [ecx + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xcu)));
/* e9d79d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d79e: fdiv st(1) */
  ST0 = ST0 / STI(1);
/* e9d7a0: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* e9d7a3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9d7a5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9d7a7: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9d7aa: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* e9d7ad: call 0xeac806 */
  esp -= 4; W32(esp, 0xe9d7b2u); SPILL(); f_eac806(); if (g_unwind) return; RELOAD();
/* e9d7b2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9d7b4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9d7b5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9d7b6: jne 0xe9d7bc */
  if (!zf) goto L_e9d7bc;
L_e9d7b8: /* e9d7b8: xor eax, eax */
  eax = 0;
/* e9d7ba: jmp 0xe9d7e8 */
  goto L_e9d7e8;
L_e9d7bc: /* e9d7bc: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* e9d7be: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9d7c1: fsub dword ptr [esi] */
  ST0 = ST0 - (F32((uint32_t)(esi)));
/* e9d7c3: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* e9d7c6: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* e9d7c8: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9d7ca: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* e9d7cd: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* e9d7d0: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* e9d7d3: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* e9d7d6: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9d7d9: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* e9d7dc: fsub dword ptr [esi + 8] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x8u)));
/* e9d7df: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* e9d7e2: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* e9d7e5: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
L_e9d7e8: /* e9d7e8: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9d7e9: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9d7ea: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9d7eb: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_e9d7ee(void) {
  LOAD_REGS();
L_e9d7ee: /* e9d7ee: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9d7f0: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9d7f5u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9d7f5: jmp dword ptr [0xeba088] */
  { uint32_t t = R32((uint32_t)(0xeba088u)); SPILL(); call_ind(t); return; }
}

void f_e9d7fb(void) {
  LOAD_REGS();
L_e9d7fb: /* e9d7fb: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
/* e9d7ff: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* e9d801: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* e9d805: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9d807: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* e9d80a: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* e9d80d: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* e9d810: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* e9d813: mov edx, dword ptr [esp + 8] */
  edx = R32((uint32_t)(esp + 0x8u));
/* e9d817: fld dword ptr [edx + 4] */
  { double v = F32((uint32_t)(edx + 0x4u)); FPUSH(v); }
/* e9d81a: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9d81d: fld dword ptr [edx + 8] */
  { double v = F32((uint32_t)(edx + 0x8u)); FPUSH(v); }
/* e9d820: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* e9d823: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d825: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* e9d827: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9d829: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d82b: fchs  */
  ST0 = -ST0;
/* e9d82d: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* e9d830: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e9d833(void) {
  LOAD_REGS();
L_e9d833: /* e9d833: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9d835: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9d83au); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9d83a: jmp dword ptr [0xeba08c] */
  { uint32_t t = R32((uint32_t)(0xeba08cu)); SPILL(); call_ind(t); return; }
}

void f_e9d840(void) {
  LOAD_REGS();
L_e9d840: /* e9d840: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9d841: mov ebp, esp */
  ebp = esp;
/* e9d843: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9d846: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* e9d849: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9d84a: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* e9d84d: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* e9d84f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9d850: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* e9d852: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9d853: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* e9d856: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* e9d859: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* e9d85c: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* e9d85f: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* e9d862: lea esi, [ebp - 0x18] */
  esi = (uint32_t)(ebp + 0xffffffe8u);
/* e9d865: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* e9d868: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* e9d86b: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* e9d86d: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* e9d870: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* e9d872: fstp dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* e9d875: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* e9d878: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* e9d87b: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* e9d87e: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* e9d881: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* e9d884: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9d886: fmul st(3) */
  ST0 = ST0 * STI(3);
/* e9d888: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9d88b: fmul st(3) */
  ST0 = ST0 * STI(3);
/* e9d88d: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9d88f: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* e9d892: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9d894: fmul dword ptr [ebp - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffff4u)));
/* e9d897: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9d899: fmul st(5) */
  ST0 = ST0 * STI(5);
/* e9d89b: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9d89d: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* e9d8a0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9d8a2: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9d8a4: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9d8a7: fmul st(2) */
  ST0 = ST0 * STI(2);
/* e9d8a9: fld dword ptr [ebp - 0xc] */
  { double v = F32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* e9d8ac: fmul st(2) */
  ST0 = ST0 * STI(2);
/* e9d8ae: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* e9d8b0: fstp dword ptr [ebp - 0x10] */
  WF32((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* e9d8b3: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9d8b4: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9d8b5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9d8b7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9d8b9: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9d8ba: call 0xe9b627 */
  esp -= 4; W32(esp, 0xe9d8bfu); SPILL(); f_e9b627(); if (g_unwind) return; RELOAD();
/* e9d8bf: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9d8c2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9d8c3: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* e9d8c6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9d8c7: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* e9d8ca: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* e9d8cd: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* e9d8d0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d8d2: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* e9d8d4: fmul dword ptr [ebx] */
  ST0 = ST0 * (F32((uint32_t)(ebx)));
/* e9d8d6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9d8d7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d8d9: fchs  */
  ST0 = -ST0;
/* e9d8db: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* e9d8de: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9d8df: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_e9d8e2(void) {
  LOAD_REGS();
L_e9d8e2: /* e9d8e2: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9d8e4: call 0xe9ebfc */
  esp -= 4; W32(esp, 0xe9d8e9u); SPILL(); f_e9ebfc(); if (g_unwind) return; RELOAD();
/* e9d8e9: jmp dword ptr [0xeba0e0] */
  { uint32_t t = R32((uint32_t)(0xeba0e0u)); SPILL(); call_ind(t); return; }
}

void f_e9d8ef(void) {
  LOAD_REGS();
L_e9d8ef: /* e9d8ef: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9d8f0: mov ebp, esp */
  ebp = esp;
/* e9d8f2: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9d8f5: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e9d8f8: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e9d8fb: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* e9d8fe: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* e9d901: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9d902: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* e9d905: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9d906: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* e9d909: lea esi, [ebp - 0x10] */
  esi = (uint32_t)(ebp + 0xfffffff0u);
/* e9d90c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d90e: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* e9d911: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* e9d914: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d916: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* e9d918: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9d91a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d91c: fstp dword ptr [ebp - 0x10] */
  WF32((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* e9d91f: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* e9d922: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* e9d925: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* e9d928: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* e9d92a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d92c: fld dword ptr [ecx + 0x34] */
  { double v = F32((uint32_t)(ecx + 0x34u)); FPUSH(v); }
/* e9d92f: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* e9d932: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d934: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* e9d937: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* e9d93a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d93c: fstp dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* e9d93f: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* e9d942: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* e9d945: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* e9d948: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* e9d94a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d94c: fld dword ptr [ecx + 0x38] */
  { double v = F32((uint32_t)(ecx + 0x38u)); FPUSH(v); }
/* e9d94f: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* e9d952: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d954: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* e9d957: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* e9d95a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d95c: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* e9d95f: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* e9d962: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* e9d965: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* e9d968: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* e9d96a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d96c: fld dword ptr [ecx + 0x3c] */
  { double v = F32((uint32_t)(ecx + 0x3cu)); FPUSH(v); }
/* e9d96f: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* e9d972: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d974: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* e9d977: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* e9d97a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9d97d: mov edi, eax */
  edi = eax;
/* e9d97f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d981: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* e9d984: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9d985: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9d986: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9d987: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9d988: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9d989: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9d98a: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9d98b: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e9d98e(void) {
  LOAD_REGS();
L_e9d98e: /* e9d98e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9d98f: mov ebp, esp */
  ebp = esp;
/* e9d991: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d992: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d993: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e9d996: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* e9d999: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d99a: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* e9d99c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9d99d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9d99f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9d9a1: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9d9a3: fmul st(3) */
  ST0 = ST0 * STI(3);
/* e9d9a5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9d9a7: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* e9d9aa: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9d9ac: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9d9ae: fld1  */
  FPUSH(1.0);
/* e9d9b0: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e9d9b4: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9d9b7: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9d9ba: call 0xe9b3b6 */
  esp -= 4; W32(esp, 0xe9d9bfu); SPILL(); f_e9b3b6(); if (g_unwind) return; RELOAD();
/* e9d9bf: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9d9c2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9d9c4: je 0xe9d9d9 */
  if (zf) goto L_e9d9d9;
L_e9d9c6: /* e9d9c6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9d9c9: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9d9cb: je 0xe9da17 */
  if (zf) goto L_e9da17;
L_e9d9cd: /* e9d9cd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* e9d9cf: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* e9d9d1: mov ecx, dword ptr [ecx + 4] */
  ecx = R32((uint32_t)(ecx + 0x4u));
L_e9d9d4: /* e9d9d4: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* e9d9d7: jmp 0xe9da17 */
  goto L_e9da17;
L_e9d9d9: /* e9d9d9: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9d9dc: fcomp dword ptr [0xeb3500] */
  fpu_com(ST0, F32((uint32_t)(0xeb3500u)));
  FPOP();
/* e9d9e2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e9d9e4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9d9e7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9d9ea: jne 0xe9da0e */
  if (!zf) goto L_e9da0e;
L_e9d9ec: /* e9d9ec: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9d9ef: fsqrt  */
  ST0 = sqrt(ST0);
/* e9d9f1: fdivr dword ptr [0xeaed44] */
  ST0 = (F32((uint32_t)(0xeaed44u))) / ST0;
/* e9d9f7: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9d9f9: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9d9fb: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* e9d9fe: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9da01: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* e9da04: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* e9da06: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* e9da09: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* e9da0c: jmp 0xe9d9d4 */
  goto L_e9d9d4;
L_e9da0e: /* e9da0e: fldz  */
  FPUSH(0.0);
/* e9da10: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9da12: fldz  */
  FPUSH(0.0);
/* e9da14: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
L_e9da17: /* e9da17: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9da18: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e9da1b(void) {
  LOAD_REGS();
L_e9da1b: /* e9da1b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9da1c: mov ebp, esp */
  ebp = esp;
/* e9da1e: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9da21: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* e9da24: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e9da27: fld dword ptr [eax + 0x10] */
  { double v = F32((uint32_t)(eax + 0x10u)); FPUSH(v); }
/* e9da2a: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9da2d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9da2e: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* e9da30: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9da31: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* e9da33: lea esi, [ebp - 0x10] */
  esi = (uint32_t)(ebp + 0xfffffff0u);
/* e9da36: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9da38: fadd dword ptr [eax + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x30u)));
/* e9da3b: fstp dword ptr [ebp - 0x10] */
  WF32((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* e9da3e: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* e9da41: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9da43: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* e9da46: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9da49: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9da4b: fadd dword ptr [eax + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x34u)));
/* e9da4e: fstp dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* e9da51: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* e9da54: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9da56: fld dword ptr [eax + 0x18] */
  { double v = F32((uint32_t)(eax + 0x18u)); FPUSH(v); }
/* e9da59: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9da5c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9da5e: fadd dword ptr [eax + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x38u)));
/* e9da61: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* e9da64: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* e9da67: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9da69: fld dword ptr [eax + 0x1c] */
  { double v = F32((uint32_t)(eax + 0x1cu)); FPUSH(v); }
/* e9da6c: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9da6f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9da71: fadd dword ptr [eax + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x3cu)));
/* e9da74: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9da77: mov edi, eax */
  edi = eax;
/* e9da79: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* e9da7c: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9da7d: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9da7e: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9da7f: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9da80: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9da81: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9da82: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9da83: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e9da86(void) {
  LOAD_REGS();
L_e9da86: /* e9da86: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9da87: mov ebp, esp */
  ebp = esp;
/* e9da89: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9da8a: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e9da8d: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e9da90: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e9da93: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* e9da95: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* e9da97: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* e9da99: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* e9da9c: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* e9da9e: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* e9daa1: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* e9daa3: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* e9daa6: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* e9daa9: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* e9daac: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* e9daaf: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* e9dab2: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* e9dab5: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* e9dab7: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* e9dab9: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* e9dabb: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* e9dabd: fld dword ptr [edx + 0x30] */
  { double v = F32((uint32_t)(edx + 0x30u)); FPUSH(v); }
/* e9dac0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9dac2: fld dword ptr [edx + 0x34] */
  { double v = F32((uint32_t)(edx + 0x34u)); FPUSH(v); }
/* e9dac5: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* e9dac7: fld dword ptr [edx + 0x3c] */
  { double v = F32((uint32_t)(edx + 0x3cu)); FPUSH(v); }
/* e9daca: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* e9dacc: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* e9dace: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* e9dad1: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* e9dad4: fld1  */
  FPUSH(1.0);
/* e9dad6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9dad7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9dad8: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e9dadc: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9dadf: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9dae2: call 0xe9b3b6 */
  esp -= 4; W32(esp, 0xe9dae7u); SPILL(); f_e9b3b6(); if (g_unwind) return; RELOAD();
/* e9dae7: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9daea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9daec: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9daef: jne 0xe9db02 */
  if (!zf) goto L_e9db02;
L_e9daf1: /* e9daf1: fld1  */
  FPUSH(1.0);
/* e9daf3: fdiv dword ptr [ebp - 4] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xfffffffcu)));
/* e9daf6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9daf8: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* e9dafa: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9dafc: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* e9daff: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
L_e9db02: /* e9db02: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9db03: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e9db06(void) {
  LOAD_REGS();
L_e9db06: /* e9db06: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9db07: mov ebp, esp */
  ebp = esp;
/* e9db09: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9db0a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9db0b: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* e9db0e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e9db11: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* e9db14: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* e9db17: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* e9db19: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9db1b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9db1d: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* e9db20: fld dword ptr [ecx + 4] */
  { double v = F32((uint32_t)(ecx + 0x4u)); FPUSH(v); }
/* e9db23: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* e9db25: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* e9db28: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* e9db2b: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* e9db2e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9db31: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* e9db33: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9db35: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* e9db38: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* e9db3b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* e9db3e: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9db3f: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e9db42(void) {
  LOAD_REGS();
L_e9db42: /* e9db42: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9db43: mov ebp, esp */
  ebp = esp;
/* e9db45: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9db48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9db49: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* e9db4c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* e9db4f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9db50: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* e9db53: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9db54: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* e9db56: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9db57: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9db59: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9db5b: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9db5d: fmul st(3) */
  ST0 = ST0 * STI(3);
/* e9db5f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9db61: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9db63: fmul st(4) */
  ST0 = ST0 * STI(4);
/* e9db65: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9db67: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* e9db6a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9db6c: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9db6e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9db70: fld1  */
  FPUSH(1.0);
/* e9db72: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e9db76: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9db79: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9db7c: call 0xe9b3b6 */
  esp -= 4; W32(esp, 0xe9db81u); SPILL(); f_e9b3b6(); if (g_unwind) return; RELOAD();
/* e9db81: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9db84: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9db86: je 0xe9db96 */
  if (zf) goto L_e9db96;
L_e9db88: /* e9db88: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9db8b: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9db8d: je 0xe9dbdc */
  if (zf) goto L_e9dbdc;
L_e9db8f: /* e9db8f: mov edi, eax */
  edi = eax;
/* e9db91: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9db92: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9db93: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9db94: jmp 0xe9dbdc */
  goto L_e9dbdc;
L_e9db96: /* e9db96: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9db99: fcomp dword ptr [0xeb3500] */
  fpu_com(ST0, F32((uint32_t)(0xeb3500u)));
  FPOP();
/* e9db9f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e9dba1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9dba4: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9dba7: jne 0xe9dbce */
  if (!zf) goto L_e9dbce;
L_e9dba9: /* e9dba9: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9dbac: fsqrt  */
  ST0 = sqrt(ST0);
/* e9dbae: fdivr dword ptr [0xeaed44] */
  ST0 = (F32((uint32_t)(0xeaed44u))) / ST0;
/* e9dbb4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9dbb6: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* e9dbb8: fstp dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* e9dbbb: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9dbbd: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* e9dbc0: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* e9dbc3: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* e9dbc6: lea esi, [ebp - 0xc] */
  esi = (uint32_t)(ebp + 0xfffffff4u);
/* e9dbc9: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* e9dbcc: jmp 0xe9db8f */
  goto L_e9db8f;
L_e9dbce: /* e9dbce: fldz  */
  FPUSH(0.0);
/* e9dbd0: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9dbd2: fldz  */
  FPUSH(0.0);
/* e9dbd4: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9dbd7: fldz  */
  FPUSH(0.0);
/* e9dbd9: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
L_e9dbdc: /* e9dbdc: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9dbdd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9dbde: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9dbdf: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e9dbe2(void) {
  LOAD_REGS();
L_e9dbe2: /* e9dbe2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9dbe3: mov ebp, esp */
  ebp = esp;
/* e9dbe5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9dbe6: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e9dbe9: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* e9dbec: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* e9dbef: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* e9dbf1: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* e9dbf3: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* e9dbf5: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* e9dbf8: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* e9dbfa: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* e9dbfd: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* e9dbff: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* e9dc02: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* e9dc04: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* e9dc07: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* e9dc0a: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* e9dc0d: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* e9dc10: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* e9dc13: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* e9dc16: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* e9dc19: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* e9dc1c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* e9dc1e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* e9dc20: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* e9dc22: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* e9dc24: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* e9dc26: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* e9dc29: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* e9dc2c: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* e9dc2f: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* e9dc32: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* e9dc35: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* e9dc38: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* e9dc3b: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* e9dc3e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* e9dc40: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* e9dc42: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* e9dc44: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* e9dc46: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* e9dc48: fld dword ptr [edx + 0x30] */
  { double v = F32((uint32_t)(edx + 0x30u)); FPUSH(v); }
/* e9dc4b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9dc4d: fld dword ptr [edx + 0x34] */
  { double v = F32((uint32_t)(edx + 0x34u)); FPUSH(v); }
/* e9dc50: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* e9dc52: fld dword ptr [edx + 0x38] */
  { double v = F32((uint32_t)(edx + 0x38u)); FPUSH(v); }
/* e9dc55: faddp st(3) */
  STI(3) = STI(3) + ST0;
  FPOP();
/* e9dc57: fld dword ptr [edx + 0x3c] */
  { double v = F32((uint32_t)(edx + 0x3cu)); FPUSH(v); }
/* e9dc5a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* e9dc5c: fstp dword ptr [ecx] */
  WF32((uint32_t)(ecx), ST0); FPOP();
/* e9dc5e: fstp dword ptr [ecx + 4] */
  WF32((uint32_t)(ecx + 0x4u), ST0); FPOP();
/* e9dc61: fstp dword ptr [ecx + 8] */
  WF32((uint32_t)(ecx + 0x8u), ST0); FPOP();
/* e9dc64: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* e9dc67: fld1  */
  FPUSH(1.0);
/* e9dc69: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9dc6a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9dc6b: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e9dc6f: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9dc72: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9dc75: call 0xe9b3b6 */
  esp -= 4; W32(esp, 0xe9dc7au); SPILL(); f_e9b3b6(); if (g_unwind) return; RELOAD();
/* e9dc7a: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9dc7d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9dc7f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9dc82: jne 0xe9dc9d */
  if (!zf) goto L_e9dc9d;
L_e9dc84: /* e9dc84: fld1  */
  FPUSH(1.0);
/* e9dc86: fdiv dword ptr [ebp - 4] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xfffffffcu)));
/* e9dc89: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9dc8b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* e9dc8d: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9dc8f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9dc91: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* e9dc94: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9dc97: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* e9dc9a: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
L_e9dc9d: /* e9dc9d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9dc9e: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e9dca1(void) {
  LOAD_REGS();
L_e9dca1: /* e9dca1: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9dca2: mov ebp, esp */
  ebp = esp;
/* e9dca4: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* e9dca7: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9dcaa: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* e9dcad: xor eax, eax */
  eax = 0;
/* e9dcaf: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9dcb1: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e9dcb4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9dcb5: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* e9dcb8: xor edx, edx */
  edx = 0;
/* e9dcba: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9dcbb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9dcbc: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* e9dcbf: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* e9dcc1: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9dcc3: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e9dcc6: lea esi, [esp + 0x10] */
  esi = (uint32_t)(esp + 0x10u);
/* e9dcca: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e9dccc: xor edx, edx */
  edx = 0;
/* e9dcce: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* e9dcd0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9dcd2: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e9dcd5: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e9dcd7: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e9dcda: ja 0xe9dd7c */
  if ((!cf && !zf)) goto L_e9dd7c;
L_e9dce0: /* e9dce0: jmp dword ptr [eax*4 + 0xe9de0e] */
  switch (R32((uint32_t)(eax*4 + 0xe9de0eu))) {
    case 0xe9dce7u: goto L_e9dce7;
    case 0xe9dd49u: goto L_e9dd49;
    case 0xe9dd4du: goto L_e9dd4d;
    case 0xe9dd51u: goto L_e9dd51;
    case 0xe9dd55u: goto L_e9dd55;
    case 0xe9dd59u: goto L_e9dd59;
    case 0xe9dd5cu: goto L_e9dd5c;
    case 0xe9dd60u: goto L_e9dd60;
    default: guest_badjump(0xe9dce0, R32((uint32_t)(eax*4 + 0xe9de0eu))); return;
  }
L_e9dce7: /* e9dce7: fldz  */
  FPUSH(0.0);
/* e9dce9: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* e9dced: fldz  */
  FPUSH(0.0);
/* e9dcef: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* e9dcf3: fldz  */
  FPUSH(0.0);
/* e9dcf5: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* e9dcf9: fldz  */
  FPUSH(0.0);
/* e9dcfb: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* e9dcff: fldz  */
  FPUSH(0.0);
/* e9dd01: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* e9dd05: fldz  */
  FPUSH(0.0);
/* e9dd07: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* e9dd0b: fldz  */
  FPUSH(0.0);
/* e9dd0d: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* e9dd11: fldz  */
  FPUSH(0.0);
/* e9dd13: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* e9dd17: fldz  */
  FPUSH(0.0);
/* e9dd19: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* e9dd1d: fldz  */
  FPUSH(0.0);
/* e9dd1f: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* e9dd23: fldz  */
  FPUSH(0.0);
/* e9dd25: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* e9dd29: fldz  */
  FPUSH(0.0);
/* e9dd2b: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* e9dd2f: fld1  */
  FPUSH(1.0);
/* e9dd31: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* e9dd35: fld1  */
  FPUSH(1.0);
/* e9dd37: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* e9dd3b: fld1  */
  FPUSH(1.0);
/* e9dd3d: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* e9dd41: fld1  */
  FPUSH(1.0);
/* e9dd43: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* e9dd47: jmp 0xe9dd7c */
  goto L_e9dd7c;
L_e9dd49: /* e9dd49: mov esi, ebx */
  esi = ebx;
/* e9dd4b: jmp 0xe9dd7c */
  goto L_e9dd7c;
L_e9dd4d: /* e9dd4d: mov esi, edi */
  esi = edi;
/* e9dd4f: jmp 0xe9dd7c */
  goto L_e9dd7c;
L_e9dd51: /* e9dd51: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9dd52: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9dd53: jmp 0xe9dd72 */
  goto L_e9dd72;
L_e9dd55: /* e9dd55: mov esi, ecx */
  esi = ecx;
/* e9dd57: jmp 0xe9dd7c */
  goto L_e9dd7c;
L_e9dd59: /* e9dd59: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9dd5a: jmp 0xe9dd5d */
  goto L_e9dd5d;
L_e9dd5c: /* e9dd5c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_e9dd5d: /* e9dd5d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9dd5e: jmp 0xe9dd72 */
  goto L_e9dd72;
L_e9dd60: /* e9dd60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9dd61: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9dd62: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* e9dd66: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9dd67: call 0xe9bf24 */
  esp -= 4; W32(esp, 0xe9dd6cu); SPILL(); f_e9bf24(); if (g_unwind) return; RELOAD();
/* e9dd6c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9dd6d: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* e9dd71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_e9dd72: /* e9dd72: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* e9dd76: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9dd77: call 0xe9bf24 */
  esp -= 4; W32(esp, 0xe9dd7cu); SPILL(); f_e9bf24(); if (g_unwind) return; RELOAD();
L_e9dd7c: /* e9dd7c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9dd7d: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* e9dd80: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e9dd83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9dd84: call 0xe9b931 */
  esp -= 4; W32(esp, 0xe9dd89u); SPILL(); f_e9b931(); if (g_unwind) return; RELOAD();
/* e9dd89: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* e9dd8c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9dd8e: je 0xe9de03 */
  if (zf) goto L_e9de03;
L_e9dd90: /* e9dd90: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* e9dd92: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* e9dd95: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9dd97: fadd dword ptr [0xeaed44] */
  ST0 = ST0 + (F32((uint32_t)(0xeaed44u)));
/* e9dd9d: fild dword ptr [eax + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* e9dda0: jge 0xe9dda8 */
  if ((sf == of)) goto L_e9dda8;
L_e9dda2: /* e9dda2: fadd dword ptr [0xeb350c] */
  ST0 = ST0 + (F32((uint32_t)(0xeb350cu)));
L_e9dda8: /* e9dda8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9ddaa: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* e9ddac: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9ddae: fmul dword ptr [0xeaed40] */
  ST0 = ST0 * (F32((uint32_t)(0xeaed40u)));
/* e9ddb4: fild dword ptr [eax] */
  { double v = (double)(int32_t)R32((uint32_t)(eax)); FPUSH(v); }
/* e9ddb6: jge 0xe9ddbe */
  if ((sf == of)) goto L_e9ddbe;
L_e9ddb8: /* e9ddb8: fadd dword ptr [0xeb350c] */
  ST0 = ST0 + (F32((uint32_t)(0xeb350cu)));
L_e9ddbe: /* e9ddbe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9ddc0: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* e9ddc2: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* e9ddc5: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9ddc7: fld1  */
  FPUSH(1.0);
/* e9ddc9: fsub dword ptr [esi + 4] */
  ST0 = ST0 - (F32((uint32_t)(esi + 0x4u)));
/* e9ddcc: fild dword ptr [eax + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* e9ddcf: jge 0xe9ddd7 */
  if ((sf == of)) goto L_e9ddd7;
L_e9ddd1: /* e9ddd1: fadd dword ptr [0xeb350c] */
  ST0 = ST0 + (F32((uint32_t)(0xeb350cu)));
L_e9ddd7: /* e9ddd7: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e9ddda: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* e9dddc: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9ddde: fmul dword ptr [0xeaed40] */
  ST0 = ST0 * (F32((uint32_t)(0xeaed40u)));
/* e9dde4: fild dword ptr [eax + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* e9dde7: jge 0xe9ddef */
  if ((sf == of)) goto L_e9ddef;
L_e9dde9: /* e9dde9: fadd dword ptr [0xeb350c] */
  ST0 = ST0 + (F32((uint32_t)(0xeb350cu)));
L_e9ddef: /* e9ddef: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9ddf1: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* e9ddf4: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* e9ddf7: fsub dword ptr [eax + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x10u)));
/* e9ddfa: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* e9ddfd: fadd dword ptr [eax + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0x10u)));
/* e9de00: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
L_e9de03: /* e9de03: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9de04: mov eax, esi */
  eax = esi;
/* e9de06: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9de07: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9de08: mov esp, ebp */
  esp = ebp;
/* e9de0a: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9de0b: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_e9de2e(void) {
  LOAD_REGS();
L_e9de2e: /* e9de2e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9de2f: mov ebp, esp */
  ebp = esp;
/* e9de31: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* e9de34: sub esp, 0x44 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9de37: mov ecx, dword ptr [ebp + 0x1c] */
  ecx = R32((uint32_t)(ebp + 0x1cu));
/* e9de3a: xor eax, eax */
  eax = 0;
/* e9de3c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9de3d: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* e9de40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9de41: xor esi, esi */
  esi = 0;
/* e9de43: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9de45: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e9de48: xor edx, edx */
  edx = 0;
/* e9de4a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9de4b: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* e9de4e: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* e9de50: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9de52: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e9de55: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e9de57: xor edx, edx */
  edx = 0;
/* e9de59: shl eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* e9de5b: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9de5d: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e9de60: or eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e9de62: cmp eax, 7 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e9de65: ja 0xe9df14 */
  if ((!cf && !zf)) goto L_e9df14;
L_e9de6b: /* e9de6b: jmp dword ptr [eax*4 + 0xe9dfb4] */
  switch (R32((uint32_t)(eax*4 + 0xe9dfb4u))) {
    case 0xe9de72u: goto L_e9de72;
    case 0xe9ded4u: goto L_e9ded4;
    case 0xe9ded7u: goto L_e9ded7;
    case 0xe9dedau: goto L_e9deda;
    case 0xe9dedeu: goto L_e9dede;
    case 0xe9dee1u: goto L_e9dee1;
    case 0xe9dee4u: goto L_e9dee4;
    case 0xe9dee8u: goto L_e9dee8;
    default: guest_badjump(0xe9de6b, R32((uint32_t)(eax*4 + 0xe9dfb4u))); return;
  }
L_e9de72: /* e9de72: fldz  */
  FPUSH(0.0);
/* e9de74: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* e9de78: fldz  */
  FPUSH(0.0);
/* e9de7a: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* e9de7e: fldz  */
  FPUSH(0.0);
/* e9de80: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* e9de84: fldz  */
  FPUSH(0.0);
/* e9de86: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* e9de8a: fldz  */
  FPUSH(0.0);
/* e9de8c: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* e9de90: fldz  */
  FPUSH(0.0);
/* e9de92: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* e9de96: fldz  */
  FPUSH(0.0);
/* e9de98: fstp dword ptr [esp + 0x2c] */
  WF32((uint32_t)(esp + 0x2cu), ST0); FPOP();
/* e9de9c: fldz  */
  FPUSH(0.0);
/* e9de9e: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* e9dea2: fldz  */
  FPUSH(0.0);
/* e9dea4: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* e9dea8: fldz  */
  FPUSH(0.0);
/* e9deaa: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* e9deae: fldz  */
  FPUSH(0.0);
/* e9deb0: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* e9deb4: fldz  */
  FPUSH(0.0);
/* e9deb6: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* e9deba: fld1  */
  FPUSH(1.0);
/* e9debc: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* e9dec0: fld1  */
  FPUSH(1.0);
/* e9dec2: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* e9dec6: fld1  */
  FPUSH(1.0);
/* e9dec8: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* e9decc: fld1  */
  FPUSH(1.0);
/* e9dece: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* e9ded2: jmp 0xe9df14 */
  goto L_e9df14;
L_e9ded4: /* e9ded4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9ded5: jmp 0xe9df09 */
  goto L_e9df09;
L_e9ded7: /* e9ded7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9ded8: jmp 0xe9df09 */
  goto L_e9df09;
L_e9deda: /* e9deda: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9dedb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9dedc: jmp 0xe9defa */
  goto L_e9defa;
L_e9dede: /* e9dede: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9dedf: jmp 0xe9df09 */
  goto L_e9df09;
L_e9dee1: /* e9dee1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9dee2: jmp 0xe9dee5 */
  goto L_e9dee5;
L_e9dee4: /* e9dee4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
L_e9dee5: /* e9dee5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9dee6: jmp 0xe9defa */
  goto L_e9defa;
L_e9dee8: /* e9dee8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9dee9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9deea: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* e9deee: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9deef: call 0xe9bf24 */
  esp -= 4; W32(esp, 0xe9def4u); SPILL(); f_e9bf24(); if (g_unwind) return; RELOAD();
/* e9def4: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9def5: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* e9def9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_e9defa: /* e9defa: lea eax, [esp + 0x18] */
  eax = (uint32_t)(esp + 0x18u);
/* e9defe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9deff: call 0xe9bf24 */
  esp -= 4; W32(esp, 0xe9df04u); SPILL(); f_e9bf24(); if (g_unwind) return; RELOAD();
/* e9df04: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* e9df08: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
L_e9df09: /* e9df09: lea eax, [esp + 0x14] */
  eax = (uint32_t)(esp + 0x14u);
/* e9df0d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9df0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9df0f: call 0xe9c430 */
  esp -= 4; W32(esp, 0xe9df14u); SPILL(); f_e9c430(); if (g_unwind) return; RELOAD();
L_e9df14: /* e9df14: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* e9df17: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9df19: je 0xe9df98 */
  if (zf) goto L_e9df98;
L_e9df1b: /* e9df1b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9df1d: fild dword ptr [eax] */
  { double v = (double)(int32_t)R32((uint32_t)(eax)); FPUSH(v); }
/* e9df1f: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9df21: jge 0xe9df29 */
  if ((sf == of)) goto L_e9df29;
L_e9df23: /* e9df23: fadd dword ptr [0xeb350c] */
  ST0 = ST0 + (F32((uint32_t)(0xeb350cu)));
L_e9df29: /* e9df29: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e9df2c: fsubr dword ptr [ecx] */
  ST0 = (F32((uint32_t)(ecx))) - ST0;
/* e9df2e: mov edx, dword ptr [eax + 8] */
  edx = R32((uint32_t)(eax + 0x8u));
/* e9df31: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9df33: fild dword ptr [eax + 8] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* e9df36: jge 0xe9df3e */
  if ((sf == of)) goto L_e9df3e;
L_e9df38: /* e9df38: fadd dword ptr [0xeb350c] */
  ST0 = ST0 + (F32((uint32_t)(0xeb350cu)));
L_e9df3e: /* e9df3e: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* e9df40: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e9df43: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* e9df45: fsub dword ptr [0xeaed44] */
  ST0 = ST0 - (F32((uint32_t)(0xeaed44u)));
/* e9df4b: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* e9df4d: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* e9df50: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9df52: fild dword ptr [eax + 4] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* e9df55: jge 0xe9df5d */
  if ((sf == of)) goto L_e9df5d;
L_e9df57: /* e9df57: fadd dword ptr [0xeb350c] */
  ST0 = ST0 + (F32((uint32_t)(0xeb350cu)));
L_e9df5d: /* e9df5d: fsubr dword ptr [ecx + 4] */
  ST0 = (F32((uint32_t)(ecx + 0x4u))) - ST0;
/* e9df60: mov edx, dword ptr [eax + 0xc] */
  edx = R32((uint32_t)(eax + 0xcu));
/* e9df63: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* e9df65: fild dword ptr [eax + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* e9df68: jge 0xe9df70 */
  if ((sf == of)) goto L_e9df70;
L_e9df6a: /* e9df6a: fadd dword ptr [0xeb350c] */
  ST0 = ST0 + (F32((uint32_t)(0xeb350cu)));
L_e9df70: /* e9df70: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* e9df72: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* e9df74: fsub dword ptr [0xeaed44] */
  ST0 = ST0 - (F32((uint32_t)(0xeaed44u)));
/* e9df7a: fchs  */
  ST0 = -ST0;
/* e9df7c: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* e9df7f: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* e9df82: fsub dword ptr [eax + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x10u)));
/* e9df85: fld dword ptr [eax + 0x14] */
  { double v = F32((uint32_t)(eax + 0x14u)); FPUSH(v); }
/* e9df88: fsub dword ptr [eax + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x10u)));
/* e9df8b: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* e9df8f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9df90: fdivp st(1) */
  STI(1) = STI(1) / ST0;
  FPOP();
/* e9df92: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9df93: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* e9df96: jmp 0xe9dfa3 */
  goto L_e9dfa3;
L_e9df98: /* e9df98: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e9df9b: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* e9df9f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9dfa0: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
L_e9dfa3: /* e9dfa3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9dfa4: call 0xe9b931 */
  esp -= 4; W32(esp, 0xe9dfa9u); SPILL(); f_e9b931(); if (g_unwind) return; RELOAD();
/* e9dfa9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9dfaa: mov eax, esi */
  eax = esi;
/* e9dfac: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9dfad: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9dfae: mov esp, ebp */
  esp = ebp;
/* e9dfb0: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9dfb1: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_e9dfd4(void) {
  LOAD_REGS();
L_e9dfd4: /* e9dfd4: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9dfd5: mov ebp, esp */
  ebp = esp;
/* e9dfd7: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9dfda: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9dfdb: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* e9dfde: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* e9dfe1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9dfe2: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* e9dfe5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9dfe6: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* e9dfe9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9dfea: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* e9dfec: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9dfee: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9dff0: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9dff2: fmul st(3) */
  ST0 = ST0 * STI(3);
/* e9dff4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9dff6: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9dff8: fmul st(4) */
  ST0 = ST0 * STI(4);
/* e9dffa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9dffc: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* e9dffe: fmul st(5) */
  ST0 = ST0 * STI(5);
/* e9e000: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9e002: fstp dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0); FPOP();
/* e9e005: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e007: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e009: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e00b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e00d: fld1  */
  FPUSH(1.0);
/* e9e00f: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e9e013: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9e016: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9e019: call 0xe9b3b6 */
  esp -= 4; W32(esp, 0xe9e01eu); SPILL(); f_e9b3b6(); if (g_unwind) return; RELOAD();
/* e9e01e: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9e021: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9e023: je 0xe9e034 */
  if (zf) goto L_e9e034;
L_e9e025: /* e9e025: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9e028: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9e02a: je 0xe9e087 */
  if (zf) goto L_e9e087;
L_e9e02c: /* e9e02c: mov edi, eax */
  edi = eax;
/* e9e02e: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e02f: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e030: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e031: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e032: jmp 0xe9e087 */
  goto L_e9e087;
L_e9e034: /* e9e034: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9e037: fcomp dword ptr [0xeb3500] */
  fpu_com(ST0, F32((uint32_t)(0xeb3500u)));
  FPOP();
/* e9e03d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e9e03f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9e042: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9e045: jne 0xe9e074 */
  if (!zf) goto L_e9e074;
L_e9e047: /* e9e047: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9e04a: fsqrt  */
  ST0 = sqrt(ST0);
/* e9e04c: fdivr dword ptr [0xeaed44] */
  ST0 = (F32((uint32_t)(0xeaed44u))) / ST0;
/* e9e052: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9e054: fmul dword ptr [esi] */
  ST0 = ST0 * (F32((uint32_t)(esi)));
/* e9e056: fstp dword ptr [ebp - 0x10] */
  WF32((uint32_t)(ebp + 0xfffffff0u), ST0); FPOP();
/* e9e059: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9e05b: fmul dword ptr [esi + 4] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x4u)));
/* e9e05e: fstp dword ptr [ebp - 0xc] */
  WF32((uint32_t)(ebp + 0xfffffff4u), ST0); FPOP();
/* e9e061: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9e063: fmul dword ptr [esi + 8] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x8u)));
/* e9e066: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* e9e069: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* e9e06c: lea esi, [ebp - 0x10] */
  esi = (uint32_t)(ebp + 0xfffffff0u);
/* e9e06f: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* e9e072: jmp 0xe9e02c */
  goto L_e9e02c;
L_e9e074: /* e9e074: fldz  */
  FPUSH(0.0);
/* e9e076: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9e078: fldz  */
  FPUSH(0.0);
/* e9e07a: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9e07d: fldz  */
  FPUSH(0.0);
/* e9e07f: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* e9e082: fldz  */
  FPUSH(0.0);
/* e9e084: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
L_e9e087: /* e9e087: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9e088: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9e089: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9e08a: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e9e08d(void) {
  LOAD_REGS();
L_e9e08d: /* e9e08d: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9e08e: mov ebp, esp */
  ebp = esp;
/* e9e090: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9e093: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* e9e096: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9e099: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* e9e09d: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* e9e0a0: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* e9e0a3: fstp dword ptr [esp + 4] */
  WF32((uint32_t)(esp + 0x4u), ST0); FPOP();
/* e9e0a7: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9e0aa: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* e9e0ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e0ae: call 0xe9d0ae */
  esp -= 4; W32(esp, 0xe9e0b3u); SPILL(); f_e9d0ae(); if (g_unwind) return; RELOAD();
/* e9e0b3: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* e9e0b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e0b7: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* e9e0ba: call 0xe9cbcb */
  esp -= 4; W32(esp, 0xe9e0bfu); SPILL(); f_e9cbcb(); if (g_unwind) return; RELOAD();
/* e9e0bf: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9e0c2: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9e0c3: ret 0x10 */
  esp += 20; SPILL(); return;
}

void f_e9e0c6(void) {
  LOAD_REGS();
L_e9e0c6: /* e9e0c6: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9e0c7: mov ebp, esp */
  ebp = esp;
/* e9e0c9: and esp, 0xfffffff0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff0u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* e9e0cc: sub esp, 0xc8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9e0d2: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* e9e0d5: fldz  */
  FPUSH(0.0);
/* e9e0d7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9e0d9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9e0da: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9e0db: je 0xe9e29e */
  if (zf) goto L_e9e29e;
L_e9e0e1: /* e9e0e1: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9e0e5: je 0xe9e24a */
  if (zf) goto L_e9e24a;
L_e9e0eb: /* e9e0eb: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* e9e0ef: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9e0f1: fldz  */
  FPUSH(0.0);
/* e9e0f3: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* e9e0f6: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* e9e0fa: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* e9e0fe: fldz  */
  FPUSH(0.0);
/* e9e100: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e9e103: fstp dword ptr [esp + 0x44] */
  WF32((uint32_t)(esp + 0x44u), ST0); FPOP();
/* e9e107: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* e9e10a: fldz  */
  FPUSH(0.0);
/* e9e10c: mov dword ptr [esp + 0x3c], eax */
  W32((uint32_t)(esp + 0x3cu), eax);
/* e9e110: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* e9e114: fstp dword ptr [esp + 0x40] */
  WF32((uint32_t)(esp + 0x40u), ST0); FPOP();
/* e9e118: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e119: fldz  */
  FPUSH(0.0);
/* e9e11b: mov dword ptr [esp + 0x2c], ecx */
  W32((uint32_t)(esp + 0x2cu), ecx);
/* e9e11f: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* e9e123: fldz  */
  FPUSH(0.0);
/* e9e125: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* e9e129: fldz  */
  FPUSH(0.0);
/* e9e12b: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* e9e12f: fldz  */
  FPUSH(0.0);
/* e9e131: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* e9e135: fldz  */
  FPUSH(0.0);
/* e9e137: fstp dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0); FPOP();
/* e9e13b: fldz  */
  FPUSH(0.0);
/* e9e13d: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* e9e141: fldz  */
  FPUSH(0.0);
/* e9e143: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* e9e147: fldz  */
  FPUSH(0.0);
/* e9e149: fstp dword ptr [esp + 0x1c] */
  WF32((uint32_t)(esp + 0x1cu), ST0); FPOP();
/* e9e14d: fld1  */
  FPUSH(1.0);
/* e9e14f: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* e9e153: call 0xe9cbcb */
  esp -= 4; W32(esp, 0xe9e158u); SPILL(); f_e9cbcb(); if (g_unwind) return; RELOAD();
/* e9e158: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* e9e15b: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9e15d: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* e9e161: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e162: je 0xe9e224 */
  if (zf) goto L_e9e224;
L_e9e168: /* e9e168: lea eax, [esp + 0x94] */
  eax = (uint32_t)(esp + 0x94u);
/* e9e16f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e170: call 0xe9c16d */
  esp -= 4; W32(esp, 0xe9e175u); SPILL(); f_e9c16d(); if (g_unwind) return; RELOAD();
/* e9e175: fldz  */
  FPUSH(0.0);
/* e9e177: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e9e17a: fstp dword ptr [esi + 0x38] */
  WF32((uint32_t)(esi + 0x38u), ST0); FPOP();
/* e9e17d: fldz  */
  FPUSH(0.0);
/* e9e17f: lea eax, [esp + 0x90] */
  eax = (uint32_t)(esp + 0x90u);
/* e9e186: fstp dword ptr [esi + 0x34] */
  WF32((uint32_t)(esi + 0x34u), ST0); FPOP();
/* e9e189: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e18a: fldz  */
  FPUSH(0.0);
/* e9e18c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9e18d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9e18e: fstp dword ptr [esi + 0x30] */
  WF32((uint32_t)(esi + 0x30u), ST0); FPOP();
/* e9e191: fldz  */
  FPUSH(0.0);
/* e9e193: fstp dword ptr [esi + 0x2c] */
  WF32((uint32_t)(esi + 0x2cu), ST0); FPOP();
/* e9e196: fldz  */
  FPUSH(0.0);
/* e9e198: fstp dword ptr [esi + 0x24] */
  WF32((uint32_t)(esi + 0x24u), ST0); FPOP();
/* e9e19b: fldz  */
  FPUSH(0.0);
/* e9e19d: fstp dword ptr [esi + 0x20] */
  WF32((uint32_t)(esi + 0x20u), ST0); FPOP();
/* e9e1a0: fldz  */
  FPUSH(0.0);
/* e9e1a2: fstp dword ptr [esi + 0x1c] */
  WF32((uint32_t)(esi + 0x1cu), ST0); FPOP();
/* e9e1a5: fldz  */
  FPUSH(0.0);
/* e9e1a7: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* e9e1aa: fldz  */
  FPUSH(0.0);
/* e9e1ac: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* e9e1af: fldz  */
  FPUSH(0.0);
/* e9e1b1: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* e9e1b4: fldz  */
  FPUSH(0.0);
/* e9e1b6: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* e9e1b9: fldz  */
  FPUSH(0.0);
/* e9e1bb: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* e9e1be: fld1  */
  FPUSH(1.0);
/* e9e1c0: fstp dword ptr [esi + 0x3c] */
  WF32((uint32_t)(esi + 0x3cu), ST0); FPOP();
/* e9e1c3: fld1  */
  FPUSH(1.0);
/* e9e1c5: fstp dword ptr [esi + 0x28] */
  WF32((uint32_t)(esi + 0x28u), ST0); FPOP();
/* e9e1c8: fld1  */
  FPUSH(1.0);
/* e9e1ca: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* e9e1cd: fld1  */
  FPUSH(1.0);
/* e9e1cf: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* e9e1d1: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* e9e1d3: fchs  */
  ST0 = -ST0;
/* e9e1d5: fstp dword ptr [esi + 0x30] */
  WF32((uint32_t)(esi + 0x30u), ST0); FPOP();
/* e9e1d8: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* e9e1db: fchs  */
  ST0 = -ST0;
/* e9e1dd: fstp dword ptr [esi + 0x34] */
  WF32((uint32_t)(esi + 0x34u), ST0); FPOP();
/* e9e1e0: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* e9e1e3: fchs  */
  ST0 = -ST0;
/* e9e1e5: fstp dword ptr [esi + 0x38] */
  WF32((uint32_t)(esi + 0x38u), ST0); FPOP();
/* e9e1e8: call 0xe9bf24 */
  esp -= 4; W32(esp, 0xe9e1edu); SPILL(); f_e9bf24(); if (g_unwind) return; RELOAD();
/* e9e1ed: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* e9e1f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e1f2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9e1f3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9e1f4: call 0xe9bf24 */
  esp -= 4; W32(esp, 0xe9e1f9u); SPILL(); f_e9bf24(); if (g_unwind) return; RELOAD();
/* e9e1f9: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* e9e1fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e1fe: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9e1ff: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9e200: call 0xe9bf24 */
  esp -= 4; W32(esp, 0xe9e205u); SPILL(); f_e9bf24(); if (g_unwind) return; RELOAD();
/* e9e205: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* e9e208: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* e9e20a: fstp dword ptr [esi + 0x30] */
  WF32((uint32_t)(esi + 0x30u), ST0); FPOP();
/* e9e20d: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* e9e210: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* e9e213: fstp dword ptr [esi + 0x34] */
  WF32((uint32_t)(esi + 0x34u), ST0); FPOP();
/* e9e216: fld dword ptr [esi + 0x38] */
  { double v = F32((uint32_t)(esi + 0x38u)); FPUSH(v); }
/* e9e219: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* e9e21c: fstp dword ptr [esi + 0x38] */
  WF32((uint32_t)(esi + 0x38u), ST0); FPOP();
/* e9e21f: jmp 0xe9e2ee */
  goto L_e9e2ee;
L_e9e224: /* e9e224: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e9e227: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9e228: call 0xe9c16d */
  esp -= 4; W32(esp, 0xe9e22du); SPILL(); f_e9c16d(); if (g_unwind) return; RELOAD();
/* e9e22d: lea eax, [esp + 0x10] */
  eax = (uint32_t)(esp + 0x10u);
/* e9e231: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e232: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9e233: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9e234: call 0xe9bf24 */
  esp -= 4; W32(esp, 0xe9e239u); SPILL(); f_e9bf24(); if (g_unwind) return; RELOAD();
/* e9e239: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* e9e23d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e23e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9e23f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9e240: call 0xe9bf24 */
  esp -= 4; W32(esp, 0xe9e245u); SPILL(); f_e9bf24(); if (g_unwind) return; RELOAD();
/* e9e245: jmp 0xe9e2ee */
  goto L_e9e2ee;
L_e9e24a: /* e9e24a: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e9e24d: fstp dword ptr [esi + 0x38] */
  WF32((uint32_t)(esi + 0x38u), ST0); FPOP();
/* e9e250: fldz  */
  FPUSH(0.0);
/* e9e252: fstp dword ptr [esi + 0x34] */
  WF32((uint32_t)(esi + 0x34u), ST0); FPOP();
/* e9e255: fldz  */
  FPUSH(0.0);
/* e9e257: fstp dword ptr [esi + 0x30] */
  WF32((uint32_t)(esi + 0x30u), ST0); FPOP();
/* e9e25a: fldz  */
  FPUSH(0.0);
/* e9e25c: fstp dword ptr [esi + 0x2c] */
  WF32((uint32_t)(esi + 0x2cu), ST0); FPOP();
/* e9e25f: fldz  */
  FPUSH(0.0);
/* e9e261: fstp dword ptr [esi + 0x24] */
  WF32((uint32_t)(esi + 0x24u), ST0); FPOP();
/* e9e264: fldz  */
  FPUSH(0.0);
/* e9e266: fstp dword ptr [esi + 0x20] */
  WF32((uint32_t)(esi + 0x20u), ST0); FPOP();
/* e9e269: fldz  */
  FPUSH(0.0);
/* e9e26b: fstp dword ptr [esi + 0x1c] */
  WF32((uint32_t)(esi + 0x1cu), ST0); FPOP();
/* e9e26e: fldz  */
  FPUSH(0.0);
/* e9e270: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* e9e273: fldz  */
  FPUSH(0.0);
/* e9e275: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* e9e278: fldz  */
  FPUSH(0.0);
/* e9e27a: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* e9e27d: fldz  */
  FPUSH(0.0);
/* e9e27f: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* e9e282: fldz  */
  FPUSH(0.0);
/* e9e284: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* e9e287: fld1  */
  FPUSH(1.0);
/* e9e289: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* e9e28b: mov dword ptr [esi], ecx */
  W32((uint32_t)(esi), ecx);
/* e9e28d: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* e9e290: mov dword ptr [esi + 0x14], ecx */
  W32((uint32_t)(esi + 0x14u), ecx);
/* e9e293: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* e9e296: fstp dword ptr [esi + 0x3c] */
  WF32((uint32_t)(esi + 0x3cu), ST0); FPOP();
/* e9e299: mov dword ptr [esi + 0x28], eax */
  W32((uint32_t)(esi + 0x28u), eax);
/* e9e29c: jmp 0xe9e2ee */
  goto L_e9e2ee;
L_e9e29e: /* e9e29e: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e9e2a1: fstp dword ptr [esi + 0x38] */
  WF32((uint32_t)(esi + 0x38u), ST0); FPOP();
/* e9e2a4: fldz  */
  FPUSH(0.0);
/* e9e2a6: fstp dword ptr [esi + 0x34] */
  WF32((uint32_t)(esi + 0x34u), ST0); FPOP();
/* e9e2a9: fldz  */
  FPUSH(0.0);
/* e9e2ab: fstp dword ptr [esi + 0x30] */
  WF32((uint32_t)(esi + 0x30u), ST0); FPOP();
/* e9e2ae: fldz  */
  FPUSH(0.0);
/* e9e2b0: fstp dword ptr [esi + 0x2c] */
  WF32((uint32_t)(esi + 0x2cu), ST0); FPOP();
/* e9e2b3: fldz  */
  FPUSH(0.0);
/* e9e2b5: fstp dword ptr [esi + 0x24] */
  WF32((uint32_t)(esi + 0x24u), ST0); FPOP();
/* e9e2b8: fldz  */
  FPUSH(0.0);
/* e9e2ba: fstp dword ptr [esi + 0x20] */
  WF32((uint32_t)(esi + 0x20u), ST0); FPOP();
/* e9e2bd: fldz  */
  FPUSH(0.0);
/* e9e2bf: fstp dword ptr [esi + 0x1c] */
  WF32((uint32_t)(esi + 0x1cu), ST0); FPOP();
/* e9e2c2: fldz  */
  FPUSH(0.0);
/* e9e2c4: fstp dword ptr [esi + 0x18] */
  WF32((uint32_t)(esi + 0x18u), ST0); FPOP();
/* e9e2c7: fldz  */
  FPUSH(0.0);
/* e9e2c9: fstp dword ptr [esi + 0x10] */
  WF32((uint32_t)(esi + 0x10u), ST0); FPOP();
/* e9e2cc: fldz  */
  FPUSH(0.0);
/* e9e2ce: fstp dword ptr [esi + 0xc] */
  WF32((uint32_t)(esi + 0xcu), ST0); FPOP();
/* e9e2d1: fldz  */
  FPUSH(0.0);
/* e9e2d3: fstp dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0); FPOP();
/* e9e2d6: fldz  */
  FPUSH(0.0);
/* e9e2d8: fstp dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0); FPOP();
/* e9e2db: fld1  */
  FPUSH(1.0);
/* e9e2dd: fstp dword ptr [esi + 0x3c] */
  WF32((uint32_t)(esi + 0x3cu), ST0); FPOP();
/* e9e2e0: fld1  */
  FPUSH(1.0);
/* e9e2e2: fstp dword ptr [esi + 0x28] */
  WF32((uint32_t)(esi + 0x28u), ST0); FPOP();
/* e9e2e5: fld1  */
  FPUSH(1.0);
/* e9e2e7: fstp dword ptr [esi + 0x14] */
  WF32((uint32_t)(esi + 0x14u), ST0); FPOP();
/* e9e2ea: fld1  */
  FPUSH(1.0);
/* e9e2ec: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
L_e9e2ee: /* e9e2ee: cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x1cu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9e2f2: je 0xe9e34f */
  if (zf) goto L_e9e34f;
L_e9e2f4: /* e9e2f4: push dword ptr [ebp + 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x1cu)); esp -= 4; W32(esp, v); }
/* e9e2f7: lea eax, [esp + 0x54] */
  eax = (uint32_t)(esp + 0x54u);
/* e9e2fb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e2fc: call 0xe9cbcb */
  esp -= 4; W32(esp, 0xe9e301u); SPILL(); f_e9cbcb(); if (g_unwind) return; RELOAD();
/* e9e301: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* e9e304: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9e306: lea eax, [esp + 0x50] */
  eax = (uint32_t)(esp + 0x50u);
/* e9e30a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e30b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9e30c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9e30d: je 0xe9e34a */
  if (zf) goto L_e9e34a;
L_e9e30f: /* e9e30f: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* e9e312: fsub dword ptr [edi] */
  ST0 = ST0 - (F32((uint32_t)(edi)));
/* e9e314: fstp dword ptr [esi + 0x30] */
  WF32((uint32_t)(esi + 0x30u), ST0); FPOP();
/* e9e317: fld dword ptr [esi + 0x34] */
  { double v = F32((uint32_t)(esi + 0x34u)); FPUSH(v); }
/* e9e31a: fsub dword ptr [edi + 4] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x4u)));
/* e9e31d: fstp dword ptr [esi + 0x34] */
  WF32((uint32_t)(esi + 0x34u), ST0); FPOP();
/* e9e320: fld dword ptr [esi + 0x38] */
  { double v = F32((uint32_t)(esi + 0x38u)); FPUSH(v); }
/* e9e323: fsub dword ptr [edi + 8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0x8u)));
/* e9e326: fstp dword ptr [esi + 0x38] */
  WF32((uint32_t)(esi + 0x38u), ST0); FPOP();
/* e9e329: call 0xe9bf24 */
  esp -= 4; W32(esp, 0xe9e32eu); SPILL(); f_e9bf24(); if (g_unwind) return; RELOAD();
/* e9e32e: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* e9e331: fadd dword ptr [edi] */
  ST0 = ST0 + (F32((uint32_t)(edi)));
/* e9e333: fstp dword ptr [esi + 0x30] */
  WF32((uint32_t)(esi + 0x30u), ST0); FPOP();
/* e9e336: fld dword ptr [esi + 0x34] */
  { double v = F32((uint32_t)(esi + 0x34u)); FPUSH(v); }
/* e9e339: fadd dword ptr [edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x4u)));
/* e9e33c: fstp dword ptr [esi + 0x34] */
  WF32((uint32_t)(esi + 0x34u), ST0); FPOP();
/* e9e33f: fld dword ptr [esi + 0x38] */
  { double v = F32((uint32_t)(esi + 0x38u)); FPUSH(v); }
/* e9e342: fadd dword ptr [edi + 8] */
  ST0 = ST0 + (F32((uint32_t)(edi + 0x8u)));
/* e9e345: fstp dword ptr [esi + 0x38] */
  WF32((uint32_t)(esi + 0x38u), ST0); FPOP();
/* e9e348: jmp 0xe9e34f */
  goto L_e9e34f;
L_e9e34a: /* e9e34a: call 0xe9bf24 */
  esp -= 4; W32(esp, 0xe9e34fu); SPILL(); f_e9bf24(); if (g_unwind) return; RELOAD();
L_e9e34f: /* e9e34f: mov eax, dword ptr [ebp + 0x20] */
  eax = R32((uint32_t)(ebp + 0x20u));
/* e9e352: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9e354: je 0xe9e370 */
  if (zf) goto L_e9e370;
L_e9e356: /* e9e356: fld dword ptr [esi + 0x30] */
  { double v = F32((uint32_t)(esi + 0x30u)); FPUSH(v); }
/* e9e359: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* e9e35b: fstp dword ptr [esi + 0x30] */
  WF32((uint32_t)(esi + 0x30u), ST0); FPOP();
/* e9e35e: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* e9e361: fadd dword ptr [esi + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x34u)));
/* e9e364: fstp dword ptr [esi + 0x34] */
  WF32((uint32_t)(esi + 0x34u), ST0); FPOP();
/* e9e367: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* e9e36a: fadd dword ptr [esi + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x38u)));
/* e9e36d: fstp dword ptr [esi + 0x38] */
  WF32((uint32_t)(esi + 0x38u), ST0); FPOP();
L_e9e370: /* e9e370: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9e371: mov eax, esi */
  eax = esi;
/* e9e373: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9e374: mov esp, ebp */
  esp = ebp;
/* e9e376: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9e377: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_e9e37a(void) {
  LOAD_REGS();
L_e9e37a: /* e9e37a: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9e37b: mov ebp, esp */
  ebp = esp;
/* e9e37d: sub esp, 0x20 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9e380: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* e9e383: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* e9e386: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e387: call 0xe9d695 */
  esp -= 4; W32(esp, 0xe9e38cu); SPILL(); f_e9d695(); if (g_unwind) return; RELOAD();
/* e9e38c: fld dword ptr [ebp - 0xc] */
  { double v = F32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* e9e38f: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* e9e392: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9e395: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9e398: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* e9e39b: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9e39d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9e39f: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9e3a2: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* e9e3a5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9e3a7: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9e3aa: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* e9e3ad: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9e3af: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* e9e3b2: fchs  */
  ST0 = -ST0;
/* e9e3b4: fld dword ptr [ebp - 0xc] */
  { double v = F32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* e9e3b7: fchs  */
  ST0 = -ST0;
/* e9e3b9: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9e3bc: fchs  */
  ST0 = -ST0;
/* e9e3be: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* e9e3c1: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9e3c4: fchs  */
  ST0 = -ST0;
/* e9e3c6: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* e9e3c9: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9e3cb: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9e3cd: fadd st(5) */
  ST0 = ST0 + STI(5);
/* e9e3cf: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9e3d1: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9e3d3: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9e3d5: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* e9e3d8: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9e3da: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9e3dc: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* e9e3df: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9e3e1: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* e9e3e3: fstp dword ptr [eax + 0x30] */
  WF32((uint32_t)(eax + 0x30u), ST0); FPOP();
/* e9e3e6: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9e3e8: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9e3eb: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9e3ee: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9e3f0: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9e3f3: fadd st(5) */
  ST0 = ST0 + STI(5);
/* e9e3f5: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* e9e3f8: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9e3fa: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9e3fd: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* e9e400: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* e9e402: fmul dword ptr [ecx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x4u)));
/* e9e405: fstp dword ptr [eax + 0x34] */
  WF32((uint32_t)(eax + 0x34u), ST0); FPOP();
/* e9e408: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9e40a: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* e9e40d: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* e9e410: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9e412: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* e9e415: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* e9e418: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9e41a: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* e9e41d: fadd st(5) */
  ST0 = ST0 + STI(5);
/* e9e41f: fstp dword ptr [eax + 0x28] */
  WF32((uint32_t)(eax + 0x28u), ST0); FPOP();
/* e9e422: fmul dword ptr [ecx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0x8u)));
/* e9e425: fstp dword ptr [eax + 0x38] */
  WF32((uint32_t)(eax + 0x38u), ST0); FPOP();
/* e9e428: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e42a: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9e42c: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* e9e42f: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* e9e432: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* e9e435: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* e9e438: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e43a: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e9e43d: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* e9e440: fstp dword ptr [eax + 0x2c] */
  WF32((uint32_t)(eax + 0x2cu), ST0); FPOP();
/* e9e443: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* e9e446: fmul dword ptr [ecx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ecx + 0xcu)));
/* e9e449: fadd st(1) */
  ST0 = ST0 + STI(1);
/* e9e44b: fstp dword ptr [eax + 0x3c] */
  WF32((uint32_t)(eax + 0x3cu), ST0); FPOP();
/* e9e44e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e450: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9e451: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e9e454(void) {
  LOAD_REGS();
L_e9e454: /* e9e454: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9e455: mov ebp, esp */
  ebp = esp;
/* e9e457: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9e45a: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* e9e45d: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* e9e460: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e461: call 0xe9d695 */
  esp -= 4; W32(esp, 0xe9e466u); SPILL(); f_e9d695(); if (g_unwind) return; RELOAD();
/* e9e466: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* e9e469: fmul dword ptr [0xeb3510] */
  ST0 = ST0 * (F32((uint32_t)(0xeb3510u)));
/* e9e46f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9e472: fld dword ptr [ebp - 0xc] */
  { double v = F32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* e9e475: fmul dword ptr [0xeb3510] */
  ST0 = ST0 * (F32((uint32_t)(0xeb3510u)));
/* e9e47b: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9e47e: fmul dword ptr [0xeb3510] */
  ST0 = ST0 * (F32((uint32_t)(0xeb3510u)));
/* e9e484: fst dword ptr [ebp + 0xc] */
  WF32((uint32_t)(ebp + 0xcu), ST0);
/* e9e487: fld dword ptr [0xeaed44] */
  { double v = F32((uint32_t)(0xeaed44u)); FPUSH(v); }
/* e9e48d: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* e9e490: fmul st(4) */
  ST0 = ST0 * STI(4);
/* e9e492: fadd st(1) */
  ST0 = ST0 + STI(1);
/* e9e494: fstp dword ptr [eax] */
  WF32((uint32_t)(eax), ST0); FPOP();
/* e9e496: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9e498: fmul dword ptr [ebp - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffff0u)));
/* e9e49b: fstp dword ptr [eax + 4] */
  WF32((uint32_t)(eax + 0x4u), ST0); FPOP();
/* e9e49e: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9e4a0: fmul dword ptr [ebp - 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffff0u)));
/* e9e4a3: fstp dword ptr [eax + 8] */
  WF32((uint32_t)(eax + 0x8u), ST0); FPOP();
/* e9e4a6: fldz  */
  FPUSH(0.0);
/* e9e4a8: fstp dword ptr [eax + 0xc] */
  WF32((uint32_t)(eax + 0xcu), ST0); FPOP();
/* e9e4ab: fld dword ptr [ebp - 0xc] */
  { double v = F32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* e9e4ae: fmul st(4) */
  ST0 = ST0 * STI(4);
/* e9e4b0: fstp dword ptr [eax + 0x10] */
  WF32((uint32_t)(eax + 0x10u), ST0); FPOP();
/* e9e4b3: fld dword ptr [ebp - 0xc] */
  { double v = F32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* e9e4b6: fmul st(3) */
  ST0 = ST0 * STI(3);
/* e9e4b8: fadd st(1) */
  ST0 = ST0 + STI(1);
/* e9e4ba: fstp dword ptr [eax + 0x14] */
  WF32((uint32_t)(eax + 0x14u), ST0); FPOP();
/* e9e4bd: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9e4bf: fmul dword ptr [ebp - 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffff4u)));
/* e9e4c2: fstp dword ptr [eax + 0x18] */
  WF32((uint32_t)(eax + 0x18u), ST0); FPOP();
/* e9e4c5: fldz  */
  FPUSH(0.0);
/* e9e4c7: fstp dword ptr [eax + 0x1c] */
  WF32((uint32_t)(eax + 0x1cu), ST0); FPOP();
/* e9e4ca: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9e4cd: fmul st(4) */
  ST0 = ST0 * STI(4);
/* e9e4cf: fstp dword ptr [eax + 0x20] */
  WF32((uint32_t)(eax + 0x20u), ST0); FPOP();
/* e9e4d2: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9e4d5: fmul st(3) */
  ST0 = ST0 * STI(3);
/* e9e4d7: fstp dword ptr [eax + 0x24] */
  WF32((uint32_t)(eax + 0x24u), ST0); FPOP();
/* e9e4da: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9e4dd: fmul st(2) */
  ST0 = ST0 * STI(2);
/* e9e4df: fadd st(1) */
  ST0 = ST0 + STI(1);
/* e9e4e1: fstp dword ptr [eax + 0x28] */
  WF32((uint32_t)(eax + 0x28u), ST0); FPOP();
/* e9e4e4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e4e6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e4e8: fldz  */
  FPUSH(0.0);
/* e9e4ea: fstp dword ptr [eax + 0x2c] */
  WF32((uint32_t)(eax + 0x2cu), ST0); FPOP();
/* e9e4ed: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9e4f0: fmul st(2) */
  ST0 = ST0 * STI(2);
/* e9e4f2: fstp dword ptr [eax + 0x30] */
  WF32((uint32_t)(eax + 0x30u), ST0); FPOP();
/* e9e4f5: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9e4f8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9e4fa: fstp dword ptr [eax + 0x34] */
  WF32((uint32_t)(eax + 0x34u), ST0); FPOP();
/* e9e4fd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e4ff: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e501: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* e9e504: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* e9e507: fstp dword ptr [eax + 0x38] */
  WF32((uint32_t)(eax + 0x38u), ST0); FPOP();
/* e9e50a: fld1  */
  FPUSH(1.0);
/* e9e50c: fstp dword ptr [eax + 0x3c] */
  WF32((uint32_t)(eax + 0x3cu), ST0); FPOP();
/* e9e50f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9e510: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e9e513(void) {
  LOAD_REGS();
L_e9e513: /* e9e513: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9e514: lea ebp, [esp - 0x5c] */
  ebp = (uint32_t)(esp + 0xffffffa4u);
/* e9e518: sub esp, 0xa0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xa0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9e51e: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9e51f: mov esi, dword ptr [ebp + 0x70] */
  esi = R32((uint32_t)(ebp + 0x70u));
/* e9e522: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9e523: lea edi, [ebp - 0x24] */
  edi = (uint32_t)(ebp + 0xffffffdcu);
/* e9e526: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e527: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e528: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e529: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e52a: mov esi, dword ptr [ebp + 0x74] */
  esi = R32((uint32_t)(ebp + 0x74u));
/* e9e52d: lea edi, [ebp + 0xc] */
  edi = (uint32_t)(ebp + 0xcu);
/* e9e530: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e531: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e532: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e533: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e534: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9e537: fadd dword ptr [ebp - 0x24] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffdcu)));
/* e9e53a: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* e9e53d: mov esi, dword ptr [ebp + 0x78] */
  esi = R32((uint32_t)(ebp + 0x78u));
/* e9e540: fadd dword ptr [ebp - 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe0u)));
/* e9e543: lea edi, [ebp + 0x3c] */
  edi = (uint32_t)(ebp + 0x3cu);
/* e9e546: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* e9e549: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e54a: fadd dword ptr [ebp - 0x1c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe4u)));
/* e9e54d: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* e9e550: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* e9e553: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* e9e556: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e557: fsub dword ptr [ebp + 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xcu)));
/* e9e55a: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* e9e55d: fsub dword ptr [ebp + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x10u)));
/* e9e560: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e561: fstp dword ptr [ebp + 0x50] */
  WF32((uint32_t)(ebp + 0x50u), ST0); FPOP();
/* e9e564: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* e9e567: fsub dword ptr [ebp + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x14u)));
/* e9e56a: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e56b: mov esi, dword ptr [ebp + 0x7c] */
  esi = R32((uint32_t)(ebp + 0x7cu));
/* e9e56e: fstp dword ptr [ebp + 0x54] */
  WF32((uint32_t)(ebp + 0x54u), ST0); FPOP();
/* e9e571: lea edi, [ebp - 0x14] */
  edi = (uint32_t)(ebp + 0xffffffecu);
/* e9e574: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e9e577: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e578: fsub dword ptr [ebp + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x18u)));
/* e9e57b: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e57c: fstp dword ptr [ebp + 0x58] */
  WF32((uint32_t)(ebp + 0x58u), ST0); FPOP();
/* e9e57f: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9e581: fmul st(2) */
  ST0 = ST0 * STI(2);
/* e9e583: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e584: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9e586: fmul st(4) */
  ST0 = ST0 * STI(4);
/* e9e588: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e589: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9e58b: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* e9e58d: fmul st(5) */
  ST0 = ST0 * STI(5);
/* e9e58f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9e591: fld st(5) */
  { double v = STI(5); FPUSH(v); }
/* e9e593: fmul st(6) */
  ST0 = ST0 * STI(6);
/* e9e595: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9e597: fld dword ptr [ebp + 0x58] */
  { double v = F32((uint32_t)(ebp + 0x58u)); FPUSH(v); }
/* e9e59a: fmul dword ptr [ebp + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x58u)));
/* e9e59d: fld dword ptr [ebp + 0x54] */
  { double v = F32((uint32_t)(ebp + 0x54u)); FPUSH(v); }
/* e9e5a0: fmul dword ptr [ebp + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x54u)));
/* e9e5a3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9e5a5: fld dword ptr [ebp + 0x50] */
  { double v = F32((uint32_t)(ebp + 0x50u)); FPUSH(v); }
/* e9e5a8: fmul dword ptr [ebp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x50u)));
/* e9e5ab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9e5ad: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9e5af: fmul st(3) */
  ST0 = ST0 * STI(3);
/* e9e5b1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9e5b3: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* e9e5b5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e5b7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e5b9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e5bb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e9e5bd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e5bf: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e5c1: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9e5c4: jne 0xe9e5f0 */
  if (!zf) goto L_e9e5f0;
L_e9e5c6: /* e9e5c6: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* e9e5c9: lea esi, [ebp + 0x2c] */
  esi = (uint32_t)(ebp + 0x2cu);
/* e9e5cc: fchs  */
  ST0 = -ST0;
/* e9e5ce: lea edi, [ebp - 0x24] */
  edi = (uint32_t)(ebp + 0xffffffdcu);
/* e9e5d1: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* e9e5d4: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* e9e5d7: fchs  */
  ST0 = -ST0;
/* e9e5d9: fstp dword ptr [ebp + 0x30] */
  WF32((uint32_t)(ebp + 0x30u), ST0); FPOP();
/* e9e5dc: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* e9e5df: fchs  */
  ST0 = -ST0;
/* e9e5e1: fstp dword ptr [ebp + 0x34] */
  WF32((uint32_t)(ebp + 0x34u), ST0); FPOP();
/* e9e5e4: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* e9e5e7: fchs  */
  ST0 = -ST0;
/* e9e5e9: fstp dword ptr [ebp + 0x38] */
  WF32((uint32_t)(ebp + 0x38u), ST0); FPOP();
/* e9e5ec: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e5ed: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e5ee: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e5ef: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
L_e9e5f0: /* e9e5f0: fld dword ptr [ebp + 0x3c] */
  { double v = F32((uint32_t)(ebp + 0x3cu)); FPUSH(v); }
/* e9e5f3: fadd dword ptr [ebp + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xcu)));
/* e9e5f6: fld dword ptr [ebp + 0x40] */
  { double v = F32((uint32_t)(ebp + 0x40u)); FPUSH(v); }
/* e9e5f9: fadd dword ptr [ebp + 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x10u)));
/* e9e5fc: fld dword ptr [ebp + 0x44] */
  { double v = F32((uint32_t)(ebp + 0x44u)); FPUSH(v); }
/* e9e5ff: fadd dword ptr [ebp + 0x14] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x14u)));
/* e9e602: fld dword ptr [ebp + 0x48] */
  { double v = F32((uint32_t)(ebp + 0x48u)); FPUSH(v); }
/* e9e605: fadd dword ptr [ebp + 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x18u)));
/* e9e608: fld dword ptr [ebp + 0xc] */
  { double v = F32((uint32_t)(ebp + 0xcu)); FPUSH(v); }
/* e9e60b: fsub dword ptr [ebp + 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x3cu)));
/* e9e60e: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* e9e611: fsub dword ptr [ebp + 0x40] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x40u)));
/* e9e614: fstp dword ptr [ebp + 0x50] */
  WF32((uint32_t)(ebp + 0x50u), ST0); FPOP();
/* e9e617: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* e9e61a: fsub dword ptr [ebp + 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x44u)));
/* e9e61d: fstp dword ptr [ebp + 0x54] */
  WF32((uint32_t)(ebp + 0x54u), ST0); FPOP();
/* e9e620: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* e9e623: fsub dword ptr [ebp + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0x48u)));
/* e9e626: fstp dword ptr [ebp + 0x58] */
  WF32((uint32_t)(ebp + 0x58u), ST0); FPOP();
/* e9e629: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9e62b: fmul st(2) */
  ST0 = ST0 * STI(2);
/* e9e62d: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9e62f: fmul st(4) */
  ST0 = ST0 * STI(4);
/* e9e631: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9e633: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* e9e635: fmul st(5) */
  ST0 = ST0 * STI(5);
/* e9e637: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9e639: fld st(5) */
  { double v = STI(5); FPUSH(v); }
/* e9e63b: fmul st(6) */
  ST0 = ST0 * STI(6);
/* e9e63d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9e63f: fld dword ptr [ebp + 0x58] */
  { double v = F32((uint32_t)(ebp + 0x58u)); FPUSH(v); }
/* e9e642: fmul dword ptr [ebp + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x58u)));
/* e9e645: fld dword ptr [ebp + 0x54] */
  { double v = F32((uint32_t)(ebp + 0x54u)); FPUSH(v); }
/* e9e648: fmul dword ptr [ebp + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x54u)));
/* e9e64b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9e64d: fld dword ptr [ebp + 0x50] */
  { double v = F32((uint32_t)(ebp + 0x50u)); FPUSH(v); }
/* e9e650: fmul dword ptr [ebp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x50u)));
/* e9e653: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9e655: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9e657: fmul st(3) */
  ST0 = ST0 * STI(3);
/* e9e659: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9e65b: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* e9e65d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e65f: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e661: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e663: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e9e665: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e667: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9e66a: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e66c: jne 0xe9e698 */
  if (!zf) goto L_e9e698;
L_e9e66e: /* e9e66e: fld dword ptr [ebp + 0x3c] */
  { double v = F32((uint32_t)(ebp + 0x3cu)); FPUSH(v); }
/* e9e671: lea esi, [ebp + 0x2c] */
  esi = (uint32_t)(ebp + 0x2cu);
/* e9e674: fchs  */
  ST0 = -ST0;
/* e9e676: lea edi, [ebp + 0x3c] */
  edi = (uint32_t)(ebp + 0x3cu);
/* e9e679: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* e9e67c: fld dword ptr [ebp + 0x40] */
  { double v = F32((uint32_t)(ebp + 0x40u)); FPUSH(v); }
/* e9e67f: fchs  */
  ST0 = -ST0;
/* e9e681: fstp dword ptr [ebp + 0x30] */
  WF32((uint32_t)(ebp + 0x30u), ST0); FPOP();
/* e9e684: fld dword ptr [ebp + 0x44] */
  { double v = F32((uint32_t)(ebp + 0x44u)); FPUSH(v); }
/* e9e687: fchs  */
  ST0 = -ST0;
/* e9e689: fstp dword ptr [ebp + 0x34] */
  WF32((uint32_t)(ebp + 0x34u), ST0); FPOP();
/* e9e68c: fld dword ptr [ebp + 0x48] */
  { double v = F32((uint32_t)(ebp + 0x48u)); FPUSH(v); }
/* e9e68f: fchs  */
  ST0 = -ST0;
/* e9e691: fstp dword ptr [ebp + 0x38] */
  WF32((uint32_t)(ebp + 0x38u), ST0); FPOP();
/* e9e694: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e695: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e696: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e697: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
L_e9e698: /* e9e698: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* e9e69b: fadd dword ptr [ebp + 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x3cu)));
/* e9e69e: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* e9e6a1: fadd dword ptr [ebp + 0x40] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x40u)));
/* e9e6a4: fld dword ptr [ebp - 0xc] */
  { double v = F32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* e9e6a7: fadd dword ptr [ebp + 0x44] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x44u)));
/* e9e6aa: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9e6ad: fadd dword ptr [ebp + 0x48] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x48u)));
/* e9e6b0: fld dword ptr [ebp + 0x3c] */
  { double v = F32((uint32_t)(ebp + 0x3cu)); FPUSH(v); }
/* e9e6b3: fsub dword ptr [ebp - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffecu)));
/* e9e6b6: fld dword ptr [ebp + 0x40] */
  { double v = F32((uint32_t)(ebp + 0x40u)); FPUSH(v); }
/* e9e6b9: fsub dword ptr [ebp - 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffff0u)));
/* e9e6bc: fstp dword ptr [ebp + 0x50] */
  WF32((uint32_t)(ebp + 0x50u), ST0); FPOP();
/* e9e6bf: fld dword ptr [ebp + 0x44] */
  { double v = F32((uint32_t)(ebp + 0x44u)); FPUSH(v); }
/* e9e6c2: fsub dword ptr [ebp - 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffff4u)));
/* e9e6c5: fstp dword ptr [ebp + 0x54] */
  WF32((uint32_t)(ebp + 0x54u), ST0); FPOP();
/* e9e6c8: fld dword ptr [ebp + 0x48] */
  { double v = F32((uint32_t)(ebp + 0x48u)); FPUSH(v); }
/* e9e6cb: fsub dword ptr [ebp - 8] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xfffffff8u)));
/* e9e6ce: fstp dword ptr [ebp + 0x58] */
  WF32((uint32_t)(ebp + 0x58u), ST0); FPOP();
/* e9e6d1: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9e6d3: fmul st(2) */
  ST0 = ST0 * STI(2);
/* e9e6d5: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* e9e6d7: fmul st(4) */
  ST0 = ST0 * STI(4);
/* e9e6d9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9e6db: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* e9e6dd: fmul st(5) */
  ST0 = ST0 * STI(5);
/* e9e6df: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9e6e1: fld st(5) */
  { double v = STI(5); FPUSH(v); }
/* e9e6e3: fmul st(6) */
  ST0 = ST0 * STI(6);
/* e9e6e5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9e6e7: fld dword ptr [ebp + 0x58] */
  { double v = F32((uint32_t)(ebp + 0x58u)); FPUSH(v); }
/* e9e6ea: fmul dword ptr [ebp + 0x58] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x58u)));
/* e9e6ed: fld dword ptr [ebp + 0x54] */
  { double v = F32((uint32_t)(ebp + 0x54u)); FPUSH(v); }
/* e9e6f0: fmul dword ptr [ebp + 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x54u)));
/* e9e6f3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9e6f5: fld dword ptr [ebp + 0x50] */
  { double v = F32((uint32_t)(ebp + 0x50u)); FPUSH(v); }
/* e9e6f8: fmul dword ptr [ebp + 0x50] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x50u)));
/* e9e6fb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9e6fd: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9e6ff: fmul st(3) */
  ST0 = ST0 * STI(3);
/* e9e701: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* e9e703: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* e9e705: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e707: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e709: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e70b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* e9e70d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e70f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9e712: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e714: jne 0xe9e740 */
  if (!zf) goto L_e9e740;
L_e9e716: /* e9e716: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* e9e719: lea esi, [ebp + 0x2c] */
  esi = (uint32_t)(ebp + 0x2cu);
/* e9e71c: fchs  */
  ST0 = -ST0;
/* e9e71e: lea edi, [ebp - 0x14] */
  edi = (uint32_t)(ebp + 0xffffffecu);
/* e9e721: fstp dword ptr [ebp + 0x2c] */
  WF32((uint32_t)(ebp + 0x2cu), ST0); FPOP();
/* e9e724: fld dword ptr [ebp - 0x10] */
  { double v = F32((uint32_t)(ebp + 0xfffffff0u)); FPUSH(v); }
/* e9e727: fchs  */
  ST0 = -ST0;
/* e9e729: fstp dword ptr [ebp + 0x30] */
  WF32((uint32_t)(ebp + 0x30u), ST0); FPOP();
/* e9e72c: fld dword ptr [ebp - 0xc] */
  { double v = F32((uint32_t)(ebp + 0xfffffff4u)); FPUSH(v); }
/* e9e72f: fchs  */
  ST0 = -ST0;
/* e9e731: fstp dword ptr [ebp + 0x34] */
  WF32((uint32_t)(ebp + 0x34u), ST0); FPOP();
/* e9e734: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* e9e737: fchs  */
  ST0 = -ST0;
/* e9e739: fstp dword ptr [ebp + 0x38] */
  WF32((uint32_t)(ebp + 0x38u), ST0); FPOP();
/* e9e73c: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e73d: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e73e: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e73f: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
L_e9e740: /* e9e740: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* e9e743: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e744: lea eax, [ebp + 0x2c] */
  eax = (uint32_t)(ebp + 0x2cu);
/* e9e747: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e748: call 0xe9d250 */
  esp -= 4; W32(esp, 0xe9e74du); SPILL(); f_e9d250(); if (g_unwind) return; RELOAD();
/* e9e74d: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* e9e750: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e751: lea eax, [ebp + 0x2c] */
  eax = (uint32_t)(ebp + 0x2cu);
/* e9e754: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e755: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* e9e758: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e759: call 0xe9d19a */
  esp -= 4; W32(esp, 0xe9e75eu); SPILL(); f_e9d19a(); if (g_unwind) return; RELOAD();
/* e9e75e: lea esi, [ebp + 0x1c] */
  esi = (uint32_t)(ebp + 0x1cu);
/* e9e761: lea edi, [ebp - 4] */
  edi = (uint32_t)(ebp + 0xfffffffcu);
/* e9e764: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e765: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e766: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* e9e769: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e76a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e76b: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* e9e76e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e76f: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e770: call 0xe9d30a */
  esp -= 4; W32(esp, 0xe9e775u); SPILL(); f_e9d30a(); if (g_unwind) return; RELOAD();
/* e9e775: lea eax, [ebp + 0x3c] */
  eax = (uint32_t)(ebp + 0x3cu);
/* e9e778: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e779: lea eax, [ebp + 0x2c] */
  eax = (uint32_t)(ebp + 0x2cu);
/* e9e77c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e77d: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* e9e780: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e781: call 0xe9d19a */
  esp -= 4; W32(esp, 0xe9e786u); SPILL(); f_e9d19a(); if (g_unwind) return; RELOAD();
/* e9e786: lea esi, [ebp + 0x1c] */
  esi = (uint32_t)(ebp + 0x1cu);
/* e9e789: lea edi, [ebp - 4] */
  edi = (uint32_t)(ebp + 0xfffffffcu);
/* e9e78c: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e78d: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e78e: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* e9e791: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e792: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e793: lea eax, [ebp + 0x4c] */
  eax = (uint32_t)(ebp + 0x4cu);
/* e9e796: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e797: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e798: call 0xe9d30a */
  esp -= 4; W32(esp, 0xe9e79du); SPILL(); f_e9d30a(); if (g_unwind) return; RELOAD();
/* e9e79d: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* e9e7a0: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* e9e7a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e7a4: fadd dword ptr [ebp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x4cu)));
/* e9e7a7: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* e9e7aa: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* e9e7ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e7ae: fadd dword ptr [ebp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x50u)));
/* e9e7b1: fstp dword ptr [ebp + 0x20] */
  WF32((uint32_t)(ebp + 0x20u), ST0); FPOP();
/* e9e7b4: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* e9e7b7: fadd dword ptr [ebp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x54u)));
/* e9e7ba: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* e9e7bd: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* e9e7c0: fadd dword ptr [ebp + 0x58] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x58u)));
/* e9e7c3: fld dword ptr [0xeb3514] */
  { double v = F32((uint32_t)(0xeb3514u)); FPUSH(v); }
/* e9e7c9: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9e7cb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9e7cd: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* e9e7d0: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* e9e7d3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9e7d5: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* e9e7d8: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* e9e7db: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9e7dd: fstp dword ptr [ebp + 4] */
  WF32((uint32_t)(ebp + 0x4u), ST0); FPOP();
/* e9e7e0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9e7e2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9e7e4: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* e9e7e7: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e7e9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e7eb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e7ed: call 0xe9d38e */
  esp -= 4; W32(esp, 0xe9e7f2u); SPILL(); f_e9d38e(); if (g_unwind) return; RELOAD();
/* e9e7f2: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* e9e7f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e7f6: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* e9e7f9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e7fa: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* e9e7fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e7fe: call 0xe9d19a */
  esp -= 4; W32(esp, 0xe9e803u); SPILL(); f_e9d19a(); if (g_unwind) return; RELOAD();
/* e9e803: mov edi, dword ptr [ebp + 0x64] */
  edi = R32((uint32_t)(ebp + 0x64u));
/* e9e806: lea esi, [ebp + 0x1c] */
  esi = (uint32_t)(ebp + 0x1cu);
/* e9e809: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e80a: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e80b: lea eax, [ebp + 0x3c] */
  eax = (uint32_t)(ebp + 0x3cu);
/* e9e80e: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e80f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e810: lea eax, [ebp + 0x2c] */
  eax = (uint32_t)(ebp + 0x2cu);
/* e9e813: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e814: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e815: call 0xe9d250 */
  esp -= 4; W32(esp, 0xe9e81au); SPILL(); f_e9d250(); if (g_unwind) return; RELOAD();
/* e9e81a: lea eax, [ebp + 0xc] */
  eax = (uint32_t)(ebp + 0xcu);
/* e9e81d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e81e: lea eax, [ebp + 0x2c] */
  eax = (uint32_t)(ebp + 0x2cu);
/* e9e821: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e822: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* e9e825: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e826: call 0xe9d19a */
  esp -= 4; W32(esp, 0xe9e82bu); SPILL(); f_e9d19a(); if (g_unwind) return; RELOAD();
/* e9e82b: lea esi, [ebp + 0x1c] */
  esi = (uint32_t)(ebp + 0x1cu);
/* e9e82e: lea edi, [ebp - 4] */
  edi = (uint32_t)(ebp + 0xfffffffcu);
/* e9e831: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e832: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e833: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* e9e836: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e837: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e838: lea eax, [ebp - 0x34] */
  eax = (uint32_t)(ebp + 0xffffffccu);
/* e9e83b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e83c: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e83d: call 0xe9d30a */
  esp -= 4; W32(esp, 0xe9e842u); SPILL(); f_e9d30a(); if (g_unwind) return; RELOAD();
/* e9e842: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* e9e845: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e846: lea eax, [ebp + 0x2c] */
  eax = (uint32_t)(ebp + 0x2cu);
/* e9e849: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e84a: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* e9e84d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e84e: call 0xe9d19a */
  esp -= 4; W32(esp, 0xe9e853u); SPILL(); f_e9d19a(); if (g_unwind) return; RELOAD();
/* e9e853: lea esi, [ebp + 0x1c] */
  esi = (uint32_t)(ebp + 0x1cu);
/* e9e856: lea edi, [ebp - 4] */
  edi = (uint32_t)(ebp + 0xfffffffcu);
/* e9e859: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e85a: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e85b: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* e9e85e: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e85f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e860: lea eax, [ebp + 0x4c] */
  eax = (uint32_t)(ebp + 0x4cu);
/* e9e863: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e864: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e865: call 0xe9d30a */
  esp -= 4; W32(esp, 0xe9e86au); SPILL(); f_e9d30a(); if (g_unwind) return; RELOAD();
/* e9e86a: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* e9e86d: fadd dword ptr [ebp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x4cu)));
/* e9e870: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* e9e873: fadd dword ptr [ebp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x50u)));
/* e9e876: fstp dword ptr [ebp + 0x20] */
  WF32((uint32_t)(ebp + 0x20u), ST0); FPOP();
/* e9e879: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* e9e87c: fadd dword ptr [ebp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x54u)));
/* e9e87f: fstp dword ptr [ebp + 0x24] */
  WF32((uint32_t)(ebp + 0x24u), ST0); FPOP();
/* e9e882: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* e9e885: fadd dword ptr [ebp + 0x58] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x58u)));
/* e9e888: fld dword ptr [0xeb3514] */
  { double v = F32((uint32_t)(0xeb3514u)); FPUSH(v); }
/* e9e88e: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* e9e890: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9e892: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* e9e895: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* e9e898: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9e89a: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* e9e89d: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* e9e8a0: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9e8a2: fstp dword ptr [ebp + 4] */
  WF32((uint32_t)(ebp + 0x4u), ST0); FPOP();
/* e9e8a5: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* e9e8a7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* e9e8a9: fstp dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0); FPOP();
/* e9e8ac: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e8ae: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* e9e8b1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e8b3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e8b4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* e9e8b6: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* e9e8b9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e8ba: call 0xe9d38e */
  esp -= 4; W32(esp, 0xe9e8bfu); SPILL(); f_e9d38e(); if (g_unwind) return; RELOAD();
/* e9e8bf: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* e9e8c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e8c3: lea eax, [ebp + 0x3c] */
  eax = (uint32_t)(ebp + 0x3cu);
/* e9e8c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e8c7: lea eax, [ebp + 0x1c] */
  eax = (uint32_t)(ebp + 0x1cu);
/* e9e8ca: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e8cb: call 0xe9d19a */
  esp -= 4; W32(esp, 0xe9e8d0u); SPILL(); f_e9d19a(); if (g_unwind) return; RELOAD();
/* e9e8d0: mov edi, dword ptr [ebp + 0x68] */
  edi = R32((uint32_t)(ebp + 0x68u));
/* e9e8d3: lea esi, [ebp + 0x1c] */
  esi = (uint32_t)(ebp + 0x1cu);
/* e9e8d6: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e8d7: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e8d8: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e8d9: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e8da: mov edi, dword ptr [ebp + 0x6c] */
  edi = R32((uint32_t)(ebp + 0x6cu));
/* e9e8dd: lea esi, [ebp + 0x3c] */
  esi = (uint32_t)(ebp + 0x3cu);
/* e9e8e0: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e8e1: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e8e2: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e8e3: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9e8e4: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9e8e5: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9e8e6: add ebp, 0x5c */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x5cu);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* e9e8e9: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9e8ea: ret 0x1c */
  esp += 32; SPILL(); return;
}

void f_e9e8ed(void) {
  LOAD_REGS();
L_e9e8ed: /* e9e8ed: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9e8ee: mov ebp, esp */
  ebp = esp;
/* e9e8f0: sub esp, 0x3e8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3e8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9e8f6: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9e8f7: lea ecx, [ebp - 0x3e8] */
  ecx = (uint32_t)(ebp + 0xfffffc18u);
/* e9e8fd: call 0xe9ecd9 */
  esp -= 4; W32(esp, 0xe9e902u); SPILL(); f_e9ecd9(); if (g_unwind) return; RELOAD();
/* e9e902: mov edx, dword ptr [ebp + 0x14] */
  edx = R32((uint32_t)(ebp + 0x14u));
/* e9e905: xor esi, esi */
  esi = 0;
/* e9e907: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9e909: je 0xe9e90d */
  if (zf) goto L_e9e90d;
L_e9e90b: /* e9e90b: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
L_e9e90d: /* e9e90d: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* e9e910: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9e912: je 0xe9e916 */
  if (zf) goto L_e9e916;
L_e9e914: /* e9e914: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
L_e9e916: /* e9e916: mov eax, dword ptr [ebp + 0x1c] */
  eax = R32((uint32_t)(ebp + 0x1cu));
/* e9e919: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9e91b: je 0xe9e91f */
  if (zf) goto L_e9e91f;
L_e9e91d: /* e9e91d: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
L_e9e91f: /* e9e91f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e920: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9e921: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* e9e922: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* e9e925: lea ecx, [ebp - 0x3e8] */
  ecx = (uint32_t)(ebp + 0xfffffc18u);
/* e9e92b: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* e9e92d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9e92e: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* e9e931: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* e9e934: call 0xea1147 */
  esp -= 4; W32(esp, 0xe9e939u); SPILL(); f_ea1147(); if (g_unwind) return; RELOAD();
/* e9e939: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9e93b: jge 0xe9e93f */
  if ((sf == of)) goto L_e9e93f;
L_e9e93d: /* e9e93d: mov esi, eax */
  esi = eax;
L_e9e93f: /* e9e93f: lea ecx, [ebp - 0x3e8] */
  ecx = (uint32_t)(ebp + 0xfffffc18u);
/* e9e945: call 0xe9ed82 */
  esp -= 4; W32(esp, 0xe9e94au); SPILL(); f_e9ed82(); if (g_unwind) return; RELOAD();
/* e9e94a: mov eax, esi */
  eax = esi;
/* e9e94c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9e94d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9e94e: ret 0x18 */
  esp += 28; SPILL(); return;
}

void f_e9e951(void) {
  LOAD_REGS();
L_e9e951: /* e9e951: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9e952: mov ebp, esp */
  ebp = esp;
/* e9e954: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9e955: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9e956: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* e9e95a: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* e9e95d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e95e: push 0xeb3518 */
  { uint32_t v = 0xeb3518u; esp -= 4; W32(esp, v); }
/* e9e963: push 0x80000002 */
  { uint32_t v = 0x80000002u; esp -= 4; W32(esp, v); }
/* e9e968: call dword ptr [0xeae004] */
  esp -= 4; W32(esp, 0xe9e96eu); SPILL(); call_ind(R32(0xeae004u)); if (g_unwind) return; /* ADVAPI32!RegOpenKeyA */ RELOAD();
/* e9e96e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9e970: jne 0xe9e9a9 */
  if (!zf) goto L_e9e9a9;
L_e9e972: /* e9e972: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9e973: lea eax, [ebp + 0x14] */
  eax = (uint32_t)(ebp + 0x14u);
/* e9e976: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e977: push dword ptr [ebp + 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0x10u)); esp -= 4; W32(esp, v); }
/* e9e97a: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* e9e97d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e97e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e9e980: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* e9e983: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* e9e986: call dword ptr [0xeae000] */
  esp -= 4; W32(esp, 0xe9e98cu); SPILL(); call_ind(R32(0xeae000u)); if (g_unwind) return; /* ADVAPI32!RegQueryValueExA */ RELOAD();
/* e9e98c: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* e9e98f: mov esi, eax */
  esi = eax;
/* e9e991: call dword ptr [0xeae008] */
  esp -= 4; W32(esp, 0xe9e997u); SPILL(); call_ind(R32(0xeae008u)); if (g_unwind) return; /* ADVAPI32!RegCloseKey */ RELOAD();
/* e9e997: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9e999: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9e99a: jne 0xe9e9a9 */
  if (!zf) goto L_e9e9a9;
L_e9e99c: /* e9e99c: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* e9e99f: cmp eax, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9e9a2: jne 0xe9e9a9 */
  if (!zf) goto L_e9e9a9;
L_e9e9a4: /* e9e9a4: xor eax, eax */
  eax = 0;
/* e9e9a6: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e9e9a7: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9e9a8: ret  */
  esp += 4; SPILL(); return;
L_e9e9a9: /* e9e9a9: xor eax, eax */
  eax = 0;
/* e9e9ab: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9e9ac: ret  */
  esp += 4; SPILL(); return;
}

void f_e9e9ad(void) {
  LOAD_REGS();
L_e9e9ad: /* e9e9ad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9e9ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9e9af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9e9b0: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9e9b1: xor eax, eax */
  eax = 0;
/* e9e9b3: pushal  */
  { uint32_t s = esp; esp -= 32; W32(esp + 28, eax); W32(esp + 24, ecx); W32(esp + 20, edx); W32(esp + 16, ebx);
    W32(esp + 12, s); W32(esp + 8, ebp); W32(esp + 4, esi); W32(esp, edi); }
/* e9e9b4: mov eax, 1 */
  eax = 0x1u;
/* e9e9b9: cpuid  */
  { uint32_t q[4]; host_cpuid(eax, ecx, q); eax = q[0]; ebx = q[1]; ecx = q[2]; edx = q[3]; }
/* e9e9bb: test edx, 0x800000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x800000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9e9c1: popal  */
  edi = R32(esp); esi = R32(esp + 4); ebp = R32(esp + 8); ebx = R32(esp + 16); edx = R32(esp + 20);
  ecx = R32(esp + 24); eax = R32(esp + 28); esp += 32;
/* e9e9c2: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e9e9c5: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* e9e9c9: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* e9e9cd: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9e9ce: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9e9cf: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9e9d0: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9e9d1: ret  */
  esp += 4; SPILL(); return;
}

void f_e9e9d2(void) {
  LOAD_REGS();
L_e9e9d2: /* e9e9d2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9e9d3: mov ebp, esp */
  ebp = esp;
/* e9e9d5: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9e9d8: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9e9d9: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* e9e9dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e9dd: push 0xeb3518 */
  { uint32_t v = 0xeb3518u; esp -= 4; W32(esp, v); }
/* e9e9e2: push 0x80000002 */
  { uint32_t v = 0x80000002u; esp -= 4; W32(esp, v); }
/* e9e9e7: call dword ptr [0xeae004] */
  esp -= 4; W32(esp, 0xe9e9edu); SPILL(); call_ind(R32(0xeae004u)); if (g_unwind) return; /* ADVAPI32!RegOpenKeyA */ RELOAD();
/* e9e9ed: xor edi, edi */
  edi = 0;
/* e9e9ef: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9e9f1: jne 0xe9ea40 */
  if (!zf) goto L_e9ea40;
L_e9e9f3: /* e9e9f3: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* e9e9f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e9f7: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* e9e9fa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e9fb: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* e9e9fe: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9e9ff: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9ea00: push 0xeb3534 */
  { uint32_t v = 0xeb3534u; esp -= 4; W32(esp, v); }
/* e9ea05: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* e9ea08: mov dword ptr [ebp - 8], 4 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x4u);
/* e9ea0f: call dword ptr [0xeae000] */
  esp -= 4; W32(esp, 0xe9ea15u); SPILL(); call_ind(R32(0xeae000u)); if (g_unwind) return; /* ADVAPI32!RegQueryValueExA */ RELOAD();
/* e9ea15: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9ea17: jne 0xe9ea37 */
  if (!zf) goto L_e9ea37;
L_e9ea19: /* e9ea19: cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9ea1d: jne 0xe9ea37 */
  if (!zf) goto L_e9ea37;
L_e9ea1f: /* e9ea1f: cmp dword ptr [ebp - 0x10], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9ea22: je 0xe9ea37 */
  if (zf) goto L_e9ea37;
L_e9ea24: /* e9ea24: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* e9ea27: call dword ptr [0xeae008] */
  esp -= 4; W32(esp, 0xe9ea2du); SPILL(); call_ind(R32(0xeae008u)); if (g_unwind) return; /* ADVAPI32!RegCloseKey */ RELOAD();
/* e9ea2d: mov dword ptr [0xeba224], edi */
  W32((uint32_t)(0xeba224u), edi);
/* e9ea33: xor eax, eax */
  eax = 0;
/* e9ea35: jmp 0xe9ea68 */
  goto L_e9ea68;
L_e9ea37: /* e9ea37: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* e9ea3a: call dword ptr [0xeae008] */
  esp -= 4; W32(esp, 0xe9ea40u); SPILL(); call_ind(R32(0xeae008u)); if (g_unwind) return; /* ADVAPI32!RegCloseKey */ RELOAD();
L_e9ea40: /* e9ea40: cmp dword ptr [0xeba224], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xeba224u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9ea46: jge 0xe9ea63 */
  if ((sf == of)) goto L_e9ea63;
L_e9ea48: /* e9ea48: mov dword ptr [0xeba224], edi */
  W32((uint32_t)(0xeba224u), edi);
/* e9ea4e: call 0xe9e9ad */
  esp -= 4; W32(esp, 0xe9ea53u); SPILL(); f_e9e9ad(); if (g_unwind) return; RELOAD();
/* e9ea53: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9ea55: je 0xe9ea63 */
  if (zf) goto L_e9ea63;
L_e9ea57: /* e9ea57: emms  */
/* e9ea59: mov dword ptr [0xeba224], 1 */
  W32((uint32_t)(0xeba224u), 0x1u);
L_e9ea63: /* e9ea63: mov eax, dword ptr [0xeba224] */
  eax = R32((uint32_t)(0xeba224u));
L_e9ea68: /* e9ea68: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9ea69: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9ea6a: ret  */
  esp += 4; SPILL(); return;
}

void f_e9ea6b(void) {
  LOAD_REGS();
L_e9ea6b: /* e9ea6b: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9ea6c: mov ebp, esp */
  ebp = esp;
/* e9ea6e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9ea6f: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* e9ea73: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9ea74: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9ea75: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9ea76: pushal  */
  { uint32_t s = esp; esp -= 32; W32(esp + 28, eax); W32(esp + 24, ecx); W32(esp + 20, edx); W32(esp + 16, ebx);
    W32(esp + 12, s); W32(esp + 8, ebp); W32(esp + 4, esi); W32(esp, edi); }
/* e9ea77: mov eax, 0x80000000 */
  eax = 0x80000000u;
/* e9ea7c: cpuid  */
  { uint32_t q[4]; host_cpuid(eax, ecx, q); eax = q[0]; ebx = q[1]; ecx = q[2]; edx = q[3]; }
/* e9ea7e: cmp eax, 0x80000001 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000001u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e9ea83: jb 0xe9ea9a */
  if (cf) goto L_e9ea9a;
L_e9ea85: /* e9ea85: mov eax, 0x80000001 */
  eax = 0x80000001u;
/* e9ea8a: cpuid  */
  { uint32_t q[4]; host_cpuid(eax, ecx, q); eax = q[0]; ebx = q[1]; ecx = q[2]; edx = q[3]; }
/* e9ea8c: xor eax, eax */
  eax = 0;
/* e9ea8e: test edx, 0x80000000 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9ea94: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e9ea97: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
L_e9ea9a: /* e9ea9a: popal  */
  edi = R32(esp); esi = R32(esp + 4); ebp = R32(esp + 8); ebx = R32(esp + 16); edx = R32(esp + 20);
  ecx = R32(esp + 24); eax = R32(esp + 28); esp += 32;
/* e9ea9b: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* e9ea9e: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9ea9f: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9eaa0: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9eaa1: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9eaa2: ret  */
  esp += 4; SPILL(); return;
}

void f_e9eaa3(void) {
  LOAD_REGS();
L_e9eaa3: /* e9eaa3: mov eax, 0xead2e3 */
  eax = 0xead2e3u;
/* e9eaa8: call 0xeac854 */
  esp -= 4; W32(esp, 0xe9eaadu); SPILL(); f_eac854(); if (g_unwind) return; RELOAD();
/* e9eaad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9eaae: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9eab1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9eab2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9eab3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9eab4: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* e9eab7: and dword ptr [ebp - 0x14], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffecu), r);
  }
/* e9eabb: mov esi, 0xeb3540 */
  esi = 0xeb3540u;
/* e9eac0: lea edi, [ebp - 0x24] */
  edi = (uint32_t)(ebp + 0xffffffdcu);
/* e9eac3: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9eac4: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9eac5: movsd dword ptr es:[edi], dword ptr [esi] */
  W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4);
/* e9eac6: movsb byte ptr es:[edi], byte ptr [esi] */
  W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1);
/* e9eac7: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* e9eacb: xor eax, eax */
  eax = 0;
/* e9eacd: cpuid  */
  { uint32_t q[4]; host_cpuid(eax, ecx, q); eax = q[0]; ebx = q[1]; ecx = q[2]; edx = q[3]; }
/* e9eacf: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* e9ead2: mov dword ptr [ebp - 0x38], ebx */
  W32((uint32_t)(ebp + 0xffffffc8u), ebx);
/* e9ead5: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* e9ead8: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* e9eadb: jmp 0xe9eae9 */
  goto L_e9eae9;
L_e9eae9: /* e9eae9: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* e9eaed: jmp 0xe9eaf4 */
  goto L_e9eaf4;
L_e9eaf4: /* e9eaf4: cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9eaf8: jne 0xe9eaff */
  if (!zf) goto L_e9eaff;
L_e9eafa: /* e9eafa: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e9eafd: jmp 0xe9eb39 */
  goto L_e9eb39;
L_e9eaff: /* e9eaff: mov eax, 1 */
  eax = 0x1u;
/* e9eb04: cpuid  */
  { uint32_t q[4]; host_cpuid(eax, ecx, q); eax = q[0]; ebx = q[1]; ecx = q[2]; edx = q[3]; }
/* e9eb06: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* e9eb09: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* e9eb0c: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* e9eb0f: and eax, 0x2000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e9eb14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9eb16: je 0xe9eb21 */
  if (zf) goto L_e9eb21;
L_e9eb18: /* e9eb18: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e9eb1b: or eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e9eb1e: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_e9eb21: /* e9eb21: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* e9eb24: and eax, 0x4000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e9eb29: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9eb2b: je 0xe9eb36 */
  if (zf) goto L_e9eb36;
L_e9eb2d: /* e9eb2d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e9eb30: or eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e9eb33: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_e9eb36: /* e9eb36: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_e9eb39: /* e9eb39: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e9eb3c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e9eb43: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9eb44: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9eb45: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9eb46: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9eb47: ret  */
  esp += 4; SPILL(); return;
}

void f_e9eadd(void) {
  LOAD_REGS();
L_e9eadd: /* e9eadd: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e9eae0: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* e9eae3: mov eax, 0xe9eaef */
  eax = 0xe9eaefu;
/* e9eae8: ret  */
  esp += 4; SPILL(); return;
}

void f_e9eaef(void) {
  LOAD_REGS();
L_e9eaef: /* e9eaef: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* e9eaf2: jmp 0xe9eb39 */
  goto L_e9eb39;
L_e9eb39: /* e9eb39: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e9eb3c: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e9eb43: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9eb44: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9eb45: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9eb46: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9eb47: ret  */
  esp += 4; SPILL(); return;
}

void f_e9eb48(void) {
  LOAD_REGS();
L_e9eb48: /* e9eb48: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9eb49: lea ebp, [esp - 0x74] */
  ebp = (uint32_t)(esp + 0xffffff8cu);
/* e9eb4d: sub esp, 0x98 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x98u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9eb53: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9eb54: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9eb55: push 0x25 */
  { uint32_t v = 0x25u; esp -= 4; W32(esp, v); }
/* e9eb57: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9eb58: xor eax, eax */
  eax = 0;
/* e9eb5a: lea edi, [ebp - 0x24] */
  edi = (uint32_t)(ebp + 0xffffffdcu);
/* e9eb5d: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* e9eb5f: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* e9eb62: xor bl, bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0) & 0xffu);
/* e9eb64: and byte ptr [ebp + 0x73], bl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x73u))); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0x73u), r);
  }
/* e9eb67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9eb68: mov dword ptr [ebp - 0x24], 0x94 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x94u);
/* e9eb6f: call dword ptr [0xeae304] */
  esp -= 4; W32(esp, 0xe9eb75u); SPILL(); call_ind(R32(0xeae304u)); if (g_unwind) return; /* KERNEL32!GetVersionExA */ RELOAD();
/* e9eb75: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9eb77: jne 0xe9eb7f */
  if (!zf) goto L_e9eb7f;
L_e9eb79: /* e9eb79: inc bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a + 1);
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(r) & 0xffu);
  }
/* e9eb7b: mov byte ptr [ebp + 0x73], 1 */
  W8((uint32_t)(ebp + 0x73u), 0x1u);
L_e9eb7f: /* e9eb7f: cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9eb83: jne 0xe9eba1 */
  if (!zf) goto L_e9eba1;
L_e9eb85: /* e9eb85: cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe0u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e9eb89: ja 0xe9ebab */
  if ((!cf && !zf)) goto L_e9ebab;
L_e9eb8b: /* e9eb8b: jne 0xe9eb9b */
  if (!zf) goto L_e9eb9b;
L_e9eb8d: /* e9eb8d: cmp dword ptr [ebp - 0x1c], 0xa */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e9eb91: jb 0xe9eb9b */
  if (cf) goto L_e9eb9b;
L_e9eb93: /* e9eb93: cmp word ptr [ebp - 0x18], 0x55d */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebp + 0xffffffe8u))); uint16_t b = (uint16_t)(0x55du);
  uint16_t r = (uint16_t)(a - b);
  cf = (a) < (b);
  }
/* e9eb99: jae 0xe9ebab */
  if (!cf) goto L_e9ebab;
L_e9eb9b: /* e9eb9b: mov byte ptr [ebp + 0x73], 1 */
  W8((uint32_t)(ebp + 0x73u), 0x1u);
/* e9eb9f: jmp 0xe9ebab */
  goto L_e9ebab;
L_e9eba1: /* e9eba1: cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffecu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9eba5: jne 0xe9ebc1 */
  if (!zf) goto L_e9ebc1;
L_e9eba7: /* e9eba7: test bl, bl */
  { uint8_t a = (uint8_t)((ebx & 0xffu)); uint8_t b = (uint8_t)((ebx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9eba9: je 0xe9ebdc */
  if (zf) goto L_e9ebdc;
L_e9ebab: /* e9ebab: mov eax, dword ptr [ebp + 0x7c] */
  eax = R32((uint32_t)(ebp + 0x7cu));
/* e9ebae: sub eax, 6 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e9ebb1: je 0xe9ebcc */
  if (zf) goto L_e9ebcc;
L_e9ebb3: /* e9ebb3: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  eax = r;
  }
/* e9ebb4: je 0xe9ebc5 */
  if (zf) goto L_e9ebc5;
L_e9ebb6: /* e9ebb6: sub eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  eax = r;
  }
/* e9ebb9: jne 0xe9ebc1 */
  if (!zf) goto L_e9ebc1;
L_e9ebbb: /* e9ebbb: cmp byte ptr [ebp + 0x73], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x73u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e9ebbf: je 0xe9ebed */
  if (zf) goto L_e9ebed;
L_e9ebc1: /* e9ebc1: xor eax, eax */
  eax = 0;
/* e9ebc3: jmp 0xe9ebf5 */
  goto L_e9ebf5;
L_e9ebc5: /* e9ebc5: call 0xe9ea6b */
  esp -= 4; W32(esp, 0xe9ebcau); SPILL(); f_e9ea6b(); if (g_unwind) return; RELOAD();
/* e9ebca: jmp 0xe9ebf5 */
  goto L_e9ebf5;
L_e9ebcc: /* e9ebcc: cmp byte ptr [ebp + 0x73], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0x73u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e9ebd0: jne 0xe9ebc1 */
  if (!zf) goto L_e9ebc1;
L_e9ebd2: /* e9ebd2: call 0xe9eaa3 */
  esp -= 4; W32(esp, 0xe9ebd7u); SPILL(); f_e9eaa3(); if (g_unwind) return; RELOAD();
/* e9ebd7: and eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e9ebda: jmp 0xe9ebf5 */
  goto L_e9ebf5;
L_e9ebdc: /* e9ebdc: cmp dword ptr [ebp + 0x7c], 0xa */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x7cu))); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9ebe0: je 0xe9ebed */
  if (zf) goto L_e9ebed;
L_e9ebe2: /* e9ebe2: push dword ptr [ebp + 0x7c] */
  { uint32_t v = R32((uint32_t)(ebp + 0x7cu)); esp -= 4; W32(esp, v); }
/* e9ebe5: call dword ptr [0xeae300] */
  esp -= 4; W32(esp, 0xe9ebebu); SPILL(); call_ind(R32(0xeae300u)); if (g_unwind) return; /* KERNEL32!IsProcessorFeaturePresent */ RELOAD();
/* e9ebeb: jmp 0xe9ebf5 */
  goto L_e9ebf5;
L_e9ebed: /* e9ebed: call 0xe9eaa3 */
  esp -= 4; W32(esp, 0xe9ebf2u); SPILL(); f_e9eaa3(); if (g_unwind) return; RELOAD();
/* e9ebf2: and eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
L_e9ebf5: /* e9ebf5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9ebf6: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9ebf7: add ebp, 0x74 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x74u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* e9ebfa: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9ebfb: ret  */
  esp += 4; SPILL(); return;
}

void f_e9ebfc(void) {
  LOAD_REGS();
L_e9ebfc: /* e9ebfc: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9ebfd: mov ebp, esp */
  ebp = esp;
/* e9ebff: cmp dword ptr [ebp + 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9ec03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9ec04: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9ec05: jne 0xe9ec25 */
  if (!zf) goto L_e9ec25;
L_e9ec07: /* e9ec07: push 0x39 */
  { uint32_t v = 0x39u; esp -= 4; W32(esp, v); }
/* e9ec09: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9ec0a: mov esi, 0xeba140 */
  esi = 0xeba140u;
/* e9ec0f: mov edi, 0xeba058 */
  edi = 0xeba058u;
/* e9ec14: mov dword ptr [0xeba228], 0xffff */
  W32((uint32_t)(0xeba228u), 0xffffu);
/* e9ec1e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e9ec20: jmp 0xe9ecce */
  goto L_e9ecce;
L_e9ec25: /* e9ec25: cmp dword ptr [0xeba228], 0xffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xeba228u))); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9ec2f: jne 0xe9ecce */
  if (!zf) goto L_e9ecce;
L_e9ec35: /* e9ec35: and dword ptr [0xeba228], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0xeba228u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(0xeba228u), r);
  }
/* e9ec3c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9ec3d: push 0x39 */
  { uint32_t v = 0x39u; esp -= 4; W32(esp, v); }
/* e9ec3f: mov ebx, 0xeba058 */
  ebx = 0xeba058u;
/* e9ec44: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9ec45: mov esi, 0xeba140 */
  esi = 0xeba140u;
/* e9ec4a: mov edi, ebx */
  edi = ebx;
/* e9ec4c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9ec4d: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e9ec4f: call 0xea1f87 */
  esp -= 4; W32(esp, 0xe9ec54u); SPILL(); f_ea1f87(); if (g_unwind) return; RELOAD();
/* e9ec54: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e9ec56: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* e9ec59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9ec5a: push 0xeb3550 */
  { uint32_t v = 0xeb3550u; esp -= 4; W32(esp, v); }
/* e9ec5f: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e9ec61: call 0xe9e951 */
  esp -= 4; W32(esp, 0xe9ec66u); SPILL(); f_e9e951(); if (g_unwind) return; RELOAD();
/* e9ec66: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9ec69: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9ec6b: jne 0xe9ec70 */
  if (!zf) goto L_e9ec70;
L_e9ec6d: /* e9ec6d: and dword ptr [ebp + 8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0x8u), r);
  }
L_e9ec70: /* e9ec70: xor esi, esi */
  esi = 0;
/* e9ec72: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e9ec73: cmp dword ptr [ebp + 8], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9ec76: je 0xe9eccd */
  if (zf) goto L_e9eccd;
L_e9ec78: /* e9ec78: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* e9ec7a: call 0xe9eb48 */
  esp -= 4; W32(esp, 0xe9ec7fu); SPILL(); f_e9eb48(); if (g_unwind) return; RELOAD();
/* e9ec7f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9ec81: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9ec82: je 0xe9ec92 */
  if (zf) goto L_e9ec92;
L_e9ec84: /* e9ec84: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9ec85: call 0xea1905 */
  esp -= 4; W32(esp, 0xe9ec8au); SPILL(); f_ea1905(); if (g_unwind) return; RELOAD();
/* e9ec8a: mov dword ptr [0xeba228], esi */
  W32((uint32_t)(0xeba228u), esi);
/* e9ec90: jmp 0xe9eccc */
  goto L_e9eccc;
L_e9ec92: /* e9ec92: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* e9ec94: call 0xe9eb48 */
  esp -= 4; W32(esp, 0xe9ec99u); SPILL(); f_e9eb48(); if (g_unwind) return; RELOAD();
/* e9ec99: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9ec9b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9ec9c: je 0xe9ecb0 */
  if (zf) goto L_e9ecb0;
L_e9ec9e: /* e9ec9e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9ec9f: call 0xea1720 */
  esp -= 4; W32(esp, 0xe9eca4u); SPILL(); f_ea1720(); if (g_unwind) return; RELOAD();
/* e9eca4: mov dword ptr [0xeba228], 2 */
  W32((uint32_t)(0xeba228u), 0x2u);
/* e9ecae: jmp 0xe9eccc */
  goto L_e9eccc;
L_e9ecb0: /* e9ecb0: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e9ecb2: call 0xe9eb48 */
  esp -= 4; W32(esp, 0xe9ecb7u); SPILL(); f_e9eb48(); if (g_unwind) return; RELOAD();
/* e9ecb7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9ecb9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9ecba: je 0xe9eccd */
  if (zf) goto L_e9eccd;
L_e9ecbc: /* e9ecbc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9ecbd: call 0xea1610 */
  esp -= 4; W32(esp, 0xe9ecc2u); SPILL(); f_ea1610(); if (g_unwind) return; RELOAD();
/* e9ecc2: mov dword ptr [0xeba228], 3 */
  W32((uint32_t)(0xeba228u), 0x3u);
L_e9eccc: /* e9eccc: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_e9eccd: /* e9eccd: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_e9ecce: /* e9ecce: mov eax, dword ptr [0xeba228] */
  eax = R32((uint32_t)(0xeba228u));
/* e9ecd3: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9ecd4: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9ecd5: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9ecd6: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e9ecd9(void) {
  LOAD_REGS();
L_e9ecd9: /* e9ecd9: mov eax, 0xead342 */
  eax = 0xead342u;
/* e9ecde: call 0xeac854 */
  esp -= 4; W32(esp, 0xe9ece3u); SPILL(); f_eac854(); if (g_unwind) return; RELOAD();
/* e9ece3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9ece4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9ece5: mov esi, ecx */
  esi = ecx;
/* e9ece7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9ece8: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* e9eceb: call 0xea2083 */
  esp -= 4; W32(esp, 0xe9ecf0u); SPILL(); f_ea2083(); if (g_unwind) return; RELOAD();
/* e9ecf0: xor edi, edi */
  edi = 0;
/* e9ecf2: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* e9ecf5: mov dword ptr [ebp - 4], edi */
  W32((uint32_t)(ebp + 0xfffffffcu), edi);
/* e9ecf8: call 0xea1fc3 */
  esp -= 4; W32(esp, 0xe9ecfdu); SPILL(); f_ea1fc3(); if (g_unwind) return; RELOAD();
/* e9ecfd: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* e9ed00: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* e9ed04: call 0xea1fc3 */
  esp -= 4; W32(esp, 0xe9ed09u); SPILL(); f_ea1fc3(); if (g_unwind) return; RELOAD();
/* e9ed09: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* e9ed0c: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* e9ed10: call 0xea1fc3 */
  esp -= 4; W32(esp, 0xe9ed15u); SPILL(); f_ea1fc3(); if (g_unwind) return; RELOAD();
/* e9ed15: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* e9ed18: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* e9ed1c: call 0xea1fc3 */
  esp -= 4; W32(esp, 0xe9ed21u); SPILL(); f_ea1fc3(); if (g_unwind) return; RELOAD();
/* e9ed21: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* e9ed24: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* e9ed28: call 0xea1fc3 */
  esp -= 4; W32(esp, 0xe9ed2du); SPILL(); f_ea1fc3(); if (g_unwind) return; RELOAD();
/* e9ed2d: lea ecx, [esi + 0x64] */
  ecx = (uint32_t)(esi + 0x64u);
/* e9ed30: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* e9ed34: call 0xea1fc3 */
  esp -= 4; W32(esp, 0xe9ed39u); SPILL(); f_ea1fc3(); if (g_unwind) return; RELOAD();
/* e9ed39: lea ecx, [esi + 0x74] */
  ecx = (uint32_t)(esi + 0x74u);
/* e9ed3c: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* e9ed40: call 0xea1fc3 */
  esp -= 4; W32(esp, 0xe9ed45u); SPILL(); f_ea1fc3(); if (g_unwind) return; RELOAD();
/* e9ed45: lea ecx, [esi + 0x84] */
  ecx = (uint32_t)(esi + 0x84u);
/* e9ed4b: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* e9ed4f: call 0xea2083 */
  esp -= 4; W32(esp, 0xe9ed54u); SPILL(); f_ea2083(); if (g_unwind) return; RELOAD();
/* e9ed54: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e9ed57: mov dword ptr [0xebee90], esi */
  W32((uint32_t)(0xebee90u), esi);
/* e9ed5d: mov dword ptr [esi + 0x98], edi */
  W32((uint32_t)(esi + 0x98u), edi);
/* e9ed63: mov dword ptr [esi + 0x9c], edi */
  W32((uint32_t)(esi + 0x9cu), edi);
/* e9ed69: mov dword ptr [esi + 0xa0], edi */
  W32((uint32_t)(esi + 0xa0u), edi);
/* e9ed6f: mov dword ptr [esi + 0xa4], edi */
  W32((uint32_t)(esi + 0xa4u), edi);
/* e9ed75: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9ed76: mov eax, esi */
  eax = esi;
/* e9ed78: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9ed79: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e9ed80: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9ed81: ret  */
  esp += 4; SPILL(); return;
}

void f_e9ed82(void) {
  LOAD_REGS();
L_e9ed82: /* e9ed82: mov eax, 0xead342 */
  eax = 0xead342u;
/* e9ed87: call 0xeac854 */
  esp -= 4; W32(esp, 0xe9ed8cu); SPILL(); f_eac854(); if (g_unwind) return; RELOAD();
/* e9ed8c: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9ed8d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9ed8e: mov esi, ecx */
  esi = ecx;
/* e9ed90: mov dword ptr [ebp - 0x10], esi */
  W32((uint32_t)(ebp + 0xfffffff0u), esi);
/* e9ed93: lea ecx, [esi + 0x84] */
  ecx = (uint32_t)(esi + 0x84u);
/* e9ed99: mov dword ptr [ebp - 4], 7 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* e9eda0: call 0xea2096 */
  esp -= 4; W32(esp, 0xe9eda5u); SPILL(); f_ea2096(); if (g_unwind) return; RELOAD();
/* e9eda5: lea ecx, [esi + 0x74] */
  ecx = (uint32_t)(esi + 0x74u);
/* e9eda8: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* e9edac: call 0xea1fd3 */
  esp -= 4; W32(esp, 0xe9edb1u); SPILL(); f_ea1fd3(); if (g_unwind) return; RELOAD();
/* e9edb1: lea ecx, [esi + 0x64] */
  ecx = (uint32_t)(esi + 0x64u);
/* e9edb4: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* e9edb8: call 0xea1fd3 */
  esp -= 4; W32(esp, 0xe9edbdu); SPILL(); f_ea1fd3(); if (g_unwind) return; RELOAD();
/* e9edbd: lea ecx, [esi + 0x54] */
  ecx = (uint32_t)(esi + 0x54u);
/* e9edc0: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* e9edc4: call 0xea1fd3 */
  esp -= 4; W32(esp, 0xe9edc9u); SPILL(); f_ea1fd3(); if (g_unwind) return; RELOAD();
/* e9edc9: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* e9edcc: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* e9edd0: call 0xea1fd3 */
  esp -= 4; W32(esp, 0xe9edd5u); SPILL(); f_ea1fd3(); if (g_unwind) return; RELOAD();
/* e9edd5: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* e9edd8: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* e9eddc: call 0xea1fd3 */
  esp -= 4; W32(esp, 0xe9ede1u); SPILL(); f_ea1fd3(); if (g_unwind) return; RELOAD();
/* e9ede1: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* e9ede4: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* e9ede8: call 0xea1fd3 */
  esp -= 4; W32(esp, 0xe9ededu); SPILL(); f_ea1fd3(); if (g_unwind) return; RELOAD();
/* e9eded: and byte ptr [ebp - 4], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffcu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* e9edf1: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* e9edf4: call 0xea1fd3 */
  esp -= 4; W32(esp, 0xe9edf9u); SPILL(); f_ea1fd3(); if (g_unwind) return; RELOAD();
/* e9edf9: or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* e9edfd: mov ecx, esi */
  ecx = esi;
/* e9edff: call 0xea2096 */
  esp -= 4; W32(esp, 0xe9ee04u); SPILL(); f_ea2096(); if (g_unwind) return; RELOAD();
/* e9ee04: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e9ee07: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9ee08: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* e9ee0f: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9ee10: ret  */
  esp += 4; SPILL(); return;
}

void f_e9ee11(void) {
  LOAD_REGS();
L_e9ee11: /* e9ee11: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9ee12: mov ebp, esp */
  ebp = esp;
/* e9ee14: sub esp, 0x200 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x200u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9ee1a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9ee1b: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9ee1c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9ee1d: lea eax, [ebp + 0x10] */
  eax = (uint32_t)(ebp + 0x10u);
/* e9ee20: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9ee21: push dword ptr [ebp + 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xcu)); esp -= 4; W32(esp, v); }
/* e9ee24: mov esi, 0x100 */
  esi = 0x100u;
/* e9ee29: lea eax, [ebp - 0x200] */
  eax = (uint32_t)(ebp + 0xfffffe00u);
/* e9ee2f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9ee30: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9ee31: call 0xeac874 */
  esp -= 4; W32(esp, 0xe9ee36u); SPILL(); f_eac874(); if (g_unwind) return; RELOAD();
/* e9ee36: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* e9ee39: and byte ptr [ebp - 0x101], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffeffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xfffffeffu), r);
  }
/* e9ee40: xor edx, edx */
  edx = 0;
/* e9ee42: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9ee45: cmp dword ptr [ebx + 0x3d8], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x3d8u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9ee4b: je 0xe9eedb */
  if (zf) goto L_e9eedb;
L_e9ee51: /* e9ee51: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* e9ee53: mov edi, 0xeb3628 */
  edi = 0xeb3628u;
/* e9ee58: lea esi, [ebp - 0x200] */
  esi = (uint32_t)(ebp + 0xfffffe00u);
/* e9ee5e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9ee5f: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9ee61: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9ee63: jne 0xe9eed6 */
  if (!zf) goto L_e9eed6;
L_e9ee65: /* e9ee65: mov eax, dword ptr [ebx + 0x3dc] */
  eax = R32((uint32_t)(ebx + 0x3dcu));
/* e9ee6b: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9ee6d: jne 0xe9ee83 */
  if (!zf) goto L_e9ee83;
L_e9ee6f: /* e9ee6f: push dword ptr [ebx + 0x1d0] */
  { uint32_t v = R32((uint32_t)(ebx + 0x1d0u)); esp -= 4; W32(esp, v); }
/* e9ee75: lea eax, [ebx + 0x1d4] */
  eax = (uint32_t)(ebx + 0x1d4u);
/* e9ee7b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9ee7c: push 0xeb35f4 */
  { uint32_t v = 0xeb35f4u; esp -= 4; W32(esp, v); }
/* e9ee81: jmp 0xe9eeb1 */
  goto L_e9eeb1;
L_e9ee83: /* e9ee83: cmp dword ptr [ebx + 0xa0], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xa0u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9ee89: je 0xe9eec7 */
  if (zf) goto L_e9eec7;
L_e9ee8b: /* e9ee8b: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e9ee8d: mov edi, 0xeb35f0 */
  edi = 0xeb35f0u;
/* e9ee92: lea esi, [ebx + 0xc8] */
  esi = (uint32_t)(ebx + 0xc8u);
/* e9ee98: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9ee99: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9ee9b: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9ee9d: jne 0xe9eec7 */
  if (!zf) goto L_e9eec7;
L_e9ee9f: /* e9ee9f: push dword ptr [ebx + 0x1d0] */
  { uint32_t v = R32((uint32_t)(ebx + 0x1d0u)); esp -= 4; W32(esp, v); }
/* e9eea5: lea eax, [ebx + 0x1d4] */
  eax = (uint32_t)(ebx + 0x1d4u);
/* e9eeab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9eeac: push 0xeb35b0 */
  { uint32_t v = 0xeb35b0u; esp -= 4; W32(esp, v); }
L_e9eeb1: /* e9eeb1: lea eax, [ebp - 0x100] */
  eax = (uint32_t)(ebp + 0xffffff00u);
/* e9eeb7: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* e9eebc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9eebd: call 0xeac84e */
  esp -= 4; W32(esp, 0xe9eec2u); SPILL(); f_eac84e(); if (g_unwind) return; RELOAD();
/* e9eec2: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9eec5: jmp 0xe9ef1c */
  goto L_e9ef1c;
L_e9eec7: /* e9eec7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9eec8: lea eax, [ebx + 0x1d4] */
  eax = (uint32_t)(ebx + 0x1d4u);
/* e9eece: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9eecf: push 0xeb3580 */
  { uint32_t v = 0xeb3580u; esp -= 4; W32(esp, v); }
/* e9eed4: jmp 0xe9eeb1 */
  goto L_e9eeb1;
L_e9eed6: /* e9eed6: mov esi, 0x100 */
  esi = 0x100u;
L_e9eedb: /* e9eedb: cmp dword ptr [ebx + 0x3e0], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x3e0u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9eee1: je 0xe9eeeb */
  if (zf) goto L_e9eeeb;
L_e9eee3: /* e9eee3: mov eax, dword ptr [ebx + 0x3e4] */
  eax = R32((uint32_t)(ebx + 0x3e4u));
/* e9eee9: jmp 0xe9eef1 */
  goto L_e9eef1;
L_e9eeeb: /* e9eeeb: mov eax, dword ptr [ebx + 0x1d0] */
  eax = R32((uint32_t)(ebx + 0x1d0u));
L_e9eef1: /* e9eef1: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9eef3: jne 0xe9eef8 */
  if (!zf) goto L_e9eef8;
L_e9eef5: /* e9eef5: xor eax, eax */
  eax = 0;
/* e9eef7: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_e9eef8: /* e9eef8: lea ecx, [ebp - 0x200] */
  ecx = (uint32_t)(ebp + 0xfffffe00u);
/* e9eefe: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9eeff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9ef00: lea eax, [ebx + 0x1d4] */
  eax = (uint32_t)(ebx + 0x1d4u);
/* e9ef06: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9ef07: push 0xeb3560 */
  { uint32_t v = 0xeb3560u; esp -= 4; W32(esp, v); }
/* e9ef0c: lea eax, [ebp - 0x100] */
  eax = (uint32_t)(ebp + 0xffffff00u);
/* e9ef12: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9ef13: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9ef14: call 0xeac84e */
  esp -= 4; W32(esp, 0xe9ef19u); SPILL(); f_eac84e(); if (g_unwind) return; RELOAD();
/* e9ef19: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e9ef1c: /* e9ef1c: and byte ptr [ebp - 1], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xffffffffu))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + 0xffffffffu), r);
  }
/* e9ef20: lea eax, [ebp - 0x100] */
  eax = (uint32_t)(ebp + 0xffffff00u);
/* e9ef26: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9ef27: lea ecx, [ebx + 0x84] */
  ecx = (uint32_t)(ebx + 0x84u);
/* e9ef2d: call 0xea20c7 */
  esp -= 4; W32(esp, 0xe9ef32u); SPILL(); f_ea20c7(); if (g_unwind) return; RELOAD();
/* e9ef32: inc dword ptr [ebx + 0xa4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xa4u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx + 0xa4u), r);
  }
/* e9ef38: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9ef39: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9ef3a: mov dword ptr [ebx + 0x98], 1 */
  W32((uint32_t)(ebx + 0x98u), 0x1u);
/* e9ef44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9ef45: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9ef46: ret  */
  esp += 4; SPILL(); return;
}

void f_e9ef47(void) {
  LOAD_REGS();
L_e9ef47: /* e9ef47: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9ef48: mov ebp, esp */
  ebp = esp;
/* e9ef4a: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9ef4d: mov eax, ecx */
  eax = ecx;
/* e9ef4f: xor ecx, ecx */
  ecx = 0;
/* e9ef51: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* e9ef54: add eax, 0xc8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xc8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9ef59: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9ef5a: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* e9ef5d: mov dword ptr [ebp - 0xc], ecx */
  W32((uint32_t)(ebp + 0xfffffff4u), ecx);
/* e9ef60: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* e9ef63: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* e9ef66: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* e9ef69: mov esi, eax */
  esi = eax;
/* e9ef6b: jmp 0xe9ef73 */
  goto L_e9ef73;
L_e9ef6d: /* e9ef6d: cmp cl, 0x5f */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e9ef70: je 0xe9ef79 */
  if (zf) goto L_e9ef79;
L_e9ef72: /* e9ef72: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_e9ef73: /* e9ef73: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* e9ef75: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9ef77: jne 0xe9ef6d */
  if (!zf) goto L_e9ef6d;
L_e9ef79: /* e9ef79: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e9ef7c: mov edx, eax */
  edx = eax;
/* e9ef7e: je 0xe9efa9 */
  if (zf) goto L_e9efa9;
L_e9ef80: /* e9ef80: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e9ef81: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* e9ef84: jmp 0xe9ef8c */
  goto L_e9ef8c;
L_e9ef86: /* e9ef86: cmp cl, 0x5f */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e9ef89: je 0xe9ef92 */
  if (zf) goto L_e9ef92;
L_e9ef8b: /* e9ef8b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_e9ef8c: /* e9ef8c: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* e9ef8e: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9ef90: jne 0xe9ef86 */
  if (!zf) goto L_e9ef86;
L_e9ef92: /* e9ef92: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e9ef95: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* e9ef98: je 0xe9efa9 */
  if (zf) goto L_e9efa9;
L_e9ef9a: /* e9ef9a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e9ef9b: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* e9ef9e: jmp 0xe9efa1 */
  goto L_e9efa1;
L_e9efa0: /* e9efa0: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_e9efa1: /* e9efa1: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e9efa4: jne 0xe9efa0 */
  if (!zf) goto L_e9efa0;
L_e9efa6: /* e9efa6: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_e9efa9: /* e9efa9: sub edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* e9efab: mov eax, edx */
  eax = edx;
/* e9efad: cmp eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e9efb0: jbe 0xe9efbc */
  if ((cf | zf)) goto L_e9efbc;
L_e9efb2: /* e9efb2: mov eax, 0x109 */
  eax = 0x109u;
/* e9efb7: jmp 0xe9f65b */
  goto L_e9f65b;
L_e9efbc: /* e9efbc: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9efbd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9efbe: mov ecx, eax */
  ecx = eax;
/* e9efc0: mov edx, ecx */
  edx = ecx;
/* e9efc2: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e9efc5: lea edi, [ebp - 0x2c] */
  edi = (uint32_t)(ebp + 0xffffffd4u);
/* e9efc8: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e9efca: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e9efcc: mov ecx, edx */
  ecx = edx;
/* e9efce: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* e9efcf: and ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e9efd1: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* e9efd3: and byte ptr [ebp + eax - 0x2c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + eax + 0xffffffd4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + eax + 0xffffffd4u), r);
  }
/* e9efd8: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e9efda: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9efdb: mov edi, 0xeb37cc */
  edi = 0xeb37ccu;
/* e9efe0: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9efe3: mov ecx, ebx */
  ecx = ebx;
/* e9efe5: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9efe7: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9efe9: jne 0xe9eff2 */
  if (!zf) goto L_e9eff2;
L_e9efeb: /* e9efeb: xor edx, edx */
  edx = 0;
/* e9efed: jmp 0xe9f33c */
  goto L_e9f33c;
L_e9eff2: /* e9eff2: mov edi, 0xeb37c8 */
  edi = 0xeb37c8u;
/* e9eff7: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9effa: mov ecx, ebx */
  ecx = ebx;
/* e9effc: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9effe: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f000: jne 0xe9f00a */
  if (!zf) goto L_e9f00a;
L_e9f002: /* e9f002: xor edx, edx */
  edx = 0;
/* e9f004: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* e9f005: jmp 0xe9f52e */
  goto L_e9f52e;
L_e9f00a: /* e9f00a: mov edi, 0xeb37c4 */
  edi = 0xeb37c4u;
/* e9f00f: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f012: mov ecx, ebx */
  ecx = ebx;
/* e9f014: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f016: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f018: jne 0xe9f021 */
  if (!zf) goto L_e9f021;
L_e9f01a: /* e9f01a: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e9f01c: jmp 0xe9f510 */
  goto L_e9f510;
L_e9f021: /* e9f021: mov edi, 0xeb37c0 */
  edi = 0xeb37c0u;
/* e9f026: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f029: mov ecx, ebx */
  ecx = ebx;
/* e9f02b: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f02d: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f02f: je 0xe9f511 */
  if (zf) goto L_e9f511;
L_e9f035: /* e9f035: mov edi, 0xeb37bc */
  edi = 0xeb37bcu;
/* e9f03a: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f03d: mov ecx, ebx */
  ecx = ebx;
/* e9f03f: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f041: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f043: jne 0xe9f04c */
  if (!zf) goto L_e9f04c;
L_e9f045: /* e9f045: mov edx, ebx */
  edx = ebx;
/* e9f047: jmp 0xe9f0e0 */
  goto L_e9f0e0;
L_e9f04c: /* e9f04c: mov edi, 0xeb37b8 */
  edi = 0xeb37b8u;
/* e9f051: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f054: mov ecx, ebx */
  ecx = ebx;
/* e9f056: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f058: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f05a: jne 0xe9f063 */
  if (!zf) goto L_e9f063;
L_e9f05c: /* e9f05c: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* e9f05e: jmp 0xe9f510 */
  goto L_e9f510;
L_e9f063: /* e9f063: mov edi, 0xeb37b4 */
  edi = 0xeb37b4u;
/* e9f068: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f06b: mov ecx, ebx */
  ecx = ebx;
/* e9f06d: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f06f: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f071: jne 0xe9f07a */
  if (!zf) goto L_e9f07a;
L_e9f073: /* e9f073: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* e9f075: jmp 0xe9f510 */
  goto L_e9f510;
L_e9f07a: /* e9f07a: mov edi, 0xeb37b0 */
  edi = 0xeb37b0u;
/* e9f07f: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f082: mov ecx, ebx */
  ecx = ebx;
/* e9f084: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f086: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f088: jne 0xe9f091 */
  if (!zf) goto L_e9f091;
L_e9f08a: /* e9f08a: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* e9f08c: jmp 0xe9f510 */
  goto L_e9f510;
L_e9f091: /* e9f091: mov edi, 0xeb37ac */
  edi = 0xeb37acu;
/* e9f096: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f099: mov ecx, ebx */
  ecx = ebx;
/* e9f09b: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f09d: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f09f: jne 0xe9f0a8 */
  if (!zf) goto L_e9f0a8;
L_e9f0a1: /* e9f0a1: push 0x13 */
  { uint32_t v = 0x13u; esp -= 4; W32(esp, v); }
/* e9f0a3: jmp 0xe9f52d */
  goto L_e9f52d;
L_e9f0a8: /* e9f0a8: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* e9f0ab: mov eax, dword ptr [eax + 0xac] */
  eax = R32((uint32_t)(eax + 0xacu));
/* e9f0b1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9f0b3: je 0xe9f3c8 */
  if (zf) goto L_e9f3c8;
L_e9f0b9: /* e9f0b9: mov edi, 0xeb37a8 */
  edi = 0xeb37a8u;
/* e9f0be: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f0c1: mov ecx, ebx */
  ecx = ebx;
/* e9f0c3: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f0c5: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f0c7: jne 0xe9f0cd */
  if (!zf) goto L_e9f0cd;
L_e9f0c9: /* e9f0c9: push 0x12 */
  { uint32_t v = 0x12u; esp -= 4; W32(esp, v); }
/* e9f0cb: jmp 0xe9f0df */
  goto L_e9f0df;
L_e9f0cd: /* e9f0cd: mov edi, 0xeb37a4 */
  edi = 0xeb37a4u;
/* e9f0d2: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f0d5: mov ecx, ebx */
  ecx = ebx;
/* e9f0d7: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f0d9: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f0db: jne 0xe9f14c */
  if (!zf) goto L_e9f14c;
L_e9f0dd: /* e9f0dd: push 0x50 */
  { uint32_t v = 0x50u; esp -= 4; W32(esp, v); }
L_e9f0df: /* e9f0df: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
L_e9f0e0: /* e9f0e0: mov eax, 0x108 */
  eax = 0x108u;
L_e9f0e5: /* e9f0e5: cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9f0e9: je 0xe9f5ee */
  if (zf) goto L_e9f5ee;
L_e9f0ef: /* e9f0ef: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* e9f0f2: cmp dword ptr [ecx + 0xac], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9f0f9: je 0xe9f54c */
  if (zf) goto L_e9f54c;
L_e9f0ff: /* e9f0ff: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e9f102: mov esi, dword ptr [ebp - 0xc] */
  esi = R32((uint32_t)(ebp + 0xfffffff4u));
/* e9f105: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* e9f107: cmp ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e9f10a: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* e9f10d: ja 0xe9f54c */
  if ((!cf && !zf)) goto L_e9f54c;
L_e9f113: /* e9f113: mov ebx, ecx */
  ebx = ecx;
/* e9f115: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e9f118: lea edi, [ebp - 0x2c] */
  edi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f11b: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e9f11d: mov ecx, ebx */
  ecx = ebx;
/* e9f11f: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e9f122: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* e9f124: mov ecx, ebx */
  ecx = ebx;
/* e9f126: and byte ptr [ebp + ecx - 0x2c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + ecx + 0xffffffd4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + ecx + 0xffffffd4u), r);
  }
/* e9f12b: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e9f12d: mov edi, 0xeb37a0 */
  edi = 0xeb37a0u;
/* e9f132: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f135: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f136: xor ebx, ebx */
  ebx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f138: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f13a: jne 0xe9f556 */
  if (!zf) goto L_e9f556;
L_e9f140: /* e9f140: mov dword ptr [ebp - 4], 0x3000000 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x3000000u);
/* e9f147: jmp 0xe9f5ee */
  goto L_e9f5ee;
L_e9f14c: /* e9f14c: mov edi, 0xeb379c */
  edi = 0xeb379cu;
/* e9f151: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f154: mov ecx, ebx */
  ecx = ebx;
/* e9f156: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f158: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f15a: jne 0xe9f163 */
  if (!zf) goto L_e9f163;
L_e9f15c: /* e9f15c: push 0x58 */
  { uint32_t v = 0x58u; esp -= 4; W32(esp, v); }
/* e9f15e: jmp 0xe9f0df */
  goto L_e9f0df;
L_e9f163: /* e9f163: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* e9f166: cmp dword ptr [ecx + 0xb4], 0xffff0104 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xb4u))); uint32_t b = (uint32_t)(0xffff0104u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e9f170: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f173: jae 0xe9f329 */
  if (!cf) goto L_e9f329;
L_e9f179: /* e9f179: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* e9f17b: mov edi, 0xeb3790 */
  edi = 0xeb3790u;
/* e9f180: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f181: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f183: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f185: jne 0xe9f18e */
  if (!zf) goto L_e9f18e;
L_e9f187: /* e9f187: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e9f189: jmp 0xe9f386 */
  goto L_e9f386;
L_e9f18e: /* e9f18e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* e9f190: mov edi, 0xeb3788 */
  edi = 0xeb3788u;
/* e9f195: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f198: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f199: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f19b: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f19d: jne 0xe9f1a6 */
  if (!zf) goto L_e9f1a6;
L_e9f19f: /* e9f19f: push 0x41 */
  { uint32_t v = 0x41u; esp -= 4; W32(esp, v); }
/* e9f1a1: jmp 0xe9f386 */
  goto L_e9f386;
L_e9f1a6: /* e9f1a6: mov edi, 0xeb3784 */
  edi = 0xeb3784u;
/* e9f1ab: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f1ae: mov ecx, ebx */
  ecx = ebx;
/* e9f1b0: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f1b2: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f1b4: jne 0xe9f1bd */
  if (!zf) goto L_e9f1bd;
L_e9f1b6: /* e9f1b6: push 0x42 */
  { uint32_t v = 0x42u; esp -= 4; W32(esp, v); }
/* e9f1b8: jmp 0xe9f386 */
  goto L_e9f386;
L_e9f1bd: /* e9f1bd: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* e9f1bf: mov edi, 0xeb377c */
  edi = 0xeb377cu;
/* e9f1c4: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f1c7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f1c8: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f1ca: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f1cc: jne 0xe9f1d5 */
  if (!zf) goto L_e9f1d5;
L_e9f1ce: /* e9f1ce: push 0x43 */
  { uint32_t v = 0x43u; esp -= 4; W32(esp, v); }
/* e9f1d0: jmp 0xe9f52d */
  goto L_e9f52d;
L_e9f1d5: /* e9f1d5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* e9f1d7: mov edi, 0xeb3774 */
  edi = 0xeb3774u;
/* e9f1dc: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f1df: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f1e0: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f1e2: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f1e4: jne 0xe9f1ed */
  if (!zf) goto L_e9f1ed;
L_e9f1e6: /* e9f1e6: push 0x44 */
  { uint32_t v = 0x44u; esp -= 4; W32(esp, v); }
/* e9f1e8: jmp 0xe9f52d */
  goto L_e9f52d;
L_e9f1ed: /* e9f1ed: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* e9f1ef: mov edi, 0xeb3768 */
  edi = 0xeb3768u;
/* e9f1f4: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f1f7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f1f8: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f1fa: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f1fc: jne 0xe9f205 */
  if (!zf) goto L_e9f205;
L_e9f1fe: /* e9f1fe: push 0x45 */
  { uint32_t v = 0x45u; esp -= 4; W32(esp, v); }
/* e9f200: jmp 0xe9f52d */
  goto L_e9f52d;
L_e9f205: /* e9f205: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* e9f207: mov edi, 0xeb375c */
  edi = 0xeb375cu;
/* e9f20c: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f20f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f210: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f212: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f214: jne 0xe9f21d */
  if (!zf) goto L_e9f21d;
L_e9f216: /* e9f216: push 0x46 */
  { uint32_t v = 0x46u; esp -= 4; W32(esp, v); }
/* e9f218: jmp 0xe9f52d */
  goto L_e9f52d;
L_e9f21d: /* e9f21d: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* e9f21f: mov edi, 0xeb3750 */
  edi = 0xeb3750u;
/* e9f224: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f227: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f228: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f22a: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f22c: jne 0xe9f235 */
  if (!zf) goto L_e9f235;
L_e9f22e: /* e9f22e: push 0x47 */
  { uint32_t v = 0x47u; esp -= 4; W32(esp, v); }
/* e9f230: jmp 0xe9f52d */
  goto L_e9f52d;
L_e9f235: /* e9f235: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* e9f237: mov edi, 0xeb3744 */
  edi = 0xeb3744u;
/* e9f23c: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f23f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f240: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f242: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f244: jne 0xe9f24d */
  if (!zf) goto L_e9f24d;
L_e9f246: /* e9f246: push 0x48 */
  { uint32_t v = 0x48u; esp -= 4; W32(esp, v); }
/* e9f248: jmp 0xe9f52d */
  goto L_e9f52d;
L_e9f24d: /* e9f24d: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* e9f24f: mov edi, 0xeb3738 */
  edi = 0xeb3738u;
/* e9f254: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f257: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f258: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f25a: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f25c: jne 0xe9f265 */
  if (!zf) goto L_e9f265;
L_e9f25e: /* e9f25e: push 0x49 */
  { uint32_t v = 0x49u; esp -= 4; W32(esp, v); }
/* e9f260: jmp 0xe9f52d */
  goto L_e9f52d;
L_e9f265: /* e9f265: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* e9f267: mov edi, 0xeb372c */
  edi = 0xeb372cu;
/* e9f26c: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f26f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f270: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f272: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f274: jne 0xe9f27d */
  if (!zf) goto L_e9f27d;
L_e9f276: /* e9f276: push 0x4a */
  { uint32_t v = 0x4au; esp -= 4; W32(esp, v); }
/* e9f278: jmp 0xe9f52d */
  goto L_e9f52d;
L_e9f27d: /* e9f27d: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* e9f27f: mov edi, 0xeb3720 */
  edi = 0xeb3720u;
/* e9f284: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f287: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f288: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f28a: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f28c: jne 0xe9f295 */
  if (!zf) goto L_e9f295;
L_e9f28e: /* e9f28e: push 0x4c */
  { uint32_t v = 0x4cu; esp -= 4; W32(esp, v); }
/* e9f290: jmp 0xe9f510 */
  goto L_e9f510;
L_e9f295: /* e9f295: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* e9f297: mov edi, 0xeb3710 */
  edi = 0xeb3710u;
/* e9f29c: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f29f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f2a0: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f2a2: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f2a4: jne 0xe9f2ad */
  if (!zf) goto L_e9f2ad;
L_e9f2a6: /* e9f2a6: push 0x4d */
  { uint32_t v = 0x4du; esp -= 4; W32(esp, v); }
/* e9f2a8: jmp 0xe9f52d */
  goto L_e9f52d;
L_e9f2ad: /* e9f2ad: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* e9f2af: mov edi, 0xeb3700 */
  edi = 0xeb3700u;
/* e9f2b4: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f2b7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f2b8: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f2ba: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f2bc: jne 0xe9f2c5 */
  if (!zf) goto L_e9f2c5;
L_e9f2be: /* e9f2be: push 0x54 */
  { uint32_t v = 0x54u; esp -= 4; W32(esp, v); }
/* e9f2c0: jmp 0xe9f52d */
  goto L_e9f52d;
L_e9f2c5: /* e9f2c5: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* e9f2c7: mov edi, 0xeb36f8 */
  edi = 0xeb36f8u;
/* e9f2cc: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f2cf: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f2d0: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f2d2: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f2d4: jne 0xe9f2dd */
  if (!zf) goto L_e9f2dd;
L_e9f2d6: /* e9f2d6: push 0x55 */
  { uint32_t v = 0x55u; esp -= 4; W32(esp, v); }
/* e9f2d8: jmp 0xe9f52d */
  goto L_e9f52d;
L_e9f2dd: /* e9f2dd: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* e9f2df: mov edi, 0xeb36ec */
  edi = 0xeb36ecu;
/* e9f2e4: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f2e7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f2e8: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f2ea: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f2ec: jne 0xe9f2f5 */
  if (!zf) goto L_e9f2f5;
L_e9f2ee: /* e9f2ee: push 0x52 */
  { uint32_t v = 0x52u; esp -= 4; W32(esp, v); }
/* e9f2f0: jmp 0xe9f52d */
  goto L_e9f52d;
L_e9f2f5: /* e9f2f5: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* e9f2f7: mov edi, 0xeb36e4 */
  edi = 0xeb36e4u;
/* e9f2fc: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f2ff: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f300: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f302: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f304: jne 0xe9f30d */
  if (!zf) goto L_e9f30d;
L_e9f306: /* e9f306: push 0x56 */
  { uint32_t v = 0x56u; esp -= 4; W32(esp, v); }
/* e9f308: jmp 0xe9f52d */
  goto L_e9f52d;
L_e9f30d: /* e9f30d: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* e9f30f: mov edi, 0xeb36d8 */
  edi = 0xeb36d8u;
/* e9f314: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f317: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f318: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f31a: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f31c: jne 0xe9f3c0 */
  if (!zf) goto L_e9f3c0;
L_e9f322: /* e9f322: push 0x53 */
  { uint32_t v = 0x53u; esp -= 4; W32(esp, v); }
/* e9f324: jmp 0xe9f52d */
  goto L_e9f52d;
L_e9f329: /* e9f329: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e9f32b: mov edi, 0xeb36d0 */
  edi = 0xeb36d0u;
/* e9f330: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f331: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f333: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f335: jne 0xe9f346 */
  if (!zf) goto L_e9f346;
L_e9f337: /* e9f337: mov edx, 0xfffd */
  edx = 0xfffdu;
L_e9f33c: /* e9f33c: mov eax, 0x104 */
  eax = 0x104u;
/* e9f341: jmp 0xe9f0e5 */
  goto L_e9f0e5;
L_e9f346: /* e9f346: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* e9f348: mov edi, 0xeb36c8 */
  edi = 0xeb36c8u;
/* e9f34d: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f350: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f351: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f353: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f355: jne 0xe9f35e */
  if (!zf) goto L_e9f35e;
L_e9f357: /* e9f357: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* e9f359: jmp 0xe9f52d */
  goto L_e9f52d;
L_e9f35e: /* e9f35e: push 8 */
  { uint32_t v = 0x8u; esp -= 4; W32(esp, v); }
/* e9f360: mov edi, 0xeb3788 */
  edi = 0xeb3788u;
/* e9f365: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f368: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f369: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f36b: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f36d: je 0xe9f19f */
  if (zf) goto L_e9f19f;
L_e9f373: /* e9f373: push 9 */
  { uint32_t v = 0x9u; esp -= 4; W32(esp, v); }
/* e9f375: mov edi, 0xeb36bc */
  edi = 0xeb36bcu;
/* e9f37a: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f37d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f37e: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f380: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f382: jne 0xe9f391 */
  if (!zf) goto L_e9f391;
L_e9f384: /* e9f384: push 0x57 */
  { uint32_t v = 0x57u; esp -= 4; W32(esp, v); }
L_e9f386: /* e9f386: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
/* e9f387: mov eax, 0x105 */
  eax = 0x105u;
/* e9f38c: jmp 0xe9f0e5 */
  goto L_e9f0e5;
L_e9f391: /* e9f391: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e9f393: mov edi, 0xeb36b4 */
  edi = 0xeb36b4u;
/* e9f398: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f39b: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f39c: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f39e: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f3a0: jne 0xe9f3a9 */
  if (!zf) goto L_e9f3a9;
L_e9f3a2: /* e9f3a2: push 0x42 */
  { uint32_t v = 0x42u; esp -= 4; W32(esp, v); }
/* e9f3a4: jmp 0xe9f52d */
  goto L_e9f52d;
L_e9f3a9: /* e9f3a9: mov edi, 0xeb36b0 */
  edi = 0xeb36b0u;
/* e9f3ae: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f3b1: mov ecx, ebx */
  ecx = ebx;
/* e9f3b3: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f3b5: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f3b7: jne 0xe9f3c0 */
  if (!zf) goto L_e9f3c0;
L_e9f3b9: /* e9f3b9: push 0x59 */
  { uint32_t v = 0x59u; esp -= 4; W32(esp, v); }
/* e9f3bb: jmp 0xe9f510 */
  goto L_e9f510;
L_e9f3c0: /* e9f3c0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9f3c2: jne 0xe9f54c */
  if (!zf) goto L_e9f54c;
L_e9f3c8: /* e9f3c8: mov edi, 0xeb36ac */
  edi = 0xeb36acu;
/* e9f3cd: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f3d0: mov ecx, ebx */
  ecx = ebx;
/* e9f3d2: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f3d4: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f3d6: jne 0xe9f3df */
  if (!zf) goto L_e9f3df;
L_e9f3d8: /* e9f3d8: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e9f3da: jmp 0xe9f52d */
  goto L_e9f52d;
L_e9f3df: /* e9f3df: mov edi, 0xeb36a8 */
  edi = 0xeb36a8u;
/* e9f3e4: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f3e7: mov ecx, ebx */
  ecx = ebx;
/* e9f3e9: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f3eb: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f3ed: jne 0xe9f3f6 */
  if (!zf) goto L_e9f3f6;
L_e9f3ef: /* e9f3ef: push 7 */
  { uint32_t v = 0x7u; esp -= 4; W32(esp, v); }
/* e9f3f1: jmp 0xe9f52d */
  goto L_e9f52d;
L_e9f3f6: /* e9f3f6: mov edi, 0xeb36a4 */
  edi = 0xeb36a4u;
/* e9f3fb: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f3fe: mov ecx, ebx */
  ecx = ebx;
/* e9f400: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f402: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f404: jne 0xe9f40d */
  if (!zf) goto L_e9f40d;
L_e9f406: /* e9f406: push 0xa */
  { uint32_t v = 0xau; esp -= 4; W32(esp, v); }
/* e9f408: jmp 0xe9f510 */
  goto L_e9f510;
L_e9f40d: /* e9f40d: mov edi, 0xeb36a0 */
  edi = 0xeb36a0u;
/* e9f412: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f415: mov ecx, ebx */
  ecx = ebx;
/* e9f417: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f419: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f41b: jne 0xe9f424 */
  if (!zf) goto L_e9f424;
L_e9f41d: /* e9f41d: push 0xb */
  { uint32_t v = 0xbu; esp -= 4; W32(esp, v); }
/* e9f41f: jmp 0xe9f510 */
  goto L_e9f510;
L_e9f424: /* e9f424: mov edi, 0xeb369c */
  edi = 0xeb369cu;
/* e9f429: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f42c: mov ecx, ebx */
  ecx = ebx;
/* e9f42e: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f430: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f432: jne 0xe9f43b */
  if (!zf) goto L_e9f43b;
L_e9f434: /* e9f434: push 0xc */
  { uint32_t v = 0xcu; esp -= 4; W32(esp, v); }
/* e9f436: jmp 0xe9f510 */
  goto L_e9f510;
L_e9f43b: /* e9f43b: mov edi, 0xeb3698 */
  edi = 0xeb3698u;
/* e9f440: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f443: mov ecx, ebx */
  ecx = ebx;
/* e9f445: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f447: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f449: jne 0xe9f452 */
  if (!zf) goto L_e9f452;
L_e9f44b: /* e9f44b: push 0xd */
  { uint32_t v = 0xdu; esp -= 4; W32(esp, v); }
/* e9f44d: jmp 0xe9f510 */
  goto L_e9f510;
L_e9f452: /* e9f452: mov edi, 0xeb3694 */
  edi = 0xeb3694u;
/* e9f457: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f45a: mov ecx, ebx */
  ecx = ebx;
/* e9f45c: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f45e: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f460: jne 0xe9f469 */
  if (!zf) goto L_e9f469;
L_e9f462: /* e9f462: push 0xe */
  { uint32_t v = 0xeu; esp -= 4; W32(esp, v); }
/* e9f464: jmp 0xe9f52d */
  goto L_e9f52d;
L_e9f469: /* e9f469: mov edi, 0xeb3690 */
  edi = 0xeb3690u;
/* e9f46e: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f471: mov ecx, ebx */
  ecx = ebx;
/* e9f473: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f475: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f477: jne 0xe9f480 */
  if (!zf) goto L_e9f480;
L_e9f479: /* e9f479: push 0xf */
  { uint32_t v = 0xfu; esp -= 4; W32(esp, v); }
/* e9f47b: jmp 0xe9f52d */
  goto L_e9f52d;
L_e9f480: /* e9f480: mov edi, 0xeb368c */
  edi = 0xeb368cu;
/* e9f485: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f488: mov ecx, ebx */
  ecx = ebx;
/* e9f48a: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f48c: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f48e: jne 0xe9f497 */
  if (!zf) goto L_e9f497;
L_e9f490: /* e9f490: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e9f492: jmp 0xe9f52d */
  goto L_e9f52d;
L_e9f497: /* e9f497: mov edi, 0xeb3688 */
  edi = 0xeb3688u;
/* e9f49c: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f49f: mov ecx, ebx */
  ecx = ebx;
/* e9f4a1: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f4a3: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f4a5: jne 0xe9f4ab */
  if (!zf) goto L_e9f4ab;
L_e9f4a7: /* e9f4a7: push 0x11 */
  { uint32_t v = 0x11u; esp -= 4; W32(esp, v); }
/* e9f4a9: jmp 0xe9f510 */
  goto L_e9f510;
L_e9f4ab: /* e9f4ab: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* e9f4ad: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* e9f4ae: mov edi, 0xeb3680 */
  edi = 0xeb3680u;
/* e9f4b3: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f4b6: mov ecx, eax */
  ecx = eax;
/* e9f4b8: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f4ba: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f4bc: jne 0xe9f4c2 */
  if (!zf) goto L_e9f4c2;
L_e9f4be: /* e9f4be: push 0x14 */
  { uint32_t v = 0x14u; esp -= 4; W32(esp, v); }
/* e9f4c0: jmp 0xe9f510 */
  goto L_e9f510;
L_e9f4c2: /* e9f4c2: mov edi, 0xeb3678 */
  edi = 0xeb3678u;
/* e9f4c7: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f4ca: mov ecx, eax */
  ecx = eax;
/* e9f4cc: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f4ce: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f4d0: jne 0xe9f4d6 */
  if (!zf) goto L_e9f4d6;
L_e9f4d2: /* e9f4d2: push 0x15 */
  { uint32_t v = 0x15u; esp -= 4; W32(esp, v); }
/* e9f4d4: jmp 0xe9f510 */
  goto L_e9f510;
L_e9f4d6: /* e9f4d6: mov edi, 0xeb3670 */
  edi = 0xeb3670u;
/* e9f4db: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f4de: mov ecx, eax */
  ecx = eax;
/* e9f4e0: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f4e2: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f4e4: jne 0xe9f4ea */
  if (!zf) goto L_e9f4ea;
L_e9f4e6: /* e9f4e6: push 0x16 */
  { uint32_t v = 0x16u; esp -= 4; W32(esp, v); }
/* e9f4e8: jmp 0xe9f510 */
  goto L_e9f510;
L_e9f4ea: /* e9f4ea: mov edi, 0xeb3668 */
  edi = 0xeb3668u;
/* e9f4ef: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f4f2: mov ecx, eax */
  ecx = eax;
/* e9f4f4: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f4f6: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f4f8: jne 0xe9f4fe */
  if (!zf) goto L_e9f4fe;
L_e9f4fa: /* e9f4fa: push 0x17 */
  { uint32_t v = 0x17u; esp -= 4; W32(esp, v); }
/* e9f4fc: jmp 0xe9f510 */
  goto L_e9f510;
L_e9f4fe: /* e9f4fe: mov edi, 0xeb3660 */
  edi = 0xeb3660u;
/* e9f503: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f506: mov ecx, eax */
  ecx = eax;
/* e9f508: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f50a: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f50c: jne 0xe9f51b */
  if (!zf) goto L_e9f51b;
L_e9f50e: /* e9f50e: push 0x18 */
  { uint32_t v = 0x18u; esp -= 4; W32(esp, v); }
L_e9f510: /* e9f510: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
L_e9f511: /* e9f511: mov eax, 0x107 */
  eax = 0x107u;
/* e9f516: jmp 0xe9f0e5 */
  goto L_e9f0e5;
L_e9f51b: /* e9f51b: mov edi, 0xeb3658 */
  edi = 0xeb3658u;
/* e9f520: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f523: mov ecx, eax */
  ecx = eax;
/* e9f525: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f527: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f529: jne 0xe9f538 */
  if (!zf) goto L_e9f538;
L_e9f52b: /* e9f52b: push 0x4e */
  { uint32_t v = 0x4eu; esp -= 4; W32(esp, v); }
L_e9f52d: /* e9f52d: pop edx */
  { uint32_t v = R32(esp); esp += 4;
  edx = v;
  }
L_e9f52e: /* e9f52e: mov eax, 0x106 */
  eax = 0x106u;
/* e9f533: jmp 0xe9f0e5 */
  goto L_e9f0e5;
L_e9f538: /* e9f538: mov ecx, eax */
  ecx = eax;
/* e9f53a: mov edi, 0xeb3650 */
  edi = 0xeb3650u;
/* e9f53f: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f542: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f544: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f546: jne 0xe9f54c */
  if (!zf) goto L_e9f54c;
L_e9f548: /* e9f548: push 0x4f */
  { uint32_t v = 0x4fu; esp -= 4; W32(esp, v); }
/* e9f54a: jmp 0xe9f52d */
  goto L_e9f52d;
L_e9f54c: /* e9f54c: mov eax, 0x109 */
  eax = 0x109u;
/* e9f551: jmp 0xe9f659 */
  goto L_e9f659;
L_e9f556: /* e9f556: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e9f558: mov edi, 0xeb364c */
  edi = 0xeb364cu;
/* e9f55d: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f560: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f561: xor ebx, ebx */
  ebx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f563: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f565: jne 0xe9f570 */
  if (!zf) goto L_e9f570;
L_e9f567: /* e9f567: mov dword ptr [ebp - 4], 0x2000000 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x2000000u);
/* e9f56e: jmp 0xe9f5ee */
  goto L_e9f5ee;
L_e9f570: /* e9f570: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e9f572: mov edi, 0xeb3648 */
  edi = 0xeb3648u;
/* e9f577: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f57a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f57b: xor ebx, ebx */
  ebx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f57d: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f57f: jne 0xe9f58a */
  if (!zf) goto L_e9f58a;
L_e9f581: /* e9f581: mov dword ptr [ebp - 4], 0x1000000 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x1000000u);
/* e9f588: jmp 0xe9f5ee */
  goto L_e9f5ee;
L_e9f58a: /* e9f58a: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e9f58c: mov edi, 0xeb3644 */
  edi = 0xeb3644u;
/* e9f591: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f594: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f595: xor ebx, ebx */
  ebx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f597: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f599: jne 0xe9f5a4 */
  if (!zf) goto L_e9f5a4;
L_e9f59b: /* e9f59b: mov dword ptr [ebp - 4], 0xf000000 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xf000000u);
/* e9f5a2: jmp 0xe9f5ee */
  goto L_e9f5ee;
L_e9f5a4: /* e9f5a4: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e9f5a6: mov edi, 0xeb3640 */
  edi = 0xeb3640u;
/* e9f5ab: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f5ae: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f5af: xor ebx, ebx */
  ebx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f5b1: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f5b3: jne 0xe9f5be */
  if (!zf) goto L_e9f5be;
L_e9f5b5: /* e9f5b5: mov dword ptr [ebp - 4], 0xe000000 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xe000000u);
/* e9f5bc: jmp 0xe9f5ee */
  goto L_e9f5ee;
L_e9f5be: /* e9f5be: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e9f5c0: mov edi, 0xeb363c */
  edi = 0xeb363cu;
/* e9f5c5: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f5c8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f5c9: xor ebx, ebx */
  ebx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f5cb: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f5cd: jne 0xe9f5d8 */
  if (!zf) goto L_e9f5d8;
L_e9f5cf: /* e9f5cf: mov dword ptr [ebp - 4], 0xd000000 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xd000000u);
/* e9f5d6: jmp 0xe9f5ee */
  goto L_e9f5ee;
L_e9f5d8: /* e9f5d8: cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9f5dc: jne 0xe9f54c */
  if (!zf) goto L_e9f54c;
L_e9f5e2: /* e9f5e2: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e9f5e5: mov dword ptr [ebp - 0x10], ecx */
  W32((uint32_t)(ebp + 0xfffffff0u), ecx);
/* e9f5e8: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* e9f5eb: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
L_e9f5ee: /* e9f5ee: mov esi, dword ptr [ebp - 0x10] */
  esi = R32((uint32_t)(ebp + 0xfffffff0u));
/* e9f5f1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9f5f3: je 0xe9f647 */
  if (zf) goto L_e9f647;
L_e9f5f5: /* e9f5f5: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* e9f5f8: cmp dword ptr [ecx + 0xac], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9f5ff: je 0xe9f54c */
  if (zf) goto L_e9f54c;
L_e9f605: /* e9f605: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* e9f608: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* e9f60a: cmp ecx, 0xf */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e9f60d: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* e9f610: ja 0xe9f54c */
  if ((!cf && !zf)) goto L_e9f54c;
L_e9f616: /* e9f616: mov ebx, ecx */
  ebx = ecx;
/* e9f618: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e9f61b: lea edi, [ebp - 0x2c] */
  edi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f61e: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e9f620: mov ecx, ebx */
  ecx = ebx;
/* e9f622: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e9f625: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* e9f627: mov ecx, ebx */
  ecx = ebx;
/* e9f629: and byte ptr [ebp + ecx - 0x2c], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + ecx + 0xffffffd4u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + ecx + 0xffffffd4u), r);
  }
/* e9f62e: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e9f630: mov edi, 0xeb3638 */
  edi = 0xeb3638u;
/* e9f635: lea esi, [ebp - 0x2c] */
  esi = (uint32_t)(ebp + 0xffffffd4u);
/* e9f638: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f639: xor ebx, ebx */
  ebx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f63b: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f63d: jne 0xe9f54c */
  if (!zf) goto L_e9f54c;
L_e9f643: /* e9f643: or byte ptr [ebp - 2], 0x10 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xfffffffeu))); uint8_t b = (uint8_t)(0x10u);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xfffffffeu), r);
  }
L_e9f647: /* e9f647: mov ecx, dword ptr [ebp - 8] */
  ecx = R32((uint32_t)(ebp + 0xfffffff8u));
/* e9f64a: mov dword ptr [ecx + 0x1c8], edx */
  W32((uint32_t)(ecx + 0x1c8u), edx);
/* e9f650: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* e9f653: mov dword ptr [ecx + 0x1cc], edx */
  W32((uint32_t)(ecx + 0x1ccu), edx);
L_e9f659: /* e9f659: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9f65a: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_e9f65b: /* e9f65b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9f65c: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9f65d: ret  */
  esp += 4; SPILL(); return;
}

void f_e9f65e(void) {
  LOAD_REGS();
L_e9f65e: /* e9f65e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9f65f: mov ebp, esp */
  ebp = esp;
/* e9f661: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9f662: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9f663: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e9f666: xor eax, eax */
  eax = 0;
/* e9f668: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9f66a: mov ebx, ecx */
  ebx = ecx;
/* e9f66c: je 0xe9f6fc */
  if (zf) goto L_e9f6fc;
L_e9f672: /* e9f672: mov cl, byte ptr [esi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* e9f674: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9f676: je 0xe9f6fc */
  if (zf) goto L_e9f6fc;
L_e9f67c: /* e9f67c: mov edx, esi */
  edx = esi;
L_e9f67e: /* e9f67e: movsx ecx, cl */
  ecx = (uint32_t)(int32_t)(int8_t)((ecx & 0xffu));
/* e9f681: cmp ecx, 0x77 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x77u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9f684: jg 0xe9f6c0 */
  if ((!zf && sf == of)) goto L_e9f6c0;
L_e9f686: /* e9f686: je 0xe9f6b6 */
  if (zf) goto L_e9f6b6;
L_e9f688: /* e9f688: sub ecx, 0x61 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x61u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* e9f68b: je 0xe9f6b6 */
  if (zf) goto L_e9f6b6;
L_e9f68d: /* e9f68d: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* e9f68e: je 0xe9f6cb */
  if (zf) goto L_e9f6cb;
L_e9f690: /* e9f690: sub ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* e9f693: je 0xe9f6d5 */
  if (zf) goto L_e9f6d5;
L_e9f695: /* e9f695: sub ecx, 0xb */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* e9f698: jne 0xe9f6df */
  if (!zf) goto L_e9f6df;
L_e9f69a: /* e9f69a: xor ecx, ecx */
  ecx = 0;
/* e9f69c: or eax, 0x10000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_e9f6a1: /* e9f6a1: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9f6a3: je 0xe9f6aa */
  if (zf) goto L_e9f6aa;
L_e9f6a5: /* e9f6a5: cmp ecx, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e9f6a8: jbe 0xe9f6df */
  if ((cf | zf)) goto L_e9f6df;
L_e9f6aa: /* e9f6aa: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* e9f6ab: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* e9f6ae: mov cl, byte ptr [edx] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edx))) & 0xffu);
/* e9f6b0: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9f6b2: jne 0xe9f67e */
  if (!zf) goto L_e9f67e;
L_e9f6b4: /* e9f6b4: jmp 0xe9f701 */
  goto L_e9f701;
L_e9f6b6: /* e9f6b6: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e9f6b8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f6b9: or eax, 0x80000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e9f6be: jmp 0xe9f6a1 */
  goto L_e9f6a1;
L_e9f6c0: /* e9f6c0: sub ecx, 0x78 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  ecx = r;
  }
/* e9f6c3: je 0xe9f69a */
  if (zf) goto L_e9f69a;
L_e9f6c5: /* e9f6c5: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* e9f6c6: je 0xe9f6d5 */
  if (zf) goto L_e9f6d5;
L_e9f6c8: /* e9f6c8: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* e9f6c9: jne 0xe9f6df */
  if (!zf) goto L_e9f6df;
L_e9f6cb: /* e9f6cb: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e9f6cd: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f6ce: or eax, 0x40000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e9f6d3: jmp 0xe9f6a1 */
  goto L_e9f6a1;
L_e9f6d5: /* e9f6d5: xor ecx, ecx */
  ecx = 0;
/* e9f6d7: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e9f6d8: or eax, 0x20000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e9f6dd: jmp 0xe9f6a1 */
  goto L_e9f6a1;
L_e9f6df: /* e9f6df: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9f6e0: push 0xeb37d0 */
  { uint32_t v = 0xeb37d0u; esp -= 4; W32(esp, v); }
/* e9f6e5: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9f6e6: call 0xe9ee11 */
  esp -= 4; W32(esp, 0xe9f6ebu); SPILL(); f_e9ee11(); if (g_unwind) return; RELOAD();
/* e9f6eb: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9f6ee: mov dword ptr [ebx + 0x98], 1 */
  W32((uint32_t)(ebx + 0x98u), 0x1u);
/* e9f6f8: xor eax, eax */
  eax = 0;
/* e9f6fa: jmp 0xe9f701 */
  goto L_e9f701;
L_e9f6fc: /* e9f6fc: mov eax, 0xf0000 */
  eax = 0xf0000u;
L_e9f701: /* e9f701: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9f702: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9f703: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* e9f704: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e9f707(void) {
  LOAD_REGS();
L_e9f707: /* e9f707: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9f708: mov ebp, esp */
  ebp = esp;
/* e9f70a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9f70b: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9f70c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* e9f70f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9f710: xor esi, esi */
  esi = 0;
/* e9f712: and dword ptr [ebp - 4], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* e9f715: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9f717: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9f718: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* e9f71b: mov edi, eax */
  edi = eax;
/* e9f71d: je 0xe9f79d */
  if (zf) goto L_e9f79d;
L_e9f71f: /* e9f71f: cmp byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e9f722: je 0xe9f79d */
  if (zf) goto L_e9f79d;
L_e9f724: /* e9f724: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* e9f726: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_e9f727: /* e9f727: mov dl, byte ptr [edi] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(edi))) & 0xffu);
/* e9f729: test dl, dl */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* e9f72b: je 0xe9f74c */
  if (zf) goto L_e9f74c;
L_e9f72d: /* e9f72d: movsx edx, dl */
  edx = (uint32_t)(int32_t)(int8_t)((edx & 0xffu));
/* e9f730: cmp edx, 0x77 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x77u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  cf = (a) < (b);
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9f733: jg 0xe9f784 */
  if ((!zf && sf == of)) goto L_e9f784;
L_e9f735: /* e9f735: je 0xe9f77f */
  if (zf) goto L_e9f77f;
L_e9f737: /* e9f737: sub edx, 0x61 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x61u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  edx = r;
  }
/* e9f73a: je 0xe9f77f */
  if (zf) goto L_e9f77f;
L_e9f73c: /* e9f73c: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* e9f73d: je 0xe9f78f */
  if (zf) goto L_e9f78f;
L_e9f73f: /* e9f73f: sub edx, 5 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  edx = r;
  }
/* e9f742: je 0xe9f793 */
  if (zf) goto L_e9f793;
L_e9f744: /* e9f744: sub edx, 0xb */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  edx = r;
  }
/* e9f747: jne 0xe9f75f */
  if (!zf) goto L_e9f75f;
L_e9f749: /* e9f749: xor esi, esi */
  esi = 0;
  cf = 0;
L_e9f74b: /* e9f74b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  of = (r) == 0x80000000u;
  edi = r;
  }
L_e9f74c: /* e9f74c: mov edx, esi */
  edx = esi;
/* e9f74e: shl edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
  }
/* e9f750: or dword ptr [ebp - 4], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* e9f753: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e9f754: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* e9f755: cmp ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e9f758: jb 0xe9f727 */
  if (cf) goto L_e9f727;
L_e9f75a: /* e9f75a: cmp byte ptr [edi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(edi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e9f75d: je 0xe9f798 */
  if (zf) goto L_e9f798;
L_e9f75f: /* e9f75f: mov esi, dword ptr [ebp - 8] */
  esi = R32((uint32_t)(ebp + 0xfffffff8u));
/* e9f762: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9f763: push 0xeb37e4 */
  { uint32_t v = 0xeb37e4u; esp -= 4; W32(esp, v); }
/* e9f768: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9f769: call 0xe9ee11 */
  esp -= 4; W32(esp, 0xe9f76eu); SPILL(); f_e9ee11(); if (g_unwind) return; RELOAD();
/* e9f76e: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9f771: mov dword ptr [esi + 0x98], 1 */
  W32((uint32_t)(esi + 0x98u), 0x1u);
/* e9f77b: xor eax, eax */
  eax = 0;
/* e9f77d: jmp 0xe9f7a2 */
  goto L_e9f7a2;
L_e9f77f: /* e9f77f: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
L_e9f781: /* e9f781: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9f782: jmp 0xe9f74b */
  goto L_e9f74b;
L_e9f784: /* e9f784: sub edx, 0x78 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x78u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  edx = r;
  }
/* e9f787: je 0xe9f749 */
  if (zf) goto L_e9f749;
L_e9f789: /* e9f789: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* e9f78a: je 0xe9f793 */
  if (zf) goto L_e9f793;
L_e9f78c: /* e9f78c: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edx = r;
  }
/* e9f78d: jne 0xe9f75f */
  if (!zf) goto L_e9f75f;
L_e9f78f: /* e9f78f: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e9f791: jmp 0xe9f781 */
  goto L_e9f781;
L_e9f793: /* e9f793: xor esi, esi */
  esi = 0;
  cf = 0;
/* e9f795: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e9f796: jmp 0xe9f74b */
  goto L_e9f74b;
L_e9f798: /* e9f798: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* e9f79b: jmp 0xe9f7a2 */
  goto L_e9f7a2;
L_e9f79d: /* e9f79d: mov eax, 0xe40000 */
  eax = 0xe40000u;
L_e9f7a2: /* e9f7a2: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9f7a3: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9f7a4: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9f7a5: ret 4 */
  esp += 8; SPILL(); return;
}

void f_e9f7a8(void) {
  LOAD_REGS();
L_e9f7a8: /* e9f7a8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9f7a9: mov ebp, esp */
  ebp = esp;
/* e9f7ab: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9f7ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9f7af: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9f7b0: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e9f7b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9f7b4: mov edi, ecx */
  edi = ecx;
/* e9f7b6: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* e9f7b9: jmp 0xe9f7ca */
  goto L_e9f7ca;
L_e9f7bb: /* e9f7bb: movsx eax, byte ptr [esi] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(esi)));
/* e9f7be: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9f7bf: call 0xeac886 */
  esp -= 4; W32(esp, 0xe9f7c4u); SPILL(); f_eac886(); if (g_unwind) return; RELOAD();
/* e9f7c4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9f7c6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f7c7: je 0xe9f7d2 */
  if (zf) goto L_e9f7d2;
L_e9f7c9: /* e9f7c9: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_e9f7ca: /* e9f7ca: cmp byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e9f7cd: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* e9f7d0: jne 0xe9f7bb */
  if (!zf) goto L_e9f7bb;
L_e9f7d2: /* e9f7d2: cmp byte ptr [esi], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e9f7d5: mov ebx, esi */
  ebx = esi;
/* e9f7d7: je 0xe9f7ed */
  if (zf) goto L_e9f7ed;
L_e9f7d9: /* e9f7d9: movsx eax, byte ptr [ebx] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(ebx)));
/* e9f7dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9f7dd: call 0xeac880 */
  esp -= 4; W32(esp, 0xe9f7e2u); SPILL(); f_eac880(); if (g_unwind) return; RELOAD();
/* e9f7e2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9f7e4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f7e5: je 0xe9f7ed */
  if (zf) goto L_e9f7ed;
L_e9f7e7: /* e9f7e7: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* e9f7e8: cmp byte ptr [ebx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e9f7eb: jne 0xe9f7d9 */
  if (!zf) goto L_e9f7d9;
L_e9f7ed: /* e9f7ed: xor eax, eax */
  eax = 0;
/* e9f7ef: cmp byte ptr [esi], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e9f7f1: mov dword ptr [ebp - 0x18], 1 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x1u);
/* e9f7f8: setne al */
  eax = (eax & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* e9f7fb: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* e9f7fe: xor eax, eax */
  eax = 0;
/* e9f800: cmp dword ptr [edi + 0xac], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0xacu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9f806: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* e9f809: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* e9f80c: je 0xe9f8c0 */
  if (zf) goto L_e9f8c0;
L_e9f812: /* e9f812: cmp byte ptr [ebx], 0x5f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0x5fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e9f815: jne 0xe9f8c0 */
  if (!zf) goto L_e9f8c0;
L_e9f81b: /* e9f81b: push 6 */
  { uint32_t v = 0x6u; esp -= 4; W32(esp, v); }
/* e9f81d: mov edi, 0xeb38a4 */
  edi = 0xeb38a4u;
/* e9f822: mov esi, ebx */
  esi = ebx;
/* e9f824: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f825: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f827: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f829: jne 0xe9f83a */
  if (!zf) goto L_e9f83a;
L_e9f82b: /* e9f82b: mov dword ptr [ebp - 8], 0x2000000 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x2000000u);
/* e9f832: add ebx, 5 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e9f835: jmp 0xe9f8c0 */
  goto L_e9f8c0;
L_e9f83a: /* e9f83a: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* e9f83c: mov edi, 0xeb389c */
  edi = 0xeb389cu;
/* e9f841: mov esi, ebx */
  esi = ebx;
/* e9f843: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f844: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f846: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f848: jne 0xe9f856 */
  if (!zf) goto L_e9f856;
L_e9f84a: /* e9f84a: mov dword ptr [ebp - 8], 0x4000000 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x4000000u);
/* e9f851: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* e9f854: jmp 0xe9f8c0 */
  goto L_e9f8c0;
L_e9f856: /* e9f856: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* e9f858: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* e9f859: mov edi, 0xeb3898 */
  edi = 0xeb3898u;
/* e9f85e: mov esi, ebx */
  esi = ebx;
/* e9f860: mov ecx, eax */
  ecx = eax;
/* e9f862: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f864: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f866: jne 0xe9f871 */
  if (!zf) goto L_e9f871;
L_e9f868: /* e9f868: mov dword ptr [ebp - 8], 0x7000000 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x7000000u);
/* e9f86f: jmp 0xe9f8bd */
  goto L_e9f8bd;
L_e9f871: /* e9f871: mov edi, 0xeb3894 */
  edi = 0xeb3894u;
/* e9f876: mov esi, ebx */
  esi = ebx;
/* e9f878: mov ecx, eax */
  ecx = eax;
/* e9f87a: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f87c: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f87e: je 0xe9f8b6 */
  if (zf) goto L_e9f8b6;
L_e9f880: /* e9f880: mov edi, 0xeb3890 */
  edi = 0xeb3890u;
/* e9f885: mov esi, ebx */
  esi = ebx;
/* e9f887: mov ecx, eax */
  ecx = eax;
/* e9f889: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f88b: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f88d: je 0xe9f8b6 */
  if (zf) goto L_e9f8b6;
L_e9f88f: /* e9f88f: mov edi, 0xeb388c */
  edi = 0xeb388cu;
/* e9f894: mov esi, ebx */
  esi = ebx;
/* e9f896: mov ecx, eax */
  ecx = eax;
/* e9f898: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f89a: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f89c: je 0xe9f8ad */
  if (zf) goto L_e9f8ad;
L_e9f89e: /* e9f89e: mov ecx, eax */
  ecx = eax;
/* e9f8a0: mov edi, 0xeb3888 */
  edi = 0xeb3888u;
/* e9f8a5: mov esi, ebx */
  esi = ebx;
/* e9f8a7: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f8a9: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f8ab: jne 0xe9f8c0 */
  if (!zf) goto L_e9f8c0;
L_e9f8ad: /* e9f8ad: mov dword ptr [ebp - 8], 0xa000000 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0xa000000u);
/* e9f8b4: jmp 0xe9f8bd */
  goto L_e9f8bd;
L_e9f8b6: /* e9f8b6: mov dword ptr [ebp - 8], 0x9000000 */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x9000000u);
L_e9f8bd: /* e9f8bd: add ebx, 3 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
L_e9f8c0: /* e9f8c0: cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9f8c4: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* e9f8c7: je 0xe9f8de */
  if (zf) goto L_e9f8de;
L_e9f8c9: /* e9f8c9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9f8ca: call 0xeac87a */
  esp -= 4; W32(esp, 0xe9f8cfu); SPILL(); f_eac87a(); if (g_unwind) return; RELOAD();
/* e9f8cf: test eax, 0xffffe000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffe000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9f8d4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f8d5: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* e9f8d8: je 0xe9f8de */
  if (zf) goto L_e9f8de;
L_e9f8da: /* e9f8da: and dword ptr [ebp - 0x18], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
L_e9f8de: /* e9f8de: cmp byte ptr [ebx], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebx))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e9f8e1: jne 0xe9fae7 */
  if (!zf) goto L_e9fae7;
L_e9f8e7: /* e9f8e7: xor eax, eax */
  eax = 0;
/* e9f8e9: cmp dword ptr [ebp - 0x18], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9f8ec: je 0xe9fae7 */
  if (zf) goto L_e9fae7;
L_e9f8f2: /* e9f8f2: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9f8f5: jne 0xe9fac4 */
  if (!zf) goto L_e9fac4;
L_e9f8fb: /* e9f8fb: mov cl, byte ptr [esi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* e9f8fd: and byte ptr [esi], al */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(esi), r);
  }
/* e9f8ff: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e9f902: mov byte ptr [ebp + 0x13], cl */
  W8((uint32_t)(ebp + 0x13u), (ecx & 0xffu));
/* e9f905: mov ecx, dword ptr [ebp - 0x10] */
  ecx = R32((uint32_t)(ebp + 0xfffffff0u));
/* e9f908: cmp dword ptr [ecx + 0xac], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xacu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9f90e: je 0xe9f99c */
  if (zf) goto L_e9f99c;
L_e9f914: /* e9f914: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e9f916: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* e9f917: mov edi, 0xeb3884 */
  edi = 0xeb3884u;
/* e9f91c: mov ecx, eax */
  ecx = eax;
/* e9f91e: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f920: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f922: jne 0xe9f934 */
  if (!zf) goto L_e9f934;
L_e9f924: /* e9f924: cmp dword ptr [ebp - 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9f927: je 0xe9f934 */
  if (zf) goto L_e9f934;
L_e9f929: /* e9f929: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* e9f92c: or eax, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e9f92f: jmp 0xe9fa13 */
  goto L_e9fa13;
L_e9f934: /* e9f934: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e9f937: mov edi, 0xeb3880 */
  edi = 0xeb3880u;
/* e9f93c: mov ecx, eax */
  ecx = eax;
/* e9f93e: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f940: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f942: jne 0xe9f954 */
  if (!zf) goto L_e9f954;
L_e9f944: /* e9f944: cmp dword ptr [ebp - 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9f947: je 0xe9f954 */
  if (zf) goto L_e9f954;
L_e9f949: /* e9f949: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* e9f94c: or eax, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e9f94f: jmp 0xe9fb42 */
  goto L_e9fb42;
L_e9f954: /* e9f954: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e9f957: mov edi, 0xeb387c */
  edi = 0xeb387cu;
/* e9f95c: mov ecx, eax */
  ecx = eax;
/* e9f95e: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f960: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f962: jne 0xe9f974 */
  if (!zf) goto L_e9f974;
L_e9f964: /* e9f964: cmp dword ptr [ebp - 0xc], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9f967: je 0xe9f974 */
  if (zf) goto L_e9f974;
L_e9f969: /* e9f969: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* e9f96c: or eax, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e9f96f: jmp 0xe9fae0 */
  goto L_e9fae0;
L_e9f974: /* e9f974: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e9f977: mov ecx, eax */
  ecx = eax;
/* e9f979: mov edi, 0xeb3878 */
  edi = 0xeb3878u;
/* e9f97e: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f980: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f982: jne 0xe9faba */
  if (!zf) goto L_e9faba;
L_e9f988: /* e9f988: cmp dword ptr [ebp - 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9f98b: je 0xe9faba */
  if (zf) goto L_e9faba;
L_e9f991: /* e9f991: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* e9f994: or eax, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e9f997: jmp 0xe9fa6c */
  goto L_e9fa6c;
L_e9f99c: /* e9f99c: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* e9f99f: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* e9f9a1: mov edi, 0xeb3870 */
  edi = 0xeb3870u;
/* e9f9a6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f9a7: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f9a9: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f9ab: jne 0xe9f9bb */
  if (!zf) goto L_e9f9bb;
L_e9f9ad: /* e9f9ad: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9f9af: jne 0xe9f9bb */
  if (!zf) goto L_e9f9bb;
L_e9f9b1: /* e9f9b1: mov eax, 0x40000000 */
  eax = 0x40000000u;
/* e9f9b6: jmp 0xe9fb42 */
  goto L_e9fb42;
L_e9f9bb: /* e9f9bb: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e9f9be: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* e9f9c0: mov edi, 0xeb3868 */
  edi = 0xeb3868u;
/* e9f9c5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f9c6: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f9c8: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f9ca: jne 0xe9f9da */
  if (!zf) goto L_e9f9da;
L_e9f9cc: /* e9f9cc: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9f9ce: jne 0xe9f9da */
  if (!zf) goto L_e9f9da;
L_e9f9d0: /* e9f9d0: mov eax, 0x40000002 */
  eax = 0x40000002u;
/* e9f9d5: jmp 0xe9fb42 */
  goto L_e9fb42;
L_e9f9da: /* e9f9da: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e9f9dd: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* e9f9df: mov edi, 0xeb3860 */
  edi = 0xeb3860u;
/* e9f9e4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9f9e5: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9f9e7: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9f9e9: jne 0xe9f9f9 */
  if (!zf) goto L_e9f9f9;
L_e9f9eb: /* e9f9eb: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9f9ed: jne 0xe9f9f9 */
  if (!zf) goto L_e9f9f9;
L_e9f9ef: /* e9f9ef: mov eax, 0x40000001 */
  eax = 0x40000001u;
/* e9f9f4: jmp 0xe9fb42 */
  goto L_e9fb42;
L_e9f9f9: /* e9f9f9: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e9f9fc: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e9f9fe: pop eax */
  { uint32_t v = R32(esp); esp += 4;
  eax = v;
  }
/* e9f9ff: mov edi, 0xeb3884 */
  edi = 0xeb3884u;
/* e9fa04: mov ecx, eax */
  ecx = eax;
/* e9fa06: xor ebx, ebx */
  ebx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9fa08: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9fa0a: jne 0xe9fa1d */
  if (!zf) goto L_e9fa1d;
L_e9fa0c: /* e9fa0c: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9fa0e: je 0xe9fa1d */
  if (zf) goto L_e9fa1d;
L_e9fa10: /* e9fa10: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
L_e9fa13: /* e9fa13: or eax, 0x10000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e9fa18: jmp 0xe9fb42 */
  goto L_e9fb42;
L_e9fa1d: /* e9fa1d: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e9fa20: mov edi, 0xeb3880 */
  edi = 0xeb3880u;
/* e9fa25: mov ecx, eax */
  ecx = eax;
/* e9fa27: xor ebx, ebx */
  ebx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9fa29: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9fa2b: jne 0xe9fa39 */
  if (!zf) goto L_e9fa39;
L_e9fa2d: /* e9fa2d: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9fa2f: je 0xe9fa39 */
  if (zf) goto L_e9fa39;
L_e9fa31: /* e9fa31: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* e9fa34: jmp 0xe9fb42 */
  goto L_e9fb42;
L_e9fa39: /* e9fa39: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e9fa3c: mov edi, 0xeb387c */
  edi = 0xeb387cu;
/* e9fa41: mov ecx, eax */
  ecx = eax;
/* e9fa43: xor ebx, ebx */
  ebx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9fa45: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9fa47: jne 0xe9fa55 */
  if (!zf) goto L_e9fa55;
L_e9fa49: /* e9fa49: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9fa4b: je 0xe9fa55 */
  if (zf) goto L_e9fa55;
L_e9fa4d: /* e9fa4d: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* e9fa50: jmp 0xe9fae0 */
  goto L_e9fae0;
L_e9fa55: /* e9fa55: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e9fa58: mov ecx, eax */
  ecx = eax;
/* e9fa5a: mov edi, 0xeb385c */
  edi = 0xeb385cu;
/* e9fa5f: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9fa61: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9fa63: jne 0xe9fa76 */
  if (!zf) goto L_e9fa76;
L_e9fa65: /* e9fa65: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9fa67: je 0xe9fa76 */
  if (zf) goto L_e9fa76;
L_e9fa69: /* e9fa69: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
L_e9fa6c: /* e9fa6c: or eax, 0x30000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x30000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e9fa71: jmp 0xe9fb42 */
  goto L_e9fb42;
L_e9fa76: /* e9fa76: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e9fa79: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e9fa7b: mov edi, 0xeb3858 */
  edi = 0xeb3858u;
/* e9fa80: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9fa81: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9fa83: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9fa85: jne 0xe9fa98 */
  if (!zf) goto L_e9fa98;
L_e9fa87: /* e9fa87: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9fa89: je 0xe9fa98 */
  if (zf) goto L_e9fa98;
L_e9fa8b: /* e9fa8b: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* e9fa8e: or eax, 0x50000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x50000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e9fa93: jmp 0xe9fb42 */
  goto L_e9fb42;
L_e9fa98: /* e9fa98: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e9fa9b: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* e9fa9d: mov edi, 0xeb3854 */
  edi = 0xeb3854u;
/* e9faa2: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9faa3: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9faa5: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9faa7: jne 0xe9faba */
  if (!zf) goto L_e9faba;
L_e9faa9: /* e9faa9: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9faab: je 0xe9faba */
  if (zf) goto L_e9faba;
L_e9faad: /* e9faad: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* e9fab0: or eax, 0x60000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x60000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e9fab5: jmp 0xe9fb42 */
  goto L_e9fb42;
L_e9faba: /* e9faba: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* e9fabd: mov cl, byte ptr [ebp + 0x13] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0x13u))) & 0xffu);
/* e9fac0: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* e9fac2: jmp 0xe9faed */
  goto L_e9faed;
L_e9fac4: /* e9fac4: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* e9fac7: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* e9fac9: mov edi, 0xeb387c */
  edi = 0xeb387cu;
/* e9face: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9facf: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9fad1: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9fad3: jne 0xe9fae7 */
  if (!zf) goto L_e9fae7;
L_e9fad5: /* e9fad5: cmp dword ptr [ebp - 0xc], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9fad8: jne 0xe9fae7 */
  if (!zf) goto L_e9fae7;
L_e9fada: /* e9fada: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* e9fadd: or eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_e9fae0: /* e9fae0: or eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e9fae5: jmp 0xe9fb42 */
  goto L_e9fb42;
L_e9fae7: /* e9fae7: cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9faeb: jne 0xe9fb02 */
  if (!zf) goto L_e9fb02;
L_e9faed: /* e9faed: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* e9faf0: push 0xeb383c */
  { uint32_t v = 0xeb383cu; esp -= 4; W32(esp, v); }
/* e9faf5: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* e9faf8: call 0xe9ee11 */
  esp -= 4; W32(esp, 0xe9fafdu); SPILL(); f_e9ee11(); if (g_unwind) return; RELOAD();
/* e9fafd: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* e9fb00: jmp 0xe9fb33 */
  goto L_e9fb33;
L_e9fb02: /* e9fb02: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* e9fb05: test ah, 0x20 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9fb08: je 0xe9fb1a */
  if (zf) goto L_e9fb1a;
L_e9fb0a: /* e9fb0a: and eax, 0x1fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e9fb0f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9fb10: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* e9fb13: push 0xeb3818 */
  { uint32_t v = 0xeb3818u; esp -= 4; W32(esp, v); }
/* e9fb18: jmp 0xe9fb28 */
  goto L_e9fb28;
L_e9fb1a: /* e9fb1a: and eax, 0x1fff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1fffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e9fb1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9fb20: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* e9fb23: push 0xeb37fc */
  { uint32_t v = 0xeb37fcu; esp -= 4; W32(esp, v); }
L_e9fb28: /* e9fb28: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* e9fb2b: call 0xe9ee11 */
  esp -= 4; W32(esp, 0xe9fb30u); SPILL(); f_e9ee11(); if (g_unwind) return; RELOAD();
/* e9fb30: add esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_e9fb33: /* e9fb33: mov eax, dword ptr [ebp - 0x10] */
  eax = R32((uint32_t)(ebp + 0xfffffff0u));
/* e9fb36: mov dword ptr [eax + 0x98], 1 */
  W32((uint32_t)(eax + 0x98u), 0x1u);
/* e9fb40: xor eax, eax */
  eax = 0;
L_e9fb42: /* e9fb42: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9fb43: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9fb44: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9fb45: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9fb46: ret 0xc */
  esp += 16; SPILL(); return;
}

void f_e9fb49(void) {
  LOAD_REGS();
L_e9fb49: /* e9fb49: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9fb4a: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9fb4b: mov edi, dword ptr [esp + 0xc] */
  edi = R32((uint32_t)(esp + 0xcu));
/* e9fb4f: mov eax, edi */
  eax = edi;
/* e9fb51: and eax, 0x70000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e9fb56: cmp eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9fb5b: mov esi, ecx */
  esi = ecx;
/* e9fb5d: jne 0xe9fb67 */
  if (!zf) goto L_e9fb67;
L_e9fb5f: /* e9fb5f: test edi, 0x2000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9fb65: je 0xe9fb80 */
  if (zf) goto L_e9fb80;
L_e9fb67: /* e9fb67: push 0xeb38ac */
  { uint32_t v = 0xeb38acu; esp -= 4; W32(esp, v); }
/* e9fb6c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9fb6d: call 0xe9ee11 */
  esp -= 4; W32(esp, 0xe9fb72u); SPILL(); f_e9ee11(); if (g_unwind) return; RELOAD();
/* e9fb72: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9fb73: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9fb74: mov dword ptr [esi + 0x98], 1 */
  W32((uint32_t)(esi + 0x98u), 0x1u);
/* e9fb7e: jmp 0xe9fbed */
  goto L_e9fbed;
L_e9fb80: /* e9fb80: cmp dword ptr [esi + 0xac], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9fb87: je 0xe9fba4 */
  if (zf) goto L_e9fba4;
L_e9fb89: /* e9fb89: add dword ptr [esi + 0x9c], 0x18 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x9cu))); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0x9cu), r);
  }
/* e9fb90: add esi, 0x64 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e9fb93: push 0x51 */
  { uint32_t v = 0x51u; esp -= 4; W32(esp, v); }
/* e9fb95: mov ecx, esi */
  ecx = esi;
/* e9fb97: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xe9fb9cu); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* e9fb9c: or edi, 0xf0000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xf0000u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
/* e9fba2: jmp 0xe9fbba */
  goto L_e9fbba;
L_e9fba4: /* e9fba4: add dword ptr [esi + 0x9c], 0x14 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x9cu))); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0x9cu), r);
  }
/* e9fbab: and edi, 0x1fff */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x1fffu);
  uint32_t r = (uint32_t)(a & b);
  edi = r;
  }
/* e9fbb1: add esi, 0x64 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x64u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e9fbb4: or edi, 0x82000000 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x82000000u);
  uint32_t r = (uint32_t)(a | b);
  edi = r;
  }
L_e9fbba: /* e9fbba: mov ecx, esi */
  ecx = esi;
/* e9fbbc: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9fbbd: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xe9fbc2u); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* e9fbc2: mov edi, dword ptr [esp + 0x10] */
  edi = R32((uint32_t)(esp + 0x10u));
/* e9fbc6: push dword ptr [edi] */
  { uint32_t v = R32((uint32_t)(edi)); esp -= 4; W32(esp, v); }
/* e9fbc8: mov ecx, esi */
  ecx = esi;
/* e9fbca: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xe9fbcfu); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* e9fbcf: push dword ptr [edi + 4] */
  { uint32_t v = R32((uint32_t)(edi + 0x4u)); esp -= 4; W32(esp, v); }
/* e9fbd2: mov ecx, esi */
  ecx = esi;
/* e9fbd4: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xe9fbd9u); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* e9fbd9: push dword ptr [edi + 8] */
  { uint32_t v = R32((uint32_t)(edi + 0x8u)); esp -= 4; W32(esp, v); }
/* e9fbdc: mov ecx, esi */
  ecx = esi;
/* e9fbde: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xe9fbe3u); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* e9fbe3: push dword ptr [edi + 0xc] */
  { uint32_t v = R32((uint32_t)(edi + 0xcu)); esp -= 4; W32(esp, v); }
/* e9fbe6: mov ecx, esi */
  ecx = esi;
/* e9fbe8: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xe9fbedu); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
L_e9fbed: /* e9fbed: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9fbee: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9fbef: ret 8 */
  esp += 12; SPILL(); return;
}

void f_e9fbf2(void) {
  LOAD_REGS();
L_e9fbf2: /* e9fbf2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9fbf3: mov ebp, esp */
  ebp = esp;
/* e9fbf5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9fbf6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9fbf7: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9fbf8: mov ebx, ecx */
  ebx = ecx;
/* e9fbfa: cmp dword ptr [ebx + 0xb0], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xb0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9fc01: je 0xe9fcc5 */
  if (zf) goto L_e9fcc5;
L_e9fc07: /* e9fc07: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9fc08: mov esi, dword ptr [ebx + 0xb8] */
  esi = R32((uint32_t)(ebx + 0xb8u));
/* e9fc0e: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9fc0f: mov edi, dword ptr [ebx + 0xc4] */
  edi = R32((uint32_t)(ebx + 0xc4u));
/* e9fc15: sub edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* e9fc17: lea eax, [edi + 3] */
  eax = (uint32_t)(edi + 0x3u);
/* e9fc1a: shl eax, 0xe */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 14;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* e9fc1d: and eax, 0xffff0000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffff0000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e9fc22: add eax, 0x10000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9fc27: and eax, 0x7fff0000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fff0000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e9fc2c: or eax, 0xfffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffeu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e9fc31: lea ecx, [ebx + 0x74] */
  ecx = (uint32_t)(ebx + 0x74u);
/* e9fc34: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9fc35: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
/* e9fc38: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xe9fc3du); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* e9fc3d: push 0x54584554 */
  { uint32_t v = 0x54584554u; esp -= 4; W32(esp, v); }
/* e9fc42: lea ecx, [ebx + 0x74] */
  ecx = (uint32_t)(ebx + 0x74u);
/* e9fc45: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xe9fc4au); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* e9fc4a: add dword ptr [ebx + 0xa0], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xa0u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebx + 0xa0u), r);
  }
/* e9fc51: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e9fc54: jb 0xe9fc7d */
  if (cf) goto L_e9fc7d;
L_e9fc56: /* e9fc56: mov eax, edi */
  eax = edi;
/* e9fc58: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e9fc5b: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
L_e9fc5e: /* e9fc5e: push dword ptr [esi] */
  { uint32_t v = R32((uint32_t)(esi)); esp -= 4; W32(esp, v); }
/* e9fc60: lea ecx, [ebx + 0x74] */
  ecx = (uint32_t)(ebx + 0x74u);
/* e9fc63: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xe9fc68u); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* e9fc68: add dword ptr [ebx + 0xa0], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xa0u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebx + 0xa0u), r);
  }
/* e9fc6f: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* e9fc72: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* e9fc75: dec dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* e9fc78: jne 0xe9fc5e */
  if (!zf) goto L_e9fc5e;
L_e9fc7a: /* e9fc7a: mov dword ptr [ebp - 8], edi */
  W32((uint32_t)(ebp + 0xfffffff8u), edi);
L_e9fc7d: /* e9fc7d: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9fc7f: je 0xe9fcad */
  if (zf) goto L_e9fcad;
L_e9fc81: /* e9fc81: and dword ptr [ebp - 4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* e9fc85: mov ecx, edi */
  ecx = edi;
/* e9fc87: mov eax, ecx */
  eax = ecx;
/* e9fc89: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e9fc8c: lea edi, [ebp - 4] */
  edi = (uint32_t)(ebp + 0xfffffffcu);
/* e9fc8f: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e9fc91: mov ecx, eax */
  ecx = eax;
/* e9fc93: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e9fc96: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* e9fc98: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* e9fc9b: lea ecx, [ebx + 0x74] */
  ecx = (uint32_t)(ebx + 0x74u);
/* e9fc9e: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xe9fca3u); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* e9fca3: add dword ptr [ebx + 0xa0], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xa0u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebx + 0xa0u), r);
  }
/* e9fcaa: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
L_e9fcad: /* e9fcad: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9fcb0: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9fcb1: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* e9fcb2: jne 0xe9fcc5 */
  if (!zf) goto L_e9fcc5;
L_e9fcb4: /* e9fcb4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* e9fcb6: lea ecx, [ebx + 0x74] */
  ecx = (uint32_t)(ebx + 0x74u);
/* e9fcb9: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xe9fcbeu); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* e9fcbe: add dword ptr [ebx + 0xa0], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xa0u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebx + 0xa0u), r);
  }
L_e9fcc5: /* e9fcc5: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9fcc6: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9fcc7: ret  */
  esp += 4; SPILL(); return;
}

void f_e9fcc8(void) {
  LOAD_REGS();
L_e9fcc8: /* e9fcc8: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9fcc9: mov ebp, esp */
  ebp = esp;
/* e9fccb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9fccc: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* e9fccd: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9fcce: mov ebx, ecx */
  ebx = ecx;
/* e9fcd0: cmp dword ptr [ebx + 0xb0], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xb0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9fcd7: mov eax, dword ptr [ebx + 0x1d0] */
  eax = R32((uint32_t)(ebx + 0x1d0u));
/* e9fcdd: mov dword ptr [ebx + 0x3dc], eax */
  W32((uint32_t)(ebx + 0x3dcu), eax);
/* e9fce3: jne 0xe9fcf0 */
  if (!zf) goto L_e9fcf0;
L_e9fce5: /* e9fce5: mov dword ptr [ebx + 0x2d4], eax */
  W32((uint32_t)(ebx + 0x2d4u), eax);
/* e9fceb: jmp 0xe9fe3c */
  goto L_e9fe3c;
L_e9fcf0: /* e9fcf0: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9fcf1: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9fcf2: lea edi, [ebx + 0x1d4] */
  edi = (uint32_t)(ebx + 0x1d4u);
/* e9fcf8: lea esi, [ebx + 0x2d8] */
  esi = (uint32_t)(ebx + 0x2d8u);
L_e9fcfe: /* e9fcfe: mov cl, byte ptr [esi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* e9fd00: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* e9fd02: cmp cl, byte ptr [edi] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edi)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e9fd04: jne 0xe9fd20 */
  if (!zf) goto L_e9fd20;
L_e9fd06: /* e9fd06: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9fd08: je 0xe9fd1c */
  if (zf) goto L_e9fd1c;
L_e9fd0a: /* e9fd0a: mov cl, byte ptr [esi + 1] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi + 0x1u))) & 0xffu);
/* e9fd0d: mov al, cl */
  eax = (eax & 0xffffff00u) | ((uint32_t)((ecx & 0xffu)) & 0xffu);
/* e9fd0f: cmp cl, byte ptr [edi + 1] */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(R8((uint32_t)(edi + 0x1u)));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* e9fd12: jne 0xe9fd20 */
  if (!zf) goto L_e9fd20;
L_e9fd14: /* e9fd14: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e9fd15: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* e9fd16: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e9fd17: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* e9fd18: test al, al */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)((eax & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9fd1a: jne 0xe9fcfe */
  if (!zf) goto L_e9fcfe;
L_e9fd1c: /* e9fd1c: xor eax, eax */
  eax = 0;
/* e9fd1e: jmp 0xe9fd25 */
  goto L_e9fd25;
L_e9fd20: /* e9fd20: sbb eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  cf = cin ? ((a) <= (b)) : ((a) < (b));
  eax = r;
  }
/* e9fd22: sbb eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a - b - cin);
  eax = r;
  }
L_e9fd25: /* e9fd25: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9fd27: je 0xe9fdf1 */
  if (zf) goto L_e9fdf1;
L_e9fd2d: /* e9fd2d: lea eax, [ebx + 0x1d4] */
  eax = (uint32_t)(ebx + 0x1d4u);
/* e9fd33: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* e9fd36: lea esi, [eax + 1] */
  esi = (uint32_t)(eax + 0x1u);
L_e9fd39: /* e9fd39: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* e9fd3b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e9fd3c: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9fd3e: jne 0xe9fd39 */
  if (!zf) goto L_e9fd39;
L_e9fd40: /* e9fd40: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* e9fd42: lea edi, [eax + 1] */
  edi = (uint32_t)(eax + 0x1u);
/* e9fd45: lea eax, [edi + 3] */
  eax = (uint32_t)(edi + 0x3u);
/* e9fd48: shl eax, 0xe */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 14;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* e9fd4b: and eax, 0xffff0000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffff0000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e9fd50: add eax, 0x10000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10000u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* e9fd55: and eax, 0x7fff0000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7fff0000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* e9fd5a: or eax, 0xfffe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffeu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* e9fd5f: lea esi, [ebx + 0x74] */
  esi = (uint32_t)(ebx + 0x74u);
/* e9fd62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9fd63: mov ecx, esi */
  ecx = esi;
/* e9fd65: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xe9fd6au); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* e9fd6a: push 0x454c4946 */
  { uint32_t v = 0x454c4946u; esp -= 4; W32(esp, v); }
/* e9fd6f: mov ecx, esi */
  ecx = esi;
/* e9fd71: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xe9fd76u); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* e9fd76: add dword ptr [ebx + 0xa0], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xa0u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebx + 0xa0u), r);
  }
/* e9fd7d: cmp edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e9fd80: jb 0xe9fda9 */
  if (cf) goto L_e9fda9;
L_e9fd82: /* e9fd82: mov eax, edi */
  eax = edi;
/* e9fd84: shr eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  eax = r;
  }
/* e9fd87: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
L_e9fd8a: /* e9fd8a: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* e9fd8d: push dword ptr [eax] */
  { uint32_t v = R32((uint32_t)(eax)); esp -= 4; W32(esp, v); }
/* e9fd8f: mov ecx, esi */
  ecx = esi;
/* e9fd91: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xe9fd96u); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* e9fd96: add dword ptr [ebx + 0xa0], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xa0u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebx + 0xa0u), r);
  }
/* e9fd9d: add dword ptr [ebp - 4], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* e9fda1: sub edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* e9fda4: dec dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* e9fda7: jne 0xe9fd8a */
  if (!zf) goto L_e9fd8a;
L_e9fda9: /* e9fda9: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9fdab: je 0xe9fdd9 */
  if (zf) goto L_e9fdd9;
L_e9fdad: /* e9fdad: and dword ptr [ebp - 8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebp + 0xfffffff8u), r);
  }
/* e9fdb1: mov esi, dword ptr [ebp - 4] */
  esi = R32((uint32_t)(ebp + 0xfffffffcu));
/* e9fdb4: mov ecx, edi */
  ecx = edi;
/* e9fdb6: mov eax, ecx */
  eax = ecx;
/* e9fdb8: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e9fdbb: lea edi, [ebp - 8] */
  edi = (uint32_t)(ebp + 0xfffffff8u);
/* e9fdbe: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e9fdc0: mov ecx, eax */
  ecx = eax;
/* e9fdc2: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e9fdc5: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* e9fdc7: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* e9fdca: lea ecx, [ebx + 0x74] */
  ecx = (uint32_t)(ebx + 0x74u);
/* e9fdcd: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xe9fdd2u); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* e9fdd2: add dword ptr [ebx + 0xa0], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xa0u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebx + 0xa0u), r);
  }
L_e9fdd9: /* e9fdd9: lea eax, [ebx + 0x1d4] */
  eax = (uint32_t)(ebx + 0x1d4u);
/* e9fddf: lea edx, [ebx + 0x2d8] */
  edx = (uint32_t)(ebx + 0x2d8u);
/* e9fde5: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
L_e9fde7: /* e9fde7: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* e9fde9: mov byte ptr [edx + eax], cl */
  W8((uint32_t)(edx + eax), (ecx & 0xffu));
/* e9fdec: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e9fded: test cl, cl */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* e9fdef: jne 0xe9fde7 */
  if (!zf) goto L_e9fde7;
L_e9fdf1: /* e9fdf1: mov eax, dword ptr [ebx + 0x2d4] */
  eax = R32((uint32_t)(ebx + 0x2d4u));
/* e9fdf7: cmp eax, dword ptr [ebx + 0x1d0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x1d0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9fdfd: je 0xe9fe3a */
  if (zf) goto L_e9fe3a;
L_e9fdff: /* e9fdff: lea esi, [ebx + 0x74] */
  esi = (uint32_t)(ebx + 0x74u);
/* e9fe02: push 0x2fffe */
  { uint32_t v = 0x2fffeu; esp -= 4; W32(esp, v); }
/* e9fe07: mov ecx, esi */
  ecx = esi;
/* e9fe09: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xe9fe0eu); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* e9fe0e: push 0x454e494c */
  { uint32_t v = 0x454e494cu; esp -= 4; W32(esp, v); }
/* e9fe13: mov ecx, esi */
  ecx = esi;
/* e9fe15: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xe9fe1au); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* e9fe1a: push dword ptr [ebx + 0x1d0] */
  { uint32_t v = R32((uint32_t)(ebx + 0x1d0u)); esp -= 4; W32(esp, v); }
/* e9fe20: mov ecx, esi */
  ecx = esi;
/* e9fe22: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xe9fe27u); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* e9fe27: mov eax, dword ptr [ebx + 0x1d0] */
  eax = R32((uint32_t)(ebx + 0x1d0u));
/* e9fe2d: add dword ptr [ebx + 0xa0], 0xc */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xa0u))); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebx + 0xa0u), r);
  }
/* e9fe34: mov dword ptr [ebx + 0x2d4], eax */
  W32((uint32_t)(ebx + 0x2d4u), eax);
L_e9fe3a: /* e9fe3a: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* e9fe3b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_e9fe3c: /* e9fe3c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* e9fe3d: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* e9fe3e: ret  */
  esp += 4; SPILL(); return;
}

void f_e9fe3f(void) {
  LOAD_REGS();
L_e9fe3f: /* e9fe3f: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* e9fe40: mov ebp, esp */
  ebp = esp;
/* e9fe42: sub esp, 0x110 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x110u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* e9fe48: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* e9fe49: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* e9fe4a: mov ebx, ecx */
  ebx = ecx;
/* e9fe4c: and dword ptr [ebx + 0x3d8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x3d8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebx + 0x3d8u), r);
  }
/* e9fe53: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* e9fe54: jmp 0xea010d */
  goto L_ea010d;
L_e9fe59: /* e9fe59: mov eax, dword ptr [ebx + 0xc0] */
  eax = R32((uint32_t)(ebx + 0xc0u));
/* e9fe5f: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* e9fe61: cmp cl, 0xa */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e9fe64: mov byte ptr [ebp - 9], cl */
  W8((uint32_t)(ebp + 0xfffffff7u), (ecx & 0xffu));
/* e9fe67: jne 0xe9fe81 */
  if (!zf) goto L_e9fe81;
L_e9fe69: /* e9fe69: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e9fe6a: inc dword ptr [ebx + 0x1d0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x1d0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx + 0x1d0u), r);
  }
/* e9fe70: mov dword ptr [ebx + 0xc0], eax */
  W32((uint32_t)(ebx + 0xc0u), eax);
/* e9fe76: mov dword ptr [ebx + 0xbc], eax */
  W32((uint32_t)(ebx + 0xbcu), eax);
/* e9fe7c: jmp 0xea010d */
  goto L_ea010d;
L_e9fe81: /* e9fe81: movsx eax, cl */
  eax = (uint32_t)(int32_t)(int8_t)((ecx & 0xffu));
/* e9fe84: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9fe85: call 0xeac892 */
  esp -= 4; W32(esp, 0xe9fe8au); SPILL(); f_eac892(); if (g_unwind) return; RELOAD();
/* e9fe8a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9fe8c: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9fe8d: je 0xe9fe9a */
  if (zf) goto L_e9fe9a;
L_e9fe8f: /* e9fe8f: inc dword ptr [ebx + 0xc0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx + 0xc0u), r);
  }
/* e9fe95: jmp 0xea010d */
  goto L_ea010d;
L_e9fe9a: /* e9fe9a: mov dl, byte ptr [ebp - 9] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebp + 0xfffffff7u))) & 0xffu);
/* e9fe9d: cmp dl, 0x23 */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x23u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e9fea0: jne 0xea0044 */
  if (!zf) goto L_ea0044;
L_e9fea6: /* e9fea6: mov eax, dword ptr [ebx + 0xc0] */
  eax = R32((uint32_t)(ebx + 0xc0u));
/* e9feac: cmp eax, dword ptr [ebx + 0xbc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xbcu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* e9feb2: jne 0xea0146 */
  if (!zf) goto L_ea0146;
L_e9feb8: /* e9feb8: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* e9febb: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e9febc: cmp eax, dword ptr [ebx + 0xc4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xc4u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e9fec2: mov dword ptr [ebx + 0xc0], eax */
  W32((uint32_t)(ebx + 0xc0u), eax);
/* e9fec8: jae 0xe9fee0 */
  if (!cf) goto L_e9fee0;
L_e9feca: /* e9feca: cmp byte ptr [eax], 0xa */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e9fecd: je 0xe9fee0 */
  if (zf) goto L_e9fee0;
L_e9fecf: /* e9fecf: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e9fed0: mov ecx, eax */
  ecx = eax;
/* e9fed2: mov dword ptr [ebx + 0xc0], eax */
  W32((uint32_t)(ebx + 0xc0u), eax);
/* e9fed8: cmp ecx, dword ptr [ebx + 0xc4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xc4u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e9fede: jb 0xe9feca */
  if (cf) goto L_e9feca;
L_e9fee0: /* e9fee0: mov ecx, eax */
  ecx = eax;
/* e9fee2: sub ecx, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* e9fee5: cmp ecx, 5 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* e9fee8: jle 0xea003a */
  if ((zf || sf != of)) goto L_ea003a;
L_e9feee: /* e9feee: mov esi, dword ptr [ebp - 4] */
  esi = R32((uint32_t)(ebp + 0xfffffffcu));
/* e9fef1: push 5 */
  { uint32_t v = 0x5u; esp -= 4; W32(esp, v); }
/* e9fef3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9fef4: mov edi, 0xeb3918 */
  edi = 0xeb3918u;
/* e9fef9: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* e9fefb: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* e9fefd: jne 0xea003a */
  if (!zf) goto L_ea003a;
L_e9ff03: /* e9ff03: cmp dword ptr [ebp - 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e9ff06: jae 0xe9ff3d */
  if (!cf) goto L_e9ff3d;
L_e9ff08: /* e9ff08: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* e9ff0b: movsx eax, byte ptr [eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* e9ff0e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9ff0f: call 0xeac892 */
  esp -= 4; W32(esp, 0xe9ff14u); SPILL(); f_eac892(); if (g_unwind) return; RELOAD();
/* e9ff14: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9ff16: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9ff17: jne 0xe9ff3d */
  if (!zf) goto L_e9ff3d;
L_e9ff19: /* e9ff19: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* e9ff1c: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* e9ff1f: cmp eax, dword ptr [ebx + 0xc0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xc0u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e9ff25: jb 0xe9ff08 */
  if (cf) goto L_e9ff08;
L_e9ff27: /* e9ff27: jmp 0xe9ff3d */
  goto L_e9ff3d;
L_e9ff29: /* e9ff29: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* e9ff2c: movsx eax, byte ptr [eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* e9ff2f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9ff30: call 0xeac892 */
  esp -= 4; W32(esp, 0xe9ff35u); SPILL(); f_eac892(); if (g_unwind) return; RELOAD();
/* e9ff35: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9ff37: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9ff38: je 0xe9ff48 */
  if (zf) goto L_e9ff48;
L_e9ff3a: /* e9ff3a: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
L_e9ff3d: /* e9ff3d: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* e9ff40: cmp eax, dword ptr [ebx + 0xc0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xc0u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e9ff46: jb 0xe9ff29 */
  if (cf) goto L_e9ff29;
L_e9ff48: /* e9ff48: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* e9ff4b: mov esi, eax */
  esi = eax;
/* e9ff4d: jmp 0xe9ff66 */
  goto L_e9ff66;
L_e9ff4f: /* e9ff4f: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* e9ff52: movsx eax, byte ptr [eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* e9ff55: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9ff56: call 0xeac892 */
  esp -= 4; W32(esp, 0xe9ff5bu); SPILL(); f_eac892(); if (g_unwind) return; RELOAD();
/* e9ff5b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9ff5d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9ff5e: jne 0xe9ff6e */
  if (!zf) goto L_e9ff6e;
L_e9ff60: /* e9ff60: inc dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xfffffffcu), r);
  }
/* e9ff63: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
L_e9ff66: /* e9ff66: cmp eax, dword ptr [ebx + 0xc0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xc0u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e9ff6c: jb 0xe9ff4f */
  if (cf) goto L_e9ff4f;
L_e9ff6e: /* e9ff6e: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* e9ff71: mov edx, dword ptr [ebx + 0xc0] */
  edx = R32((uint32_t)(ebx + 0xc0u));
/* e9ff77: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e9ff79: mov ecx, eax */
  ecx = eax;
/* e9ff7b: jae 0xe9ff8b */
  if (!cf) goto L_e9ff8b;
L_e9ff7d: /* e9ff7d: cmp byte ptr [eax], 0x22 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x22u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e9ff80: je 0xe9ff8b */
  if (zf) goto L_e9ff8b;
L_e9ff82: /* e9ff82: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e9ff83: cmp eax, dword ptr [ebx + 0xc0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xc0u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e9ff89: jb 0xe9ff7d */
  if (cf) goto L_e9ff7d;
L_e9ff8b: /* e9ff8b: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e9ff8d: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* e9ff90: jae 0xe9ffa5 */
  if (!cf) goto L_e9ffa5;
L_e9ff92: /* e9ff92: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e9ff93: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e9ff95: jae 0xe9ffa5 */
  if (!cf) goto L_e9ffa5;
L_e9ff97: /* e9ff97: cmp byte ptr [eax], 0x22 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x22u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* e9ff9a: je 0xe9ffa5 */
  if (zf) goto L_e9ffa5;
L_e9ff9c: /* e9ff9c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* e9ff9d: cmp eax, dword ptr [ebx + 0xc0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xc0u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e9ffa3: jb 0xe9ff97 */
  if (cf) goto L_e9ff97;
L_e9ffa5: /* e9ffa5: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* e9ffa8: sub eax, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* e9ffab: sub ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* e9ffad: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* e9ffb0: mov edx, ecx */
  edx = ecx;
/* e9ffb2: mov eax, 0x100 */
  eax = 0x100u;
/* e9ffb7: cmp edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e9ffb9: jb 0xe9ffc0 */
  if (cf) goto L_e9ffc0;
L_e9ffbb: /* e9ffbb: mov edx, 0xff */
  edx = 0xffu;
L_e9ffc0: /* e9ffc0: cmp dword ptr [ebp - 4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* e9ffc3: jb 0xe9ffcc */
  if (cf) goto L_e9ffcc;
L_e9ffc5: /* e9ffc5: mov dword ptr [ebp - 4], 0xff */
  W32((uint32_t)(ebp + 0xfffffffcu), 0xffu);
L_e9ffcc: /* e9ffcc: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* e9ffce: je 0xea0002 */
  if (zf) goto L_ea0002;
L_e9ffd0: /* e9ffd0: mov ecx, edx */
  ecx = edx;
/* e9ffd2: mov eax, ecx */
  eax = ecx;
/* e9ffd4: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* e9ffd7: lea edi, [ebp - 0x110] */
  edi = (uint32_t)(ebp + 0xfffffef0u);
/* e9ffdd: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* e9ffdf: mov ecx, eax */
  ecx = eax;
/* e9ffe1: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* e9ffe4: lea eax, [ebp - 0x110] */
  eax = (uint32_t)(ebp + 0xfffffef0u);
/* e9ffea: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* e9ffec: and byte ptr [ebp + edx - 0x110], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + edx + 0xfffffef0u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(ebp + edx + 0xfffffef0u), r);
  }
/* e9fff4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* e9fff5: call 0xeac87a */
  esp -= 4; W32(esp, 0xe9fffau); SPILL(); f_eac87a(); if (g_unwind) return; RELOAD();
/* e9fffa: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* e9fffb: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* e9fffc: mov dword ptr [ebx + 0x1d0], eax */
  W32((uint32_t)(ebx + 0x1d0u), eax);
L_ea0002: /* ea0002: cmp dword ptr [ebp - 4], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ea0006: jbe 0xea010d */
  if ((cf | zf)) goto L_ea010d;
L_ea000c: /* ea000c: mov esi, dword ptr [ebp - 0x10] */
  esi = R32((uint32_t)(ebp + 0xfffffff0u));
/* ea000f: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ea0010: lea eax, [ebx + 0x1d4] */
  eax = (uint32_t)(ebx + 0x1d4u);
/* ea0016: jmp 0xea002d */
  goto L_ea002d;
L_ea0018: /* ea0018: mov cl, byte ptr [esi] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(esi))) & 0xffu);
/* ea001a: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ea001b: cmp cl, 0x5c */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x5cu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ea001e: mov byte ptr [eax], cl */
  W8((uint32_t)(eax), (ecx & 0xffu));
/* ea0020: jne 0xea002c */
  if (!zf) goto L_ea002c;
L_ea0022: /* ea0022: cmp esi, dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ea0025: jae 0xea002c */
  if (!cf) goto L_ea002c;
L_ea0027: /* ea0027: cmp byte ptr [esi], cl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi))); uint8_t b = (uint8_t)((ecx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ea0029: jne 0xea002c */
  if (!zf) goto L_ea002c;
L_ea002b: /* ea002b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
L_ea002c: /* ea002c: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
L_ea002d: /* ea002d: cmp esi, dword ptr [ebp - 8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff8u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ea0030: jb 0xea0018 */
  if (cf) goto L_ea0018;
L_ea0032: /* ea0032: and byte ptr [eax], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax), r);
  }
/* ea0035: jmp 0xea010d */
  goto L_ea010d;
L_ea003a: /* ea003a: push 0xeb38ec */
  { uint32_t v = 0xeb38ecu; esp -= 4; W32(esp, v); }
/* ea003f: jmp 0xea00d0 */
  goto L_ea00d0;
L_ea0044: /* ea0044: cmp dl, 0x3b */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x3bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ea0047: je 0xea00e3 */
  if (zf) goto L_ea00e3;
L_ea004d: /* ea004d: cmp dl, 0x2f */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x2fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ea0050: jne 0xea0146 */
  if (!zf) goto L_ea0146;
L_ea0056: /* ea0056: mov eax, dword ptr [ebx + 0xc0] */
  eax = R32((uint32_t)(ebx + 0xc0u));
/* ea005c: mov esi, dword ptr [ebx + 0xc4] */
  esi = R32((uint32_t)(ebx + 0xc4u));
/* ea0062: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* ea0065: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ea0067: jae 0xea0146 */
  if (!cf) goto L_ea0146;
L_ea006d: /* ea006d: cmp byte ptr [ecx], dl */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)((edx & 0xffu));
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ea006f: je 0xea00e3 */
  if (zf) goto L_ea00e3;
L_ea0071: /* ea0071: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ea0073: jae 0xea0146 */
  if (!cf) goto L_ea0146;
L_ea0079: /* ea0079: cmp byte ptr [ecx], 0x2a */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x2au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ea007c: jne 0xea0146 */
  if (!zf) goto L_ea0146;
L_ea0082: /* ea0082: add eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ea0085: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ea0087: mov dword ptr [ebx + 0xc0], eax */
  W32((uint32_t)(ebx + 0xc0u), eax);
/* ea008d: jae 0xea00cb */
  if (!cf) goto L_ea00cb;
L_ea008f: /* ea008f: mov eax, dword ptr [ebx + 0xc0] */
  eax = R32((uint32_t)(ebx + 0xc0u));
/* ea0095: mov dl, byte ptr [eax] */
  edx = (edx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* ea0097: cmp dl, 0x2a */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0x2au);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ea009a: jne 0xea00a8 */
  if (!zf) goto L_ea00a8;
L_ea009c: /* ea009c: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* ea009f: cmp ecx, esi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ea00a1: jae 0xea00a8 */
  if (!cf) goto L_ea00a8;
L_ea00a3: /* ea00a3: cmp byte ptr [ecx], 0x2f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ecx))); uint8_t b = (uint8_t)(0x2fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ea00a6: je 0xea00da */
  if (zf) goto L_ea00da;
L_ea00a8: /* ea00a8: cmp dl, 0xa */
  { uint8_t a = (uint8_t)((edx & 0xffu)); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ea00ab: jne 0xea00bc */
  if (!zf) goto L_ea00bc;
L_ea00ad: /* ea00ad: inc dword ptr [ebx + 0x1d0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x1d0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx + 0x1d0u), r);
  }
/* ea00b3: lea ecx, [eax + 1] */
  ecx = (uint32_t)(eax + 0x1u);
/* ea00b6: mov dword ptr [ebx + 0xbc], ecx */
  W32((uint32_t)(ebx + 0xbcu), ecx);
L_ea00bc: /* ea00bc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ea00bd: mov dword ptr [ebx + 0xc0], eax */
  W32((uint32_t)(ebx + 0xc0u), eax);
/* ea00c3: cmp eax, dword ptr [ebx + 0xc4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xc4u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ea00c9: jb 0xea008f */
  if (cf) goto L_ea008f;
L_ea00cb: /* ea00cb: push 0xeb38c8 */
  { uint32_t v = 0xeb38c8u; esp -= 4; W32(esp, v); }
L_ea00d0: /* ea00d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea00d1: call 0xe9ee11 */
  esp -= 4; W32(esp, 0xea00d6u); SPILL(); f_e9ee11(); if (g_unwind) return; RELOAD();
/* ea00d6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea00d7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea00d8: jmp 0xea010d */
  goto L_ea010d;
L_ea00da: /* ea00da: add dword ptr [ebx + 0xc0], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xc0u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ebx + 0xc0u), r);
  }
/* ea00e1: jmp 0xea010d */
  goto L_ea010d;
L_ea00e3: /* ea00e3: inc dword ptr [ebx + 0xc0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx + 0xc0u), r);
  }
/* ea00e9: mov eax, dword ptr [ebx + 0xc0] */
  eax = R32((uint32_t)(ebx + 0xc0u));
/* ea00ef: cmp eax, dword ptr [ebx + 0xc4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xc4u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ea00f5: jae 0xea010d */
  if (!cf) goto L_ea010d;
L_ea00f7: /* ea00f7: cmp byte ptr [eax], 0xa */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0xau);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ea00fa: je 0xea010d */
  if (zf) goto L_ea010d;
L_ea00fc: /* ea00fc: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ea00fd: mov ecx, eax */
  ecx = eax;
/* ea00ff: mov dword ptr [ebx + 0xc0], eax */
  W32((uint32_t)(ebx + 0xc0u), eax);
/* ea0105: cmp ecx, dword ptr [ebx + 0xc4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xc4u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ea010b: jb 0xea00f7 */
  if (cf) goto L_ea00f7;
L_ea010d: /* ea010d: mov eax, dword ptr [ebx + 0xc0] */
  eax = R32((uint32_t)(ebx + 0xc0u));
/* ea0113: cmp eax, dword ptr [ebx + 0xc4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xc4u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ea0119: jb 0xe9fe59 */
  if (cf) goto L_e9fe59;
L_ea011f: /* ea011f: cmp eax, dword ptr [ebx + 0xc4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xc4u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea0125: jne 0xea034f */
  if (!zf) goto L_ea034f;
L_ea012b: /* ea012b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ea012c: mov dword ptr [ebx + 0xc0], eax */
  W32((uint32_t)(ebx + 0xc0u), eax);
/* ea0132: mov dword ptr [ebx + 0x3d8], 1 */
  W32((uint32_t)(ebx + 0x3d8u), 0x1u);
/* ea013c: mov eax, 0x10c */
  eax = 0x10cu;
/* ea0141: jmp 0xea0352 */
  goto L_ea0352;
L_ea0146: /* ea0146: movsx esi, dl */
  esi = (uint32_t)(int32_t)(int8_t)((edx & 0xffu));
/* ea0149: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea014a: call 0xeac886 */
  esp -= 4; W32(esp, 0xea014fu); SPILL(); f_eac886(); if (g_unwind) return; RELOAD();
/* ea014f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea0151: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea0152: je 0xea024c */
  if (zf) goto L_ea024c;
L_ea0158: /* ea0158: mov esi, dword ptr [ebx + 0xc0] */
  esi = R32((uint32_t)(ebx + 0xc0u));
/* ea015e: lea eax, [esi + 1] */
  eax = (uint32_t)(esi + 0x1u);
/* ea0161: cmp eax, dword ptr [ebx + 0xc4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xc4u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ea0167: mov dword ptr [ebx + 0xc0], eax */
  W32((uint32_t)(ebx + 0xc0u), eax);
/* ea016d: jae 0xea019e */
  if (!cf) goto L_ea019e;
L_ea016f: /* ea016f: movsx eax, byte ptr [eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* ea0172: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0173: call 0xeac88c */
  esp -= 4; W32(esp, 0xea0178u); SPILL(); f_eac88c(); if (g_unwind) return; RELOAD();
/* ea0178: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea017a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea017b: jne 0xea0188 */
  if (!zf) goto L_ea0188;
L_ea017d: /* ea017d: mov eax, dword ptr [ebx + 0xc0] */
  eax = R32((uint32_t)(ebx + 0xc0u));
/* ea0183: cmp byte ptr [eax], 0x5f */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x5fu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ea0186: jne 0xea019e */
  if (!zf) goto L_ea019e;
L_ea0188: /* ea0188: inc dword ptr [ebx + 0xc0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx + 0xc0u), r);
  }
/* ea018e: mov eax, dword ptr [ebx + 0xc0] */
  eax = R32((uint32_t)(ebx + 0xc0u));
/* ea0194: mov ecx, eax */
  ecx = eax;
/* ea0196: cmp ecx, dword ptr [ebx + 0xc4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xc4u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ea019c: jb 0xea016f */
  if (cf) goto L_ea016f;
L_ea019e: /* ea019e: mov eax, dword ptr [ebx + 0xc0] */
  eax = R32((uint32_t)(ebx + 0xc0u));
/* ea01a4: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ea01a6: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ea01ab: jb 0xea01b2 */
  if (cf) goto L_ea01b2;
L_ea01ad: /* ea01ad: mov eax, 0xff */
  eax = 0xffu;
L_ea01b2: /* ea01b2: mov ecx, eax */
  ecx = eax;
/* ea01b4: mov edx, ecx */
  edx = ecx;
/* ea01b6: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ea01b9: lea edi, [ebx + 0xc8] */
  edi = (uint32_t)(ebx + 0xc8u);
/* ea01bf: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ea01c1: mov ecx, edx */
  ecx = edx;
/* ea01c3: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ea01c6: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* ea01c8: and byte ptr [eax + ebx + 0xc8], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + ebx + 0xc8u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax + ebx + 0xc8u), r);
  }
/* ea01d0: lea eax, [ebx + 0xc8] */
  eax = (uint32_t)(ebx + 0xc8u);
/* ea01d6: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* ea01d8: mov edi, 0xeb38c4 */
  edi = 0xeb38c4u;
/* ea01dd: mov esi, eax */
  esi = eax;
/* ea01df: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea01e0: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* ea01e2: mov dword ptr [ebx + 0x3d8], 1 */
  W32((uint32_t)(ebx + 0x3d8u), 0x1u);
/* ea01ec: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* ea01ee: jne 0xea01fa */
  if (!zf) goto L_ea01fa;
L_ea01f0: /* ea01f0: mov eax, 0x101 */
  eax = 0x101u;
/* ea01f5: jmp 0xea0352 */
  goto L_ea0352;
L_ea01fa: /* ea01fa: push 3 */
  { uint32_t v = 0x3u; esp -= 4; W32(esp, v); }
/* ea01fc: mov edi, 0xeb38c0 */
  edi = 0xeb38c0u;
/* ea0201: mov esi, eax */
  esi = eax;
/* ea0203: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea0204: xor edx, edx */
  edx = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* ea0206: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* ea0208: jne 0xea0214 */
  if (!zf) goto L_ea0214;
L_ea020a: /* ea020a: mov eax, 0x102 */
  eax = 0x102u;
/* ea020f: jmp 0xea0352 */
  goto L_ea0352;
L_ea0214: /* ea0214: mov esi, eax */
  esi = eax;
/* ea0216: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* ea0218: mov edi, 0xeb35f0 */
  edi = 0xeb35f0u;
/* ea021d: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea021e: xor eax, eax */
  eax = 0;
  zf = 1;
  sf = 0;
  pf = 1;
  cf = 0;
  of = 0;
/* ea0220: repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  { uint8_t a = 0, b = 0, r = 0; int any = 0;
  while (ecx) { a = R8(esi); b = R8(edi); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; any = 1; r = (uint8_t)(a - b); if (r != 0) break; }
  if (any) {
  zf = (r) == 0;
  } }
/* ea0222: jne 0xea022e */
  if (!zf) goto L_ea022e;
L_ea0224: /* ea0224: mov eax, 0x103 */
  eax = 0x103u;
/* ea0229: jmp 0xea0352 */
  goto L_ea0352;
L_ea022e: /* ea022e: mov ecx, ebx */
  ecx = ebx;
/* ea0230: call 0xe9ef47 */
  esp -= 4; W32(esp, 0xea0235u); SPILL(); f_e9ef47(); if (g_unwind) return; RELOAD();
/* ea0235: cmp eax, 0x109 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x109u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea023a: jne 0xea0352 */
  if (!zf) goto L_ea0352;
L_ea0240: /* ea0240: and dword ptr [ebx + 0x3d8], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x3d8u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(ebx + 0x3d8u), r);
  }
/* ea0247: jmp 0xea0352 */
  goto L_ea0352;
L_ea024c: /* ea024c: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea024d: call 0xeac880 */
  esp -= 4; W32(esp, 0xea0252u); SPILL(); f_eac880(); if (g_unwind) return; RELOAD();
/* ea0252: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea0254: mov eax, dword ptr [ebx + 0xc0] */
  eax = R32((uint32_t)(ebx + 0xc0u));
/* ea025a: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea025b: je 0xea0335 */
  if (zf) goto L_ea0335;
L_ea0261: /* ea0261: mov esi, eax */
  esi = eax;
/* ea0263: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ea0264: cmp eax, dword ptr [ebx + 0xc4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xc4u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ea026a: mov dword ptr [ebp - 8], 0x10a */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x10au);
/* ea0271: mov dword ptr [ebx + 0xc0], eax */
  W32((uint32_t)(ebx + 0xc0u), eax);
/* ea0277: jae 0xea02d4 */
  if (!cf) goto L_ea02d4;
L_ea0279: /* ea0279: movsx eax, byte ptr [eax] */
  eax = (uint32_t)(int32_t)(int8_t)(R8((uint32_t)(eax)));
/* ea027c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea027d: call 0xeac880 */
  esp -= 4; W32(esp, 0xea0282u); SPILL(); f_eac880(); if (g_unwind) return; RELOAD();
/* ea0282: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea0284: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea0285: jne 0xea02be */
  if (!zf) goto L_ea02be;
L_ea0287: /* ea0287: cmp dword ptr [ebx + 0xb4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xb4u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea028d: je 0xea029f */
  if (zf) goto L_ea029f;
L_ea028f: /* ea028f: mov eax, dword ptr [ebx + 0xc0] */
  eax = R32((uint32_t)(ebx + 0xc0u));
/* ea0295: mov al, byte ptr [eax] */
  eax = (eax & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* ea0297: cmp al, 0x2e */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2eu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ea0299: je 0xea02b7 */
  if (zf) goto L_ea02b7;
L_ea029b: /* ea029b: cmp al, 0x65 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x65u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ea029d: je 0xea02b7 */
  if (zf) goto L_ea02b7;
L_ea029f: /* ea029f: mov eax, dword ptr [ebx + 0xc0] */
  eax = R32((uint32_t)(ebx + 0xc0u));
/* ea02a5: mov cl, byte ptr [eax] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(eax))) & 0xffu);
/* ea02a7: cmp cl, 0x2b */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ea02aa: je 0xea02b1 */
  if (zf) goto L_ea02b1;
L_ea02ac: /* ea02ac: cmp cl, 0x2d */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2du);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ea02af: jne 0xea02d4 */
  if (!zf) goto L_ea02d4;
L_ea02b1: /* ea02b1: cmp byte ptr [eax - 1], 0x65 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + 0xffffffffu))); uint8_t b = (uint8_t)(0x65u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ea02b5: jne 0xea02d4 */
  if (!zf) goto L_ea02d4;
L_ea02b7: /* ea02b7: mov dword ptr [ebp - 8], 0x10b */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x10bu);
L_ea02be: /* ea02be: inc dword ptr [ebx + 0xc0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xc0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebx + 0xc0u), r);
  }
/* ea02c4: mov eax, dword ptr [ebx + 0xc0] */
  eax = R32((uint32_t)(ebx + 0xc0u));
/* ea02ca: mov ecx, eax */
  ecx = eax;
/* ea02cc: cmp ecx, dword ptr [ebx + 0xc4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xc4u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ea02d2: jb 0xea0279 */
  if (cf) goto L_ea0279;
L_ea02d4: /* ea02d4: mov eax, dword ptr [ebx + 0xc0] */
  eax = R32((uint32_t)(ebx + 0xc0u));
/* ea02da: sub eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ea02dc: cmp eax, 0x100 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x100u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ea02e1: jb 0xea02e8 */
  if (cf) goto L_ea02e8;
L_ea02e3: /* ea02e3: mov eax, 0xff */
  eax = 0xffu;
L_ea02e8: /* ea02e8: mov ecx, eax */
  ecx = eax;
/* ea02ea: mov edx, ecx */
  edx = ecx;
/* ea02ec: shr ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ecx = r;
  }
/* ea02ef: lea edi, [ebx + 0xc8] */
  edi = (uint32_t)(ebx + 0xc8u);
/* ea02f5: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* ea02f7: mov ecx, edx */
  ecx = edx;
/* ea02f9: and ecx, 3 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ea02fc: rep movsb byte ptr es:[edi], byte ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 1); esi += ecx * 1; edi += ecx * 1; ecx = 0; } else { while (ecx) { W8(edi, R8(esi)); esi += (DF ? -1 : 1); edi += (DF ? -1 : 1); ecx--; } }
/* ea02fe: and byte ptr [eax + ebx + 0xc8], 0 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax + ebx + 0xc8u))); uint8_t b = (uint8_t)(0x0u);
  uint8_t r = (uint8_t)(a & b);
  W8((uint32_t)(eax + ebx + 0xc8u), r);
  }
/* ea0306: cmp dword ptr [ebx + 0xb4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0xb4u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea030d: je 0xea0330 */
  if (zf) goto L_ea0330;
L_ea030f: /* ea030f: mov eax, dword ptr [ebx + 0xc0] */
  eax = R32((uint32_t)(ebx + 0xc0u));
/* ea0315: cmp eax, dword ptr [ebx + 0xc4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0xc4u)));
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* ea031b: jae 0xea0330 */
  if (!cf) goto L_ea0330;
L_ea031d: /* ea031d: cmp byte ptr [eax], 0x66 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x66u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ea0320: jne 0xea0330 */
  if (!zf) goto L_ea0330;
L_ea0322: /* ea0322: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ea0323: mov dword ptr [ebp - 8], 0x10b */
  W32((uint32_t)(ebp + 0xfffffff8u), 0x10bu);
/* ea032a: mov dword ptr [ebx + 0xc0], eax */
  W32((uint32_t)(ebx + 0xc0u), eax);
L_ea0330: /* ea0330: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* ea0333: jmp 0xea0352 */
  goto L_ea0352;
L_ea0335: /* ea0335: cmp byte ptr [eax], 0x2b */
  { uint8_t a = (uint8_t)(R8((uint32_t)(eax))); uint8_t b = (uint8_t)(0x2bu);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* ea0338: jne 0xea0344 */
  if (!zf) goto L_ea0344;
L_ea033a: /* ea033a: mov dword ptr [ebx + 0x3d8], 1 */
  W32((uint32_t)(ebx + 0x3d8u), 0x1u);
L_ea0344: /* ea0344: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* ea0345: mov dword ptr [ebx + 0xc0], eax */
  W32((uint32_t)(ebx + 0xc0u), eax);
/* ea034b: mov eax, esi */
  eax = esi;
/* ea034d: jmp 0xea0352 */
  goto L_ea0352;
L_ea034f: /* ea034f: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_ea0352: /* ea0352: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ea0353: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ea0354: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea0355: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* ea0356: ret  */
  esp += 4; SPILL(); return;
}

void f_ea0357(void) {
  LOAD_REGS();
L_ea0357: /* ea0357: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ea0358: mov ebp, esp */
  ebp = esp;
/* ea035a: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ea035d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea0360: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea0361: add eax, -4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ea0364: cmp eax, 0x2e */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* ea0367: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea0368: mov esi, ecx */
  esi = ecx;
/* ea036a: ja 0xea0b83 */
  if ((!cf && !zf)) goto L_ea0b83;
L_ea0370: /* ea0370: movzx eax, byte ptr [eax + 0xea0c5f] */
  eax = (uint32_t)(R8((uint32_t)(eax + 0xea0c5fu)));
/* ea0377: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea0378: jmp dword ptr [eax*4 + 0xea0be3] */
  switch (R32((uint32_t)(eax*4 + 0xea0be3u))) {
    case 0xea037fu: goto L_ea037f;
    case 0xea03d2u: goto L_ea03d2;
    case 0xea03e3u: goto L_ea03e3;
    case 0xea041bu: goto L_ea041b;
    case 0xea0469u: goto L_ea0469;
    case 0xea0499u: goto L_ea0499;
    case 0xea04e5u: goto L_ea04e5;
    case 0xea0548u: goto L_ea0548;
    case 0xea05ebu: goto L_ea05eb;
    case 0xea0678u: goto L_ea0678;
    case 0xea0692u: goto L_ea0692;
    case 0xea06f9u: goto L_ea06f9;
    case 0xea0748u: goto L_ea0748;
    case 0xea07fau: goto L_ea07fa;
    case 0xea086fu: goto L_ea086f;
    case 0xea088cu: goto L_ea088c;
    case 0xea08d8u: goto L_ea08d8;
    case 0xea092cu: goto L_ea092c;
    case 0xea0975u: goto L_ea0975;
    case 0xea09b5u: goto L_ea09b5;
    case 0xea09e2u: goto L_ea09e2;
    case 0xea0a3au: goto L_ea0a3a;
    case 0xea0a8bu: goto L_ea0a8b;
    case 0xea0ab4u: goto L_ea0ab4;
    case 0xea0ad8u: goto L_ea0ad8;
    case 0xea0af6u: goto L_ea0af6;
    case 0xea0b19u: goto L_ea0b19;
    case 0xea0b33u: goto L_ea0b33;
    case 0xea0b4cu: goto L_ea0b4c;
    case 0xea0b5fu: goto L_ea0b5f;
    case 0xea0b82u: goto L_ea0b82;
    default: guest_badjump(0xea0378, R32((uint32_t)(eax*4 + 0xea0be3u))); return;
  }
L_ea037f: /* ea037f: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* ea0382: lea edi, [esi + 0x24] */
  edi = (uint32_t)(esi + 0x24u);
/* ea0385: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0386: mov ecx, edi */
  ecx = edi;
/* ea0388: call 0xea204f */
  esp -= 4; W32(esp, 0xea038du); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea038d: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* ea0390: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0391: mov ecx, edi */
  ecx = edi;
/* ea0393: call 0xea204f */
  esp -= 4; W32(esp, 0xea0398u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea0398: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea039b: mov ecx, eax */
  ecx = eax;
/* ea039d: or ecx, dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* ea03a0: test ecx, 0xffffff00 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xffffff00u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea03a6: je 0xea03ba */
  if (zf) goto L_ea03ba;
L_ea03a8: /* ea03a8: push 0xeb3a98 */
  { uint32_t v = 0xeb3a98u; esp -= 4; W32(esp, v); }
L_ea03ad: /* ea03ad: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea03ae: call 0xe9ee11 */
  esp -= 4; W32(esp, 0xea03b3u); SPILL(); f_e9ee11(); if (g_unwind) return; RELOAD();
/* ea03b3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea03b4: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea03b5: jmp 0xea0b82 */
  goto L_ea0b82;
L_ea03ba: /* ea03ba: and dword ptr [esi + 0xac], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0xacu), r);
  }
/* ea03c1: or eax, 0xfffffe00 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffe00u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
L_ea03c6: /* ea03c6: shl eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 8;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* ea03c9: or eax, dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ea03cc: mov dword ptr [esi + 0xb4], eax */
  W32((uint32_t)(esi + 0xb4u), eax);
L_ea03d2: /* ea03d2: mov eax, dword ptr [esi + 0x1d0] */
  eax = R32((uint32_t)(esi + 0x1d0u));
/* ea03d8: mov dword ptr [esi + 0x3dc], eax */
  W32((uint32_t)(esi + 0x3dcu), eax);
/* ea03de: jmp 0xea0b82 */
  goto L_ea0b82;
L_ea03e3: /* ea03e3: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* ea03e6: lea edi, [esi + 0x24] */
  edi = (uint32_t)(esi + 0x24u);
/* ea03e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea03ea: mov ecx, edi */
  ecx = edi;
/* ea03ec: call 0xea204f */
  esp -= 4; W32(esp, 0xea03f1u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea03f1: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* ea03f4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea03f5: mov ecx, edi */
  ecx = edi;
/* ea03f7: call 0xea204f */
  esp -= 4; W32(esp, 0xea03fcu); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea03fc: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea03ff: mov edx, eax */
  edx = eax;
/* ea0401: or edx, dword ptr [ebp - 0xc] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff4u)));
  uint32_t r = (uint32_t)(a | b);
  edx = r;
  }
/* ea0404: mov ecx, 0xffffff00 */
  ecx = 0xffffff00u;
/* ea0409: test ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea040b: jne 0xea03a8 */
  if (!zf) goto L_ea03a8;
L_ea040d: /* ea040d: mov dword ptr [esi + 0xac], 1 */
  W32((uint32_t)(esi + 0xacu), 0x1u);
/* ea0417: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ea0419: jmp 0xea03c6 */
  goto L_ea03c6;
L_ea041b: /* ea041b: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* ea041e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea041f: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* ea0422: call 0xea204f */
  esp -= 4; W32(esp, 0xea0427u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea0427: lea eax, [ebp - 0x24] */
  eax = (uint32_t)(ebp + 0xffffffdcu);
/* ea042a: lea edi, [esi + 0x34] */
  edi = (uint32_t)(esi + 0x34u);
/* ea042d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea042e: mov ecx, edi */
  ecx = edi;
/* ea0430: call 0xea204f */
  esp -= 4; W32(esp, 0xea0435u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea0435: lea eax, [ebp - 0x28] */
  eax = (uint32_t)(ebp + 0xffffffd8u);
/* ea0438: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0439: mov ecx, edi */
  ecx = edi;
/* ea043b: call 0xea204f */
  esp -= 4; W32(esp, 0xea0440u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea0440: lea eax, [ebp - 0x2c] */
  eax = (uint32_t)(ebp + 0xffffffd4u);
/* ea0443: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0444: mov ecx, edi */
  ecx = edi;
/* ea0446: call 0xea204f */
  esp -= 4; W32(esp, 0xea044bu); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea044b: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* ea044e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea044f: mov ecx, edi */
  ecx = edi;
/* ea0451: call 0xea204f */
  esp -= 4; W32(esp, 0xea0456u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea0456: lea eax, [ebp - 0x30] */
  eax = (uint32_t)(ebp + 0xffffffd0u);
/* ea0459: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea045a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* ea045d: mov ecx, esi */
  ecx = esi;
/* ea045f: call 0xe9fb49 */
  esp -= 4; W32(esp, 0xea0464u); SPILL(); f_e9fb49(); if (g_unwind) return; RELOAD();
/* ea0464: jmp 0xea0b82 */
  goto L_ea0b82;
L_ea0469: /* ea0469: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* ea046c: lea edi, [esi + 0x54] */
  edi = (uint32_t)(esi + 0x54u);
/* ea046f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0470: mov ecx, edi */
  ecx = edi;
/* ea0472: call 0xea204f */
  esp -= 4; W32(esp, 0xea0477u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea0477: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* ea047a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea047b: mov ecx, edi */
  ecx = edi;
/* ea047d: call 0xea204f */
  esp -= 4; W32(esp, 0xea0482u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea0482: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* ea0485: lea ecx, [esi + 0x74] */
  ecx = (uint32_t)(esi + 0x74u);
/* ea0488: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xea048du); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* ea048d: add dword ptr [esi + 0xa0], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xa0u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0xa0u), r);
  }
/* ea0494: jmp 0xea0b82 */
  goto L_ea0b82;
L_ea0499: /* ea0499: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* ea049c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea049d: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* ea04a0: call 0xea204f */
  esp -= 4; W32(esp, 0xea04a5u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea04a5: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* ea04a8: lea edi, [esi + 0x54] */
  edi = (uint32_t)(esi + 0x54u);
/* ea04ab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea04ac: mov ecx, edi */
  ecx = edi;
/* ea04ae: call 0xea204f */
  esp -= 4; W32(esp, 0xea04b3u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea04b3: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* ea04b6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea04b7: mov ecx, edi */
  ecx = edi;
/* ea04b9: call 0xea204f */
  esp -= 4; W32(esp, 0xea04beu); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea04be: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* ea04c1: lea edi, [esi + 0x74] */
  edi = (uint32_t)(esi + 0x74u);
/* ea04c4: mov ecx, edi */
  ecx = edi;
/* ea04c6: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xea04cbu); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* ea04cb: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* ea04ce: or eax, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ea04d1: mov ecx, edi */
  ecx = edi;
/* ea04d3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea04d4: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xea04d9u); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* ea04d9: add dword ptr [esi + 0xa0], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xa0u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0xa0u), r);
  }
/* ea04e0: jmp 0xea0b82 */
  goto L_ea0b82;
L_ea04e5: /* ea04e5: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* ea04e8: lea edi, [esi + 0x44] */
  edi = (uint32_t)(esi + 0x44u);
/* ea04eb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea04ec: mov ecx, edi */
  ecx = edi;
/* ea04ee: call 0xea204f */
  esp -= 4; W32(esp, 0xea04f3u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea04f3: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* ea04f6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea04f7: mov ecx, edi */
  ecx = edi;
/* ea04f9: call 0xea204f */
  esp -= 4; W32(esp, 0xea04feu); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea04fe: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* ea0501: lea edi, [esi + 0x54] */
  edi = (uint32_t)(esi + 0x54u);
/* ea0504: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0505: mov ecx, edi */
  ecx = edi;
/* ea0507: call 0xea204f */
  esp -= 4; W32(esp, 0xea050cu); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea050c: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* ea050f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0510: mov ecx, edi */
  ecx = edi;
/* ea0512: call 0xea204f */
  esp -= 4; W32(esp, 0xea0517u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea0517: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* ea051a: lea edi, [esi + 0x74] */
  edi = (uint32_t)(esi + 0x74u);
/* ea051d: mov ecx, edi */
  ecx = edi;
/* ea051f: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xea0524u); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* ea0524: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* ea0527: or eax, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ea052a: mov ecx, edi */
  ecx = edi;
/* ea052c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea052d: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xea0532u); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* ea0532: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* ea0535: mov ecx, edi */
  ecx = edi;
/* ea0537: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xea053cu); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* ea053c: add dword ptr [esi + 0xa0], 0xc */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xa0u))); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0xa0u), r);
  }
/* ea0543: jmp 0xea0b82 */
  goto L_ea0b82;
L_ea0548: /* ea0548: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* ea054b: lea edi, [esi + 0x44] */
  edi = (uint32_t)(esi + 0x44u);
/* ea054e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea054f: mov ecx, edi */
  ecx = edi;
/* ea0551: call 0xea204f */
  esp -= 4; W32(esp, 0xea0556u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea0556: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* ea0559: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea055a: mov ecx, edi */
  ecx = edi;
/* ea055c: call 0xea204f */
  esp -= 4; W32(esp, 0xea0561u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea0561: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* ea0564: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0565: mov ecx, edi */
  ecx = edi;
/* ea0567: call 0xea204f */
  esp -= 4; W32(esp, 0xea056cu); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea056c: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* ea056f: lea edi, [esi + 0x54] */
  edi = (uint32_t)(esi + 0x54u);
/* ea0572: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0573: mov ecx, edi */
  ecx = edi;
/* ea0575: call 0xea204f */
  esp -= 4; W32(esp, 0xea057au); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea057a: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* ea057d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea057e: mov ecx, edi */
  ecx = edi;
/* ea0580: call 0xea204f */
  esp -= 4; W32(esp, 0xea0585u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea0585: cmp dword ptr [esi + 0xac], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea058c: jne 0xea05b0 */
  if (!zf) goto L_ea05b0;
L_ea058e: /* ea058e: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* ea0591: and eax, 0xffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ea0596: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea0599: jne 0xea05b0 */
  if (!zf) goto L_ea05b0;
L_ea059b: /* ea059b: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* ea059e: and eax, 0xffff0002 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffff0002u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ea05a3: or eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ea05a6: xor dword ptr [ebp - 0x1c], 0x1000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u))); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a ^ b);
  W32((uint32_t)(ebp + 0xffffffe4u), r);
  }
/* ea05ad: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
L_ea05b0: /* ea05b0: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* ea05b3: lea edi, [esi + 0x74] */
  edi = (uint32_t)(esi + 0x74u);
/* ea05b6: mov ecx, edi */
  ecx = edi;
/* ea05b8: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xea05bdu); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* ea05bd: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* ea05c0: or eax, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ea05c3: mov ecx, edi */
  ecx = edi;
/* ea05c5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea05c6: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xea05cbu); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* ea05cb: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* ea05ce: mov ecx, edi */
  ecx = edi;
/* ea05d0: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xea05d5u); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* ea05d5: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* ea05d8: mov ecx, edi */
  ecx = edi;
/* ea05da: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xea05dfu); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* ea05df: add dword ptr [esi + 0xa0], 0x10 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xa0u))); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0xa0u), r);
  }
/* ea05e6: jmp 0xea0b82 */
  goto L_ea0b82;
L_ea05eb: /* ea05eb: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* ea05ee: lea edi, [esi + 0x44] */
  edi = (uint32_t)(esi + 0x44u);
/* ea05f1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea05f2: mov ecx, edi */
  ecx = edi;
/* ea05f4: call 0xea204f */
  esp -= 4; W32(esp, 0xea05f9u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea05f9: lea eax, [ebp - 0x1c] */
  eax = (uint32_t)(ebp + 0xffffffe4u);
/* ea05fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea05fd: mov ecx, edi */
  ecx = edi;
/* ea05ff: call 0xea204f */
  esp -= 4; W32(esp, 0xea0604u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea0604: lea eax, [ebp - 0xc] */
  eax = (uint32_t)(ebp + 0xfffffff4u);
/* ea0607: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0608: mov ecx, edi */
  ecx = edi;
/* ea060a: call 0xea204f */
  esp -= 4; W32(esp, 0xea060fu); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea060f: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* ea0612: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0613: mov ecx, edi */
  ecx = edi;
/* ea0615: call 0xea204f */
  esp -= 4; W32(esp, 0xea061au); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea061a: lea eax, [ebp - 0x18] */
  eax = (uint32_t)(ebp + 0xffffffe8u);
/* ea061d: lea edi, [esi + 0x54] */
  edi = (uint32_t)(esi + 0x54u);
/* ea0620: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0621: mov ecx, edi */
  ecx = edi;
/* ea0623: call 0xea204f */
  esp -= 4; W32(esp, 0xea0628u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea0628: lea eax, [ebp - 8] */
  eax = (uint32_t)(ebp + 0xfffffff8u);
/* ea062b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea062c: mov ecx, edi */
  ecx = edi;
/* ea062e: call 0xea204f */
  esp -= 4; W32(esp, 0xea0633u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea0633: push dword ptr [ebp - 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff8u)); esp -= 4; W32(esp, v); }
/* ea0636: lea edi, [esi + 0x74] */
  edi = (uint32_t)(esi + 0x74u);
/* ea0639: mov ecx, edi */
  ecx = edi;
/* ea063b: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xea0640u); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* ea0640: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* ea0643: or eax, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ea0646: mov ecx, edi */
  ecx = edi;
/* ea0648: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0649: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xea064eu); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* ea064e: push dword ptr [ebp - 0xc] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff4u)); esp -= 4; W32(esp, v); }
/* ea0651: mov ecx, edi */
  ecx = edi;
/* ea0653: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xea0658u); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* ea0658: push dword ptr [ebp - 0x1c] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe4u)); esp -= 4; W32(esp, v); }
/* ea065b: mov ecx, edi */
  ecx = edi;
/* ea065d: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xea0662u); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* ea0662: push dword ptr [ebp - 0x20] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffe0u)); esp -= 4; W32(esp, v); }
/* ea0665: mov ecx, edi */
  ecx = edi;
/* ea0667: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xea066cu); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* ea066c: add dword ptr [esi + 0xa0], 0x14 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xa0u))); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esi + 0xa0u), r);
  }
/* ea0673: jmp 0xea0b82 */
  goto L_ea0b82;
L_ea0678: /* ea0678: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* ea067b: lea edi, [esi + 0x44] */
  edi = (uint32_t)(esi + 0x44u);
/* ea067e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea067f: mov ecx, edi */
  ecx = edi;
/* ea0681: call 0xea204f */
  esp -= 4; W32(esp, 0xea0686u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea0686: or byte ptr [ebp + 0xa], 0xf */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xau))); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a | b);
  W8((uint32_t)(ebp + 0xau), r);
  }
L_ea068a: /* ea068a: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* ea068d: jmp 0xea09ae */
  goto L_ea09ae;
L_ea0692: /* ea0692: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* ea0695: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0696: mov ecx, esi */
  ecx = esi;
/* ea0698: call 0xea204f */
  esp -= 4; W32(esp, 0xea069du); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea069d: lea eax, [esi + 0x3e4] */
  eax = (uint32_t)(esi + 0x3e4u);
/* ea06a3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea06a4: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* ea06a7: call 0xea204f */
  esp -= 4; W32(esp, 0xea06acu); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea06ac: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* ea06af: lea edi, [esi + 0x44] */
  edi = (uint32_t)(esi + 0x44u);
/* ea06b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea06b3: mov ecx, edi */
  ecx = edi;
/* ea06b5: mov dword ptr [esi + 0x3e0], 1 */
  W32((uint32_t)(esi + 0x3e0u), 0x1u);
/* ea06bf: call 0xea204f */
  esp -= 4; W32(esp, 0xea06c4u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea06c4: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* ea06c7: mov ecx, esi */
  ecx = esi;
/* ea06c9: call 0xe9f65e */
  esp -= 4; W32(esp, 0xea06ceu); SPILL(); f_e9f65e(); if (g_unwind) return; RELOAD();
/* ea06ce: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ea06d1: and ecx, 0xfff0ffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xfff0ffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ea06d7: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ea06d9: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_ea06dc: /* ea06dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea06dd: mov ecx, edi */
  ecx = edi;
/* ea06df: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xea06e4u); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* ea06e4: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* ea06e7: call 0xe81220 */
  esp -= 4; W32(esp, 0xea06ecu); SPILL(); f_e81220(); if (g_unwind) return; RELOAD();
/* ea06ec: and dword ptr [esi + 0x3e0], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x3e0u))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(esi + 0x3e0u), r);
  }
/* ea06f3: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea06f4: jmp 0xea0b82 */
  goto L_ea0b82;
L_ea06f9: /* ea06f9: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* ea06fc: lea edi, [esi + 0x44] */
  edi = (uint32_t)(esi + 0x44u);
/* ea06ff: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0700: mov ecx, edi */
  ecx = edi;
/* ea0702: call 0xea204f */
  esp -= 4; W32(esp, 0xea0707u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea0707: push dword ptr [ebp + 8] */
  { uint32_t v = R32((uint32_t)(ebp + 0x8u)); esp -= 4; W32(esp, v); }
/* ea070a: mov ecx, edi */
  ecx = edi;
/* ea070c: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xea0711u); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* ea0711: cmp dword ptr [esi + 0xb4], 0xffff0104 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xb4u))); uint32_t b = (uint32_t)(0xffff0104u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea071b: jne 0xea0b82 */
  if (!zf) goto L_ea0b82;
L_ea0721: /* ea0721: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea0724: and eax, 0x70000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ea0729: cmp eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea072e: jne 0xea0b82 */
  if (!zf) goto L_ea0b82;
L_ea0734: /* ea0734: test byte ptr [ebp + 0xb], 0xf */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xbu))); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea0738: je 0xea0b82 */
  if (zf) goto L_ea0b82;
L_ea073e: /* ea073e: push 0xeb3a6c */
  { uint32_t v = 0xeb3a6cu; esp -= 4; W32(esp, v); }
/* ea0743: jmp 0xea03ad */
  goto L_ea03ad;
L_ea0748: /* ea0748: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* ea074b: lea edi, [esi + 0x44] */
  edi = (uint32_t)(esi + 0x44u);
/* ea074e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea074f: mov ecx, edi */
  ecx = edi;
/* ea0751: call 0xea204f */
  esp -= 4; W32(esp, 0xea0756u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea0756: cmp dword ptr [esi + 0xb4], 0xffff0104 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xb4u))); uint32_t b = (uint32_t)(0xffff0104u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea0760: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ea0763: jne 0xea0785 */
  if (!zf) goto L_ea0785;
L_ea0765: /* ea0765: mov eax, ecx */
  eax = ecx;
/* ea0767: and eax, 0x70000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ea076c: cmp eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea0771: jne 0xea0785 */
  if (!zf) goto L_ea0785;
L_ea0773: /* ea0773: push 0xeb3a6c */
  { uint32_t v = 0xeb3a6cu; esp -= 4; W32(esp, v); }
L_ea0778: /* ea0778: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea0779: call 0xe9ee11 */
  esp -= 4; W32(esp, 0xea077eu); SPILL(); f_e9ee11(); if (g_unwind) return; RELOAD();
/* ea077e: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea077f: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea0780: jmp 0xea068a */
  goto L_ea068a;
L_ea0785: /* ea0785: mov eax, ecx */
  eax = ecx;
/* ea0787: and eax, 0xf000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  eax = r;
  }
/* ea078c: je 0xea07e6 */
  if (zf) goto L_ea07e6;
L_ea078e: /* ea078e: cmp eax, 0x2000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea0793: je 0xea07d8 */
  if (zf) goto L_ea07d8;
L_ea0795: /* ea0795: cmp eax, 0x4000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea079a: je 0xea07ca */
  if (zf) goto L_ea07ca;
L_ea079c: /* ea079c: cmp eax, 0x7000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea07a1: je 0xea07bc */
  if (zf) goto L_ea07bc;
L_ea07a3: /* ea07a3: cmp eax, 0x9000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x9000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea07a8: je 0xea07b5 */
  if (zf) goto L_ea07b5;
L_ea07aa: /* ea07aa: cmp eax, 0xa000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea07af: jne 0xea068a */
  if (!zf) goto L_ea068a;
L_ea07b5: /* ea07b5: push 0xeb3a3c */
  { uint32_t v = 0xeb3a3cu; esp -= 4; W32(esp, v); }
/* ea07ba: jmp 0xea0778 */
  goto L_ea0778;
L_ea07bc: /* ea07bc: and ecx, 0xf8ffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xf8ffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ea07c2: or ecx, 0x8000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x8000000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* ea07c8: jmp 0xea07f2 */
  goto L_ea07f2;
L_ea07ca: /* ea07ca: and ecx, 0xf5ffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xf5ffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ea07d0: or ecx, 0x5000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x5000000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* ea07d6: jmp 0xea07f2 */
  goto L_ea07f2;
L_ea07d8: /* ea07d8: and ecx, 0xf3ffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xf3ffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ea07de: or ecx, 0x3000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x3000000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
/* ea07e4: jmp 0xea07f2 */
  goto L_ea07f2;
L_ea07e6: /* ea07e6: and ecx, 0xf1ffffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xf1ffffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ea07ec: or ecx, 0x1000000 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1000000u);
  uint32_t r = (uint32_t)(a | b);
  ecx = r;
  }
L_ea07f2: /* ea07f2: mov dword ptr [ebp + 8], ecx */
  W32((uint32_t)(ebp + 0x8u), ecx);
/* ea07f5: jmp 0xea068a */
  goto L_ea068a;
L_ea07fa: /* ea07fa: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* ea07fd: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea07fe: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* ea0801: call 0xea204f */
  esp -= 4; W32(esp, 0xea0806u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea0806: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* ea0809: lea edi, [esi + 0x44] */
  edi = (uint32_t)(esi + 0x44u);
/* ea080c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea080d: mov ecx, edi */
  ecx = edi;
/* ea080f: call 0xea204f */
  esp -= 4; W32(esp, 0xea0814u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea0814: cmp dword ptr [esi + 0xac], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea081b: jne 0xea0824 */
  if (!zf) goto L_ea0824;
L_ea081d: /* ea081d: push 0xeb3a10 */
  { uint32_t v = 0xeb3a10u; esp -= 4; W32(esp, v); }
/* ea0822: jmp 0xea0851 */
  goto L_ea0851;
L_ea0824: /* ea0824: cmp dword ptr [esi + 0xb4], 0xffff0104 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xb4u))); uint32_t b = (uint32_t)(0xffff0104u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea082e: jne 0xea0846 */
  if (!zf) goto L_ea0846;
L_ea0830: /* ea0830: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea0833: and eax, 0x70000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x70000000u);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ea0838: cmp eax, 0x20000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea083d: jne 0xea0846 */
  if (!zf) goto L_ea0846;
L_ea083f: /* ea083f: push 0xeb3a6c */
  { uint32_t v = 0xeb3a6cu; esp -= 4; W32(esp, v); }
/* ea0844: jmp 0xea0851 */
  goto L_ea0851;
L_ea0846: /* ea0846: test byte ptr [ebp + 0xb], 0xf */
  { uint8_t a = (uint8_t)(R8((uint32_t)(ebp + 0xbu))); uint8_t b = (uint8_t)(0xfu);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ea084a: je 0xea0859 */
  if (zf) goto L_ea0859;
L_ea084c: /* ea084c: push 0xeb39e0 */
  { uint32_t v = 0xeb39e0u; esp -= 4; W32(esp, v); }
L_ea0851: /* ea0851: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea0852: call 0xe9ee11 */
  esp -= 4; W32(esp, 0xea0857u); SPILL(); f_e9ee11(); if (g_unwind) return; RELOAD();
/* ea0857: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea0858: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_ea0859: /* ea0859: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea085c: and eax, 0xf6ffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xf6ffffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ea0861: or eax, 0x6000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x6000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ea0866: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_ea0869: /* ea0869: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea086a: jmp 0xea09ae */
  goto L_ea09ae;
L_ea086f: /* ea086f: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* ea0872: lea edi, [esi + 0x44] */
  edi = (uint32_t)(esi + 0x44u);
/* ea0875: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0876: mov ecx, edi */
  ecx = edi;
/* ea0878: call 0xea204f */
  esp -= 4; W32(esp, 0xea087du); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea087d: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea0880: and eax, 0xffe4ffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffe4ffffu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ea0885: or eax, 0xe40000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe40000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ea088a: jmp 0xea0869 */
  goto L_ea0869;
L_ea088c: /* ea088c: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* ea088f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0890: mov ecx, esi */
  ecx = esi;
/* ea0892: call 0xea204f */
  esp -= 4; W32(esp, 0xea0897u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea0897: lea eax, [esi + 0x3e4] */
  eax = (uint32_t)(esi + 0x3e4u);
/* ea089d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea089e: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* ea08a1: call 0xea204f */
  esp -= 4; W32(esp, 0xea08a6u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea08a6: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* ea08a9: lea edi, [esi + 0x44] */
  edi = (uint32_t)(esi + 0x44u);
/* ea08ac: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea08ad: mov ecx, edi */
  ecx = edi;
/* ea08af: mov dword ptr [esi + 0x3e0], 1 */
  W32((uint32_t)(esi + 0x3e0u), 0x1u);
/* ea08b9: call 0xea204f */
  esp -= 4; W32(esp, 0xea08beu); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea08be: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* ea08c1: mov ecx, esi */
  ecx = esi;
/* ea08c3: call 0xe9f707 */
  esp -= 4; W32(esp, 0xea08c8u); SPILL(); f_e9f707(); if (g_unwind) return; RELOAD();
/* ea08c8: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* ea08cb: and ecx, 0xff00ffff */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xff00ffffu);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ea08d1: or eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ea08d3: jmp 0xea06dc */
  goto L_ea06dc;
L_ea08d8: /* ea08d8: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* ea08db: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea08dc: mov ecx, esi */
  ecx = esi;
/* ea08de: call 0xea204f */
  esp -= 4; W32(esp, 0xea08e3u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea08e3: lea eax, [esi + 0x3e4] */
  eax = (uint32_t)(esi + 0x3e4u);
/* ea08e9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea08ea: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* ea08ed: call 0xea204f */
  esp -= 4; W32(esp, 0xea08f2u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea08f2: xor edi, edi */
  edi = 0;
/* ea08f4: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea08f5: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ea08f6: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* ea08f9: mov ecx, esi */
  ecx = esi;
/* ea08fb: mov dword ptr [esi + 0x3e0], 1 */
  W32((uint32_t)(esi + 0x3e0u), 0x1u);
/* ea0905: call 0xe9f7a8 */
  esp -= 4; W32(esp, 0xea090au); SPILL(); f_e9f7a8(); if (g_unwind) return; RELOAD();
/* ea090a: or eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ea090f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0910: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* ea0913: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xea0918u); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* ea0918: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* ea091b: call 0xe81220 */
  esp -= 4; W32(esp, 0xea0920u); SPILL(); f_e81220(); if (g_unwind) return; RELOAD();
/* ea0920: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea0921: mov dword ptr [esi + 0x3e0], edi */
  W32((uint32_t)(esi + 0x3e0u), edi);
/* ea0927: jmp 0xea0b82 */
  goto L_ea0b82;
L_ea092c: /* ea092c: lea eax, [ebp - 0x10] */
  eax = (uint32_t)(ebp + 0xfffffff0u);
/* ea092f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0930: mov ecx, esi */
  ecx = esi;
/* ea0932: call 0xea204f */
  esp -= 4; W32(esp, 0xea0937u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea0937: lea eax, [esi + 0x3e4] */
  eax = (uint32_t)(esi + 0x3e4u);
/* ea093d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea093e: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* ea0941: call 0xea204f */
  esp -= 4; W32(esp, 0xea0946u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea0946: xor ebx, ebx */
  ebx = 0;
/* ea0948: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* ea094b: lea edi, [esi + 0x44] */
  edi = (uint32_t)(esi + 0x44u);
/* ea094e: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* ea094f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0950: mov ecx, edi */
  ecx = edi;
/* ea0952: mov dword ptr [esi + 0x3e0], ebx */
  W32((uint32_t)(esi + 0x3e0u), ebx);
/* ea0958: call 0xea204f */
  esp -= 4; W32(esp, 0xea095du); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea095d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ea095e: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* ea0961: mov ecx, esi */
  ecx = esi;
/* ea0963: push dword ptr [ebp - 0x10] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffff0u)); esp -= 4; W32(esp, v); }
/* ea0966: call 0xe9f7a8 */
  esp -= 4; W32(esp, 0xea096bu); SPILL(); f_e9f7a8(); if (g_unwind) return; RELOAD();
/* ea096b: or eax, 0x80000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ea0970: jmp 0xea06dc */
  goto L_ea06dc;
L_ea0975: /* ea0975: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* ea0978: lea edi, [esi + 0x44] */
  edi = (uint32_t)(esi + 0x44u);
/* ea097b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea097c: mov ecx, edi */
  ecx = edi;
/* ea097e: call 0xea204f */
  esp -= 4; W32(esp, 0xea0983u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea0983: cmp dword ptr [esi + 0xac], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea098a: je 0xea0993 */
  if (zf) goto L_ea0993;
L_ea098c: /* ea098c: push 0xeb3628 */
  { uint32_t v = 0xeb3628u; esp -= 4; W32(esp, v); }
/* ea0991: jmp 0xea09a1 */
  goto L_ea09a1;
L_ea0993: /* ea0993: cmp dword ptr [ebp - 4], 0xb0000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xb0000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea099a: je 0xea09a9 */
  if (zf) goto L_ea09a9;
L_ea099c: /* ea099c: push 0xeb39b8 */
  { uint32_t v = 0xeb39b8u; esp -= 4; W32(esp, v); }
L_ea09a1: /* ea09a1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea09a2: call 0xe9ee11 */
  esp -= 4; W32(esp, 0xea09a7u); SPILL(); f_e9ee11(); if (g_unwind) return; RELOAD();
/* ea09a7: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea09a8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_ea09a9: /* ea09a9: push 0x2000 */
  { uint32_t v = 0x2000u; esp -= 4; W32(esp, v); }
L_ea09ae: /* ea09ae: mov ecx, edi */
  ecx = edi;
/* ea09b0: jmp 0xea0b7d */
  goto L_ea0b7d;
L_ea09b5: /* ea09b5: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* ea09b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea09b9: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* ea09bc: call 0xea204f */
  esp -= 4; W32(esp, 0xea09c1u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea09c1: test dword ptr [ebp - 4], 0xffffe000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xffffe000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea09c8: je 0xea09d7 */
  if (zf) goto L_ea09d7;
L_ea09ca: /* ea09ca: push 0xeb39a0 */
  { uint32_t v = 0xeb39a0u; esp -= 4; W32(esp, v); }
/* ea09cf: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea09d0: call 0xe9ee11 */
  esp -= 4; W32(esp, 0xea09d5u); SPILL(); f_e9ee11(); if (g_unwind) return; RELOAD();
/* ea09d5: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea09d6: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_ea09d7: /* ea09d7: push dword ptr [ebp - 4] */
  { uint32_t v = R32((uint32_t)(ebp + 0xfffffffcu)); esp -= 4; W32(esp, v); }
/* ea09da: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* ea09dd: jmp 0xea0b7d */
  goto L_ea0b7d;
L_ea09e2: /* ea09e2: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* ea09e5: lea ebx, [esi + 0x44] */
  ebx = (uint32_t)(esi + 0x44u);
/* ea09e8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea09e9: mov ecx, ebx */
  ecx = ebx;
/* ea09eb: call 0xea204f */
  esp -= 4; W32(esp, 0xea09f0u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea09f0: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* ea09f3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea09f4: mov ecx, ebx */
  ecx = ebx;
/* ea09f6: call 0xea204f */
  esp -= 4; W32(esp, 0xea09fbu); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea09fb: cmp dword ptr [esi + 0xac], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea0a02: mov edi, 0x2000 */
  edi = 0x2000u;
/* ea0a07: je 0xea0a10 */
  if (zf) goto L_ea0a10;
L_ea0a09: /* ea0a09: push 0xeb3628 */
  { uint32_t v = 0xeb3628u; esp -= 4; W32(esp, v); }
/* ea0a0e: jmp 0xea0a2a */
  goto L_ea0a2a;
L_ea0a10: /* ea0a10: cmp dword ptr [ebp - 4], 0xb0000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu))); uint32_t b = (uint32_t)(0xb0000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea0a17: je 0xea0a20 */
  if (zf) goto L_ea0a20;
L_ea0a19: /* ea0a19: push 0xeb39b8 */
  { uint32_t v = 0xeb39b8u; esp -= 4; W32(esp, v); }
/* ea0a1e: jmp 0xea0a2a */
  goto L_ea0a2a;
L_ea0a20: /* ea0a20: test dword ptr [ebp + 8], edi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea0a23: je 0xea0a32 */
  if (zf) goto L_ea0a32;
L_ea0a25: /* ea0a25: push 0xeb396c */
  { uint32_t v = 0xeb396cu; esp -= 4; W32(esp, v); }
L_ea0a2a: /* ea0a2a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea0a2b: call 0xe9ee11 */
  esp -= 4; W32(esp, 0xea0a30u); SPILL(); f_e9ee11(); if (g_unwind) return; RELOAD();
/* ea0a30: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea0a31: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_ea0a32: /* ea0a32: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea0a35: or eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ea0a37: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0a38: jmp 0xea0a84 */
  goto L_ea0a84;
L_ea0a3a: /* ea0a3a: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* ea0a3d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0a3e: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* ea0a41: call 0xea204f */
  esp -= 4; W32(esp, 0xea0a46u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea0a46: lea eax, [ebp + 8] */
  eax = (uint32_t)(ebp + 0x8u);
/* ea0a49: lea ebx, [esi + 0x44] */
  ebx = (uint32_t)(esi + 0x44u);
/* ea0a4c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0a4d: mov ecx, ebx */
  ecx = ebx;
/* ea0a4f: call 0xea204f */
  esp -= 4; W32(esp, 0xea0a54u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea0a54: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea0a57: mov edi, 0x1fff */
  edi = 0x1fffu;
/* ea0a5c: and eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ea0a5e: add eax, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ea0a61: test eax, 0xffffe000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffe000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ea0a66: je 0xea0a75 */
  if (zf) goto L_ea0a75;
L_ea0a68: /* ea0a68: push 0xeb39a0 */
  { uint32_t v = 0xeb39a0u; esp -= 4; W32(esp, v); }
/* ea0a6d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea0a6e: call 0xe9ee11 */
  esp -= 4; W32(esp, 0xea0a73u); SPILL(); f_e9ee11(); if (g_unwind) return; RELOAD();
/* ea0a73: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea0a74: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_ea0a75: /* ea0a75: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* ea0a78: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* ea0a7b: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ea0a7d: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* ea0a7f: and ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  ecx = r;
  }
/* ea0a81: xor ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a ^ b);
  ecx = r;
  }
/* ea0a83: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
L_ea0a84: /* ea0a84: mov ecx, ebx */
  ecx = ebx;
/* ea0a86: jmp 0xea0b7d */
  goto L_ea0b7d;
L_ea0a8b: /* ea0a8b: push dword ptr [esi + 0x1c8] */
  { uint32_t v = R32((uint32_t)(esi + 0x1c8u)); esp -= 4; W32(esp, v); }
L_ea0a91: /* ea0a91: lea edi, [esi + 0x54] */
  edi = (uint32_t)(esi + 0x54u);
/* ea0a94: mov ecx, edi */
  ecx = edi;
/* ea0a96: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xea0a9bu); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* ea0a9b: push dword ptr [esi + 0x1cc] */
  { uint32_t v = R32((uint32_t)(esi + 0x1ccu)); esp -= 4; W32(esp, v); }
/* ea0aa1: mov ecx, edi */
  ecx = edi;
/* ea0aa3: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xea0aa8u); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
/* ea0aa8: mov ecx, esi */
  ecx = esi;
/* ea0aaa: call 0xe9fcc8 */
  esp -= 4; W32(esp, 0xea0aafu); SPILL(); f_e9fcc8(); if (g_unwind) return; RELOAD();
/* ea0aaf: jmp 0xea0b82 */
  goto L_ea0b82;
L_ea0ab4: /* ea0ab4: cmp dword ptr [esi + 0xac], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0xacu))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* ea0abb: jne 0xea0aca */
  if (!zf) goto L_ea0aca;
L_ea0abd: /* ea0abd: push 0xeb3944 */
  { uint32_t v = 0xeb3944u; esp -= 4; W32(esp, v); }
/* ea0ac2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea0ac3: call 0xe9ee11 */
  esp -= 4; W32(esp, 0xea0ac8u); SPILL(); f_e9ee11(); if (g_unwind) return; RELOAD();
/* ea0ac8: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea0ac9: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
L_ea0aca: /* ea0aca: mov eax, dword ptr [esi + 0x1c8] */
  eax = R32((uint32_t)(esi + 0x1c8u));
/* ea0ad0: or eax, 0x40000000 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* ea0ad5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0ad6: jmp 0xea0a91 */
  goto L_ea0a91;
L_ea0ad8: /* ea0ad8: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* ea0adb: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0adc: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* ea0adf: call 0xea204f */
  esp -= 4; W32(esp, 0xea0ae4u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea0ae4: fild dword ptr [ebp - 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ea0ae7: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* ea0aea: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ea0aec: jge 0xea0b14 */
  if ((sf == of)) goto L_ea0b14;
L_ea0aee: /* ea0aee: fadd dword ptr [0xeb350c] */
  ST0 = ST0 + (F32((uint32_t)(0xeb350cu)));
/* ea0af4: jmp 0xea0b14 */
  goto L_ea0b14;
L_ea0af6: /* ea0af6: lea eax, [ebp - 4] */
  eax = (uint32_t)(ebp + 0xfffffffcu);
/* ea0af9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0afa: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* ea0afd: call 0xea204f */
  esp -= 4; W32(esp, 0xea0b02u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea0b02: fild dword ptr [ebp - 4] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* ea0b05: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* ea0b08: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ea0b0a: jge 0xea0b12 */
  if ((sf == of)) goto L_ea0b12;
L_ea0b0c: /* ea0b0c: fadd dword ptr [0xeb350c] */
  ST0 = ST0 + (F32((uint32_t)(0xeb350cu)));
L_ea0b12: /* ea0b12: fchs  */
  ST0 = -ST0;
L_ea0b14: /* ea0b14: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* ea0b17: jmp 0xea0b77 */
  goto L_ea0b77;
L_ea0b19: /* ea0b19: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* ea0b1c: lea edi, [esi + 0x34] */
  edi = (uint32_t)(esi + 0x34u);
/* ea0b1f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0b20: mov ecx, edi */
  ecx = edi;
/* ea0b22: call 0xea204f */
  esp -= 4; W32(esp, 0xea0b27u); SPILL(); f_ea204f(); if (g_unwind) return; RELOAD();
/* ea0b27: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* ea0b2a: fchs  */
  ST0 = -ST0;
/* ea0b2c: mov ecx, edi */
  ecx = edi;
/* ea0b2e: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* ea0b31: jmp 0xea0b7a */
  goto L_ea0b7a;
L_ea0b33: /* ea0b33: lea eax, [esi + 0xc8] */
  eax = (uint32_t)(esi + 0xc8u);
/* ea0b39: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0b3a: mov ecx, esi */
  ecx = esi;
/* ea0b3c: call 0xea20c7 */
  esp -= 4; W32(esp, 0xea0b41u); SPILL(); f_ea20c7(); if (g_unwind) return; RELOAD();
/* ea0b41: push dword ptr [esi + 0x1d0] */
  { uint32_t v = R32((uint32_t)(esi + 0x1d0u)); esp -= 4; W32(esp, v); }
/* ea0b47: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* ea0b4a: jmp 0xea0b7d */
  goto L_ea0b7d;
L_ea0b4c: /* ea0b4c: lea eax, [esi + 0xc8] */
  eax = (uint32_t)(esi + 0xc8u);
/* ea0b52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0b53: call 0xeac87a */
  esp -= 4; W32(esp, 0xea0b58u); SPILL(); f_eac87a(); if (g_unwind) return; RELOAD();
/* ea0b58: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* ea0b59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0b5a: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* ea0b5d: jmp 0xea0b7d */
  goto L_ea0b7d;
L_ea0b5f: /* ea0b5f: lea eax, [ebp - 0x14] */
  eax = (uint32_t)(ebp + 0xffffffecu);
/* ea0b62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0b63: lea eax, [esi + 0xc8] */
  eax = (uint32_t)(esi + 0xc8u);
/* ea0b69: push 0xeb3940 */
  { uint32_t v = 0xeb3940u; esp -= 4; W32(esp, v); }
/* ea0b6e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ea0b6f: call 0xeac898 */
  esp -= 4; W32(esp, 0xea0b74u); SPILL(); f_eac898(); if (g_unwind) return; RELOAD();
/* ea0b74: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ea0b77: /* ea0b77: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
L_ea0b7a: /* ea0b7a: push dword ptr [ebp - 0x14] */
  { uint32_t v = R32((uint32_t)(ebp + 0xffffffecu)); esp -= 4; W32(esp, v); }
L_ea0b7d: /* ea0b7d: call 0xea1fe1 */
  esp -= 4; W32(esp, 0xea0b82u); SPILL(); f_ea1fe1(); if (g_unwind) return; RELOAD();
L_ea0b82: /* ea0b82: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
L_ea0b83: /* ea0b83: mov ecx, esi */
  ecx = esi;
/* ea0b85: call 0xea217a */
  esp -= 4; W32(esp, 0xea0b8au); SPILL(); f_ea217a(); if (g_unwind) return; RELOAD();
/* ea0b8a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ea0b8c: jl 0xea0bca */
  if ((sf != of)) goto L_ea0bca;
L_ea0b8e: /* ea0b8e: lea ecx, [esi + 0x14] */
  ecx = (uint32_t)(esi + 0x14u);
/* ea0b91: call 0xea217a */
  esp -= 4; W32(esp, 0xea0b96u); SPILL(); f_ea217a(); if (g_unwind) return; RELOAD();
/* ea0b96: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ea0b98: jl 0xea0bca */
  if ((sf != of)) goto L_ea0bca;
L_ea0b9a: /* ea0b9a: lea ecx, [esi + 0x24] */
  ecx = (uint32_t)(esi + 0x24u);
/* ea0b9d: call 0xea217a */
  esp -= 4; W32(esp, 0xea0ba2u); SPILL(); f_ea217a(); if (g_unwind) return; RELOAD();
/* ea0ba2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ea0ba4: jl 0xea0bca */
  if ((sf != of)) goto L_ea0bca;
L_ea0ba6: /* ea0ba6: lea ecx, [esi + 0x44] */
  ecx = (uint32_t)(esi + 0x44u);
/* ea0ba9: call 0xea217a */
  esp -= 4; W32(esp, 0xea0baeu); SPILL(); f_ea217a(); if (g_unwind) return; RELOAD();
/* ea0bae: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ea0bb0: jl 0xea0bca */
  if ((sf != of)) goto L_ea0bca;
L_ea0bb2: /* ea0bb2: lea ecx, [esi + 0x74] */
  ecx = (uint32_t)(esi + 0x74u);
/* ea0bb5: call 0xea217a */
  esp -= 4; W32(esp, 0xea0bbau); SPILL(); f_ea217a(); if (g_unwind) return; RELOAD();
/* ea0bba: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ea0bbc: jl 0xea0bca */
  if ((sf != of)) goto L_ea0bca;
L_ea0bbe: /* ea0bbe: lea ecx, [esi + 0x34] */
  ecx = (uint32_t)(esi + 0x34u);
/* ea0bc1: call 0xea217a */
  esp -= 4; W32(esp, 0xea0bc6u); SPILL(); f_ea217a(); if (g_unwind) return; RELOAD();
/* ea0bc6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ea0bc8: jge 0xea0bdd */
  if ((sf == of)) goto L_ea0bdd;
L_ea0bca: /* ea0bca: push 0x3bb */
  { uint32_t v = 0x3bbu; esp -= 4; W32(esp, v); }
/* ea0bcf: push 0xeb3920 */
  { uint32_t v = 0xeb3920u; esp -= 4; W32(esp, v); }
/* ea0bd4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ea0bd5: call 0xe9ee11 */
  esp -= 4; W32(esp, 0xea0bdau); SPILL(); f_e9ee11(); if (g_unwind) return; RELOAD();
/* ea0bda: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ea0bdd: /* ea0bdd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ea0bde: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ea0bdf: leave  */
  esp = ebp; ebp = R32(esp); esp += 4;
/* ea0be0: ret 4 */
  esp += 8; SPILL(); return;
}
