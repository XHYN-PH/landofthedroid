#include "recomp.h"
#include "rec_mod.h"

void f_895f1d(void) {
  LOAD_REGS();
L_895f1d: /* 895f1d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_895f20: /* 895f20: mov ebp, esi */
  ebp = esi;
/* 895f22: and ebp, 0xf0000000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xf0000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ebp = r;
  }
/* 895f28: jne 0x896022 */
  if (!zf) goto L_896022;
L_895f2e: /* 895f2e: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 895f32: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 895f38: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 895f3c: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 895f3f: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 895f45: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 895f4b: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 895f4f: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 895f53: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 895f56: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 895f58: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 895f5b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 895f5d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895f5f: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 895f61: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 895f64: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895f66: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 895f68: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 895f6a: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 895f6d: shr ebp, 0xa */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 895f70: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 895f76: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 895f7c: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 895f80: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 895f84: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 895f87: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 895f89: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 895f8c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 895f8e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895f90: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 895f93: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 895f95: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895f97: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 895f9a: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 895f9d: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 895fa0: shr ebp, 0x14 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 895fa3: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 895fa9: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 895faf: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 895fb3: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 895fb7: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 895fbb: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 895fbe: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 895fc0: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 895fc3: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 895fc5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895fc7: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 895fca: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 895fcc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895fce: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 895fd1: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 895fd4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895fd6: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 895fd9: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 895fdb: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 895fde: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895fe0: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 895fe2: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 895fe5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895fe7: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 895fea: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895fec: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 895fef: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 895ff1: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 895ff4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895ff6: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 895ff8: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 895ffb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895ffd: fstp dword ptr [edi + 0x10] */
  WF32((uint32_t)(edi + 0x10u), ST0); FPOP();
/* 896000: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 896003: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 896005: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 896008: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89600a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89600c: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 89600f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896011: fstp dword ptr [edi + 0x14] */
  WF32((uint32_t)(edi + 0x14u), ST0); FPOP();
/* 896014: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 896017: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89601a: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89601d: jmp 0x8963f6 */
  goto L_8963f6;
L_896022: /* 896022: cmp esi, 0xf0000000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xf0000000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 896028: jb 0x89607c */
  if (cf) goto L_89607c;
L_89602a: /* 89602a: mov ebx, dword ptr [esp + 0x84] */
  ebx = R32((uint32_t)(esp + 0x84u));
/* 896031: and esi, 0xfffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896037: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 89603b: lea esi, [ebx + esi*4] */
  esi = (uint32_t)(ebx + esi*4);
/* 89603e: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 896040: mov ebx, edi */
  ebx = edi;
/* 896042: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 896044: mov ebp, dword ptr [esi + 4] */
  ebp = R32((uint32_t)(esi + 0x4u));
/* 896047: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 89604a: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 89604d: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* 896050: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 896054: mov esi, dword ptr [esp + 0x84] */
  esi = R32((uint32_t)(esp + 0x84u));
/* 89605b: lea esi, [esi + ebx*4 + 0xc] */
  esi = (uint32_t)(esi + ebx*4 + 0xcu);
/* 89605f: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 896061: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 896065: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 896067: mov ebp, dword ptr [esi + 4] */
  ebp = R32((uint32_t)(esi + 0x4u));
/* 89606a: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 89606d: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 896070: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* 896073: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 896077: jmp 0x8963f2 */
  goto L_8963f2;
L_89607c: /* 89607c: test esi, 0xe0000000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xe0000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 896082: jne 0x8962bb */
  if (!zf) goto L_8962bb;
L_896088: /* 896088: mov ebp, dword ptr [ebx + 4] */
  ebp = R32((uint32_t)(ebx + 0x4u));
/* 89608b: mov dword ptr [esp + 0x44], ebp */
  W32((uint32_t)(esp + 0x44u), ebp);
/* 89608f: mov ebp, esi */
  ebp = esi;
/* 896091: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896097: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 89609d: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8960a1: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8960a5: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 8960a9: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8960af: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8960b3: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 8960b9: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 8960bd: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8960c1: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 8960c5: mov dword ptr [esp + 0x48], esi */
  W32((uint32_t)(esp + 0x48u), esi);
/* 8960c9: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 8960cd: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 8960d3: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8960d9: lea ebp, [ebp + esi*8] */
  ebp = (uint32_t)(ebp + esi*8);
/* 8960dd: mov esi, dword ptr [eax + 0xc] */
  esi = R32((uint32_t)(eax + 0xcu));
/* 8960e0: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 8960e4: and esi, 0x3ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8960ea: sub esi, 0x1ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8960f0: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 8960f4: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8960f8: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8960fc: shr esi, 0xa */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 8960ff: and esi, 0x3ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896105: sub esi, 0x1ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 89610b: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 89610f: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 896113: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 896117: shr esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 89611a: and esi, 0x3ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896120: sub esi, 0x1ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 896126: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 89612a: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
/* 89612e: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 896132: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 896135: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896137: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 89613a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89613c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89613e: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896140: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896143: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896145: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 896147: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 896149: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 89614c: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 89614e: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 896151: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896153: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896155: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 896158: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 89615a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89615c: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 89615f: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 896161: fstp dword ptr [esp + 0xa0] */
  WF32((uint32_t)(esp + 0xa0u), ST0); FPOP();
/* 896168: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 89616b: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 89616d: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 896170: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896172: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896174: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 896177: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896179: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89617b: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 89617e: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 896180: fstp dword ptr [esp + 0xa4] */
  WF32((uint32_t)(esp + 0xa4u), ST0); FPOP();
/* 896187: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 896189: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 89618c: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 89618e: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 896191: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896193: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 896195: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896198: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89619a: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 89619c: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 8961a0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8961a2: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 8961a5: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8961a7: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 8961aa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8961ac: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 8961ae: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 8961b1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8961b3: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 8961b5: fstp dword ptr [esp + 0x7c] */
  WF32((uint32_t)(esp + 0x7cu), ST0); FPOP();
/* 8961b9: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8961bb: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 8961be: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8961c0: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 8961c3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8961c5: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 8961c7: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 8961ca: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8961cc: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 8961ce: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 8961d5: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8961d8: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8961da: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8961dd: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8961df: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8961e1: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8961e3: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 8961e6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8961e8: fadd dword ptr [ebp] */
  ST0 = ST0 + (F32((uint32_t)(ebp)));
/* 8961eb: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 8961ed: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8961ef: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8961f1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8961f3: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 8961f6: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8961f8: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 8961fb: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8961fd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8961ff: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 896202: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896204: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896206: fadd dword ptr [ebp + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x4u)));
/* 896209: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 89620b: fadd dword ptr [esp + 0xa0] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xa0u)));
/* 896212: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 896215: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 896218: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 89621a: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 89621d: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89621f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896221: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 896224: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896226: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896228: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 89622b: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 89622d: fadd dword ptr [esp + 0xa4] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xa4u)));
/* 896234: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 896237: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 896239: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 89623c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 89623e: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 896241: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896243: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 896245: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 896248: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89624a: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 89624e: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 896250: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 896253: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 896256: fadd dword ptr [esp + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x78u)));
/* 89625a: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89625d: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 896260: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 896263: fstp dword ptr [esi - 0x20] */
  WF32((uint32_t)(esi + 0xffffffe0u), ST0); FPOP();
/* 896266: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 89626a: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 89626d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89626f: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 896272: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 896274: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 896277: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896279: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 89627b: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 89627e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896280: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 896282: fadd dword ptr [esp + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x7cu)));
/* 896286: fstp dword ptr [edi - 0x10] */
  WF32((uint32_t)(edi + 0xfffffff0u), ST0); FPOP();
/* 896289: fmul dword ptr [ebp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x2cu)));
/* 89628c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89628e: fmul dword ptr [ebp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x28u)));
/* 896291: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896293: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 896295: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* 896298: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89629a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89629c: fadd dword ptr [esp + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x80u)));
/* 8962a3: fstp dword ptr [edi - 0xc] */
  WF32((uint32_t)(edi + 0xfffffff4u), ST0); FPOP();
/* 8962a6: mov ebp, dword ptr [ebx - 8] */
  ebp = R32((uint32_t)(ebx + 0xfffffff8u));
/* 8962a9: mov dword ptr [edi - 8], ebp */
  W32((uint32_t)(edi + 0xfffffff8u), ebp);
/* 8962ac: mov ebp, dword ptr [ebx - 4] */
  ebp = R32((uint32_t)(ebx + 0xfffffffcu));
/* 8962af: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8962b1: mov dword ptr [edi - 4], ebp */
  W32((uint32_t)(edi + 0xfffffffcu), ebp);
/* 8962b4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8962b6: jmp 0x896e5f */
  goto L_896e5f;
L_8962bb: /* 8962bb: cmp ebp, 0x80000000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8962c1: jne 0x896410 */
  if (!zf) goto L_896410;
L_8962c7: /* 8962c7: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 8962cb: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8962d1: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 8962d5: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 8962d8: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 8962dc: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8962e2: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 8962e8: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8962ec: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 8962f0: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8962f4: shr ebp, 0xa */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 8962f7: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8962fd: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 896303: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896307: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 89630b: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 89630f: shr ebp, 0x14 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 896312: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896318: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 89631e: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896322: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 896326: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 89632a: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 89632d: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 89632f: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 896332: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896334: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896336: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 896339: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 89633b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89633d: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 89633f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 896341: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 896344: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 896346: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 896349: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 89634b: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 89634e: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896350: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896352: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896354: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896357: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896359: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 89635c: fst dword ptr [ebp + 4] */
  WF32((uint32_t)(ebp + 0x4u), ST0);
/* 89635f: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 896362: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 896365: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896367: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 89636a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89636c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89636e: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896370: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896373: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896375: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 896378: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 89637b: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 89637f: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 896382: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 896384: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 896387: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 896389: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 89638c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89638e: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 896390: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896393: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896395: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 896397: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 89639a: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 89639e: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 8963a1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8963a3: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 8963a6: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8963a8: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 8963ab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8963ad: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8963af: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 8963b2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8963b4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8963b6: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 8963ba: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 8963bd: add ebp, 0x18 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8963c0: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8963c3: fstp dword ptr [edi + 0x10] */
  WF32((uint32_t)(edi + 0x10u), ST0); FPOP();
/* 8963c6: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8963c9: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 8963cd: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 8963d0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8963d2: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 8963d5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8963d7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8963d9: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 8963dc: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 8963e0: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8963e3: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 8963e7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8963e9: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8963ec: fst dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0);
/* 8963ef: fstp dword ptr [edi + 0x14] */
  WF32((uint32_t)(edi + 0x14u), ST0); FPOP();
L_8963f2: /* 8963f2: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
L_8963f6: /* 8963f6: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 8963f9: mov dword ptr [edi + 0x18], esi */
  W32((uint32_t)(edi + 0x18u), esi);
/* 8963fc: mov esi, dword ptr [ebx + 8] */
  esi = R32((uint32_t)(ebx + 0x8u));
/* 8963ff: mov dword ptr [edi + 0x1c], esi */
  W32((uint32_t)(edi + 0x1cu), esi);
/* 896402: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 896405: add ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 896408: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 89640b: jmp 0x896e5b */
  goto L_896e5b;
L_896410: /* 896410: cmp ebp, 0x90000000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x90000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 896416: jne 0x8966a9 */
  if (!zf) goto L_8966a9;
L_89641c: /* 89641c: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 89641f: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 896423: mov dword ptr [esp + 0x48], ebx */
  W32((uint32_t)(esp + 0x48u), ebx);
/* 896427: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 89642d: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 896431: and ebx, 0xfff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 896437: lea ebx, [ebp + ebx*8] */
  ebx = (uint32_t)(ebp + ebx*8);
/* 89643b: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 89643f: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896445: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896449: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 89644d: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 896451: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896457: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 89645b: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 896461: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 896464: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 896468: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 89646c: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896472: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 896478: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 89647e: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896482: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 896486: shr ebp, 0xa */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 896489: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 89648f: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 896495: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 896499: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 89649d: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8964a1: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 8964a5: shr ebp, 0x14 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 8964a8: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 8964ac: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8964b2: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8964b6: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 8964bc: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8964c0: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 8964c4: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8964c8: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 8964cc: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 8964cf: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8964d1: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 8964d4: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8964d6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8964d8: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8964db: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8964dd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8964df: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 8964e1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8964e3: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 8964e7: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 8964ea: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8964ec: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 8964ef: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8964f1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8964f3: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 8964f6: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8964f8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8964fa: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 8964fd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8964ff: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 896503: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 896506: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896508: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 89650b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89650d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89650f: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 896512: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896514: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896516: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 896519: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89651b: fstp dword ptr [esp + 0x74] */
  WF32((uint32_t)(esp + 0x74u), ST0); FPOP();
/* 89651f: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 896523: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 896526: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 89652a: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 89652d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89652f: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 896533: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896536: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896538: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89653a: fstp dword ptr [esp + 0xb4] */
  WF32((uint32_t)(esp + 0xb4u), ST0); FPOP();
/* 896541: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 896545: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 896548: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 89654c: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 89654f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896551: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 896555: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896558: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89655a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89655c: fstp dword ptr [esp + 0xac] */
  WF32((uint32_t)(esp + 0xacu), ST0); FPOP();
/* 896563: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 896567: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 89656a: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 89656e: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 896571: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896573: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 896577: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 89657a: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 89657e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896580: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 896582: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 896585: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896587: fld dword ptr [ebx + 0x10] */
  { double v = F32((uint32_t)(ebx + 0x10u)); FPUSH(v); }
/* 89658a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89658c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89658e: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 896591: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896593: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896595: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 896597: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 89659b: fadd dword ptr [esp + 0x6c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x6cu)));
/* 89659f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8965a1: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 8965a3: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8965a5: fld dword ptr [ebx + 0x20] */
  { double v = F32((uint32_t)(ebx + 0x20u)); FPUSH(v); }
/* 8965a8: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8965aa: fld dword ptr [ebx + 0x1c] */
  { double v = F32((uint32_t)(ebx + 0x1cu)); FPUSH(v); }
/* 8965ad: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8965af: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8965b1: fld dword ptr [ebx + 0x18] */
  { double v = F32((uint32_t)(ebx + 0x18u)); FPUSH(v); }
/* 8965b4: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8965b6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8965b8: fadd dword ptr [ebx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x4u)));
/* 8965bb: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 8965bf: fadd dword ptr [esp + 0x70] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x70u)));
/* 8965c3: fst dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0);
/* 8965c6: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8965c9: fld dword ptr [ebx + 0x2c] */
  { double v = F32((uint32_t)(ebx + 0x2cu)); FPUSH(v); }
/* 8965cc: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8965ce: fld dword ptr [ebx + 0x28] */
  { double v = F32((uint32_t)(ebx + 0x28u)); FPUSH(v); }
/* 8965d1: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8965d3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8965d5: fld dword ptr [ebx + 0x24] */
  { double v = F32((uint32_t)(ebx + 0x24u)); FPUSH(v); }
/* 8965d8: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8965da: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8965dc: fadd dword ptr [ebx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8u)));
/* 8965df: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 8965e3: fadd dword ptr [esp + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x74u)));
/* 8965e7: fst dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0);
/* 8965ea: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8965ed: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 8965f1: fmul dword ptr [ebx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x14u)));
/* 8965f4: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 8965f8: fmul dword ptr [ebx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x10u)));
/* 8965fb: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 8965ff: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 896602: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
/* 896606: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896608: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89660b: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 89660f: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 896612: fmul dword ptr [ebx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xcu)));
/* 896615: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 896618: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89661b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89661d: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 896621: fadd dword ptr [esp + 0xac] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xacu)));
/* 896628: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89662a: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 89662d: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 896631: add ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 896634: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 896637: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 89663b: fmul dword ptr [ebx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20u)));
/* 89663e: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 896642: fmul dword ptr [ebx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x1cu)));
/* 896645: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896647: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 89664b: fmul dword ptr [ebx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x18u)));
/* 89664e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896650: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 896654: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896656: fst dword ptr [esi - 8] */
  WF32((uint32_t)(esi + 0xfffffff8u), ST0);
/* 896659: fstp dword ptr [edi - 0x10] */
  WF32((uint32_t)(edi + 0xfffffff0u), ST0); FPOP();
/* 89665c: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 896660: fmul dword ptr [ebx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x2cu)));
/* 896663: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 896667: fmul dword ptr [ebx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x28u)));
/* 89666a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89666c: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 896670: fmul dword ptr [ebx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x24u)));
/* 896673: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 896677: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896679: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 89667d: fadd dword ptr [esp + 0xb4] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xb4u)));
/* 896684: fst dword ptr [esi - 4] */
  WF32((uint32_t)(esi + 0xfffffffcu), ST0);
/* 896687: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 89668b: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89668e: fstp dword ptr [edi - 0xc] */
  WF32((uint32_t)(edi + 0xfffffff4u), ST0); FPOP();
/* 896691: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 896695: mov esi, dword ptr [ebx + 8] */
  esi = R32((uint32_t)(ebx + 0x8u));
/* 896698: mov dword ptr [edi - 8], esi */
  W32((uint32_t)(edi + 0xfffffff8u), esi);
/* 89669b: mov esi, dword ptr [ebx + 0xc] */
  esi = R32((uint32_t)(ebx + 0xcu));
/* 89669e: mov dword ptr [edi - 4], esi */
  W32((uint32_t)(edi + 0xfffffffcu), esi);
/* 8966a1: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8966a4: jmp 0x896e5b */
  goto L_896e5b;
L_8966a9: /* 8966a9: mov ebp, esi */
  ebp = esi;
/* 8966ab: and ebp, 0x70000000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x70000000u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8966b1: cmp ebp, 0x10000000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8966b7: jbe 0x896e63 */
  if ((cf | zf)) goto L_896e63;
L_8966bd: /* 8966bd: mov ebp, esi */
  ebp = esi;
/* 8966bf: shr ebp, 0x1c */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 28;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 8966c2: and ebp, 7 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8966c5: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8966c6: mov dword ptr [esp + 0x48], ebp */
  W32((uint32_t)(esp + 0x48u), ebp);
/* 8966ca: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 8966ce: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8966d4: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 8966d8: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 8966dc: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8966e2: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8966e6: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 8966e9: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8966ed: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 8966f1: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8966f7: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 8966fd: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 896703: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896707: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 89670b: shr ebp, 0xa */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 89670e: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896714: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 89671a: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 89671e: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 896722: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896726: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 89672a: shr ebp, 0x14 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 89672d: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 896731: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896737: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 89673b: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 896741: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896745: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 896749: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 89674d: fst dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0);
/* 896751: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 896754: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896758: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 89675b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89675d: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896761: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896764: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896766: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 89676a: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 89676e: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 896771: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896773: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 896776: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896778: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89677a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89677d: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 89677f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896781: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 896783: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 896787: fst dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0);
/* 89678b: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 89678f: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 896792: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896796: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 896799: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89679b: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89679f: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 8967a2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8967a4: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 8967a8: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8967ac: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 8967af: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8967b1: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 8967b4: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8967b6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8967b8: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 8967bb: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8967bd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8967bf: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 8967c2: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 8967c6: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 8967ca: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* 8967cb: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8967ce: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 8967d2: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8967d6: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 8967d9: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8967dd: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 8967e0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8967e2: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8967e6: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 8967e9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8967eb: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 8967ef: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8967f3: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 8967f6: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8967f8: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 8967fb: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8967fd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8967ff: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 896802: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896804: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896806: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 896809: mov esi, 1 */
  esi = 0x1u;
/* 89680e: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 896812: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 896816: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 89681a: jl 0x896c71 */
  if ((sf != of)) goto L_896c71;
L_896820: /* 896820: lea esi, [ebx + 0xc] */
  esi = (uint32_t)(ebx + 0xcu);
/* 896823: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
/* 89682b: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
L_89682f: /* 89682f: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 896833: mov esi, dword ptr [esi - 8] */
  esi = R32((uint32_t)(esi + 0xfffffff8u));
/* 896836: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 89683a: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 89683e: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896844: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 896848: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 89684c: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896852: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 896856: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 89685a: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 896860: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 896864: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 896867: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896869: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 89686c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89686e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896870: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 896873: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896875: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896877: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 896879: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 89687d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89687f: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 896882: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896884: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 896887: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896889: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89688b: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 89688d: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896890: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896892: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 896895: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896899: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 89689d: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 8968a0: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8968a2: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 8968a5: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8968a7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8968a9: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8968ab: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 8968ae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8968b0: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 8968b3: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 8968b7: fadd dword ptr [esp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x54u)));
/* 8968bb: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 8968bf: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8968c3: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 8968c6: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8968ca: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 8968cd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8968cf: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8968d3: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 8968d6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8968d8: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 8968dc: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 8968e0: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 8968e4: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8968e8: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 8968eb: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8968ef: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 8968f2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8968f4: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8968f8: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 8968fb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8968fd: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896901: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 896905: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 896909: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 89690d: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 896910: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896914: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 896917: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896919: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 89691d: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896921: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896924: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 896928: mov esi, dword ptr [esi - 4] */
  esi = R32((uint32_t)(esi + 0xfffffffcu));
/* 89692b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89692d: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896931: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 896935: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 89693b: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 89693f: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 896943: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 896947: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 89694d: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 896951: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 896955: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 896959: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 89695f: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 896963: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 896966: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896968: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 89696b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89696d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89696f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 896972: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896974: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896976: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 896978: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 89697c: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 89697e: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 896982: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 896985: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896987: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 89698a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89698c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89698e: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896990: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896993: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896995: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 896998: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 89699c: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 89699e: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 8969a0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8969a2: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 8969a5: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8969a7: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 8969aa: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8969ac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8969ae: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8969b0: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 8969b3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8969b5: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 8969b8: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 8969bc: fadd dword ptr [esp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x54u)));
/* 8969c0: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8969c4: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 8969c7: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8969cb: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 8969ce: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8969d0: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8969d4: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 8969d7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8969d9: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 8969dd: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 8969e1: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 8969e5: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8969e9: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 8969ec: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8969f0: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 8969f3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8969f5: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8969f9: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 8969fc: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 896a00: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896a02: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896a06: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 896a0a: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 896a0e: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896a12: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 896a15: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896a19: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 896a1c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896a1e: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896a22: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896a25: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 896a29: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 896a2b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896a2d: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896a31: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 896a35: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896a3b: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 896a3f: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 896a43: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 896a47: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896a4d: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 896a51: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 896a55: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 896a59: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 896a5f: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 896a63: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 896a66: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896a68: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 896a6b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896a6d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896a6f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 896a72: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896a74: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896a76: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 896a78: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896a7c: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 896a80: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 896a84: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 896a87: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896a89: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 896a8c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896a8e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896a90: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896a92: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896a95: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896a97: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 896a9a: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896a9e: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 896aa0: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 896aa4: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 896aa7: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896aa9: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 896aac: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896aae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896ab0: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896ab2: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896ab5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896ab7: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 896aba: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896abe: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 896ac0: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 896ac4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 896ac6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 896ac8: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896acc: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 896acf: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896ad3: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 896ad6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896ad8: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896adc: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896adf: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 896ae3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896ae5: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896ae9: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 896aed: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 896af1: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896af5: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 896af8: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896afc: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 896aff: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896b01: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896b05: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896b08: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896b0a: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896b0e: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 896b12: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 896b16: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896b1a: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 896b1d: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896b21: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 896b24: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896b26: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896b2a: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896b2d: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 896b31: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 896b34: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896b36: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896b3a: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 896b3e: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896b44: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 896b48: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 896b4c: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 896b50: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896b56: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 896b5a: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 896b5e: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 896b62: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 896b68: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 896b6c: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 896b6f: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896b71: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 896b74: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896b76: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896b78: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 896b7b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896b7d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896b7f: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 896b81: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896b85: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 896b89: fst dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0);
/* 896b8d: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 896b90: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896b92: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 896b95: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896b97: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896b99: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896b9b: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896b9e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896ba0: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 896ba3: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896ba7: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 896bab: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 896baf: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 896bb2: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896bb4: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 896bb7: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896bb9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896bbb: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896bbd: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896bc0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896bc2: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 896bc5: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896bc9: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 896bcd: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 896bd0: fadd dword ptr [esp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x54u)));
/* 896bd4: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
/* 896bd8: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 896bdc: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 896be0: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896be4: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 896be7: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896beb: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 896bee: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896bf0: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896bf4: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896bf7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896bf9: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896bfd: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 896c01: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 896c05: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896c09: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 896c0c: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896c10: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 896c13: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896c15: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896c19: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896c1c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896c1e: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896c22: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 896c26: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 896c2a: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896c2e: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 896c31: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896c35: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 896c38: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896c3a: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896c3e: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896c41: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 896c45: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 896c48: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 896c4c: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 896c50: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896c52: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 896c55: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896c57: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896c5b: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 896c5f: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 896c63: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 896c67: jl 0x89682f */
  if ((sf != of)) goto L_89682f;
L_896c6d: /* 896c6d: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
L_896c71: /* 896c71: cmp esi, dword ptr [esp + 0x48] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x48u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896c75: jge 0x896d8c */
  if ((sf == of)) goto L_896d8c;
L_896c7b: /* 896c7b: jmp 0x896c80 */
  goto L_896c80;
L_896c80: /* 896c80: mov esi, dword ptr [ebx + esi*4] */
  esi = R32((uint32_t)(ebx + esi*4));
/* 896c83: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 896c87: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 896c8b: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896c91: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 896c95: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 896c99: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896c9f: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896ca3: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 896ca7: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 896cad: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 896cb0: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896cb2: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 896cb5: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896cb7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896cb9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 896cbc: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896cbe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896cc0: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 896cc2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 896cc4: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 896cc6: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 896cc9: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896ccb: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 896cce: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896cd0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896cd2: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896cd4: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896cd7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896cd9: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 896cdc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 896cde: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 896ce2: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 896ce6: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 896ce9: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896ceb: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 896cee: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896cf0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896cf2: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896cf4: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896cf7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896cf9: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 896cfc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 896cfe: fadd dword ptr [esp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x54u)));
/* 896d02: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 896d06: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896d0a: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 896d0d: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896d11: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 896d14: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896d16: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896d1a: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896d1d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896d1f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 896d21: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 896d25: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 896d29: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896d2d: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 896d30: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896d34: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 896d37: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896d39: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896d3d: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896d40: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896d42: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 896d44: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 896d48: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 896d4c: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896d50: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 896d53: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896d57: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 896d5a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896d5c: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896d60: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 896d64: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896d67: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 896d6b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 896d6c: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896d6e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896d70: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 896d74: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 896d76: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 896d7a: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 896d7e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 896d80: jl 0x896c80 */
  if ((sf != of)) goto L_896c80;
L_896d86: /* 896d86: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 896d8a: jmp 0x896d8e */
  goto L_896d8e;
L_896d8c: /* 896d8c: fstp st(0) */
  STI(0) = ST0; FPOP();
L_896d8e: /* 896d8e: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 896d92: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
/* 896d96: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 896d99: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 896d9c: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 896d9f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 896da1: jns 0x896e12 */
  if (!sf) goto L_896e12;
L_896da3: /* 896da3: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 896da7: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 896da9: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 896dad: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 896db0: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 896db4: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* 896db7: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
/* 896dbb: mov esi, edi */
  esi = edi;
/* 896dbd: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 896dbf: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 896dc3: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 896dc6: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 896dca: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* 896dcd: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 896dd1: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 896dd5: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 896dd7: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 896ddb: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 896dde: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 896de2: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* 896de5: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 896de9: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 896ded: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 896def: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 896df3: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 896df6: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 896dfa: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* 896dfd: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 896e01: mov esi, 0x18 */
  esi = 0x18u;
/* 896e06: add ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 896e08: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 896e0c: add dword ptr [esp + 0x3c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x3cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x3cu), r);
  }
/* 896e10: jmp 0x896e3c */
  goto L_896e3c;
L_896e12: /* 896e12: mov esi, edi */
  esi = edi;
/* 896e14: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 896e16: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 896e1a: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 896e1d: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 896e21: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* 896e24: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 896e28: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 896e2c: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 896e2e: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 896e32: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 896e35: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 896e39: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
L_896e3c: /* 896e3c: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
/* 896e40: mov ebp, dword ptr [ebx + esi*4] */
  ebp = R32((uint32_t)(ebx + esi*4));
/* 896e43: mov dword ptr [edi + 0x18], ebp */
  W32((uint32_t)(edi + 0x18u), ebp);
/* 896e46: mov ebp, dword ptr [ebx + esi*4 + 4] */
  ebp = R32((uint32_t)(ebx + esi*4 + 0x4u));
/* 896e4a: mov dword ptr [edi + 0x1c], ebp */
  W32((uint32_t)(edi + 0x1cu), ebp);
/* 896e4d: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 896e51: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 896e54: add ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 896e57: lea ebx, [ebx + esi*4 + 8] */
  ebx = (uint32_t)(ebx + esi*4 + 0x8u);
L_896e5b: /* 896e5b: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
L_896e5f: /* 896e5f: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
L_896e63: /* 896e63: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 896e65: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 896e68: mov ebp, dword ptr [esp + 0x68] */
  ebp = R32((uint32_t)(esp + 0x68u));
/* 896e6c: mov dword ptr [esp + 0x44], esi */
  W32((uint32_t)(esp + 0x44u), esi);
/* 896e70: jb 0x895f20 */
  if (cf) goto L_895f20;
L_896e76: /* 896e76: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 896e78: mov ecx, dword ptr [esp + 0xa8] */
  ecx = R32((uint32_t)(esp + 0xa8u));
/* 896e7f: mov edx, dword ptr [0xce83c4] */
  edx = R32((uint32_t)(0xce83c4u));
/* 896e85: lea eax, [ecx + eax - 0xc] */
  eax = (uint32_t)(ecx + eax + 0xfffffff4u);
/* 896e89: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 896e8f: add dword ptr [ecx + edx*4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + edx*4), r);
  }
/* 896e92: mov esi, dword ptr [esp + 0x120] */
  esi = R32((uint32_t)(esp + 0x120u));
/* 896e99: mov eax, dword ptr [esi + 0x1a0] */
  eax = R32((uint32_t)(esi + 0x1a0u));
/* 896e9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 896ea1: je 0x897083 */
  if (zf) goto L_897083;
L_896ea7: /* 896ea7: mov eax, dword ptr [esi + 0x18c] */
  eax = R32((uint32_t)(esi + 0x18cu));
/* 896ead: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 896eb0: je 0x897011 */
  if (zf) goto L_897011;
L_896eb6: /* 896eb6: mov edx, dword ptr [ebp + 0xa4] */
  edx = R32((uint32_t)(ebp + 0xa4u));
/* 896ebc: lea ecx, [ebp + 0xa4] */
  ecx = (uint32_t)(ebp + 0xa4u);
/* 896ec2: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x896ec4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 896ec4: mov eax, dword ptr [ebp + 0xbc] */
  eax = R32((uint32_t)(ebp + 0xbcu));
/* 896eca: lea ecx, [ebp + 0xbc] */
  ecx = (uint32_t)(ebp + 0xbcu);
/* 896ed0: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x896ed2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 896ed2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 896ed4: lea edi, [esi + 0x188] */
  edi = (uint32_t)(esi + 0x188u);
/* 896eda: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 896edc: mov ecx, edi */
  ecx = edi;
/* 896ede: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x896ee4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 896ee4: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 896ee7: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 896ee9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 896eea: mov ecx, edi */
  ecx = edi;
/* 896eec: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x896ef2u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 896ef2: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 896ef6: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x896efcu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 896efc: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 896f00: mov byte ptr [esp + 0x114], 2 */
  W8((uint32_t)(esp + 0x114u), 0x2u);
/* 896f08: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x896f0eu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 896f0e: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 896f11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 896f12: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 896f14: lea ecx, [esp + 0x80] */
  ecx = (uint32_t)(esp + 0x80u);
/* 896f1b: mov byte ptr [esp + 0x11c], 3 */
  W8((uint32_t)(esp + 0x11cu), 0x3u);
/* 896f23: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x896f29u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 896f29: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 896f2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 896f2d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 896f2f: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 896f33: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x896f39u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 896f39: mov eax, dword ptr [ebp + 0xb4] */
  eax = R32((uint32_t)(ebp + 0xb4u));
/* 896f3f: xor ecx, ecx */
  ecx = 0;
/* 896f41: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 896f43: jle 0x896f86 */
  if ((zf || sf != of)) goto L_896f86;
L_896f45: /* 896f45: jmp 0x896f50 */
  goto L_896f50;
L_896f50: /* 896f50: mov edx, dword ptr [ebp + 0xb0] */
  edx = R32((uint32_t)(ebp + 0xb0u));
/* 896f56: movzx eax, word ptr [edx + ecx*8 + 4] */
  eax = (uint32_t)(R16((uint32_t)(edx + ecx*8 + 0x4u)));
/* 896f5b: mov edx, dword ptr [esp + 0x78] */
  edx = R32((uint32_t)(esp + 0x78u));
/* 896f5f: inc dword ptr [edx + eax*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edx + eax*4), r);
  }
/* 896f62: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 896f66: cmp dword ptr [edx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 896f6a: jne 0x896f7b */
  if (!zf) goto L_896f7b;
L_896f6c: /* 896f6c: mov ebx, dword ptr [ebp + 0xb0] */
  ebx = R32((uint32_t)(ebp + 0xb0u));
/* 896f72: movzx ebx, word ptr [ebx + ecx*8 + 6] */
  ebx = (uint32_t)(R16((uint32_t)(ebx + ecx*8 + 0x6u)));
/* 896f77: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 896f78: mov dword ptr [edx + eax*4], ebx */
  W32((uint32_t)(edx + eax*4), ebx);
L_896f7b: /* 896f7b: mov eax, dword ptr [ebp + 0xb4] */
  eax = R32((uint32_t)(ebp + 0xb4u));
/* 896f81: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 896f82: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896f84: jl 0x896f50 */
  if ((sf != of)) goto L_896f50;
L_896f86: /* 896f86: mov eax, dword ptr [esi + 0x18c] */
  eax = R32((uint32_t)(esi + 0x18cu));
/* 896f8c: xor ecx, ecx */
  ecx = 0;
/* 896f8e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896f90: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 896f94: jle 0x896fef */
  if ((zf || sf != of)) goto L_896fef;
L_896f96: /* 896f96: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 896f9a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_896fa0: /* 896fa0: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 896fa4: mov eax, dword ptr [ebp + 0xc8] */
  eax = R32((uint32_t)(ebp + 0xc8u));
/* 896faa: movzx eax, word ptr [eax + edx] */
  eax = (uint32_t)(R16((uint32_t)(eax + edx)));
/* 896fae: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896fb1: jge 0x896fce */
  if ((sf == of)) goto L_896fce;
L_896fb3: /* 896fb3: mov ebx, dword ptr [esp + 0x78] */
  ebx = R32((uint32_t)(esp + 0x78u));
/* 896fb7: mov ebx, dword ptr [ebx + eax*4] */
  ebx = R32((uint32_t)(ebx + eax*4));
/* 896fba: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 896fbc: mov dword ptr [ecx + edx + 0xc], ebx */
  W32((uint32_t)(ecx + edx + 0xcu), ebx);
/* 896fc0: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 896fc4: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 896fc7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 896fc9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 896fca: mov dword ptr [ecx + edx + 0x1c], eax */
  W32((uint32_t)(ecx + edx + 0x1cu), eax);
L_896fce: /* 896fce: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 896fd2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 896fd6: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 896fd9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 896fda: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 896fde: mov edx, dword ptr [esi + 0x18c] */
  edx = R32((uint32_t)(esi + 0x18cu));
/* 896fe4: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 896fe7: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896fe9: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 896fed: jl 0x896fa0 */
  if ((sf != of)) goto L_896fa0;
L_896fef: /* 896fef: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 896ff3: mov byte ptr [esp + 0x114], 2 */
  W8((uint32_t)(esp + 0x114u), 0x2u);
/* 896ffb: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x897000u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 897000: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 897004: mov byte ptr [esp + 0x114], 1 */
  W8((uint32_t)(esp + 0x114u), 0x1u);
/* 89700c: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x897011u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
L_897011: /* 897011: mov ecx, dword ptr [esp + 0x124] */
  ecx = R32((uint32_t)(esp + 0x124u));
/* 897018: xor eax, eax */
  eax = 0;
/* 89701a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89701c: je 0x897083 */
  if (zf) goto L_897083;
L_89701e: /* 89701e: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 897021: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 897025: jle 0x897083 */
  if ((zf || sf != of)) goto L_897083;
L_897027: /* 897027: jmp 0x897030 */
  goto L_897030;
L_897030: /* 897030: mov edx, dword ptr [esi + 0x188] */
  edx = R32((uint32_t)(esi + 0x188u));
/* 897036: mov ecx, dword ptr [esp + 0x124] */
  ecx = R32((uint32_t)(esp + 0x124u));
/* 89703d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89703f: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 897041: mov edi, ecx */
  edi = ecx;
/* 897043: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 897045: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 897047: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 89704a: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 89704d: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 897050: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 897053: mov edx, dword ptr [esi + 0x188] */
  edx = R32((uint32_t)(esi + 0x188u));
/* 897059: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89705c: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 89705e: lea edx, [eax + edx + 0x10] */
  edx = (uint32_t)(eax + edx + 0x10u);
/* 897062: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 897064: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 897067: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 89706a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 89706d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 897070: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 897074: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 897077: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 897078: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89707b: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89707d: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 897081: jl 0x897030 */
  if ((sf != of)) goto L_897030;
L_897083: /* 897083: lea ecx, [esp + 0x90] */
  ecx = (uint32_t)(esp + 0x90u);
/* 89708a: mov byte ptr [esp + 0x114], 0 */
  W8((uint32_t)(esp + 0x114u), 0x0u);
/* 897092: call 0x6c31ac */
  esp -= 4; W32(esp, 0x897097u); SPILL(); f_6c31ac(); if (g_unwind) return; RELOAD();
/* 897097: lea ecx, [esp + 0x84] */
  ecx = (uint32_t)(esp + 0x84u);
/* 89709e: mov dword ptr [esp + 0x114], 0xffffffff */
  W32((uint32_t)(esp + 0x114u), 0xffffffffu);
/* 8970a9: call 0x6c2ed2 */
  esp -= 4; W32(esp, 0x8970aeu); SPILL(); f_6c2ed2(); if (g_unwind) return; RELOAD();
/* 8970ae: mov ecx, dword ptr [esp + 0x10c] */
  ecx = R32((uint32_t)(esp + 0x10cu));
/* 8970b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8970b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8970b7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8970b8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8970b9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8970c0: add esp, 0x108 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8970c6: ret  */
  esp += 4; SPILL(); return;
}

void f_896c7d(void) {
  LOAD_REGS();
  goto L_896c7d;
L_895f20: /* 895f20: mov ebp, esi */
  ebp = esi;
/* 895f22: and ebp, 0xf0000000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xf0000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  ebp = r;
  }
/* 895f28: jne 0x896022 */
  if (!zf) goto L_896022;
L_895f2e: /* 895f2e: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 895f32: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 895f38: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 895f3c: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 895f3f: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 895f45: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 895f4b: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 895f4f: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 895f53: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 895f56: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 895f58: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 895f5b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 895f5d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895f5f: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 895f61: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 895f64: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895f66: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 895f68: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 895f6a: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 895f6d: shr ebp, 0xa */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 895f70: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 895f76: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 895f7c: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 895f80: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 895f84: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 895f87: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 895f89: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 895f8c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 895f8e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895f90: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 895f93: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 895f95: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895f97: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 895f9a: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 895f9d: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 895fa0: shr ebp, 0x14 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 895fa3: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 895fa9: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 895faf: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 895fb3: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 895fb7: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 895fbb: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 895fbe: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 895fc0: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 895fc3: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 895fc5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895fc7: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 895fca: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 895fcc: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895fce: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 895fd1: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 895fd4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895fd6: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 895fd9: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 895fdb: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 895fde: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895fe0: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 895fe2: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 895fe5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895fe7: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 895fea: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 895fec: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 895fef: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 895ff1: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 895ff4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895ff6: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 895ff8: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 895ffb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 895ffd: fstp dword ptr [edi + 0x10] */
  WF32((uint32_t)(edi + 0x10u), ST0); FPOP();
/* 896000: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 896003: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 896005: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 896008: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89600a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89600c: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 89600f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896011: fstp dword ptr [edi + 0x14] */
  WF32((uint32_t)(edi + 0x14u), ST0); FPOP();
/* 896014: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 896017: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89601a: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89601d: jmp 0x8963f6 */
  goto L_8963f6;
L_896022: /* 896022: cmp esi, 0xf0000000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xf0000000u);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 896028: jb 0x89607c */
  if (cf) goto L_89607c;
L_89602a: /* 89602a: mov ebx, dword ptr [esp + 0x84] */
  ebx = R32((uint32_t)(esp + 0x84u));
/* 896031: and esi, 0xfffffff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896037: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 89603b: lea esi, [ebx + esi*4] */
  esi = (uint32_t)(ebx + esi*4);
/* 89603e: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 896040: mov ebx, edi */
  ebx = edi;
/* 896042: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 896044: mov ebp, dword ptr [esi + 4] */
  ebp = R32((uint32_t)(esi + 0x4u));
/* 896047: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 89604a: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 89604d: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* 896050: mov ebx, dword ptr [esp + 0x10] */
  ebx = R32((uint32_t)(esp + 0x10u));
/* 896054: mov esi, dword ptr [esp + 0x84] */
  esi = R32((uint32_t)(esp + 0x84u));
/* 89605b: lea esi, [esi + ebx*4 + 0xc] */
  esi = (uint32_t)(esi + ebx*4 + 0xcu);
/* 89605f: mov ebp, dword ptr [esi] */
  ebp = R32((uint32_t)(esi));
/* 896061: mov ebx, dword ptr [esp + 0x2c] */
  ebx = R32((uint32_t)(esp + 0x2cu));
/* 896065: mov dword ptr [ebx], ebp */
  W32((uint32_t)(ebx), ebp);
/* 896067: mov ebp, dword ptr [esi + 4] */
  ebp = R32((uint32_t)(esi + 0x4u));
/* 89606a: mov dword ptr [ebx + 4], ebp */
  W32((uint32_t)(ebx + 0x4u), ebp);
/* 89606d: mov esi, dword ptr [esi + 8] */
  esi = R32((uint32_t)(esi + 0x8u));
/* 896070: mov dword ptr [ebx + 8], esi */
  W32((uint32_t)(ebx + 0x8u), esi);
/* 896073: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 896077: jmp 0x8963f2 */
  goto L_8963f2;
L_89607c: /* 89607c: test esi, 0xe0000000 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xe0000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 896082: jne 0x8962bb */
  if (!zf) goto L_8962bb;
L_896088: /* 896088: mov ebp, dword ptr [ebx + 4] */
  ebp = R32((uint32_t)(ebx + 0x4u));
/* 89608b: mov dword ptr [esp + 0x44], ebp */
  W32((uint32_t)(esp + 0x44u), ebp);
/* 89608f: mov ebp, esi */
  ebp = esi;
/* 896091: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896097: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 89609d: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8960a1: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8960a5: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 8960a9: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8960af: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8960b3: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 8960b9: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 8960bd: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8960c1: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 8960c5: mov dword ptr [esp + 0x48], esi */
  W32((uint32_t)(esp + 0x48u), esi);
/* 8960c9: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 8960cd: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 8960d3: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8960d9: lea ebp, [ebp + esi*8] */
  ebp = (uint32_t)(ebp + esi*8);
/* 8960dd: mov esi, dword ptr [eax + 0xc] */
  esi = R32((uint32_t)(eax + 0xcu));
/* 8960e0: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 8960e4: and esi, 0x3ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8960ea: sub esi, 0x1ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 8960f0: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 8960f4: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 8960f8: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8960fc: shr esi, 0xa */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 8960ff: and esi, 0x3ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896105: sub esi, 0x1ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 89610b: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 89610f: mov esi, dword ptr [esp + 0x14] */
  esi = R32((uint32_t)(esp + 0x14u));
/* 896113: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 896117: shr esi, 0x14 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  esi = r;
  }
/* 89611a: and esi, 0x3ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896120: sub esi, 0x1ff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* 896126: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 89612a: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
/* 89612e: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 896132: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 896135: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896137: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 89613a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89613c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89613e: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896140: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896143: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896145: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 896147: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 896149: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 89614c: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 89614e: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 896151: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896153: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896155: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 896158: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 89615a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89615c: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 89615f: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 896161: fstp dword ptr [esp + 0xa0] */
  WF32((uint32_t)(esp + 0xa0u), ST0); FPOP();
/* 896168: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 89616b: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 89616d: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 896170: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896172: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896174: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 896177: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896179: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89617b: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 89617e: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 896180: fstp dword ptr [esp + 0xa4] */
  WF32((uint32_t)(esp + 0xa4u), ST0); FPOP();
/* 896187: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 896189: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 89618c: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 89618e: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 896191: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896193: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 896195: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896198: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89619a: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 89619c: fstp dword ptr [esp + 0x78] */
  WF32((uint32_t)(esp + 0x78u), ST0); FPOP();
/* 8961a0: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8961a2: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 8961a5: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8961a7: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 8961aa: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8961ac: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 8961ae: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 8961b1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8961b3: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 8961b5: fstp dword ptr [esp + 0x7c] */
  WF32((uint32_t)(esp + 0x7cu), ST0); FPOP();
/* 8961b9: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8961bb: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 8961be: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8961c0: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 8961c3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8961c5: fld st(4) */
  { double v = STI(4); FPUSH(v); }
/* 8961c7: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 8961ca: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8961cc: fmul st(6) */
  ST0 = ST0 * STI(6);
/* 8961ce: fstp dword ptr [esp + 0x80] */
  WF32((uint32_t)(esp + 0x80u), ST0); FPOP();
/* 8961d5: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* 8961d8: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8961da: fld dword ptr [ebp + 0x10] */
  { double v = F32((uint32_t)(ebp + 0x10u)); FPUSH(v); }
/* 8961dd: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8961df: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8961e1: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8961e3: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 8961e6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8961e8: fadd dword ptr [ebp] */
  ST0 = ST0 + (F32((uint32_t)(ebp)));
/* 8961eb: fmul st(5) */
  ST0 = ST0 * STI(5);
/* 8961ed: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 8961ef: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8961f1: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8961f3: fld dword ptr [ebp + 0x20] */
  { double v = F32((uint32_t)(ebp + 0x20u)); FPUSH(v); }
/* 8961f6: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8961f8: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 8961fb: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8961fd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8961ff: fld dword ptr [ebp + 0x18] */
  { double v = F32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* 896202: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896204: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896206: fadd dword ptr [ebp + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x4u)));
/* 896209: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 89620b: fadd dword ptr [esp + 0xa0] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xa0u)));
/* 896212: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 896215: fld dword ptr [ebp + 0x2c] */
  { double v = F32((uint32_t)(ebp + 0x2cu)); FPUSH(v); }
/* 896218: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 89621a: fld dword ptr [ebp + 0x28] */
  { double v = F32((uint32_t)(ebp + 0x28u)); FPUSH(v); }
/* 89621d: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89621f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896221: fld dword ptr [ebp + 0x24] */
  { double v = F32((uint32_t)(ebp + 0x24u)); FPUSH(v); }
/* 896224: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896226: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896228: fadd dword ptr [ebp + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x8u)));
/* 89622b: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 89622d: fadd dword ptr [esp + 0xa4] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xa4u)));
/* 896234: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 896237: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 896239: fmul dword ptr [ebp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x14u)));
/* 89623c: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 89623e: fmul dword ptr [ebp + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x10u)));
/* 896241: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896243: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 896245: fmul dword ptr [ebp + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xcu)));
/* 896248: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89624a: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 89624e: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 896250: add esi, 0x20 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 896253: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 896256: fadd dword ptr [esp + 0x78] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x78u)));
/* 89625a: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89625d: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 896260: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 896263: fstp dword ptr [esi - 0x20] */
  WF32((uint32_t)(esi + 0xffffffe0u), ST0); FPOP();
/* 896266: mov dword ptr [esp + 0x2c], esi */
  W32((uint32_t)(esp + 0x2cu), esi);
/* 89626a: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 89626d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89626f: fmul dword ptr [ebp + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x20u)));
/* 896272: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 896274: fmul dword ptr [ebp + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x1cu)));
/* 896277: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896279: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 89627b: fmul dword ptr [ebp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x18u)));
/* 89627e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896280: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 896282: fadd dword ptr [esp + 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x7cu)));
/* 896286: fstp dword ptr [edi - 0x10] */
  WF32((uint32_t)(edi + 0xfffffff0u), ST0); FPOP();
/* 896289: fmul dword ptr [ebp + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x2cu)));
/* 89628c: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89628e: fmul dword ptr [ebp + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x28u)));
/* 896291: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896293: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 896295: fmul dword ptr [ebp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0x24u)));
/* 896298: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89629a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89629c: fadd dword ptr [esp + 0x80] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x80u)));
/* 8962a3: fstp dword ptr [edi - 0xc] */
  WF32((uint32_t)(edi + 0xfffffff4u), ST0); FPOP();
/* 8962a6: mov ebp, dword ptr [ebx - 8] */
  ebp = R32((uint32_t)(ebx + 0xfffffff8u));
/* 8962a9: mov dword ptr [edi - 8], ebp */
  W32((uint32_t)(edi + 0xfffffff8u), ebp);
/* 8962ac: mov ebp, dword ptr [ebx - 4] */
  ebp = R32((uint32_t)(ebx + 0xfffffffcu));
/* 8962af: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8962b1: mov dword ptr [edi - 4], ebp */
  W32((uint32_t)(edi + 0xfffffffcu), ebp);
/* 8962b4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8962b6: jmp 0x896e5f */
  goto L_896e5f;
L_8962bb: /* 8962bb: cmp ebp, 0x80000000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x80000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8962c1: jne 0x896410 */
  if (!zf) goto L_896410;
L_8962c7: /* 8962c7: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 8962cb: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8962d1: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 8962d5: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 8962d8: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 8962dc: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8962e2: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 8962e8: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8962ec: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 8962f0: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8962f4: shr ebp, 0xa */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 8962f7: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8962fd: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 896303: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896307: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 89630b: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 89630f: shr ebp, 0x14 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 896312: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896318: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 89631e: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896322: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 896326: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 89632a: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 89632d: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 89632f: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 896332: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896334: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896336: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 896339: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 89633b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89633d: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 89633f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 896341: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 896344: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 896346: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 896349: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 89634b: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 89634e: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896350: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896352: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896354: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896357: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896359: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 89635c: fst dword ptr [ebp + 4] */
  WF32((uint32_t)(ebp + 0x4u), ST0);
/* 89635f: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 896362: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 896365: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896367: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 89636a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89636c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89636e: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896370: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896373: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896375: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 896378: fst dword ptr [ebp + 8] */
  WF32((uint32_t)(ebp + 0x8u), ST0);
/* 89637b: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 89637f: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 896382: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 896384: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 896387: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 896389: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 89638c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89638e: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 896390: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896393: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896395: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 896397: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 89639a: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 89639e: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 8963a1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8963a3: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 8963a6: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 8963a8: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 8963ab: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8963ad: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 8963af: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 8963b2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8963b4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8963b6: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 8963ba: fstp dword ptr [ebp + 0x10] */
  WF32((uint32_t)(ebp + 0x10u), ST0); FPOP();
/* 8963bd: add ebp, 0x18 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 8963c0: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8963c3: fstp dword ptr [edi + 0x10] */
  WF32((uint32_t)(edi + 0x10u), ST0); FPOP();
/* 8963c6: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8963c9: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 8963cd: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 8963d0: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8963d2: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 8963d5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8963d7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8963d9: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 8963dc: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 8963e0: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8963e3: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 8963e7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8963e9: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 8963ec: fst dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0);
/* 8963ef: fstp dword ptr [edi + 0x14] */
  WF32((uint32_t)(edi + 0x14u), ST0); FPOP();
L_8963f2: /* 8963f2: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
L_8963f6: /* 8963f6: mov esi, dword ptr [ebx + 4] */
  esi = R32((uint32_t)(ebx + 0x4u));
/* 8963f9: mov dword ptr [edi + 0x18], esi */
  W32((uint32_t)(edi + 0x18u), esi);
/* 8963fc: mov esi, dword ptr [ebx + 8] */
  esi = R32((uint32_t)(ebx + 0x8u));
/* 8963ff: mov dword ptr [edi + 0x1c], esi */
  W32((uint32_t)(edi + 0x1cu), esi);
/* 896402: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 896405: add ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 896408: add ebx, 0xc */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 89640b: jmp 0x896e5b */
  goto L_896e5b;
L_896410: /* 896410: cmp ebp, 0x90000000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x90000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 896416: jne 0x8966a9 */
  if (!zf) goto L_8966a9;
L_89641c: /* 89641c: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 89641f: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 896423: mov dword ptr [esp + 0x48], ebx */
  W32((uint32_t)(esp + 0x48u), ebx);
/* 896427: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 89642d: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 896431: and ebx, 0xfff */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  ebx = r;
  }
/* 896437: lea ebx, [ebp + ebx*8] */
  ebx = (uint32_t)(ebp + ebx*8);
/* 89643b: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 89643f: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896445: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896449: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 89644d: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 896451: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896457: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 89645b: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 896461: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 896464: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 896468: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 89646c: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896472: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 896478: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 89647e: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896482: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 896486: shr ebp, 0xa */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 896489: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 89648f: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 896495: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 896499: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 89649d: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8964a1: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 8964a5: shr ebp, 0x14 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 8964a8: fstp dword ptr [esp + 0x5c] */
  WF32((uint32_t)(esp + 0x5cu), ST0); FPOP();
/* 8964ac: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8964b2: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8964b6: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 8964bc: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8964c0: fstp dword ptr [esp + 0x60] */
  WF32((uint32_t)(esp + 0x60u), ST0); FPOP();
/* 8964c4: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8964c8: fstp dword ptr [esp + 0x64] */
  WF32((uint32_t)(esp + 0x64u), ST0); FPOP();
/* 8964cc: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 8964cf: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8964d1: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 8964d4: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8964d6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8964d8: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 8964db: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8964dd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8964df: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 8964e1: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8964e3: fstp dword ptr [esp + 0x6c] */
  WF32((uint32_t)(esp + 0x6cu), ST0); FPOP();
/* 8964e7: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 8964ea: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8964ec: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 8964ef: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8964f1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8964f3: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 8964f6: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8964f8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8964fa: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 8964fd: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8964ff: fstp dword ptr [esp + 0x70] */
  WF32((uint32_t)(esp + 0x70u), ST0); FPOP();
/* 896503: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 896506: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896508: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 89650b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89650d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89650f: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 896512: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896514: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896516: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 896519: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89651b: fstp dword ptr [esp + 0x74] */
  WF32((uint32_t)(esp + 0x74u), ST0); FPOP();
/* 89651f: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 896523: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 896526: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 89652a: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 89652d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89652f: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 896533: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896536: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896538: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89653a: fstp dword ptr [esp + 0xb4] */
  WF32((uint32_t)(esp + 0xb4u), ST0); FPOP();
/* 896541: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 896545: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 896548: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 89654c: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 89654f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896551: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 896555: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896558: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89655a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89655c: fstp dword ptr [esp + 0xac] */
  WF32((uint32_t)(esp + 0xacu), ST0); FPOP();
/* 896563: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 896567: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 89656a: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 89656e: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 896571: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896573: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 896577: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 89657a: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 89657e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896580: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* 896582: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 896585: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896587: fld dword ptr [ebx + 0x10] */
  { double v = F32((uint32_t)(ebx + 0x10u)); FPUSH(v); }
/* 89658a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89658c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89658e: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 896591: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896593: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896595: fadd dword ptr [ebx] */
  ST0 = ST0 + (F32((uint32_t)(ebx)));
/* 896597: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 89659b: fadd dword ptr [esp + 0x6c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x6cu)));
/* 89659f: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8965a1: fstp dword ptr [esi] */
  WF32((uint32_t)(esi), ST0); FPOP();
/* 8965a3: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 8965a5: fld dword ptr [ebx + 0x20] */
  { double v = F32((uint32_t)(ebx + 0x20u)); FPUSH(v); }
/* 8965a8: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8965aa: fld dword ptr [ebx + 0x1c] */
  { double v = F32((uint32_t)(ebx + 0x1cu)); FPUSH(v); }
/* 8965ad: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8965af: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8965b1: fld dword ptr [ebx + 0x18] */
  { double v = F32((uint32_t)(ebx + 0x18u)); FPUSH(v); }
/* 8965b4: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8965b6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8965b8: fadd dword ptr [ebx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x4u)));
/* 8965bb: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 8965bf: fadd dword ptr [esp + 0x70] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x70u)));
/* 8965c3: fst dword ptr [esi + 4] */
  WF32((uint32_t)(esi + 0x4u), ST0);
/* 8965c6: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 8965c9: fld dword ptr [ebx + 0x2c] */
  { double v = F32((uint32_t)(ebx + 0x2cu)); FPUSH(v); }
/* 8965cc: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8965ce: fld dword ptr [ebx + 0x28] */
  { double v = F32((uint32_t)(ebx + 0x28u)); FPUSH(v); }
/* 8965d1: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8965d3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8965d5: fld dword ptr [ebx + 0x24] */
  { double v = F32((uint32_t)(ebx + 0x24u)); FPUSH(v); }
/* 8965d8: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8965da: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8965dc: fadd dword ptr [ebx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8u)));
/* 8965df: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 8965e3: fadd dword ptr [esp + 0x74] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x74u)));
/* 8965e7: fst dword ptr [esi + 8] */
  WF32((uint32_t)(esi + 0x8u), ST0);
/* 8965ea: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 8965ed: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 8965f1: fmul dword ptr [ebx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x14u)));
/* 8965f4: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 8965f8: fmul dword ptr [ebx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x10u)));
/* 8965fb: mov ebp, dword ptr [esp + 0x3c] */
  ebp = R32((uint32_t)(esp + 0x3cu));
/* 8965ff: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 896602: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
/* 896606: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896608: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89660b: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 89660f: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 896612: fmul dword ptr [ebx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xcu)));
/* 896615: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 896618: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 89661b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89661d: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 896621: fadd dword ptr [esp + 0xac] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xacu)));
/* 896628: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89662a: fstp dword ptr [ebp] */
  WF32((uint32_t)(ebp), ST0); FPOP();
/* 89662d: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 896631: add ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 896634: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 896637: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 89663b: fmul dword ptr [ebx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x20u)));
/* 89663e: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 896642: fmul dword ptr [ebx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x1cu)));
/* 896645: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896647: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 89664b: fmul dword ptr [ebx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x18u)));
/* 89664e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896650: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 896654: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896656: fst dword ptr [esi - 8] */
  WF32((uint32_t)(esi + 0xfffffff8u), ST0);
/* 896659: fstp dword ptr [edi - 0x10] */
  WF32((uint32_t)(edi + 0xfffffff0u), ST0); FPOP();
/* 89665c: fld dword ptr [esp + 0x64] */
  { double v = F32((uint32_t)(esp + 0x64u)); FPUSH(v); }
/* 896660: fmul dword ptr [ebx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x2cu)));
/* 896663: fld dword ptr [esp + 0x60] */
  { double v = F32((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* 896667: fmul dword ptr [ebx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x28u)));
/* 89666a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89666c: fld dword ptr [esp + 0x5c] */
  { double v = F32((uint32_t)(esp + 0x5cu)); FPUSH(v); }
/* 896670: fmul dword ptr [ebx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x24u)));
/* 896673: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* 896677: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896679: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 89667d: fadd dword ptr [esp + 0xb4] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0xb4u)));
/* 896684: fst dword ptr [esi - 4] */
  WF32((uint32_t)(esi + 0xfffffffcu), ST0);
/* 896687: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 89668b: add esi, 0x18 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89668e: fstp dword ptr [edi - 0xc] */
  WF32((uint32_t)(edi + 0xfffffff4u), ST0); FPOP();
/* 896691: mov dword ptr [esp + 0x3c], esi */
  W32((uint32_t)(esp + 0x3cu), esi);
/* 896695: mov esi, dword ptr [ebx + 8] */
  esi = R32((uint32_t)(ebx + 0x8u));
/* 896698: mov dword ptr [edi - 8], esi */
  W32((uint32_t)(edi + 0xfffffff8u), esi);
/* 89669b: mov esi, dword ptr [ebx + 0xc] */
  esi = R32((uint32_t)(ebx + 0xcu));
/* 89669e: mov dword ptr [edi - 4], esi */
  W32((uint32_t)(edi + 0xfffffffcu), esi);
/* 8966a1: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 8966a4: jmp 0x896e5b */
  goto L_896e5b;
L_8966a9: /* 8966a9: mov ebp, esi */
  ebp = esi;
/* 8966ab: and ebp, 0x70000000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x70000000u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8966b1: cmp ebp, 0x10000000 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x10000000u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  cf = (a) < (b);
  }
/* 8966b7: jbe 0x896e63 */
  if ((cf | zf)) goto L_896e63;
L_8966bd: /* 8966bd: mov ebp, esi */
  ebp = esi;
/* 8966bf: shr ebp, 0x1c */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 28;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 8966c2: and ebp, 7 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8966c5: inc ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a + 1);
  ebp = r;
  }
/* 8966c6: mov dword ptr [esp + 0x48], ebp */
  W32((uint32_t)(esp + 0x48u), ebp);
/* 8966ca: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 8966ce: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 8966d4: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 8966d8: mov ebp, dword ptr [esp + 0x44] */
  ebp = R32((uint32_t)(esp + 0x44u));
/* 8966dc: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8966e2: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 8966e6: mov ebp, dword ptr [eax + 0xc] */
  ebp = R32((uint32_t)(eax + 0xcu));
/* 8966e9: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 8966ed: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 8966f1: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 8966f7: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 8966fd: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 896703: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896707: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 89670b: shr ebp, 0xa */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 10;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 89670e: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896714: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 89671a: fstp dword ptr [esp + 0x18] */
  WF32((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 89671e: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 896722: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896726: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 89672a: shr ebp, 0x14 */
  { uint32_t a = (uint32_t)(ebp); uint32_t c = 20;
  uint32_t r = (uint32_t)((uint32_t)a >> c);
  ebp = r;
  }
/* 89672d: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 896731: and ebp, 0x3ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x3ffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896737: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 89673b: sub ebp, 0x1ff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x1ffu);
  uint32_t r = (uint32_t)(a - b);
  ebp = r;
  }
/* 896741: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896745: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* 896749: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 89674d: fst dword ptr [esp + 0x28] */
  WF32((uint32_t)(esp + 0x28u), ST0);
/* 896751: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 896754: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896758: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 89675b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89675d: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896761: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896764: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896766: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 89676a: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 89676e: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 896771: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896773: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 896776: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896778: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89677a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89677d: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 89677f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896781: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 896783: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 896787: fst dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0);
/* 89678b: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 89678f: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 896792: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896796: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 896799: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89679b: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 89679f: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 8967a2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8967a4: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 8967a8: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 8967ac: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 8967af: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8967b1: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 8967b4: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8967b6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8967b8: fld dword ptr [esi + 0x18] */
  { double v = F32((uint32_t)(esi + 0x18u)); FPUSH(v); }
/* 8967bb: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8967bd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8967bf: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 8967c2: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 8967c6: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 8967ca: dec ebp */
  { uint32_t a = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - 1);
  ebp = r;
  }
/* 8967cb: cmp ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8967ce: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 8967d2: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8967d6: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 8967d9: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8967dd: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 8967e0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8967e2: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8967e6: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 8967e9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8967eb: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 8967ef: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 8967f3: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 8967f6: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8967f8: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 8967fb: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8967fd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8967ff: fld dword ptr [esi + 0x24] */
  { double v = F32((uint32_t)(esi + 0x24u)); FPUSH(v); }
/* 896802: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896804: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896806: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 896809: mov esi, 1 */
  esi = 0x1u;
/* 89680e: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 896812: fmul dword ptr [esp + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x18u)));
/* 896816: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 89681a: jl 0x896c71 */
  if ((sf != of)) goto L_896c71;
L_896820: /* 896820: lea esi, [ebx + 0xc] */
  esi = (uint32_t)(ebx + 0xcu);
/* 896823: mov dword ptr [esp + 0x10], 4 */
  W32((uint32_t)(esp + 0x10u), 0x4u);
/* 89682b: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
L_89682f: /* 89682f: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 896833: mov esi, dword ptr [esi - 8] */
  esi = R32((uint32_t)(esi + 0xfffffff8u));
/* 896836: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 89683a: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 89683e: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896844: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 896848: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 89684c: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896852: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 896856: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 89685a: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 896860: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 896864: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 896867: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896869: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 89686c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89686e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896870: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 896873: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896875: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896877: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 896879: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 89687d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89687f: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 896882: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896884: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 896887: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896889: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89688b: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 89688d: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896890: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896892: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 896895: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896899: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 89689d: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 8968a0: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8968a2: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 8968a5: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8968a7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8968a9: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8968ab: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 8968ae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8968b0: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 8968b3: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 8968b7: fadd dword ptr [esp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x54u)));
/* 8968bb: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 8968bf: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8968c3: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 8968c6: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8968ca: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 8968cd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8968cf: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8968d3: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 8968d6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8968d8: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 8968dc: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 8968e0: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 8968e4: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8968e8: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 8968eb: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8968ef: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 8968f2: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8968f4: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8968f8: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 8968fb: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8968fd: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896901: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 896905: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 896909: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 89690d: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 896910: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896914: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 896917: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896919: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 89691d: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896921: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896924: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 896928: mov esi, dword ptr [esi - 4] */
  esi = R32((uint32_t)(esi + 0xfffffffcu));
/* 89692b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89692d: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896931: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 896935: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 89693b: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 89693f: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 896943: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 896947: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 89694d: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 896951: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 896955: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 896959: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 89695f: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 896963: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 896966: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896968: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 89696b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89696d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89696f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 896972: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896974: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896976: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 896978: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 89697c: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 89697e: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 896982: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 896985: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896987: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 89698a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89698c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89698e: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896990: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896993: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896995: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 896998: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 89699c: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 89699e: fstp st(2) */
  STI(2) = ST0; FPOP();
/* 8969a0: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8969a2: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 8969a5: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 8969a7: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 8969aa: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8969ac: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8969ae: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 8969b0: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 8969b3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8969b5: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 8969b8: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 8969bc: fadd dword ptr [esp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x54u)));
/* 8969c0: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8969c4: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 8969c7: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8969cb: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 8969ce: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8969d0: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8969d4: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 8969d7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8969d9: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 8969dd: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 8969e1: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 8969e5: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 8969e9: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 8969ec: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 8969f0: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 8969f3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 8969f5: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 8969f9: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 8969fc: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 896a00: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896a02: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896a06: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 896a0a: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 896a0e: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896a12: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 896a15: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896a19: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 896a1c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896a1e: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896a22: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896a25: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 896a29: mov esi, dword ptr [esi] */
  esi = R32((uint32_t)(esi));
/* 896a2b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896a2d: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896a31: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 896a35: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896a3b: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 896a3f: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 896a43: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 896a47: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896a4d: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 896a51: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 896a55: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 896a59: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 896a5f: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 896a63: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 896a66: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896a68: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 896a6b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896a6d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896a6f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 896a72: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896a74: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896a76: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 896a78: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896a7c: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 896a80: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 896a84: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 896a87: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896a89: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 896a8c: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896a8e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896a90: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896a92: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896a95: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896a97: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 896a9a: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896a9e: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 896aa0: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 896aa4: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 896aa7: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896aa9: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 896aac: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896aae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896ab0: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896ab2: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896ab5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896ab7: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 896aba: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896abe: fadd st(1) */
  ST0 = ST0 + STI(1);
/* 896ac0: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 896ac4: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 896ac6: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 896ac8: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896acc: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 896acf: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896ad3: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 896ad6: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896ad8: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896adc: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896adf: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 896ae3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896ae5: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896ae9: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 896aed: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 896af1: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896af5: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 896af8: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896afc: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 896aff: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896b01: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896b05: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896b08: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896b0a: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896b0e: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 896b12: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 896b16: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896b1a: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 896b1d: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896b21: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 896b24: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896b26: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896b2a: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896b2d: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 896b31: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 896b34: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896b36: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896b3a: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 896b3e: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896b44: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 896b48: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 896b4c: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 896b50: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896b56: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 896b5a: mov dword ptr [esp + 0x14], ebp */
  W32((uint32_t)(esp + 0x14u), ebp);
/* 896b5e: fild dword ptr [esp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x14u)); FPUSH(v); }
/* 896b62: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 896b68: fstp dword ptr [esp + 0x14] */
  WF32((uint32_t)(esp + 0x14u), ST0); FPOP();
/* 896b6c: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 896b6f: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896b71: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 896b74: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896b76: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896b78: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 896b7b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896b7d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896b7f: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 896b81: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896b85: fadd dword ptr [esp + 0x4c] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x4cu)));
/* 896b89: fst dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0);
/* 896b8d: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 896b90: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896b92: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 896b95: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896b97: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896b99: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896b9b: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896b9e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896ba0: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 896ba3: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896ba7: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 896bab: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 896baf: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 896bb2: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896bb4: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 896bb7: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896bb9: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896bbb: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896bbd: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896bc0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896bc2: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 896bc5: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896bc9: mov ebp, dword ptr [esp + 0x1c] */
  ebp = R32((uint32_t)(esp + 0x1cu));
/* 896bcd: add ebp, 4 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 896bd0: fadd dword ptr [esp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x54u)));
/* 896bd4: mov dword ptr [esp + 0x1c], ebp */
  W32((uint32_t)(esp + 0x1cu), ebp);
/* 896bd8: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 896bdc: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 896be0: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896be4: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 896be7: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896beb: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 896bee: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896bf0: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896bf4: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896bf7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896bf9: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896bfd: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 896c01: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 896c05: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896c09: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 896c0c: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896c10: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 896c13: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896c15: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896c19: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896c1c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896c1e: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896c22: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 896c26: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 896c2a: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896c2e: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 896c31: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896c35: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 896c38: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896c3a: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896c3e: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896c41: mov esi, dword ptr [esp + 0x18] */
  esi = R32((uint32_t)(esp + 0x18u));
/* 896c45: add esi, 0x10 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 896c48: mov dword ptr [esp + 0x18], esi */
  W32((uint32_t)(esp + 0x18u), esi);
/* 896c4c: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* 896c50: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896c52: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 896c55: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896c57: fmul dword ptr [esp + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x14u)));
/* 896c5b: mov dword ptr [esp + 0x10], esi */
  W32((uint32_t)(esp + 0x10u), esi);
/* 896c5f: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 896c63: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 896c67: jl 0x89682f */
  if ((sf != of)) goto L_89682f;
L_896c6d: /* 896c6d: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
L_896c71: /* 896c71: cmp esi, dword ptr [esp + 0x48] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0x48u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896c75: jge 0x896d8c */
  if ((sf == of)) goto L_896d8c;
L_896c7b: /* 896c7b: jmp 0x896c80 */
  goto L_896c80;
L_896c7d: /* 896c7d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_896c80: /* 896c80: mov esi, dword ptr [ebx + esi*4] */
  esi = R32((uint32_t)(ebx + esi*4));
/* 896c83: mov ebp, dword ptr [esp + 0x58] */
  ebp = R32((uint32_t)(esp + 0x58u));
/* 896c87: mov dword ptr [esp + 0x14], esi */
  W32((uint32_t)(esp + 0x14u), esi);
/* 896c8b: and esi, 0xfff */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xfffu);
  uint32_t r = (uint32_t)(a & b);
  esi = r;
  }
/* 896c91: lea esi, [ebp + esi*8] */
  esi = (uint32_t)(ebp + esi*8);
/* 896c95: mov ebp, dword ptr [esp + 0x14] */
  ebp = R32((uint32_t)(esp + 0x14u));
/* 896c99: and ebp, 0xfffffff */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0xfffffffu);
  uint32_t r = (uint32_t)(a & b);
  ebp = r;
  }
/* 896c9f: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* 896ca3: fild dword ptr [esp + 0x10] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* 896ca7: fmul dword ptr [0xa1a798] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a798u)));
/* 896cad: fld dword ptr [esi + 0x14] */
  { double v = F32((uint32_t)(esi + 0x14u)); FPUSH(v); }
/* 896cb0: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896cb2: fld dword ptr [esi + 0x10] */
  { double v = F32((uint32_t)(esi + 0x10u)); FPUSH(v); }
/* 896cb5: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896cb7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896cb9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 896cbc: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 896cbe: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896cc0: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 896cc2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 896cc4: faddp st(2) */
  STI(2) = STI(2) + ST0;
  FPOP();
/* 896cc6: fld dword ptr [esi + 0x20] */
  { double v = F32((uint32_t)(esi + 0x20u)); FPUSH(v); }
/* 896cc9: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896ccb: fld dword ptr [esi + 0x1c] */
  { double v = F32((uint32_t)(esi + 0x1cu)); FPUSH(v); }
/* 896cce: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896cd0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896cd2: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896cd4: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896cd7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896cd9: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 896cdc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 896cde: fadd dword ptr [esp + 0x50] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x50u)));
/* 896ce2: fstp dword ptr [esp + 0x50] */
  WF32((uint32_t)(esp + 0x50u), ST0); FPOP();
/* 896ce6: fld dword ptr [esi + 0x2c] */
  { double v = F32((uint32_t)(esi + 0x2cu)); FPUSH(v); }
/* 896ce9: fmul dword ptr [ecx] */
  ST0 = ST0 * (F32((uint32_t)(ecx)));
/* 896ceb: fld dword ptr [esi + 0x28] */
  { double v = F32((uint32_t)(esi + 0x28u)); FPUSH(v); }
/* 896cee: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 896cf0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896cf2: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 896cf4: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896cf7: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896cf9: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 896cfc: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 896cfe: fadd dword ptr [esp + 0x54] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x54u)));
/* 896d02: fstp dword ptr [esp + 0x54] */
  WF32((uint32_t)(esp + 0x54u), ST0); FPOP();
/* 896d06: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896d0a: fmul dword ptr [esi + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x14u)));
/* 896d0d: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896d11: fmul dword ptr [esi + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x10u)));
/* 896d14: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896d16: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896d1a: fmul dword ptr [esi + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0xcu)));
/* 896d1d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896d1f: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 896d21: fadd dword ptr [esp + 0x30] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x30u)));
/* 896d25: fstp dword ptr [esp + 0x30] */
  WF32((uint32_t)(esp + 0x30u), ST0); FPOP();
/* 896d29: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896d2d: fmul dword ptr [esi + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x20u)));
/* 896d30: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896d34: fmul dword ptr [esi + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x1cu)));
/* 896d37: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896d39: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896d3d: fmul dword ptr [esi + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x18u)));
/* 896d40: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896d42: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 896d44: fadd dword ptr [esp + 0x34] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x34u)));
/* 896d48: fstp dword ptr [esp + 0x34] */
  WF32((uint32_t)(esp + 0x34u), ST0); FPOP();
/* 896d4c: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* 896d50: fmul dword ptr [esi + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x2cu)));
/* 896d53: fld dword ptr [esp + 0x24] */
  { double v = F32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* 896d57: fmul dword ptr [esi + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x28u)));
/* 896d5a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896d5c: fld dword ptr [esp + 0x20] */
  { double v = F32((uint32_t)(esp + 0x20u)); FPUSH(v); }
/* 896d60: mov ebp, dword ptr [esp + 0x48] */
  ebp = R32((uint32_t)(esp + 0x48u));
/* 896d64: fmul dword ptr [esi + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x24u)));
/* 896d67: mov esi, dword ptr [esp + 0x1c] */
  esi = R32((uint32_t)(esp + 0x1cu));
/* 896d6b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 896d6c: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896d6e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 896d70: mov dword ptr [esp + 0x1c], esi */
  W32((uint32_t)(esp + 0x1cu), esi);
/* 896d74: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 896d76: fadd dword ptr [esp + 0x38] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x38u)));
/* 896d7a: fstp dword ptr [esp + 0x38] */
  WF32((uint32_t)(esp + 0x38u), ST0); FPOP();
/* 896d7e: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 896d80: jl 0x896c80 */
  if ((sf != of)) goto L_896c80;
L_896d86: /* 896d86: fstp dword ptr [esp + 0x4c] */
  WF32((uint32_t)(esp + 0x4cu), ST0); FPOP();
/* 896d8a: jmp 0x896d8e */
  goto L_896d8e;
L_896d8c: /* 896d8c: fstp st(0) */
  STI(0) = ST0; FPOP();
L_896d8e: /* 896d8e: mov esi, dword ptr [esp + 0x44] */
  esi = R32((uint32_t)(esp + 0x44u));
/* 896d92: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
/* 896d96: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 896d99: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 896d9c: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 896d9f: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 896da1: jns 0x896e12 */
  if (!sf) goto L_896e12;
L_896da3: /* 896da3: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
/* 896da7: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 896da9: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 896dad: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 896db0: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 896db4: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* 896db7: mov ebp, dword ptr [esp + 0x4c] */
  ebp = R32((uint32_t)(esp + 0x4cu));
/* 896dbb: mov esi, edi */
  esi = edi;
/* 896dbd: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 896dbf: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 896dc3: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 896dc6: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 896dca: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* 896dcd: mov esi, dword ptr [esp + 0x3c] */
  esi = R32((uint32_t)(esp + 0x3cu));
/* 896dd1: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 896dd5: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 896dd7: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 896ddb: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 896dde: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 896de2: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* 896de5: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 896de9: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 896ded: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 896def: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 896df3: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 896df6: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 896dfa: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* 896dfd: mov ebp, dword ptr [esp + 0x40] */
  ebp = R32((uint32_t)(esp + 0x40u));
/* 896e01: mov esi, 0x18 */
  esi = 0x18u;
/* 896e06: add ebp, esi */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 896e08: mov dword ptr [esp + 0x40], ebp */
  W32((uint32_t)(esp + 0x40u), ebp);
/* 896e0c: add dword ptr [esp + 0x3c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x3cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(esp + 0x3cu), r);
  }
/* 896e10: jmp 0x896e3c */
  goto L_896e3c;
L_896e12: /* 896e12: mov esi, edi */
  esi = edi;
/* 896e14: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 896e16: mov ebp, dword ptr [esp + 0x50] */
  ebp = R32((uint32_t)(esp + 0x50u));
/* 896e1a: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 896e1d: mov ebp, dword ptr [esp + 0x54] */
  ebp = R32((uint32_t)(esp + 0x54u));
/* 896e21: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
/* 896e24: mov ebp, dword ptr [esp + 0x30] */
  ebp = R32((uint32_t)(esp + 0x30u));
/* 896e28: mov esi, dword ptr [esp + 0x2c] */
  esi = R32((uint32_t)(esp + 0x2cu));
/* 896e2c: mov dword ptr [esi], ebp */
  W32((uint32_t)(esi), ebp);
/* 896e2e: mov ebp, dword ptr [esp + 0x34] */
  ebp = R32((uint32_t)(esp + 0x34u));
/* 896e32: mov dword ptr [esi + 4], ebp */
  W32((uint32_t)(esi + 0x4u), ebp);
/* 896e35: mov ebp, dword ptr [esp + 0x38] */
  ebp = R32((uint32_t)(esp + 0x38u));
/* 896e39: mov dword ptr [esi + 8], ebp */
  W32((uint32_t)(esi + 0x8u), ebp);
L_896e3c: /* 896e3c: mov esi, dword ptr [esp + 0x48] */
  esi = R32((uint32_t)(esp + 0x48u));
/* 896e40: mov ebp, dword ptr [ebx + esi*4] */
  ebp = R32((uint32_t)(ebx + esi*4));
/* 896e43: mov dword ptr [edi + 0x18], ebp */
  W32((uint32_t)(edi + 0x18u), ebp);
/* 896e46: mov ebp, dword ptr [ebx + esi*4 + 4] */
  ebp = R32((uint32_t)(ebx + esi*4 + 0x4u));
/* 896e4a: mov dword ptr [edi + 0x1c], ebp */
  W32((uint32_t)(edi + 0x1cu), ebp);
/* 896e4d: mov ebp, dword ptr [esp + 0x2c] */
  ebp = R32((uint32_t)(esp + 0x2cu));
/* 896e51: add edi, 0x20 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 896e54: add ebp, 0x20 */
  { uint32_t a = (uint32_t)(ebp); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ebp = r;
  }
/* 896e57: lea ebx, [ebx + esi*4 + 8] */
  ebx = (uint32_t)(ebx + esi*4 + 0x8u);
L_896e5b: /* 896e5b: mov dword ptr [esp + 0x2c], ebp */
  W32((uint32_t)(esp + 0x2cu), ebp);
L_896e5f: /* 896e5f: mov dword ptr [esp + 0x1c], ebx */
  W32((uint32_t)(esp + 0x1cu), ebx);
L_896e63: /* 896e63: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 896e65: cmp esi, -1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  cf = (a) < (b);
  }
/* 896e68: mov ebp, dword ptr [esp + 0x68] */
  ebp = R32((uint32_t)(esp + 0x68u));
/* 896e6c: mov dword ptr [esp + 0x44], esi */
  W32((uint32_t)(esp + 0x44u), esi);
/* 896e70: jb 0x895f20 */
  if (cf) goto L_895f20;
L_896e76: /* 896e76: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 896e78: mov ecx, dword ptr [esp + 0xa8] */
  ecx = R32((uint32_t)(esp + 0xa8u));
/* 896e7f: mov edx, dword ptr [0xce83c4] */
  edx = R32((uint32_t)(0xce83c4u));
/* 896e85: lea eax, [ecx + eax - 0xc] */
  eax = (uint32_t)(ecx + eax + 0xfffffff4u);
/* 896e89: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 896e8f: add dword ptr [ecx + edx*4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + edx*4), r);
  }
/* 896e92: mov esi, dword ptr [esp + 0x120] */
  esi = R32((uint32_t)(esp + 0x120u));
/* 896e99: mov eax, dword ptr [esi + 0x1a0] */
  eax = R32((uint32_t)(esi + 0x1a0u));
/* 896e9f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 896ea1: je 0x897083 */
  if (zf) goto L_897083;
L_896ea7: /* 896ea7: mov eax, dword ptr [esi + 0x18c] */
  eax = R32((uint32_t)(esi + 0x18cu));
/* 896ead: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 896eb0: je 0x897011 */
  if (zf) goto L_897011;
L_896eb6: /* 896eb6: mov edx, dword ptr [ebp + 0xa4] */
  edx = R32((uint32_t)(ebp + 0xa4u));
/* 896ebc: lea ecx, [ebp + 0xa4] */
  ecx = (uint32_t)(ebp + 0xa4u);
/* 896ec2: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x896ec4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 896ec4: mov eax, dword ptr [ebp + 0xbc] */
  eax = R32((uint32_t)(ebp + 0xbcu));
/* 896eca: lea ecx, [ebp + 0xbc] */
  ecx = (uint32_t)(ebp + 0xbcu);
/* 896ed0: call dword ptr [eax] */
  { uint32_t t = R32((uint32_t)(eax)); esp -= 4; W32(esp, 0x896ed2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 896ed2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 896ed4: lea edi, [esi + 0x188] */
  edi = (uint32_t)(esi + 0x188u);
/* 896eda: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 896edc: mov ecx, edi */
  ecx = edi;
/* 896ede: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x896ee4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 896ee4: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 896ee7: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 896ee9: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 896eea: mov ecx, edi */
  ecx = edi;
/* 896eec: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x896ef2u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 896ef2: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 896ef6: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x896efcu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 896efc: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 896f00: mov byte ptr [esp + 0x114], 2 */
  W8((uint32_t)(esp + 0x114u), 0x2u);
/* 896f08: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x896f0eu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 896f0e: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 896f11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 896f12: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 896f14: lea ecx, [esp + 0x80] */
  ecx = (uint32_t)(esp + 0x80u);
/* 896f1b: mov byte ptr [esp + 0x11c], 3 */
  W8((uint32_t)(esp + 0x11cu), 0x3u);
/* 896f23: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x896f29u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 896f29: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 896f2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 896f2d: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 896f2f: lea ecx, [esp + 0x74] */
  ecx = (uint32_t)(esp + 0x74u);
/* 896f33: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x896f39u); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 896f39: mov eax, dword ptr [ebp + 0xb4] */
  eax = R32((uint32_t)(ebp + 0xb4u));
/* 896f3f: xor ecx, ecx */
  ecx = 0;
/* 896f41: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 896f43: jle 0x896f86 */
  if ((zf || sf != of)) goto L_896f86;
L_896f45: /* 896f45: jmp 0x896f50 */
  goto L_896f50;
L_896f50: /* 896f50: mov edx, dword ptr [ebp + 0xb0] */
  edx = R32((uint32_t)(ebp + 0xb0u));
/* 896f56: movzx eax, word ptr [edx + ecx*8 + 4] */
  eax = (uint32_t)(R16((uint32_t)(edx + ecx*8 + 0x4u)));
/* 896f5b: mov edx, dword ptr [esp + 0x78] */
  edx = R32((uint32_t)(esp + 0x78u));
/* 896f5f: inc dword ptr [edx + eax*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edx + eax*4), r);
  }
/* 896f62: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 896f66: cmp dword ptr [edx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 896f6a: jne 0x896f7b */
  if (!zf) goto L_896f7b;
L_896f6c: /* 896f6c: mov ebx, dword ptr [ebp + 0xb0] */
  ebx = R32((uint32_t)(ebp + 0xb0u));
/* 896f72: movzx ebx, word ptr [ebx + ecx*8 + 6] */
  ebx = (uint32_t)(R16((uint32_t)(ebx + ecx*8 + 0x6u)));
/* 896f77: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 896f78: mov dword ptr [edx + eax*4], ebx */
  W32((uint32_t)(edx + eax*4), ebx);
L_896f7b: /* 896f7b: mov eax, dword ptr [ebp + 0xb4] */
  eax = R32((uint32_t)(ebp + 0xb4u));
/* 896f81: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 896f82: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896f84: jl 0x896f50 */
  if ((sf != of)) goto L_896f50;
L_896f86: /* 896f86: mov eax, dword ptr [esi + 0x18c] */
  eax = R32((uint32_t)(esi + 0x18cu));
/* 896f8c: xor ecx, ecx */
  ecx = 0;
/* 896f8e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896f90: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 896f94: jle 0x896fef */
  if ((zf || sf != of)) goto L_896fef;
L_896f96: /* 896f96: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 896f9a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_896fa0: /* 896fa0: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 896fa4: mov eax, dword ptr [ebp + 0xc8] */
  eax = R32((uint32_t)(ebp + 0xc8u));
/* 896faa: movzx eax, word ptr [eax + edx] */
  eax = (uint32_t)(R16((uint32_t)(eax + edx)));
/* 896fae: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896fb1: jge 0x896fce */
  if ((sf == of)) goto L_896fce;
L_896fb3: /* 896fb3: mov ebx, dword ptr [esp + 0x78] */
  ebx = R32((uint32_t)(esp + 0x78u));
/* 896fb7: mov ebx, dword ptr [ebx + eax*4] */
  ebx = R32((uint32_t)(ebx + eax*4));
/* 896fba: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 896fbc: mov dword ptr [ecx + edx + 0xc], ebx */
  W32((uint32_t)(ecx + edx + 0xcu), ebx);
/* 896fc0: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 896fc4: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 896fc7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 896fc9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 896fca: mov dword ptr [ecx + edx + 0x1c], eax */
  W32((uint32_t)(ecx + edx + 0x1cu), eax);
L_896fce: /* 896fce: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 896fd2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 896fd6: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 896fd9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 896fda: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 896fde: mov edx, dword ptr [esi + 0x18c] */
  edx = R32((uint32_t)(esi + 0x18cu));
/* 896fe4: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 896fe7: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896fe9: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 896fed: jl 0x896fa0 */
  if ((sf != of)) goto L_896fa0;
L_896fef: /* 896fef: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 896ff3: mov byte ptr [esp + 0x114], 2 */
  W8((uint32_t)(esp + 0x114u), 0x2u);
/* 896ffb: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x897000u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 897000: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 897004: mov byte ptr [esp + 0x114], 1 */
  W8((uint32_t)(esp + 0x114u), 0x1u);
/* 89700c: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x897011u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
L_897011: /* 897011: mov ecx, dword ptr [esp + 0x124] */
  ecx = R32((uint32_t)(esp + 0x124u));
/* 897018: xor eax, eax */
  eax = 0;
/* 89701a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89701c: je 0x897083 */
  if (zf) goto L_897083;
L_89701e: /* 89701e: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 897021: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 897025: jle 0x897083 */
  if ((zf || sf != of)) goto L_897083;
L_897027: /* 897027: jmp 0x897030 */
  goto L_897030;
L_897030: /* 897030: mov edx, dword ptr [esi + 0x188] */
  edx = R32((uint32_t)(esi + 0x188u));
/* 897036: mov ecx, dword ptr [esp + 0x124] */
  ecx = R32((uint32_t)(esp + 0x124u));
/* 89703d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89703f: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 897041: mov edi, ecx */
  edi = ecx;
/* 897043: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 897045: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 897047: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 89704a: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 89704d: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 897050: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 897053: mov edx, dword ptr [esi + 0x188] */
  edx = R32((uint32_t)(esi + 0x188u));
/* 897059: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89705c: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 89705e: lea edx, [eax + edx + 0x10] */
  edx = (uint32_t)(eax + edx + 0x10u);
/* 897062: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 897064: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 897067: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 89706a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 89706d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 897070: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 897074: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 897077: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 897078: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89707b: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89707d: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 897081: jl 0x897030 */
  if ((sf != of)) goto L_897030;
L_897083: /* 897083: lea ecx, [esp + 0x90] */
  ecx = (uint32_t)(esp + 0x90u);
/* 89708a: mov byte ptr [esp + 0x114], 0 */
  W8((uint32_t)(esp + 0x114u), 0x0u);
/* 897092: call 0x6c31ac */
  esp -= 4; W32(esp, 0x897097u); SPILL(); f_6c31ac(); if (g_unwind) return; RELOAD();
/* 897097: lea ecx, [esp + 0x84] */
  ecx = (uint32_t)(esp + 0x84u);
/* 89709e: mov dword ptr [esp + 0x114], 0xffffffff */
  W32((uint32_t)(esp + 0x114u), 0xffffffffu);
/* 8970a9: call 0x6c2ed2 */
  esp -= 4; W32(esp, 0x8970aeu); SPILL(); f_6c2ed2(); if (g_unwind) return; RELOAD();
/* 8970ae: mov ecx, dword ptr [esp + 0x10c] */
  ecx = R32((uint32_t)(esp + 0x10cu));
/* 8970b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8970b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8970b7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8970b8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8970b9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8970c0: add esp, 0x108 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8970c6: ret  */
  esp += 4; SPILL(); return;
}

void f_896f47(void) {
  LOAD_REGS();
L_896f47: /* 896f47: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* 896f4e: mov edi, edi */
  edi = edi;
L_896f50: /* 896f50: mov edx, dword ptr [ebp + 0xb0] */
  edx = R32((uint32_t)(ebp + 0xb0u));
/* 896f56: movzx eax, word ptr [edx + ecx*8 + 4] */
  eax = (uint32_t)(R16((uint32_t)(edx + ecx*8 + 0x4u)));
/* 896f5b: mov edx, dword ptr [esp + 0x78] */
  edx = R32((uint32_t)(esp + 0x78u));
/* 896f5f: inc dword ptr [edx + eax*4] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(edx + eax*4), r);
  }
/* 896f62: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 896f66: cmp dword ptr [edx + eax*4], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + eax*4))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 896f6a: jne 0x896f7b */
  if (!zf) goto L_896f7b;
L_896f6c: /* 896f6c: mov ebx, dword ptr [ebp + 0xb0] */
  ebx = R32((uint32_t)(ebp + 0xb0u));
/* 896f72: movzx ebx, word ptr [ebx + ecx*8 + 6] */
  ebx = (uint32_t)(R16((uint32_t)(ebx + ecx*8 + 0x6u)));
/* 896f77: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 896f78: mov dword ptr [edx + eax*4], ebx */
  W32((uint32_t)(edx + eax*4), ebx);
L_896f7b: /* 896f7b: mov eax, dword ptr [ebp + 0xb4] */
  eax = R32((uint32_t)(ebp + 0xb4u));
/* 896f81: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 896f82: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896f84: jl 0x896f50 */
  if ((sf != of)) goto L_896f50;
L_896f86: /* 896f86: mov eax, dword ptr [esi + 0x18c] */
  eax = R32((uint32_t)(esi + 0x18cu));
/* 896f8c: xor ecx, ecx */
  ecx = 0;
/* 896f8e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896f90: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 896f94: jle 0x896fef */
  if ((zf || sf != of)) goto L_896fef;
L_896f96: /* 896f96: mov dword ptr [esp + 0x44], ecx */
  W32((uint32_t)(esp + 0x44u), ecx);
/* 896f9a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_896fa0: /* 896fa0: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 896fa4: mov eax, dword ptr [ebp + 0xc8] */
  eax = R32((uint32_t)(ebp + 0xc8u));
/* 896faa: movzx eax, word ptr [eax + edx] */
  eax = (uint32_t)(R16((uint32_t)(eax + edx)));
/* 896fae: cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896fb1: jge 0x896fce */
  if ((sf == of)) goto L_896fce;
L_896fb3: /* 896fb3: mov ebx, dword ptr [esp + 0x78] */
  ebx = R32((uint32_t)(esp + 0x78u));
/* 896fb7: mov ebx, dword ptr [ebx + eax*4] */
  ebx = R32((uint32_t)(ebx + eax*4));
/* 896fba: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 896fbc: mov dword ptr [ecx + edx + 0xc], ebx */
  W32((uint32_t)(ecx + edx + 0xcu), ebx);
/* 896fc0: mov edx, dword ptr [esp + 0x6c] */
  edx = R32((uint32_t)(esp + 0x6cu));
/* 896fc4: mov eax, dword ptr [edx + eax*4] */
  eax = R32((uint32_t)(edx + eax*4));
/* 896fc7: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 896fc9: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 896fca: mov dword ptr [ecx + edx + 0x1c], eax */
  W32((uint32_t)(ecx + edx + 0x1cu), eax);
L_896fce: /* 896fce: mov edx, dword ptr [esp + 0x44] */
  edx = R32((uint32_t)(esp + 0x44u));
/* 896fd2: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* 896fd6: add edx, 0xc */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 896fd9: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 896fda: mov dword ptr [esp + 0x44], edx */
  W32((uint32_t)(esp + 0x44u), edx);
/* 896fde: mov edx, dword ptr [esi + 0x18c] */
  edx = R32((uint32_t)(esi + 0x18cu));
/* 896fe4: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 896fe7: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 896fe9: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 896fed: jl 0x896fa0 */
  if ((sf != of)) goto L_896fa0;
L_896fef: /* 896fef: lea ecx, [esp + 0x6c] */
  ecx = (uint32_t)(esp + 0x6cu);
/* 896ff3: mov byte ptr [esp + 0x114], 2 */
  W8((uint32_t)(esp + 0x114u), 0x2u);
/* 896ffb: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x897000u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 897000: lea ecx, [esp + 0x78] */
  ecx = (uint32_t)(esp + 0x78u);
/* 897004: mov byte ptr [esp + 0x114], 1 */
  W8((uint32_t)(esp + 0x114u), 0x1u);
/* 89700c: call 0x6c3d46 */
  esp -= 4; W32(esp, 0x897011u); SPILL(); f_6c3d46(); if (g_unwind) return; RELOAD();
/* 897011: mov ecx, dword ptr [esp + 0x124] */
  ecx = R32((uint32_t)(esp + 0x124u));
/* 897018: xor eax, eax */
  eax = 0;
/* 89701a: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89701c: je 0x897083 */
  if (zf) goto L_897083;
L_89701e: /* 89701e: cmp dword ptr [ebp + 0x10], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x10u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 897021: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* 897025: jle 0x897083 */
  if ((zf || sf != of)) goto L_897083;
L_897027: /* 897027: jmp 0x897030 */
  goto L_897030;
L_897030: /* 897030: mov edx, dword ptr [esi + 0x188] */
  edx = R32((uint32_t)(esi + 0x188u));
/* 897036: mov ecx, dword ptr [esp + 0x124] */
  ecx = R32((uint32_t)(esp + 0x124u));
/* 89703d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89703f: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 897041: mov edi, ecx */
  edi = ecx;
/* 897043: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 897045: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 897047: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 89704a: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 89704d: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 897050: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 897053: mov edx, dword ptr [esi + 0x188] */
  edx = R32((uint32_t)(esi + 0x188u));
/* 897059: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89705c: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 89705e: lea edx, [eax + edx + 0x10] */
  edx = (uint32_t)(eax + edx + 0x10u);
/* 897062: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 897064: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 897067: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 89706a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 89706d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 897070: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 897074: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 897077: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 897078: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89707b: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89707d: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 897081: jl 0x897030 */
  if ((sf != of)) goto L_897030;
L_897083: /* 897083: lea ecx, [esp + 0x90] */
  ecx = (uint32_t)(esp + 0x90u);
/* 89708a: mov byte ptr [esp + 0x114], 0 */
  W8((uint32_t)(esp + 0x114u), 0x0u);
/* 897092: call 0x6c31ac */
  esp -= 4; W32(esp, 0x897097u); SPILL(); f_6c31ac(); if (g_unwind) return; RELOAD();
/* 897097: lea ecx, [esp + 0x84] */
  ecx = (uint32_t)(esp + 0x84u);
/* 89709e: mov dword ptr [esp + 0x114], 0xffffffff */
  W32((uint32_t)(esp + 0x114u), 0xffffffffu);
/* 8970a9: call 0x6c2ed2 */
  esp -= 4; W32(esp, 0x8970aeu); SPILL(); f_6c2ed2(); if (g_unwind) return; RELOAD();
/* 8970ae: mov ecx, dword ptr [esp + 0x10c] */
  ecx = R32((uint32_t)(esp + 0x10cu));
/* 8970b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8970b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8970b7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8970b8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8970b9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8970c0: add esp, 0x108 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8970c6: ret  */
  esp += 4; SPILL(); return;
}

void f_897029(void) {
  LOAD_REGS();
L_897029: /* 897029: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_897030: /* 897030: mov edx, dword ptr [esi + 0x188] */
  edx = R32((uint32_t)(esi + 0x188u));
/* 897036: mov ecx, dword ptr [esp + 0x124] */
  ecx = R32((uint32_t)(esp + 0x124u));
/* 89703d: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89703f: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 897041: mov edi, ecx */
  edi = ecx;
/* 897043: mov ebx, dword ptr [edi] */
  ebx = R32((uint32_t)(edi));
/* 897045: mov dword ptr [edx], ebx */
  W32((uint32_t)(edx), ebx);
/* 897047: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* 89704a: mov dword ptr [edx + 4], ebx */
  W32((uint32_t)(edx + 0x4u), ebx);
/* 89704d: mov edi, dword ptr [edi + 8] */
  edi = R32((uint32_t)(edi + 0x8u));
/* 897050: mov dword ptr [edx + 8], edi */
  W32((uint32_t)(edx + 0x8u), edi);
/* 897053: mov edx, dword ptr [esi + 0x188] */
  edx = R32((uint32_t)(esi + 0x188u));
/* 897059: add ecx, 0xc */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89705c: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* 89705e: lea edx, [eax + edx + 0x10] */
  edx = (uint32_t)(eax + edx + 0x10u);
/* 897062: mov dword ptr [edx], edi */
  W32((uint32_t)(edx), edi);
/* 897064: mov edi, dword ptr [ecx + 4] */
  edi = R32((uint32_t)(ecx + 0x4u));
/* 897067: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 89706a: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 89706d: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 897070: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* 897074: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 897077: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 897078: add eax, 0x20 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89707b: cmp ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89707d: mov dword ptr [esp + 0x10], ecx */
  W32((uint32_t)(esp + 0x10u), ecx);
/* 897081: jl 0x897030 */
  if ((sf != of)) goto L_897030;
L_897083: /* 897083: lea ecx, [esp + 0x90] */
  ecx = (uint32_t)(esp + 0x90u);
/* 89708a: mov byte ptr [esp + 0x114], 0 */
  W8((uint32_t)(esp + 0x114u), 0x0u);
/* 897092: call 0x6c31ac */
  esp -= 4; W32(esp, 0x897097u); SPILL(); f_6c31ac(); if (g_unwind) return; RELOAD();
/* 897097: lea ecx, [esp + 0x84] */
  ecx = (uint32_t)(esp + 0x84u);
/* 89709e: mov dword ptr [esp + 0x114], 0xffffffff */
  W32((uint32_t)(esp + 0x114u), 0xffffffffu);
/* 8970a9: call 0x6c2ed2 */
  esp -= 4; W32(esp, 0x8970aeu); SPILL(); f_6c2ed2(); if (g_unwind) return; RELOAD();
/* 8970ae: mov ecx, dword ptr [esp + 0x10c] */
  ecx = R32((uint32_t)(esp + 0x10cu));
/* 8970b5: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 8970b6: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 8970b7: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 8970b8: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 8970b9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 8970c0: add esp, 0x108 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x108u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8970c6: ret  */
  esp += 4; SPILL(); return;
}

void f_897640(void) {
  LOAD_REGS();
L_897640: /* 897640: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 897641: mov ebp, esp */
  ebp = esp;
/* 897643: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 897645: push 0x9d59f0 */
  { uint32_t v = 0x9d59f0u; esp -= 4; W32(esp, v); }
/* 89764a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 897650: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 897651: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 897658: sub esp, 0x154 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x154u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89765e: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 897661: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 897662: mov ebx, dword ptr [eax] */
  ebx = R32((uint32_t)(eax));
/* 897664: fld dword ptr [ebx + 0x284] */
  { double v = F32((uint32_t)(ebx + 0x284u)); FPUSH(v); }
/* 89766a: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89766b: mov esi, dword ptr [ebx + 0xd0] */
  esi = R32((uint32_t)(ebx + 0xd0u));
/* 897671: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 897673: fmul dword ptr [esi + 0x118] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x118u)));
/* 897679: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89767a: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 89767d: lea ecx, [esi + 0x104] */
  ecx = (uint32_t)(esi + 0x104u);
/* 897683: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 897686: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 897687: mov ecx, dword ptr [0xcfa1c4] */
  ecx = R32((uint32_t)(0xcfa1c4u));
/* 89768d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89768f: lea edx, [ebp - 0x160] */
  edx = (uint32_t)(ebp + 0xfffffea0u);
/* 897695: fmul dword ptr [esi + 0x114] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x114u)));
/* 89769b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89769c: add ecx, 0x18 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89769f: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 8976a6: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8976a9: mov dword ptr [ebp - 0x84], esi */
  W32((uint32_t)(ebp + 0xffffff7cu), esi);
/* 8976af: fmul dword ptr [esi + 0x110] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x110u)));
/* 8976b5: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8976b8: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8976bb: fadd dword ptr [ebx + 0x178] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x178u)));
/* 8976c1: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8976c4: fadd dword ptr [ebx + 0x174] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x174u)));
/* 8976ca: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8976cd: fadd dword ptr [ebx + 0x170] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x170u)));
/* 8976d3: mov dword ptr [ebp - 0x48], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffb8u), 0x3f800000u);
/* 8976da: mov dword ptr [ebp - 0x44], 0 */
  W32((uint32_t)(ebp + 0xffffffbcu), 0x0u);
/* 8976e1: mov dword ptr [ebp - 0x40], 0 */
  W32((uint32_t)(ebp + 0xffffffc0u), 0x0u);
/* 8976e8: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 8976eb: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 8976f2: mov dword ptr [ebp - 0x38], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x3f800000u);
/* 8976f9: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 8976fc: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 897703: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 897706: call dword ptr [0xcfa1d0] */
  esp -= 4; W32(esp, 0x89770cu); SPILL(); f_4e2086(); if (g_unwind) return; /* Core!??KFCoords@@QBE?AV0@ABVFRotator@@@Z */ RELOAD();
/* 89770c: mov eax, dword ptr [esi + 0x120] */
  eax = R32((uint32_t)(esi + 0x120u));
/* 897712: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 897714: jne 0x897865 */
  if (!zf) goto L_897865;
L_89771a: /* 89771a: mov eax, dword ptr [ebx + 0x284] */
  eax = R32((uint32_t)(ebx + 0x284u));
/* 897720: mov edi, dword ptr [0xcfa578] */
  edi = R32((uint32_t)(0xcfa578u));
/* 897726: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 897729: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89772a: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 89772d: add ecx, 0x1a0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1a0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 897733: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 897736: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x897738u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 897738: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 89773b: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 89773e: mov edx, dword ptr [ebx + 0x288] */
  edx = R32((uint32_t)(ebx + 0x288u));
/* 897744: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 897747: mov ecx, dword ptr [ebx + 0x278] */
  ecx = R32((uint32_t)(ebx + 0x278u));
/* 89774d: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 897750: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 897753: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 897756: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 897758: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 89775a: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 89775d: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89775f: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897762: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 897765: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897768: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 89776b: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 89776e: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897771: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 897774: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x897777u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 897777: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 89777a: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 89777d: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 897780: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 897783: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897786: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 897789: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 89778c: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 89778f: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897792: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 897795: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 897798: mov dword ptr [ebp - 0x48], ecx */
  W32((uint32_t)(ebp + 0xffffffb8u), ecx);
/* 89779b: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 89779e: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8977a1: lea ecx, [ebp - 0x160] */
  ecx = (uint32_t)(ebp + 0xfffffea0u);
/* 8977a7: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 8977aa: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8977ad: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8977b0: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8977b1: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8977b4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8977b5: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 8977b8: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 8977bb: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x8977c1u); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8977c1: fld dword ptr [esi + 0xf8] */
  { double v = F32((uint32_t)(esi + 0xf8u)); FPUSH(v); }
/* 8977c7: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8977cd: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 8977d0: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8977d3: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8977d6: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8977d9: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8977dc: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8977de: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8977e1: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8977e4: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 8977e7: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8977ea: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8977ed: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 8977f0: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8977f3: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8977f6: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8977f9: lea eax, [ebp - 0x68] */
  eax = (uint32_t)(ebp + 0xffffff98u);
/* 8977fc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8977fd: add ecx, 0x1ac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1acu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 897803: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 897806: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x897808u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 897808: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 89780b: fchs  */
  ST0 = -ST0;
/* 89780d: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 897810: fchs  */
  ST0 = -ST0;
/* 897812: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 897814: fchs  */
  ST0 = -ST0;
/* 897816: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 897819: mov ecx, dword ptr [ebx + 0x284] */
  ecx = R32((uint32_t)(ebx + 0x284u));
/* 89781f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 897821: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 897824: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897827: mov ecx, dword ptr [ebx + 0x278] */
  ecx = R32((uint32_t)(ebx + 0x278u));
/* 89782d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89782f: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 897832: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897835: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 897838: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 89783b: fld dword ptr [ebx + 0x28c] */
  { double v = F32((uint32_t)(ebx + 0x28cu)); FPUSH(v); }
/* 897841: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 897844: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 897846: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 897849: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 89784b: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 89784d: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 897850: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 897852: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 897855: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 897857: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x89785au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89785a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 89785d: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 897860: jmp 0x897b29 */
  goto L_897b29;
L_897865: /* 897865: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 897868: jne 0x897a01 */
  if (!zf) goto L_897a01;
L_89786e: /* 89786e: fld dword ptr [ebx + 0x284] */
  { double v = F32((uint32_t)(ebx + 0x284u)); FPUSH(v); }
/* 897874: mov ecx, dword ptr [ebx + 0x278] */
  ecx = R32((uint32_t)(ebx + 0x278u));
/* 89787a: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 897880: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 897882: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 897884: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 897887: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 897889: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 89788c: fld dword ptr [ebx + 0x288] */
  { double v = F32((uint32_t)(ebx + 0x288u)); FPUSH(v); }
/* 897892: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 897895: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 897897: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 89789a: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 89789d: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89789f: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8978a2: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8978a4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 8978a6: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8978a9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 8978ab: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x8978aeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8978ae: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 8978b1: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 8978b4: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 8978b7: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8978ba: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8978bd: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 8978c0: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8978c3: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 8978c6: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 8978c9: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8978cc: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8978cf: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 8978d2: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8978d5: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8978d8: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 8978db: lea eax, [ebp - 0x160] */
  eax = (uint32_t)(ebp + 0xfffffea0u);
/* 8978e1: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8978e4: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8978e7: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8978e8: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8978eb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8978ec: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 8978ef: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 8978f2: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x8978f8u); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8978f8: fld dword ptr [esi + 0xf8] */
  { double v = F32((uint32_t)(esi + 0xf8u)); FPUSH(v); }
/* 8978fe: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 897904: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 897907: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 89790a: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 89790d: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 897910: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 897913: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 897915: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 897918: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 89791b: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 89791e: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 897921: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 897924: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 897927: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 89792a: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89792d: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 897930: fld dword ptr [ebx + 0x284] */
  { double v = F32((uint32_t)(ebx + 0x284u)); FPUSH(v); }
/* 897936: fld dword ptr [0xa08220] */
  { double v = F32((uint32_t)(0xa08220u)); FPUSH(v); }
/* 89793c: mov edx, dword ptr [ebx + 0x28c] */
  edx = R32((uint32_t)(ebx + 0x28cu));
/* 897942: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 897944: mov ecx, dword ptr [ebx + 0x278] */
  ecx = R32((uint32_t)(ebx + 0x278u));
/* 89794a: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 89794c: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 89794f: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 897952: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 897958: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89795a: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89795c: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 89795f: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 897962: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897965: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 897968: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 89796b: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 89796e: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 897971: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897974: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 897977: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x89797au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89797a: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 89797d: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 897980: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 897983: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 897986: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897989: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 89798c: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 89798f: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 897992: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897995: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 897998: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 89799b: mov dword ptr [ebp - 0x3c], ecx */
  W32((uint32_t)(ebp + 0xffffffc4u), ecx);
/* 89799e: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8979a1: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8979a4: lea ecx, [ebp - 0x160] */
  ecx = (uint32_t)(ebp + 0xfffffea0u);
/* 8979aa: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 8979ad: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8979b0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8979b3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8979b4: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 8979b7: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8979b8: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 8979bb: mov dword ptr [ebp - 0x34], eax */
  W32((uint32_t)(ebp + 0xffffffccu), eax);
/* 8979be: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x8979c4u); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 8979c4: fld dword ptr [esi + 0xfc] */
  { double v = F32((uint32_t)(esi + 0xfcu)); FPUSH(v); }
/* 8979ca: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8979d0: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 8979d3: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8979d6: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8979d9: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 8979dc: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 8979df: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 8979e1: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8979e4: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8979e7: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 8979ea: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8979ed: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8979f0: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 8979f3: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8979f6: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8979f9: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 8979fc: jmp 0x897d33 */
  goto L_897d33;
L_897a01: /* 897a01: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 897a04: jne 0x897b8f */
  if (!zf) goto L_897b8f;
L_897a0a: /* 897a0a: mov eax, dword ptr [ebx + 0x284] */
  eax = R32((uint32_t)(ebx + 0x284u));
/* 897a10: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 897a13: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 897a14: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 897a17: add ecx, 0x1a0 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1a0u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 897a1d: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 897a20: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x897a26u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 897a26: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 897a29: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 897a2c: mov edx, dword ptr [ebx + 0x288] */
  edx = R32((uint32_t)(ebx + 0x288u));
/* 897a32: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 897a35: mov ecx, dword ptr [ebx + 0x278] */
  ecx = R32((uint32_t)(ebx + 0x278u));
/* 897a3b: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 897a3e: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 897a41: mov dword ptr [ebp - 0x14], edx */
  W32((uint32_t)(ebp + 0xffffffecu), edx);
/* 897a44: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 897a46: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 897a48: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 897a4b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 897a4d: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897a50: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 897a53: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897a56: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 897a59: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 897a5c: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897a5f: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 897a62: call dword ptr [eax + 0x78] */
  { uint32_t t = R32((uint32_t)(eax + 0x78u)); esp -= 4; W32(esp, 0x897a65u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 897a65: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 897a68: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 897a6b: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 897a6e: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 897a70: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 897a73: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 897a76: mov edx, dword ptr [ebp - 0x58] */
  edx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 897a79: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 897a7b: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 897a7e: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 897a81: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 897a84: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 897a87: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 897a8a: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 897a8c: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 897a8f: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 897a92: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 897a95: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 897a98: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 897a9b: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 897a9d: fld dword ptr [esi + 0xf8] */
  { double v = F32((uint32_t)(esi + 0xf8u)); FPUSH(v); }
/* 897aa3: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 897aa9: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 897aac: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 897aaf: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897ab2: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 897ab5: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897ab8: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 897abb: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897abe: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 897ac1: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 897ac4: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 897ac7: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 897aca: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 897acd: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 897ad0: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 897ad3: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 897ad6: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 897ad9: fld dword ptr [ebx + 0x284] */
  { double v = F32((uint32_t)(ebx + 0x284u)); FPUSH(v); }
/* 897adf: fld dword ptr [0xa08220] */
  { double v = F32((uint32_t)(0xa08220u)); FPUSH(v); }
/* 897ae5: mov eax, dword ptr [ebx + 0x28c] */
  eax = R32((uint32_t)(ebx + 0x28cu));
/* 897aeb: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 897aed: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 897af0: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 897af3: fmul dword ptr [0x9f402c] */
  ST0 = ST0 * (F32((uint32_t)(0x9f402cu)));
/* 897af9: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 897afb: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 897afd: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 897b00: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 897b03: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897b06: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 897b09: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897b0c: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 897b0f: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 897b12: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897b15: mov ecx, dword ptr [ebx + 0x278] */
  ecx = R32((uint32_t)(ebx + 0x278u));
/* 897b1b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 897b1d: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 897b20: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x897b23u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 897b23: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 897b26: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
L_897b29: /* 897b29: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 897b2c: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 897b2f: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897b32: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 897b35: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897b38: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 897b3b: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897b3e: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 897b41: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 897b44: mov dword ptr [ebp - 0x3c], eax */
  W32((uint32_t)(ebp + 0xffffffc4u), eax);
/* 897b47: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 897b4a: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 897b4d: mov dword ptr [ebp - 0x38], ecx */
  W32((uint32_t)(ebp + 0xffffffc8u), ecx);
/* 897b50: lea eax, [ebp - 0x160] */
  eax = (uint32_t)(ebp + 0xfffffea0u);
/* 897b56: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 897b59: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 897b5c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 897b5d: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 897b60: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 897b61: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 897b64: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
/* 897b67: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x897b6du); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 897b6d: fld dword ptr [esi + 0xfc] */
  { double v = F32((uint32_t)(esi + 0xfcu)); FPUSH(v); }
/* 897b73: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 897b79: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 897b7c: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 897b7f: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 897b82: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 897b85: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 897b88: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 897b8a: jmp 0x897d18 */
  goto L_897d18;
L_897b8f: /* 897b8f: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 897b92: jne 0x897d33 */
  if (!zf) goto L_897d33;
L_897b98: /* 897b98: fld dword ptr [ebx + 0x284] */
  { double v = F32((uint32_t)(ebx + 0x284u)); FPUSH(v); }
/* 897b9e: mov ecx, dword ptr [ebx + 0x278] */
  ecx = R32((uint32_t)(ebx + 0x278u));
/* 897ba4: fld dword ptr [0x9f402c] */
  { double v = F32((uint32_t)(0x9f402cu)); FPUSH(v); }
/* 897baa: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 897bac: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 897bae: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 897bb1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 897bb3: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 897bb6: fld dword ptr [ebx + 0x288] */
  { double v = F32((uint32_t)(ebx + 0x288u)); FPUSH(v); }
/* 897bbc: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 897bbf: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 897bc1: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 897bc4: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 897bc7: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 897bc9: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 897bcc: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 897bce: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 897bd0: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 897bd3: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 897bd5: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x897bd8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 897bd8: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 897bdb: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 897bde: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 897be1: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 897be4: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897be7: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 897bea: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897bed: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 897bf0: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897bf3: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 897bf6: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 897bf9: mov dword ptr [ebp - 0x48], eax */
  W32((uint32_t)(ebp + 0xffffffb8u), eax);
/* 897bfc: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 897bff: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 897c02: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 897c05: lea eax, [ebp - 0x160] */
  eax = (uint32_t)(ebp + 0xfffffea0u);
/* 897c0b: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 897c0e: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 897c11: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 897c12: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 897c15: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 897c16: lea ecx, [ebp - 0x48] */
  ecx = (uint32_t)(ebp + 0xffffffb8u);
/* 897c19: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 897c1c: call dword ptr [0xcfa888] */
  esp -= 4; W32(esp, 0x897c22u); SPILL(); f_4e24e6(); if (g_unwind) return; /* Core!?TransformVectorBy@FVector@@QBE?AV1@ABVFCoords@@@Z */ RELOAD();
/* 897c22: fld dword ptr [esi + 0xf8] */
  { double v = F32((uint32_t)(esi + 0xf8u)); FPUSH(v); }
/* 897c28: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 897c2e: fst dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0);
/* 897c31: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 897c34: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 897c37: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 897c3a: fld dword ptr [ebp - 0x14] */
  { double v = F32((uint32_t)(ebp + 0xffffffecu)); FPUSH(v); }
/* 897c3d: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 897c3f: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 897c42: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 897c45: mov dword ptr [ebp - 0x48], edx */
  W32((uint32_t)(ebp + 0xffffffb8u), edx);
/* 897c48: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 897c4b: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 897c4e: lea edx, [ebp - 0x68] */
  edx = (uint32_t)(ebp + 0xffffff98u);
/* 897c51: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 897c54: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 897c57: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 897c5a: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 897c5d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 897c5e: add ecx, 0x1ac */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1acu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 897c64: mov dword ptr [ebp - 0x44], eax */
  W32((uint32_t)(ebp + 0xffffffbcu), eax);
/* 897c67: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x897c6du); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 897c6d: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 897c70: fchs  */
  ST0 = -ST0;
/* 897c72: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 897c75: fchs  */
  ST0 = -ST0;
/* 897c77: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* 897c79: mov eax, dword ptr [ebx + 0x284] */
  eax = R32((uint32_t)(ebx + 0x284u));
/* 897c7f: fchs  */
  ST0 = -ST0;
/* 897c81: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 897c84: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 897c87: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 897c89: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897c8c: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 897c8f: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897c92: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 897c95: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897c98: fld dword ptr [ebx + 0x28c] */
  { double v = F32((uint32_t)(ebx + 0x28cu)); FPUSH(v); }
/* 897c9e: mov ecx, dword ptr [ebx + 0x278] */
  ecx = R32((uint32_t)(ebx + 0x278u));
/* 897ca4: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 897ca7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 897ca9: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 897cab: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 897cae: fxch st(2) */
  { double t = ST0; ST0 = STI(2); STI(2) = t; }
/* 897cb0: fmul st(2) */
  ST0 = ST0 * STI(2);
/* 897cb2: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 897cb5: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 897cb7: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 897cba: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 897cbc: call dword ptr [edx + 0x78] */
  { uint32_t t = R32((uint32_t)(edx + 0x78u)); esp -= 4; W32(esp, 0x897cbfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 897cbf: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 897cc2: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 897cc5: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 897cc8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 897cca: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 897ccd: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 897cd0: mov ecx, dword ptr [ebp - 0x5c] */
  ecx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 897cd3: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 897cd5: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 897cd8: mov dword ptr [ebp - 0x4c], ecx */
  W32((uint32_t)(ebp + 0xffffffb4u), ecx);
/* 897cdb: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 897cde: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 897ce1: mov eax, dword ptr [ebp - 0x58] */
  eax = R32((uint32_t)(ebp + 0xffffffa8u));
/* 897ce4: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 897ce6: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 897ce9: mov dword ptr [ebp - 0x50], eax */
  W32((uint32_t)(ebp + 0xffffffb0u), eax);
/* 897cec: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 897cef: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 897cf2: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 897cf5: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 897cf7: fld dword ptr [esi + 0xfc] */
  { double v = F32((uint32_t)(esi + 0xfcu)); FPUSH(v); }
/* 897cfd: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 897d03: fstp dword ptr [ebp - 0x14] */
  WF32((uint32_t)(ebp + 0xffffffecu), ST0); FPOP();
/* 897d06: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 897d09: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897d0c: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 897d0f: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
/* 897d12: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 897d15: fmul dword ptr [ebp - 0x14] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffecu)));
L_897d18: /* 897d18: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 897d1b: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 897d1e: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 897d21: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 897d24: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 897d27: mov dword ptr [ebp - 0x38], eax */
  W32((uint32_t)(ebp + 0xffffffc8u), eax);
/* 897d2a: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 897d2d: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 897d30: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
L_897d33: /* 897d33: movzx edx, byte ptr [esi + 0x11c] */
  edx = (uint32_t)(R8((uint32_t)(esi + 0x11cu)));
/* 897d3a: movzx eax, byte ptr [esi + 0x11d] */
  eax = (uint32_t)(R8((uint32_t)(esi + 0x11du)));
/* 897d41: movzx ecx, byte ptr [esi + 0x11e] */
  ecx = (uint32_t)(R8((uint32_t)(esi + 0x11eu)));
/* 897d48: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* 897d4b: mov dword ptr [ebp - 0x1c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x3f800000u);
/* 897d52: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 897d55: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 897d58: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 897d5e: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 897d61: mov dword ptr [ebp - 0x18], ecx */
  W32((uint32_t)(ebp + 0xffffffe8u), ecx);
/* 897d64: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 897d6a: fild dword ptr [ebp - 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 897d6d: fmul dword ptr [0x9f40f8] */
  ST0 = ST0 * (F32((uint32_t)(0x9f40f8u)));
/* 897d73: fstp dword ptr [ebp - 0x6c] */
  WF32((uint32_t)(ebp + 0xffffff94u), ST0); FPOP();
/* 897d76: mov edx, dword ptr [ebp - 0x6c] */
  edx = R32((uint32_t)(ebp + 0xffffff94u));
/* 897d79: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 897d7c: mov edx, dword ptr [0xcfa504] */
  edx = R32((uint32_t)(0xcfa504u));
/* 897d82: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 897d85: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 897d88: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 897d8b: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 897d8e: cmp dword ptr [edx], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 897d91: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 897d94: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 897d97: je 0x897dee */
  if (zf) goto L_897dee;
L_897d99: /* 897d99: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 897d9c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 897d9f: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 897da2: test dword ptr [edx + 0x534], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x534u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 897dac: je 0x897dee */
  if (zf) goto L_897dee;
L_897dae: /* 897dae: test dword ptr [ebx + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebx + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 897db8: je 0x897dee */
  if (zf) goto L_897dee;
L_897dba: /* 897dba: mov dword ptr [ebp - 0x6c], 0x3f000000 */
  W32((uint32_t)(ebp + 0xffffff94u), 0x3f000000u);
/* 897dc1: mov eax, dword ptr [ebp - 0x6c] */
  eax = R32((uint32_t)(ebp + 0xffffff94u));
/* 897dc4: mov dword ptr [ebp - 0x68], 0x3f666666 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x3f666666u);
/* 897dcb: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 897dce: mov dword ptr [ebp - 0x64], 0x3f000000 */
  W32((uint32_t)(ebp + 0xffffff9cu), 0x3f000000u);
/* 897dd5: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 897dd8: mov dword ptr [ebp - 0x60], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x3f800000u);
/* 897ddf: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 897de2: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 897de5: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* 897de8: mov dword ptr [ebp - 0x20], edx */
  W32((uint32_t)(ebp + 0xffffffe0u), edx);
/* 897deb: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
L_897dee: /* 897dee: lea ecx, [ebp - 0x28] */
  ecx = (uint32_t)(ebp + 0xffffffd8u);
/* 897df1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 897df2: lea ecx, [ebp - 0x2c] */
  ecx = (uint32_t)(ebp + 0xffffffd4u);
/* 897df5: call 0x6c576d */
  esp -= 4; W32(esp, 0x897dfau); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 897dfa: mov dword ptr [ebp - 0x12c], 0xa1a240 */
  W32((uint32_t)(ebp + 0xfffffed4u), 0xa1a240u);
/* 897e04: mov edx, 4 */
  edx = 0x4u;
/* 897e09: mov ecx, 0x24 */
  ecx = 0x24u;
/* 897e0e: lea eax, [ebp - 0x128] */
  eax = (uint32_t)(ebp + 0xfffffed8u);
L_897e14: /* 897e14: dec edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  edx = r;
  }
/* 897e15: js 0x897e1b */
  if (sf) goto L_897e1b;
L_897e17: /* 897e17: add eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 897e19: jmp 0x897e14 */
  goto L_897e14;
L_897e1b: /* 897e1b: mov eax, dword ptr [0xcfa1b0] */
  eax = R32((uint32_t)(0xcfa1b0u));
/* 897e20: mov edi, dword ptr [eax + 4] */
  edi = R32((uint32_t)(eax + 0x4u));
/* 897e23: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 897e25: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 897e27: push 0x100 */
  { uint32_t v = 0x100u; esp -= 4; W32(esp, v); }
/* 897e2c: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 897e2d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 897e2e: call 0x99c910 */
  esp -= 4; W32(esp, 0x897e33u); SPILL(); f_99c910(); if (g_unwind) return; RELOAD();
/* 897e33: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 897e39: add eax, 0xe1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xe1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  eax = r;
  }
/* 897e3e: adc edx, 0 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edx = r;
  }
/* 897e41: add esi, 1 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a + b);
  cf = (r) < (a);
  esi = r;
  }
/* 897e44: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 897e46: mov ecx, dword ptr [0xcfa1b0] */
  ecx = R32((uint32_t)(0xcfa1b0u));
/* 897e4c: adc edi, 0 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x0u);
  uint32_t cin = cf;
  uint32_t r = (uint32_t)(a + b + cin);
  edi = r;
  }
/* 897e4f: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 897e52: mov dword ptr [ebp - 0x94], edx */
  W32((uint32_t)(ebp + 0xffffff6cu), edx);
/* 897e58: mov edx, dword ptr [ebp - 0x84] */
  edx = R32((uint32_t)(ebp + 0xffffff7cu));
/* 897e5e: mov dword ptr [ebp - 0x98], eax */
  W32((uint32_t)(ebp + 0xffffff68u), eax);
/* 897e64: mov eax, dword ptr [edx + 0xf4] */
  eax = R32((uint32_t)(edx + 0xf4u));
/* 897e6a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 897e6c: je 0x897e75 */
  if (zf) goto L_897e75;
L_897e6e: /* 897e6e: mov esi, eax */
  esi = eax;
/* 897e70: mov dword ptr [ebp - 0x14], esi */
  W32((uint32_t)(ebp + 0xffffffecu), esi);
/* 897e73: jmp 0x897e80 */
  goto L_897e80;
L_897e75: /* 897e75: mov eax, dword ptr [ebx + 0x278] */
  eax = R32((uint32_t)(ebx + 0x278u));
/* 897e7b: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
/* 897e7e: mov esi, eax */
  esi = eax;
L_897e80: /* 897e80: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 897e82: je 0x897fe9 */
  if (zf) goto L_897fe9;
L_897e88: /* 897e88: push 0xce9ec8 */
  { uint32_t v = 0xce9ec8u; esp -= 4; W32(esp, v); }
/* 897e8d: mov ecx, esi */
  ecx = esi;
/* 897e8f: call dword ptr [0xcfa360] */
  esp -= 4; W32(esp, 0x897e95u); SPILL(); f_4e2b3a(); if (g_unwind) return; /* Core!?IsA@UObject@@QBEHPAVUClass@@@Z */ RELOAD();
/* 897e95: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 897e97: je 0x897fe9 */
  if (zf) goto L_897fe9;
L_897e9d: /* 897e9d: mov eax, dword ptr [0xce1d2c] */
  eax = R32((uint32_t)(0xce1d2cu));
/* 897ea2: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 897ea4: jne 0x897f1a */
  if (!zf) goto L_897f1a;
L_897ea6: /* 897ea6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 897ea8: lea ecx, [ebp - 0x18] */
  ecx = (uint32_t)(ebp + 0xffffffe8u);
/* 897eab: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x897eb1u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 897eb1: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 897eb6: mov ecx, 0xb8d850 */
  ecx = 0xb8d850u;
/* 897ebb: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x897ec1u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 897ec1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 897ec3: jne 0x897edd */
  if (!zf) goto L_897edd;
L_897ec5: /* 897ec5: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 897eca: push 0xae85a8 */
  { uint32_t v = 0xae85a8u; esp -= 4; W32(esp, v); }
/* 897ecf: push 0xae85ec */
  { uint32_t v = 0xae85ecu; esp -= 4; W32(esp, v); }
/* 897ed4: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x897edau); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 897eda: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_897edd: /* 897edd: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x897ee3u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 897ee3: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 897ee9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 897eeb: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 897eee: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 897ef0: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 897ef1: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 897ef3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 897ef5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 897ef6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 897ef7: push 0xb8d850 */
  { uint32_t v = 0xb8d850u; esp -= 4; W32(esp, v); }
/* 897efc: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x897f02u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 897f02: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 897f08: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 897f0b: push 0xce1d2c */
  { uint32_t v = 0xce1d2cu; esp -= 4; W32(esp, v); }
/* 897f10: mov dword ptr [0xce1d2c], eax */
  W32((uint32_t)(0xce1d2cu), eax);
/* 897f15: call 0x6c1203 */
  esp -= 4; W32(esp, 0x897f1au); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
L_897f1a: /* 897f1a: mov edx, dword ptr [0xce1d2c] */
  edx = R32((uint32_t)(0xce1d2cu));
/* 897f20: mov dword ptr [edx + 0x38], esi */
  W32((uint32_t)(edx + 0x38u), esi);
/* 897f23: mov eax, dword ptr [0xce1d2c] */
  eax = R32((uint32_t)(0xce1d2cu));
/* 897f28: or dword ptr [eax + 0x40], 8 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 897f2c: mov eax, dword ptr [esi + 0x7c] */
  eax = R32((uint32_t)(esi + 0x7cu));
/* 897f2f: test al, 1 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 897f31: jne 0x897fb2 */
  if (!zf) goto L_897fb2;
L_897f37: /* 897f37: mov cl, byte ptr [ebx + 0x2c0] */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(R8((uint32_t)(ebx + 0x2c0u))) & 0xffu);
/* 897f3d: cmp cl, 2 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 897f40: je 0x897fb2 */
  if (zf) goto L_897fb2;
L_897f42: /* 897f42: test al, 2 */
  { uint8_t a = (uint8_t)((eax & 0xffu)); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 897f44: je 0x897f76 */
  if (zf) goto L_897f76;
L_897f46: /* 897f46: mov eax, dword ptr [0xce1d2c] */
  eax = R32((uint32_t)(0xce1d2cu));
/* 897f4b: mov byte ptr [eax + 0x3c], 2 */
  W8((uint32_t)(eax + 0x3cu), 0x2u);
/* 897f4f: mov eax, dword ptr [0xce1d2c] */
  eax = R32((uint32_t)(0xce1d2cu));
/* 897f54: and dword ptr [eax + 0x40], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 897f58: mov eax, dword ptr [0xce1d2c] */
  eax = R32((uint32_t)(0xce1d2cu));
/* 897f5d: or dword ptr [eax + 0x40], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 897f61: mov eax, dword ptr [0xce1d2c] */
  eax = R32((uint32_t)(0xce1d2cu));
/* 897f66: or dword ptr [eax + 0x40], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 897f6a: mov ecx, dword ptr [0xce1d2c] */
  ecx = R32((uint32_t)(0xce1d2cu));
/* 897f70: mov byte ptr [ecx + 0x44], 0 */
  W8((uint32_t)(ecx + 0x44u), 0x0u);
/* 897f74: jmp 0x897fe1 */
  goto L_897fe1;
L_897f76: /* 897f76: cmp cl, 3 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x3u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 897f79: jne 0x897f87 */
  if (!zf) goto L_897f87;
L_897f7b: /* 897f7b: mov edx, dword ptr [0xce1d2c] */
  edx = R32((uint32_t)(0xce1d2cu));
/* 897f81: mov byte ptr [edx + 0x3c], 4 */
  W8((uint32_t)(edx + 0x3cu), 0x4u);
/* 897f85: jmp 0x897f95 */
  goto L_897f95;
L_897f87: /* 897f87: cmp cl, 4 */
  { uint8_t a = (uint8_t)((ecx & 0xffu)); uint8_t b = (uint8_t)(0x4u);
  uint8_t r = (uint8_t)(a - b);
  zf = (r) == 0;
  }
/* 897f8a: jne 0x897fe1 */
  if (!zf) goto L_897fe1;
L_897f8c: /* 897f8c: mov eax, dword ptr [0xce1d2c] */
  eax = R32((uint32_t)(0xce1d2cu));
/* 897f91: mov byte ptr [eax + 0x3c], 1 */
  W8((uint32_t)(eax + 0x3cu), 0x1u);
L_897f95: /* 897f95: mov eax, dword ptr [0xce1d2c] */
  eax = R32((uint32_t)(0xce1d2cu));
/* 897f9a: and dword ptr [eax + 0x40], 0xfffffffe */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffffeu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 897f9e: mov eax, dword ptr [0xce1d2c] */
  eax = R32((uint32_t)(0xce1d2cu));
/* 897fa3: or dword ptr [eax + 0x40], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 897fa7: mov eax, dword ptr [0xce1d2c] */
  eax = R32((uint32_t)(0xce1d2cu));
/* 897fac: and dword ptr [eax + 0x40], 0xfffffffb */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0xfffffffbu);
  uint32_t r = (uint32_t)(a & b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 897fb0: jmp 0x897fe1 */
  goto L_897fe1;
L_897fb2: /* 897fb2: mov ecx, dword ptr [0xce1d2c] */
  ecx = R32((uint32_t)(0xce1d2cu));
/* 897fb8: mov byte ptr [ecx + 0x3c], 0 */
  W8((uint32_t)(ecx + 0x3cu), 0x0u);
/* 897fbc: mov eax, dword ptr [0xce1d2c] */
  eax = R32((uint32_t)(0xce1d2cu));
/* 897fc1: or dword ptr [eax + 0x40], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 897fc5: mov eax, dword ptr [0xce1d2c] */
  eax = R32((uint32_t)(0xce1d2cu));
/* 897fca: or dword ptr [eax + 0x40], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 897fce: mov eax, dword ptr [0xce1d2c] */
  eax = R32((uint32_t)(0xce1d2cu));
/* 897fd3: or dword ptr [eax + 0x40], 4 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x40u))); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x40u), r);
  }
/* 897fd7: mov edx, dword ptr [0xce1d2c] */
  edx = R32((uint32_t)(0xce1d2cu));
/* 897fdd: mov byte ptr [edx + 0x44], 0x7f */
  W8((uint32_t)(edx + 0x44u), 0x7fu);
L_897fe1: /* 897fe1: mov eax, dword ptr [0xce1d2c] */
  eax = R32((uint32_t)(0xce1d2cu));
/* 897fe6: mov dword ptr [ebp - 0x14], eax */
  W32((uint32_t)(ebp + 0xffffffecu), eax);
L_897fe9: /* 897fe9: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 897fec: mov dword ptr [ebp - 0x10c], 0 */
  W32((uint32_t)(ebp + 0xfffffef4u), 0x0u);
/* 897ff6: fsub dword ptr [ebp - 0x40] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 897ff9: mov dword ptr [ebp - 0x108], 0 */
  W32((uint32_t)(ebp + 0xfffffef8u), 0x0u);
/* 898003: mov dword ptr [ebp - 0xe8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff18u), 0x3f800000u);
/* 89800d: mov dword ptr [ebp - 0xe4], 0 */
  W32((uint32_t)(ebp + 0xffffff1cu), 0x0u);
/* 898017: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 89801a: fld dword ptr [ebp - 0x7c] */
  { double v = F32((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* 89801d: fsub dword ptr [ebp - 0x44] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 898020: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 898022: fld dword ptr [ebp - 0x80] */
  { double v = F32((uint32_t)(ebp + 0xffffff80u)); FPUSH(v); }
/* 898025: fsub dword ptr [ebp - 0x48] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 898028: fst dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0);
/* 89802b: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 89802e: fsub dword ptr [ebp - 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffccu)));
/* 898031: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 898034: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 898036: mov edx, dword ptr [ebp - 0x5c] */
  edx = R32((uint32_t)(ebp + 0xffffffa4u));
/* 898039: fsub dword ptr [ebp - 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 89803c: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 89803f: mov dword ptr [ebp - 0x120], edx */
  W32((uint32_t)(ebp + 0xfffffee0u), edx);
/* 898045: fstp dword ptr [ebp - 0x88] */
  WF32((uint32_t)(ebp + 0xffffff78u), ST0); FPOP();
/* 89804b: mov ecx, dword ptr [ebp - 0x88] */
  ecx = R32((uint32_t)(ebp + 0xffffff78u));
/* 898051: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 898054: mov dword ptr [ebp - 0x50], ecx */
  W32((uint32_t)(ebp + 0xffffffb0u), ecx);
/* 898057: mov dword ptr [ebp - 0x124], ecx */
  W32((uint32_t)(ebp + 0xfffffedcu), ecx);
/* 89805d: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 898060: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 898063: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 898066: mov dword ptr [ebp - 0x128], eax */
  W32((uint32_t)(ebp + 0xfffffed8u), eax);
/* 89806c: fadd dword ptr [ebp - 0x78] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff88u)));
/* 89806f: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 898072: mov dword ptr [ebp - 0x110], eax */
  W32((uint32_t)(ebp + 0xfffffef0u), eax);
/* 898078: mov dword ptr [ebp - 0xec], eax */
  W32((uint32_t)(ebp + 0xffffff14u), eax);
/* 89807e: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 898081: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 898084: fadd dword ptr [ebp - 0x7c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff84u)));
/* 898087: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 898089: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 89808c: fadd dword ptr [ebp - 0x80] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff80u)));
/* 89808f: fst dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0);
/* 898092: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 898095: fsub dword ptr [ebp - 0x34] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffccu)));
/* 898098: fstp dword ptr [ebp - 0x8c] */
  WF32((uint32_t)(ebp + 0xffffff74u), ST0); FPOP();
/* 89809e: mov edx, dword ptr [ebp - 0x8c] */
  edx = R32((uint32_t)(ebp + 0xffffff74u));
/* 8980a4: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8980a6: fsub dword ptr [ebp - 0x38] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 8980a9: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 8980ac: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8980af: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8980b2: mov dword ptr [ebp - 0x64], ecx */
  W32((uint32_t)(ebp + 0xffffff9cu), ecx);
/* 8980b5: fsub dword ptr [ebp - 0x3c] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8980b8: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8980bb: mov dword ptr [ebp - 0x100], edx */
  W32((uint32_t)(ebp + 0xffffff00u), edx);
/* 8980c1: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 8980c4: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 8980c7: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8980c9: mov dword ptr [ebp - 0x104], ecx */
  W32((uint32_t)(ebp + 0xfffffefcu), ecx);
/* 8980cf: mov ecx, dword ptr [ebp - 0x60] */
  ecx = R32((uint32_t)(ebp + 0xffffffa0u));
/* 8980d2: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 8980d5: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 8980d8: mov dword ptr [ebp - 0xfc], ecx */
  W32((uint32_t)(ebp + 0xffffff04u), ecx);
/* 8980de: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8980e1: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 8980e4: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 8980e7: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8980ea: mov ecx, dword ptr [ebp - 0x58] */
  ecx = R32((uint32_t)(ebp + 0xffffffa8u));
/* 8980ed: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 8980ef: mov dword ptr [ebp - 0x78], ecx */
  W32((uint32_t)(ebp + 0xffffff88u), ecx);
/* 8980f2: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 8980f5: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 8980f8: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8980fb: mov dword ptr [ebp - 0x7c], edx */
  W32((uint32_t)(ebp + 0xffffff84u), edx);
/* 8980fe: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 898101: mov dword ptr [ebp - 0xdc], ecx */
  W32((uint32_t)(ebp + 0xffffff24u), ecx);
/* 898107: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 89810a: mov edx, dword ptr [ebp - 0x80] */
  edx = R32((uint32_t)(ebp + 0xffffff80u));
/* 89810d: mov dword ptr [ebp - 0xe0], edx */
  W32((uint32_t)(ebp + 0xffffff20u), edx);
/* 898113: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 898116: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 898118: mov dword ptr [ebp - 0xd8], edx */
  W32((uint32_t)(ebp + 0xffffff28u), edx);
/* 89811e: mov edi, dword ptr [ebp - 0x84] */
  edi = R32((uint32_t)(ebp + 0xffffff7cu));
/* 898124: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 898126: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 898129: mov dword ptr [ebp - 0xc4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff3cu), 0x3f800000u);
/* 898133: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 898136: mov dword ptr [ebp - 0xc0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff40u), 0x3f800000u);
/* 898140: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 898143: mov dword ptr [ebp - 0xc8], eax */
  W32((uint32_t)(ebp + 0xffffff38u), eax);
/* 898149: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 89814c: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* 898156: mov dword ptr [ebp - 0x9c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff64u), 0x3f800000u);
/* 898160: mov dword ptr [ebp - 0xa4], eax */
  W32((uint32_t)(ebp + 0xffffff5cu), eax);
/* 898166: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 898169: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 89816c: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 89816f: fadd st(2) */
  ST0 = ST0 + STI(2);
/* 898171: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 898174: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 898177: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89817a: mov dword ptr [ebp - 0x20], ecx */
  W32((uint32_t)(ebp + 0xffffffe0u), ecx);
/* 89817d: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 898180: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 898183: mov dword ptr [ebp - 0xb8], edx */
  W32((uint32_t)(ebp + 0xffffff48u), edx);
/* 898189: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 89818c: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 89818f: mov dword ptr [ebp - 0xbc], ecx */
  W32((uint32_t)(ebp + 0xffffff44u), ecx);
/* 898195: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 898198: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89819a: mov dword ptr [ebp - 0xb4], ecx */
  W32((uint32_t)(ebp + 0xffffff4cu), ecx);
/* 8981a0: cmp dword ptr [edi + 0x128], 1 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edi + 0x128u))); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8981a7: jne 0x8982b8 */
  if (!zf) goto L_8982b8;
L_8981ad: /* 8981ad: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 8981b0: fsub dword ptr [ebp - 0x58] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffa8u)));
/* 8981b3: fld dword ptr [ebp - 0x88] */
  { double v = F32((uint32_t)(ebp + 0xffffff78u)); FPUSH(v); }
/* 8981b9: fsub dword ptr [ebp - 0x74] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff8cu)));
/* 8981bc: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 8981bf: fsub dword ptr [ebp - 0x80] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffff80u)));
/* 8981c2: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 8981c5: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8981c7: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8981cd: fstp dword ptr [ebp - 0x74] */
  WF32((uint32_t)(ebp + 0xffffff8cu), ST0); FPOP();
/* 8981d0: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 8981d3: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8981d9: mov dword ptr [ebp - 0x4c], edx */
  W32((uint32_t)(ebp + 0xffffffb4u), edx);
/* 8981dc: mov dword ptr [ebp - 0x114], edx */
  W32((uint32_t)(ebp + 0xfffffeecu), edx);
/* 8981e2: fst dword ptr [ebp - 0x70] */
  WF32((uint32_t)(ebp + 0xffffff90u), ST0);
/* 8981e5: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 8981e8: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 8981ee: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 8981f1: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 8981f4: mov dword ptr [ebp - 0x11c], eax */
  W32((uint32_t)(ebp + 0xfffffee4u), eax);
/* 8981fa: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 8981fd: mov ecx, dword ptr [ebp - 0x50] */
  ecx = R32((uint32_t)(ebp + 0xffffffb0u));
/* 898200: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* 898206: mov dword ptr [ebp - 0x118], ecx */
  W32((uint32_t)(ebp + 0xfffffee8u), ecx);
/* 89820c: fsub dword ptr [ebp - 0x30] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 89820f: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 898212: fsub dword ptr [ebp - 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 898215: fld dword ptr [ebp - 0x68] */
  { double v = F32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 898218: fsub dword ptr [ebp - 0x24] */
  ST0 = ST0 - (F32((uint32_t)(ebp + 0xffffffdcu)));
/* 89821b: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 89821e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 898220: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 898226: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* 898229: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89822c: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 89822f: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 898235: mov dword ptr [ebp - 0xf0], eax */
  W32((uint32_t)(ebp + 0xffffff10u), eax);
/* 89823b: fst dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0);
/* 89823e: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 898241: fmul dword ptr [0x9f7194] */
  ST0 = ST0 * (F32((uint32_t)(0x9f7194u)));
/* 898247: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 89824a: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 89824d: mov dword ptr [ebp - 0xf8], ecx */
  W32((uint32_t)(ebp + 0xffffff08u), ecx);
/* 898253: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 898256: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 898259: fld dword ptr [ebp - 0x74] */
  { double v = F32((uint32_t)(ebp + 0xffffff8cu)); FPUSH(v); }
/* 89825c: mov dword ptr [ebp - 0xf4], edx */
  W32((uint32_t)(ebp + 0xffffff0cu), edx);
/* 898262: fchs  */
  ST0 = -ST0;
/* 898264: fld dword ptr [ebp - 0x70] */
  { double v = F32((uint32_t)(ebp + 0xffffff90u)); FPUSH(v); }
/* 898267: fchs  */
  ST0 = -ST0;
/* 898269: fld dword ptr [ebp - 0x54] */
  { double v = F32((uint32_t)(ebp + 0xffffffacu)); FPUSH(v); }
/* 89826c: fchs  */
  ST0 = -ST0;
/* 89826e: fstp dword ptr [ebp - 0x68] */
  WF32((uint32_t)(ebp + 0xffffff98u), ST0); FPOP();
/* 898271: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 898274: mov dword ptr [ebp - 0xd4], ecx */
  W32((uint32_t)(ebp + 0xffffff2cu), ecx);
/* 89827a: fstp dword ptr [ebp - 0x64] */
  WF32((uint32_t)(ebp + 0xffffff9cu), ST0); FPOP();
/* 89827d: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 898280: mov dword ptr [ebp - 0xd0], edx */
  W32((uint32_t)(ebp + 0xffffff30u), edx);
/* 898286: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 898289: mov eax, dword ptr [ebp - 0x60] */
  eax = R32((uint32_t)(ebp + 0xffffffa0u));
/* 89828c: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* 89828f: mov dword ptr [ebp - 0xcc], eax */
  W32((uint32_t)(ebp + 0xffffff34u), eax);
/* 898295: fchs  */
  ST0 = -ST0;
/* 898297: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 89829a: fchs  */
  ST0 = -ST0;
/* 89829c: fld dword ptr [ebp - 0x24] */
  { double v = F32((uint32_t)(ebp + 0xffffffdcu)); FPUSH(v); }
/* 89829f: fchs  */
  ST0 = -ST0;
/* 8982a1: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8982a4: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 8982a7: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8982aa: mov edx, dword ptr [ebp - 0x20] */
  edx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 8982ad: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8982b0: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8982b3: jmp 0x898336 */
  goto L_898336;
L_8982b8: /* 8982b8: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8982bb: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 8982be: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8982c1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8982c2: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 8982c5: lea ecx, [ebp - 0x24] */
  ecx = (uint32_t)(ebp + 0xffffffdcu);
/* 8982c8: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8982cb: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8982cd: fld dword ptr [ebp - 0x40] */
  { double v = F32((uint32_t)(ebp + 0xffffffc0u)); FPUSH(v); }
/* 8982d0: fmul dword ptr [ebp - 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8982d3: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8982d6: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 8982d9: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8982db: fld dword ptr [ebp - 0x34] */
  { double v = F32((uint32_t)(ebp + 0xffffffccu)); FPUSH(v); }
/* 8982de: fmul dword ptr [ebp - 0x44] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffbcu)));
/* 8982e1: fld dword ptr [ebp - 0x38] */
  { double v = F32((uint32_t)(ebp + 0xffffffc8u)); FPUSH(v); }
/* 8982e4: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 8982e7: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* 8982e9: fstp dword ptr [ebp - 0x24] */
  WF32((uint32_t)(ebp + 0xffffffdcu), ST0); FPOP();
/* 8982ec: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 8982ef: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 8982f2: call dword ptr [0xcfa578] */
  esp -= 4; W32(esp, 0x8982f8u); SPILL(); f_4e3b5c(); if (g_unwind) return; /* Core!?SafeNormal@FVector@@QBE?AV1@XZ */ RELOAD();
/* 8982f8: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8982fa: mov dword ptr [ebp - 0x11c], ecx */
  W32((uint32_t)(ebp + 0xfffffee4u), ecx);
/* 898300: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 898303: mov dword ptr [ebp - 0x118], edx */
  W32((uint32_t)(ebp + 0xfffffee8u), edx);
/* 898309: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89830c: mov dword ptr [ebp - 0x114], eax */
  W32((uint32_t)(ebp + 0xfffffeecu), eax);
/* 898312: mov dword ptr [ebp - 0xf8], ecx */
  W32((uint32_t)(ebp + 0xffffff08u), ecx);
/* 898318: mov dword ptr [ebp - 0xf4], edx */
  W32((uint32_t)(ebp + 0xffffff0cu), edx);
/* 89831e: mov dword ptr [ebp - 0xf0], eax */
  W32((uint32_t)(ebp + 0xffffff10u), eax);
/* 898324: mov dword ptr [ebp - 0xd4], ecx */
  W32((uint32_t)(ebp + 0xffffff2cu), ecx);
/* 89832a: mov dword ptr [ebp - 0xd0], edx */
  W32((uint32_t)(ebp + 0xffffff30u), edx);
/* 898330: mov dword ptr [ebp - 0xcc], eax */
  W32((uint32_t)(ebp + 0xffffff34u), eax);
L_898336: /* 898336: mov esi, dword ptr [ebp + 0x14] */
  esi = R32((uint32_t)(ebp + 0x14u));
/* 898339: mov dword ptr [ebp - 0xa8], eax */
  W32((uint32_t)(ebp + 0xffffff58u), eax);
/* 89833f: lea eax, [ebp - 0x12c] */
  eax = (uint32_t)(ebp + 0xfffffed4u);
/* 898345: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 898346: mov dword ptr [ebp - 0xb0], ecx */
  W32((uint32_t)(ebp + 0xffffff50u), ecx);
/* 89834c: mov dword ptr [ebp - 0xac], edx */
  W32((uint32_t)(ebp + 0xffffff54u), edx);
/* 898352: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 898354: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 898356: mov ecx, esi */
  ecx = esi;
/* 898358: call dword ptr [edx + 0x50] */
  { uint32_t t = R32((uint32_t)(edx + 0x50u)); esp -= 4; W32(esp, 0x89835bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89835b: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 89835d: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 898360: mov eax, dword ptr [0xcfa350] */
  eax = R32((uint32_t)(0xcfa350u));
/* 898365: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 898366: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 898368: mov ecx, esi */
  ecx = esi;
/* 89836a: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x89836du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89836d: mov eax, dword ptr [edi + 0x128] */
  eax = R32((uint32_t)(edi + 0x128u));
/* 898373: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 898376: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 898378: je 0x8983fa */
  if (zf) goto L_8983fa;
L_89837e: /* 89837e: movzx ecx, byte ptr [ebx + 0x2b1] */
  ecx = (uint32_t)(R8((uint32_t)(ebx + 0x2b1u)));
/* 898385: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 898388: mov dword ptr [ebp - 0x70], ecx */
  W32((uint32_t)(ebp + 0xffffff90u), ecx);
/* 89838b: add edx, 0xa8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 898391: mov ecx, esp */
  ecx = esp;
/* 898393: mov dword ptr [ebp - 0x2c], esp */
  W32((uint32_t)(ebp + 0xffffffd4u), esp);
/* 898396: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 898397: xor edi, edi */
  edi = 0;
/* 898399: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x89839fu); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 89839f: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 8983a2: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 8983a5: mov ecx, dword ptr [edx + 0x30] */
  ecx = R32((uint32_t)(edx + 0x30u));
/* 8983a8: mov ebx, dword ptr [ecx + 0x540] */
  ebx = R32((uint32_t)(ecx + 0x540u));
/* 8983ae: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8983b0: xor edx, edx */
  edx = 0;
/* 8983b2: cmp ebx, 7 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8983b5: sete dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 8983b8: mov ecx, esi */
  ecx = esi;
/* 8983ba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8983bb: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8983bc: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8983be: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8983c0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8983c2: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x8983c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8983c5: mov ebx, dword ptr [ebp + 0x18] */
  ebx = R32((uint32_t)(ebp + 0x18u));
L_8983c8: /* 8983c8: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8983ca: je 0x8983e7 */
  if (zf) goto L_8983e7;
L_8983cc: /* 8983cc: cmp edi, dword ptr [ebp - 0x70] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff90u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8983cf: jge 0x8983e7 */
  if ((sf == of)) goto L_8983e7;
L_8983d1: /* 8983d1: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* 8983d3: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 8983d5: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 8983da: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8983db: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 8983dc: mov ecx, esi */
  ecx = esi;
/* 8983de: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x8983e1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8983e1: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 8983e4: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 8983e5: jmp 0x8983c8 */
  goto L_8983c8;
L_8983e7: /* 8983e7: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 8983ea: mov ecx, dword ptr [eax + 0xb8] */
  ecx = R32((uint32_t)(eax + 0xb8u));
/* 8983f0: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8983f2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8983f3: mov ecx, esi */
  ecx = esi;
/* 8983f5: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x8983f8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8983f8: jmp 0x898443 */
  goto L_898443;
L_8983fa: /* 8983fa: mov ecx, esp */
  ecx = esp;
/* 8983fc: mov dword ptr [ebp + 8], esp */
  W32((uint32_t)(ebp + 0x8u), esp);
/* 8983ff: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 898401: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 898404: mov dword ptr [ebp - 0x24], 0 */
  W32((uint32_t)(ebp + 0xffffffdcu), 0x0u);
/* 89840b: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 89840e: mov edx, esp */
  edx = esp;
/* 898410: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 898412: mov dword ptr [ebp - 0x20], 0 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x0u);
/* 898419: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 89841c: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 89841f: mov dword ptr [ebp - 0x1c], 0 */
  W32((uint32_t)(ebp + 0xffffffe4u), 0x0u);
/* 898426: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 898429: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89842c: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x898432u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 898432: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 898434: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 898436: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 898438: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89843a: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89843c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89843e: mov ecx, esi */
  ecx = esi;
/* 898440: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x898443u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_898443: /* 898443: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 898446: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 898448: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89844a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89844c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89844e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89844f: mov ecx, esi */
  ecx = esi;
/* 898451: call dword ptr [eax + 0x3c] */
  { uint32_t t = R32((uint32_t)(eax + 0x3cu)); esp -= 4; W32(esp, 0x898454u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 898454: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 898456: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 898458: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89845a: mov ecx, esi */
  ecx = esi;
/* 89845c: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x89845fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89845f: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 898462: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 898464: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 898466: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 898468: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 89846a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89846b: push 2 */
  { uint32_t v = 0x2u; esp -= 4; W32(esp, v); }
/* 89846d: mov ecx, esi */
  ecx = esi;
/* 89846f: call dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); esp -= 4; W32(esp, 0x898472u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 898472: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 898475: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 898476: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 898477: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 89847e: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 89847f: mov esp, ebp */
  esp = ebp;
/* 898481: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 898482: ret  */
  esp += 4; SPILL(); return;
}

void f_898483(void) {
  LOAD_REGS();
L_898483: /* 898483: mov edx, dword ptr [ebp - 0x130] */
  edx = R32((uint32_t)(ebp + 0xfffffed0u));
/* 898489: push 0xa23138 */
  { uint32_t v = 0xa23138u; esp -= 4; W32(esp, v); }
/* 89848e: lea eax, [ebp - 0x90] */
  eax = (uint32_t)(ebp + 0xffffff70u);
/* 898494: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 898495: mov dword ptr [ebp - 0x90], edx */
  W32((uint32_t)(ebp + 0xffffff70u), edx);
/* 89849b: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8984a0u); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
  SPILL(); f_8984a0(); return;
}

void f_8984a0(void) {
  LOAD_REGS();
L_8984a0: /* 8984a0: push 0xa1a79c */
  { uint32_t v = 0xa1a79cu; esp -= 4; W32(esp, v); }
/* 8984a5: push 0xae7f88 */
  { uint32_t v = 0xae7f88u; esp -= 4; W32(esp, v); }
/* 8984aa: call dword ptr [0xcfa1ec] */
  esp -= 4; W32(esp, 0x8984b0u); SPILL(); f_4e3f49(); if (g_unwind) return; /* Core!?appUnwindf@@YAXPBGZZ */ RELOAD();
/* 8984b0: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8984b3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8984b5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8984b7: call 0x99caf8 */
  esp -= 4; W32(esp, 0x8984bcu); SPILL(); f_99caf8(); if (g_unwind) return; RELOAD();
L_8984bc: guest_badaddr(0x8984bc); return;
}

void f_898860(void) {
  LOAD_REGS();
L_898860: /* 898860: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* 898861: mov ebp, esp */
  ebp = esp;
/* 898863: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* 898865: push 0x9d5b0e */
  { uint32_t v = 0x9d5b0eu; esp -= 4; W32(esp, v); }
/* 89886a: mov eax, dword ptr fs:[0] */
  eax = R32((uint32_t)(FS_BASE + 0x0u));
/* 898870: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 898871: mov dword ptr fs:[0], esp */
  W32((uint32_t)(FS_BASE + 0x0u), esp);
/* 898878: sub esp, 0x3a0 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x3a0u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89887e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89887f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 898880: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 898881: xor ebx, ebx */
  ebx = 0;
/* 898883: mov dword ptr [ebp - 0x10], esp */
  W32((uint32_t)(ebp + 0xfffffff0u), esp);
/* 898886: mov dword ptr [ebp - 0x14], ecx */
  W32((uint32_t)(ebp + 0xffffffecu), ecx);
/* 898889: mov dword ptr [ebp - 4], ebx */
  W32((uint32_t)(ebp + 0xfffffffcu), ebx);
/* 89888c: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 89888e: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 898890: mov dword ptr [ebp - 0xc0], eax */
  W32((uint32_t)(ebp + 0xffffff40u), eax);
/* 898896: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 898899: mov esi, dword ptr [eax] */
  esi = R32((uint32_t)(eax));
/* 89889b: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89889d: mov dword ptr [ebp - 0x6c], esi */
  W32((uint32_t)(ebp + 0xffffff94u), esi);
/* 8988a0: je 0x8988bb */
  if (zf) goto L_8988bb;
L_8988a2: /* 8988a2: test dword ptr [esi + 0x84], 0x4000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x84u))); uint32_t b = (uint32_t)(0x4000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8988ac: je 0x8988bb */
  if (zf) goto L_8988bb;
L_8988ae: /* 8988ae: mov eax, dword ptr [esi + 0x58] */
  eax = R32((uint32_t)(esi + 0x58u));
/* 8988b1: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8988b3: mov dword ptr [ebp - 0x214], eax */
  W32((uint32_t)(ebp + 0xfffffdecu), eax);
/* 8988b9: jne 0x8988c1 */
  if (!zf) goto L_8988c1;
L_8988bb: /* 8988bb: mov dword ptr [ebp - 0x214], esi */
  W32((uint32_t)(ebp + 0xfffffdecu), esi);
L_8988c1: /* 8988c1: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8988c4: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8988c6: call dword ptr [edx + 0x94] */
  { uint32_t t = R32((uint32_t)(edx + 0x94u)); esp -= 4; W32(esp, 0x8988ccu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8988cc: mov ecx, eax */
  ecx = eax;
/* 8988ce: cmp dword ptr [ecx + 0x1f0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x1f0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8988d4: mov dword ptr [ebp - 0x64], ecx */
  W32((uint32_t)(ebp + 0xffffff9cu), ecx);
/* 8988d7: jne 0x898909 */
  if (!zf) goto L_898909;
L_8988d9: /* 8988d9: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x8988dfu); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 8988df: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8988e0: mov eax, dword ptr [0xcfa3b8] */
  eax = R32((uint32_t)(0xcfa3b8u));
/* 8988e5: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 8988e7: push 0xae7f90 */
  { uint32_t v = 0xae7f90u; esp -= 4; W32(esp, v); }
/* 8988ec: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8988ed: call dword ptr [0xcfa3a4] */
  esp -= 4; W32(esp, 0x8988f3u); SPILL(); f_4e2d4c(); if (g_unwind) return; /* Core!?Logf@FOutputDevice@@QAAXPBGZZ */ RELOAD();
/* 8988f3: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8988f6: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 8988f9: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 898900: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 898901: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 898902: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 898903: mov esp, ebp */
  esp = ebp;
/* 898905: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 898906: ret 0x14 */
  esp += 24; SPILL(); return;
L_898909: /* 898909: cmp dword ptr [ecx + 0xf0], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xf0u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89890f: setne dl */
  edx = (edx & 0xffffff00u) | ((uint32_t)((!zf) ? 1 : 0) & 0xffu);
/* 898912: movzx edi, dl */
  edi = (uint32_t)((edx & 0xffu));
/* 898915: mov dword ptr [ebp - 0x74], edi */
  W32((uint32_t)(ebp + 0xffffff8cu), edi);
/* 898918: call 0x6c779d */
  esp -= 4; W32(esp, 0x89891du); SPILL(); f_6c779d(); if (g_unwind) return; RELOAD();
/* 89891d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 898920: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 898922: je 0x898936 */
  if (zf) goto L_898936;
L_898924: /* 898924: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 898927: cmp dword ptr [eax + 0x110], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x110u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89892d: je 0x898936 */
  if (zf) goto L_898936;
L_89892f: /* 89892f: mov eax, 1 */
  eax = 0x1u;
/* 898934: jmp 0x898938 */
  goto L_898938;
L_898936: /* 898936: xor eax, eax */
  eax = 0;
L_898938: /* 898938: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89893a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89893d: mov dword ptr [ecx + 0x1a0], eax */
  W32((uint32_t)(ecx + 0x1a0u), eax);
/* 898943: mov dword ptr [ebp - 0x20], ebx */
  W32((uint32_t)(ebp + 0xffffffe0u), ebx);
/* 898946: je 0x89895f */
  if (zf) goto L_89895f;
L_898948: /* 898948: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89894b: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89894d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89894e: lea eax, [ebp - 0x20] */
  eax = (uint32_t)(ebp + 0xffffffe0u);
/* 898951: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 898952: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 898955: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 898956: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 898957: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 898958: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 898959: call dword ptr [edx + 0x114] */
  { uint32_t t = R32((uint32_t)(edx + 0x114u)); esp -= 4; W32(esp, 0x89895fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_89895f: /* 89895f: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 898962: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 898964: lea eax, [ebp - 0x200] */
  eax = (uint32_t)(ebp + 0xfffffe00u);
/* 89896a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89896b: call dword ptr [edx + 0x118] */
  { uint32_t t = R32((uint32_t)(edx + 0x118u)); esp -= 4; W32(esp, 0x898971u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 898971: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 898973: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 898977: je 0x898a79 */
  if (zf) goto L_898a79;
L_89897d: /* 89897d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 898980: cmp dword ptr [eax + 0xb8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xb8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 898986: je 0x898a79 */
  if (zf) goto L_898a79;
L_89898c: /* 89898c: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 898992: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 898995: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 898997: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 89899a: lea edx, [ebp - 0xbc] */
  edx = (uint32_t)(ebp + 0xffffff44u);
/* 8989a0: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 8989a6: lea eax, [ebp - 0x200] */
  eax = (uint32_t)(ebp + 0xfffffe00u);
/* 8989ac: mov dword ptr [ebp - 0xbc], ecx */
  W32((uint32_t)(ebp + 0xffffff44u), ecx);
/* 8989b2: fstp dword ptr [ebp - 0xb4] */
  WF32((uint32_t)(ebp + 0xffffff4cu), ST0); FPOP();
/* 8989b8: mov dword ptr [ebp - 0xb0], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x3f800000u);
/* 8989c2: mov dword ptr [ebp - 0x54], edx */
  W32((uint32_t)(ebp + 0xffffffacu), edx);
/* 8989c5: mov dword ptr [ebp - 0x9c], eax */
  W32((uint32_t)(ebp + 0xffffff64u), eax);
/* 8989cb: mov esi, dword ptr [ebp - 0x54] */
  esi = R32((uint32_t)(ebp + 0xffffffacu));
/* 8989ce: mov edx, dword ptr [ebp - 0x9c] */
  edx = R32((uint32_t)(ebp + 0xffffff64u));
/* 8989d4: lea edi, [ebp - 0xd4] */
  edi = (uint32_t)(ebp + 0xffffff2cu);
/* 8989da: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8989dc: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 8989de: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8989e0: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 8989e3: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8989e5: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 8989e8: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 8989ea: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 8989ed: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8989f0: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 8989f3: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8989f6: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 8989f9: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 8989fc: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 8989ff: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 898a02: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 898a05: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 898a07: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 898a09: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 898a0b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 898a0d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 898a0f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 898a12: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 898a15: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 898a18: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 898a1b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 898a1e: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 898a21: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 898a24: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 898a27: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 898a29: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 898a2b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 898a2d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 898a2f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 898a31: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 898a34: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 898a37: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 898a3a: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 898a3d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 898a40: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 898a43: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 898a46: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 898a49: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 898a4b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 898a4d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 898a4f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 898a51: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 898a53: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 898a55: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 898a57: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 898a59: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 898a5c: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 898a5f: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 898a62: mov ecx, dword ptr [ebp - 0xcc] */
  ecx = R32((uint32_t)(ebp + 0xffffff34u));
/* 898a68: mov edi, dword ptr [ebp - 0xd4] */
  edi = R32((uint32_t)(ebp + 0xffffff2cu));
/* 898a6e: mov ebx, dword ptr [ebp - 0xd0] */
  ebx = R32((uint32_t)(ebp + 0xffffff30u));
/* 898a74: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 898a77: jmp 0x898a8a */
  goto L_898a8a;
L_898a79: /* 898a79: add esi, 0x170 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 898a7f: mov edi, dword ptr [esi] */
  edi = R32((uint32_t)(esi));
/* 898a81: mov ebx, dword ptr [esi + 4] */
  ebx = R32((uint32_t)(esi + 0x4u));
/* 898a84: mov edx, dword ptr [esi + 8] */
  edx = R32((uint32_t)(esi + 0x8u));
/* 898a87: mov dword ptr [ebp - 0x34], edx */
  W32((uint32_t)(ebp + 0xffffffccu), edx);
L_898a8a: /* 898a8a: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 898a8d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 898a8f: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x898a92u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 898a92: mov esi, eax */
  esi = eax;
/* 898a94: mov ecx, dword ptr [esi + 4] */
  ecx = R32((uint32_t)(esi + 0x4u));
/* 898a97: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 898a9a: fld dword ptr [edx + 0x348] */
  { double v = F32((uint32_t)(edx + 0x348u)); FPUSH(v); }
/* 898aa0: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 898aa3: fmul qword ptr [0xa167b8] */
  ST0 = ST0 * (F64((uint32_t)(0xa167b8u)));
/* 898aa9: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 898aac: call dword ptr [0xcfab08] */
  esp -= 4; W32(esp, 0x898ab2u); SPILL(); f_4e2a3b(); if (g_unwind) return; /* Core!?appTan@@YANN@Z */ RELOAD();
/* 898ab2: mov eax, dword ptr [ebp - 0x64] */
  eax = R32((uint32_t)(ebp + 0xffffff9cu));
/* 898ab5: fst qword ptr [ebp - 0x5c] */
  WF64((uint32_t)(ebp + 0xffffffa4u), ST0);
/* 898ab8: mov ecx, dword ptr [eax + 0x1ec] */
  ecx = R32((uint32_t)(eax + 0x1ecu));
/* 898abe: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 898ac1: fild dword ptr [ecx + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 898ac4: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 898ac7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 898ac9: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 898acc: fmul dword ptr [0xa15bb4] */
  ST0 = ST0 * (F32((uint32_t)(0xa15bb4u)));
/* 898ad2: fadd dword ptr [0xa0e1c0] */
  ST0 = ST0 + (F32((uint32_t)(0xa0e1c0u)));
/* 898ad8: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 898ade: call dword ptr [edx + 0x1c] */
  { uint32_t t = R32((uint32_t)(edx + 0x1cu)); esp -= 4; W32(esp, 0x898ae1u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 898ae1: cmp eax, 0x334 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x334u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 898ae6: mov dword ptr [ebp - 0x68], 0x334 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x334u);
/* 898aed: jle 0x898af2 */
  if ((zf || sf != of)) goto L_898af2;
L_898aef: /* 898aef: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
L_898af2: /* 898af2: fild dword ptr [ebp - 0x68] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0xffffff98u)); FPUSH(v); }
/* 898af5: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 898af8: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 898afb: mov eax, esp */
  eax = esp;
/* 898afd: fmul dword ptr [0xa1a81c] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a81cu)));
/* 898b03: mov dword ptr [eax], edi */
  W32((uint32_t)(eax), edi);
/* 898b05: mov dword ptr [eax + 4], ebx */
  W32((uint32_t)(eax + 0x4u), ebx);
/* 898b08: lea edx, [ebp - 0xac] */
  edx = (uint32_t)(ebp + 0xffffff54u);
/* 898b0e: fadd dword ptr [0xa0d56c] */
  ST0 = ST0 + (F32((uint32_t)(0xa0d56cu)));
/* 898b14: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 898b17: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 898b18: mov ecx, esi */
  ecx = esi;
/* 898b1a: fstp dword ptr [ebp - 0x40] */
  WF32((uint32_t)(ebp + 0xffffffc0u), ST0); FPOP();
/* 898b1d: call 0x6c6221 */
  esp -= 4; W32(esp, 0x898b22u); SPILL(); f_6c6221(); if (g_unwind) return; RELOAD();
/* 898b22: fld dword ptr [eax + 0xc] */
  { double v = F32((uint32_t)(eax + 0xcu)); FPUSH(v); }
/* 898b25: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 898b28: fsub dword ptr [edi + 0xe8] */
  ST0 = ST0 - (F32((uint32_t)(edi + 0xe8u)));
/* 898b2e: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
/* 898b34: fcomp st(1) */
  fpu_com(ST0, STI(1));
  FPOP();
/* 898b36: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 898b38: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 898b3b: jne 0x898b45 */
  if (!zf) goto L_898b45;
L_898b3d: /* 898b3d: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 898b3f: fld dword ptr [0x9f48a0] */
  { double v = F32((uint32_t)(0x9f48a0u)); FPUSH(v); }
L_898b45: /* 898b45: fmul dword ptr [edi + 0xdc] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xdcu)));
/* 898b4b: mov ebx, dword ptr [ebp - 0x6c] */
  ebx = R32((uint32_t)(ebp + 0xffffff94u));
/* 898b4e: lea ecx, [ebx + 0x288] */
  ecx = (uint32_t)(ebx + 0x288u);
/* 898b54: fmul dword ptr [ebp - 0x9c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff64u)));
/* 898b5a: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 898b5d: fstp dword ptr [ebp - 0x9c] */
  WF32((uint32_t)(ebp + 0xffffff64u), ST0); FPOP();
/* 898b63: call dword ptr [0xcfaad8] */
  esp -= 4; W32(esp, 0x898b69u); SPILL(); f_4e231f(); if (g_unwind) return; /* Core!?GetMax@FVector@@QBEMXZ */ RELOAD();
/* 898b69: fstp dword ptr [ebp - 0x54] */
  WF32((uint32_t)(ebp + 0xffffffacu), ST0); FPOP();
/* 898b6c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 898b6f: fld dword ptr [ebx + 0x284] */
  { double v = F32((uint32_t)(ebx + 0x284u)); FPUSH(v); }
/* 898b75: xor ecx, ecx */
  ecx = 0;
/* 898b77: fdiv dword ptr [ebp - 0x9c] */
  ST0 = ST0 / (F32((uint32_t)(ebp + 0xffffff64u)));
/* 898b7d: mov dword ptr [ebp - 0x68], ecx */
  W32((uint32_t)(ebp + 0xffffff98u), ecx);
/* 898b80: fmul dword ptr [ebx + 0xf0] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xf0u)));
/* 898b86: fmul dword ptr [edi + 0xd8] */
  ST0 = ST0 * (F32((uint32_t)(edi + 0xd8u)));
/* 898b8c: fmul dword ptr [ebp - 0x54] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffacu)));
/* 898b8f: fmul dword ptr [ebp - 0x40] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffc0u)));
/* 898b92: fmul dword ptr [0xa1a818] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a818u)));
/* 898b98: fst dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0);
/* 898b9b: fstp dword ptr [eax + 0xf4] */
  WF32((uint32_t)(eax + 0xf4u), ST0); FPOP();
/* 898ba1: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
/* 898ba4: mov eax, dword ptr [esi + 0x194] */
  eax = R32((uint32_t)(esi + 0x194u));
/* 898baa: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 898bac: jle 0x898bbf */
  if ((zf || sf != of)) goto L_898bbf;
L_898bae: /* 898bae: cmp eax, dword ptr [edi + 0x1f0] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(edi + 0x1f0u)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 898bb4: jg 0x898bbf */
  if ((!zf && sf == of)) goto L_898bbf;
L_898bb6: /* 898bb6: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 898bb7: mov dword ptr [esi + 0xf0], eax */
  W32((uint32_t)(esi + 0xf0u), eax);
/* 898bbd: jmp 0x898c3a */
  goto L_898c3a;
L_898bbf: /* 898bbf: mov edx, dword ptr [edi + 0x1f0] */
  edx = R32((uint32_t)(edi + 0x1f0u));
/* 898bc5: cmp edx, 1 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 898bc8: jle 0x898c3d */
  if ((zf || sf != of)) goto L_898c3d;
L_898bca: /* 898bca: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_898bd0: /* 898bd0: lea eax, [edx - 1] */
  eax = (uint32_t)(edx + 0xffffffffu);
/* 898bd3: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 898bd5: jge 0x898bf9 */
  if ((sf == of)) goto L_898bf9;
L_898bd7: /* 898bd7: mov ebx, dword ptr [edi + 0x1ec] */
  ebx = R32((uint32_t)(edi + 0x1ecu));
/* 898bdd: mov eax, ecx */
  eax = ecx;
/* 898bdf: imul eax, eax, 0x11c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x11cu);
  eax = (uint32_t)r;
  }
/* 898be5: fld dword ptr [eax + ebx + 0x104] */
  { double v = F32((uint32_t)(eax + ebx + 0x104u)); FPUSH(v); }
/* 898bec: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 898bef: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 898bf1: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 898bf4: jne 0x898bf9 */
  if (!zf) goto L_898bf9;
L_898bf6: /* 898bf6: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* 898bf7: jmp 0x898bd0 */
  goto L_898bd0;
L_898bf9: /* 898bf9: mov edx, dword ptr [esi + 0xf0] */
  edx = R32((uint32_t)(esi + 0xf0u));
/* 898bff: cmp edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 898c01: jge 0x898c31 */
  if ((sf == of)) goto L_898c31;
L_898c03: /* 898c03: mov ebx, dword ptr [edi + 0x1ec] */
  ebx = R32((uint32_t)(edi + 0x1ecu));
/* 898c09: mov eax, edx */
  eax = edx;
/* 898c0b: imul eax, eax, 0x11c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x11cu);
  eax = (uint32_t)r;
  }
/* 898c11: fld dword ptr [eax + ebx + 0x104] */
  { double v = F32((uint32_t)(eax + ebx + 0x104u)); FPUSH(v); }
/* 898c18: fld dword ptr [eax + ebx + 0x108] */
  { double v = F32((uint32_t)(eax + ebx + 0x108u)); FPUSH(v); }
/* 898c1f: fadd dword ptr [ebp - 0x18] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffe8u)));
/* 898c22: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 898c24: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 898c26: fcompp  */
  fpu_com(ST0, STI(1)); FPOP(); FPOP();
/* 898c28: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 898c2a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 898c2d: jp 0x898c31 */
  if (pf) goto L_898c31;
L_898c2f: /* 898c2f: mov ecx, edx */
  ecx = edx;
L_898c31: /* 898c31: mov ebx, dword ptr [ebp - 0x6c] */
  ebx = R32((uint32_t)(ebp + 0xffffff94u));
/* 898c34: mov dword ptr [esi + 0xf0], ecx */
  W32((uint32_t)(esi + 0xf0u), ecx);
L_898c3a: /* 898c3a: mov esi, dword ptr [ebp - 0x14] */
  esi = R32((uint32_t)(ebp + 0xffffffecu));
L_898c3d: /* 898c3d: mov eax, dword ptr [esi + 0x194] */
  eax = R32((uint32_t)(esi + 0x194u));
/* 898c43: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 898c45: jne 0x898c80 */
  if (!zf) goto L_898c80;
L_898c47: /* 898c47: mov eax, dword ptr [edi + 0xf0] */
  eax = R32((uint32_t)(edi + 0xf0u));
/* 898c4d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 898c4f: je 0x898c80 */
  if (zf) goto L_898c80;
L_898c51: /* 898c51: mov eax, dword ptr [edi + 0x1f0] */
  eax = R32((uint32_t)(edi + 0x1f0u));
/* 898c57: dec eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - 1);
  eax = r;
  }
/* 898c58: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 898c5a: jne 0x898c80 */
  if (!zf) goto L_898c80;
L_898c5c: /* 898c5c: mov edx, dword ptr [edi + 0x1ec] */
  edx = R32((uint32_t)(edi + 0x1ecu));
/* 898c62: imul ecx, ecx, 0x11c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x11cu);
  ecx = (uint32_t)r;
  }
/* 898c68: fld dword ptr [ecx + edx + 0x104] */
  { double v = F32((uint32_t)(ecx + edx + 0x104u)); FPUSH(v); }
/* 898c6f: fcomp dword ptr [ebp - 0x18] */
  fpu_com(ST0, F32((uint32_t)(ebp + 0xffffffe8u)));
  FPOP();
/* 898c72: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 898c74: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 898c77: jne 0x898c80 */
  if (!zf) goto L_898c80;
L_898c79: /* 898c79: mov dword ptr [ebp - 0x68], 1 */
  W32((uint32_t)(ebp + 0xffffff98u), 0x1u);
L_898c80: /* 898c80: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 898c83: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 898c86: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x898c8bu); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 898c8b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 898c8e: xor esi, esi */
  esi = 0;
/* 898c90: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 898c92: jne 0x898c9f */
  if (!zf) goto L_898c9f;
L_898c94: /* 898c94: cmp dword ptr [ecx + 0x6c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x6cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 898c97: mov dword ptr [ebp - 0x98], esi */
  W32((uint32_t)(ebp + 0xffffff68u), esi);
/* 898c9d: je 0x898ca9 */
  if (zf) goto L_898ca9;
L_898c9f: /* 898c9f: mov dword ptr [ebp - 0x98], 1 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x1u);
L_898ca9: /* 898ca9: cmp dword ptr [ebp - 0x98], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff68u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 898caf: mov dword ptr [ebp - 0x94], esi */
  W32((uint32_t)(ebp + 0xffffff6cu), esi);
/* 898cb5: je 0x898cc1 */
  if (zf) goto L_898cc1;
L_898cb7: /* 898cb7: mov dword ptr [ebp - 0x94], 0x40200000 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x40200000u);
L_898cc1: /* 898cc1: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 898cc4: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 898cc7: mov edx, dword ptr [edx + 0x30] */
  edx = R32((uint32_t)(edx + 0x30u));
/* 898cca: cmp dword ptr [edx + 0x540], 7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x540u))); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 898cd1: jne 0x898cdd */
  if (!zf) goto L_898cdd;
L_898cd3: /* 898cd3: or dword ptr [ebp - 0x94], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff6cu))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(ebp + 0xffffff6cu), r);
  }
L_898cdd: /* 898cdd: cmp dword ptr [ebp - 0x68], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff98u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 898ce0: je 0x898d39 */
  if (zf) goto L_898d39;
L_898ce2: /* 898ce2: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* 898ce5: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 898ce8: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 898ce9: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 898cec: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 898ced: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 898cee: lea eax, [ebp - 0x3c] */
  eax = (uint32_t)(ebp + 0xffffffc4u);
/* 898cf1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 898cf2: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 898cf3: call 0x6c1901 */
  esp -= 4; W32(esp, 0x898cf8u); SPILL(); f_6c1901(); if (g_unwind) return; RELOAD();
/* 898cf8: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 898cfb: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 898cfd: mov edx, dword ptr [ebp - 0xc0] */
  edx = R32((uint32_t)(ebp + 0xffffff40u));
/* 898d03: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 898d09: lea eax, [edx + eax - 0xc] */
  eax = (uint32_t)(edx + eax + 0xfffffff4u);
/* 898d0d: mov edx, dword ptr [0xce83d0] */
  edx = R32((uint32_t)(0xce83d0u));
/* 898d13: add dword ptr [ecx + edx*4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + edx*4), r);
  }
L_898d16: /* 898d16: lea ecx, [ebp - 0x200] */
  ecx = (uint32_t)(ebp + 0xfffffe00u);
/* 898d1c: mov byte ptr [ebp - 4], 0 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* 898d20: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x898d26u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 898d26: mov ecx, dword ptr [ebp - 0xc] */
  ecx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 898d29: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 898d2a: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 898d2b: mov dword ptr fs:[0], ecx */
  W32((uint32_t)(FS_BASE + 0x0u), ecx);
/* 898d32: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 898d33: mov esp, ebp */
  esp = ebp;
/* 898d35: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 898d36: ret 0x14 */
  esp += 24; SPILL(); return;
L_898d39: /* 898d39: cmp dword ptr [ebp - 0x74], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff8cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 898d3c: jne 0x898d57 */
  if (!zf) goto L_898d57;
L_898d3e: /* 898d3e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 898d40: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 898d41: lea esi, [ebp - 0x20] */
  esi = (uint32_t)(ebp + 0xffffffe0u);
/* 898d44: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 898d45: xor esi, esi */
  esi = 0;
/* 898d47: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 898d48: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 898d49: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 898d4a: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 898d4b: call dword ptr [edx + 0x114] */
  { uint32_t t = R32((uint32_t)(edx + 0x114u)); esp -= 4; W32(esp, 0x898d51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 898d51: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 898d54: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
L_898d57: /* 898d57: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 898d59: je 0x898d75 */
  if (zf) goto L_898d75;
L_898d5b: /* 898d5b: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 898d5e: cmp dword ptr [edx + 0x108], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x108u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 898d64: je 0x898d75 */
  if (zf) goto L_898d75;
L_898d66: /* 898d66: cmp dword ptr [ecx + 0x174], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x174u))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 898d6c: mov dword ptr [ebp - 0x54], 1 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x1u);
/* 898d73: jne 0x898d78 */
  if (!zf) goto L_898d78;
L_898d75: /* 898d75: mov dword ptr [ebp - 0x54], esi */
  W32((uint32_t)(ebp + 0xffffffacu), esi);
L_898d78: /* 898d78: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 898d7a: je 0x898d8e */
  if (zf) goto L_898d8e;
L_898d7c: /* 898d7c: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 898d7f: cmp dword ptr [eax + 0x10c], esi */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x10cu))); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 898d85: jne 0x898d8e */
  if (!zf) goto L_898d8e;
L_898d87: /* 898d87: mov esi, 1 */
  esi = 0x1u;
/* 898d8c: jmp 0x898d90 */
  goto L_898d90;
L_898d8e: /* 898d8e: xor esi, esi */
  esi = 0;
L_898d90: /* 898d90: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 898d93: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 898d95: lea eax, [ebp - 0x200] */
  eax = (uint32_t)(ebp + 0xfffffe00u);
/* 898d9b: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 898d9c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 898d9e: mov dword ptr [ebp - 0x70], esi */
  W32((uint32_t)(ebp + 0xffffff90u), esi);
/* 898da1: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x898da4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 898da4: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 898da6: mov ecx, dword ptr [ebp - 0xc0] */
  ecx = R32((uint32_t)(ebp + 0xffffff40u));
/* 898dac: mov edx, dword ptr [0xce83cc] */
  edx = R32((uint32_t)(0xce83ccu));
/* 898db2: lea eax, [ecx + eax - 0xc] */
  eax = (uint32_t)(ecx + eax + 0xfffffff4u);
/* 898db6: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 898dbc: add dword ptr [ecx + edx*4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + edx*4), r);
  }
/* 898dbf: xor ebx, ebx */
  ebx = 0;
/* 898dc1: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 898dc2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 898dc5: mov eax, ebx */
  eax = ebx;
/* 898dc7: mov edx, esp */
  edx = esp;
/* 898dc9: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 898dcb: mov ecx, ebx */
  ecx = ebx;
/* 898dcd: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 898dd0: lea ecx, [ebp - 0x90] */
  ecx = (uint32_t)(ebp + 0xffffff70u);
/* 898dd6: mov dword ptr [ebp - 0x9c], ebx */
  W32((uint32_t)(ebp + 0xffffff64u), ebx);
/* 898ddc: mov dword ptr [ebp - 0x30], ebx */
  W32((uint32_t)(ebp + 0xffffffd0u), ebx);
/* 898ddf: mov dword ptr [ebp - 0x2c], ebx */
  W32((uint32_t)(ebp + 0xffffffd4u), ebx);
/* 898de2: mov dword ptr [ebp - 0x28], ebx */
  W32((uint32_t)(ebp + 0xffffffd8u), ebx);
/* 898de5: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 898de8: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x898deeu); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 898dee: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 898df0: je 0x899e69 */
  if (zf) goto L_899e69;
L_898df6: /* 898df6: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 898df9: mov edx, dword ptr [ecx + 0xf0] */
  edx = R32((uint32_t)(ecx + 0xf0u));
/* 898dff: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* 898e05: imul edx, edx, 0x11c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x11cu);
  edx = (uint32_t)r;
  }
/* 898e0b: mov ecx, dword ptr [eax + edx + 0x20] */
  ecx = R32((uint32_t)(eax + edx + 0x20u));
/* 898e0f: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 898e11: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 898e13: jg 0x898e20 */
  if ((!zf && sf == of)) goto L_898e20;
L_898e15: /* 898e15: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* 898e18: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 898e1a: jle 0x8991db */
  if ((zf || sf != of)) goto L_8991db;
L_898e20: /* 898e20: mov eax, dword ptr [ebp - 0x98] */
  eax = R32((uint32_t)(ebp + 0xffffff68u));
/* 898e26: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 898e28: je 0x898ef3 */
  if (zf) goto L_898ef3;
L_898e2e: /* 898e2e: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 898e31: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 898e34: lea edx, [ecx + 0xa8] */
  edx = (uint32_t)(ecx + 0xa8u);
/* 898e3a: mov ecx, esp */
  ecx = esp;
/* 898e3c: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 898e3f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 898e40: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x898e46u); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 898e46: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 898e49: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 898e4c: mov edx, dword ptr [edx + 0x30] */
  edx = R32((uint32_t)(edx + 0x30u));
/* 898e4f: mov esi, dword ptr [edx + 0x540] */
  esi = R32((uint32_t)(edx + 0x540u));
/* 898e55: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 898e58: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 898e5a: xor ebx, ebx */
  ebx = 0;
/* 898e5c: cmp esi, 7 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 898e5f: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 898e62: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 898e63: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 898e65: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 898e67: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 898e69: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 898e6b: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x898e6eu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 898e6e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 898e71: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 898e74: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x898e7au); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 898e7a: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 898e7d: mov ecx, dword ptr [eax + 0x100] */
  ecx = R32((uint32_t)(eax + 0x100u));
/* 898e83: mov esi, dword ptr [ebp - 0x6c] */
  esi = R32((uint32_t)(ebp + 0xffffff94u));
/* 898e86: test dword ptr [esi + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 898e90: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 898e93: je 0x898ecb */
  if (zf) goto L_898ecb;
L_898e95: /* 898e95: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 898e98: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* 898e9b: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 898e9e: test dword ptr [ecx + 0x534], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0x534u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 898ea8: je 0x898ecb */
  if (zf) goto L_898ecb;
L_898eaa: /* 898eaa: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 898ead: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 898eaf: mov byte ptr [ebp - 0x18], 0x4b */
  W8((uint32_t)(ebp + 0xffffffe8u), 0x4bu);
/* 898eb3: mov byte ptr [ebp - 0x17], 0xff */
  W8((uint32_t)(ebp + 0xffffffe9u), 0xffu);
/* 898eb7: mov byte ptr [ebp - 0x16], 0x78 */
  W8((uint32_t)(ebp + 0xffffffeau), 0x78u);
/* 898ebb: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 898ebf: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 898ec2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 898ec3: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x898ec6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 898ec6: jmp 0x8991de */
  goto L_8991de;
L_898ecb: /* 898ecb: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 898ed1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 898ed2: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 898ed5: call 0x6c3e7c */
  esp -= 4; W32(esp, 0x898edau); SPILL(); f_6c3e7c(); if (g_unwind) return; RELOAD();
/* 898eda: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 898edb: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 898ede: call 0x6c576d */
  esp -= 4; W32(esp, 0x898ee3u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 898ee3: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 898ee6: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* 898ee8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 898eea: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 898eeb: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x898eeeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 898eee: jmp 0x8991de */
  goto L_8991de;
L_898ef3: /* 898ef3: mov esi, dword ptr [ebp - 0x6c] */
  esi = R32((uint32_t)(ebp + 0xffffff94u));
/* 898ef6: test dword ptr [esi + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 898f00: je 0x898f76 */
  if (zf) goto L_898f76;
L_898f02: /* 898f02: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 898f05: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 898f08: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 898f0b: test dword ptr [eax + 0x534], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 898f15: je 0x898f76 */
  if (zf) goto L_898f76;
L_898f17: /* 898f17: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 898f1a: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 898f1d: lea edx, [ecx + 0xa8] */
  edx = (uint32_t)(ecx + 0xa8u);
/* 898f23: mov ecx, esp */
  ecx = esp;
/* 898f25: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 898f28: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 898f29: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x898f2fu); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 898f2f: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 898f32: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 898f35: mov edx, dword ptr [edx + 0x30] */
  edx = R32((uint32_t)(edx + 0x30u));
/* 898f38: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 898f3b: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 898f3d: xor ebx, ebx */
  ebx = 0;
/* 898f3f: cmp dword ptr [edx + 0x540], 7 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x540u))); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 898f46: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 898f49: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 898f4a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 898f4c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 898f4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 898f50: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 898f52: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x898f55u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 898f55: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 898f58: mov al, 0x80 */
  eax = (eax & 0xffffff00u) | ((uint32_t)(0x80u) & 0xffu);
/* 898f5a: mov byte ptr [ebp - 0x18], al */
  W8((uint32_t)(ebp + 0xffffffe8u), (eax & 0xffu));
/* 898f5d: mov byte ptr [ebp - 0x16], al */
  W8((uint32_t)(ebp + 0xffffffeau), (eax & 0xffu));
/* 898f60: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 898f62: mov byte ptr [ebp - 0x17], 0xff */
  W8((uint32_t)(ebp + 0xffffffe9u), 0xffu);
/* 898f66: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 898f6a: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 898f6d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 898f6e: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x898f71u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 898f71: jmp 0x8991de */
  goto L_8991de;
L_898f76: /* 898f76: test byte ptr [esi + 0x86], 1 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x86u))); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 898f7d: je 0x898f8d */
  if (zf) goto L_898f8d;
L_898f7f: /* 898f7f: mov ecx, dword ptr [esi + 0x5c] */
  ecx = R32((uint32_t)(esi + 0x5cu));
/* 898f82: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 898f84: je 0x898f8d */
  if (zf) goto L_898f8d;
L_898f86: /* 898f86: call 0x6cadd5 */
  esp -= 4; W32(esp, 0x898f8bu); SPILL(); f_6cadd5(); if (g_unwind) return; RELOAD();
/* 898f8b: jmp 0x898f8f */
  goto L_898f8f;
L_898f8d: /* 898f8d: mov eax, esi */
  eax = esi;
L_898f8f: /* 898f8f: mov ecx, dword ptr [eax + 0x84] */
  ecx = R32((uint32_t)(eax + 0x84u));
/* 898f95: test ch, 0x20 */
  { uint8_t a = (uint8_t)(((ecx >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x20u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 898f98: jne 0x899540 */
  if (!zf) goto L_899540;
L_898f9e: /* 898f9e: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 898fa1: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 898fa4: call 0x6cbd7a */
  esp -= 4; W32(esp, 0x898fa9u); SPILL(); f_6cbd7a(); if (g_unwind) return; RELOAD();
/* 898fa9: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 898fab: je 0x899540 */
  if (zf) goto L_899540;
L_898fb1: /* 898fb1: mov ecx, dword ptr [ebp - 0x6c] */
  ecx = R32((uint32_t)(ebp + 0xffffff94u));
/* 898fb4: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 898fb7: mov eax, dword ptr [eax + 0xb4] */
  eax = R32((uint32_t)(eax + 0xb4u));
/* 898fbd: movzx edx, byte ptr [ecx + 0x2b1] */
  edx = (uint32_t)(R8((uint32_t)(ecx + 0x2b1u)));
/* 898fc4: fld dword ptr [eax + 8] */
  { double v = F32((uint32_t)(eax + 0x8u)); FPUSH(v); }
/* 898fc7: fld dword ptr [eax + 4] */
  { double v = F32((uint32_t)(eax + 0x4u)); FPUSH(v); }
/* 898fca: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 898fcc: fstp dword ptr [ebp - 0x140] */
  WF32((uint32_t)(ebp + 0xfffffec0u), ST0); FPOP();
/* 898fd2: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 898fd5: lea edx, [ebp - 0x144] */
  edx = (uint32_t)(ebp + 0xfffffebcu);
/* 898fdb: lea eax, [ebp - 0x200] */
  eax = (uint32_t)(ebp + 0xfffffe00u);
/* 898fe1: fstp dword ptr [ebp - 0x13c] */
  WF32((uint32_t)(ebp + 0xfffffec4u), ST0); FPOP();
/* 898fe7: mov dword ptr [ebp - 0x144], ecx */
  W32((uint32_t)(ebp + 0xfffffebcu), ecx);
/* 898fed: mov dword ptr [ebp - 0x138], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffec8u), 0x3f800000u);
/* 898ff7: mov dword ptr [ebp - 0x74], edx */
  W32((uint32_t)(ebp + 0xffffff8cu), edx);
/* 898ffa: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 898ffd: mov esi, dword ptr [ebp - 0x74] */
  esi = R32((uint32_t)(ebp + 0xffffff8cu));
/* 899000: mov edx, dword ptr [ebp - 0x40] */
  edx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 899003: lea edi, [ebp - 0xd4] */
  edi = (uint32_t)(ebp + 0xffffff2cu);
/* 899009: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89900b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89900d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89900f: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 899012: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 899014: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 899017: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 899019: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89901c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89901f: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 899022: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 899025: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 899028: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89902b: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89902e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 899031: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 899034: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 899036: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 899038: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89903a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89903c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89903e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 899041: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 899044: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 899047: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89904a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89904d: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 899050: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 899053: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 899056: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 899058: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89905a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89905c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89905e: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 899060: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 899063: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 899066: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 899069: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89906c: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89906f: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 899072: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 899075: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 899078: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89907a: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89907c: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89907e: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 899080: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 899082: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 899084: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 899086: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 899088: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89908b: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89908e: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 899091: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 899094: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899096: fld dword ptr [ebp - 0xcc] */
  { double v = F32((uint32_t)(ebp + 0xffffff34u)); FPUSH(v); }
/* 89909c: add eax, 0x170 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x170u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 8990a1: add ecx, 0xa8 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 8990a7: fsub dword ptr [eax + 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x8u)));
/* 8990aa: fld dword ptr [ebp - 0xd0] */
  { double v = F32((uint32_t)(ebp + 0xffffff30u)); FPUSH(v); }
/* 8990b0: fsub dword ptr [eax + 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x4u)));
/* 8990b3: fld dword ptr [ebp - 0xd4] */
  { double v = F32((uint32_t)(ebp + 0xffffff2cu)); FPUSH(v); }
/* 8990b9: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* 8990bb: mov dword ptr [ebp - 0x204], 0 */
  W32((uint32_t)(ebp + 0xfffffdfcu), 0x0u);
/* 8990c5: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 8990c8: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8990cb: mov dword ptr [ebp - 0x210], edx */
  W32((uint32_t)(ebp + 0xfffffdf0u), edx);
/* 8990d1: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 8990d4: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8990d7: mov dword ptr [ebp - 0x20c], eax */
  W32((uint32_t)(ebp + 0xfffffdf4u), eax);
/* 8990dd: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 8990e0: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8990e3: lea eax, [ebp - 0x210] */
  eax = (uint32_t)(ebp + 0xfffffdf0u);
/* 8990e9: mov dword ptr [ebp - 0x208], edx */
  W32((uint32_t)(ebp + 0xfffffdf8u), edx);
/* 8990ef: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8990f0: lea edx, [ebp - 0xac] */
  edx = (uint32_t)(ebp + 0xffffff54u);
/* 8990f6: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8990f7: call dword ptr [0xcfaab8] */
  esp -= 4; W32(esp, 0x8990fdu); SPILL(); f_4e3b1b(); if (g_unwind) return; /* Core!??HFPlane@@QBE?AV0@ABV0@@Z */ RELOAD();
/* 8990fd: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 899100: mov edx, dword ptr [ecx + 0xb4] */
  edx = R32((uint32_t)(ecx + 0xb4u));
/* 899106: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899107: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 899109: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89910c: mov ecx, esp */
  ecx = esp;
/* 89910e: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 899110: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 899113: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 899116: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 899119: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 89911c: lea ecx, [ebp - 0xbc] */
  ecx = (uint32_t)(ebp + 0xffffff44u);
/* 899122: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x899128u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 899128: mov ecx, dword ptr [ebp - 0xbc] */
  ecx = R32((uint32_t)(ebp + 0xffffff44u));
/* 89912e: mov edx, dword ptr [ebp - 0xb8] */
  edx = R32((uint32_t)(ebp + 0xffffff48u));
/* 899134: mov eax, dword ptr [ebp - 0xb4] */
  eax = R32((uint32_t)(ebp + 0xffffff4cu));
/* 89913a: mov dword ptr [ebp - 0x90], ecx */
  W32((uint32_t)(ebp + 0xffffff70u), ecx);
/* 899140: mov ecx, dword ptr [ebp - 0xb0] */
  ecx = R32((uint32_t)(ebp + 0xffffff50u));
/* 899146: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899149: mov dword ptr [ebp - 0x8c], edx */
  W32((uint32_t)(ebp + 0xffffff74u), edx);
/* 89914f: mov dword ptr [ebp - 0x84], ecx */
  W32((uint32_t)(ebp + 0xffffff7cu), ecx);
/* 899155: lea edx, [ebp - 0xbc] */
  edx = (uint32_t)(ebp + 0xffffff44u);
/* 89915b: mov ecx, esp */
  ecx = esp;
/* 89915d: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 899160: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899161: mov dword ptr [ebp - 0x88], eax */
  W32((uint32_t)(ebp + 0xffffff78u), eax);
/* 899167: call dword ptr [0xcfa268] */
  esp -= 4; W32(esp, 0x89916du); SPILL(); f_4e1dac(); if (g_unwind) return; /* Core!??0FSphere@@QAE@ABV0@@Z */ RELOAD();
/* 89916d: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 899170: mov edx, dword ptr [edx + 4] */
  edx = R32((uint32_t)(edx + 0x4u));
/* 899173: mov edx, dword ptr [edx + 0x30] */
  edx = R32((uint32_t)(edx + 0x30u));
/* 899176: mov esi, dword ptr [edx + 0x540] */
  esi = R32((uint32_t)(edx + 0x540u));
/* 89917c: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89917f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899181: mov dword ptr [ebp - 0x40], ebx */
  W32((uint32_t)(ebp + 0xffffffc0u), ebx);
/* 899184: xor ebx, ebx */
  ebx = 0;
/* 899186: cmp esi, 7 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x7u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 899189: sete bl */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)((zf) ? 1 : 0) & 0xffu);
/* 89918c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89918d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89918f: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 899191: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899193: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 899195: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x899198u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899198: mov ebx, dword ptr [ebp - 0x40] */
  ebx = R32((uint32_t)(ebp + 0xffffffc0u));
/* 89919b: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 89919e: mov edi, dword ptr [ebp - 0x68] */
  edi = R32((uint32_t)(ebp + 0xffffff98u));
L_8991a1: /* 8991a1: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8991a3: je 0x8991c6 */
  if (zf) goto L_8991c6;
L_8991a5: /* 8991a5: cmp ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8991a7: jge 0x8991c6 */
  if ((sf == of)) goto L_8991c6;
L_8991a9: /* 8991a9: mov edx, dword ptr [esi] */
  edx = R32((uint32_t)(esi));
/* 8991ab: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8991ae: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8991b0: push 0x3f800000 */
  { uint32_t v = 0x3f800000u; esp -= 4; W32(esp, v); }
/* 8991b5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8991b6: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8991b7: call dword ptr [eax + 0x28] */
  { uint32_t t = R32((uint32_t)(eax + 0x28u)); esp -= 4; W32(esp, 0x8991bau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8991ba: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 8991bd: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8991be: mov dword ptr [ebp - 0x9c], ebx */
  W32((uint32_t)(ebp + 0xffffff64u), ebx);
/* 8991c4: jmp 0x8991a1 */
  goto L_8991a1;
L_8991c6: /* 8991c6: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 8991c9: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8991cc: mov edx, dword ptr [edx + 0xb8] */
  edx = R32((uint32_t)(edx + 0xb8u));
/* 8991d2: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8991d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8991d5: call dword ptr [eax + 0x20] */
  { uint32_t t = R32((uint32_t)(eax + 0x20u)); esp -= 4; W32(esp, 0x8991d8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8991d8: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
L_8991db: /* 8991db: mov esi, dword ptr [ebp - 0x6c] */
  esi = R32((uint32_t)(ebp + 0xffffff94u));
L_8991de: /* 8991de: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 8991e1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8991e3: je 0x899e69 */
  if (zf) goto L_899e69;
L_8991e9: /* 8991e9: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8991ec: mov edx, dword ptr [ecx + 0xf0] */
  edx = R32((uint32_t)(ecx + 0xf0u));
/* 8991f2: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* 8991f8: imul edx, edx, 0x11c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x11cu);
  edx = (uint32_t)r;
  }
/* 8991fe: mov ecx, dword ptr [edx + eax + 0x20] */
  ecx = R32((uint32_t)(edx + eax + 0x20u));
/* 899202: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 899204: jle 0x8996bf */
  if ((zf || sf != of)) goto L_8996bf;
L_89920a: /* 89920a: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 89920c: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89920f: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 899211: mov dword ptr [ecx + 0x98], 1 */
  W32((uint32_t)(ecx + 0x98u), 0x1u);
/* 89921b: mov edi, eax */
  edi = eax;
/* 89921d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 899220: mov dword ptr [eax + 0x84], eax */
  W32((uint32_t)(eax + 0x84u), eax);
/* 899226: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 899229: add edx, 0x7c */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 89922c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89922d: call 0x6c361b */
  esp -= 4; W32(esp, 0x899232u); SPILL(); f_6c361b(); if (g_unwind) return; RELOAD();
/* 899232: mov esi, eax */
  esi = eax;
/* 899234: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 899237: mov ecx, dword ptr [esi + 0x18] */
  ecx = R32((uint32_t)(esi + 0x18u));
/* 89923a: add eax, 0x7c */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x7cu);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89923d: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 899240: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 899242: je 0x89924c */
  if (zf) goto L_89924c;
L_899244: /* 899244: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899245: mov ecx, esi */
  ecx = esi;
/* 899247: call 0x6cb163 */
  esp -= 4; W32(esp, 0x89924cu); SPILL(); f_6cb163(); if (g_unwind) return; RELOAD();
L_89924c: /* 89924c: mov dword ptr [esi + 0x20], 0x1f4 */
  W32((uint32_t)(esi + 0x20u), 0x1f4u);
/* 899253: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899256: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 899258: lea edx, [ebp - 0x24] */
  edx = (uint32_t)(ebp + 0xffffffdcu);
/* 89925b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89925c: mov dword ptr [ebp - 0x24], esi */
  W32((uint32_t)(ebp + 0xffffffdcu), esi);
/* 89925f: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899261: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899263: call dword ptr [eax + 0x4c] */
  { uint32_t t = R32((uint32_t)(eax + 0x4cu)); esp -= 4; W32(esp, 0x899266u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899266: mov ebx, dword ptr [ebp - 0x64] */
  ebx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 899269: fld dword ptr [ebx + 0x12c] */
  { double v = F32((uint32_t)(ebx + 0x12cu)); FPUSH(v); }
/* 89926f: fcomp dword ptr [0x9f48a0] */
  fpu_com(ST0, F32((uint32_t)(0x9f48a0u)));
  FPOP();
/* 899275: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 899277: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89927a: jne 0x89928b */
  if (!zf) goto L_89928b;
L_89927c: /* 89927c: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89927f: mov edx, dword ptr [ebx + 0x12c] */
  edx = R32((uint32_t)(ebx + 0x12cu));
/* 899285: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899287: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899288: call dword ptr [eax + 0x2c] */
  { uint32_t t = R32((uint32_t)(eax + 0x2cu)); esp -= 4; W32(esp, 0x89928bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_89928b: /* 89928b: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 89928d: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 899293: mov edx, dword ptr [0xce83d8] */
  edx = R32((uint32_t)(0xce83d8u));
/* 899299: mov esi, dword ptr [ecx + edx*4] */
  esi = R32((uint32_t)(ecx + edx*4));
/* 89929c: lea eax, [edi + eax - 0xc] */
  eax = (uint32_t)(edi + eax + 0xfffffff4u);
/* 8992a0: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 8992a2: mov dword ptr [ecx + edx*4], esi */
  W32((uint32_t)(ecx + edx*4), esi);
/* 8992a5: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8992a7: mov edx, dword ptr [ebx + 0x1ec] */
  edx = R32((uint32_t)(ebx + 0x1ecu));
/* 8992ad: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 8992af: mov esi, eax */
  esi = eax;
/* 8992b1: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 8992b4: mov ecx, dword ptr [eax + 0xf0] */
  ecx = R32((uint32_t)(eax + 0xf0u));
/* 8992ba: imul ecx, ecx, 0x11c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x11cu);
  ecx = (uint32_t)r;
  }
/* 8992c0: lea eax, [ecx + edx + 0x4c] */
  eax = (uint32_t)(ecx + edx + 0x4cu);
/* 8992c4: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8992c7: jg 0x8992cf */
  if ((!zf && sf == of)) goto L_8992cf;
L_8992c9: /* 8992c9: mov dword ptr [eax], 1 */
  W32((uint32_t)(eax), 0x1u);
L_8992cf: /* 8992cf: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8992d2: mov edx, dword ptr [edx + 0xf0] */
  edx = R32((uint32_t)(edx + 0xf0u));
/* 8992d8: mov edi, dword ptr [ebx + 0x1ec] */
  edi = R32((uint32_t)(ebx + 0x1ecu));
/* 8992de: imul edx, edx, 0x11c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x11cu);
  edx = (uint32_t)r;
  }
/* 8992e4: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8992e7: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 8992e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8992eb: lea edx, [edx + edi + 0x34] */
  edx = (uint32_t)(edx + edi + 0x34u);
/* 8992ef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8992f0: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 8992f7: call dword ptr [eax + 0x54] */
  { uint32_t t = R32((uint32_t)(eax + 0x54u)); esp -= 4; W32(esp, 0x8992fau); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8992fa: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8992fc: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 899302: mov edx, dword ptr [0xce83c8] */
  edx = R32((uint32_t)(0xce83c8u));
/* 899308: lea eax, [esi + eax - 0xc] */
  eax = (uint32_t)(esi + eax + 0xfffffff4u);
/* 89930c: add dword ptr [ecx + edx*4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + edx*4), r);
  }
/* 89930f: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 899311: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 899314: neg eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(0 - a);
  eax = r;
  }
/* 899316: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 899319: xor edi, edi */
  edi = 0;
L_89931b: /* 89931b: mov eax, dword ptr [ecx + 0xf0] */
  eax = R32((uint32_t)(ecx + 0xf0u));
/* 899321: mov edx, dword ptr [ebx + 0x1ec] */
  edx = R32((uint32_t)(ebx + 0x1ecu));
/* 899327: imul eax, eax, 0x11c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x11cu);
  eax = (uint32_t)r;
  }
/* 89932d: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89932f: cmp edi, dword ptr [eax + 0x20] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 899332: mov dword ptr [ebp - 0x40], edi */
  W32((uint32_t)(ebp + 0xffffffc0u), edi);
/* 899335: jge 0x8996a1 */
  if ((sf == of)) goto L_8996a1;
L_89933b: /* 89933b: mov eax, dword ptr [eax + 0x1c] */
  eax = R32((uint32_t)(eax + 0x1cu));
/* 89933e: lea edx, [edi + edi*4] */
  edx = (uint32_t)(edi + edi*4);
/* 899341: cmp word ptr [eax + edx*4 + 0x12], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(eax + edx*4 + 0x12u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 899347: lea esi, [eax + edx*4] */
  esi = (uint32_t)(eax + edx*4);
/* 89934a: mov dword ptr [ebp - 0xc4], esi */
  W32((uint32_t)(ebp + 0xffffff3cu), esi);
/* 899350: je 0x89969b */
  if (zf) goto L_89969b;
L_899356: /* 899356: mov eax, dword ptr [ebp - 0x6c] */
  eax = R32((uint32_t)(ebp + 0xffffff94u));
/* 899359: mov ebx, dword ptr [ebx + 0xcc] */
  ebx = R32((uint32_t)(ebx + 0xccu));
/* 89935f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899361: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899362: movzx eax, word ptr [esi] */
  eax = (uint32_t)(R16((uint32_t)(esi)));
/* 899365: mov eax, dword ptr [ebx + eax*8 + 4] */
  eax = R32((uint32_t)(ebx + eax*8 + 0x4u));
/* 899369: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89936a: call dword ptr [edx + 0x110] */
  { uint32_t t = R32((uint32_t)(edx + 0x110u)); esp -= 4; W32(esp, 0x899370u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899370: mov ecx, dword ptr [ebp - 0x98] */
  ecx = R32((uint32_t)(ebp + 0xffffff68u));
/* 899376: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899378: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 89937b: je 0x89940c */
  if (zf) goto L_89940c;
L_899381: /* 899381: mov eax, dword ptr [0xce1d34] */
  eax = R32((uint32_t)(0xce1d34u));
/* 899386: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899388: jne 0x899407 */
  if (!zf) goto L_899407;
L_89938a: /* 89938a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89938c: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 89938f: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x899395u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 899395: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 89939a: mov ecx, 0xb88020 */
  ecx = 0xb88020u;
/* 89939f: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x8993a5u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 8993a5: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8993a7: jne 0x8993c1 */
  if (!zf) goto L_8993c1;
L_8993a9: /* 8993a9: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 8993ae: push 0xae8610 */
  { uint32_t v = 0xae8610u; esp -= 4; W32(esp, v); }
/* 8993b3: push 0xae8654 */
  { uint32_t v = 0xae8654u; esp -= 4; W32(esp, v); }
/* 8993b8: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x8993beu); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 8993be: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_8993c1: /* 8993c1: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x8993c7u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 8993c7: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 8993cd: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8993cf: mov ecx, dword ptr [ebp - 0x44] */
  ecx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 8993d2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8993d4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8993d5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8993d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8993d9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 8993da: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8993db: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 8993e0: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x8993e6u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 8993e6: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 8993ec: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 8993ef: push 0xce1d34 */
  { uint32_t v = 0xce1d34u; esp -= 4; W32(esp, v); }
/* 8993f4: mov dword ptr [0xce1d34], eax */
  W32((uint32_t)(0xce1d34u), eax);
/* 8993f9: call 0x6c1203 */
  esp -= 4; W32(esp, 0x8993feu); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 8993fe: mov eax, dword ptr [0xce1d34] */
  eax = R32((uint32_t)(0xce1d34u));
/* 899403: or dword ptr [eax + 0x5c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x5cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x5cu), r);
  }
L_899407: /* 899407: mov eax, dword ptr [0xce1d34] */
  eax = R32((uint32_t)(0xce1d34u));
L_89940c: /* 89940c: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89940f: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899411: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899413: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899415: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899417: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899418: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x89941bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89941b: movzx edx, word ptr [esi + 6] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x6u)));
/* 89941f: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899422: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899424: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899425: movzx edx, word ptr [esi + 4] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x4u)));
/* 899429: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89942a: movzx edx, word ptr [esi + 0x12] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x12u)));
/* 89942e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89942f: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 899432: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899433: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899435: call dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); esp -= 4; W32(esp, 0x899438u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899438: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 89943b: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89943d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89943f: call dword ptr [edx + 0x170] */
  { uint32_t t = R32((uint32_t)(edx + 0x170u)); esp -= 4; W32(esp, 0x899445u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899445: mov ecx, dword ptr [eax + 0x264] */
  ecx = R32((uint32_t)(eax + 0x264u));
/* 89944b: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89944d: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 899450: jne 0x89945d */
  if (!zf) goto L_89945d;
L_899452: /* 899452: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 899455: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899457: je 0x899685 */
  if (zf) goto L_899685;
L_89945d: /* 89945d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 899460: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 899463: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x899468u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 899468: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89946a: jne 0x899685 */
  if (!zf) goto L_899685;
L_899470: /* 899470: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 899473: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 899476: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 899479: test dword ptr [eax + 0x534], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899483: je 0x899685 */
  if (zf) goto L_899685;
L_899489: /* 899489: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89948c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89948e: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x899490u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899490: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899493: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899495: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 899497: call dword ptr [eax + 0x48] */
  { uint32_t t = R32((uint32_t)(eax + 0x48u)); esp -= 4; W32(esp, 0x89949au); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89949a: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89949d: mov ecx, esp */
  ecx = esp;
/* 89949f: mov dword ptr [ebp - 0x58], esp */
  W32((uint32_t)(ebp + 0xffffffa8u), esp);
/* 8994a2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8994a4: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 8994a7: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 8994ae: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 8994b1: mov edx, esp */
  edx = esp;
/* 8994b3: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 8994b5: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 8994bc: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
/* 8994bf: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 8994c2: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 8994c9: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 8994cc: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 8994cf: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x8994d5u); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 8994d5: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8994d8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8994da: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8994dc: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8994de: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8994e0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8994e2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8994e4: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x8994e7u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8994e7: xor ebx, ebx */
  ebx = 0;
/* 8994e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_8994f0: /* 8994f0: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 8994f3: cmp ebx, dword ptr [eax + 0x264] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x264u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8994f9: jge 0x8995ee */
  if ((sf == of)) goto L_8995ee;
L_8994ff: /* 8994ff: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 899502: mov edi, eax */
  edi = eax;
/* 899504: mov ecx, dword ptr [edi + 0x260] */
  ecx = R32((uint32_t)(edi + 0x260u));
/* 89950a: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 89950d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 89950f: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 899515: fld dword ptr [ecx + 0x3ac] */
  { double v = F32((uint32_t)(ecx + 0x3acu)); FPUSH(v); }
/* 89951b: add edi, 0x260 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x260u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 899521: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899524: mov ecx, esi */
  ecx = esi;
/* 899526: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 899529: call 0x6ca46b */
  esp -= 4; W32(esp, 0x89952eu); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 89952e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899530: jne 0x899592 */
  if (!zf) goto L_899592;
L_899532: /* 899532: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 899534: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 899535: mov ecx, edi */
  ecx = edi;
/* 899537: call 0x6cb320 */
  esp -= 4; W32(esp, 0x89953cu); SPILL(); f_6cb320(); if (g_unwind) return; RELOAD();
/* 89953c: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 89953d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 89953e: jmp 0x8994f0 */
  goto L_8994f0;
L_899540: /* 899540: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899543: mov ecx, esp */
  ecx = esp;
/* 899545: mov dword ptr [ebp - 0x1c], esp */
  W32((uint32_t)(ebp + 0xffffffe4u), esp);
/* 899548: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89954a: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89954d: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 899554: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 899557: mov eax, esp */
  eax = esp;
/* 899559: mov dword ptr [eax], edx */
  W32((uint32_t)(eax), edx);
/* 89955b: mov dword ptr [ebp - 0x2c], 0 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x0u);
/* 899562: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 899565: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 899568: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 89956f: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 899572: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 899575: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x89957bu); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 89957b: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89957e: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899580: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899582: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899584: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899586: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899588: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89958a: call dword ptr [eax + 0x24] */
  { uint32_t t = R32((uint32_t)(eax + 0x24u)); esp -= 4; W32(esp, 0x89958du); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89958d: jmp 0x8991de */
  goto L_8991de;
L_899592: /* 899592: test dword ptr [ebp - 0x94], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff6cu))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89959c: je 0x8995a7 */
  if (zf) goto L_8995a7;
L_89959e: /* 89959e: test byte ptr [esi + 0x15c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x15cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 8995a5: je 0x8995e8 */
  if (zf) goto L_8995e8;
L_8995a7: /* 8995a7: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 8995aa: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 8995ad: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 8995ae: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8995af: mov ecx, esi */
  ecx = esi;
/* 8995b1: call 0x6c7adb */
  esp -= 4; W32(esp, 0x8995b6u); SPILL(); f_6c7adb(); if (g_unwind) return; RELOAD();
/* 8995b6: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8995b9: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8995bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8995bd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8995bf: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8995c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8995c2: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x8995c5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8995c5: mov eax, dword ptr [ebp - 0xc4] */
  eax = R32((uint32_t)(ebp + 0xffffff3cu));
/* 8995cb: movzx esi, word ptr [eax + 6] */
  esi = (uint32_t)(R16((uint32_t)(eax + 0x6u)));
/* 8995cf: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8995d2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8995d4: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8995d5: movzx esi, word ptr [eax + 4] */
  esi = (uint32_t)(R16((uint32_t)(eax + 0x4u)));
/* 8995d9: movzx eax, word ptr [eax + 0x12] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0x12u)));
/* 8995dd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 8995de: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8995df: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 8995e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8995e3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 8995e5: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0x8995e8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_8995e8: /* 8995e8: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 8995e9: jmp 0x8994f0 */
  goto L_8994f0;
L_8995ee: /* 8995ee: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 8995f1: mov edi, dword ptr [ebp - 0xc4] */
  edi = R32((uint32_t)(ebp + 0xffffff3cu));
L_8995f7: /* 8995f7: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 8995f9: je 0x899674 */
  if (zf) goto L_899674;
L_8995fb: /* 8995fb: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 8995fe: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899600: mov eax, dword ptr [edx + 0xb0] */
  eax = R32((uint32_t)(edx + 0xb0u));
/* 899606: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 899608: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 89960e: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899611: mov ecx, esi */
  ecx = esi;
/* 899613: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 899616: call 0x6ca46b */
  esp -= 4; W32(esp, 0x89961bu); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 89961b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89961d: je 0x89966f */
  if (zf) goto L_89966f;
L_89961f: /* 89961f: test dword ptr [ebp - 0x94], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff6cu))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899629: je 0x899634 */
  if (zf) goto L_899634;
L_89962b: /* 89962b: test byte ptr [esi + 0x15c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x15cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 899632: je 0x89966f */
  if (zf) goto L_89966f;
L_899634: /* 899634: mov ecx, dword ptr [ebp - 0x74] */
  ecx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 899637: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 89963a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89963b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89963c: mov ecx, esi */
  ecx = esi;
/* 89963e: call 0x6c7adb */
  esp -= 4; W32(esp, 0x899643u); SPILL(); f_6c7adb(); if (g_unwind) return; RELOAD();
/* 899643: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899646: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899648: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89964a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89964c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89964e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89964f: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x899652u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899652: movzx edx, word ptr [edi + 6] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x6u)));
/* 899656: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899659: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 89965b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89965c: movzx edx, word ptr [edi + 4] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x4u)));
/* 899660: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899661: movzx edx, word ptr [edi + 0x12] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x12u)));
/* 899665: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899666: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 899669: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89966a: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89966c: call dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); esp -= 4; W32(esp, 0x89966fu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_89966f: /* 89966f: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 899672: jmp 0x8995f7 */
  goto L_8995f7;
L_899674: /* 899674: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899677: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899679: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x89967cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89967c: mov esi, dword ptr [ebp - 0xc4] */
  esi = R32((uint32_t)(ebp + 0xffffff3cu));
/* 899682: mov edi, dword ptr [ebp - 0x40] */
  edi = R32((uint32_t)(ebp + 0xffffffc0u));
L_899685: /* 899685: movzx eax, word ptr [esi + 0x12] */
  eax = (uint32_t)(R16((uint32_t)(esi + 0x12u)));
/* 899689: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89968c: mov ebx, dword ptr [ebp - 0x64] */
  ebx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 89968f: lea edx, [eax + ecx] */
  edx = (uint32_t)(eax + ecx);
/* 899692: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 899695: lea eax, [edx + eax*2] */
  eax = (uint32_t)(edx + eax*2);
/* 899698: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
L_89969b: /* 89969b: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 89969c: jmp 0x89931b */
  goto L_89931b;
L_8996a1: /* 8996a1: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 8996a3: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 8996a6: mov edx, dword ptr [0xce83dc] */
  edx = R32((uint32_t)(0xce83dcu));
/* 8996ac: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 8996af: lea eax, [ecx + eax - 0xc] */
  eax = (uint32_t)(ecx + eax + 0xfffffff4u);
/* 8996b3: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 8996b9: add dword ptr [ecx + edx*4], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + edx*4))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  W32((uint32_t)(ecx + edx*4), r);
  }
/* 8996bc: mov esi, dword ptr [ebp - 0x6c] */
  esi = R32((uint32_t)(ebp + 0xffffff94u));
L_8996bf: /* 8996bf: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 8996c2: xor ebx, ebx */
  ebx = 0;
/* 8996c4: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8996c6: je 0x899e69 */
  if (zf) goto L_899e69;
L_8996cc: /* 8996cc: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8996cf: mov eax, dword ptr [edx + 0xf0] */
  eax = R32((uint32_t)(edx + 0xf0u));
/* 8996d5: mov ecx, dword ptr [edi + 0x1ec] */
  ecx = R32((uint32_t)(edi + 0x1ecu));
/* 8996db: imul eax, eax, 0x11c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x11cu);
  eax = (uint32_t)r;
  }
/* 8996e1: cmp dword ptr [eax + ecx + 0x2c], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + ecx + 0x2cu))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8996e5: je 0x899e69 */
  if (zf) goto L_899e69;
L_8996eb: /* 8996eb: cmp dword ptr [ebp - 0x98], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff68u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 8996f1: je 0x899764 */
  if (zf) goto L_899764;
L_8996f3: /* 8996f3: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 8996f6: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 8996f9: call dword ptr [0xcfa338] */
  esp -= 4; W32(esp, 0x8996ffu); SPILL(); f_4e144c(); if (g_unwind) return; /* Core!?GetOuter@UObject@@QBEPAV1@XZ */ RELOAD();
/* 8996ff: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 899702: mov eax, dword ptr [eax + 0x90] */
  eax = R32((uint32_t)(eax + 0x90u));
/* 899708: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 89970b: test dword ptr [esi + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esi + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899715: je 0x899741 */
  if (zf) goto L_899741;
L_899717: /* 899717: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 89971a: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 89971d: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 899720: test dword ptr [eax + 0x534], 0x20000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x20000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89972a: je 0x899741 */
  if (zf) goto L_899741;
L_89972c: /* 89972c: mov byte ptr [ebp - 0x18], 0x4b */
  W8((uint32_t)(ebp + 0xffffffe8u), 0x4bu);
/* 899730: mov byte ptr [ebp - 0x17], 0xff */
  W8((uint32_t)(ebp + 0xffffffe9u), 0xffu);
/* 899734: mov byte ptr [ebp - 0x16], 0x78 */
  W8((uint32_t)(ebp + 0xffffffeau), 0x78u);
/* 899738: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 89973c: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89973f: jmp 0x89975b */
  goto L_89975b;
L_899741: /* 899741: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 899747: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 899748: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 89974b: call 0x6c3e7c */
  esp -= 4; W32(esp, 0x899750u); SPILL(); f_6c3e7c(); if (g_unwind) return; RELOAD();
/* 899750: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899751: lea ecx, [ebp - 0x58] */
  ecx = (uint32_t)(ebp + 0xffffffa8u);
/* 899754: call 0x6c576d */
  esp -= 4; W32(esp, 0x899759u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 899759: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
L_89975b: /* 89975b: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89975e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899760: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899761: call dword ptr [edx + 0x20] */
  { uint32_t t = R32((uint32_t)(edx + 0x20u)); esp -= 4; W32(esp, 0x899764u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_899764: /* 899764: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 899767: mov eax, dword ptr [eax + 0xf0] */
  eax = R32((uint32_t)(eax + 0xf0u));
/* 89976d: mov esi, dword ptr [edi + 0x1ec] */
  esi = R32((uint32_t)(edi + 0x1ecu));
/* 899773: imul eax, eax, 0x11c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x11cu);
  eax = (uint32_t)r;
  }
/* 899779: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89977c: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89977e: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89977f: lea eax, [eax + esi + 0x50] */
  eax = (uint32_t)(eax + esi + 0x50u);
/* 899783: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899784: call dword ptr [edx + 0x54] */
  { uint32_t t = R32((uint32_t)(edx + 0x54u)); esp -= 4; W32(esp, 0x899787u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899787: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89978a: mov edx, dword ptr [ecx + 0xf0] */
  edx = R32((uint32_t)(ecx + 0xf0u));
/* 899790: mov eax, dword ptr [edi + 0x1ec] */
  eax = R32((uint32_t)(edi + 0x1ecu));
/* 899796: imul edx, edx, 0x11c */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(0x11cu);
  edx = (uint32_t)r;
  }
/* 89979c: lea ecx, [edx + eax + 0x6c] */
  ecx = (uint32_t)(edx + eax + 0x6cu);
/* 8997a0: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 8997a2: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 8997a5: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 8997a8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 8997aa: lea eax, [ebp - 0x44] */
  eax = (uint32_t)(ebp + 0xffffffbcu);
/* 8997ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8997ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 8997af: call dword ptr [edx + 0x4c] */
  { uint32_t t = R32((uint32_t)(edx + 0x4cu)); esp -= 4; W32(esp, 0x8997b2u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 8997b2: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8997b5: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x8997bbu); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 8997bb: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8997be: mov eax, dword ptr [ecx + 0xb8] */
  eax = R32((uint32_t)(ecx + 0xb8u));
/* 8997c4: push 0x40 */
  { uint32_t v = 0x40u; esp -= 4; W32(esp, v); }
/* 8997c6: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 8997c7: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 8997ca: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 8997ce: call dword ptr [0xcfa19c] */
  esp -= 4; W32(esp, 0x8997d4u); SPILL(); f_4e2955(); if (g_unwind) return; /* Core!?Add@FArray@@QAEHHH@Z */ RELOAD();
/* 8997d4: xor esi, esi */
  esi = 0;
/* 8997d6: jmp 0x8997e0 */
  goto L_8997e0;
L_8997e0: /* 8997e0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 8997e3: cmp esi, dword ptr [ecx + 0xb8] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(ecx + 0xb8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 8997e9: jge 0x899a96 */
  if ((sf == of)) goto L_899a96;
L_8997ef: /* 8997ef: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 8997f5: mov eax, dword ptr [edi + 0x2d4] */
  eax = R32((uint32_t)(edi + 0x2d4u));
/* 8997fb: lea edx, [esi + esi*2] */
  edx = (uint32_t)(esi + esi*2);
/* 8997fe: shl edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 899801: fld dword ptr [ecx + edx + 0x14] */
  { double v = F32((uint32_t)(ecx + edx + 0x14u)); FPUSH(v); }
/* 899805: add eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 899807: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 899809: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89980b: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 89980e: mov edx, esi */
  edx = esi;
/* 899810: shl edx, 6 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
/* 899813: add edx, dword ptr [ebp - 0x30] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffd0u)));
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 899816: fstp dword ptr [ebp - 0x130] */
  WF32((uint32_t)(ebp + 0xfffffed0u), ST0); FPOP();
/* 89981c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89981e: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 899821: fstp dword ptr [ebp - 0x12c] */
  WF32((uint32_t)(ebp + 0xfffffed4u), ST0); FPOP();
/* 899827: fmul dword ptr [eax + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2cu)));
/* 89982a: fstp dword ptr [ebp - 0x128] */
  WF32((uint32_t)(ebp + 0xfffffed8u), ST0); FPOP();
/* 899830: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 899833: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 899835: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 899838: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 89983a: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 89983d: fstp dword ptr [ebp - 0x1a8] */
  WF32((uint32_t)(ebp + 0xfffffe58u), ST0); FPOP();
/* 899843: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 899845: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 899848: fstp dword ptr [ebp - 0x1a4] */
  WF32((uint32_t)(ebp + 0xfffffe5cu), ST0); FPOP();
/* 89984e: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 899851: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 899853: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 899856: fstp dword ptr [ebp - 0x60] */
  WF32((uint32_t)(ebp + 0xffffffa0u), ST0); FPOP();
/* 899859: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89985b: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 89985e: fstp dword ptr [ebp - 0x5c] */
  WF32((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 899861: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 899864: fstp dword ptr [ebp - 0x58] */
  WF32((uint32_t)(ebp + 0xffffffa8u), ST0); FPOP();
/* 899867: fadd dword ptr [ebp - 0x60] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffa0u)));
/* 89986a: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 89986d: fadd dword ptr [ebp - 0x1a8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffe58u)));
/* 899873: fstp dword ptr [ebp - 0x198] */
  WF32((uint32_t)(ebp + 0xfffffe68u), ST0); FPOP();
/* 899879: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 89987c: fadd dword ptr [ebp - 0x1a4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffe5cu)));
/* 899882: fstp dword ptr [ebp - 0x194] */
  WF32((uint32_t)(ebp + 0xfffffe6cu), ST0); FPOP();
/* 899888: fadd dword ptr [ebp - 0x130] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffed0u)));
/* 89988e: fld dword ptr [ebp - 0x198] */
  { double v = F32((uint32_t)(ebp + 0xfffffe68u)); FPUSH(v); }
/* 899894: fadd dword ptr [ebp - 0x12c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffed4u)));
/* 89989a: fld dword ptr [ebp - 0x194] */
  { double v = F32((uint32_t)(ebp + 0xfffffe6cu)); FPUSH(v); }
/* 8998a0: fadd dword ptr [ebp - 0x128] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffed8u)));
/* 8998a6: fstp dword ptr [ebp - 0xb0] */
  WF32((uint32_t)(ebp + 0xffffff50u), ST0); FPOP();
/* 8998ac: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 8998af: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8998b1: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 8998b4: fstp dword ptr [ebp - 0xf0] */
  WF32((uint32_t)(ebp + 0xffffff10u), ST0); FPOP();
/* 8998ba: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8998bc: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 8998bf: fstp dword ptr [ebp - 0xec] */
  WF32((uint32_t)(ebp + 0xffffff14u), ST0); FPOP();
/* 8998c5: fmul dword ptr [eax + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2cu)));
/* 8998c8: fstp dword ptr [ebp - 0xe8] */
  WF32((uint32_t)(ebp + 0xffffff18u), ST0); FPOP();
/* 8998ce: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 8998d1: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8998d3: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 8998d6: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 8998d8: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 8998db: fstp dword ptr [ebp - 0x188] */
  WF32((uint32_t)(ebp + 0xfffffe78u), ST0); FPOP();
/* 8998e1: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 8998e3: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 8998e6: fstp dword ptr [ebp - 0x184] */
  WF32((uint32_t)(ebp + 0xfffffe7cu), ST0); FPOP();
/* 8998ec: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 8998ef: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8998f1: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 8998f4: fstp dword ptr [ebp - 0x120] */
  WF32((uint32_t)(ebp + 0xfffffee0u), ST0); FPOP();
/* 8998fa: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8998fc: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 8998ff: fstp dword ptr [ebp - 0x11c] */
  WF32((uint32_t)(ebp + 0xfffffee4u), ST0); FPOP();
/* 899905: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 899908: fstp dword ptr [ebp - 0x118] */
  WF32((uint32_t)(ebp + 0xfffffee8u), ST0); FPOP();
/* 89990e: fadd dword ptr [ebp - 0x120] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffee0u)));
/* 899914: fld dword ptr [ebp - 0x11c] */
  { double v = F32((uint32_t)(ebp + 0xfffffee4u)); FPUSH(v); }
/* 89991a: fadd dword ptr [ebp - 0x188] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffe78u)));
/* 899920: fstp dword ptr [ebp - 0x178] */
  WF32((uint32_t)(ebp + 0xfffffe88u), ST0); FPOP();
/* 899926: fld dword ptr [ebp - 0x118] */
  { double v = F32((uint32_t)(ebp + 0xfffffee8u)); FPUSH(v); }
/* 89992c: fadd dword ptr [ebp - 0x184] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffe7cu)));
/* 899932: fstp dword ptr [ebp - 0x174] */
  WF32((uint32_t)(ebp + 0xfffffe8cu), ST0); FPOP();
/* 899938: fadd dword ptr [ebp - 0xf0] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff10u)));
/* 89993e: fld dword ptr [ebp - 0x178] */
  { double v = F32((uint32_t)(ebp + 0xfffffe88u)); FPUSH(v); }
/* 899944: fadd dword ptr [ebp - 0xec] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff14u)));
/* 89994a: fstp dword ptr [ebp - 0x208] */
  WF32((uint32_t)(ebp + 0xfffffdf8u), ST0); FPOP();
/* 899950: fld dword ptr [ebp - 0x174] */
  { double v = F32((uint32_t)(ebp + 0xfffffe8cu)); FPUSH(v); }
/* 899956: fadd dword ptr [ebp - 0xe8] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff18u)));
/* 89995c: fstp dword ptr [ebp - 0x204] */
  WF32((uint32_t)(ebp + 0xfffffdfcu), ST0); FPOP();
/* 899962: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 899965: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 899967: fmul dword ptr [eax + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x24u)));
/* 89996a: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 89996d: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89996f: fmul dword ptr [eax + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x28u)));
/* 899972: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 899975: fmul dword ptr [eax + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x2cu)));
/* 899978: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 89997b: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 89997e: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 899980: fmul dword ptr [eax + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x18u)));
/* 899983: fld st(1) */
  { double v = STI(1); FPUSH(v); }
/* 899985: fmul dword ptr [eax + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x1cu)));
/* 899988: fstp dword ptr [ebp - 0x14c] */
  WF32((uint32_t)(ebp + 0xfffffeb4u), ST0); FPOP();
/* 89998e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 899990: fmul dword ptr [eax + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x20u)));
/* 899993: fstp dword ptr [ebp - 0x148] */
  WF32((uint32_t)(ebp + 0xfffffeb8u), ST0); FPOP();
/* 899999: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 89999c: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89999e: fmul dword ptr [eax + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0xcu)));
/* 8999a1: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 8999a4: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 8999a6: fmul dword ptr [eax + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x10u)));
/* 8999a9: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 8999ac: fmul dword ptr [eax + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x14u)));
/* 8999af: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 8999b2: fadd dword ptr [ebp - 0x80] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff80u)));
/* 8999b5: fld dword ptr [ebp - 0x7c] */
  { double v = F32((uint32_t)(ebp + 0xffffff84u)); FPUSH(v); }
/* 8999b8: fadd dword ptr [ebp - 0x14c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffeb4u)));
/* 8999be: fstp dword ptr [ebp - 0xdc] */
  WF32((uint32_t)(ebp + 0xffffff24u), ST0); FPOP();
/* 8999c4: fld dword ptr [ebp - 0x78] */
  { double v = F32((uint32_t)(ebp + 0xffffff88u)); FPUSH(v); }
/* 8999c7: fadd dword ptr [ebp - 0x148] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xfffffeb8u)));
/* 8999cd: fstp dword ptr [ebp - 0xd8] */
  WF32((uint32_t)(ebp + 0xffffff28u), ST0); FPOP();
/* 8999d3: fadd dword ptr [ebp - 0x3c] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc4u)));
/* 8999d6: fld dword ptr [ebp - 0xdc] */
  { double v = F32((uint32_t)(ebp + 0xffffff24u)); FPUSH(v); }
/* 8999dc: fadd dword ptr [ebp - 0x38] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffc8u)));
/* 8999df: fstp dword ptr [ebp - 0x13c] */
  WF32((uint32_t)(ebp + 0xfffffec4u), ST0); FPOP();
/* 8999e5: fld dword ptr [ebp - 0xd8] */
  { double v = F32((uint32_t)(ebp + 0xffffff28u)); FPUSH(v); }
/* 8999eb: fadd dword ptr [ebp - 0x34] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffffccu)));
/* 8999ee: fstp dword ptr [ebp - 0x138] */
  WF32((uint32_t)(ebp + 0xfffffec8u), ST0); FPOP();
/* 8999f4: fld dword ptr [ecx + 0x14] */
  { double v = F32((uint32_t)(ecx + 0x14u)); FPUSH(v); }
/* 8999f7: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 8999fa: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 8999fb: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 8999fe: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 899a01: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 899a03: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 899a06: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 899a08: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 899a0a: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* 899a0c: fstp dword ptr [edx + 0x30] */
  WF32((uint32_t)(edx + 0x30u), ST0); FPOP();
/* 899a0f: fld dword ptr [ecx + 0x20] */
  { double v = F32((uint32_t)(ecx + 0x20u)); FPUSH(v); }
/* 899a12: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 899a15: fld dword ptr [ecx + 0x1c] */
  { double v = F32((uint32_t)(ecx + 0x1cu)); FPUSH(v); }
/* 899a18: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 899a1b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 899a1d: fld dword ptr [ecx + 0x18] */
  { double v = F32((uint32_t)(ecx + 0x18u)); FPUSH(v); }
/* 899a20: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 899a22: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 899a24: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* 899a27: fstp dword ptr [edx + 0x34] */
  WF32((uint32_t)(edx + 0x34u), ST0); FPOP();
/* 899a2a: fld dword ptr [ecx + 0x2c] */
  { double v = F32((uint32_t)(ecx + 0x2cu)); FPUSH(v); }
/* 899a2d: fmul dword ptr [eax + 8] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x8u)));
/* 899a30: fld dword ptr [ecx + 0x28] */
  { double v = F32((uint32_t)(ecx + 0x28u)); FPUSH(v); }
/* 899a33: fmul dword ptr [eax + 4] */
  ST0 = ST0 * (F32((uint32_t)(eax + 0x4u)));
/* 899a36: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 899a38: fld dword ptr [ecx + 0x24] */
  { double v = F32((uint32_t)(ecx + 0x24u)); FPUSH(v); }
/* 899a3b: fmul dword ptr [eax] */
  ST0 = ST0 * (F32((uint32_t)(eax)));
/* 899a3d: mov eax, dword ptr [ebp - 0x208] */
  eax = R32((uint32_t)(ebp + 0xfffffdf8u));
/* 899a43: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 899a45: fadd dword ptr [ecx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x8u)));
/* 899a48: mov ecx, dword ptr [ebp - 0x13c] */
  ecx = R32((uint32_t)(ebp + 0xfffffec4u));
/* 899a4e: mov dword ptr [edx + 0x14], eax */
  W32((uint32_t)(edx + 0x14u), eax);
/* 899a51: mov eax, dword ptr [ebp - 0xb0] */
  eax = R32((uint32_t)(ebp + 0xffffff50u));
/* 899a57: fstp dword ptr [edx + 0x38] */
  WF32((uint32_t)(edx + 0x38u), ST0); FPOP();
/* 899a5a: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 899a5c: mov dword ptr [edx + 0x18], ecx */
  W32((uint32_t)(edx + 0x18u), ecx);
/* 899a5f: mov ecx, dword ptr [ebp - 0x204] */
  ecx = R32((uint32_t)(ebp + 0xfffffdfcu));
/* 899a65: fstp dword ptr [edx] */
  WF32((uint32_t)(edx), ST0); FPOP();
/* 899a67: mov dword ptr [edx + 0x20], eax */
  W32((uint32_t)(edx + 0x20u), eax);
/* 899a6a: mov eax, dword ptr [ebp - 0x138] */
  eax = R32((uint32_t)(ebp + 0xfffffec8u));
/* 899a70: fstp dword ptr [edx + 4] */
  WF32((uint32_t)(edx + 0x4u), ST0); FPOP();
/* 899a73: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 899a75: mov dword ptr [edx + 0x3c], 0x3f800000 */
  W32((uint32_t)(edx + 0x3cu), 0x3f800000u);
/* 899a7c: fstp dword ptr [edx + 8] */
  WF32((uint32_t)(edx + 0x8u), ST0); FPOP();
/* 899a7f: mov dword ptr [edx + 0xc], ebx */
  W32((uint32_t)(edx + 0xcu), ebx);
/* 899a82: mov dword ptr [edx + 0x1c], ebx */
  W32((uint32_t)(edx + 0x1cu), ebx);
/* 899a85: fstp dword ptr [edx + 0x10] */
  WF32((uint32_t)(edx + 0x10u), ST0); FPOP();
/* 899a88: mov dword ptr [edx + 0x24], ecx */
  W32((uint32_t)(edx + 0x24u), ecx);
/* 899a8b: mov dword ptr [edx + 0x28], eax */
  W32((uint32_t)(edx + 0x28u), eax);
/* 899a8e: mov dword ptr [edx + 0x2c], ebx */
  W32((uint32_t)(edx + 0x2cu), ebx);
/* 899a91: jmp 0x8997e0 */
  goto L_8997e0;
L_899a96: /* 899a96: or eax, 0xffffffff */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a | b);
  eax = r;
  }
/* 899a99: xor edx, edx */
  edx = 0;
/* 899a9b: mov dword ptr [ebp - 0x24], ebx */
  W32((uint32_t)(ebp + 0xffffffdcu), ebx);
/* 899a9e: mov dword ptr [ebp - 0xc4], eax */
  W32((uint32_t)(ebp + 0xffffff3cu), eax);
/* 899aa4: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 899aa7: mov dword ptr [ebp - 0x68], edx */
  W32((uint32_t)(ebp + 0xffffff98u), edx);
/* 899aaa: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_899ab0: /* 899ab0: mov eax, dword ptr [ecx + 0xf0] */
  eax = R32((uint32_t)(ecx + 0xf0u));
/* 899ab6: mov esi, dword ptr [edi + 0x1ec] */
  esi = R32((uint32_t)(edi + 0x1ecu));
/* 899abc: imul eax, eax, 0x11c */
  { int64_t r = (int64_t)(int32_t)(eax) * (int64_t)(int32_t)(0x11cu);
  eax = (uint32_t)r;
  }
/* 899ac2: add eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 899ac4: cmp edx, dword ptr [eax + 0x2c] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x2cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 899ac7: jge 0x899e4a */
  if ((sf == of)) goto L_899e4a;
L_899acd: /* 899acd: mov eax, dword ptr [eax + 0x28] */
  eax = R32((uint32_t)(eax + 0x28u));
/* 899ad0: lea edx, [edx + edx*4] */
  edx = (uint32_t)(edx + edx*4);
/* 899ad3: lea ebx, [eax + edx*4] */
  ebx = (uint32_t)(eax + edx*4);
/* 899ad6: movzx eax, word ptr [ebx + 0xc] */
  eax = (uint32_t)(R16((uint32_t)(ebx + 0xcu)));
/* 899ada: cmp dword ptr [ebp - 0x40], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffc0u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 899add: mov dword ptr [ebp - 0x18], ebx */
  W32((uint32_t)(ebp + 0xffffffe8u), ebx);
/* 899ae0: je 0x899b3e */
  if (zf) goto L_899b3e;
L_899ae2: /* 899ae2: cmp dword ptr [ecx + 0xb8], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + 0xb8u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 899ae8: jle 0x899b3e */
  if ((zf || sf != of)) goto L_899b3e;
L_899aea: /* 899aea: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899aed: mov edi, esp */
  edi = esp;
/* 899aef: mov ecx, 0x10 */
  ecx = 0x10u;
/* 899af4: lea esi, [ebp - 0x200] */
  esi = (uint32_t)(ebp + 0xfffffe00u);
/* 899afa: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 899afc: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 899b02: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 899b03: mov ecx, eax */
  ecx = eax;
/* 899b05: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 899b08: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 899b0b: shl ecx, 6 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 6;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 899b0e: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 899b10: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x899b16u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 899b16: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899b19: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899b1b: lea eax, [ebp - 0x264] */
  eax = (uint32_t)(ebp + 0xfffffd9cu);
/* 899b21: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899b22: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899b24: mov byte ptr [ebp - 4], 3 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x3u);
/* 899b28: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x899b2bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899b2b: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 899b31: mov byte ptr [ebp - 4], 2 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x2u);
/* 899b35: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x899b3bu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 899b3b: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_899b3e: /* 899b3e: cmp word ptr [ebx + 0x12], 0 */
  { uint16_t a = (uint16_t)(R16((uint32_t)(ebx + 0x12u))); uint16_t b = (uint16_t)(0x0u);
  uint16_t r = (uint16_t)(a - b);
  zf = (r) == 0;
  }
/* 899b43: je 0x899e39 */
  if (zf) goto L_899e39;
L_899b49: /* 899b49: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
/* 899b4c: movzx eax, word ptr [esi] */
  eax = (uint32_t)(R16((uint32_t)(esi)));
/* 899b4f: cmp eax, dword ptr [ebp - 0xc4] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffff3cu)));
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 899b55: je 0x899c26 */
  if (zf) goto L_899c26;
L_899b5b: /* 899b5b: mov edi, dword ptr [ebp - 0x6c] */
  edi = R32((uint32_t)(ebp + 0xffffff94u));
/* 899b5e: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899b60: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 899b61: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 899b64: mov edi, dword ptr [edi + 0xcc] */
  edi = R32((uint32_t)(edi + 0xccu));
/* 899b6a: mov dword ptr [ebp - 0xc4], eax */
  W32((uint32_t)(ebp + 0xffffff3cu), eax);
/* 899b70: mov eax, dword ptr [edi + eax*8 + 4] */
  eax = R32((uint32_t)(edi + eax*8 + 0x4u));
/* 899b74: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899b75: call dword ptr [edx + 0x110] */
  { uint32_t t = R32((uint32_t)(edx + 0x110u)); esp -= 4; W32(esp, 0x899b7bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899b7b: mov ecx, dword ptr [ebp - 0x98] */
  ecx = R32((uint32_t)(ebp + 0xffffff68u));
/* 899b81: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899b83: mov dword ptr [ebp - 0x24], eax */
  W32((uint32_t)(ebp + 0xffffffdcu), eax);
/* 899b86: je 0x899c17 */
  if (zf) goto L_899c17;
L_899b8c: /* 899b8c: mov eax, dword ptr [0xce1d30] */
  eax = R32((uint32_t)(0xce1d30u));
/* 899b91: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899b93: jne 0x899c12 */
  if (!zf) goto L_899c12;
L_899b95: /* 899b95: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899b97: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 899b9a: call dword ptr [0xcfa2c8] */
  esp -= 4; W32(esp, 0x899ba0u); SPILL(); f_4e2ee1(); if (g_unwind) return; /* Core!??0FName@@QAE@W4EName@@@Z */ RELOAD();
/* 899ba0: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 899ba5: mov ecx, 0xb88020 */
  ecx = 0xb88020u;
/* 899baa: call dword ptr [0xcfa554] */
  esp -= 4; W32(esp, 0x899bb0u); SPILL(); f_4e20e5(); if (g_unwind) return; /* Core!?IsChildOf@UStruct@@QBEHPBV1@@Z */ RELOAD();
/* 899bb0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899bb2: jne 0x899bcc */
  if (!zf) goto L_899bcc;
L_899bb4: /* 899bb4: push 0x47e */
  { uint32_t v = 0x47eu; esp -= 4; W32(esp, v); }
/* 899bb9: push 0xae8610 */
  { uint32_t v = 0xae8610u; esp -= 4; W32(esp, v); }
/* 899bbe: push 0xae8654 */
  { uint32_t v = 0xae8654u; esp -= 4; W32(esp, v); }
/* 899bc3: call dword ptr [0xcfa2fc] */
  esp -= 4; W32(esp, 0x899bc9u); SPILL(); f_4e33a5(); if (g_unwind) return; /* Core!?appFailAssert@@YAXPBD0H@Z */ RELOAD();
/* 899bc9: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_899bcc: /* 899bcc: call dword ptr [0xcfa550] */
  esp -= 4; W32(esp, 0x899bd2u); SPILL(); f_4e280b(); if (g_unwind) return; /* Core!?GetTransientPackage@UObject@@SAPAVUPackage@@XZ */ RELOAD();
/* 899bd2: mov ecx, dword ptr [0xcfa1e8] */
  ecx = R32((uint32_t)(0xcfa1e8u));
/* 899bd8: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899bda: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 899bdd: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899bdf: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899be0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899be2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899be4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 899be5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899be6: push 0xb88020 */
  { uint32_t v = 0xb88020u; esp -= 4; W32(esp, v); }
/* 899beb: call dword ptr [0xcfa54c] */
  esp -= 4; W32(esp, 0x899bf1u); SPILL(); f_4e335a(); if (g_unwind) return; /* Core!?StaticConstructObject@UObject@@SAPAV1@PAVUClass@@PAV1@VFName@@K1PAVFOutputDevice@@1@Z */ RELOAD();
/* 899bf1: mov ecx, dword ptr [0xb7d820] */
  ecx = R32((uint32_t)(0xb7d820u));
/* 899bf7: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 899bfa: push 0xce1d30 */
  { uint32_t v = 0xce1d30u; esp -= 4; W32(esp, v); }
/* 899bff: mov dword ptr [0xce1d30], eax */
  W32((uint32_t)(0xce1d30u), eax);
/* 899c04: call 0x6c1203 */
  esp -= 4; W32(esp, 0x899c09u); SPILL(); f_6c1203(); if (g_unwind) return; RELOAD();
/* 899c09: mov eax, dword ptr [0xce1d30] */
  eax = R32((uint32_t)(0xce1d30u));
/* 899c0e: or dword ptr [eax + 0x5c], 2 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x5cu))); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a | b);
  W32((uint32_t)(eax + 0x5cu), r);
  }
L_899c12: /* 899c12: mov eax, dword ptr [0xce1d30] */
  eax = R32((uint32_t)(0xce1d30u));
L_899c17: /* 899c17: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899c1a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899c1c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899c1e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899c20: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899c22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899c23: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x899c26u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_899c26: /* 899c26: movzx edx, word ptr [esi + 6] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x6u)));
/* 899c2a: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899c2d: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899c2f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899c30: movzx edx, word ptr [esi + 4] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x4u)));
/* 899c34: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899c35: movzx edx, word ptr [esi + 0x12] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x12u)));
/* 899c39: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899c3a: movzx edx, word ptr [esi + 2] */
  edx = (uint32_t)(R16((uint32_t)(esi + 0x2u)));
/* 899c3e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899c3f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899c41: call dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); esp -= 4; W32(esp, 0x899c44u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899c44: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 899c47: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 899c49: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899c4b: call dword ptr [edx + 0x170] */
  { uint32_t t = R32((uint32_t)(edx + 0x170u)); esp -= 4; W32(esp, 0x899c51u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899c51: mov ecx, dword ptr [eax + 0x264] */
  ecx = R32((uint32_t)(eax + 0x264u));
/* 899c57: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899c59: mov dword ptr [ebp - 0x74], eax */
  W32((uint32_t)(ebp + 0xffffff8cu), eax);
/* 899c5c: jne 0x899c69 */
  if (!zf) goto L_899c69;
L_899c5e: /* 899c5e: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 899c61: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899c63: je 0x899e36 */
  if (zf) goto L_899e36;
L_899c69: /* 899c69: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 899c6c: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 899c6f: call 0x6c84a9 */
  esp -= 4; W32(esp, 0x899c74u); SPILL(); f_6c84a9(); if (g_unwind) return; RELOAD();
/* 899c74: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899c76: jne 0x899e36 */
  if (!zf) goto L_899e36;
L_899c7c: /* 899c7c: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 899c7f: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 899c82: mov eax, dword ptr [edx + 0x30] */
  eax = R32((uint32_t)(edx + 0x30u));
/* 899c85: test dword ptr [eax + 0x534], 0x20000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0x534u))); uint32_t b = (uint32_t)(0x20000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899c8f: je 0x899e36 */
  if (zf) goto L_899e36;
L_899c95: /* 899c95: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899c98: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899c9a: mov dword ptr [ebp - 0xc4], 0xffffffff */
  W32((uint32_t)(ebp + 0xffffff3cu), 0xffffffffu);
/* 899ca4: call dword ptr [edx] */
  { uint32_t t = R32((uint32_t)(edx)); esp -= 4; W32(esp, 0x899ca6u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899ca6: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899ca9: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899cab: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 899cad: call dword ptr [eax + 0x48] */
  { uint32_t t = R32((uint32_t)(eax + 0x48u)); esp -= 4; W32(esp, 0x899cb0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899cb0: sub esp, 0x10 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899cb3: mov ecx, esp */
  ecx = esp;
/* 899cb5: mov dword ptr [ebp - 0x58], esp */
  W32((uint32_t)(ebp + 0xffffffa8u), esp);
/* 899cb8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899cba: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899cbd: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 899cc4: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 899cc7: mov edx, esp */
  edx = esp;
/* 899cc9: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 899ccb: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 899cd2: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 899cd5: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 899cd8: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 899cdf: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 899ce2: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 899ce5: call dword ptr [0xcfa5a0] */
  esp -= 4; W32(esp, 0x899cebu); SPILL(); f_4e3a21(); if (g_unwind) return; /* Core!??0FSphere@@QAE@VFVector@@M@Z */ RELOAD();
/* 899ceb: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899cee: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899cf0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899cf2: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899cf4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899cf6: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899cf8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899cfa: call dword ptr [edx + 0x24] */
  { uint32_t t = R32((uint32_t)(edx + 0x24u)); esp -= 4; W32(esp, 0x899cfdu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899cfd: xor ebx, ebx */
  ebx = 0;
/* 899cff: nop  */
L_899d00: /* 899d00: mov eax, dword ptr [ebp - 0x74] */
  eax = R32((uint32_t)(ebp + 0xffffff8cu));
/* 899d03: cmp ebx, dword ptr [eax + 0x264] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x264u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 899d09: jge 0x899daa */
  if ((sf == of)) goto L_899daa;
L_899d0f: /* 899d0f: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 899d12: mov edi, eax */
  edi = eax;
/* 899d14: mov ecx, dword ptr [edi + 0x260] */
  ecx = R32((uint32_t)(edi + 0x260u));
/* 899d1a: mov esi, dword ptr [ecx + ebx*4] */
  esi = R32((uint32_t)(ecx + ebx*4));
/* 899d1d: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 899d1f: mov ecx, dword ptr [eax + 0xb0] */
  ecx = R32((uint32_t)(eax + 0xb0u));
/* 899d25: fld dword ptr [ecx + 0x3ac] */
  { double v = F32((uint32_t)(ecx + 0x3acu)); FPUSH(v); }
/* 899d2b: add edi, 0x260 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x260u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 899d31: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899d34: mov ecx, esi */
  ecx = esi;
/* 899d36: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 899d39: call 0x6ca46b */
  esp -= 4; W32(esp, 0x899d3eu); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 899d3e: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899d40: jne 0x899d50 */
  if (!zf) goto L_899d50;
L_899d42: /* 899d42: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 899d44: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 899d45: mov ecx, edi */
  ecx = edi;
/* 899d47: call 0x6cb320 */
  esp -= 4; W32(esp, 0x899d4cu); SPILL(); f_6cb320(); if (g_unwind) return; RELOAD();
/* 899d4c: dec ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - 1);
  ebx = r;
  }
/* 899d4d: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 899d4e: jmp 0x899d00 */
  goto L_899d00;
L_899d50: /* 899d50: test dword ptr [ebp - 0x94], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff6cu))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899d5a: je 0x899d65 */
  if (zf) goto L_899d65;
L_899d5c: /* 899d5c: test byte ptr [esi + 0x15c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x15cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 899d63: je 0x899da4 */
  if (zf) goto L_899da4;
L_899d65: /* 899d65: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 899d68: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 899d6b: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899d6c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899d6d: mov ecx, esi */
  ecx = esi;
/* 899d6f: call 0x6c7adb */
  esp -= 4; W32(esp, 0x899d74u); SPILL(); f_6c7adb(); if (g_unwind) return; RELOAD();
/* 899d74: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899d77: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899d79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899d7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899d7d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899d7f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899d80: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x899d83u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899d83: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 899d86: movzx esi, word ptr [eax + 6] */
  esi = (uint32_t)(R16((uint32_t)(eax + 0x6u)));
/* 899d8a: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899d8d: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899d8f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 899d90: movzx esi, word ptr [eax + 4] */
  esi = (uint32_t)(R16((uint32_t)(eax + 0x4u)));
/* 899d94: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 899d95: movzx esi, word ptr [eax + 0x12] */
  esi = (uint32_t)(R16((uint32_t)(eax + 0x12u)));
/* 899d99: movzx eax, word ptr [eax + 2] */
  eax = (uint32_t)(R16((uint32_t)(eax + 0x2u)));
/* 899d9d: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 899d9e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899d9f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899da1: call dword ptr [edx + 0x5c] */
  { uint32_t t = R32((uint32_t)(edx + 0x5cu)); esp -= 4; W32(esp, 0x899da4u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_899da4: /* 899da4: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 899da5: jmp 0x899d00 */
  goto L_899d00;
L_899daa: /* 899daa: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* 899dad: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
L_899db0: /* 899db0: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899db2: je 0x899e2e */
  if (zf) goto L_899e2e;
L_899db4: /* 899db4: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 899db7: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899db9: mov eax, dword ptr [edx + 0xb0] */
  eax = R32((uint32_t)(edx + 0xb0u));
/* 899dbf: mov esi, dword ptr [ebx] */
  esi = R32((uint32_t)(ebx));
/* 899dc1: fld dword ptr [eax + 0x3ac] */
  { double v = F32((uint32_t)(eax + 0x3acu)); FPUSH(v); }
/* 899dc7: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899dca: mov ecx, esi */
  ecx = esi;
/* 899dcc: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 899dcf: call 0x6ca46b */
  esp -= 4; W32(esp, 0x899dd4u); SPILL(); f_6ca46b(); if (g_unwind) return; RELOAD();
/* 899dd4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899dd6: je 0x899e29 */
  if (zf) goto L_899e29;
L_899dd8: /* 899dd8: test dword ptr [ebp - 0x94], 0x400000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff6cu))); uint32_t b = (uint32_t)(0x400000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899de2: je 0x899ded */
  if (zf) goto L_899ded;
L_899de4: /* 899de4: test byte ptr [esi + 0x15c], 2 */
  { uint8_t a = (uint8_t)(R8((uint32_t)(esi + 0x15cu))); uint8_t b = (uint8_t)(0x2u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 899deb: je 0x899e29 */
  if (zf) goto L_899e29;
L_899ded: /* 899ded: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 899df0: mov edx, dword ptr [ebp + 0xc] */
  edx = R32((uint32_t)(ebp + 0xcu));
/* 899df3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 899df4: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899df5: mov ecx, esi */
  ecx = esi;
/* 899df7: call 0x6c7adb */
  esp -= 4; W32(esp, 0x899dfcu); SPILL(); f_6c7adb(); if (g_unwind) return; RELOAD();
/* 899dfc: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899dff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 899e01: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899e03: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899e05: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899e07: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899e08: call dword ptr [edx + 0x3c] */
  { uint32_t t = R32((uint32_t)(edx + 0x3cu)); esp -= 4; W32(esp, 0x899e0bu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899e0b: movzx edx, word ptr [edi + 6] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x6u)));
/* 899e0f: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899e12: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899e14: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899e15: movzx edx, word ptr [edi + 4] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x4u)));
/* 899e19: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899e1a: movzx edx, word ptr [edi + 0x12] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x12u)));
/* 899e1e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899e1f: movzx edx, word ptr [edi + 2] */
  edx = (uint32_t)(R16((uint32_t)(edi + 0x2u)));
/* 899e23: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899e24: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899e26: call dword ptr [eax + 0x5c] */
  { uint32_t t = R32((uint32_t)(eax + 0x5cu)); esp -= 4; W32(esp, 0x899e29u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_899e29: /* 899e29: mov ebx, dword ptr [ebx + 4] */
  ebx = R32((uint32_t)(ebx + 0x4u));
/* 899e2c: jmp 0x899db0 */
  goto L_899db0;
L_899e2e: /* 899e2e: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899e31: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899e33: call dword ptr [eax + 4] */
  { uint32_t t = R32((uint32_t)(eax + 0x4u)); esp -= 4; W32(esp, 0x899e36u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
L_899e36: /* 899e36: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
L_899e39: /* 899e39: mov eax, dword ptr [ebp - 0x68] */
  eax = R32((uint32_t)(ebp + 0xffffff98u));
/* 899e3c: mov edi, dword ptr [ebp - 0x64] */
  edi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 899e3f: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 899e40: mov dword ptr [ebp - 0x68], eax */
  W32((uint32_t)(ebp + 0xffffff98u), eax);
/* 899e43: mov edx, eax */
  edx = eax;
/* 899e45: jmp 0x899ab0 */
  goto L_899ab0;
L_899e4a: /* 899e4a: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 899e4d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 899e4e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899e50: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 899e53: mov byte ptr [ebp - 4], 4 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x4u);
/* 899e57: call 0x6c7a18 */
  esp -= 4; W32(esp, 0x899e5cu); SPILL(); f_6c7a18(); if (g_unwind) return; RELOAD();
/* 899e5c: lea ecx, [ebp - 0x30] */
  ecx = (uint32_t)(ebp + 0xffffffd0u);
/* 899e5f: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 899e63: call dword ptr [0xcfa3fc] */
  esp -= 4; W32(esp, 0x899e69u); SPILL(); f_4e35b7(); if (g_unwind) return; /* Core!??1FArray@@QAE@XZ */ RELOAD();
L_899e69: /* 899e69: rdtsc  */
  { uint64_t t = host_rdtsc(); eax = (uint32_t)t; edx = (uint32_t)(t >> 32); }
/* 899e6b: mov edx, dword ptr [ebp - 0xc0] */
  edx = R32((uint32_t)(ebp + 0xffffff40u));
/* 899e71: mov ecx, dword ptr [0xce8220] */
  ecx = R32((uint32_t)(0xce8220u));
/* 899e77: lea eax, [edx + eax - 0xc] */
  eax = (uint32_t)(edx + eax + 0xfffffff4u);
/* 899e7b: mov edx, dword ptr [0xce83d0] */
  edx = R32((uint32_t)(0xce83d0u));
/* 899e81: mov esi, dword ptr [ecx + edx*4] */
  esi = R32((uint32_t)(ecx + edx*4));
/* 899e84: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 899e86: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 899e89: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899e8b: mov dword ptr [ecx + edx*4], esi */
  W32((uint32_t)(ecx + edx*4), esi);
/* 899e8e: je 0x89a796 */
  if (zf) goto L_89a796;
L_899e94: /* 899e94: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 899e97: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899e99: lea edx, [ebp - 0x200] */
  edx = (uint32_t)(ebp + 0xfffffe00u);
/* 899e9f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899ea0: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 899ea2: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x899ea5u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 899ea5: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 899ea8: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 899eaa: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899eab: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 899eb1: call 0x6c460b */
  esp -= 4; W32(esp, 0x899eb6u); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 899eb6: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 899eb9: mov edi, dword ptr [eax + 0x170] */
  edi = R32((uint32_t)(eax + 0x170u));
/* 899ebf: mov ecx, dword ptr [eax + 0x17c] */
  ecx = R32((uint32_t)(eax + 0x17cu));
/* 899ec5: mov edx, dword ptr [ebp - 0x6c] */
  edx = R32((uint32_t)(ebp + 0xffffff94u));
/* 899ec8: test dword ptr [edx + 0x88], 0x40000000 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + 0x88u))); uint32_t b = (uint32_t)(0x40000000u);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899ed2: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 899ed6: mov dword ptr [ebp - 0x44], edi */
  W32((uint32_t)(ebp + 0xffffffbcu), edi);
/* 899ed9: mov dword ptr [ebp - 0x54], ecx */
  W32((uint32_t)(ebp + 0xffffffacu), ecx);
/* 899edc: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* 899ee6: lea eax, [ebp - 0xac] */
  eax = (uint32_t)(ebp + 0xffffff54u);
/* 899eec: je 0x899f0e */
  if (zf) goto L_899f0e;
L_899eee: /* 899eee: mov dword ptr [ebp - 0xac], 0x3e99999a */
  W32((uint32_t)(ebp + 0xffffff54u), 0x3e99999au);
/* 899ef8: mov dword ptr [ebp - 0xa8], 0x3f99999a */
  W32((uint32_t)(ebp + 0xffffff58u), 0x3f99999au);
/* 899f02: mov dword ptr [ebp - 0xa4], 0x3e99999a */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x3e99999au);
/* 899f0c: jmp 0x899f2c */
  goto L_899f2c;
L_899f0e: /* 899f0e: mov dword ptr [ebp - 0xac], 0x40000000 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x40000000u);
/* 899f18: mov dword ptr [ebp - 0xa8], 0x40000000 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x40000000u);
/* 899f22: mov dword ptr [ebp - 0xa4], 0x40000000 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x40000000u);
L_899f2c: /* 899f2c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 899f2d: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 899f30: call 0x6c576d */
  esp -= 4; W32(esp, 0x899f35u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 899f35: mov ebx, dword ptr [ebp - 0x1c] */
  ebx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 899f38: xor esi, esi */
  esi = 0;
/* 899f3a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_899f40: /* 899f40: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 899f43: cmp esi, dword ptr [eax + 0x174] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x174u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 899f49: jge 0x899f9a */
  if ((sf == of)) goto L_899f9a;
L_899f4b: /* 899f4b: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 899f4e: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* 899f51: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 899f53: je 0x899f97 */
  if (zf) goto L_899f97;
L_899f55: /* 899f55: lea ecx, [eax + eax*2] */
  ecx = (uint32_t)(eax + eax*2);
/* 899f58: lea edx, [edi + ecx*4] */
  edx = (uint32_t)(edi + ecx*4);
/* 899f5b: mov ecx, dword ptr [edx] */
  ecx = R32((uint32_t)(edx));
/* 899f5d: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 899f5e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899f61: mov eax, esp */
  eax = esp;
/* 899f63: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 899f65: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 899f68: mov edx, dword ptr [edx + 8] */
  edx = R32((uint32_t)(edx + 0x8u));
/* 899f6b: mov dword ptr [eax + 4], ecx */
  W32((uint32_t)(eax + 0x4u), ecx);
/* 899f6e: mov dword ptr [eax + 8], edx */
  W32((uint32_t)(eax + 0x8u), edx);
/* 899f71: lea eax, [esi + esi*2] */
  eax = (uint32_t)(esi + esi*2);
/* 899f74: lea ecx, [edi + eax*4] */
  ecx = (uint32_t)(edi + eax*4);
/* 899f77: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 899f79: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899f7c: mov edx, esp */
  edx = esp;
/* 899f7e: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 899f80: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* 899f83: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 899f86: mov dword ptr [edx + 4], eax */
  W32((uint32_t)(edx + 0x4u), eax);
/* 899f89: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 899f8c: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 899f92: call 0x6cc74d */
  esp -= 4; W32(esp, 0x899f97u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
L_899f97: /* 899f97: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* 899f98: jmp 0x899f40 */
  goto L_899f40;
L_899f9a: /* 899f9a: mov ecx, dword ptr [eax + 0x174] */
  ecx = R32((uint32_t)(eax + 0x174u));
/* 899fa0: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 899fa2: je 0x89a003 */
  if (zf) goto L_89a003;
L_899fa4: /* 899fa4: mov ecx, dword ptr [edi] */
  ecx = R32((uint32_t)(edi));
/* 899fa6: mov byte ptr [ebp - 0x18], 0xf5 */
  W8((uint32_t)(ebp + 0xffffffe8u), 0xf5u);
/* 899faa: mov byte ptr [ebp - 0x17], 0 */
  W8((uint32_t)(ebp + 0xffffffe9u), 0x0u);
/* 899fae: mov byte ptr [ebp - 0x16], 0xdc */
  W8((uint32_t)(ebp + 0xffffffeau), 0xdcu);
/* 899fb2: mov byte ptr [ebp - 0x15], 0 */
  W8((uint32_t)(ebp + 0xffffffebu), 0x0u);
/* 899fb6: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 899fb9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 899fba: mov edx, dword ptr [edi + 4] */
  edx = R32((uint32_t)(edi + 0x4u));
/* 899fbd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899fc0: mov eax, esp */
  eax = esp;
/* 899fc2: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 899fc4: mov ecx, dword ptr [edi + 8] */
  ecx = R32((uint32_t)(edi + 0x8u));
/* 899fc7: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 899fca: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 899fcd: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 899fd0: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 899fd7: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 899fda: mov edx, esp */
  edx = esp;
/* 899fdc: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 899fde: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 899fe5: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 899fe8: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 899feb: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 899ff2: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 899ff5: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 899ffb: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 899ffe: call 0x6cc74d */
  esp -= 4; W32(esp, 0x89a003u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
L_89a003: /* 89a003: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89a005: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a00b: call 0x6c6f6e */
  esp -= 4; W32(esp, 0x89a010u); SPILL(); f_6c6f6e(); if (g_unwind) return; RELOAD();
/* 89a010: mov eax, dword ptr [0xcfa350] */
  eax = R32((uint32_t)(0xcfa350u));
/* 89a015: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89a018: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89a01a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89a01b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89a01d: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x89a020u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89a020: lea ecx, [ebp - 0xac] */
  ecx = (uint32_t)(ebp + 0xffffff54u);
/* 89a026: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89a027: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 89a02a: mov dword ptr [ebp - 0xac], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x3f800000u);
/* 89a034: mov dword ptr [ebp - 0xa8], 0 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x0u);
/* 89a03e: mov dword ptr [ebp - 0xa4], 0 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x0u);
/* 89a048: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* 89a052: call 0x6c576d */
  esp -= 4; W32(esp, 0x89a057u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 89a057: lea edx, [ebp - 0xac] */
  edx = (uint32_t)(ebp + 0xffffff54u);
/* 89a05d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89a05e: lea ecx, [ebp - 0xc0] */
  ecx = (uint32_t)(ebp + 0xffffff40u);
/* 89a064: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 89a06e: mov dword ptr [ebp - 0xa8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x3f800000u);
/* 89a078: mov dword ptr [ebp - 0xa4], 0 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x0u);
/* 89a082: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* 89a08c: call 0x6c576d */
  esp -= 4; W32(esp, 0x89a091u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 89a091: lea eax, [ebp - 0xac] */
  eax = (uint32_t)(ebp + 0xffffff54u);
/* 89a097: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89a098: lea ecx, [ebp - 0x68] */
  ecx = (uint32_t)(ebp + 0xffffff98u);
/* 89a09b: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 89a0a5: mov dword ptr [ebp - 0xa8], 0 */
  W32((uint32_t)(ebp + 0xffffff58u), 0x0u);
/* 89a0af: mov dword ptr [ebp - 0xa4], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x3f800000u);
/* 89a0b9: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* 89a0c3: call 0x6c576d */
  esp -= 4; W32(esp, 0x89a0c8u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 89a0c8: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 89a0cb: xor ebx, ebx */
  ebx = 0;
/* 89a0cd: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_89a0d0: /* 89a0d0: mov ecx, dword ptr [eax + 0x174] */
  ecx = R32((uint32_t)(eax + 0x174u));
/* 89a0d6: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89a0d8: jge 0x89a769 */
  if ((sf == of)) goto L_89a769;
L_89a0de: /* 89a0de: mov edx, dword ptr [ebp - 0x54] */
  edx = R32((uint32_t)(ebp + 0xffffffacu));
/* 89a0e1: cmp dword ptr [edx + ebx*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(edx + ebx*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89a0e4: je 0x89a763 */
  if (zf) goto L_89a763;
L_89a0ea: /* 89a0ea: cmp dword ptr [eax + 0xb8], ecx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax + 0xb8u))); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89a0f0: jl 0x89a763 */
  if ((sf != of)) goto L_89a763;
L_89a0f6: /* 89a0f6: mov edx, dword ptr [ebp - 0x44] */
  edx = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89a0f9: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 89a0fc: lea ecx, [edx + ecx*4] */
  ecx = (uint32_t)(edx + ecx*4);
/* 89a0ff: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89a101: mov dword ptr [ebp - 0x3c], edx */
  W32((uint32_t)(ebp + 0xffffffc4u), edx);
/* 89a104: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 89a107: mov ecx, dword ptr [ecx + 8] */
  ecx = R32((uint32_t)(ecx + 0x8u));
/* 89a10a: mov dword ptr [ebp - 0x38], edx */
  W32((uint32_t)(ebp + 0xffffffc8u), edx);
/* 89a10d: mov dword ptr [ebp - 0x34], ecx */
  W32((uint32_t)(ebp + 0xffffffccu), ecx);
/* 89a110: lea edx, [ebp - 0x264] */
  edx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89a116: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89a117: mov edx, dword ptr [eax + 0xb4] */
  edx = R32((uint32_t)(eax + 0xb4u));
/* 89a11d: lea ecx, [ebx + ebx*2] */
  ecx = (uint32_t)(ebx + ebx*2);
/* 89a120: shl ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ecx = r;
  }
/* 89a123: add ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89a125: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x89a12bu); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 89a12b: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a12e: mov edi, esp */
  edi = esp;
/* 89a130: mov ecx, 0x10 */
  ecx = 0x10u;
/* 89a135: lea esi, [ebp - 0x200] */
  esi = (uint32_t)(ebp + 0xfffffe00u);
/* 89a13b: lea eax, [ebp - 0x2a4] */
  eax = (uint32_t)(ebp + 0xfffffd5cu);
/* 89a141: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89a143: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89a144: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89a14a: mov byte ptr [ebp - 4], 6 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x6u);
/* 89a14e: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x89a154u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 89a154: mov esi, eax */
  esi = eax;
/* 89a156: mov ecx, 0x10 */
  ecx = 0x10u;
/* 89a15b: lea edi, [ebp - 0x264] */
  edi = (uint32_t)(ebp + 0xfffffd9cu);
/* 89a161: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89a163: lea ecx, [ebp - 0x2a4] */
  ecx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89a169: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89a16fu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89a16f: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 89a172: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 89a175: mov eax, dword ptr [ebp - 0x34] */
  eax = R32((uint32_t)(ebp + 0xffffffccu));
/* 89a178: mov dword ptr [ebp - 0x154], ecx */
  W32((uint32_t)(ebp + 0xfffffeacu), ecx);
/* 89a17e: mov dword ptr [ebp - 0x150], edx */
  W32((uint32_t)(ebp + 0xfffffeb0u), edx);
/* 89a184: lea ecx, [ebp - 0x154] */
  ecx = (uint32_t)(ebp + 0xfffffeacu);
/* 89a18a: lea edx, [ebp - 0x200] */
  edx = (uint32_t)(ebp + 0xfffffe00u);
/* 89a190: mov dword ptr [ebp - 0x14c], eax */
  W32((uint32_t)(ebp + 0xfffffeb4u), eax);
/* 89a196: mov dword ptr [ebp - 0x148], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeb8u), 0x3f800000u);
/* 89a1a0: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 89a1a3: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 89a1a6: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 89a1a9: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89a1ac: lea edi, [ebp - 0xe4] */
  edi = (uint32_t)(ebp + 0xffffff1cu);
/* 89a1b2: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a1b4: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89a1b6: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a1b8: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89a1bb: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a1bd: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89a1c0: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a1c2: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89a1c5: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a1c8: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89a1cb: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a1ce: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89a1d1: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a1d4: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89a1d7: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a1da: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89a1dd: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a1df: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a1e1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a1e3: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a1e5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a1e7: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a1ea: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89a1ed: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a1f0: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89a1f3: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a1f6: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89a1f9: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a1fc: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89a1ff: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a201: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a203: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a205: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a207: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a209: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a20c: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89a20f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a212: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89a215: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a218: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89a21b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a21e: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89a221: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a223: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a225: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a227: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a229: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a22b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a22d: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89a22f: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89a231: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89a234: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89a237: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89a23a: lea eax, [ebp - 0x180] */
  eax = (uint32_t)(ebp + 0xfffffe80u);
/* 89a240: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89a246: mov dword ptr [ebp - 0x60], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffa0u), 0x3f800000u);
/* 89a24d: mov dword ptr [ebp - 0x5c], 0 */
  W32((uint32_t)(ebp + 0xffffffa4u), 0x0u);
/* 89a254: mov dword ptr [ebp - 0x58], 0 */
  W32((uint32_t)(ebp + 0xffffffa8u), 0x0u);
/* 89a25b: mov dword ptr [ebp - 0x180], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe80u), 0x3f800000u);
/* 89a265: mov dword ptr [ebp - 0x17c], 0 */
  W32((uint32_t)(ebp + 0xfffffe84u), 0x0u);
/* 89a26f: mov dword ptr [ebp - 0x178], 0 */
  W32((uint32_t)(ebp + 0xfffffe88u), 0x0u);
/* 89a279: mov dword ptr [ebp - 0x174], 0 */
  W32((uint32_t)(ebp + 0xfffffe8cu), 0x0u);
/* 89a283: mov dword ptr [ebp - 0x40], eax */
  W32((uint32_t)(ebp + 0xffffffc0u), eax);
/* 89a286: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* 89a289: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 89a28c: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89a28f: lea edi, [ebp - 0xd4] */
  edi = (uint32_t)(ebp + 0xffffff2cu);
/* 89a295: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a297: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89a299: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a29b: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89a29e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a2a0: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89a2a3: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a2a5: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89a2a8: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a2ab: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89a2ae: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a2b1: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89a2b4: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a2b7: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89a2ba: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a2bd: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89a2c0: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a2c2: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a2c4: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a2c6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a2c8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a2ca: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a2cd: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89a2d0: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a2d3: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89a2d6: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a2d9: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89a2dc: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a2df: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89a2e2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a2e4: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a2e6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a2e8: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a2ea: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a2ec: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a2ef: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89a2f2: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a2f5: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89a2f8: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a2fb: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89a2fe: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a301: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89a304: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a306: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a308: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a30a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a30c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a30e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a310: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89a312: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89a314: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89a317: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89a31a: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89a31d: mov ecx, dword ptr [ebp - 0xcc] */
  ecx = R32((uint32_t)(ebp + 0xffffff34u));
/* 89a323: mov edx, dword ptr [ebp - 0xd4] */
  edx = R32((uint32_t)(ebp + 0xffffff2cu));
/* 89a329: mov eax, dword ptr [ebp - 0xd0] */
  eax = R32((uint32_t)(ebp + 0xffffff30u));
/* 89a32f: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 89a332: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 89a335: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 89a338: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 89a33b: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x89a341u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 89a341: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 89a344: fmul dword ptr [0xa1a814] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a814u)));
/* 89a34a: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 89a34d: fmul dword ptr [0xa1a814] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a814u)));
/* 89a353: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 89a356: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 89a359: fmul dword ptr [0xa1a814] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a814u)));
/* 89a35f: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 89a365: fadd dword ptr [ebp - 0xdc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff24u)));
/* 89a36b: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 89a36e: fadd dword ptr [ebp - 0xe0] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff20u)));
/* 89a374: fld dword ptr [ebp - 0xb8] */
  { double v = F32((uint32_t)(ebp + 0xffffff48u)); FPUSH(v); }
/* 89a37a: fadd dword ptr [ebp - 0xe4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff1cu)));
/* 89a380: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 89a383: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 89a386: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 89a389: mov edx, dword ptr [ebp - 0x74] */
  edx = R32((uint32_t)(ebp + 0xffffff8cu));
/* 89a38c: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 89a38f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89a390: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* 89a393: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a396: mov eax, esp */
  eax = esp;
/* 89a398: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 89a39a: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 89a39d: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 89a3a0: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 89a3a3: mov eax, dword ptr [ebp - 0xe4] */
  eax = R32((uint32_t)(ebp + 0xffffff1cu));
/* 89a3a9: mov ecx, dword ptr [ebp - 0xe0] */
  ecx = R32((uint32_t)(ebp + 0xffffff20u));
/* 89a3af: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a3b2: mov edx, esp */
  edx = esp;
/* 89a3b4: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89a3b6: mov eax, dword ptr [ebp - 0xdc] */
  eax = R32((uint32_t)(ebp + 0xffffff24u));
/* 89a3bc: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89a3bf: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a3c5: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89a3c8: call 0x6cc74d */
  esp -= 4; W32(esp, 0x89a3cdu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 89a3cd: mov dword ptr [ebp - 0xf0], 0 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x0u);
/* 89a3d7: mov ecx, dword ptr [ebp - 0xf0] */
  ecx = R32((uint32_t)(ebp + 0xffffff10u));
/* 89a3dd: mov dword ptr [ebp - 0xec], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff14u), 0x3f800000u);
/* 89a3e7: mov edx, dword ptr [ebp - 0xec] */
  edx = R32((uint32_t)(ebp + 0xffffff14u));
/* 89a3ed: mov dword ptr [ebp - 0xe8], 0 */
  W32((uint32_t)(ebp + 0xffffff18u), 0x0u);
/* 89a3f7: mov eax, dword ptr [ebp - 0xe8] */
  eax = R32((uint32_t)(ebp + 0xffffff18u));
/* 89a3fd: mov dword ptr [ebp - 0x60], ecx */
  W32((uint32_t)(ebp + 0xffffffa0u), ecx);
/* 89a400: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 89a403: lea ecx, [ebp - 0x190] */
  ecx = (uint32_t)(ebp + 0xfffffe70u);
/* 89a409: lea edx, [ebp - 0x264] */
  edx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89a40f: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 89a412: mov dword ptr [ebp - 0x190], 0 */
  W32((uint32_t)(ebp + 0xfffffe70u), 0x0u);
/* 89a41c: mov dword ptr [ebp - 0x18c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe74u), 0x3f800000u);
/* 89a426: mov dword ptr [ebp - 0x188], 0 */
  W32((uint32_t)(ebp + 0xfffffe78u), 0x0u);
/* 89a430: mov dword ptr [ebp - 0x184], 0 */
  W32((uint32_t)(ebp + 0xfffffe7cu), 0x0u);
/* 89a43a: mov dword ptr [ebp - 0x40], ecx */
  W32((uint32_t)(ebp + 0xffffffc0u), ecx);
/* 89a43d: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 89a440: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 89a443: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89a446: lea edi, [ebp - 0x1b0] */
  edi = (uint32_t)(ebp + 0xfffffe50u);
/* 89a44c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a44e: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89a450: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a452: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89a455: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a457: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89a45a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a45c: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89a45f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a462: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89a465: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a468: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89a46b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a46e: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89a471: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a474: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89a477: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a479: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a47b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a47d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a47f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a481: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a484: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89a487: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a48a: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89a48d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a490: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89a493: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a496: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89a499: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a49b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a49d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a49f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a4a1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a4a3: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a4a6: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89a4a9: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a4ac: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89a4af: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a4b2: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89a4b5: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a4b8: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89a4bb: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a4bd: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a4bf: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a4c1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a4c3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a4c5: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a4c7: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89a4c9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89a4cb: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89a4ce: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89a4d1: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89a4d4: mov ecx, dword ptr [ebp - 0x1ac] */
  ecx = R32((uint32_t)(ebp + 0xfffffe54u));
/* 89a4da: mov eax, dword ptr [ebp - 0x1b0] */
  eax = R32((uint32_t)(ebp + 0xfffffe50u));
/* 89a4e0: mov edx, dword ptr [ebp - 0x1a8] */
  edx = R32((uint32_t)(ebp + 0xfffffe58u));
/* 89a4e6: mov dword ptr [ebp - 0x5c], ecx */
  W32((uint32_t)(ebp + 0xffffffa4u), ecx);
/* 89a4e9: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 89a4ec: mov dword ptr [ebp - 0x60], eax */
  W32((uint32_t)(ebp + 0xffffffa0u), eax);
/* 89a4ef: mov dword ptr [ebp - 0x58], edx */
  W32((uint32_t)(ebp + 0xffffffa8u), edx);
/* 89a4f2: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x89a4f8u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 89a4f8: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 89a4fb: fmul dword ptr [0xa1a814] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a814u)));
/* 89a501: mov eax, dword ptr [ebp - 0xc0] */
  eax = R32((uint32_t)(ebp + 0xffffff40u));
/* 89a507: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 89a50a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89a50b: fmul dword ptr [0xa1a814] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a814u)));
/* 89a511: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a514: mov ecx, esp */
  ecx = esp;
/* 89a516: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a519: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 89a51c: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 89a51f: fmul dword ptr [0xa1a814] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a814u)));
/* 89a525: fstp dword ptr [ebp - 0x140] */
  WF32((uint32_t)(ebp + 0xfffffec0u), ST0); FPOP();
/* 89a52b: fadd dword ptr [ebp - 0xdc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff24u)));
/* 89a531: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 89a534: fadd dword ptr [ebp - 0xe0] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff20u)));
/* 89a53a: fld dword ptr [ebp - 0x140] */
  { double v = F32((uint32_t)(ebp + 0xfffffec0u)); FPUSH(v); }
/* 89a540: fadd dword ptr [ebp - 0xe4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff1cu)));
/* 89a546: fstp dword ptr [ebp - 0x120] */
  WF32((uint32_t)(ebp + 0xfffffee0u), ST0); FPOP();
/* 89a54c: mov edx, dword ptr [ebp - 0x120] */
  edx = R32((uint32_t)(ebp + 0xfffffee0u));
/* 89a552: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89a554: fstp dword ptr [ebp - 0x11c] */
  WF32((uint32_t)(ebp + 0xfffffee4u), ST0); FPOP();
/* 89a55a: mov eax, dword ptr [ebp - 0x11c] */
  eax = R32((uint32_t)(ebp + 0xfffffee4u));
/* 89a560: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89a563: fstp dword ptr [ebp - 0x118] */
  WF32((uint32_t)(ebp + 0xfffffee8u), ST0); FPOP();
/* 89a569: mov edx, dword ptr [ebp - 0x118] */
  edx = R32((uint32_t)(ebp + 0xfffffee8u));
/* 89a56f: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89a572: mov ecx, dword ptr [ebp - 0xe4] */
  ecx = R32((uint32_t)(ebp + 0xffffff1cu));
/* 89a578: mov edx, dword ptr [ebp - 0xe0] */
  edx = R32((uint32_t)(ebp + 0xffffff20u));
/* 89a57e: mov eax, esp */
  eax = esp;
/* 89a580: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 89a582: mov ecx, dword ptr [ebp - 0xdc] */
  ecx = R32((uint32_t)(ebp + 0xffffff24u));
/* 89a588: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 89a58b: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 89a58e: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a594: call 0x6cc74d */
  esp -= 4; W32(esp, 0x89a599u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 89a599: mov dword ptr [ebp - 0x130], 0 */
  W32((uint32_t)(ebp + 0xfffffed0u), 0x0u);
/* 89a5a3: mov edx, dword ptr [ebp - 0x130] */
  edx = R32((uint32_t)(ebp + 0xfffffed0u));
/* 89a5a9: mov dword ptr [ebp - 0x12c], 0 */
  W32((uint32_t)(ebp + 0xfffffed4u), 0x0u);
/* 89a5b3: mov eax, dword ptr [ebp - 0x12c] */
  eax = R32((uint32_t)(ebp + 0xfffffed4u));
/* 89a5b9: mov dword ptr [ebp - 0x128], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffed8u), 0x3f800000u);
/* 89a5c3: mov ecx, dword ptr [ebp - 0x128] */
  ecx = R32((uint32_t)(ebp + 0xfffffed8u));
/* 89a5c9: mov dword ptr [ebp - 0x60], edx */
  W32((uint32_t)(ebp + 0xffffffa0u), edx);
/* 89a5cc: mov dword ptr [ebp - 0x5c], eax */
  W32((uint32_t)(ebp + 0xffffffa4u), eax);
/* 89a5cf: lea edx, [ebp - 0x1a0] */
  edx = (uint32_t)(ebp + 0xfffffe60u);
/* 89a5d5: lea eax, [ebp - 0x264] */
  eax = (uint32_t)(ebp + 0xfffffd9cu);
/* 89a5db: mov dword ptr [ebp - 0x58], ecx */
  W32((uint32_t)(ebp + 0xffffffa8u), ecx);
/* 89a5de: mov dword ptr [ebp - 0x1a0], 0 */
  W32((uint32_t)(ebp + 0xfffffe60u), 0x0u);
/* 89a5e8: mov dword ptr [ebp - 0x19c], 0 */
  W32((uint32_t)(ebp + 0xfffffe64u), 0x0u);
/* 89a5f2: mov dword ptr [ebp - 0x198], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe68u), 0x3f800000u);
/* 89a5fc: mov dword ptr [ebp - 0x194], 0 */
  W32((uint32_t)(ebp + 0xfffffe6cu), 0x0u);
/* 89a606: mov dword ptr [ebp - 0x40], edx */
  W32((uint32_t)(ebp + 0xffffffc0u), edx);
/* 89a609: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 89a60c: mov esi, dword ptr [ebp - 0x40] */
  esi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 89a60f: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89a612: lea edi, [ebp - 0x1c0] */
  edi = (uint32_t)(ebp + 0xfffffe40u);
/* 89a618: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a61a: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89a61c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a61e: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89a621: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a623: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89a626: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89a628: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89a62b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a62e: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89a631: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a634: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89a637: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a63a: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89a63d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89a640: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89a643: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a645: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a647: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a649: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a64b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a64d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a650: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89a653: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a656: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89a659: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a65c: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89a65f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89a662: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89a665: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a667: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a669: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a66b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a66d: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a66f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a672: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89a675: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a678: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89a67b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a67e: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89a681: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89a684: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89a687: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a689: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89a68b: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a68d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89a68f: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89a691: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89a693: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89a695: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89a697: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89a69a: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89a69d: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89a6a0: mov ecx, dword ptr [ebp - 0x1c0] */
  ecx = R32((uint32_t)(ebp + 0xfffffe40u));
/* 89a6a6: mov edx, dword ptr [ebp - 0x1bc] */
  edx = R32((uint32_t)(ebp + 0xfffffe44u));
/* 89a6ac: mov eax, dword ptr [ebp - 0x1b8] */
  eax = R32((uint32_t)(ebp + 0xfffffe48u));
/* 89a6b2: mov dword ptr [ebp - 0x60], ecx */
  W32((uint32_t)(ebp + 0xffffffa0u), ecx);
/* 89a6b5: lea ecx, [ebp - 0x60] */
  ecx = (uint32_t)(ebp + 0xffffffa0u);
/* 89a6b8: mov dword ptr [ebp - 0x5c], edx */
  W32((uint32_t)(ebp + 0xffffffa4u), edx);
/* 89a6bb: mov dword ptr [ebp - 0x58], eax */
  W32((uint32_t)(ebp + 0xffffffa8u), eax);
/* 89a6be: call dword ptr [0xcfa5c8] */
  esp -= 4; W32(esp, 0x89a6c4u); SPILL(); f_4e10b9(); if (g_unwind) return; /* Core!?Normalize@FVector@@QAEHXZ */ RELOAD();
/* 89a6c4: fld dword ptr [ebp - 0x58] */
  { double v = F32((uint32_t)(ebp + 0xffffffa8u)); FPUSH(v); }
/* 89a6c7: fmul dword ptr [0xa1a814] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a814u)));
/* 89a6cd: mov ecx, dword ptr [ebp - 0x68] */
  ecx = R32((uint32_t)(ebp + 0xffffff98u));
/* 89a6d0: fld dword ptr [ebp - 0x5c] */
  { double v = F32((uint32_t)(ebp + 0xffffffa4u)); FPUSH(v); }
/* 89a6d3: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89a6d4: fmul dword ptr [0xa1a814] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a814u)));
/* 89a6da: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a6dd: mov edx, esp */
  edx = esp;
/* 89a6df: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a6e2: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 89a6e5: fld dword ptr [ebp - 0x60] */
  { double v = F32((uint32_t)(ebp + 0xffffffa0u)); FPUSH(v); }
/* 89a6e8: fmul dword ptr [0xa1a814] */
  ST0 = ST0 * (F32((uint32_t)(0xa1a814u)));
/* 89a6ee: fstp dword ptr [ebp - 0x20c] */
  WF32((uint32_t)(ebp + 0xfffffdf4u), ST0); FPOP();
/* 89a6f4: fadd dword ptr [ebp - 0xdc] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff24u)));
/* 89a6fa: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 89a6fd: fadd dword ptr [ebp - 0xe0] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff20u)));
/* 89a703: fld dword ptr [ebp - 0x20c] */
  { double v = F32((uint32_t)(ebp + 0xfffffdf4u)); FPUSH(v); }
/* 89a709: fadd dword ptr [ebp - 0xe4] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0xffffff1cu)));
/* 89a70f: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 89a712: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 89a715: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89a717: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 89a71a: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 89a71d: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89a720: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 89a723: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 89a726: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89a729: mov edx, dword ptr [ebp - 0xe4] */
  edx = R32((uint32_t)(ebp + 0xffffff1cu));
/* 89a72f: mov eax, dword ptr [ebp - 0xe0] */
  eax = R32((uint32_t)(ebp + 0xffffff20u));
/* 89a735: mov ecx, esp */
  ecx = esp;
/* 89a737: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89a739: mov edx, dword ptr [ebp - 0xdc] */
  edx = R32((uint32_t)(ebp + 0xffffff24u));
/* 89a73f: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89a742: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89a745: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a74b: call 0x6cc74d */
  esp -= 4; W32(esp, 0x89a750u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 89a750: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89a756: mov byte ptr [ebp - 4], 5 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x5u);
/* 89a75a: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89a760u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89a760: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
L_89a763: /* 89a763: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 89a764: jmp 0x89a0d0 */
  goto L_89a0d0;
L_89a769: /* 89a769: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89a76b: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a771: call 0x6c6f6e */
  esp -= 4; W32(esp, 0x89a776u); SPILL(); f_6c6f6e(); if (g_unwind) return; RELOAD();
/* 89a776: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89a779: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 89a77b: lea edx, [ebp - 0x200] */
  edx = (uint32_t)(ebp + 0xfffffe00u);
/* 89a781: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89a782: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89a784: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x89a787u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89a787: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a78d: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 89a791: call 0x6cadcb */
  esp -= 4; W32(esp, 0x89a796u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
L_89a796: /* 89a796: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 89a799: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89a79b: je 0x89aa09 */
  if (zf) goto L_89aa09;
L_89a7a1: /* 89a7a1: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 89a7a4: mov ecx, dword ptr [eax + 0x104] */
  ecx = R32((uint32_t)(eax + 0x104u));
/* 89a7aa: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89a7ac: je 0x89aa09 */
  if (zf) goto L_89aa09;
L_89a7b2: /* 89a7b2: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89a7b5: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89a7b7: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89a7b8: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a7be: call 0x6c460b */
  esp -= 4; W32(esp, 0x89a7c3u); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 89a7c3: mov esi, dword ptr [ebp + 8] */
  esi = R32((uint32_t)(ebp + 0x8u));
/* 89a7c6: mov eax, dword ptr [0xcfa350] */
  eax = R32((uint32_t)(0xcfa350u));
/* 89a7cb: add esi, 0x8c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x8cu);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89a7d1: mov ecx, 7 */
  ecx = 0x7u;
/* 89a7d6: lea edi, [ebp - 0x170] */
  edi = (uint32_t)(ebp + 0xfffffe90u);
/* 89a7dc: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89a7de: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89a7e1: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89a7e3: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89a7e4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89a7e6: mov byte ptr [ebp - 4], 7 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x7u);
/* 89a7ea: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x89a7edu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89a7ed: mov bl, 0x5a */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x5au) & 0xffu);
/* 89a7ef: mov byte ptr [ebp - 0x18], 0xff */
  W8((uint32_t)(ebp + 0xffffffe8u), 0xffu);
/* 89a7f3: mov byte ptr [ebp - 0x17], bl */
  W8((uint32_t)(ebp + 0xffffffe9u), (ebx & 0xffu));
/* 89a7f6: mov byte ptr [ebp - 0x16], 0x48 */
  W8((uint32_t)(ebp + 0xffffffeau), 0x48u);
/* 89a7fa: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 89a7fe: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89a801: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89a802: sub esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a805: mov edi, esp */
  edi = esp;
/* 89a807: mov ecx, 7 */
  ecx = 0x7u;
/* 89a80c: lea esi, [ebp - 0x170] */
  esi = (uint32_t)(ebp + 0xfffffe90u);
/* 89a812: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89a814: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a81a: call 0x6c9eb7 */
  esp -= 4; W32(esp, 0x89a81fu); SPILL(); f_6c9eb7(); if (g_unwind) return; RELOAD();
/* 89a81f: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 89a822: mov edx, dword ptr [eax + 0xb4] */
  edx = R32((uint32_t)(eax + 0xb4u));
/* 89a828: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 89a82a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89a82b: mov byte ptr [ebp - 0x18], 0xff */
  W8((uint32_t)(ebp + 0xffffffe8u), 0xffu);
/* 89a82f: mov byte ptr [ebp - 0x17], bl */
  W8((uint32_t)(ebp + 0xffffffe9u), (ebx & 0xffu));
/* 89a832: mov byte ptr [ebp - 0x16], 0x48 */
  W8((uint32_t)(ebp + 0xffffffeau), 0x48u);
/* 89a836: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 89a83a: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89a83d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89a83e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a841: mov edx, esp */
  edx = esp;
/* 89a843: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 89a84a: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 89a84d: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 89a84f: mov dword ptr [ebp - 0x38], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x3f800000u);
/* 89a856: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 89a859: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89a85c: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 89a863: mov ecx, dword ptr [ebp - 0x34] */
  ecx = R32((uint32_t)(ebp + 0xffffffccu));
/* 89a866: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 89a869: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a86c: mov edx, esp */
  edx = esp;
/* 89a86e: mov dword ptr [ebp - 0x80], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x3f800000u);
/* 89a875: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 89a878: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 89a87a: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 89a881: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 89a884: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89a887: add eax, 0xa8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89a88c: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 89a893: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 89a896: mov dword ptr [edx + 8], ecx */
  W32((uint32_t)(edx + 0x8u), ecx);
/* 89a899: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89a89b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a89e: mov edx, esp */
  edx = esp;
/* 89a8a0: mov dword ptr [edx], ecx */
  W32((uint32_t)(edx), ecx);
/* 89a8a2: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 89a8a5: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89a8a8: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89a8ab: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a8b1: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89a8b4: call 0x6c4f5c */
  esp -= 4; W32(esp, 0x89a8b9u); SPILL(); f_6c4f5c(); if (g_unwind) return; RELOAD();
/* 89a8b9: mov byte ptr [ebp - 0x18], 0xff */
  W8((uint32_t)(ebp + 0xffffffe8u), 0xffu);
/* 89a8bd: mov byte ptr [ebp - 0x17], bl */
  W8((uint32_t)(ebp + 0xffffffe9u), (ebx & 0xffu));
/* 89a8c0: mov byte ptr [ebp - 0x16], 0x48 */
  W8((uint32_t)(ebp + 0xffffffeau), 0x48u);
/* 89a8c4: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 89a8c8: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 89a8cf: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 89a8d6: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 89a8d9: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 89a8df: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89a8e2: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 89a8e4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89a8e5: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89a8e6: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 89a8e9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a8ec: mov ecx, esp */
  ecx = esp;
/* 89a8ee: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89a8f0: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 89a8f3: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 89a8f6: mov dword ptr [ebp - 0x34], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x3f800000u);
/* 89a8fd: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 89a900: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89a903: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a906: mov ecx, esp */
  ecx = esp;
/* 89a908: mov dword ptr [ebp - 0x80], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x3f800000u);
/* 89a90f: mov edx, dword ptr [ebp - 0x80] */
  edx = R32((uint32_t)(ebp + 0xffffff80u));
/* 89a912: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89a914: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 89a91b: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* 89a91e: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 89a921: add eax, 0xa8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89a926: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 89a92d: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 89a930: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89a933: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 89a935: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a938: mov ecx, esp */
  ecx = esp;
/* 89a93a: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89a93c: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89a93f: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89a942: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 89a945: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 89a948: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a94e: call 0x6c4f5c */
  esp -= 4; W32(esp, 0x89a953u); SPILL(); f_6c4f5c(); if (g_unwind) return; RELOAD();
/* 89a953: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 89a956: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 89a95c: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 89a95e: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89a95f: mov byte ptr [ebp - 0x18], 0xff */
  W8((uint32_t)(ebp + 0xffffffe8u), 0xffu);
/* 89a963: mov byte ptr [ebp - 0x17], bl */
  W8((uint32_t)(ebp + 0xffffffe9u), (ebx & 0xffu));
/* 89a966: mov byte ptr [ebp - 0x16], 0x48 */
  W8((uint32_t)(ebp + 0xffffffeau), 0x48u);
/* 89a96a: mov byte ptr [ebp - 0x15], 0xff */
  W8((uint32_t)(ebp + 0xffffffebu), 0xffu);
/* 89a96e: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89a971: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89a972: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a975: mov ecx, esp */
  ecx = esp;
/* 89a977: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 89a97e: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 89a981: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89a983: mov dword ptr [ebp - 0x38], 0 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x0u);
/* 89a98a: mov edx, dword ptr [ebp - 0x38] */
  edx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 89a98d: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 89a990: mov dword ptr [ebp - 0x34], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x3f800000u);
/* 89a997: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 89a99a: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89a99d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a9a0: mov ecx, esp */
  ecx = esp;
/* 89a9a2: mov dword ptr [ebp - 0x80], 0 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x0u);
/* 89a9a9: mov edx, dword ptr [ebp - 0x80] */
  edx = R32((uint32_t)(ebp + 0xffffff80u));
/* 89a9ac: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89a9ae: mov dword ptr [ebp - 0x7c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x3f800000u);
/* 89a9b5: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* 89a9b8: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 89a9bb: add eax, 0xa8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xa8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 89a9c0: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 89a9c7: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 89a9ca: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89a9cd: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* 89a9cf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89a9d2: mov ecx, esp */
  ecx = esp;
/* 89a9d4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89a9d6: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89a9d9: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89a9dc: mov dword ptr [ecx + 4], edx */
  W32((uint32_t)(ecx + 0x4u), edx);
/* 89a9df: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 89a9e2: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a9e8: call 0x6c4f5c */
  esp -= 4; W32(esp, 0x89a9edu); SPILL(); f_6c4f5c(); if (g_unwind) return; RELOAD();
/* 89a9ed: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89a9ef: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89a9f5: call 0x6c6f6e */
  esp -= 4; W32(esp, 0x89a9fau); SPILL(); f_6c6f6e(); if (g_unwind) return; RELOAD();
/* 89a9fa: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89aa00: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 89aa04: call 0x6cadcb */
  esp -= 4; W32(esp, 0x89aa09u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
L_89aa09: /* 89aa09: mov edi, dword ptr [ebp - 0x6c] */
  edi = R32((uint32_t)(ebp + 0xffffff94u));
/* 89aa0c: fld dword ptr [edi + 0x290] */
  { double v = F32((uint32_t)(edi + 0x290u)); FPUSH(v); }
/* 89aa12: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 89aa15: fmul dword ptr [esi + 0x80] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x80u)));
/* 89aa1b: mov ecx, dword ptr [edi + 0x284] */
  ecx = R32((uint32_t)(edi + 0x284u));
/* 89aa21: fld dword ptr [edi + 0x28c] */
  { double v = F32((uint32_t)(edi + 0x28cu)); FPUSH(v); }
/* 89aa27: mov dword ptr [ebp - 0xc0], ecx */
  W32((uint32_t)(ebp + 0xffffff40u), ecx);
/* 89aa2d: fmul dword ptr [esi + 0x7c] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x7cu)));
/* 89aa30: lea ecx, [ebp - 0x50] */
  ecx = (uint32_t)(ebp + 0xffffffb0u);
/* 89aa33: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 89aa36: fld dword ptr [edi + 0x288] */
  { double v = F32((uint32_t)(edi + 0x288u)); FPUSH(v); }
/* 89aa3c: fmul dword ptr [esi + 0x78] */
  ST0 = ST0 * (F32((uint32_t)(esi + 0x78u)));
/* 89aa3f: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 89aa45: fmul dword ptr [ebp - 0xc0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff40u)));
/* 89aa4b: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 89aa4e: fmul dword ptr [ebp - 0xc0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff40u)));
/* 89aa54: fld dword ptr [ebp - 0xb8] */
  { double v = F32((uint32_t)(ebp + 0xffffff48u)); FPUSH(v); }
/* 89aa5a: fmul dword ptr [ebp - 0xc0] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff40u)));
/* 89aa60: fstp dword ptr [ebp - 0x50] */
  WF32((uint32_t)(ebp + 0xffffffb0u), ST0); FPOP();
/* 89aa63: fstp dword ptr [ebp - 0x4c] */
  WF32((uint32_t)(ebp + 0xffffffb4u), ST0); FPOP();
/* 89aa66: fstp dword ptr [ebp - 0x48] */
  WF32((uint32_t)(ebp + 0xffffffb8u), ST0); FPOP();
/* 89aa69: call dword ptr [0xcfa5c4] */
  esp -= 4; W32(esp, 0x89aa6fu); SPILL(); f_4e3d37(); if (g_unwind) return; /* Core!?IsUniform@FVector@@QAEHXZ */ RELOAD();
/* 89aa6f: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89aa71: je 0x89b860 */
  if (zf) goto L_89b860;
L_89aa77: /* 89aa77: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 89aa7a: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89aa7c: je 0x89b860 */
  if (zf) goto L_89b860;
L_89aa82: /* 89aa82: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 89aa85: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89aa87: je 0x89b860 */
  if (zf) goto L_89b860;
L_89aa8d: /* 89aa8d: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 89aa90: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89aa92: je 0x89b860 */
  if (zf) goto L_89b860;
L_89aa98: /* 89aa98: mov ecx, dword ptr [eax + 0x534] */
  ecx = R32((uint32_t)(eax + 0x534u));
/* 89aa9e: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  }
/* 89aaa0: jns 0x89b860 */
  if (!sf) goto L_89b860;
L_89aaa6: /* 89aaa6: mov edx, dword ptr [ebp + 0x18] */
  edx = R32((uint32_t)(ebp + 0x18u));
/* 89aaa9: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89aaab: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89aaac: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89aab2: mov byte ptr [ebp - 0x24], 0xb4 */
  W8((uint32_t)(ebp + 0xffffffdcu), 0xb4u);
/* 89aab6: mov byte ptr [ebp - 0x23], 0xff */
  W8((uint32_t)(ebp + 0xffffffddu), 0xffu);
/* 89aaba: mov byte ptr [ebp - 0x22], 0x48 */
  W8((uint32_t)(ebp + 0xffffffdeu), 0x48u);
/* 89aabe: mov byte ptr [ebp - 0x21], 0xff */
  W8((uint32_t)(ebp + 0xffffffdfu), 0xffu);
/* 89aac2: call 0x6c460b */
  esp -= 4; W32(esp, 0x89aac7u); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 89aac7: mov edx, dword ptr [0xcfa350] */
  edx = R32((uint32_t)(0xcfa350u));
/* 89aacd: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89aad0: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* 89aad2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89aad3: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89aad5: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 89aad9: call dword ptr [eax + 0x38] */
  { uint32_t t = R32((uint32_t)(eax + 0x38u)); esp -= 4; W32(esp, 0x89aadcu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89aadc: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
/* 89aae3: jmp 0x89aaf0 */
  goto L_89aaf0;
L_89aaf0: /* 89aaf0: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89aaf3: cmp eax, dword ptr [esi + 0x314] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x314u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89aaf9: jge 0x89af23 */
  if ((sf == of)) goto L_89af23;
L_89aaff: /* 89aaff: mov edx, dword ptr [ebp - 0x64] */
  edx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 89ab02: lea ecx, [eax + eax*4] */
  ecx = (uint32_t)(eax + eax*4);
/* 89ab05: mov eax, dword ptr [edx + 0x310] */
  eax = R32((uint32_t)(edx + 0x310u));
/* 89ab0b: lea ebx, [eax + ecx*4] */
  ebx = (uint32_t)(eax + ecx*4);
/* 89ab0e: mov ecx, ebx */
  ecx = ebx;
/* 89ab10: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x89ab16u); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 89ab16: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ab17: mov ecx, esp */
  ecx = esp;
/* 89ab19: mov dword ptr [ebp - 0x58], esp */
  W32((uint32_t)(ebp + 0xffffffa8u), esp);
/* 89ab1c: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89ab1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ab1f: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x89ab25u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 89ab25: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89ab28: call 0x6cceaa */
  esp -= 4; W32(esp, 0x89ab2du); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 89ab2d: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89ab30: je 0x89af11 */
  if (zf) goto L_89af11;
L_89ab36: /* 89ab36: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89ab39: lea ecx, [ebp - 0x32c] */
  ecx = (uint32_t)(ebp + 0xfffffcd4u);
/* 89ab3f: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 89ab42: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ab43: mov ecx, dword ptr [edx + 0xb4] */
  ecx = R32((uint32_t)(edx + 0xb4u));
/* 89ab49: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89ab4c: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89ab4e: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 89ab51: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x89ab57u); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 89ab57: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89ab5a: mov edi, esp */
  edi = esp;
/* 89ab5c: mov ecx, 0x10 */
  ecx = 0x10u;
/* 89ab61: lea esi, [ebp - 0x200] */
  esi = (uint32_t)(ebp + 0xfffffe00u);
/* 89ab67: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89ab69: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89ab6f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ab70: mov ecx, eax */
  ecx = eax;
/* 89ab72: mov byte ptr [ebp - 4], 9 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x9u);
/* 89ab76: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x89ab7cu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 89ab7c: lea ecx, [ebp - 0x32c] */
  ecx = (uint32_t)(ebp + 0xfffffcd4u);
/* 89ab82: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 89ab86: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89ab8cu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89ab8c: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 89ab8f: mov ecx, dword ptr [eax + 0xb4] */
  ecx = R32((uint32_t)(eax + 0xb4u));
/* 89ab95: mov eax, dword ptr [ebp - 0x1c] */
  eax = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89ab98: lea edx, [ebp - 0x36c] */
  edx = (uint32_t)(ebp + 0xfffffc94u);
/* 89ab9e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89ab9f: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89aba1: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x89aba7u); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 89aba7: lea ecx, [ebp - 0x3ac] */
  ecx = (uint32_t)(ebp + 0xfffffc54u);
/* 89abad: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89abae: mov ecx, eax */
  ecx = eax;
/* 89abb0: mov byte ptr [ebp - 4], 0xc */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xcu);
/* 89abb4: call dword ptr [0xcfa7c0] */
  esp -= 4; W32(esp, 0x89abbau); SPILL(); f_4e3003(); if (g_unwind) return; /* Core!?Inverse@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 89abba: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89abbd: mov edi, esp */
  edi = esp;
/* 89abbf: mov ecx, 0x10 */
  ecx = 0x10u;
/* 89abc4: lea esi, [ebp - 0x200] */
  esi = (uint32_t)(ebp + 0xfffffe00u);
/* 89abca: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89abd0: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89abd2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89abd3: mov ecx, eax */
  ecx = eax;
/* 89abd5: mov byte ptr [ebp - 4], 0xd */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xdu);
/* 89abd9: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x89abdfu); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 89abdf: lea ecx, [ebp - 0x3ac] */
  ecx = (uint32_t)(ebp + 0xfffffc54u);
/* 89abe5: mov byte ptr [ebp - 4], 0x10 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x10u);
/* 89abe9: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89abefu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89abef: lea ecx, [ebp - 0x36c] */
  ecx = (uint32_t)(ebp + 0xfffffc94u);
/* 89abf5: mov byte ptr [ebp - 4], 0xf */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xfu);
/* 89abf9: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89abffu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89abff: mov eax, dword ptr [ebp - 0x274] */
  eax = R32((uint32_t)(ebp + 0xfffffd8cu));
/* 89ac05: mov ecx, dword ptr [ebp - 0x270] */
  ecx = R32((uint32_t)(ebp + 0xfffffd90u));
/* 89ac0b: mov edx, dword ptr [ebp - 0x26c] */
  edx = R32((uint32_t)(ebp + 0xfffffd94u));
/* 89ac11: mov dword ptr [ebp - 0x234], eax */
  W32((uint32_t)(ebp + 0xfffffdccu), eax);
/* 89ac17: lea eax, [ebp - 0x2ec] */
  eax = (uint32_t)(ebp + 0xfffffd14u);
/* 89ac1d: mov dword ptr [ebp - 0x230], ecx */
  W32((uint32_t)(ebp + 0xfffffdd0u), ecx);
/* 89ac23: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ac24: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89ac2a: mov dword ptr [ebp - 0x22c], edx */
  W32((uint32_t)(ebp + 0xfffffdd4u), edx);
/* 89ac30: call dword ptr [0xcfab4c] */
  esp -= 4; W32(esp, 0x89ac36u); SPILL(); f_4e24c8(); if (g_unwind) return; /* Core!?RemoveScaling@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 89ac36: lea ecx, [ebp - 0x2ec] */
  ecx = (uint32_t)(ebp + 0xfffffd14u);
/* 89ac3c: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89ac42u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89ac42: fld dword ptr [ebp - 0x48] */
  { double v = F32((uint32_t)(ebp + 0xffffffb8u)); FPUSH(v); }
/* 89ac45: fmul dword ptr [ebx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0xcu)));
/* 89ac48: mov dword ptr [ebp - 0x138], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffec8u), 0x3f800000u);
/* 89ac52: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 89ac55: lea ecx, [ebp - 0x144] */
  ecx = (uint32_t)(ebp + 0xfffffebcu);
/* 89ac5b: fmul dword ptr [ebx + 8] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x8u)));
/* 89ac5e: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 89ac61: fmul dword ptr [ebx + 4] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x4u)));
/* 89ac64: fstp dword ptr [ebp - 0x144] */
  WF32((uint32_t)(ebp + 0xfffffebcu), ST0); FPOP();
/* 89ac6a: fstp dword ptr [ebp - 0x140] */
  WF32((uint32_t)(ebp + 0xfffffec0u), ST0); FPOP();
/* 89ac70: fstp dword ptr [ebp - 0x13c] */
  WF32((uint32_t)(ebp + 0xfffffec4u), ST0); FPOP();
/* 89ac76: lea edx, [ebp - 0x264] */
  edx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89ac7c: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 89ac7f: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 89ac82: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89ac85: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89ac88: lea edi, [ebp - 0xbc] */
  edi = (uint32_t)(ebp + 0xffffff44u);
/* 89ac8e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89ac90: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89ac92: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89ac94: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89ac97: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89ac99: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89ac9c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89ac9e: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89aca1: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89aca4: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89aca7: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89acaa: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89acad: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89acb0: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89acb3: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89acb6: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89acb9: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89acbb: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89acbd: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89acbf: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89acc1: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89acc3: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89acc6: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89acc9: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89accc: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89accf: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89acd2: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89acd5: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89acd8: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89acdb: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89acdd: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89acdf: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89ace1: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89ace3: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89ace5: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89ace8: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89aceb: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89acee: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89acf1: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89acf4: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89acf7: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89acfa: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89acfd: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89acff: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89ad01: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89ad03: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89ad05: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89ad07: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89ad09: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89ad0b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89ad0d: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89ad10: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89ad13: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89ad16: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 89ad19: fmul dword ptr [ebx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x10u)));
/* 89ad1c: mov eax, dword ptr [ebp - 0x24] */
  eax = R32((uint32_t)(ebp + 0xffffffdcu));
/* 89ad1f: mov esi, dword ptr [ebp - 0xbc] */
  esi = R32((uint32_t)(ebp + 0xffffff44u));
/* 89ad25: mov edi, dword ptr [ebp - 0xb8] */
  edi = R32((uint32_t)(ebp + 0xffffff48u));
/* 89ad2b: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 89ad2d: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ad2e: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 89ad31: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ad32: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89ad35: mov ecx, esp */
  ecx = esp;
/* 89ad37: mov dword ptr [ebp - 0x3c], 0 */
  W32((uint32_t)(ebp + 0xffffffc4u), 0x0u);
/* 89ad3e: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 89ad41: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89ad43: mov dword ptr [ebp - 0x38], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffc8u), 0x3f800000u);
/* 89ad4a: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 89ad4d: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89ad50: mov dword ptr [ebp - 0x34], 0 */
  W32((uint32_t)(ebp + 0xffffffccu), 0x0u);
/* 89ad57: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 89ad5a: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89ad5d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89ad60: mov eax, esp */
  eax = esp;
/* 89ad62: mov dword ptr [ebp - 0x80], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff80u), 0x3f800000u);
/* 89ad69: mov ecx, dword ptr [ebp - 0x80] */
  ecx = R32((uint32_t)(ebp + 0xffffff80u));
/* 89ad6c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 89ad6e: mov dword ptr [ebp - 0x7c], 0 */
  W32((uint32_t)(ebp + 0xffffff84u), 0x0u);
/* 89ad75: mov edx, dword ptr [ebp - 0x7c] */
  edx = R32((uint32_t)(ebp + 0xffffff84u));
/* 89ad78: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 89ad7b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89ad7e: mov dword ptr [ebp - 0x78], 0 */
  W32((uint32_t)(ebp + 0xffffff88u), 0x0u);
/* 89ad85: mov ecx, dword ptr [ebp - 0x78] */
  ecx = R32((uint32_t)(ebp + 0xffffff88u));
/* 89ad88: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 89ad8b: mov eax, dword ptr [ebp - 0xb4] */
  eax = R32((uint32_t)(ebp + 0xffffff4cu));
/* 89ad91: mov edx, esp */
  edx = esp;
/* 89ad93: mov dword ptr [edx], esi */
  W32((uint32_t)(edx), esi);
/* 89ad95: mov dword ptr [edx + 4], edi */
  W32((uint32_t)(edx + 0x4u), edi);
/* 89ad98: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89ad9e: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89ada1: call 0x6c4f5c */
  esp -= 4; W32(esp, 0x89ada6u); SPILL(); f_6c4f5c(); if (g_unwind) return; RELOAD();
/* 89ada6: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 89ada9: fmul dword ptr [ebx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x10u)));
/* 89adac: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 89adae: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89adaf: mov ecx, dword ptr [ebp - 0x24] */
  ecx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 89adb2: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 89adb5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89adb6: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89adb9: mov edx, esp */
  edx = esp;
/* 89adbb: mov dword ptr [ebp - 0xf0], 0 */
  W32((uint32_t)(ebp + 0xffffff10u), 0x0u);
/* 89adc5: mov eax, dword ptr [ebp - 0xf0] */
  eax = R32((uint32_t)(ebp + 0xffffff10u));
/* 89adcb: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89adcd: mov dword ptr [ebp - 0xec], 0 */
  W32((uint32_t)(ebp + 0xffffff14u), 0x0u);
/* 89add7: mov ecx, dword ptr [ebp - 0xec] */
  ecx = R32((uint32_t)(ebp + 0xffffff14u));
/* 89addd: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89ade0: mov dword ptr [ebp - 0xe8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff18u), 0x3f800000u);
/* 89adea: mov eax, dword ptr [ebp - 0xe8] */
  eax = R32((uint32_t)(ebp + 0xffffff18u));
/* 89adf0: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89adf3: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89adf6: mov ecx, esp */
  ecx = esp;
/* 89adf8: mov dword ptr [ebp - 0x120], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffee0u), 0x3f800000u);
/* 89ae02: mov edx, dword ptr [ebp - 0x120] */
  edx = R32((uint32_t)(ebp + 0xfffffee0u));
/* 89ae08: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89ae0a: mov dword ptr [ebp - 0x11c], 0 */
  W32((uint32_t)(ebp + 0xfffffee4u), 0x0u);
/* 89ae14: mov eax, dword ptr [ebp - 0x11c] */
  eax = R32((uint32_t)(ebp + 0xfffffee4u));
/* 89ae1a: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89ae1d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89ae20: mov dword ptr [ebp - 0x118], 0 */
  W32((uint32_t)(ebp + 0xfffffee8u), 0x0u);
/* 89ae2a: mov edx, dword ptr [ebp - 0x118] */
  edx = R32((uint32_t)(ebp + 0xfffffee8u));
/* 89ae30: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89ae33: mov ecx, dword ptr [ebp - 0xb4] */
  ecx = R32((uint32_t)(ebp + 0xffffff4cu));
/* 89ae39: mov eax, esp */
  eax = esp;
/* 89ae3b: mov dword ptr [eax], esi */
  W32((uint32_t)(eax), esi);
/* 89ae3d: mov dword ptr [eax + 4], edi */
  W32((uint32_t)(eax + 0x4u), edi);
/* 89ae40: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 89ae43: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89ae49: call 0x6c4f5c */
  esp -= 4; W32(esp, 0x89ae4eu); SPILL(); f_6c4f5c(); if (g_unwind) return; RELOAD();
/* 89ae4e: mov dword ptr [ebp - 0x130], 0 */
  W32((uint32_t)(ebp + 0xfffffed0u), 0x0u);
/* 89ae58: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 89ae5b: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 89ae5e: fmul dword ptr [ebx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(ebx + 0x10u)));
/* 89ae61: push 0x10 */
  { uint32_t v = 0x10u; esp -= 4; W32(esp, v); }
/* 89ae63: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89ae64: mov ecx, dword ptr [ebp - 0x130] */
  ecx = R32((uint32_t)(ebp + 0xfffffed0u));
/* 89ae6a: fstp dword ptr [esp] */
  WF32((uint32_t)(esp), ST0); FPOP();
/* 89ae6d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89ae6e: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89ae71: mov eax, esp */
  eax = esp;
/* 89ae73: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 89ae75: mov dword ptr [ebp - 0x12c], 0 */
  W32((uint32_t)(ebp + 0xfffffed4u), 0x0u);
/* 89ae7f: mov edx, dword ptr [ebp - 0x12c] */
  edx = R32((uint32_t)(ebp + 0xfffffed4u));
/* 89ae85: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 89ae88: mov dword ptr [ebp - 0x128], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffed8u), 0x3f800000u);
/* 89ae92: mov ecx, dword ptr [ebp - 0x128] */
  ecx = R32((uint32_t)(ebp + 0xfffffed8u));
/* 89ae98: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 89ae9b: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89ae9e: mov edx, esp */
  edx = esp;
/* 89aea0: mov dword ptr [ebp - 0x30], 0 */
  W32((uint32_t)(ebp + 0xffffffd0u), 0x0u);
/* 89aea7: mov eax, dword ptr [ebp - 0x30] */
  eax = R32((uint32_t)(ebp + 0xffffffd0u));
/* 89aeaa: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89aeac: mov dword ptr [ebp - 0x2c], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffffd4u), 0x3f800000u);
/* 89aeb3: mov ecx, dword ptr [ebp - 0x2c] */
  ecx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 89aeb6: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89aeb9: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89aebc: mov dword ptr [ebp - 0x28], 0 */
  W32((uint32_t)(ebp + 0xffffffd8u), 0x0u);
/* 89aec3: mov eax, dword ptr [ebp - 0x28] */
  eax = R32((uint32_t)(ebp + 0xffffffd8u));
/* 89aec6: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89aec9: mov edx, dword ptr [ebp - 0xb4] */
  edx = R32((uint32_t)(ebp + 0xffffff4cu));
/* 89aecf: mov ecx, esp */
  ecx = esp;
/* 89aed1: mov dword ptr [ecx], esi */
  W32((uint32_t)(ecx), esi);
/* 89aed3: mov dword ptr [ecx + 4], edi */
  W32((uint32_t)(ecx + 0x4u), edi);
/* 89aed6: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89aed9: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89aedf: call 0x6c4f5c */
  esp -= 4; W32(esp, 0x89aee4u); SPILL(); f_6c4f5c(); if (g_unwind) return; RELOAD();
/* 89aee4: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89aee6: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89aeec: call 0x6c6f6e */
  esp -= 4; W32(esp, 0x89aef1u); SPILL(); f_6c6f6e(); if (g_unwind) return; RELOAD();
/* 89aef1: lea ecx, [ebp - 0x2a4] */
  ecx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89aef7: mov byte ptr [ebp - 4], 0xb */
  W8((uint32_t)(ebp + 0xfffffffcu), 0xbu);
/* 89aefb: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89af01u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89af01: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89af07: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 89af0b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89af11u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_89af11: /* 89af11: mov eax, dword ptr [ebp - 0x18] */
  eax = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89af14: mov edi, dword ptr [ebp - 0x6c] */
  edi = R32((uint32_t)(ebp + 0xffffff94u));
/* 89af17: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 89af1a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 89af1b: mov dword ptr [ebp - 0x18], eax */
  W32((uint32_t)(ebp + 0xffffffe8u), eax);
/* 89af1e: jmp 0x89aaf0 */
  goto L_89aaf0;
L_89af23: /* 89af23: mov dword ptr [ebp - 0x94], 0 */
  W32((uint32_t)(ebp + 0xffffff6cu), 0x0u);
/* 89af2d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_89af30: /* 89af30: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
/* 89af36: cmp eax, dword ptr [esi + 0x320] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(esi + 0x320u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89af3c: jge 0x89b851 */
  if ((sf == of)) goto L_89b851;
L_89af42: /* 89af42: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 89af45: mov ebx, eax */
  ebx = eax;
/* 89af47: mov eax, dword ptr [ecx + 0x31c] */
  eax = R32((uint32_t)(ecx + 0x31cu));
/* 89af4d: imul ebx, ebx, 0x1c */
  { int64_t r = (int64_t)(int32_t)(ebx) * (int64_t)(int32_t)(0x1cu);
  ebx = (uint32_t)r;
  }
/* 89af50: add ebx, eax */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 89af52: mov ecx, ebx */
  ecx = ebx;
/* 89af54: call dword ptr [0xcfa56c] */
  esp -= 4; W32(esp, 0x89af5au); SPILL(); f_4e12c6(); if (g_unwind) return; /* Core!??DFName@@QBEPBGXZ */ RELOAD();
/* 89af5a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89af5b: mov ecx, esp */
  ecx = esp;
/* 89af5d: mov dword ptr [ebp - 0x58], esp */
  W32((uint32_t)(ebp + 0xffffffa8u), esp);
/* 89af60: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89af62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89af63: call dword ptr [0xcfa33c] */
  esp -= 4; W32(esp, 0x89af69u); SPILL(); f_4e36a7(); if (g_unwind) return; /* Core!??0FName@@QAE@PBGW4EFindName@@@Z */ RELOAD();
/* 89af69: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89af6c: call 0x6cceaa */
  esp -= 4; W32(esp, 0x89af71u); SPILL(); f_6cceaa(); if (g_unwind) return; RELOAD();
/* 89af71: cmp eax, -1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xffffffffu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89af74: je 0x89b839 */
  if (zf) goto L_89b839;
L_89af7a: /* 89af7a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89af7d: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 89af83: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 89af86: shl eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 4;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89af89: lea edx, [ebp - 0x2ec] */
  edx = (uint32_t)(ebp + 0xfffffd14u);
/* 89af8f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89af90: add ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89af92: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 89af95: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x89af9bu); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 89af9b: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89af9e: mov edi, esp */
  edi = esp;
/* 89afa0: mov ecx, 0x10 */
  ecx = 0x10u;
/* 89afa5: lea esi, [ebp - 0x200] */
  esi = (uint32_t)(ebp + 0xfffffe00u);
/* 89afab: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89afb1: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89afb3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89afb4: mov ecx, eax */
  ecx = eax;
/* 89afb6: mov byte ptr [ebp - 4], 0x11 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x11u);
/* 89afba: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x89afc0u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 89afc0: lea ecx, [ebp - 0x2ec] */
  ecx = (uint32_t)(ebp + 0xfffffd14u);
/* 89afc6: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 89afca: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89afd0u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89afd0: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89afd3: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 89afd9: lea eax, [ebp - 0x3ac] */
  eax = (uint32_t)(ebp + 0xfffffc54u);
/* 89afdf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89afe0: add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe4u)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 89afe3: call dword ptr [0xcfaacc] */
  esp -= 4; W32(esp, 0x89afe9u); SPILL(); f_4e34e0(); if (g_unwind) return; /* Core!?Matrix@FCoords@@QBE?AVFMatrix@@XZ */ RELOAD();
/* 89afe9: lea edx, [ebp - 0x36c] */
  edx = (uint32_t)(ebp + 0xfffffc94u);
/* 89afef: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89aff0: mov ecx, eax */
  ecx = eax;
/* 89aff2: mov byte ptr [ebp - 4], 0x14 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x14u);
/* 89aff6: call dword ptr [0xcfa7c0] */
  esp -= 4; W32(esp, 0x89affcu); SPILL(); f_4e3003(); if (g_unwind) return; /* Core!?Inverse@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 89affc: sub esp, 0x40 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x40u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89afff: mov edi, esp */
  edi = esp;
/* 89b001: mov ecx, 0x10 */
  ecx = 0x10u;
/* 89b006: lea esi, [ebp - 0x200] */
  esi = (uint32_t)(ebp + 0xfffffe00u);
/* 89b00c: rep movsd dword ptr es:[edi], dword ptr [esi] */
  if (!DF) { guest_movs(edi, esi, ecx, 4); esi += ecx * 4; edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, R32(esi)); esi += (DF ? -4 : 4); edi += (DF ? -4 : 4); ecx--; } }
/* 89b00e: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89b014: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89b015: mov ecx, eax */
  ecx = eax;
/* 89b017: mov byte ptr [ebp - 4], 0x15 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x15u);
/* 89b01b: call dword ptr [0xcfa1c0] */
  esp -= 4; W32(esp, 0x89b021u); SPILL(); f_4e38e6(); if (g_unwind) return; /* Core!??DFMatrix@@QBE?AV0@V0@@Z */ RELOAD();
/* 89b021: lea ecx, [ebp - 0x36c] */
  ecx = (uint32_t)(ebp + 0xfffffc94u);
/* 89b027: mov byte ptr [ebp - 4], 0x18 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x18u);
/* 89b02b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89b031u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89b031: lea ecx, [ebp - 0x3ac] */
  ecx = (uint32_t)(ebp + 0xfffffc54u);
/* 89b037: mov byte ptr [ebp - 4], 0x17 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x17u);
/* 89b03b: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89b041u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89b041: mov edx, dword ptr [ebp - 0x234] */
  edx = R32((uint32_t)(ebp + 0xfffffdccu));
/* 89b047: mov ecx, dword ptr [ebp - 0x22c] */
  ecx = R32((uint32_t)(ebp + 0xfffffdd4u));
/* 89b04d: mov eax, dword ptr [ebp - 0x230] */
  eax = R32((uint32_t)(ebp + 0xfffffdd0u));
/* 89b053: mov dword ptr [ebp - 0x274], edx */
  W32((uint32_t)(ebp + 0xfffffd8cu), edx);
/* 89b059: lea edx, [ebp - 0x32c] */
  edx = (uint32_t)(ebp + 0xfffffcd4u);
/* 89b05f: mov dword ptr [ebp - 0x26c], ecx */
  W32((uint32_t)(ebp + 0xfffffd94u), ecx);
/* 89b065: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89b066: lea ecx, [ebp - 0x2a4] */
  ecx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89b06c: mov dword ptr [ebp - 0x270], eax */
  W32((uint32_t)(ebp + 0xfffffd90u), eax);
/* 89b072: call dword ptr [0xcfab4c] */
  esp -= 4; W32(esp, 0x89b078u); SPILL(); f_4e24c8(); if (g_unwind) return; /* Core!?RemoveScaling@FMatrix@@QAE?AV1@XZ */ RELOAD();
/* 89b078: lea ecx, [ebp - 0x32c] */
  ecx = (uint32_t)(ebp + 0xfffffcd4u);
/* 89b07e: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89b084u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89b084: mov edi, dword ptr [0xcfa1e0] */
  edi = R32((uint32_t)(0xcfa1e0u));
/* 89b08a: mov dword ptr [ebp - 0x54], 2 */
  W32((uint32_t)(ebp + 0xffffffacu), 0x2u);
/* 89b091: lea esi, [ebp - 0x16c] */
  esi = (uint32_t)(ebp + 0xfffffe94u);
L_89b097: /* 89b097: dec dword ptr [ebp - 0x54] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffacu)));
  uint32_t r = (uint32_t)(a - 1);
  sf = ((r) >> 31) & 1;
  W32((uint32_t)(ebp + 0xffffffacu), r);
  }
/* 89b09a: js 0x89b0a9 */
  if (sf) goto L_89b0a9;
L_89b09c: /* 89b09c: mov ecx, esi */
  ecx = esi;
/* 89b09e: call edi */
  { uint32_t t = edi; esp -= 4; W32(esp, 0x89b0a0u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89b0a0: mov eax, 0xc */
  eax = 0xcu;
/* 89b0a5: add esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89b0a7: jmp 0x89b097 */
  goto L_89b097;
L_89b0a9: /* 89b0a9: fld dword ptr [ebx + 0xc] */
  { double v = F32((uint32_t)(ebx + 0xcu)); FPUSH(v); }
/* 89b0ac: mov dword ptr [ebp - 0x98], 0 */
  W32((uint32_t)(ebp + 0xffffff68u), 0x0u);
/* 89b0b6: fsub dword ptr [ebx + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x18u)));
/* 89b0b9: fld dword ptr [ebx + 8] */
  { double v = F32((uint32_t)(ebx + 0x8u)); FPUSH(v); }
/* 89b0bc: fsub dword ptr [ebx + 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x14u)));
/* 89b0bf: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 89b0c2: fld dword ptr [ebx + 4] */
  { double v = F32((uint32_t)(ebx + 0x4u)); FPUSH(v); }
/* 89b0c5: fsub dword ptr [ebx + 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ebx + 0x10u)));
/* 89b0c8: fstp dword ptr [ebp - 0xb8] */
  WF32((uint32_t)(ebp + 0xffffff48u), ST0); FPOP();
/* 89b0ce: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 89b0d1: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 89b0d4: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 89b0d7: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 89b0da: fmul dword ptr [ebp - 0xb8] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffff48u)));
/* 89b0e0: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 89b0e3: mov eax, dword ptr [ebp - 0x3c] */
  eax = R32((uint32_t)(ebp + 0xffffffc4u));
/* 89b0e6: mov dword ptr [ebp - 0x16c], eax */
  W32((uint32_t)(ebp + 0xfffffe94u), eax);
/* 89b0ec: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 89b0ef: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 89b0f2: mov dword ptr [ebp - 0x168], ecx */
  W32((uint32_t)(ebp + 0xfffffe98u), ecx);
/* 89b0f8: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 89b0fb: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 89b0fe: mov dword ptr [ebp - 0x164], edx */
  W32((uint32_t)(ebp + 0xfffffe9cu), edx);
/* 89b104: fld dword ptr [ebx + 0x18] */
  { double v = F32((uint32_t)(ebx + 0x18u)); FPUSH(v); }
/* 89b107: fadd dword ptr [ebx + 0xc] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0xcu)));
/* 89b10a: fld dword ptr [ebx + 0x14] */
  { double v = F32((uint32_t)(ebx + 0x14u)); FPUSH(v); }
/* 89b10d: fadd dword ptr [ebx + 8] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x8u)));
/* 89b110: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 89b113: fld dword ptr [ebx + 0x10] */
  { double v = F32((uint32_t)(ebx + 0x10u)); FPUSH(v); }
/* 89b116: fadd dword ptr [ebx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ebx + 0x4u)));
/* 89b119: fstp dword ptr [ebp - 0x140] */
  WF32((uint32_t)(ebp + 0xfffffec0u), ST0); FPOP();
/* 89b11f: fmul dword ptr [ebp - 0x48] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffb8u)));
/* 89b122: fld dword ptr [ebp - 0x4c] */
  { double v = F32((uint32_t)(ebp + 0xffffffb4u)); FPUSH(v); }
/* 89b125: fmul dword ptr [ebp - 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffe4u)));
/* 89b128: fld dword ptr [ebp - 0x50] */
  { double v = F32((uint32_t)(ebp + 0xffffffb0u)); FPUSH(v); }
/* 89b12b: fmul dword ptr [ebp - 0x140] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xfffffec0u)));
/* 89b131: fstp dword ptr [ebp - 0x80] */
  WF32((uint32_t)(ebp + 0xffffff80u), ST0); FPOP();
/* 89b134: mov eax, dword ptr [ebp - 0x80] */
  eax = R32((uint32_t)(ebp + 0xffffff80u));
/* 89b137: mov dword ptr [ebp - 0x160], eax */
  W32((uint32_t)(ebp + 0xfffffea0u), eax);
/* 89b13d: fstp dword ptr [ebp - 0x7c] */
  WF32((uint32_t)(ebp + 0xffffff84u), ST0); FPOP();
/* 89b140: mov ecx, dword ptr [ebp - 0x7c] */
  ecx = R32((uint32_t)(ebp + 0xffffff84u));
/* 89b143: mov dword ptr [ebp - 0x15c], ecx */
  W32((uint32_t)(ebp + 0xfffffea4u), ecx);
/* 89b149: fstp dword ptr [ebp - 0x78] */
  WF32((uint32_t)(ebp + 0xffffff88u), ST0); FPOP();
/* 89b14c: mov edx, dword ptr [ebp - 0x78] */
  edx = R32((uint32_t)(ebp + 0xffffff88u));
/* 89b14f: mov dword ptr [ebp - 0x158], edx */
  W32((uint32_t)(ebp + 0xfffffea8u), edx);
/* 89b155: mov eax, 2 */
  eax = 0x2u;
/* 89b15a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_89b160: /* 89b160: cmp dword ptr [ebp - 0x98], eax */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff68u))); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89b166: jge 0x89b80c */
  if ((sf == of)) goto L_89b80c;
L_89b16c: /* 89b16c: mov dword ptr [ebp - 0x18], 0 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x0u);
L_89b173: /* 89b173: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* 89b176: mov eax, 2 */
  eax = 0x2u;
/* 89b17b: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89b17d: jge 0x89b801 */
  if ((sf == of)) goto L_89b801;
L_89b183: /* 89b183: mov ebx, dword ptr [ebp - 0x98] */
  ebx = R32((uint32_t)(ebp + 0xffffff68u));
/* 89b189: mov edx, dword ptr [ebp - 0x164] */
  edx = R32((uint32_t)(ebp + 0xfffffe9cu));
/* 89b18f: lea ebx, [ebx + ebx*2] */
  ebx = (uint32_t)(ebx + ebx*2);
/* 89b192: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* 89b195: mov eax, dword ptr [ebp + ebx - 0x16c] */
  eax = R32((uint32_t)(ebp + ebx + 0xfffffe94u));
/* 89b19c: fld dword ptr [ebp + ebx - 0x16c] */
  { double v = F32((uint32_t)(ebp + ebx + 0xfffffe94u)); FPUSH(v); }
/* 89b1a3: mov dword ptr [ebp - 0x30], eax */
  W32((uint32_t)(ebp + 0xffffffd0u), eax);
/* 89b1a6: mov eax, ecx */
  eax = ecx;
/* 89b1a8: lea eax, [eax + eax*2] */
  eax = (uint32_t)(eax + eax*2);
/* 89b1ab: shl eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  eax = r;
  }
/* 89b1ae: mov ecx, dword ptr [ebp + eax - 0x168] */
  ecx = R32((uint32_t)(ebp + eax + 0xfffffe98u));
/* 89b1b5: fld dword ptr [ebp + eax - 0x168] */
  { double v = F32((uint32_t)(ebp + eax + 0xfffffe98u)); FPUSH(v); }
/* 89b1bc: mov dword ptr [ebp - 0x54], eax */
  W32((uint32_t)(ebp + 0xffffffacu), eax);
/* 89b1bf: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89b1c1: lea eax, [ebp + eax - 0x168] */
  eax = (uint32_t)(ebp + eax + 0xfffffe98u);
/* 89b1c8: fstp dword ptr [ebp - 0x154] */
  WF32((uint32_t)(ebp + 0xfffffeacu), ST0); FPOP();
/* 89b1ce: mov eax, dword ptr [ebp - 0x158] */
  eax = R32((uint32_t)(ebp + 0xfffffea8u));
/* 89b1d4: mov dword ptr [ebp - 0x2c], ecx */
  W32((uint32_t)(ebp + 0xffffffd4u), ecx);
/* 89b1d7: fstp dword ptr [ebp - 0x150] */
  WF32((uint32_t)(ebp + 0xfffffeb0u), ST0); FPOP();
/* 89b1dd: mov dword ptr [ebp - 0x28], edx */
  W32((uint32_t)(ebp + 0xffffffd8u), edx);
/* 89b1e0: lea ecx, [ebp - 0x154] */
  ecx = (uint32_t)(ebp + 0xfffffeacu);
/* 89b1e6: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89b1ec: mov dword ptr [ebp - 0x14c], eax */
  W32((uint32_t)(ebp + 0xfffffeb4u), eax);
/* 89b1f2: mov dword ptr [ebp - 0x148], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffeb8u), 0x3f800000u);
/* 89b1fc: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 89b1ff: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 89b202: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89b205: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89b208: lea edi, [ebp - 0x1a0] */
  edi = (uint32_t)(ebp + 0xfffffe60u);
/* 89b20e: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b210: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89b212: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b214: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89b217: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b219: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89b21c: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b21e: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89b221: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b224: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89b227: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b22a: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89b22d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b230: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89b233: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b236: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89b239: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b23b: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b23d: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b23f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b241: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b243: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b246: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89b249: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b24c: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89b24f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b252: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89b255: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b258: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89b25b: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b25d: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b25f: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b261: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b263: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b265: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b268: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89b26b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b26e: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89b271: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b274: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89b277: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b27a: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89b27d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b27f: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b281: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b283: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b285: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b287: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b289: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89b28b: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89b28d: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89b290: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89b293: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89b296: mov edx, dword ptr [ebp - 0x198] */
  edx = R32((uint32_t)(ebp + 0xfffffe68u));
/* 89b29c: mov eax, dword ptr [ebp - 0x1a0] */
  eax = R32((uint32_t)(ebp + 0xfffffe60u));
/* 89b2a2: mov ecx, dword ptr [ebp - 0x19c] */
  ecx = R32((uint32_t)(ebp + 0xfffffe64u));
/* 89b2a8: mov dword ptr [ebp - 0x204], edx */
  W32((uint32_t)(ebp + 0xfffffdfcu), edx);
/* 89b2ae: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 89b2b1: mov dword ptr [ebp - 0x124], edx */
  W32((uint32_t)(ebp + 0xfffffedcu), edx);
/* 89b2b7: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 89b2ba: mov dword ptr [ebp - 0x120], edx */
  W32((uint32_t)(ebp + 0xfffffee0u), edx);
/* 89b2c0: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 89b2c3: mov dword ptr [ebp - 0x11c], edx */
  W32((uint32_t)(ebp + 0xfffffee4u), edx);
/* 89b2c9: lea edx, [ebp - 0x124] */
  edx = (uint32_t)(ebp + 0xfffffedcu);
/* 89b2cf: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 89b2d2: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89b2d8: mov dword ptr [ebp - 0x118], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffee8u), 0x3f800000u);
/* 89b2e2: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 89b2e5: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89b2e8: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89b2eb: lea edi, [ebp - 0x1c0] */
  edi = (uint32_t)(ebp + 0xfffffe40u);
/* 89b2f1: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b2f3: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89b2f5: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b2f7: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89b2fa: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b2fc: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89b2ff: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b301: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89b304: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b307: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89b30a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b30d: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89b310: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b313: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89b316: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b319: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89b31c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b31e: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b320: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b322: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b324: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b326: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b329: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89b32c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b32f: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89b332: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b335: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89b338: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b33b: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89b33e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b340: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b342: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b344: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b346: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b348: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b34b: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89b34e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b351: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89b354: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b357: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89b35a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b35d: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89b360: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b362: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b364: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b366: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b368: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b36a: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b36c: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89b36e: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89b370: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89b373: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89b376: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89b379: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 89b37c: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89b37d: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89b380: mov edx, esp */
  edx = esp;
/* 89b382: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89b384: mov eax, dword ptr [ebp - 0x204] */
  eax = R32((uint32_t)(ebp + 0xfffffdfcu));
/* 89b38a: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89b38d: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89b390: mov edx, dword ptr [ebp - 0x1c0] */
  edx = R32((uint32_t)(ebp + 0xfffffe40u));
/* 89b396: mov eax, dword ptr [ebp - 0x1bc] */
  eax = R32((uint32_t)(ebp + 0xfffffe44u));
/* 89b39c: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89b39f: mov ecx, esp */
  ecx = esp;
/* 89b3a1: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89b3a3: mov edx, dword ptr [ebp - 0x1b8] */
  edx = R32((uint32_t)(ebp + 0xfffffe48u));
/* 89b3a9: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89b3ac: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89b3af: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89b3b5: call 0x6cc74d */
  esp -= 4; W32(esp, 0x89b3bau); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 89b3ba: fld dword ptr [ebp + ebx - 0x168] */
  { double v = F32((uint32_t)(ebp + ebx + 0xfffffe98u)); FPUSH(v); }
/* 89b3c1: mov eax, dword ptr [ebp + ebx - 0x168] */
  eax = R32((uint32_t)(ebp + ebx + 0xfffffe98u));
/* 89b3c8: mov edx, dword ptr [ebp - 0x16c] */
  edx = R32((uint32_t)(ebp + 0xfffffe94u));
/* 89b3ce: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 89b3d1: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 89b3d4: mov ecx, dword ptr [ebp + eax - 0x164] */
  ecx = R32((uint32_t)(ebp + eax + 0xfffffe9cu));
/* 89b3db: fld dword ptr [ebp + eax - 0x164] */
  { double v = F32((uint32_t)(ebp + eax + 0xfffffe9cu)); FPUSH(v); }
/* 89b3e2: lea eax, [ebp + eax - 0x164] */
  eax = (uint32_t)(ebp + eax + 0xfffffe9cu);
/* 89b3e9: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89b3eb: mov eax, dword ptr [ebp - 0x160] */
  eax = R32((uint32_t)(ebp + 0xfffffea0u));
/* 89b3f1: fstp dword ptr [ebp - 0x17c] */
  WF32((uint32_t)(ebp + 0xfffffe84u), ST0); FPOP();
/* 89b3f7: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 89b3fa: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 89b3fd: fstp dword ptr [ebp - 0x178] */
  WF32((uint32_t)(ebp + 0xfffffe88u), ST0); FPOP();
/* 89b403: lea ecx, [ebp - 0x180] */
  ecx = (uint32_t)(ebp + 0xfffffe80u);
/* 89b409: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89b40f: mov dword ptr [ebp - 0x180], eax */
  W32((uint32_t)(ebp + 0xfffffe80u), eax);
/* 89b415: mov dword ptr [ebp - 0x174], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe8cu), 0x3f800000u);
/* 89b41f: mov dword ptr [ebp - 0x44], ecx */
  W32((uint32_t)(ebp + 0xffffffbcu), ecx);
/* 89b422: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 89b425: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89b428: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89b42b: lea edi, [ebp - 0x1b0] */
  edi = (uint32_t)(ebp + 0xfffffe50u);
/* 89b431: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b433: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89b435: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b437: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89b43a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b43c: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89b43f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b441: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89b444: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b447: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89b44a: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b44d: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89b450: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b453: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89b456: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b459: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89b45c: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b45e: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b460: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b462: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b464: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b466: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b469: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89b46c: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b46f: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89b472: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b475: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89b478: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b47b: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89b47e: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b480: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b482: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b484: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b486: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b488: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b48b: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89b48e: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b491: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89b494: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b497: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89b49a: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b49d: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89b4a0: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b4a2: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b4a4: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b4a6: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b4a8: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b4aa: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b4ac: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89b4ae: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89b4b0: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89b4b3: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89b4b6: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89b4b9: mov edx, dword ptr [ebp - 0x1a8] */
  edx = R32((uint32_t)(ebp + 0xfffffe58u));
/* 89b4bf: mov eax, dword ptr [ebp - 0x1b0] */
  eax = R32((uint32_t)(ebp + 0xfffffe50u));
/* 89b4c5: mov ecx, dword ptr [ebp - 0x1ac] */
  ecx = R32((uint32_t)(ebp + 0xfffffe54u));
/* 89b4cb: mov dword ptr [ebp - 0xd8], edx */
  W32((uint32_t)(ebp + 0xffffff28u), edx);
/* 89b4d1: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 89b4d4: mov dword ptr [ebp - 0x134], edx */
  W32((uint32_t)(ebp + 0xfffffeccu), edx);
/* 89b4da: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 89b4dd: mov dword ptr [ebp - 0x130], edx */
  W32((uint32_t)(ebp + 0xfffffed0u), edx);
/* 89b4e3: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 89b4e6: mov dword ptr [ebp - 0x12c], edx */
  W32((uint32_t)(ebp + 0xfffffed4u), edx);
/* 89b4ec: lea edx, [ebp - 0x134] */
  edx = (uint32_t)(ebp + 0xfffffeccu);
/* 89b4f2: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 89b4f5: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89b4fb: mov dword ptr [ebp - 0x128], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffed8u), 0x3f800000u);
/* 89b505: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 89b508: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89b50b: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89b50e: lea edi, [ebp - 0x224] */
  edi = (uint32_t)(ebp + 0xfffffddcu);
/* 89b514: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b516: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89b518: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b51a: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89b51d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b51f: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89b522: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b524: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89b527: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b52a: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89b52d: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b530: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89b533: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b536: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89b539: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b53c: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89b53f: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b541: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b543: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b545: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b547: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b549: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b54c: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89b54f: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b552: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89b555: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b558: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89b55b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b55e: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89b561: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b563: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b565: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b567: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b569: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b56b: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b56e: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89b571: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b574: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89b577: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b57a: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89b57d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b580: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89b583: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b585: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b587: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b589: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b58b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b58d: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b58f: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89b591: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89b593: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89b596: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89b599: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89b59c: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 89b59f: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89b5a0: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89b5a3: mov edx, esp */
  edx = esp;
/* 89b5a5: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89b5a7: mov eax, dword ptr [ebp - 0xd8] */
  eax = R32((uint32_t)(ebp + 0xffffff28u));
/* 89b5ad: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89b5b0: mov dword ptr [edx + 8], eax */
  W32((uint32_t)(edx + 0x8u), eax);
/* 89b5b3: mov edx, dword ptr [ebp - 0x224] */
  edx = R32((uint32_t)(ebp + 0xfffffddcu));
/* 89b5b9: mov eax, dword ptr [ebp - 0x220] */
  eax = R32((uint32_t)(ebp + 0xfffffde0u));
/* 89b5bf: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89b5c2: mov ecx, esp */
  ecx = esp;
/* 89b5c4: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89b5c6: mov edx, dword ptr [ebp - 0x21c] */
  edx = R32((uint32_t)(ebp + 0xfffffde4u));
/* 89b5cc: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89b5cf: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89b5d2: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89b5d8: call 0x6cc74d */
  esp -= 4; W32(esp, 0x89b5ddu); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 89b5dd: fld dword ptr [ebp + ebx - 0x164] */
  { double v = F32((uint32_t)(ebp + ebx + 0xfffffe9cu)); FPUSH(v); }
/* 89b5e4: mov ecx, dword ptr [ebp + ebx - 0x164] */
  ecx = R32((uint32_t)(ebp + ebx + 0xfffffe9cu));
/* 89b5eb: lea eax, [ebp + ebx - 0x164] */
  eax = (uint32_t)(ebp + ebx + 0xfffffe9cu);
/* 89b5f2: mov eax, dword ptr [ebp - 0x54] */
  eax = R32((uint32_t)(ebp + 0xffffffacu));
/* 89b5f5: mov edx, dword ptr [ebp + eax - 0x16c] */
  edx = R32((uint32_t)(ebp + eax + 0xfffffe94u));
/* 89b5fc: fld dword ptr [ebp + eax - 0x16c] */
  { double v = F32((uint32_t)(ebp + eax + 0xfffffe94u)); FPUSH(v); }
/* 89b603: lea eax, [ebp + eax - 0x16c] */
  eax = (uint32_t)(ebp + eax + 0xfffffe94u);
/* 89b60a: fstp dword ptr [ebp - 0x190] */
  WF32((uint32_t)(ebp + 0xfffffe70u), ST0); FPOP();
/* 89b610: mov eax, dword ptr [ebp - 0x168] */
  eax = R32((uint32_t)(ebp + 0xfffffe98u));
/* 89b616: mov dword ptr [ebp - 0x28], ecx */
  W32((uint32_t)(ebp + 0xffffffd8u), ecx);
/* 89b619: fstp dword ptr [ebp - 0x188] */
  WF32((uint32_t)(ebp + 0xfffffe78u), ST0); FPOP();
/* 89b61f: mov ecx, dword ptr [ebp - 0x15c] */
  ecx = R32((uint32_t)(ebp + 0xfffffea4u));
/* 89b625: mov dword ptr [ebp - 0x30], edx */
  W32((uint32_t)(ebp + 0xffffffd0u), edx);
/* 89b628: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 89b62b: lea edx, [ebp - 0x190] */
  edx = (uint32_t)(ebp + 0xfffffe70u);
/* 89b631: lea eax, [ebp - 0x2a4] */
  eax = (uint32_t)(ebp + 0xfffffd5cu);
/* 89b637: mov dword ptr [ebp - 0x18c], ecx */
  W32((uint32_t)(ebp + 0xfffffe74u), ecx);
/* 89b63d: mov dword ptr [ebp - 0x184], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe7cu), 0x3f800000u);
/* 89b647: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 89b64a: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 89b64d: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89b650: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89b653: lea edi, [ebp - 0xf4] */
  edi = (uint32_t)(ebp + 0xffffff0cu);
/* 89b659: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b65b: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89b65d: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b65f: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89b662: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b664: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89b667: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b669: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89b66c: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b66f: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89b672: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b675: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89b678: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b67b: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89b67e: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b681: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89b684: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b686: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b688: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b68a: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b68c: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b68e: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b691: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89b694: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b697: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89b69a: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b69d: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89b6a0: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b6a3: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89b6a6: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b6a8: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b6aa: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b6ac: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b6ae: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b6b0: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b6b3: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89b6b6: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b6b9: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89b6bc: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b6bf: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89b6c2: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b6c5: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89b6c8: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b6ca: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b6cc: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b6ce: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b6d0: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b6d2: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b6d4: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89b6d6: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89b6d8: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89b6db: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89b6de: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89b6e1: mov edx, dword ptr [ebp - 0x30] */
  edx = R32((uint32_t)(ebp + 0xffffffd0u));
/* 89b6e4: mov eax, dword ptr [ebp - 0xf4] */
  eax = R32((uint32_t)(ebp + 0xffffff0cu));
/* 89b6ea: mov ecx, dword ptr [ebp - 0xf0] */
  ecx = R32((uint32_t)(ebp + 0xffffff10u));
/* 89b6f0: mov ebx, dword ptr [ebp - 0xec] */
  ebx = R32((uint32_t)(ebp + 0xffffff14u));
/* 89b6f6: mov dword ptr [ebp - 0xd4], edx */
  W32((uint32_t)(ebp + 0xffffff2cu), edx);
/* 89b6fc: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 89b6ff: mov dword ptr [ebp - 0xd0], edx */
  W32((uint32_t)(ebp + 0xffffff30u), edx);
/* 89b705: mov edx, dword ptr [ebp - 0x28] */
  edx = R32((uint32_t)(ebp + 0xffffffd8u));
/* 89b708: mov dword ptr [ebp - 0xcc], edx */
  W32((uint32_t)(ebp + 0xffffff34u), edx);
/* 89b70e: lea edx, [ebp - 0xd4] */
  edx = (uint32_t)(ebp + 0xffffff2cu);
/* 89b714: mov dword ptr [ebp - 0x44], edx */
  W32((uint32_t)(ebp + 0xffffffbcu), edx);
/* 89b717: lea edx, [ebp - 0x2a4] */
  edx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89b71d: mov dword ptr [ebp - 0xc8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff38u), 0x3f800000u);
/* 89b727: mov dword ptr [ebp - 0x1c], edx */
  W32((uint32_t)(ebp + 0xffffffe4u), edx);
/* 89b72a: mov esi, dword ptr [ebp - 0x44] */
  esi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89b72d: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89b730: lea edi, [ebp - 0xac] */
  edi = (uint32_t)(ebp + 0xffffff54u);
/* 89b736: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b738: fmul dword ptr [edx] */
  ST0 = ST0 * (F32((uint32_t)(edx)));
/* 89b73a: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b73c: fmul dword ptr [edx + 4] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x4u)));
/* 89b73f: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b741: fmul dword ptr [edx + 8] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x8u)));
/* 89b744: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* 89b746: fmul dword ptr [edx + 0xc] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0xcu)));
/* 89b749: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b74c: fmul dword ptr [edx + 0x10] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x10u)));
/* 89b74f: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b752: fmul dword ptr [edx + 0x14] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x14u)));
/* 89b755: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b758: fmul dword ptr [edx + 0x18] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x18u)));
/* 89b75b: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* 89b75e: fmul dword ptr [edx + 0x1c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x1cu)));
/* 89b761: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b763: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b765: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b767: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b769: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b76b: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b76e: fmul dword ptr [edx + 0x20] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x20u)));
/* 89b771: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b774: fmul dword ptr [edx + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x24u)));
/* 89b777: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b77a: fmul dword ptr [edx + 0x28] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x28u)));
/* 89b77d: fld dword ptr [esi + 8] */
  { double v = F32((uint32_t)(esi + 0x8u)); FPUSH(v); }
/* 89b780: fmul dword ptr [edx + 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x2cu)));
/* 89b783: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b785: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b787: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b789: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b78b: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b78d: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b790: fmul dword ptr [edx + 0x30] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x30u)));
/* 89b793: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b796: fmul dword ptr [edx + 0x34] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x34u)));
/* 89b799: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b79c: fmul dword ptr [edx + 0x38] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x38u)));
/* 89b79f: fld dword ptr [esi + 0xc] */
  { double v = F32((uint32_t)(esi + 0xcu)); FPUSH(v); }
/* 89b7a2: fmul dword ptr [edx + 0x3c] */
  ST0 = ST0 * (F32((uint32_t)(edx + 0x3cu)));
/* 89b7a5: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b7a7: faddp st(7) */
  STI(7) = STI(7) + ST0;
  FPOP();
/* 89b7a9: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b7ab: faddp st(4) */
  STI(4) = STI(4) + ST0;
  FPOP();
/* 89b7ad: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89b7af: fxch st(3) */
  { double t = ST0; ST0 = STI(3); STI(3) = t; }
/* 89b7b1: fstp dword ptr [edi] */
  WF32((uint32_t)(edi), ST0); FPOP();
/* 89b7b3: fxch st(1) */
  { double t = ST0; ST0 = STI(1); STI(1) = t; }
/* 89b7b5: fstp dword ptr [edi + 4] */
  WF32((uint32_t)(edi + 0x4u), ST0); FPOP();
/* 89b7b8: fstp dword ptr [edi + 8] */
  WF32((uint32_t)(edi + 0x8u), ST0); FPOP();
/* 89b7bb: fstp dword ptr [edi + 0xc] */
  WF32((uint32_t)(edi + 0xcu), ST0); FPOP();
/* 89b7be: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 89b7c1: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89b7c2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89b7c5: mov edx, esp */
  edx = esp;
/* 89b7c7: mov dword ptr [edx], eax */
  W32((uint32_t)(edx), eax);
/* 89b7c9: mov dword ptr [edx + 4], ecx */
  W32((uint32_t)(edx + 0x4u), ecx);
/* 89b7cc: mov ecx, dword ptr [ebp - 0xac] */
  ecx = R32((uint32_t)(ebp + 0xffffff54u));
/* 89b7d2: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89b7d5: mov dword ptr [edx + 8], ebx */
  W32((uint32_t)(edx + 0x8u), ebx);
/* 89b7d8: mov eax, esp */
  eax = esp;
/* 89b7da: mov edx, dword ptr [ebp - 0xa8] */
  edx = R32((uint32_t)(ebp + 0xffffff58u));
/* 89b7e0: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 89b7e2: mov ecx, dword ptr [ebp - 0xa4] */
  ecx = R32((uint32_t)(ebp + 0xffffff5cu));
/* 89b7e8: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 89b7eb: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 89b7ee: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89b7f4: call 0x6cc74d */
  esp -= 4; W32(esp, 0x89b7f9u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 89b7f9: inc dword ptr [ebp - 0x18] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffffe8u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffffe8u), r);
  }
/* 89b7fc: jmp 0x89b173 */
  goto L_89b173;
L_89b801: /* 89b801: inc dword ptr [ebp - 0x98] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0xffffff68u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(ebp + 0xffffff68u), r);
  }
/* 89b807: jmp 0x89b160 */
  goto L_89b160;
L_89b80c: /* 89b80c: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89b80e: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89b814: call 0x6c6f6e */
  esp -= 4; W32(esp, 0x89b819u); SPILL(); f_6c6f6e(); if (g_unwind) return; RELOAD();
/* 89b819: lea ecx, [ebp - 0x264] */
  ecx = (uint32_t)(ebp + 0xfffffd9cu);
/* 89b81f: mov byte ptr [ebp - 4], 0x13 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x13u);
/* 89b823: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89b829u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89b829: lea ecx, [ebp - 0x2a4] */
  ecx = (uint32_t)(ebp + 0xfffffd5cu);
/* 89b82f: mov byte ptr [ebp - 4], 8 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x8u);
/* 89b833: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89b839u); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
L_89b839: /* 89b839: mov eax, dword ptr [ebp - 0x94] */
  eax = R32((uint32_t)(ebp + 0xffffff6cu));
/* 89b83f: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 89b842: mov edi, dword ptr [ebp - 0x6c] */
  edi = R32((uint32_t)(ebp + 0xffffff94u));
/* 89b845: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 89b846: mov dword ptr [ebp - 0x94], eax */
  W32((uint32_t)(ebp + 0xffffff6cu), eax);
/* 89b84c: jmp 0x89af30 */
  goto L_89af30;
L_89b851: /* 89b851: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89b857: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 89b85b: call 0x6cadcb */
  esp -= 4; W32(esp, 0x89b860u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
L_89b860: /* 89b860: mov eax, dword ptr [esi + 0x334] */
  eax = R32((uint32_t)(esi + 0x334u));
/* 89b866: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b868: je 0x89b8fd */
  if (zf) goto L_89b8fd;
L_89b86e: /* 89b86e: mov edx, dword ptr [edi] */
  edx = R32((uint32_t)(edi));
/* 89b870: mov ecx, edi */
  ecx = edi;
/* 89b872: call dword ptr [edx + 0x13c] */
  { uint32_t t = R32((uint32_t)(edx + 0x13cu)); esp -= 4; W32(esp, 0x89b878u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89b878: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b87a: je 0x89b899 */
  if (zf) goto L_89b899;
L_89b87c: /* 89b87c: mov ecx, dword ptr [0xb21bb4] */
  ecx = R32((uint32_t)(0xb21bb4u));
/* 89b882: mov edx, dword ptr [ecx + 0x15220] */
  edx = R32((uint32_t)(ecx + 0x15220u));
/* 89b888: push 0x6c8607 */
  { uint32_t v = 0x6c8607u; esp -= 4; W32(esp, v); }
/* 89b88d: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89b88e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89b88f: call 0x6c9a89 */
  esp -= 4; W32(esp, 0x89b894u); SPILL(); f_6c9a89(); if (g_unwind) return; RELOAD();
/* 89b894: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89b897: jmp 0x89b8fd */
  goto L_89b8fd;
L_89b899: /* 89b899: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 89b89c: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b89e: je 0x89b8fd */
  if (zf) goto L_89b8fd;
L_89b8a0: /* 89b8a0: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 89b8a3: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b8a5: je 0x89b8fd */
  if (zf) goto L_89b8fd;
L_89b8a7: /* 89b8a7: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 89b8aa: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b8ac: je 0x89b8fd */
  if (zf) goto L_89b8fd;
L_89b8ae: /* 89b8ae: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* 89b8b0: lea ecx, [ebp - 0x2ec] */
  ecx = (uint32_t)(ebp + 0xfffffd14u);
/* 89b8b6: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89b8b7: mov ecx, edi */
  ecx = edi;
/* 89b8b9: call dword ptr [eax + 0xb8] */
  { uint32_t t = R32((uint32_t)(eax + 0xb8u)); esp -= 4; W32(esp, 0x89b8bfu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89b8bf: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89b8c2: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89b8c4: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89b8c5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89b8c7: mov byte ptr [ebp - 4], 0x19 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x19u);
/* 89b8cb: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x89b8ceu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89b8ce: lea ecx, [ebp - 0x2ec] */
  ecx = (uint32_t)(ebp + 0xfffffd14u);
/* 89b8d4: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 89b8d8: call dword ptr [0xcfa1bc] */
  esp -= 4; W32(esp, 0x89b8deu); SPILL(); f_4e3a1c(); if (g_unwind) return; /* Core!??1FMatrix@@QAE@XZ */ RELOAD();
/* 89b8de: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 89b8e1: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 89b8e4: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* 89b8e7: mov eax, dword ptr [edx + 0x534] */
  eax = R32((uint32_t)(edx + 0x534u));
/* 89b8ed: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89b8f0: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89b8f1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89b8f2: mov ecx, dword ptr [esi + 0x334] */
  ecx = R32((uint32_t)(esi + 0x334u));
/* 89b8f8: call 0x6cb9ec */
  esp -= 4; W32(esp, 0x89b8fdu); SPILL(); f_6cb9ec(); if (g_unwind) return; RELOAD();
L_89b8fd: /* 89b8fd: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89b900: mov eax, dword ptr [edx + 0x1a0] */
  eax = R32((uint32_t)(edx + 0x1a0u));
/* 89b906: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b908: je 0x89bc7a */
  if (zf) goto L_89bc7a;
L_89b90e: /* 89b90e: mov eax, dword ptr [edx + 0x18c] */
  eax = R32((uint32_t)(edx + 0x18cu));
/* 89b914: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b916: je 0x89bc7a */
  if (zf) goto L_89bc7a;
L_89b91c: /* 89b91c: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 89b91f: mov eax, dword ptr [eax + 4] */
  eax = R32((uint32_t)(eax + 0x4u));
/* 89b922: mov eax, dword ptr [eax + 0x30] */
  eax = R32((uint32_t)(eax + 0x30u));
/* 89b925: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b927: je 0x89b94a */
  if (zf) goto L_89b94a;
L_89b929: /* 89b929: mov eax, dword ptr [eax + 0x540] */
  eax = R32((uint32_t)(eax + 0x540u));
/* 89b92f: cmp eax, 0xd */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xdu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89b932: je 0x89bc7a */
  if (zf) goto L_89bc7a;
L_89b938: /* 89b938: cmp eax, 0xe */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xeu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89b93b: je 0x89bc7a */
  if (zf) goto L_89bc7a;
L_89b941: /* 89b941: cmp eax, 0xf */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89b944: je 0x89bc7a */
  if (zf) goto L_89bc7a;
L_89b94a: /* 89b94a: mov eax, dword ptr [ebp - 0x70] */
  eax = R32((uint32_t)(ebp + 0xffffff90u));
/* 89b94d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b94f: jne 0x89b9f0 */
  if (!zf) goto L_89b9f0;
L_89b955: /* 89b955: mov eax, dword ptr [esi + 0x1f0] */
  eax = R32((uint32_t)(esi + 0x1f0u));
/* 89b95b: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89b95d: je 0x89b9f0 */
  if (zf) goto L_89b9f0;
L_89b963: /* 89b963: mov ecx, dword ptr [edx + 0xf0] */
  ecx = R32((uint32_t)(edx + 0xf0u));
/* 89b969: mov edx, dword ptr [esi + 0x1ec] */
  edx = R32((uint32_t)(esi + 0x1ecu));
/* 89b96f: imul ecx, ecx, 0x11c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x11cu);
  ecx = (uint32_t)r;
  }
/* 89b975: mov eax, dword ptr [ecx + edx + 0x18] */
  eax = R32((uint32_t)(ecx + edx + 0x18u));
/* 89b979: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89b97b: jle 0x89b9f0 */
  if ((zf || sf != of)) goto L_89b9f0;
L_89b97d: /* 89b97d: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89b980: call dword ptr [0xcfa374] */
  esp -= 4; W32(esp, 0x89b986u); SPILL(); f_4e2d5b(); if (g_unwind) return; /* Core!??0FArray@@QAE@XZ */ RELOAD();
/* 89b986: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 89b989: mov ecx, dword ptr [eax + 0xf0] */
  ecx = R32((uint32_t)(eax + 0xf0u));
/* 89b98f: mov edx, dword ptr [esi + 0x1ec] */
  edx = R32((uint32_t)(esi + 0x1ecu));
/* 89b995: imul ecx, ecx, 0x11c */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(0x11cu);
  ecx = (uint32_t)r;
  }
/* 89b99b: mov eax, dword ptr [ecx + edx + 0x18] */
  eax = R32((uint32_t)(ecx + edx + 0x18u));
/* 89b99f: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89b9a0: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 89b9a2: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89b9a5: mov byte ptr [ebp - 4], 0x1a */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1au);
/* 89b9a9: call dword ptr [0xcfa398] */
  esp -= 4; W32(esp, 0x89b9afu); SPILL(); f_4e33b4(); if (g_unwind) return; /* Core!?AddZeroed@FArray@@QAEHHH@Z */ RELOAD();
/* 89b9af: mov ecx, dword ptr [ebp - 0x3c] */
  ecx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 89b9b2: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89b9b5: lea eax, [ebp + 0x18] */
  eax = (uint32_t)(ebp + 0x18u);
/* 89b9b8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89b9b9: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 89b9bb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89b9bc: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89b9bd: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89b9be: call 0x6c78e2 */
  esp -= 4; W32(esp, 0x89b9c3u); SPILL(); f_6c78e2(); if (g_unwind) return; RELOAD();
/* 89b9c3: mov ecx, dword ptr [ebp - 0x38] */
  ecx = R32((uint32_t)(ebp + 0xffffffc8u));
/* 89b9c6: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89b9c9: xor eax, eax */
  eax = 0;
/* 89b9cb: jmp 0x89b9d0 */
  goto L_89b9d0;
L_89b9d0: /* 89b9d0: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89b9d2: jge 0x89b9d7 */
  if ((sf == of)) goto L_89b9d7;
L_89b9d4: /* 89b9d4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* 89b9d5: jmp 0x89b9d0 */
  goto L_89b9d0;
L_89b9d7: /* 89b9d7: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89b9d9: push 0x20 */
  { uint32_t v = 0x20u; esp -= 4; W32(esp, v); }
/* 89b9db: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89b9de: call dword ptr [0xcfa394] */
  esp -= 4; W32(esp, 0x89b9e4u); SPILL(); f_4e2d79(); if (g_unwind) return; /* Core!?Empty@FArray@@QAEXHH@Z */ RELOAD();
/* 89b9e4: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89b9e7: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 89b9eb: call 0x6ccbee */
  esp -= 4; W32(esp, 0x89b9f0u); SPILL(); f_6ccbee(); if (g_unwind) return; RELOAD();
L_89b9f0: /* 89b9f0: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* 89b9f3: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 89b9f5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89b9f6: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89b9fc: call 0x6c460b */
  esp -= 4; W32(esp, 0x89ba01u); SPILL(); f_6c460b(); if (g_unwind) return; RELOAD();
/* 89ba01: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 89ba04: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89ba06: lea eax, [ebp - 0x200] */
  eax = (uint32_t)(ebp + 0xfffffe00u);
/* 89ba0c: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ba0d: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89ba0f: mov byte ptr [ebp - 4], 0x1b */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1bu);
/* 89ba13: call dword ptr [edx + 0x38] */
  { uint32_t t = R32((uint32_t)(edx + 0x38u)); esp -= 4; W32(esp, 0x89ba16u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* 89ba16: mov edi, dword ptr [ebp + 0x18] */
  edi = R32((uint32_t)(ebp + 0x18u));
/* 89ba19: xor ebx, ebx */
  ebx = 0;
/* 89ba1b: jmp 0x89ba20 */
  goto L_89ba20;
L_89ba20: /* 89ba20: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 89ba23: cmp ebx, dword ptr [eax + 0x18c] */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(R32((uint32_t)(eax + 0x18cu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89ba29: jge 0x89bc5b */
  if ((sf == of)) goto L_89bc5b;
L_89ba2f: /* 89ba2f: mov ecx, dword ptr [eax + 0x188] */
  ecx = R32((uint32_t)(eax + 0x188u));
/* 89ba35: mov esi, ebx */
  esi = ebx;
/* 89ba37: shl esi, 5 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 5;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* 89ba3a: mov eax, dword ptr [ecx + esi + 0xc] */
  eax = R32((uint32_t)(ecx + esi + 0xcu));
/* 89ba3e: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89ba41: jne 0x89ba82 */
  if (!zf) goto L_89ba82;
L_89ba43: /* 89ba43: lea edx, [ebp - 0xac] */
  edx = (uint32_t)(ebp + 0xffffff54u);
/* 89ba49: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89ba4a: lea ecx, [ebp - 0x1c] */
  ecx = (uint32_t)(ebp + 0xffffffe4u);
/* 89ba4d: mov dword ptr [ebp - 0xac], 0 */
  W32((uint32_t)(ebp + 0xffffff54u), 0x0u);
/* 89ba57: mov dword ptr [ebp - 0xa8], 0x3f4ccccd */
  W32((uint32_t)(ebp + 0xffffff58u), 0x3f4ccccdu);
/* 89ba61: mov dword ptr [ebp - 0xa4], 0 */
  W32((uint32_t)(ebp + 0xffffff5cu), 0x0u);
/* 89ba6b: mov dword ptr [ebp - 0xa0], 0 */
  W32((uint32_t)(ebp + 0xffffff60u), 0x0u);
/* 89ba75: call 0x6c576d */
  esp -= 4; W32(esp, 0x89ba7au); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 89ba7a: mov edi, dword ptr [ebp - 0x1c] */
  edi = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89ba7d: jmp 0x89bb8a */
  goto L_89bb8a;
L_89ba82: /* 89ba82: cmp eax, 2 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89ba85: jne 0x89bac6 */
  if (!zf) goto L_89bac6;
L_89ba87: /* 89ba87: lea eax, [ebp - 0x224] */
  eax = (uint32_t)(ebp + 0xfffffddcu);
/* 89ba8d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89ba8e: lea ecx, [ebp - 0x44] */
  ecx = (uint32_t)(ebp + 0xffffffbcu);
/* 89ba91: mov dword ptr [ebp - 0x224], 0x3f4ccccd */
  W32((uint32_t)(ebp + 0xfffffddcu), 0x3f4ccccdu);
/* 89ba9b: mov dword ptr [ebp - 0x220], 0x3e4ccccd */
  W32((uint32_t)(ebp + 0xfffffde0u), 0x3e4ccccdu);
/* 89baa5: mov dword ptr [ebp - 0x21c], 0 */
  W32((uint32_t)(ebp + 0xfffffde4u), 0x0u);
/* 89baaf: mov dword ptr [ebp - 0x218], 0 */
  W32((uint32_t)(ebp + 0xfffffde8u), 0x0u);
/* 89bab9: call 0x6c576d */
  esp -= 4; W32(esp, 0x89babeu); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 89babe: mov edi, dword ptr [ebp - 0x44] */
  edi = R32((uint32_t)(ebp + 0xffffffbcu));
/* 89bac1: jmp 0x89bb8a */
  goto L_89bb8a;
L_89bac6: /* 89bac6: cmp eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89bac9: jne 0x89bb0a */
  if (!zf) goto L_89bb0a;
L_89bacb: /* 89bacb: lea ecx, [ebp - 0x1c0] */
  ecx = (uint32_t)(ebp + 0xfffffe40u);
/* 89bad1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89bad2: lea ecx, [ebp - 0x54] */
  ecx = (uint32_t)(ebp + 0xffffffacu);
/* 89bad5: mov dword ptr [ebp - 0x1c0], 0x3f4ccccd */
  W32((uint32_t)(ebp + 0xfffffe40u), 0x3f4ccccdu);
/* 89badf: mov dword ptr [ebp - 0x1bc], 0 */
  W32((uint32_t)(ebp + 0xfffffe44u), 0x0u);
/* 89bae9: mov dword ptr [ebp - 0x1b8], 0x3f800000 */
  W32((uint32_t)(ebp + 0xfffffe48u), 0x3f800000u);
/* 89baf3: mov dword ptr [ebp - 0x1b4], 0 */
  W32((uint32_t)(ebp + 0xfffffe4cu), 0x0u);
/* 89bafd: call 0x6c576d */
  esp -= 4; W32(esp, 0x89bb02u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 89bb02: mov edi, dword ptr [ebp - 0x54] */
  edi = R32((uint32_t)(ebp + 0xffffffacu));
/* 89bb05: jmp 0x89bb8a */
  goto L_89bb8a;
L_89bb0a: /* 89bb0a: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89bb0d: jne 0x89bb4b */
  if (!zf) goto L_89bb4b;
L_89bb0f: /* 89bb0f: lea edx, [ebp - 0xd4] */
  edx = (uint32_t)(ebp + 0xffffff2cu);
/* 89bb15: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89bb16: lea ecx, [ebp - 0x40] */
  ecx = (uint32_t)(ebp + 0xffffffc0u);
/* 89bb19: mov dword ptr [ebp - 0xd4], 0x3e19999a */
  W32((uint32_t)(ebp + 0xffffff2cu), 0x3e19999au);
/* 89bb23: mov dword ptr [ebp - 0xd0], 0x3f400000 */
  W32((uint32_t)(ebp + 0xffffff30u), 0x3f400000u);
/* 89bb2d: mov dword ptr [ebp - 0xcc], 0x3f800000 */
  W32((uint32_t)(ebp + 0xffffff34u), 0x3f800000u);
/* 89bb37: mov dword ptr [ebp - 0xc8], 0 */
  W32((uint32_t)(ebp + 0xffffff38u), 0x0u);
/* 89bb41: call 0x6c576d */
  esp -= 4; W32(esp, 0x89bb46u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 89bb46: mov edi, dword ptr [ebp - 0x40] */
  edi = R32((uint32_t)(ebp + 0xffffffc0u));
/* 89bb49: jmp 0x89bb8a */
  goto L_89bb8a;
L_89bb4b: /* 89bb4b: cmp eax, 5 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x5u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89bb4e: jl 0x89bb8a */
  if ((sf != of)) goto L_89bb8a;
L_89bb50: /* 89bb50: lea eax, [ebp - 0xbc] */
  eax = (uint32_t)(ebp + 0xffffff44u);
/* 89bb56: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89bb57: lea ecx, [ebp - 0x74] */
  ecx = (uint32_t)(ebp + 0xffffff8cu);
/* 89bb5a: mov dword ptr [ebp - 0xbc], 0x3f666666 */
  W32((uint32_t)(ebp + 0xffffff44u), 0x3f666666u);
/* 89bb64: mov dword ptr [ebp - 0xb8], 0x3f666666 */
  W32((uint32_t)(ebp + 0xffffff48u), 0x3f666666u);
/* 89bb6e: mov dword ptr [ebp - 0xb4], 0x3f666666 */
  W32((uint32_t)(ebp + 0xffffff4cu), 0x3f666666u);
/* 89bb78: mov dword ptr [ebp - 0xb0], 0 */
  W32((uint32_t)(ebp + 0xffffff50u), 0x0u);
/* 89bb82: call 0x6c576d */
  esp -= 4; W32(esp, 0x89bb87u); SPILL(); f_6c576d(); if (g_unwind) return; RELOAD();
/* 89bb87: mov edi, dword ptr [ebp - 0x74] */
  edi = R32((uint32_t)(ebp + 0xffffff8cu));
L_89bb8a: /* 89bb8a: mov ecx, dword ptr [ebp - 0x14] */
  ecx = R32((uint32_t)(ebp + 0xffffffecu));
/* 89bb8d: mov edx, dword ptr [ecx + 0x188] */
  edx = R32((uint32_t)(ecx + 0x188u));
/* 89bb93: add esi, edx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* 89bb95: lea eax, [esi + 0x10] */
  eax = (uint32_t)(esi + 0x10u);
/* 89bb98: mov ecx, dword ptr [eax] */
  ecx = R32((uint32_t)(eax));
/* 89bb9a: mov edx, dword ptr [eax + 4] */
  edx = R32((uint32_t)(eax + 0x4u));
/* 89bb9d: mov eax, dword ptr [eax + 8] */
  eax = R32((uint32_t)(eax + 0x8u));
/* 89bba0: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
/* 89bba3: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 89bba6: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 89bba9: mov dword ptr [ebp - 0x2c], edx */
  W32((uint32_t)(ebp + 0xffffffd4u), edx);
/* 89bbac: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 89bbaf: mov dword ptr [ebp - 0x30], ecx */
  W32((uint32_t)(ebp + 0xffffffd0u), ecx);
/* 89bbb2: fmul dword ptr [ebp - 0x2c] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd4u)));
/* 89bbb5: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89bbb7: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 89bbba: fmul dword ptr [ebp - 0x30] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd0u)));
/* 89bbbd: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89bbbf: fcom qword ptr [0xa1a808] */
  fpu_com(ST0, F64((uint32_t)(0xa1a808u)));
/* 89bbc5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 89bbc7: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 89bbca: jne 0x89bbff */
  if (!zf) goto L_89bbff;
L_89bbcc: /* 89bbcc: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89bbcf: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 89bbd2: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x89bbd8u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 89bbd8: fstp qword ptr [ebp - 0x5c] */
  WF64((uint32_t)(ebp + 0xffffffa4u), ST0); FPOP();
/* 89bbdb: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89bbde: fld qword ptr [0xa18288] */
  { double v = F64((uint32_t)(0xa18288u)); FPUSH(v); }
/* 89bbe4: fdiv qword ptr [ebp - 0x5c] */
  ST0 = ST0 / (F64((uint32_t)(ebp + 0xffffffa4u)));
/* 89bbe7: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 89bbea: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89bbec: fstp dword ptr [ebp - 0x30] */
  WF32((uint32_t)(ebp + 0xffffffd0u), ST0); FPOP();
/* 89bbef: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 89bbf2: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89bbf4: fstp dword ptr [ebp - 0x2c] */
  WF32((uint32_t)(ebp + 0xffffffd4u), ST0); FPOP();
/* 89bbf7: fmul dword ptr [ebp - 0x28] */
  ST0 = ST0 * (F32((uint32_t)(ebp + 0xffffffd8u)));
/* 89bbfa: fstp dword ptr [ebp - 0x28] */
  WF32((uint32_t)(ebp + 0xffffffd8u), ST0); FPOP();
/* 89bbfd: jmp 0x89bc01 */
  goto L_89bc01;
L_89bbff: /* 89bbff: fstp st(0) */
  STI(0) = ST0; FPOP();
L_89bc01: /* 89bc01: fld dword ptr [ebp - 0x28] */
  { double v = F32((uint32_t)(ebp + 0xffffffd8u)); FPUSH(v); }
/* 89bc04: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89bc05: fadd dword ptr [esi + 8] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x8u)));
/* 89bc08: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89bc0b: fld dword ptr [ebp - 0x2c] */
  { double v = F32((uint32_t)(ebp + 0xffffffd4u)); FPUSH(v); }
/* 89bc0e: mov ecx, esp */
  ecx = esp;
/* 89bc10: fadd dword ptr [esi + 4] */
  ST0 = ST0 + (F32((uint32_t)(esi + 0x4u)));
/* 89bc13: sub esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89bc16: fld dword ptr [ebp - 0x30] */
  { double v = F32((uint32_t)(ebp + 0xffffffd0u)); FPUSH(v); }
/* 89bc19: fadd dword ptr [esi] */
  ST0 = ST0 + (F32((uint32_t)(esi)));
/* 89bc1b: fstp dword ptr [ebp - 0x3c] */
  WF32((uint32_t)(ebp + 0xffffffc4u), ST0); FPOP();
/* 89bc1e: mov edx, dword ptr [ebp - 0x3c] */
  edx = R32((uint32_t)(ebp + 0xffffffc4u));
/* 89bc21: mov dword ptr [ecx], edx */
  W32((uint32_t)(ecx), edx);
/* 89bc23: fstp dword ptr [ebp - 0x38] */
  WF32((uint32_t)(ebp + 0xffffffc8u), ST0); FPOP();
/* 89bc26: mov eax, dword ptr [ebp - 0x38] */
  eax = R32((uint32_t)(ebp + 0xffffffc8u));
/* 89bc29: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 89bc2c: fstp dword ptr [ebp - 0x34] */
  WF32((uint32_t)(ebp + 0xffffffccu), ST0); FPOP();
/* 89bc2f: mov edx, dword ptr [ebp - 0x34] */
  edx = R32((uint32_t)(ebp + 0xffffffccu));
/* 89bc32: mov dword ptr [ecx + 8], edx */
  W32((uint32_t)(ecx + 0x8u), edx);
/* 89bc35: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 89bc37: mov edx, dword ptr [esi + 4] */
  edx = R32((uint32_t)(esi + 0x4u));
/* 89bc3a: mov eax, esp */
  eax = esp;
/* 89bc3c: mov dword ptr [eax], ecx */
  W32((uint32_t)(eax), ecx);
/* 89bc3e: mov ecx, dword ptr [esi + 8] */
  ecx = R32((uint32_t)(esi + 0x8u));
/* 89bc41: mov dword ptr [eax + 4], edx */
  W32((uint32_t)(eax + 0x4u), edx);
/* 89bc44: mov dword ptr [eax + 8], ecx */
  W32((uint32_t)(eax + 0x8u), ecx);
/* 89bc47: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89bc4d: call 0x6cc74d */
  esp -= 4; W32(esp, 0x89bc52u); SPILL(); f_6cc74d(); if (g_unwind) return; RELOAD();
/* 89bc52: mov esi, dword ptr [ebp - 0x64] */
  esi = R32((uint32_t)(ebp + 0xffffff9cu));
/* 89bc55: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* 89bc56: jmp 0x89ba20 */
  goto L_89ba20;
L_89bc5b: /* 89bc5b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 89bc5d: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89bc63: call 0x6c6f6e */
  esp -= 4; W32(esp, 0x89bc68u); SPILL(); f_6c6f6e(); if (g_unwind) return; RELOAD();
/* 89bc68: lea ecx, [ebp - 0x114] */
  ecx = (uint32_t)(ebp + 0xfffffeecu);
/* 89bc6e: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 89bc72: call 0x6cadcb */
  esp -= 4; W32(esp, 0x89bc77u); SPILL(); f_6cadcb(); if (g_unwind) return; RELOAD();
/* 89bc77: mov edx, dword ptr [ebp - 0x14] */
  edx = R32((uint32_t)(ebp + 0xffffffecu));
L_89bc7a: /* 89bc7a: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* 89bc7d: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* 89bc80: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* 89bc83: mov ecx, dword ptr [ecx + 0xb4] */
  ecx = R32((uint32_t)(ecx + 0xb4u));
/* 89bc89: mov ecx, dword ptr [ecx + 0x40] */
  ecx = R32((uint32_t)(ecx + 0x40u));
/* 89bc8c: mov ebx, dword ptr [ecx + 0x64] */
  ebx = R32((uint32_t)(ecx + 0x64u));
/* 89bc8f: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89bc91: je 0x898d16 */
  if (zf) goto L_898d16;
L_89bc97: /* 89bc97: mov ecx, dword ptr [ebp - 0x9c] */
  ecx = R32((uint32_t)(ebp + 0xffffff64u));
/* 89bc9d: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 89bc9f: jle 0x898d16 */
  if ((zf || sf != of)) goto L_898d16;
L_89bca5: /* 89bca5: mov ecx, dword ptr [esi + 0x1e0] */
  ecx = R32((uint32_t)(esi + 0x1e0u));
/* 89bcab: cmp ecx, 0x1e */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1eu);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89bcae: jle 0x898d16 */
  if ((zf || sf != of)) goto L_898d16;
L_89bcb4: /* 89bcb4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89bcb6: je 0x898d16 */
  if (zf) goto L_898d16;
L_89bcbc: /* 89bcbc: mov ecx, dword ptr [edx + 0xfc] */
  ecx = R32((uint32_t)(edx + 0xfcu));
/* 89bcc2: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89bcc4: je 0x898d16 */
  if (zf) goto L_898d16;
L_89bcca: /* 89bcca: mov ecx, dword ptr [eax + 0x68] */
  ecx = R32((uint32_t)(eax + 0x68u));
/* 89bccd: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89bccf: je 0x898d16 */
  if (zf) goto L_898d16;
L_89bcd5: /* 89bcd5: mov edx, eax */
  edx = eax;
/* 89bcd7: mov esi, dword ptr [edx + 0x68] */
  esi = R32((uint32_t)(edx + 0x68u));
/* 89bcda: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89bcdd: mov dword ptr [ebp - 0x9c], esi */
  W32((uint32_t)(ebp + 0xffffff64u), esi);
/* 89bce3: call dword ptr [0xcfa2e4] */
  esp -= 4; W32(esp, 0x89bce9u); SPILL(); f_4e2d01(); if (g_unwind) return; /* Core!??0FString@@QAE@XZ */ RELOAD();
/* 89bce9: mov ecx, dword ptr [ebp - 0x214] */
  ecx = R32((uint32_t)(ebp + 0xfffffdecu));
/* 89bcef: mov bl, 0x1c */
  ebx = (ebx & 0xffffff00u) | ((uint32_t)(0x1cu) & 0xffu);
/* 89bcf1: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 89bcf4: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x89bcfau); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 89bcfa: mov ecx, dword ptr [ebp - 0x64] */
  ecx = R32((uint32_t)(ebp + 0xffffff9cu));
/* 89bcfd: mov edi, eax */
  edi = eax;
/* 89bcff: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x89bd05u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 89bd05: fld dword ptr [ebp - 0x84] */
  { double v = F32((uint32_t)(ebp + 0xffffff7cu)); FPUSH(v); }
/* 89bd0b: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89bd0e: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 89bd11: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89bd12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89bd13: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 89bd19: push 0xae7fe8 */
  { uint32_t v = 0xae7fe8u; esp -= 4; W32(esp, v); }
/* 89bd1e: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89bd1f: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x89bd25u); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 89bd25: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89bd28: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89bd29: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89bd2c: mov byte ptr [ebp - 4], 0x1d */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1du);
/* 89bd30: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x89bd36u); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 89bd36: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* 89bd3c: mov byte ptr [ebp - 4], bl */
  W8((uint32_t)(ebp + 0xfffffffcu), (ebx & 0xffu));
/* 89bd3f: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x89bd45u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 89bd45: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 89bd48: fadd dword ptr [0xa14ac4] */
  ST0 = ST0 + (F32((uint32_t)(0xa14ac4u)));
/* 89bd4e: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89bd51: mov byte ptr [ebp - 0x70], 0 */
  W8((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 89bd55: mov byte ptr [ebp - 0x6f], 0xff */
  W8((uint32_t)(ebp + 0xffffff91u), 0xffu);
/* 89bd59: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 89bd5c: mov byte ptr [ebp - 0x6e], 0xff */
  W8((uint32_t)(ebp + 0xffffff92u), 0xffu);
/* 89bd60: mov byte ptr [ebp - 0x6d], 0xff */
  W8((uint32_t)(ebp + 0xffffff93u), 0xffu);
/* 89bd64: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x89bd6au); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 89bd6a: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 89bd6d: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89bd6e: push 0xae8044 */
  { uint32_t v = 0xae8044u; esp -= 4; W32(esp, v); }
/* 89bd73: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 89bd75: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89bd76: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 89bd77: call 0x6c7f81 */
  esp -= 4; W32(esp, 0x89bd7cu); SPILL(); f_6c7f81(); if (g_unwind) return; RELOAD();
/* 89bd7c: fld dword ptr [esi + 0x48] */
  { double v = F32((uint32_t)(esi + 0x48u)); FPUSH(v); }
/* 89bd7f: fadd dword ptr [0x9f40f4] */
  ST0 = ST0 + (F32((uint32_t)(0x9f40f4u)));
/* 89bd85: mov edx, dword ptr [ebp - 0x6c] */
  edx = R32((uint32_t)(ebp + 0xffffff94u));
/* 89bd88: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89bd8b: xor edi, edi */
  edi = 0;
/* 89bd8d: fstp dword ptr [esi + 0x48] */
  WF32((uint32_t)(esi + 0x48u), ST0); FPOP();
/* 89bd90: movzx eax, byte ptr [edx + 0x2b1] */
  eax = (uint32_t)(R8((uint32_t)(edx + 0x2b1u)));
/* 89bd97: mov esi, dword ptr [ebp + 0x10] */
  esi = R32((uint32_t)(ebp + 0x10u));
/* 89bd9a: mov dword ptr [ebp - 0x1c], eax */
  W32((uint32_t)(ebp + 0xffffffe4u), eax);
/* 89bd9d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_89bda0: /* 89bda0: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89bda2: je 0x89becc */
  if (zf) goto L_89becc;
L_89bda8: /* 89bda8: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 89bdab: xor eax, eax */
  eax = 0;
/* 89bdad: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 89bdaf: jge 0x89becc */
  if ((sf == of)) goto L_89becc;
L_89bdb5: /* 89bdb5: mov eax, dword ptr [esi] */
  eax = R32((uint32_t)(esi));
/* 89bdb7: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 89bdb9: je 0x89bec3 */
  if (zf) goto L_89bec3;
L_89bdbf: /* 89bdbf: cmp dword ptr [eax], 0 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(eax))); uint32_t b = (uint32_t)(0x0u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* 89bdc2: je 0x89bec3 */
  if (zf) goto L_89bec3;
L_89bdc8: /* 89bdc8: fld dword ptr [ebp - 0x90] */
  { double v = F32((uint32_t)(ebp + 0xffffff70u)); FPUSH(v); }
/* 89bdce: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89bdd1: fsub dword ptr [eax + 0x18] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x18u)));
/* 89bdd4: fld dword ptr [ebp - 0x8c] */
  { double v = F32((uint32_t)(ebp + 0xffffff74u)); FPUSH(v); }
/* 89bdda: fsub dword ptr [eax + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x1cu)));
/* 89bddd: fld dword ptr [ebp - 0x88] */
  { double v = F32((uint32_t)(ebp + 0xffffff78u)); FPUSH(v); }
/* 89bde3: fsub dword ptr [eax + 0x20] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0x20u)));
/* 89bde6: fld st(0) */
  { double v = STI(0); FPUSH(v); }
/* 89bde8: fmul st(1) */
  ST0 = ST0 * STI(1);
/* 89bdea: fld st(3) */
  { double v = STI(3); FPUSH(v); }
/* 89bdec: fmul st(4) */
  ST0 = ST0 * STI(4);
/* 89bdee: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89bdf0: fld st(2) */
  { double v = STI(2); FPUSH(v); }
/* 89bdf2: fmul st(3) */
  ST0 = ST0 * STI(3);
/* 89bdf4: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* 89bdf6: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 89bdf9: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89bdfb: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89bdfd: fstp st(0) */
  STI(0) = ST0; FPOP();
/* 89bdff: call dword ptr [0xcfa3d8] */
  esp -= 4; W32(esp, 0x89be05u); SPILL(); f_4e3cd3(); if (g_unwind) return; /* Core!?appSqrt@@YANN@Z */ RELOAD();
/* 89be05: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 89be07: fst qword ptr [ebp - 0x5c] */
  WF64((uint32_t)(ebp + 0xffffffa4u), ST0);
/* 89be0a: mov ecx, dword ptr [ecx] */
  ecx = R32((uint32_t)(ecx));
/* 89be0c: fstp dword ptr [ebp - 0x44] */
  WF32((uint32_t)(ebp + 0xffffffbcu), ST0); FPOP();
/* 89be0f: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89be12: call dword ptr [0xcfa334] */
  esp -= 4; W32(esp, 0x89be18u); SPILL(); f_4e2351(); if (g_unwind) return; /* Core!?GetName@UObject@@QBEPBGXZ */ RELOAD();
/* 89be18: mov ecx, dword ptr [esi] */
  ecx = R32((uint32_t)(esi));
/* 89be1a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* 89be1c: fld dword ptr [edx + 0x2c] */
  { double v = F32((uint32_t)(edx + 0x2cu)); FPUSH(v); }
/* 89be1f: mov ebx, dword ptr [ecx + 0x3c] */
  ebx = R32((uint32_t)(ecx + 0x3cu));
/* 89be22: movzx edx, byte ptr [edx + 0x29] */
  edx = (uint32_t)(R8((uint32_t)(edx + 0x29u)));
/* 89be26: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89be29: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 89be2c: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 89be2d: fld dword ptr [ebp - 0x44] */
  { double v = F32((uint32_t)(ebp + 0xffffffbcu)); FPUSH(v); }
/* 89be30: sub esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* 89be33: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* 89be37: fld dword ptr [ecx + 0x40] */
  { double v = F32((uint32_t)(ecx + 0x40u)); FPUSH(v); }
/* 89be3a: fstp qword ptr [esp + 0x20] */
  WF64((uint32_t)(esp + 0x20u), ST0); FPOP();
/* 89be3e: fld dword ptr [ecx + 0x10] */
  { double v = F32((uint32_t)(ecx + 0x10u)); FPUSH(v); }
/* 89be41: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* 89be45: fld dword ptr [ecx + 0xc] */
  { double v = F32((uint32_t)(ecx + 0xcu)); FPUSH(v); }
/* 89be48: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* 89be4c: fld dword ptr [ecx + 8] */
  { double v = F32((uint32_t)(ecx + 0x8u)); FPUSH(v); }
/* 89be4f: fstp qword ptr [esp + 8] */
  WF64((uint32_t)(esp + 0x8u), ST0); FPOP();
/* 89be53: fld dword ptr [ecx + 0x30] */
  { double v = F32((uint32_t)(ecx + 0x30u)); FPUSH(v); }
/* 89be56: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* 89be59: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89be5a: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89be5b: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 89be5c: lea eax, [ebp - 0xb8] */
  eax = (uint32_t)(ebp + 0xffffff48u);
/* 89be62: push 0xae8050 */
  { uint32_t v = 0xae8050u; esp -= 4; W32(esp, v); }
/* 89be67: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89be68: call dword ptr [0xcfa540] */
  esp -= 4; W32(esp, 0x89be6eu); SPILL(); f_4e17e4(); if (g_unwind) return; /* Core!?Printf@FString@@SA?AV1@PBGZZ */ RELOAD();
/* 89be6e: add esp, 0x50 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x50u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 89be71: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89be72: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89be75: mov byte ptr [ebp - 4], 0x1e */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1eu);
/* 89be79: call dword ptr [0xcfa2e8] */
  esp -= 4; W32(esp, 0x89be7fu); SPILL(); f_4e1d20(); if (g_unwind) return; /* Core!??4FString@@QAEAAV0@ABV0@@Z */ RELOAD();
/* 89be7f: lea ecx, [ebp - 0xb8] */
  ecx = (uint32_t)(ebp + 0xffffff48u);
/* 89be85: mov byte ptr [ebp - 4], 0x1c */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1cu);
/* 89be89: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x89be8fu); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 89be8f: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89be92: mov byte ptr [ebp - 0x70], 0 */
  W8((uint32_t)(ebp + 0xffffff90u), 0x0u);
/* 89be96: mov byte ptr [ebp - 0x6f], 0xff */
  W8((uint32_t)(ebp + 0xffffff91u), 0xffu);
/* 89be9a: mov byte ptr [ebp - 0x6e], 0xff */
  W8((uint32_t)(ebp + 0xffffff92u), 0xffu);
/* 89be9e: mov byte ptr [ebp - 0x6d], 0xff */
  W8((uint32_t)(ebp + 0xffffff93u), 0xffu);
/* 89bea2: call dword ptr [0xcfa1a8] */
  esp -= 4; W32(esp, 0x89bea8u); SPILL(); f_4e1037(); if (g_unwind) return; /* Core!??DFString@@QBEPBGXZ */ RELOAD();
/* 89bea8: mov ecx, dword ptr [ebp - 0x70] */
  ecx = R32((uint32_t)(ebp + 0xffffff90u));
/* 89beab: mov edx, dword ptr [ebp - 0x9c] */
  edx = R32((uint32_t)(ebp + 0xffffff64u));
/* 89beb1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 89beb2: push 0xae80f4 */
  { uint32_t v = 0xae80f4u; esp -= 4; W32(esp, v); }
/* 89beb7: push 4 */
  { uint32_t v = 0x4u; esp -= 4; W32(esp, v); }
/* 89beb9: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 89beba: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 89bebb: call 0x6c7f81 */
  esp -= 4; W32(esp, 0x89bec0u); SPILL(); f_6c7f81(); if (g_unwind) return; RELOAD();
/* 89bec0: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_89bec3: /* 89bec3: mov esi, dword ptr [esi + 4] */
  esi = R32((uint32_t)(esi + 0x4u));
/* 89bec6: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* 89bec7: jmp 0x89bda0 */
  goto L_89bda0;
L_89becc: /* 89becc: lea ecx, [ebp - 0x3c] */
  ecx = (uint32_t)(ebp + 0xffffffc4u);
/* 89becf: mov byte ptr [ebp - 4], 1 */
  W8((uint32_t)(ebp + 0xfffffffcu), 0x1u);
/* 89bed3: call dword ptr [0xcfa2e0] */
  esp -= 4; W32(esp, 0x89bed9u); SPILL(); f_4e1217(); if (g_unwind) return; /* Core!??1FString@@QAE@XZ */ RELOAD();
/* 89bed9: jmp 0x898d16 */
  goto L_898d16;
}
