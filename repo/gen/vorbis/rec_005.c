#include "recomp.h"
#include "rec_mod.h"

void f_ffe10a(void) {
  LOAD_REGS();
L_ffe10a: /* ffe10a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ffe110: /* ffe110: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe113: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* ffe116: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe119: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe11b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe11d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe11f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe122: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe123: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe124: push 0x100a554 */
  { uint32_t v = 0x100a554u; esp -= 4; W32(esp, v); }
/* ffe129: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe12eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe12e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe131: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe132: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe135: jl 0xffe110 */
  if ((sf != of)) goto L_ffe110;
L_ffe137: /* ffe137: xor edi, edi */
  edi = 0;
/* ffe139: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe140: /* ffe140: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe143: mov ecx, dword ptr [eax + 8] */
  ecx = R32((uint32_t)(eax + 0x8u));
/* ffe146: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe149: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe14b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe14d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe14f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe152: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe153: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe154: push 0x100a544 */
  { uint32_t v = 0x100a544u; esp -= 4; W32(esp, v); }
/* ffe159: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe15eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe15e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe161: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe162: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe165: jl 0xffe140 */
  if ((sf != of)) goto L_ffe140;
L_ffe167: /* ffe167: xor edi, edi */
  edi = 0;
/* ffe169: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe170: /* ffe170: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe173: mov ecx, dword ptr [eax + 0xc] */
  ecx = R32((uint32_t)(eax + 0xcu));
/* ffe176: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe179: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe17b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe17d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe17f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe182: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe183: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe184: push 0x100a534 */
  { uint32_t v = 0x100a534u; esp -= 4; W32(esp, v); }
/* ffe189: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe18eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe18e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe191: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe192: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe195: jl 0xffe170 */
  if ((sf != of)) goto L_ffe170;
L_ffe197: /* ffe197: xor edi, edi */
  edi = 0;
/* ffe199: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe1a0: /* ffe1a0: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe1a3: mov ecx, dword ptr [eax + 0x10] */
  ecx = R32((uint32_t)(eax + 0x10u));
/* ffe1a6: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe1a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe1ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe1ad: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe1af: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe1b2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe1b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe1b4: push 0x100a524 */
  { uint32_t v = 0x100a524u; esp -= 4; W32(esp, v); }
/* ffe1b9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe1beu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe1be: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe1c1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe1c2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe1c5: jl 0xffe1a0 */
  if ((sf != of)) goto L_ffe1a0;
L_ffe1c7: /* ffe1c7: xor edi, edi */
  edi = 0;
/* ffe1c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe1d0: /* ffe1d0: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe1d3: mov ecx, dword ptr [eax + 0x14] */
  ecx = R32((uint32_t)(eax + 0x14u));
/* ffe1d6: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe1d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe1db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe1dd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe1df: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe1e2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe1e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe1e4: push 0x100a514 */
  { uint32_t v = 0x100a514u; esp -= 4; W32(esp, v); }
/* ffe1e9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe1eeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe1ee: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe1f1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe1f2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe1f5: jl 0xffe1d0 */
  if ((sf != of)) goto L_ffe1d0;
L_ffe1f7: /* ffe1f7: xor edi, edi */
  edi = 0;
/* ffe1f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe200: /* ffe200: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe203: mov ecx, dword ptr [eax + 0x18] */
  ecx = R32((uint32_t)(eax + 0x18u));
/* ffe206: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe209: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe20b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe20d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe20f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe212: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe213: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe214: push 0x100a504 */
  { uint32_t v = 0x100a504u; esp -= 4; W32(esp, v); }
/* ffe219: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe21eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe21e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe221: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe222: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe225: jl 0xffe200 */
  if ((sf != of)) goto L_ffe200;
L_ffe227: /* ffe227: xor edi, edi */
  edi = 0;
/* ffe229: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe230: /* ffe230: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe233: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* ffe236: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe239: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe23b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe23d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe23f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe242: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe243: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe244: push 0x100a4f4 */
  { uint32_t v = 0x100a4f4u; esp -= 4; W32(esp, v); }
/* ffe249: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe24eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe24e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe251: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe252: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe255: jl 0xffe230 */
  if ((sf != of)) goto L_ffe230;
L_ffe257: /* ffe257: xor edi, edi */
  edi = 0;
/* ffe259: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe260: /* ffe260: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe263: mov ecx, dword ptr [eax + 0x20] */
  ecx = R32((uint32_t)(eax + 0x20u));
/* ffe266: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe269: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe26b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe26d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe26f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe272: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe273: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe274: push 0x100a4e4 */
  { uint32_t v = 0x100a4e4u; esp -= 4; W32(esp, v); }
/* ffe279: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe27eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe27e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe281: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe282: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe285: jl 0xffe260 */
  if ((sf != of)) goto L_ffe260;
L_ffe287: /* ffe287: xor edi, edi */
  edi = 0;
/* ffe289: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe290: /* ffe290: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe293: mov ecx, dword ptr [eax + 0x24] */
  ecx = R32((uint32_t)(eax + 0x24u));
/* ffe296: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe299: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe29b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe29d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe29f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe2a2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe2a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe2a4: push 0x100a4d4 */
  { uint32_t v = 0x100a4d4u; esp -= 4; W32(esp, v); }
/* ffe2a9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe2aeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe2ae: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe2b1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe2b2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe2b5: jl 0xffe290 */
  if ((sf != of)) goto L_ffe290;
L_ffe2b7: /* ffe2b7: xor edi, edi */
  edi = 0;
/* ffe2b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe2c0: /* ffe2c0: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe2c3: mov ecx, dword ptr [eax + 0x28] */
  ecx = R32((uint32_t)(eax + 0x28u));
/* ffe2c6: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe2c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe2cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe2cd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe2cf: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe2d2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe2d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe2d4: push 0x100a4c4 */
  { uint32_t v = 0x100a4c4u; esp -= 4; W32(esp, v); }
/* ffe2d9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe2deu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe2de: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe2e1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe2e2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe2e5: jl 0xffe2c0 */
  if ((sf != of)) goto L_ffe2c0;
L_ffe2e7: /* ffe2e7: xor edi, edi */
  edi = 0;
/* ffe2e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe2f0: /* ffe2f0: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe2f3: mov ecx, dword ptr [eax + 0x2c] */
  ecx = R32((uint32_t)(eax + 0x2cu));
/* ffe2f6: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe2f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe2fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe2fd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe2ff: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe302: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe303: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe304: push 0x100a4b4 */
  { uint32_t v = 0x100a4b4u; esp -= 4; W32(esp, v); }
/* ffe309: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe30eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe30e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe311: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe312: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe315: jl 0xffe2f0 */
  if ((sf != of)) goto L_ffe2f0;
L_ffe317: /* ffe317: xor edi, edi */
  edi = 0;
/* ffe319: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe320: /* ffe320: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe323: mov ecx, dword ptr [eax + 0x30] */
  ecx = R32((uint32_t)(eax + 0x30u));
/* ffe326: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe329: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe32b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe32d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe32f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe332: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe333: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe334: push 0x100a4a4 */
  { uint32_t v = 0x100a4a4u; esp -= 4; W32(esp, v); }
/* ffe339: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe33eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe33e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe341: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe342: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe345: jl 0xffe320 */
  if ((sf != of)) goto L_ffe320;
L_ffe347: /* ffe347: xor edi, edi */
  edi = 0;
/* ffe349: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe350: /* ffe350: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe353: mov ecx, dword ptr [eax + 0x34] */
  ecx = R32((uint32_t)(eax + 0x34u));
/* ffe356: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe359: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe35b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe35d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe35f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe362: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe363: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe364: push 0x100a494 */
  { uint32_t v = 0x100a494u; esp -= 4; W32(esp, v); }
/* ffe369: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe36eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe36e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe371: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe372: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe375: jl 0xffe350 */
  if ((sf != of)) goto L_ffe350;
L_ffe377: /* ffe377: xor edi, edi */
  edi = 0;
/* ffe379: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe380: /* ffe380: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe383: mov ecx, dword ptr [eax + 0x38] */
  ecx = R32((uint32_t)(eax + 0x38u));
/* ffe386: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe389: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe38b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe38d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe38f: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe392: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe393: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe394: push 0x100a484 */
  { uint32_t v = 0x100a484u; esp -= 4; W32(esp, v); }
/* ffe399: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe39eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe39e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe3a1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe3a2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe3a5: jl 0xffe380 */
  if ((sf != of)) goto L_ffe380;
L_ffe3a7: /* ffe3a7: xor edi, edi */
  edi = 0;
/* ffe3a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe3b0: /* ffe3b0: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe3b3: mov ecx, dword ptr [eax + 0x3c] */
  ecx = R32((uint32_t)(eax + 0x3cu));
/* ffe3b6: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe3b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe3bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe3bd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe3bf: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe3c2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe3c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe3c4: push 0x100a474 */
  { uint32_t v = 0x100a474u; esp -= 4; W32(esp, v); }
/* ffe3c9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe3ceu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe3ce: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe3d1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe3d2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe3d5: jl 0xffe3b0 */
  if ((sf != of)) goto L_ffe3b0;
L_ffe3d7: /* ffe3d7: xor edi, edi */
  edi = 0;
/* ffe3d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe3e0: /* ffe3e0: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe3e3: mov ecx, dword ptr [eax + 0x40] */
  ecx = R32((uint32_t)(eax + 0x40u));
/* ffe3e6: mov edx, dword ptr [ecx + edi*4] */
  edx = R32((uint32_t)(ecx + edi*4));
/* ffe3e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe3eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe3ed: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe3ef: add edx, 8 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe3f2: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffe3f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe3f4: push 0x100a464 */
  { uint32_t v = 0x100a464u; esp -= 4; W32(esp, v); }
/* ffe3f9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe3feu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe3fe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe401: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe402: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe405: jl 0xffe3e0 */
  if ((sf != of)) goto L_ffe3e0;
L_ffe407: /* ffe407: mov eax, dword ptr [esi + 0x36c] */
  eax = R32((uint32_t)(esi + 0x36cu));
/* ffe40d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffe40f: je 0xffe5aa */
  if (zf) goto L_ffe5aa;
L_ffe415: /* ffe415: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ffe418: xor esi, esi */
  esi = 0;
/* ffe41a: add eax, 0x378 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x378u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe41f: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* ffe423: mov dword ptr [esp + 0x2c], eax */
  W32((uint32_t)(esp + 0x2cu), eax);
/* ffe427: jmp 0xffe430 */
  goto L_ffe430;
L_ffe430: /* ffe430: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* ffe434: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* ffe43c: mov edx, 0xc */
  edx = 0xcu;
L_ffe441: /* ffe441: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe444: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe447: mov edi, dword ptr [eax + edx - 0xc] */
  edi = R32((uint32_t)(eax + edx + 0xfffffff4u));
/* ffe44b: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe44e: fcomp dword ptr [ecx - 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xfffffffcu)));
  FPOP();
/* ffe451: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe453: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe456: jp 0xffe45e */
  if (pf) goto L_ffe45e;
L_ffe458: /* ffe458: mov eax, dword ptr [ecx - 4] */
  eax = R32((uint32_t)(ecx + 0xfffffffcu));
/* ffe45b: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe45e: /* ffe45e: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe461: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe464: mov edi, dword ptr [eax + edx - 8] */
  edi = R32((uint32_t)(eax + edx + 0xfffffff8u));
/* ffe468: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe46b: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* ffe46d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe46f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe472: jp 0xffe479 */
  if (pf) goto L_ffe479;
L_ffe474: /* ffe474: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ffe476: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe479: /* ffe479: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe47c: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe47f: mov edi, dword ptr [eax + edx - 4] */
  edi = R32((uint32_t)(eax + edx + 0xfffffffcu));
/* ffe483: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe486: fcomp dword ptr [ecx + 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x4u)));
  FPOP();
/* ffe489: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe48b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe48e: jp 0xffe496 */
  if (pf) goto L_ffe496;
L_ffe490: /* ffe490: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* ffe493: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe496: /* ffe496: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe499: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe49c: mov edi, dword ptr [eax + edx] */
  edi = R32((uint32_t)(eax + edx));
/* ffe49f: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe4a2: fcomp dword ptr [ecx + 8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x8u)));
  FPOP();
/* ffe4a5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe4a7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe4aa: jp 0xffe4b2 */
  if (pf) goto L_ffe4b2;
L_ffe4ac: /* ffe4ac: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* ffe4af: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe4b2: /* ffe4b2: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe4b5: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe4b8: mov edi, dword ptr [eax + edx + 4] */
  edi = R32((uint32_t)(eax + edx + 0x4u));
/* ffe4bc: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe4bf: fcomp dword ptr [ecx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xcu)));
  FPOP();
/* ffe4c2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe4c4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe4c7: jp 0xffe4cf */
  if (pf) goto L_ffe4cf;
L_ffe4c9: /* ffe4c9: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* ffe4cc: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe4cf: /* ffe4cf: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe4d2: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe4d5: mov edi, dword ptr [eax + edx + 8] */
  edi = R32((uint32_t)(eax + edx + 0x8u));
/* ffe4d9: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe4dc: fcomp dword ptr [ecx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x10u)));
  FPOP();
/* ffe4df: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe4e1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe4e4: jp 0xffe4ec */
  if (pf) goto L_ffe4ec;
L_ffe4e6: /* ffe4e6: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* ffe4e9: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe4ec: /* ffe4ec: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe4ef: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe4f2: mov edi, dword ptr [eax + edx + 0xc] */
  edi = R32((uint32_t)(eax + edx + 0xcu));
/* ffe4f6: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe4f9: fcomp dword ptr [ecx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x14u)));
  FPOP();
/* ffe4fc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe4fe: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe501: jp 0xffe509 */
  if (pf) goto L_ffe509;
L_ffe503: /* ffe503: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* ffe506: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe509: /* ffe509: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe50c: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe50f: mov edi, dword ptr [eax + edx + 0x10] */
  edi = R32((uint32_t)(eax + edx + 0x10u));
/* ffe513: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe516: fcomp dword ptr [ecx + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x18u)));
  FPOP();
/* ffe519: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe51b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe51e: jp 0xffe526 */
  if (pf) goto L_ffe526;
L_ffe520: /* ffe520: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* ffe523: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe526: /* ffe526: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe52a: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe52d: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffe530: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe533: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe536: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* ffe53a: jl 0xffe441 */
  if ((sf != of)) goto L_ffe441;
L_ffe540: /* ffe540: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe543: jge 0xffe585 */
  if ((sf == of)) goto L_ffe585;
L_ffe545: /* ffe545: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* ffe549: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe54b: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* ffe552: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ffe555: lea edx, [eax + edx*4 + 0x374] */
  edx = (uint32_t)(eax + edx*4 + 0x374u);
/* ffe55c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe560: /* ffe560: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe563: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe566: mov edi, dword ptr [eax + ecx] */
  edi = R32((uint32_t)(eax + ecx));
/* ffe569: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe56c: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* ffe56e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe570: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe573: jp 0xffe57a */
  if (pf) goto L_ffe57a;
L_ffe575: /* ffe575: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ffe577: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe57a: /* ffe57a: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffe57d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe580: cmp ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe583: jl 0xffe560 */
  if ((sf != of)) goto L_ffe560;
L_ffe585: /* ffe585: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* ffe589: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* ffe58d: add edi, 0x2c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffe590: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffe593: add ecx, 0xb */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffe596: cmp esi, 0x44 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe599: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* ffe59d: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* ffe5a1: jl 0xffe430 */
  if ((sf != of)) goto L_ffe430;
L_ffe5a7: /* ffe5a7: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
L_ffe5aa: /* ffe5aa: xor edi, edi */
  edi = 0;
/* ffe5ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe5b0: /* ffe5b0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe5b3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ffe5b5: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe5b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe5ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe5bc: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe5be: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe5c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe5c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe5c3: push 0x100a458 */
  { uint32_t v = 0x100a458u; esp -= 4; W32(esp, v); }
/* ffe5c8: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe5cdu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe5cd: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe5d0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe5d1: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe5d4: jl 0xffe5b0 */
  if ((sf != of)) goto L_ffe5b0;
L_ffe5d6: /* ffe5d6: xor edi, edi */
  edi = 0;
/* ffe5d8: jmp 0xffe5e0 */
  goto L_ffe5e0;
L_ffe5e0: /* ffe5e0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe5e3: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* ffe5e6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe5e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe5eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe5ed: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe5ef: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe5f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe5f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe5f4: push 0x100a44c */
  { uint32_t v = 0x100a44cu; esp -= 4; W32(esp, v); }
/* ffe5f9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe5feu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe5fe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe601: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe602: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe605: jl 0xffe5e0 */
  if ((sf != of)) goto L_ffe5e0;
L_ffe607: /* ffe607: xor edi, edi */
  edi = 0;
/* ffe609: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe610: /* ffe610: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe613: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* ffe616: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe619: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe61b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe61d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe61f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe622: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe623: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe624: push 0x100a43c */
  { uint32_t v = 0x100a43cu; esp -= 4; W32(esp, v); }
/* ffe629: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe62eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe62e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe631: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe632: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe635: jl 0xffe610 */
  if ((sf != of)) goto L_ffe610;
L_ffe637: /* ffe637: xor edi, edi */
  edi = 0;
/* ffe639: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe640: /* ffe640: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe643: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* ffe646: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe649: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe64b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe64d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe64f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe652: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe653: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe654: push 0x100a42c */
  { uint32_t v = 0x100a42cu; esp -= 4; W32(esp, v); }
/* ffe659: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe65eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe65e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe661: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe662: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe665: jl 0xffe640 */
  if ((sf != of)) goto L_ffe640;
L_ffe667: /* ffe667: xor edi, edi */
  edi = 0;
/* ffe669: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe670: /* ffe670: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe673: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* ffe676: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe679: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe67b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe67d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe67f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe682: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe683: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe684: push 0x100a41c */
  { uint32_t v = 0x100a41cu; esp -= 4; W32(esp, v); }
/* ffe689: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe68eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe68e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe691: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe692: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe695: jl 0xffe670 */
  if ((sf != of)) goto L_ffe670;
L_ffe697: /* ffe697: xor edi, edi */
  edi = 0;
/* ffe699: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe6a0: /* ffe6a0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe6a3: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* ffe6a6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe6a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe6ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe6ad: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe6af: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe6b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe6b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe6b4: push 0x100a40c */
  { uint32_t v = 0x100a40cu; esp -= 4; W32(esp, v); }
/* ffe6b9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe6beu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe6be: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe6c1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe6c2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe6c5: jl 0xffe6a0 */
  if ((sf != of)) goto L_ffe6a0;
L_ffe6c7: /* ffe6c7: xor edi, edi */
  edi = 0;
/* ffe6c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe6d0: /* ffe6d0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe6d3: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* ffe6d6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe6d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe6db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe6dd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe6df: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe6e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe6e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe6e4: push 0x100a3fc */
  { uint32_t v = 0x100a3fcu; esp -= 4; W32(esp, v); }
/* ffe6e9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe6eeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe6ee: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe6f1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe6f2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe6f5: jl 0xffe6d0 */
  if ((sf != of)) goto L_ffe6d0;
L_ffe6f7: /* ffe6f7: xor edi, edi */
  edi = 0;
/* ffe6f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe700: /* ffe700: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe703: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* ffe706: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe709: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe70b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe70d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe70f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe712: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe713: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe714: push 0x100a3ec */
  { uint32_t v = 0x100a3ecu; esp -= 4; W32(esp, v); }
/* ffe719: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe71eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe71e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe721: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe722: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe725: jl 0xffe700 */
  if ((sf != of)) goto L_ffe700;
L_ffe727: /* ffe727: xor edi, edi */
  edi = 0;
/* ffe729: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe730: /* ffe730: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe733: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* ffe736: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe739: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe73b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe73d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe73f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe742: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe743: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe744: push 0x100a3e0 */
  { uint32_t v = 0x100a3e0u; esp -= 4; W32(esp, v); }
/* ffe749: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe74eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe74e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe751: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe752: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe755: jl 0xffe730 */
  if ((sf != of)) goto L_ffe730;
L_ffe757: /* ffe757: xor edi, edi */
  edi = 0;
/* ffe759: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe760: /* ffe760: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe763: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* ffe766: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe769: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe76b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe76d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe76f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe772: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe773: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe774: push 0x100a3d0 */
  { uint32_t v = 0x100a3d0u; esp -= 4; W32(esp, v); }
/* ffe779: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe77eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe77e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe781: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe782: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe785: jl 0xffe760 */
  if ((sf != of)) goto L_ffe760;
L_ffe787: /* ffe787: xor edi, edi */
  edi = 0;
/* ffe789: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe790: /* ffe790: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe793: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* ffe796: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe799: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe79b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe79d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe79f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe7a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe7a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe7a4: push 0x100a3c4 */
  { uint32_t v = 0x100a3c4u; esp -= 4; W32(esp, v); }
/* ffe7a9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe7aeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe7ae: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe7b1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe7b2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe7b5: jl 0xffe790 */
  if ((sf != of)) goto L_ffe790;
L_ffe7b7: /* ffe7b7: xor edi, edi */
  edi = 0;
/* ffe7b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe7c0: /* ffe7c0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe7c3: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* ffe7c6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe7c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe7cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe7cd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe7cf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe7d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe7d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe7d4: push 0x100a3b4 */
  { uint32_t v = 0x100a3b4u; esp -= 4; W32(esp, v); }
/* ffe7d9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe7deu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe7de: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe7e1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe7e2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe7e5: jl 0xffe7c0 */
  if ((sf != of)) goto L_ffe7c0;
L_ffe7e7: /* ffe7e7: xor edi, edi */
  edi = 0;
/* ffe7e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe7f0: /* ffe7f0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe7f3: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* ffe7f6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe7f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe7fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe7fd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe7ff: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe802: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe803: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe804: push 0x100a3a8 */
  { uint32_t v = 0x100a3a8u; esp -= 4; W32(esp, v); }
/* ffe809: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe80eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe80e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe811: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe812: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe815: jl 0xffe7f0 */
  if ((sf != of)) goto L_ffe7f0;
L_ffe817: /* ffe817: xor edi, edi */
  edi = 0;
/* ffe819: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe820: /* ffe820: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe823: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* ffe826: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe829: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe82b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe82d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe82f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe832: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe833: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe834: push 0x100a398 */
  { uint32_t v = 0x100a398u; esp -= 4; W32(esp, v); }
/* ffe839: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe83eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe83e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe841: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe842: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe845: jl 0xffe820 */
  if ((sf != of)) goto L_ffe820;
L_ffe847: /* ffe847: xor edi, edi */
  edi = 0;
/* ffe849: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe850: /* ffe850: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe853: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* ffe856: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe859: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe85b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe85d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe85f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe862: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe863: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe864: push 0x100a38c */
  { uint32_t v = 0x100a38cu; esp -= 4; W32(esp, v); }
/* ffe869: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe86eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe86e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe871: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe872: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe875: jl 0xffe850 */
  if ((sf != of)) goto L_ffe850;
L_ffe877: /* ffe877: xor edi, edi */
  edi = 0;
/* ffe879: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe880: /* ffe880: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe883: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* ffe886: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe889: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe88b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe88d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe88f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe892: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe893: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe894: push 0x100a37c */
  { uint32_t v = 0x100a37cu; esp -= 4; W32(esp, v); }
/* ffe899: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe89eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe89e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe8a1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe8a2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe8a5: jl 0xffe880 */
  if ((sf != of)) goto L_ffe880;
L_ffe8a7: /* ffe8a7: xor edi, edi */
  edi = 0;
/* ffe8a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe8b0: /* ffe8b0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe8b3: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* ffe8b6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe8b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe8bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe8bd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe8bf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe8c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe8c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe8c4: push 0x100a36c */
  { uint32_t v = 0x100a36cu; esp -= 4; W32(esp, v); }
/* ffe8c9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe8ceu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe8ce: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe8d1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe8d2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe8d5: jl 0xffe8b0 */
  if ((sf != of)) goto L_ffe8b0;
L_ffe8d7: /* ffe8d7: xor edx, edx */
  edx = 0;
/* ffe8d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe8e0: /* ffe8e0: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* ffe8e8: mov ecx, 0xc */
  ecx = 0xcu;
L_ffe8ed: /* ffe8ed: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe8f0: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe8f3: mov edi, dword ptr [eax + ecx - 0xc] */
  edi = R32((uint32_t)(eax + ecx + 0xfffffff4u));
/* ffe8f7: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe8fa: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe8fd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe8ff: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe902: jp 0xffe90a */
  if (pf) goto L_ffe90a;
L_ffe904: /* ffe904: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe907: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe90a: /* ffe90a: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe90d: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe910: mov edi, dword ptr [eax + ecx - 8] */
  edi = R32((uint32_t)(eax + ecx + 0xfffffff8u));
/* ffe914: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe917: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe91a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe91c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe91f: jp 0xffe927 */
  if (pf) goto L_ffe927;
L_ffe921: /* ffe921: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe924: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe927: /* ffe927: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe92a: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe92d: mov edi, dword ptr [eax + ecx - 4] */
  edi = R32((uint32_t)(eax + ecx + 0xfffffffcu));
/* ffe931: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe934: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe937: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe939: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe93c: jp 0xffe944 */
  if (pf) goto L_ffe944;
L_ffe93e: /* ffe93e: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe941: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe944: /* ffe944: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe947: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe94a: mov edi, dword ptr [eax + ecx] */
  edi = R32((uint32_t)(eax + ecx));
/* ffe94d: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe950: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe953: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe955: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe958: jp 0xffe960 */
  if (pf) goto L_ffe960;
L_ffe95a: /* ffe95a: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe95d: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe960: /* ffe960: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe963: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe966: mov edi, dword ptr [eax + ecx + 4] */
  edi = R32((uint32_t)(eax + ecx + 0x4u));
/* ffe96a: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe96d: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe970: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe972: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe975: jp 0xffe97d */
  if (pf) goto L_ffe97d;
L_ffe977: /* ffe977: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe97a: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe97d: /* ffe97d: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe980: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe983: mov edi, dword ptr [eax + ecx + 8] */
  edi = R32((uint32_t)(eax + ecx + 0x8u));
/* ffe987: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe98a: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe98d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe98f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe992: jp 0xffe99a */
  if (pf) goto L_ffe99a;
L_ffe994: /* ffe994: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe997: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe99a: /* ffe99a: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe99d: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe9a0: mov edi, dword ptr [eax + ecx + 0xc] */
  edi = R32((uint32_t)(eax + ecx + 0xcu));
/* ffe9a4: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe9a7: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe9aa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe9ac: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe9af: jp 0xffe9b7 */
  if (pf) goto L_ffe9b7;
L_ffe9b1: /* ffe9b1: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe9b4: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe9b7: /* ffe9b7: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe9ba: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe9bd: mov edi, dword ptr [eax + ecx + 0x10] */
  edi = R32((uint32_t)(eax + ecx + 0x10u));
/* ffe9c1: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe9c4: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe9c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe9c9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe9cc: jp 0xffe9d4 */
  if (pf) goto L_ffe9d4;
L_ffe9ce: /* ffe9ce: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe9d1: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe9d4: /* ffe9d4: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe9d8: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe9db: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffe9de: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe9e1: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* ffe9e5: jl 0xffe8ed */
  if ((sf != of)) goto L_ffe8ed;
L_ffe9eb: /* ffe9eb: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe9ee: jge 0xffea19 */
  if ((sf == of)) goto L_ffea19;
L_ffe9f0: /* ffe9f0: mov edi, eax */
  edi = eax;
/* ffe9f2: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
L_ffe9f5: /* ffe9f5: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe9f8: mov eax, dword ptr [edx + ecx] */
  eax = R32((uint32_t)(edx + ecx));
/* ffe9fb: mov ecx, dword ptr [eax + edi] */
  ecx = R32((uint32_t)(eax + edi));
/* ffe9fe: fld dword ptr [ecx + 0x48] */
  { double v = F32((uint32_t)(ecx + 0x48u)); FPUSH(v); }
/* ffea01: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffea04: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffea06: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffea09: jp 0xffea11 */
  if (pf) goto L_ffea11;
L_ffea0b: /* ffea0b: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffea0e: mov dword ptr [ecx + 0x48], eax */
  W32((uint32_t)(ecx + 0x48u), eax);
L_ffea11: /* ffea11: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffea14: cmp edi, 0x2c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffea17: jl 0xffe9f5 */
  if ((sf != of)) goto L_ffe9f5;
L_ffea19: /* ffea19: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffea1c: cmp edx, 0x44 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffea1f: jl 0xffe8e0 */
  if ((sf != of)) goto L_ffe8e0;
L_ffea25: /* ffea25: xor esi, esi */
  esi = 0;
L_ffea27: /* ffea27: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffea2a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ffea2c: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffea2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea33: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffea35: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffea38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffea39: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffea3a: push 0x100a360 */
  { uint32_t v = 0x100a360u; esp -= 4; W32(esp, v); }
/* ffea3f: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffea44u); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffea44: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffea47: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffea48: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffea4b: jl 0xffea27 */
  if ((sf != of)) goto L_ffea27;
L_ffea4d: /* ffea4d: xor esi, esi */
  esi = 0;
/* ffea4f: nop  */
L_ffea50: /* ffea50: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffea53: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* ffea56: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffea59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea5b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea5d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffea5f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffea62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffea63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffea64: push 0x100a354 */
  { uint32_t v = 0x100a354u; esp -= 4; W32(esp, v); }
/* ffea69: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffea6eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffea6e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffea71: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffea72: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffea75: jl 0xffea50 */
  if ((sf != of)) goto L_ffea50;
L_ffea77: /* ffea77: xor esi, esi */
  esi = 0;
/* ffea79: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffea80: /* ffea80: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffea83: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* ffea86: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffea89: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea8d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffea8f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffea92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffea93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffea94: push 0x100a344 */
  { uint32_t v = 0x100a344u; esp -= 4; W32(esp, v); }
/* ffea99: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffea9eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffea9e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffeaa1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffeaa2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffeaa5: jl 0xffea80 */
  if ((sf != of)) goto L_ffea80;
L_ffeaa7: /* ffeaa7: xor esi, esi */
  esi = 0;
/* ffeaa9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeab0: /* ffeab0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeab3: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* ffeab6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeab9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeabb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeabd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeabf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeac2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeac3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeac4: push 0x100a334 */
  { uint32_t v = 0x100a334u; esp -= 4; W32(esp, v); }
/* ffeac9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffeaceu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffeace: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffead1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffead2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffead5: jl 0xffeab0 */
  if ((sf != of)) goto L_ffeab0;
L_ffead7: /* ffead7: xor esi, esi */
  esi = 0;
/* ffead9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeae0: /* ffeae0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeae3: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* ffeae6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeae9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeaeb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeaed: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeaef: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeaf2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeaf3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeaf4: push 0x100a324 */
  { uint32_t v = 0x100a324u; esp -= 4; W32(esp, v); }
/* ffeaf9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffeafeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffeafe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffeb01: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffeb02: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffeb05: jl 0xffeae0 */
  if ((sf != of)) goto L_ffeae0;
L_ffeb07: /* ffeb07: xor esi, esi */
  esi = 0;
/* ffeb09: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeb10: /* ffeb10: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeb13: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* ffeb16: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeb19: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb1b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb1d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeb1f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeb22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeb23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeb24: push 0x100a314 */
  { uint32_t v = 0x100a314u; esp -= 4; W32(esp, v); }
/* ffeb29: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffeb2eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffeb2e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffeb31: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffeb32: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffeb35: jl 0xffeb10 */
  if ((sf != of)) goto L_ffeb10;
L_ffeb37: /* ffeb37: xor esi, esi */
  esi = 0;
/* ffeb39: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeb40: /* ffeb40: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeb43: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* ffeb46: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeb49: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb4d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeb4f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeb52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeb53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeb54: push 0x100a304 */
  { uint32_t v = 0x100a304u; esp -= 4; W32(esp, v); }
/* ffeb59: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffeb5eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffeb5e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffeb61: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffeb62: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffeb65: jl 0xffeb40 */
  if ((sf != of)) goto L_ffeb40;
L_ffeb67: /* ffeb67: xor esi, esi */
  esi = 0;
/* ffeb69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeb70: /* ffeb70: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeb73: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* ffeb76: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeb79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb7d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeb7f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeb82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeb83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeb84: push 0x100a2f4 */
  { uint32_t v = 0x100a2f4u; esp -= 4; W32(esp, v); }
/* ffeb89: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffeb8eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffeb8e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffeb91: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffeb92: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffeb95: jl 0xffeb70 */
  if ((sf != of)) goto L_ffeb70;
L_ffeb97: /* ffeb97: xor esi, esi */
  esi = 0;
/* ffeb99: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeba0: /* ffeba0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeba3: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* ffeba6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeba9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffebab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffebad: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffebaf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffebb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffebb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffebb4: push 0x100a2e8 */
  { uint32_t v = 0x100a2e8u; esp -= 4; W32(esp, v); }
/* ffebb9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffebbeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffebbe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffebc1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffebc2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffebc5: jl 0xffeba0 */
  if ((sf != of)) goto L_ffeba0;
L_ffebc7: /* ffebc7: xor esi, esi */
  esi = 0;
/* ffebc9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffebd0: /* ffebd0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffebd3: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* ffebd6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffebd9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffebdb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffebdd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffebdf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffebe2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffebe3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffebe4: push 0x100a2d8 */
  { uint32_t v = 0x100a2d8u; esp -= 4; W32(esp, v); }
/* ffebe9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffebeeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffebee: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffebf1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffebf2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffebf5: jl 0xffebd0 */
  if ((sf != of)) goto L_ffebd0;
L_ffebf7: /* ffebf7: xor esi, esi */
  esi = 0;
/* ffebf9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffec00: /* ffec00: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffec03: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* ffec06: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffec09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec0d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffec0f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffec12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffec13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffec14: push 0x100a2cc */
  { uint32_t v = 0x100a2ccu; esp -= 4; W32(esp, v); }
/* ffec19: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffec1eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffec1e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffec21: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffec22: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffec25: jl 0xffec00 */
  if ((sf != of)) goto L_ffec00;
L_ffec27: /* ffec27: xor esi, esi */
  esi = 0;
/* ffec29: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffec30: /* ffec30: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffec33: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* ffec36: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffec39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec3d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffec3f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffec42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffec43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffec44: push 0x100a2bc */
  { uint32_t v = 0x100a2bcu; esp -= 4; W32(esp, v); }
/* ffec49: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffec4eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffec4e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffec51: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffec52: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffec55: jl 0xffec30 */
  if ((sf != of)) goto L_ffec30;
L_ffec57: /* ffec57: xor esi, esi */
  esi = 0;
/* ffec59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffec60: /* ffec60: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffec63: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* ffec66: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffec69: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec6d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffec6f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffec72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffec73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffec74: push 0x100a2b0 */
  { uint32_t v = 0x100a2b0u; esp -= 4; W32(esp, v); }
/* ffec79: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffec7eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffec7e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffec81: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffec82: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffec85: jl 0xffec60 */
  if ((sf != of)) goto L_ffec60;
L_ffec87: /* ffec87: xor esi, esi */
  esi = 0;
/* ffec89: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffec90: /* ffec90: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffec93: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* ffec96: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffec99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec9d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffec9f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeca2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeca3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeca4: push 0x100a2a0 */
  { uint32_t v = 0x100a2a0u; esp -= 4; W32(esp, v); }
/* ffeca9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffecaeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffecae: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffecb1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffecb2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffecb5: jl 0xffec90 */
  if ((sf != of)) goto L_ffec90;
L_ffecb7: /* ffecb7: xor esi, esi */
  esi = 0;
/* ffecb9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffecc0: /* ffecc0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffecc3: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* ffecc6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffecc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeccb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeccd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeccf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffecd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffecd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffecd4: push 0x100a294 */
  { uint32_t v = 0x100a294u; esp -= 4; W32(esp, v); }
/* ffecd9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffecdeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffecde: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffece1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffece2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffece5: jl 0xffecc0 */
  if ((sf != of)) goto L_ffecc0;
L_ffece7: /* ffece7: xor esi, esi */
  esi = 0;
/* ffece9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffecf0: /* ffecf0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffecf3: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* ffecf6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffecf9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffecfb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffecfd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffecff: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffed02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffed03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffed04: push 0x100a284 */
  { uint32_t v = 0x100a284u; esp -= 4; W32(esp, v); }
/* ffed09: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffed0eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffed0e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffed11: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffed12: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffed15: jl 0xffecf0 */
  if ((sf != of)) goto L_ffecf0;
L_ffed17: /* ffed17: xor esi, esi */
  esi = 0;
/* ffed19: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffed20: /* ffed20: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffed23: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* ffed26: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffed29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffed2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffed2d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffed2f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffed32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffed33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffed34: push 0x100a274 */
  { uint32_t v = 0x100a274u; esp -= 4; W32(esp, v); }
/* ffed39: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffed3eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffed3e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffed41: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffed42: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffed45: jl 0xffed20 */
  if ((sf != of)) goto L_ffed20;
L_ffed47: /* ffed47: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* ffed4a: xor esi, esi */
  esi = 0;
/* ffed4c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffed4e: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* ffed52: jle 0xffee3e */
  if ((zf || sf != of)) goto L_ffee3e;
L_ffed58: /* ffed58: fild dword ptr [ebp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* ffed5b: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* ffed5f: fild dword ptr [ebp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* ffed62: fstp qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0); FPOP();
/* ffed66: fld qword ptr [esp + 0x48] */
  { double v = F64((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* ffed6a: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* ffed6c: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
L_ffed70: /* ffed70: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* ffed74: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffed77: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* ffed7b: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* ffed7f: fadd qword ptr [0x100a128] */
  ST0 = ST0 + (F64((uint32_t)(0x100a128u)));
/* ffed85: fmul qword ptr [esp + 0x48] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x48u)));
/* ffed89: fdiv qword ptr [esp + 0x38] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x38u)));
/* ffed8d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffed90: call 0x1009172 */
  esp -= 4; W32(esp, 0xffed95u); SPILL(); f_1009172(); if (g_unwind) return; RELOAD();
/* ffed95: fmul qword ptr [0x100a658] */
  ST0 = ST0 * (F64((uint32_t)(0x100a658u)));
/* ffed9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffed9e: fsub qword ptr [0x100a650] */
  ST0 = ST0 - (F64((uint32_t)(0x100a650u)));
/* ffeda4: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* ffeda6: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ffedaa: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffedae: fcomp dword ptr [0x100a0c4] */
  fpu_com(ST0, F32((uint32_t)(0x100a0c4u)));
  FPOP();
/* ffedb4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffedb6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffedb9: jp 0xffedc5 */
  if (pf) goto L_ffedc5;
L_ffedbb: /* ffedbb: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* ffedc3: jmp 0xffedde */
  goto L_ffedde;
L_ffedc5: /* ffedc5: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffedc9: fcomp dword ptr [0x100a270] */
  fpu_com(ST0, F32((uint32_t)(0x100a270u)));
  FPOP();
/* ffedcf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffedd1: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffedd4: jne 0xffedde */
  if (!zf) goto L_ffedde;
L_ffedd6: /* ffedd6: mov dword ptr [esp + 0x10], 0x41800000 */
  W32((uint32_t)(esp + 0x10u), 0x41800000u);
L_ffedde: /* ffedde: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffede2: call 0x1009188 */
  esp -= 4; W32(esp, 0xffede7u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ffede7: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* ffedea: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* ffedee: fild dword ptr [esp + 0x48] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* ffedf2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffedf3: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffedf5: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* ffedf9: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* ffedfd: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffee01: fsub dword ptr [esp + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x48u)));
/* ffee05: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* ffee09: fld dword ptr [ecx + eax*4 + 0x67c] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x67cu)); FPUSH(v); }
/* ffee10: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* ffee14: fsubr qword ptr [0x100a0d0] */
  ST0 = (F64((uint32_t)(0x100a0d0u))) - ST0;
/* ffee1a: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* ffee1c: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* ffee20: fmul dword ptr [ecx + eax*4 + 0x680] */
  ST0 = ST0 * (F32((uint32_t)(ecx + eax*4 + 0x680u)));
/* ffee27: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* ffee2a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffee2c: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* ffee30: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* ffee34: fstp dword ptr [ecx + esi*4 - 4] */
  WF32((uint32_t)(ecx + esi*4 + 0xfffffffcu), ST0); FPOP();
/* ffee38: jl 0xffed70 */
  if ((sf != of)) goto L_ffed70;
L_ffee3e: /* ffee3e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffee40: mov esi, 1 */
  esi = 0x1u;
/* ffee45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffee46: mov dword ptr [0x100b010], esi */
  W32((uint32_t)(0x100b010u), esi);
/* ffee4c: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* ffee4f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffee50: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffee51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffee53: push 0x100a264 */
  { uint32_t v = 0x100a264u; esp -= 4; W32(esp, v); }
/* ffee58: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffee5du); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffee5d: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* ffee60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffee62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffee63: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffee64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffee65: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffee67: push 0x100a258 */
  { uint32_t v = 0x100a258u; esp -= 4; W32(esp, v); }
/* ffee6c: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffee71u); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffee71: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffee74: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffee75: mov dword ptr [0x100b010], esi */
  W32((uint32_t)(0x100b010u), esi);
/* ffee7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffee7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ffee7d: mov esp, ebp */
  esp = ebp;
/* ffee7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ffee80: ret  */
  esp += 4; SPILL(); return;
}

void f_ffe429(void) {
  LOAD_REGS();
L_ffe429: /* ffe429: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe430: /* ffe430: mov ecx, dword ptr [esp + 0x2c] */
  ecx = R32((uint32_t)(esp + 0x2cu));
/* ffe434: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* ffe43c: mov edx, 0xc */
  edx = 0xcu;
L_ffe441: /* ffe441: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe444: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe447: mov edi, dword ptr [eax + edx - 0xc] */
  edi = R32((uint32_t)(eax + edx + 0xfffffff4u));
/* ffe44b: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe44e: fcomp dword ptr [ecx - 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xfffffffcu)));
  FPOP();
/* ffe451: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe453: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe456: jp 0xffe45e */
  if (pf) goto L_ffe45e;
L_ffe458: /* ffe458: mov eax, dword ptr [ecx - 4] */
  eax = R32((uint32_t)(ecx + 0xfffffffcu));
/* ffe45b: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe45e: /* ffe45e: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe461: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe464: mov edi, dword ptr [eax + edx - 8] */
  edi = R32((uint32_t)(eax + edx + 0xfffffff8u));
/* ffe468: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe46b: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* ffe46d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe46f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe472: jp 0xffe479 */
  if (pf) goto L_ffe479;
L_ffe474: /* ffe474: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
/* ffe476: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe479: /* ffe479: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe47c: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe47f: mov edi, dword ptr [eax + edx - 4] */
  edi = R32((uint32_t)(eax + edx + 0xfffffffcu));
/* ffe483: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe486: fcomp dword ptr [ecx + 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x4u)));
  FPOP();
/* ffe489: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe48b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe48e: jp 0xffe496 */
  if (pf) goto L_ffe496;
L_ffe490: /* ffe490: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
/* ffe493: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe496: /* ffe496: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe499: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe49c: mov edi, dword ptr [eax + edx] */
  edi = R32((uint32_t)(eax + edx));
/* ffe49f: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe4a2: fcomp dword ptr [ecx + 8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x8u)));
  FPOP();
/* ffe4a5: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe4a7: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe4aa: jp 0xffe4b2 */
  if (pf) goto L_ffe4b2;
L_ffe4ac: /* ffe4ac: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
/* ffe4af: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe4b2: /* ffe4b2: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe4b5: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe4b8: mov edi, dword ptr [eax + edx + 4] */
  edi = R32((uint32_t)(eax + edx + 0x4u));
/* ffe4bc: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe4bf: fcomp dword ptr [ecx + 0xc] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xcu)));
  FPOP();
/* ffe4c2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe4c4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe4c7: jp 0xffe4cf */
  if (pf) goto L_ffe4cf;
L_ffe4c9: /* ffe4c9: mov eax, dword ptr [ecx + 0xc] */
  eax = R32((uint32_t)(ecx + 0xcu));
/* ffe4cc: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe4cf: /* ffe4cf: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe4d2: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe4d5: mov edi, dword ptr [eax + edx + 8] */
  edi = R32((uint32_t)(eax + edx + 0x8u));
/* ffe4d9: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe4dc: fcomp dword ptr [ecx + 0x10] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x10u)));
  FPOP();
/* ffe4df: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe4e1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe4e4: jp 0xffe4ec */
  if (pf) goto L_ffe4ec;
L_ffe4e6: /* ffe4e6: mov eax, dword ptr [ecx + 0x10] */
  eax = R32((uint32_t)(ecx + 0x10u));
/* ffe4e9: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe4ec: /* ffe4ec: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe4ef: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe4f2: mov edi, dword ptr [eax + edx + 0xc] */
  edi = R32((uint32_t)(eax + edx + 0xcu));
/* ffe4f6: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe4f9: fcomp dword ptr [ecx + 0x14] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x14u)));
  FPOP();
/* ffe4fc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe4fe: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe501: jp 0xffe509 */
  if (pf) goto L_ffe509;
L_ffe503: /* ffe503: mov eax, dword ptr [ecx + 0x14] */
  eax = R32((uint32_t)(ecx + 0x14u));
/* ffe506: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe509: /* ffe509: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe50c: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe50f: mov edi, dword ptr [eax + edx + 0x10] */
  edi = R32((uint32_t)(eax + edx + 0x10u));
/* ffe513: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe516: fcomp dword ptr [ecx + 0x18] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x18u)));
  FPOP();
/* ffe519: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe51b: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe51e: jp 0xffe526 */
  if (pf) goto L_ffe526;
L_ffe520: /* ffe520: mov eax, dword ptr [ecx + 0x18] */
  eax = R32((uint32_t)(ecx + 0x18u));
/* ffe523: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe526: /* ffe526: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe52a: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe52d: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffe530: add edx, 0x20 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe533: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe536: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* ffe53a: jl 0xffe441 */
  if ((sf != of)) goto L_ffe441;
L_ffe540: /* ffe540: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe543: jge 0xffe585 */
  if ((sf == of)) goto L_ffe585;
L_ffe545: /* ffe545: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* ffe549: add edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe54b: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
/* ffe552: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* ffe555: lea edx, [eax + edx*4 + 0x374] */
  edx = (uint32_t)(eax + edx*4 + 0x374u);
/* ffe55c: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe560: /* ffe560: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe563: mov eax, dword ptr [esi + eax] */
  eax = R32((uint32_t)(esi + eax));
/* ffe566: mov edi, dword ptr [eax + ecx] */
  edi = R32((uint32_t)(eax + ecx));
/* ffe569: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe56c: fcomp dword ptr [edx] */
  fpu_com(ST0, F32((uint32_t)(edx)));
  FPOP();
/* ffe56e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe570: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe573: jp 0xffe57a */
  if (pf) goto L_ffe57a;
L_ffe575: /* ffe575: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* ffe577: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe57a: /* ffe57a: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffe57d: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffe580: cmp ecx, 0x2c */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe583: jl 0xffe560 */
  if ((sf != of)) goto L_ffe560;
L_ffe585: /* ffe585: mov edi, dword ptr [esp + 0x2c] */
  edi = R32((uint32_t)(esp + 0x2cu));
/* ffe589: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* ffe58d: add edi, 0x2c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffe590: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffe593: add ecx, 0xb */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffe596: cmp esi, 0x44 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe599: mov dword ptr [esp + 0x2c], edi */
  W32((uint32_t)(esp + 0x2cu), edi);
/* ffe59d: mov dword ptr [esp + 0x28], ecx */
  W32((uint32_t)(esp + 0x28u), ecx);
/* ffe5a1: jl 0xffe430 */
  if ((sf != of)) goto L_ffe430;
L_ffe5a7: /* ffe5a7: mov esi, dword ptr [ebp + 0xc] */
  esi = R32((uint32_t)(ebp + 0xcu));
/* ffe5aa: xor edi, edi */
  edi = 0;
/* ffe5ac: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe5b0: /* ffe5b0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe5b3: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ffe5b5: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe5b8: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe5ba: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe5bc: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe5be: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe5c1: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe5c2: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe5c3: push 0x100a458 */
  { uint32_t v = 0x100a458u; esp -= 4; W32(esp, v); }
/* ffe5c8: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe5cdu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe5cd: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe5d0: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe5d1: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe5d4: jl 0xffe5b0 */
  if ((sf != of)) goto L_ffe5b0;
L_ffe5d6: /* ffe5d6: xor edi, edi */
  edi = 0;
/* ffe5d8: jmp 0xffe5e0 */
  goto L_ffe5e0;
L_ffe5e0: /* ffe5e0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe5e3: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* ffe5e6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe5e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe5eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe5ed: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe5ef: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe5f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe5f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe5f4: push 0x100a44c */
  { uint32_t v = 0x100a44cu; esp -= 4; W32(esp, v); }
/* ffe5f9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe5feu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe5fe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe601: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe602: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe605: jl 0xffe5e0 */
  if ((sf != of)) goto L_ffe5e0;
L_ffe607: /* ffe607: xor edi, edi */
  edi = 0;
/* ffe609: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe610: /* ffe610: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe613: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* ffe616: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe619: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe61b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe61d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe61f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe622: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe623: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe624: push 0x100a43c */
  { uint32_t v = 0x100a43cu; esp -= 4; W32(esp, v); }
/* ffe629: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe62eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe62e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe631: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe632: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe635: jl 0xffe610 */
  if ((sf != of)) goto L_ffe610;
L_ffe637: /* ffe637: xor edi, edi */
  edi = 0;
/* ffe639: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe640: /* ffe640: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe643: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* ffe646: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe649: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe64b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe64d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe64f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe652: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe653: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe654: push 0x100a42c */
  { uint32_t v = 0x100a42cu; esp -= 4; W32(esp, v); }
/* ffe659: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe65eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe65e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe661: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe662: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe665: jl 0xffe640 */
  if ((sf != of)) goto L_ffe640;
L_ffe667: /* ffe667: xor edi, edi */
  edi = 0;
/* ffe669: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe670: /* ffe670: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe673: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* ffe676: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe679: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe67b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe67d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe67f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe682: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe683: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe684: push 0x100a41c */
  { uint32_t v = 0x100a41cu; esp -= 4; W32(esp, v); }
/* ffe689: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe68eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe68e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe691: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe692: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe695: jl 0xffe670 */
  if ((sf != of)) goto L_ffe670;
L_ffe697: /* ffe697: xor edi, edi */
  edi = 0;
/* ffe699: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe6a0: /* ffe6a0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe6a3: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* ffe6a6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe6a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe6ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe6ad: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe6af: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe6b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe6b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe6b4: push 0x100a40c */
  { uint32_t v = 0x100a40cu; esp -= 4; W32(esp, v); }
/* ffe6b9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe6beu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe6be: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe6c1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe6c2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe6c5: jl 0xffe6a0 */
  if ((sf != of)) goto L_ffe6a0;
L_ffe6c7: /* ffe6c7: xor edi, edi */
  edi = 0;
/* ffe6c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe6d0: /* ffe6d0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe6d3: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* ffe6d6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe6d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe6db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe6dd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe6df: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe6e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe6e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe6e4: push 0x100a3fc */
  { uint32_t v = 0x100a3fcu; esp -= 4; W32(esp, v); }
/* ffe6e9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe6eeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe6ee: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe6f1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe6f2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe6f5: jl 0xffe6d0 */
  if ((sf != of)) goto L_ffe6d0;
L_ffe6f7: /* ffe6f7: xor edi, edi */
  edi = 0;
/* ffe6f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe700: /* ffe700: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe703: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* ffe706: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe709: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe70b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe70d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe70f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe712: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe713: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe714: push 0x100a3ec */
  { uint32_t v = 0x100a3ecu; esp -= 4; W32(esp, v); }
/* ffe719: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe71eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe71e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe721: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe722: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe725: jl 0xffe700 */
  if ((sf != of)) goto L_ffe700;
L_ffe727: /* ffe727: xor edi, edi */
  edi = 0;
/* ffe729: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe730: /* ffe730: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe733: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* ffe736: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe739: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe73b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe73d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe73f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe742: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe743: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe744: push 0x100a3e0 */
  { uint32_t v = 0x100a3e0u; esp -= 4; W32(esp, v); }
/* ffe749: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe74eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe74e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe751: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe752: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe755: jl 0xffe730 */
  if ((sf != of)) goto L_ffe730;
L_ffe757: /* ffe757: xor edi, edi */
  edi = 0;
/* ffe759: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe760: /* ffe760: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe763: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* ffe766: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe769: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe76b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe76d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe76f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe772: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe773: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe774: push 0x100a3d0 */
  { uint32_t v = 0x100a3d0u; esp -= 4; W32(esp, v); }
/* ffe779: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe77eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe77e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe781: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe782: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe785: jl 0xffe760 */
  if ((sf != of)) goto L_ffe760;
L_ffe787: /* ffe787: xor edi, edi */
  edi = 0;
/* ffe789: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe790: /* ffe790: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe793: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* ffe796: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe799: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe79b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe79d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe79f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe7a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe7a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe7a4: push 0x100a3c4 */
  { uint32_t v = 0x100a3c4u; esp -= 4; W32(esp, v); }
/* ffe7a9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe7aeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe7ae: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe7b1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe7b2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe7b5: jl 0xffe790 */
  if ((sf != of)) goto L_ffe790;
L_ffe7b7: /* ffe7b7: xor edi, edi */
  edi = 0;
/* ffe7b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe7c0: /* ffe7c0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe7c3: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* ffe7c6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe7c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe7cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe7cd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe7cf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe7d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe7d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe7d4: push 0x100a3b4 */
  { uint32_t v = 0x100a3b4u; esp -= 4; W32(esp, v); }
/* ffe7d9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe7deu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe7de: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe7e1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe7e2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe7e5: jl 0xffe7c0 */
  if ((sf != of)) goto L_ffe7c0;
L_ffe7e7: /* ffe7e7: xor edi, edi */
  edi = 0;
/* ffe7e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe7f0: /* ffe7f0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe7f3: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* ffe7f6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe7f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe7fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe7fd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe7ff: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe802: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe803: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe804: push 0x100a3a8 */
  { uint32_t v = 0x100a3a8u; esp -= 4; W32(esp, v); }
/* ffe809: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe80eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe80e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe811: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe812: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe815: jl 0xffe7f0 */
  if ((sf != of)) goto L_ffe7f0;
L_ffe817: /* ffe817: xor edi, edi */
  edi = 0;
/* ffe819: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe820: /* ffe820: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe823: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* ffe826: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe829: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe82b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe82d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe82f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe832: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe833: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe834: push 0x100a398 */
  { uint32_t v = 0x100a398u; esp -= 4; W32(esp, v); }
/* ffe839: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe83eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe83e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe841: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe842: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe845: jl 0xffe820 */
  if ((sf != of)) goto L_ffe820;
L_ffe847: /* ffe847: xor edi, edi */
  edi = 0;
/* ffe849: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe850: /* ffe850: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe853: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* ffe856: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe859: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe85b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe85d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe85f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe862: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe863: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe864: push 0x100a38c */
  { uint32_t v = 0x100a38cu; esp -= 4; W32(esp, v); }
/* ffe869: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe86eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe86e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe871: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe872: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe875: jl 0xffe850 */
  if ((sf != of)) goto L_ffe850;
L_ffe877: /* ffe877: xor edi, edi */
  edi = 0;
/* ffe879: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe880: /* ffe880: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe883: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* ffe886: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe889: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe88b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe88d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe88f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe892: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe893: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe894: push 0x100a37c */
  { uint32_t v = 0x100a37cu; esp -= 4; W32(esp, v); }
/* ffe899: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe89eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe89e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe8a1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe8a2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe8a5: jl 0xffe880 */
  if ((sf != of)) goto L_ffe880;
L_ffe8a7: /* ffe8a7: xor edi, edi */
  edi = 0;
/* ffe8a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe8b0: /* ffe8b0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe8b3: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* ffe8b6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe8b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe8bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe8bd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe8bf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe8c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe8c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe8c4: push 0x100a36c */
  { uint32_t v = 0x100a36cu; esp -= 4; W32(esp, v); }
/* ffe8c9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe8ceu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe8ce: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe8d1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe8d2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe8d5: jl 0xffe8b0 */
  if ((sf != of)) goto L_ffe8b0;
L_ffe8d7: /* ffe8d7: xor edx, edx */
  edx = 0;
/* ffe8d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe8e0: /* ffe8e0: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* ffe8e8: mov ecx, 0xc */
  ecx = 0xcu;
L_ffe8ed: /* ffe8ed: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe8f0: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe8f3: mov edi, dword ptr [eax + ecx - 0xc] */
  edi = R32((uint32_t)(eax + ecx + 0xfffffff4u));
/* ffe8f7: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe8fa: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe8fd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe8ff: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe902: jp 0xffe90a */
  if (pf) goto L_ffe90a;
L_ffe904: /* ffe904: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe907: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe90a: /* ffe90a: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe90d: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe910: mov edi, dword ptr [eax + ecx - 8] */
  edi = R32((uint32_t)(eax + ecx + 0xfffffff8u));
/* ffe914: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe917: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe91a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe91c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe91f: jp 0xffe927 */
  if (pf) goto L_ffe927;
L_ffe921: /* ffe921: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe924: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe927: /* ffe927: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe92a: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe92d: mov edi, dword ptr [eax + ecx - 4] */
  edi = R32((uint32_t)(eax + ecx + 0xfffffffcu));
/* ffe931: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe934: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe937: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe939: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe93c: jp 0xffe944 */
  if (pf) goto L_ffe944;
L_ffe93e: /* ffe93e: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe941: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe944: /* ffe944: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe947: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe94a: mov edi, dword ptr [eax + ecx] */
  edi = R32((uint32_t)(eax + ecx));
/* ffe94d: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe950: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe953: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe955: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe958: jp 0xffe960 */
  if (pf) goto L_ffe960;
L_ffe95a: /* ffe95a: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe95d: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe960: /* ffe960: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe963: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe966: mov edi, dword ptr [eax + ecx + 4] */
  edi = R32((uint32_t)(eax + ecx + 0x4u));
/* ffe96a: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe96d: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe970: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe972: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe975: jp 0xffe97d */
  if (pf) goto L_ffe97d;
L_ffe977: /* ffe977: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe97a: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe97d: /* ffe97d: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe980: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe983: mov edi, dword ptr [eax + ecx + 8] */
  edi = R32((uint32_t)(eax + ecx + 0x8u));
/* ffe987: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe98a: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe98d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe98f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe992: jp 0xffe99a */
  if (pf) goto L_ffe99a;
L_ffe994: /* ffe994: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe997: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe99a: /* ffe99a: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe99d: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe9a0: mov edi, dword ptr [eax + ecx + 0xc] */
  edi = R32((uint32_t)(eax + ecx + 0xcu));
/* ffe9a4: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe9a7: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe9aa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe9ac: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe9af: jp 0xffe9b7 */
  if (pf) goto L_ffe9b7;
L_ffe9b1: /* ffe9b1: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe9b4: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe9b7: /* ffe9b7: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe9ba: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe9bd: mov edi, dword ptr [eax + ecx + 0x10] */
  edi = R32((uint32_t)(eax + ecx + 0x10u));
/* ffe9c1: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe9c4: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe9c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe9c9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe9cc: jp 0xffe9d4 */
  if (pf) goto L_ffe9d4;
L_ffe9ce: /* ffe9ce: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe9d1: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe9d4: /* ffe9d4: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe9d8: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe9db: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffe9de: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe9e1: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* ffe9e5: jl 0xffe8ed */
  if ((sf != of)) goto L_ffe8ed;
L_ffe9eb: /* ffe9eb: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe9ee: jge 0xffea19 */
  if ((sf == of)) goto L_ffea19;
L_ffe9f0: /* ffe9f0: mov edi, eax */
  edi = eax;
/* ffe9f2: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
L_ffe9f5: /* ffe9f5: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe9f8: mov eax, dword ptr [edx + ecx] */
  eax = R32((uint32_t)(edx + ecx));
/* ffe9fb: mov ecx, dword ptr [eax + edi] */
  ecx = R32((uint32_t)(eax + edi));
/* ffe9fe: fld dword ptr [ecx + 0x48] */
  { double v = F32((uint32_t)(ecx + 0x48u)); FPUSH(v); }
/* ffea01: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffea04: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffea06: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffea09: jp 0xffea11 */
  if (pf) goto L_ffea11;
L_ffea0b: /* ffea0b: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffea0e: mov dword ptr [ecx + 0x48], eax */
  W32((uint32_t)(ecx + 0x48u), eax);
L_ffea11: /* ffea11: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffea14: cmp edi, 0x2c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffea17: jl 0xffe9f5 */
  if ((sf != of)) goto L_ffe9f5;
L_ffea19: /* ffea19: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffea1c: cmp edx, 0x44 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffea1f: jl 0xffe8e0 */
  if ((sf != of)) goto L_ffe8e0;
L_ffea25: /* ffea25: xor esi, esi */
  esi = 0;
L_ffea27: /* ffea27: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffea2a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ffea2c: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffea2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea33: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffea35: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffea38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffea39: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffea3a: push 0x100a360 */
  { uint32_t v = 0x100a360u; esp -= 4; W32(esp, v); }
/* ffea3f: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffea44u); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffea44: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffea47: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffea48: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffea4b: jl 0xffea27 */
  if ((sf != of)) goto L_ffea27;
L_ffea4d: /* ffea4d: xor esi, esi */
  esi = 0;
/* ffea4f: nop  */
L_ffea50: /* ffea50: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffea53: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* ffea56: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffea59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea5b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea5d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffea5f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffea62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffea63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffea64: push 0x100a354 */
  { uint32_t v = 0x100a354u; esp -= 4; W32(esp, v); }
/* ffea69: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffea6eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffea6e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffea71: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffea72: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffea75: jl 0xffea50 */
  if ((sf != of)) goto L_ffea50;
L_ffea77: /* ffea77: xor esi, esi */
  esi = 0;
/* ffea79: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffea80: /* ffea80: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffea83: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* ffea86: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffea89: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea8d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffea8f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffea92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffea93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffea94: push 0x100a344 */
  { uint32_t v = 0x100a344u; esp -= 4; W32(esp, v); }
/* ffea99: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffea9eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffea9e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffeaa1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffeaa2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffeaa5: jl 0xffea80 */
  if ((sf != of)) goto L_ffea80;
L_ffeaa7: /* ffeaa7: xor esi, esi */
  esi = 0;
/* ffeaa9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeab0: /* ffeab0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeab3: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* ffeab6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeab9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeabb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeabd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeabf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeac2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeac3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeac4: push 0x100a334 */
  { uint32_t v = 0x100a334u; esp -= 4; W32(esp, v); }
/* ffeac9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffeaceu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffeace: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffead1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffead2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffead5: jl 0xffeab0 */
  if ((sf != of)) goto L_ffeab0;
L_ffead7: /* ffead7: xor esi, esi */
  esi = 0;
/* ffead9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeae0: /* ffeae0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeae3: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* ffeae6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeae9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeaeb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeaed: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeaef: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeaf2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeaf3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeaf4: push 0x100a324 */
  { uint32_t v = 0x100a324u; esp -= 4; W32(esp, v); }
/* ffeaf9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffeafeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffeafe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffeb01: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffeb02: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffeb05: jl 0xffeae0 */
  if ((sf != of)) goto L_ffeae0;
L_ffeb07: /* ffeb07: xor esi, esi */
  esi = 0;
/* ffeb09: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeb10: /* ffeb10: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeb13: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* ffeb16: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeb19: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb1b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb1d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeb1f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeb22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeb23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeb24: push 0x100a314 */
  { uint32_t v = 0x100a314u; esp -= 4; W32(esp, v); }
/* ffeb29: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffeb2eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffeb2e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffeb31: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffeb32: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffeb35: jl 0xffeb10 */
  if ((sf != of)) goto L_ffeb10;
L_ffeb37: /* ffeb37: xor esi, esi */
  esi = 0;
/* ffeb39: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeb40: /* ffeb40: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeb43: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* ffeb46: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeb49: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb4d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeb4f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeb52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeb53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeb54: push 0x100a304 */
  { uint32_t v = 0x100a304u; esp -= 4; W32(esp, v); }
/* ffeb59: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffeb5eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffeb5e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffeb61: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffeb62: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffeb65: jl 0xffeb40 */
  if ((sf != of)) goto L_ffeb40;
L_ffeb67: /* ffeb67: xor esi, esi */
  esi = 0;
/* ffeb69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeb70: /* ffeb70: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeb73: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* ffeb76: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeb79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb7d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeb7f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeb82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeb83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeb84: push 0x100a2f4 */
  { uint32_t v = 0x100a2f4u; esp -= 4; W32(esp, v); }
/* ffeb89: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffeb8eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffeb8e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffeb91: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffeb92: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffeb95: jl 0xffeb70 */
  if ((sf != of)) goto L_ffeb70;
L_ffeb97: /* ffeb97: xor esi, esi */
  esi = 0;
/* ffeb99: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeba0: /* ffeba0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeba3: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* ffeba6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeba9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffebab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffebad: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffebaf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffebb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffebb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffebb4: push 0x100a2e8 */
  { uint32_t v = 0x100a2e8u; esp -= 4; W32(esp, v); }
/* ffebb9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffebbeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffebbe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffebc1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffebc2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffebc5: jl 0xffeba0 */
  if ((sf != of)) goto L_ffeba0;
L_ffebc7: /* ffebc7: xor esi, esi */
  esi = 0;
/* ffebc9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffebd0: /* ffebd0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffebd3: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* ffebd6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffebd9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffebdb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffebdd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffebdf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffebe2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffebe3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffebe4: push 0x100a2d8 */
  { uint32_t v = 0x100a2d8u; esp -= 4; W32(esp, v); }
/* ffebe9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffebeeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffebee: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffebf1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffebf2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffebf5: jl 0xffebd0 */
  if ((sf != of)) goto L_ffebd0;
L_ffebf7: /* ffebf7: xor esi, esi */
  esi = 0;
/* ffebf9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffec00: /* ffec00: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffec03: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* ffec06: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffec09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec0d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffec0f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffec12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffec13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffec14: push 0x100a2cc */
  { uint32_t v = 0x100a2ccu; esp -= 4; W32(esp, v); }
/* ffec19: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffec1eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffec1e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffec21: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffec22: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffec25: jl 0xffec00 */
  if ((sf != of)) goto L_ffec00;
L_ffec27: /* ffec27: xor esi, esi */
  esi = 0;
/* ffec29: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffec30: /* ffec30: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffec33: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* ffec36: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffec39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec3d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffec3f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffec42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffec43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffec44: push 0x100a2bc */
  { uint32_t v = 0x100a2bcu; esp -= 4; W32(esp, v); }
/* ffec49: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffec4eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffec4e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffec51: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffec52: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffec55: jl 0xffec30 */
  if ((sf != of)) goto L_ffec30;
L_ffec57: /* ffec57: xor esi, esi */
  esi = 0;
/* ffec59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffec60: /* ffec60: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffec63: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* ffec66: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffec69: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec6d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffec6f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffec72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffec73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffec74: push 0x100a2b0 */
  { uint32_t v = 0x100a2b0u; esp -= 4; W32(esp, v); }
/* ffec79: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffec7eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffec7e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffec81: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffec82: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffec85: jl 0xffec60 */
  if ((sf != of)) goto L_ffec60;
L_ffec87: /* ffec87: xor esi, esi */
  esi = 0;
/* ffec89: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffec90: /* ffec90: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffec93: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* ffec96: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffec99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec9d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffec9f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeca2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeca3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeca4: push 0x100a2a0 */
  { uint32_t v = 0x100a2a0u; esp -= 4; W32(esp, v); }
/* ffeca9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffecaeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffecae: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffecb1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffecb2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffecb5: jl 0xffec90 */
  if ((sf != of)) goto L_ffec90;
L_ffecb7: /* ffecb7: xor esi, esi */
  esi = 0;
/* ffecb9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffecc0: /* ffecc0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffecc3: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* ffecc6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffecc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeccb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeccd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeccf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffecd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffecd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffecd4: push 0x100a294 */
  { uint32_t v = 0x100a294u; esp -= 4; W32(esp, v); }
/* ffecd9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffecdeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffecde: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffece1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffece2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffece5: jl 0xffecc0 */
  if ((sf != of)) goto L_ffecc0;
L_ffece7: /* ffece7: xor esi, esi */
  esi = 0;
/* ffece9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffecf0: /* ffecf0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffecf3: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* ffecf6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffecf9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffecfb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffecfd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffecff: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffed02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffed03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffed04: push 0x100a284 */
  { uint32_t v = 0x100a284u; esp -= 4; W32(esp, v); }
/* ffed09: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffed0eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffed0e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffed11: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffed12: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffed15: jl 0xffecf0 */
  if ((sf != of)) goto L_ffecf0;
L_ffed17: /* ffed17: xor esi, esi */
  esi = 0;
/* ffed19: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffed20: /* ffed20: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffed23: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* ffed26: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffed29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffed2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffed2d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffed2f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffed32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffed33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffed34: push 0x100a274 */
  { uint32_t v = 0x100a274u; esp -= 4; W32(esp, v); }
/* ffed39: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffed3eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffed3e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffed41: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffed42: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffed45: jl 0xffed20 */
  if ((sf != of)) goto L_ffed20;
L_ffed47: /* ffed47: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* ffed4a: xor esi, esi */
  esi = 0;
/* ffed4c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffed4e: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* ffed52: jle 0xffee3e */
  if ((zf || sf != of)) goto L_ffee3e;
L_ffed58: /* ffed58: fild dword ptr [ebp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* ffed5b: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* ffed5f: fild dword ptr [ebp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* ffed62: fstp qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0); FPOP();
/* ffed66: fld qword ptr [esp + 0x48] */
  { double v = F64((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* ffed6a: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* ffed6c: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
L_ffed70: /* ffed70: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* ffed74: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffed77: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* ffed7b: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* ffed7f: fadd qword ptr [0x100a128] */
  ST0 = ST0 + (F64((uint32_t)(0x100a128u)));
/* ffed85: fmul qword ptr [esp + 0x48] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x48u)));
/* ffed89: fdiv qword ptr [esp + 0x38] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x38u)));
/* ffed8d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffed90: call 0x1009172 */
  esp -= 4; W32(esp, 0xffed95u); SPILL(); f_1009172(); if (g_unwind) return; RELOAD();
/* ffed95: fmul qword ptr [0x100a658] */
  ST0 = ST0 * (F64((uint32_t)(0x100a658u)));
/* ffed9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffed9e: fsub qword ptr [0x100a650] */
  ST0 = ST0 - (F64((uint32_t)(0x100a650u)));
/* ffeda4: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* ffeda6: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ffedaa: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffedae: fcomp dword ptr [0x100a0c4] */
  fpu_com(ST0, F32((uint32_t)(0x100a0c4u)));
  FPOP();
/* ffedb4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffedb6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffedb9: jp 0xffedc5 */
  if (pf) goto L_ffedc5;
L_ffedbb: /* ffedbb: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* ffedc3: jmp 0xffedde */
  goto L_ffedde;
L_ffedc5: /* ffedc5: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffedc9: fcomp dword ptr [0x100a270] */
  fpu_com(ST0, F32((uint32_t)(0x100a270u)));
  FPOP();
/* ffedcf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffedd1: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffedd4: jne 0xffedde */
  if (!zf) goto L_ffedde;
L_ffedd6: /* ffedd6: mov dword ptr [esp + 0x10], 0x41800000 */
  W32((uint32_t)(esp + 0x10u), 0x41800000u);
L_ffedde: /* ffedde: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffede2: call 0x1009188 */
  esp -= 4; W32(esp, 0xffede7u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ffede7: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* ffedea: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* ffedee: fild dword ptr [esp + 0x48] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* ffedf2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffedf3: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffedf5: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* ffedf9: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* ffedfd: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffee01: fsub dword ptr [esp + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x48u)));
/* ffee05: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* ffee09: fld dword ptr [ecx + eax*4 + 0x67c] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x67cu)); FPUSH(v); }
/* ffee10: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* ffee14: fsubr qword ptr [0x100a0d0] */
  ST0 = (F64((uint32_t)(0x100a0d0u))) - ST0;
/* ffee1a: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* ffee1c: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* ffee20: fmul dword ptr [ecx + eax*4 + 0x680] */
  ST0 = ST0 * (F32((uint32_t)(ecx + eax*4 + 0x680u)));
/* ffee27: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* ffee2a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffee2c: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* ffee30: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* ffee34: fstp dword ptr [ecx + esi*4 - 4] */
  WF32((uint32_t)(ecx + esi*4 + 0xfffffffcu), ST0); FPOP();
/* ffee38: jl 0xffed70 */
  if ((sf != of)) goto L_ffed70;
L_ffee3e: /* ffee3e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffee40: mov esi, 1 */
  esi = 0x1u;
/* ffee45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffee46: mov dword ptr [0x100b010], esi */
  W32((uint32_t)(0x100b010u), esi);
/* ffee4c: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* ffee4f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffee50: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffee51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffee53: push 0x100a264 */
  { uint32_t v = 0x100a264u; esp -= 4; W32(esp, v); }
/* ffee58: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffee5du); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffee5d: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* ffee60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffee62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffee63: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffee64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffee65: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffee67: push 0x100a258 */
  { uint32_t v = 0x100a258u; esp -= 4; W32(esp, v); }
/* ffee6c: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffee71u); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffee71: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffee74: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffee75: mov dword ptr [0x100b010], esi */
  W32((uint32_t)(0x100b010u), esi);
/* ffee7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffee7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ffee7d: mov esp, ebp */
  esp = ebp;
/* ffee7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ffee80: ret  */
  esp += 4; SPILL(); return;
}

void f_ffe5da(void) {
  LOAD_REGS();
L_ffe5da: /* ffe5da: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ffe5e0: /* ffe5e0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe5e3: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* ffe5e6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe5e9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe5eb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe5ed: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe5ef: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe5f2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe5f3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe5f4: push 0x100a44c */
  { uint32_t v = 0x100a44cu; esp -= 4; W32(esp, v); }
/* ffe5f9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe5feu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe5fe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe601: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe602: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe605: jl 0xffe5e0 */
  if ((sf != of)) goto L_ffe5e0;
L_ffe607: /* ffe607: xor edi, edi */
  edi = 0;
/* ffe609: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe610: /* ffe610: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe613: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* ffe616: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe619: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe61b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe61d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe61f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe622: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe623: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe624: push 0x100a43c */
  { uint32_t v = 0x100a43cu; esp -= 4; W32(esp, v); }
/* ffe629: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe62eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe62e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe631: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe632: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe635: jl 0xffe610 */
  if ((sf != of)) goto L_ffe610;
L_ffe637: /* ffe637: xor edi, edi */
  edi = 0;
/* ffe639: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe640: /* ffe640: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe643: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* ffe646: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe649: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe64b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe64d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe64f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe652: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe653: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe654: push 0x100a42c */
  { uint32_t v = 0x100a42cu; esp -= 4; W32(esp, v); }
/* ffe659: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe65eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe65e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe661: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe662: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe665: jl 0xffe640 */
  if ((sf != of)) goto L_ffe640;
L_ffe667: /* ffe667: xor edi, edi */
  edi = 0;
/* ffe669: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe670: /* ffe670: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe673: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* ffe676: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe679: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe67b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe67d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe67f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe682: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe683: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe684: push 0x100a41c */
  { uint32_t v = 0x100a41cu; esp -= 4; W32(esp, v); }
/* ffe689: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe68eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe68e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe691: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe692: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe695: jl 0xffe670 */
  if ((sf != of)) goto L_ffe670;
L_ffe697: /* ffe697: xor edi, edi */
  edi = 0;
/* ffe699: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe6a0: /* ffe6a0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe6a3: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* ffe6a6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe6a9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe6ab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe6ad: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe6af: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe6b2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe6b3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe6b4: push 0x100a40c */
  { uint32_t v = 0x100a40cu; esp -= 4; W32(esp, v); }
/* ffe6b9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe6beu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe6be: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe6c1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe6c2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe6c5: jl 0xffe6a0 */
  if ((sf != of)) goto L_ffe6a0;
L_ffe6c7: /* ffe6c7: xor edi, edi */
  edi = 0;
/* ffe6c9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe6d0: /* ffe6d0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe6d3: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* ffe6d6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe6d9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe6db: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe6dd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe6df: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe6e2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe6e3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe6e4: push 0x100a3fc */
  { uint32_t v = 0x100a3fcu; esp -= 4; W32(esp, v); }
/* ffe6e9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe6eeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe6ee: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe6f1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe6f2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe6f5: jl 0xffe6d0 */
  if ((sf != of)) goto L_ffe6d0;
L_ffe6f7: /* ffe6f7: xor edi, edi */
  edi = 0;
/* ffe6f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe700: /* ffe700: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe703: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* ffe706: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe709: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe70b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe70d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe70f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe712: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe713: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe714: push 0x100a3ec */
  { uint32_t v = 0x100a3ecu; esp -= 4; W32(esp, v); }
/* ffe719: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe71eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe71e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe721: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe722: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe725: jl 0xffe700 */
  if ((sf != of)) goto L_ffe700;
L_ffe727: /* ffe727: xor edi, edi */
  edi = 0;
/* ffe729: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe730: /* ffe730: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe733: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* ffe736: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe739: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe73b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe73d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe73f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe742: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe743: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe744: push 0x100a3e0 */
  { uint32_t v = 0x100a3e0u; esp -= 4; W32(esp, v); }
/* ffe749: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe74eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe74e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe751: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe752: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe755: jl 0xffe730 */
  if ((sf != of)) goto L_ffe730;
L_ffe757: /* ffe757: xor edi, edi */
  edi = 0;
/* ffe759: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe760: /* ffe760: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe763: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* ffe766: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe769: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe76b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe76d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe76f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe772: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe773: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe774: push 0x100a3d0 */
  { uint32_t v = 0x100a3d0u; esp -= 4; W32(esp, v); }
/* ffe779: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe77eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe77e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe781: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe782: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe785: jl 0xffe760 */
  if ((sf != of)) goto L_ffe760;
L_ffe787: /* ffe787: xor edi, edi */
  edi = 0;
/* ffe789: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe790: /* ffe790: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe793: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* ffe796: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe799: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe79b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe79d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe79f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe7a2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe7a3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe7a4: push 0x100a3c4 */
  { uint32_t v = 0x100a3c4u; esp -= 4; W32(esp, v); }
/* ffe7a9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe7aeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe7ae: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe7b1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe7b2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe7b5: jl 0xffe790 */
  if ((sf != of)) goto L_ffe790;
L_ffe7b7: /* ffe7b7: xor edi, edi */
  edi = 0;
/* ffe7b9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe7c0: /* ffe7c0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe7c3: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* ffe7c6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe7c9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe7cb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe7cd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe7cf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe7d2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe7d3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe7d4: push 0x100a3b4 */
  { uint32_t v = 0x100a3b4u; esp -= 4; W32(esp, v); }
/* ffe7d9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe7deu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe7de: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe7e1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe7e2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe7e5: jl 0xffe7c0 */
  if ((sf != of)) goto L_ffe7c0;
L_ffe7e7: /* ffe7e7: xor edi, edi */
  edi = 0;
/* ffe7e9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe7f0: /* ffe7f0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe7f3: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* ffe7f6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe7f9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe7fb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe7fd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe7ff: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe802: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe803: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe804: push 0x100a3a8 */
  { uint32_t v = 0x100a3a8u; esp -= 4; W32(esp, v); }
/* ffe809: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe80eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe80e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe811: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe812: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe815: jl 0xffe7f0 */
  if ((sf != of)) goto L_ffe7f0;
L_ffe817: /* ffe817: xor edi, edi */
  edi = 0;
/* ffe819: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe820: /* ffe820: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe823: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* ffe826: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe829: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe82b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe82d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe82f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe832: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe833: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe834: push 0x100a398 */
  { uint32_t v = 0x100a398u; esp -= 4; W32(esp, v); }
/* ffe839: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe83eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe83e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe841: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe842: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe845: jl 0xffe820 */
  if ((sf != of)) goto L_ffe820;
L_ffe847: /* ffe847: xor edi, edi */
  edi = 0;
/* ffe849: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe850: /* ffe850: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe853: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* ffe856: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe859: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe85b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe85d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe85f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe862: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe863: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe864: push 0x100a38c */
  { uint32_t v = 0x100a38cu; esp -= 4; W32(esp, v); }
/* ffe869: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe86eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe86e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe871: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe872: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe875: jl 0xffe850 */
  if ((sf != of)) goto L_ffe850;
L_ffe877: /* ffe877: xor edi, edi */
  edi = 0;
/* ffe879: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe880: /* ffe880: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe883: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* ffe886: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe889: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe88b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe88d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe88f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe892: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe893: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe894: push 0x100a37c */
  { uint32_t v = 0x100a37cu; esp -= 4; W32(esp, v); }
/* ffe899: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe89eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe89e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe8a1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe8a2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe8a5: jl 0xffe880 */
  if ((sf != of)) goto L_ffe880;
L_ffe8a7: /* ffe8a7: xor edi, edi */
  edi = 0;
/* ffe8a9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe8b0: /* ffe8b0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe8b3: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* ffe8b6: mov eax, dword ptr [edx + edi*4] */
  eax = R32((uint32_t)(edx + edi*4));
/* ffe8b9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe8bb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffe8bd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffe8bf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe8c2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffe8c3: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffe8c4: push 0x100a36c */
  { uint32_t v = 0x100a36cu; esp -= 4; W32(esp, v); }
/* ffe8c9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffe8ceu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffe8ce: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffe8d1: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* ffe8d2: cmp edi, 0xb */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe8d5: jl 0xffe8b0 */
  if ((sf != of)) goto L_ffe8b0;
L_ffe8d7: /* ffe8d7: xor edx, edx */
  edx = 0;
/* ffe8d9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffe8e0: /* ffe8e0: mov dword ptr [esp + 0xc], 0 */
  W32((uint32_t)(esp + 0xcu), 0x0u);
/* ffe8e8: mov ecx, 0xc */
  ecx = 0xcu;
L_ffe8ed: /* ffe8ed: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe8f0: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe8f3: mov edi, dword ptr [eax + ecx - 0xc] */
  edi = R32((uint32_t)(eax + ecx + 0xfffffff4u));
/* ffe8f7: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe8fa: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe8fd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe8ff: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe902: jp 0xffe90a */
  if (pf) goto L_ffe90a;
L_ffe904: /* ffe904: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe907: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe90a: /* ffe90a: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe90d: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe910: mov edi, dword ptr [eax + ecx - 8] */
  edi = R32((uint32_t)(eax + ecx + 0xfffffff8u));
/* ffe914: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe917: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe91a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe91c: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe91f: jp 0xffe927 */
  if (pf) goto L_ffe927;
L_ffe921: /* ffe921: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe924: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe927: /* ffe927: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe92a: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe92d: mov edi, dword ptr [eax + ecx - 4] */
  edi = R32((uint32_t)(eax + ecx + 0xfffffffcu));
/* ffe931: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe934: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe937: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe939: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe93c: jp 0xffe944 */
  if (pf) goto L_ffe944;
L_ffe93e: /* ffe93e: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe941: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe944: /* ffe944: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe947: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe94a: mov edi, dword ptr [eax + ecx] */
  edi = R32((uint32_t)(eax + ecx));
/* ffe94d: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe950: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe953: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe955: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe958: jp 0xffe960 */
  if (pf) goto L_ffe960;
L_ffe95a: /* ffe95a: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe95d: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe960: /* ffe960: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe963: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe966: mov edi, dword ptr [eax + ecx + 4] */
  edi = R32((uint32_t)(eax + ecx + 0x4u));
/* ffe96a: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe96d: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe970: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe972: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe975: jp 0xffe97d */
  if (pf) goto L_ffe97d;
L_ffe977: /* ffe977: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe97a: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe97d: /* ffe97d: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe980: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe983: mov edi, dword ptr [eax + ecx + 8] */
  edi = R32((uint32_t)(eax + ecx + 0x8u));
/* ffe987: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe98a: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe98d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe98f: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe992: jp 0xffe99a */
  if (pf) goto L_ffe99a;
L_ffe994: /* ffe994: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe997: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe99a: /* ffe99a: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe99d: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe9a0: mov edi, dword ptr [eax + ecx + 0xc] */
  edi = R32((uint32_t)(eax + ecx + 0xcu));
/* ffe9a4: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe9a7: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe9aa: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe9ac: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe9af: jp 0xffe9b7 */
  if (pf) goto L_ffe9b7;
L_ffe9b1: /* ffe9b1: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe9b4: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe9b7: /* ffe9b7: mov eax, dword ptr [ebx + 8] */
  eax = R32((uint32_t)(ebx + 0x8u));
/* ffe9ba: mov eax, dword ptr [edx + eax] */
  eax = R32((uint32_t)(edx + eax));
/* ffe9bd: mov edi, dword ptr [eax + ecx + 0x10] */
  edi = R32((uint32_t)(eax + ecx + 0x10u));
/* ffe9c1: fld dword ptr [edi + 0x48] */
  { double v = F32((uint32_t)(edi + 0x48u)); FPUSH(v); }
/* ffe9c4: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffe9c7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffe9c9: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffe9cc: jp 0xffe9d4 */
  if (pf) goto L_ffe9d4;
L_ffe9ce: /* ffe9ce: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffe9d1: mov dword ptr [edi + 0x48], eax */
  W32((uint32_t)(edi + 0x48u), eax);
L_ffe9d4: /* ffe9d4: mov eax, dword ptr [esp + 0xc] */
  eax = R32((uint32_t)(esp + 0xcu));
/* ffe9d8: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffe9db: add ecx, 0x20 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x20u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffe9de: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe9e1: mov dword ptr [esp + 0xc], eax */
  W32((uint32_t)(esp + 0xcu), eax);
/* ffe9e5: jl 0xffe8ed */
  if ((sf != of)) goto L_ffe8ed;
L_ffe9eb: /* ffe9eb: cmp eax, 0xb */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffe9ee: jge 0xffea19 */
  if ((sf == of)) goto L_ffea19;
L_ffe9f0: /* ffe9f0: mov edi, eax */
  edi = eax;
/* ffe9f2: shl edi, 2 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edi = r;
  }
L_ffe9f5: /* ffe9f5: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffe9f8: mov eax, dword ptr [edx + ecx] */
  eax = R32((uint32_t)(edx + ecx));
/* ffe9fb: mov ecx, dword ptr [eax + edi] */
  ecx = R32((uint32_t)(eax + edi));
/* ffe9fe: fld dword ptr [ecx + 0x48] */
  { double v = F32((uint32_t)(ecx + 0x48u)); FPUSH(v); }
/* ffea01: fcomp dword ptr [esi + 0x78] */
  fpu_com(ST0, F32((uint32_t)(esi + 0x78u)));
  FPOP();
/* ffea04: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffea06: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffea09: jp 0xffea11 */
  if (pf) goto L_ffea11;
L_ffea0b: /* ffea0b: mov eax, dword ptr [esi + 0x78] */
  eax = R32((uint32_t)(esi + 0x78u));
/* ffea0e: mov dword ptr [ecx + 0x48], eax */
  W32((uint32_t)(ecx + 0x48u), eax);
L_ffea11: /* ffea11: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* ffea14: cmp edi, 0x2c */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffea17: jl 0xffe9f5 */
  if ((sf != of)) goto L_ffe9f5;
L_ffea19: /* ffea19: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffea1c: cmp edx, 0x44 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffea1f: jl 0xffe8e0 */
  if ((sf != of)) goto L_ffe8e0;
L_ffea25: /* ffea25: xor esi, esi */
  esi = 0;
L_ffea27: /* ffea27: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffea2a: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* ffea2c: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffea2f: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea31: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea33: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffea35: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffea38: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffea39: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffea3a: push 0x100a360 */
  { uint32_t v = 0x100a360u; esp -= 4; W32(esp, v); }
/* ffea3f: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffea44u); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffea44: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffea47: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffea48: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffea4b: jl 0xffea27 */
  if ((sf != of)) goto L_ffea27;
L_ffea4d: /* ffea4d: xor esi, esi */
  esi = 0;
/* ffea4f: nop  */
L_ffea50: /* ffea50: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffea53: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* ffea56: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffea59: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea5b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea5d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffea5f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffea62: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffea63: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffea64: push 0x100a354 */
  { uint32_t v = 0x100a354u; esp -= 4; W32(esp, v); }
/* ffea69: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffea6eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffea6e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffea71: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffea72: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffea75: jl 0xffea50 */
  if ((sf != of)) goto L_ffea50;
L_ffea77: /* ffea77: xor esi, esi */
  esi = 0;
/* ffea79: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffea80: /* ffea80: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffea83: mov edx, dword ptr [ecx + 8] */
  edx = R32((uint32_t)(ecx + 0x8u));
/* ffea86: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffea89: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea8b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffea8d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffea8f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffea92: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffea93: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffea94: push 0x100a344 */
  { uint32_t v = 0x100a344u; esp -= 4; W32(esp, v); }
/* ffea99: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffea9eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffea9e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffeaa1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffeaa2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffeaa5: jl 0xffea80 */
  if ((sf != of)) goto L_ffea80;
L_ffeaa7: /* ffeaa7: xor esi, esi */
  esi = 0;
/* ffeaa9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeab0: /* ffeab0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeab3: mov edx, dword ptr [ecx + 0xc] */
  edx = R32((uint32_t)(ecx + 0xcu));
/* ffeab6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeab9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeabb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeabd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeabf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeac2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeac3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeac4: push 0x100a334 */
  { uint32_t v = 0x100a334u; esp -= 4; W32(esp, v); }
/* ffeac9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffeaceu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffeace: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffead1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffead2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffead5: jl 0xffeab0 */
  if ((sf != of)) goto L_ffeab0;
L_ffead7: /* ffead7: xor esi, esi */
  esi = 0;
/* ffead9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeae0: /* ffeae0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeae3: mov edx, dword ptr [ecx + 0x10] */
  edx = R32((uint32_t)(ecx + 0x10u));
/* ffeae6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeae9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeaeb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeaed: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeaef: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeaf2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeaf3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeaf4: push 0x100a324 */
  { uint32_t v = 0x100a324u; esp -= 4; W32(esp, v); }
/* ffeaf9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffeafeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffeafe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffeb01: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffeb02: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffeb05: jl 0xffeae0 */
  if ((sf != of)) goto L_ffeae0;
L_ffeb07: /* ffeb07: xor esi, esi */
  esi = 0;
/* ffeb09: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeb10: /* ffeb10: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeb13: mov edx, dword ptr [ecx + 0x14] */
  edx = R32((uint32_t)(ecx + 0x14u));
/* ffeb16: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeb19: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb1b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb1d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeb1f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeb22: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeb23: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeb24: push 0x100a314 */
  { uint32_t v = 0x100a314u; esp -= 4; W32(esp, v); }
/* ffeb29: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffeb2eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffeb2e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffeb31: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffeb32: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffeb35: jl 0xffeb10 */
  if ((sf != of)) goto L_ffeb10;
L_ffeb37: /* ffeb37: xor esi, esi */
  esi = 0;
/* ffeb39: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeb40: /* ffeb40: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeb43: mov edx, dword ptr [ecx + 0x18] */
  edx = R32((uint32_t)(ecx + 0x18u));
/* ffeb46: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeb49: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb4b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb4d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeb4f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeb52: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeb53: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeb54: push 0x100a304 */
  { uint32_t v = 0x100a304u; esp -= 4; W32(esp, v); }
/* ffeb59: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffeb5eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffeb5e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffeb61: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffeb62: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffeb65: jl 0xffeb40 */
  if ((sf != of)) goto L_ffeb40;
L_ffeb67: /* ffeb67: xor esi, esi */
  esi = 0;
/* ffeb69: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeb70: /* ffeb70: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeb73: mov edx, dword ptr [ecx + 0x1c] */
  edx = R32((uint32_t)(ecx + 0x1cu));
/* ffeb76: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeb79: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb7b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeb7d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeb7f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeb82: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeb83: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeb84: push 0x100a2f4 */
  { uint32_t v = 0x100a2f4u; esp -= 4; W32(esp, v); }
/* ffeb89: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffeb8eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffeb8e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffeb91: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffeb92: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffeb95: jl 0xffeb70 */
  if ((sf != of)) goto L_ffeb70;
L_ffeb97: /* ffeb97: xor esi, esi */
  esi = 0;
/* ffeb99: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffeba0: /* ffeba0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffeba3: mov edx, dword ptr [ecx + 0x20] */
  edx = R32((uint32_t)(ecx + 0x20u));
/* ffeba6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffeba9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffebab: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffebad: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffebaf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffebb2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffebb3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffebb4: push 0x100a2e8 */
  { uint32_t v = 0x100a2e8u; esp -= 4; W32(esp, v); }
/* ffebb9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffebbeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffebbe: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffebc1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffebc2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffebc5: jl 0xffeba0 */
  if ((sf != of)) goto L_ffeba0;
L_ffebc7: /* ffebc7: xor esi, esi */
  esi = 0;
/* ffebc9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffebd0: /* ffebd0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffebd3: mov edx, dword ptr [ecx + 0x24] */
  edx = R32((uint32_t)(ecx + 0x24u));
/* ffebd6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffebd9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffebdb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffebdd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffebdf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffebe2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffebe3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffebe4: push 0x100a2d8 */
  { uint32_t v = 0x100a2d8u; esp -= 4; W32(esp, v); }
/* ffebe9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffebeeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffebee: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffebf1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffebf2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffebf5: jl 0xffebd0 */
  if ((sf != of)) goto L_ffebd0;
L_ffebf7: /* ffebf7: xor esi, esi */
  esi = 0;
/* ffebf9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffec00: /* ffec00: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffec03: mov edx, dword ptr [ecx + 0x28] */
  edx = R32((uint32_t)(ecx + 0x28u));
/* ffec06: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffec09: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec0b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec0d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffec0f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffec12: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffec13: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffec14: push 0x100a2cc */
  { uint32_t v = 0x100a2ccu; esp -= 4; W32(esp, v); }
/* ffec19: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffec1eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffec1e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffec21: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffec22: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffec25: jl 0xffec00 */
  if ((sf != of)) goto L_ffec00;
L_ffec27: /* ffec27: xor esi, esi */
  esi = 0;
/* ffec29: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffec30: /* ffec30: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffec33: mov edx, dword ptr [ecx + 0x2c] */
  edx = R32((uint32_t)(ecx + 0x2cu));
/* ffec36: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffec39: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec3b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec3d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffec3f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffec42: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffec43: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffec44: push 0x100a2bc */
  { uint32_t v = 0x100a2bcu; esp -= 4; W32(esp, v); }
/* ffec49: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffec4eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffec4e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffec51: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffec52: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffec55: jl 0xffec30 */
  if ((sf != of)) goto L_ffec30;
L_ffec57: /* ffec57: xor esi, esi */
  esi = 0;
/* ffec59: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffec60: /* ffec60: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffec63: mov edx, dword ptr [ecx + 0x30] */
  edx = R32((uint32_t)(ecx + 0x30u));
/* ffec66: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffec69: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec6b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec6d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffec6f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffec72: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffec73: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffec74: push 0x100a2b0 */
  { uint32_t v = 0x100a2b0u; esp -= 4; W32(esp, v); }
/* ffec79: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffec7eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffec7e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffec81: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffec82: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffec85: jl 0xffec60 */
  if ((sf != of)) goto L_ffec60;
L_ffec87: /* ffec87: xor esi, esi */
  esi = 0;
/* ffec89: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffec90: /* ffec90: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffec93: mov edx, dword ptr [ecx + 0x34] */
  edx = R32((uint32_t)(ecx + 0x34u));
/* ffec96: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffec99: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec9b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffec9d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffec9f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffeca2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeca3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeca4: push 0x100a2a0 */
  { uint32_t v = 0x100a2a0u; esp -= 4; W32(esp, v); }
/* ffeca9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffecaeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffecae: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffecb1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffecb2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffecb5: jl 0xffec90 */
  if ((sf != of)) goto L_ffec90;
L_ffecb7: /* ffecb7: xor esi, esi */
  esi = 0;
/* ffecb9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffecc0: /* ffecc0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffecc3: mov edx, dword ptr [ecx + 0x38] */
  edx = R32((uint32_t)(ecx + 0x38u));
/* ffecc6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffecc9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeccb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffeccd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffeccf: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffecd2: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffecd3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffecd4: push 0x100a294 */
  { uint32_t v = 0x100a294u; esp -= 4; W32(esp, v); }
/* ffecd9: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffecdeu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffecde: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffece1: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffece2: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffece5: jl 0xffecc0 */
  if ((sf != of)) goto L_ffecc0;
L_ffece7: /* ffece7: xor esi, esi */
  esi = 0;
/* ffece9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffecf0: /* ffecf0: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffecf3: mov edx, dword ptr [ecx + 0x3c] */
  edx = R32((uint32_t)(ecx + 0x3cu));
/* ffecf6: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffecf9: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffecfb: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffecfd: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffecff: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffed02: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffed03: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffed04: push 0x100a284 */
  { uint32_t v = 0x100a284u; esp -= 4; W32(esp, v); }
/* ffed09: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffed0eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffed0e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffed11: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffed12: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffed15: jl 0xffecf0 */
  if ((sf != of)) goto L_ffecf0;
L_ffed17: /* ffed17: xor esi, esi */
  esi = 0;
/* ffed19: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_ffed20: /* ffed20: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* ffed23: mov edx, dword ptr [ecx + 0x40] */
  edx = R32((uint32_t)(ecx + 0x40u));
/* ffed26: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* ffed29: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffed2b: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffed2d: push 0x38 */
  { uint32_t v = 0x38u; esp -= 4; W32(esp, v); }
/* ffed2f: add eax, 8 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffed32: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffed33: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffed34: push 0x100a274 */
  { uint32_t v = 0x100a274u; esp -= 4; W32(esp, v); }
/* ffed39: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffed3eu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffed3e: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffed41: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffed42: cmp esi, 0xb */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0xbu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffed45: jl 0xffed20 */
  if ((sf != of)) goto L_ffed20;
L_ffed47: /* ffed47: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* ffed4a: xor esi, esi */
  esi = 0;
/* ffed4c: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffed4e: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* ffed52: jle 0xffee3e */
  if ((zf || sf != of)) goto L_ffee3e;
L_ffed58: /* ffed58: fild dword ptr [ebp + 0x18] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x18u)); FPUSH(v); }
/* ffed5b: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* ffed5f: fild dword ptr [ebp + 0x14] */
  { double v = (double)(int32_t)R32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* ffed62: fstp qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0); FPOP();
/* ffed66: fld qword ptr [esp + 0x48] */
  { double v = F64((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* ffed6a: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* ffed6c: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
L_ffed70: /* ffed70: fild dword ptr [esp + 0xc] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* ffed74: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* ffed77: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* ffed7b: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* ffed7f: fadd qword ptr [0x100a128] */
  ST0 = ST0 + (F64((uint32_t)(0x100a128u)));
/* ffed85: fmul qword ptr [esp + 0x48] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x48u)));
/* ffed89: fdiv qword ptr [esp + 0x38] */
  ST0 = ST0 / (F64((uint32_t)(esp + 0x38u)));
/* ffed8d: fstp qword ptr [esp] */
  WF64((uint32_t)(esp), ST0); FPOP();
/* ffed90: call 0x1009172 */
  esp -= 4; W32(esp, 0xffed95u); SPILL(); f_1009172(); if (g_unwind) return; RELOAD();
/* ffed95: fmul qword ptr [0x100a658] */
  ST0 = ST0 * (F64((uint32_t)(0x100a658u)));
/* ffed9b: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffed9e: fsub qword ptr [0x100a650] */
  ST0 = ST0 - (F64((uint32_t)(0x100a650u)));
/* ffeda4: fadd st(0), st(0) */
  STI(0) = STI(0) + ST0;
/* ffeda6: fstp dword ptr [esp + 0x10] */
  WF32((uint32_t)(esp + 0x10u), ST0); FPOP();
/* ffedaa: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffedae: fcomp dword ptr [0x100a0c4] */
  fpu_com(ST0, F32((uint32_t)(0x100a0c4u)));
  FPOP();
/* ffedb4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffedb6: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* ffedb9: jp 0xffedc5 */
  if (pf) goto L_ffedc5;
L_ffedbb: /* ffedbb: mov dword ptr [esp + 0x10], 0 */
  W32((uint32_t)(esp + 0x10u), 0x0u);
/* ffedc3: jmp 0xffedde */
  goto L_ffedde;
L_ffedc5: /* ffedc5: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffedc9: fcomp dword ptr [0x100a270] */
  fpu_com(ST0, F32((uint32_t)(0x100a270u)));
  FPOP();
/* ffedcf: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffedd1: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffedd4: jne 0xffedde */
  if (!zf) goto L_ffedde;
L_ffedd6: /* ffedd6: mov dword ptr [esp + 0x10], 0x41800000 */
  W32((uint32_t)(esp + 0x10u), 0x41800000u);
L_ffedde: /* ffedde: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffede2: call 0x1009188 */
  esp -= 4; W32(esp, 0xffede7u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ffede7: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* ffedea: mov dword ptr [esp + 0x48], eax */
  W32((uint32_t)(esp + 0x48u), eax);
/* ffedee: fild dword ptr [esp + 0x48] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* ffedf2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* ffedf3: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffedf5: mov dword ptr [esp + 0xc], esi */
  W32((uint32_t)(esp + 0xcu), esi);
/* ffedf9: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* ffedfd: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* ffee01: fsub dword ptr [esp + 0x48] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x48u)));
/* ffee05: fstp dword ptr [esp + 0x3c] */
  WF32((uint32_t)(esp + 0x3cu), ST0); FPOP();
/* ffee09: fld dword ptr [ecx + eax*4 + 0x67c] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x67cu)); FPUSH(v); }
/* ffee10: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* ffee14: fsubr qword ptr [0x100a0d0] */
  ST0 = (F64((uint32_t)(0x100a0d0u))) - ST0;
/* ffee1a: fmulp st(1) */
  STI(1) = STI(1) * ST0;
  FPOP();
/* ffee1c: fld dword ptr [esp + 0x3c] */
  { double v = F32((uint32_t)(esp + 0x3cu)); FPUSH(v); }
/* ffee20: fmul dword ptr [ecx + eax*4 + 0x680] */
  ST0 = ST0 * (F32((uint32_t)(ecx + eax*4 + 0x680u)));
/* ffee27: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* ffee2a: faddp st(1) */
  STI(1) = STI(1) + ST0;
  FPOP();
/* ffee2c: fstp dword ptr [esp + 0x48] */
  WF32((uint32_t)(esp + 0x48u), ST0); FPOP();
/* ffee30: fld dword ptr [esp + 0x48] */
  { double v = F32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* ffee34: fstp dword ptr [ecx + esi*4 - 4] */
  WF32((uint32_t)(ecx + esi*4 + 0xfffffffcu), ST0); FPOP();
/* ffee38: jl 0xffed70 */
  if ((sf != of)) goto L_ffed70;
L_ffee3e: /* ffee3e: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffee40: mov esi, 1 */
  esi = 0x1u;
/* ffee45: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffee46: mov dword ptr [0x100b010], esi */
  W32((uint32_t)(0x100b010u), esi);
/* ffee4c: mov edx, dword ptr [ebx + 0x10] */
  edx = R32((uint32_t)(ebx + 0x10u));
/* ffee4f: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffee50: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffee51: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffee53: push 0x100a264 */
  { uint32_t v = 0x100a264u; esp -= 4; W32(esp, v); }
/* ffee58: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffee5du); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffee5d: mov eax, dword ptr [ebx + 0xc] */
  eax = R32((uint32_t)(ebx + 0xcu));
/* ffee60: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffee62: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffee63: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffee64: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffee65: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* ffee67: push 0x100a258 */
  { uint32_t v = 0x100a258u; esp -= 4; W32(esp, v); }
/* ffee6c: call 0x1008e80 */
  esp -= 4; W32(esp, 0xffee71u); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* ffee71: add esp, 0x30 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x30u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffee74: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffee75: mov dword ptr [0x100b010], esi */
  W32((uint32_t)(0x100b010u), esi);
/* ffee7b: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffee7c: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ffee7d: mov esp, ebp */
  esp = ebp;
/* ffee7f: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ffee80: ret  */
  esp += 4; SPILL(); return;
}

void f_ffee90(void) {
  LOAD_REGS();
L_ffee90: /* ffee90: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* ffee91: mov edi, dword ptr [esp + 8] */
  edi = R32((uint32_t)(esp + 0x8u));
/* ffee95: test edi, edi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffee97: je 0xffef2f */
  if (zf) goto L_ffef2f;
L_ffee9d: /* ffee9d: mov eax, dword ptr [edi + 0x14] */
  eax = R32((uint32_t)(edi + 0x14u));
/* ffeea0: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffeea2: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ffeea3: mov ebp, dword ptr [0x100a040] */
  ebp = R32((uint32_t)(0x100a040u));
/* ffeea9: je 0xffeeb1 */
  if (zf) goto L_ffeeb1;
L_ffeeab: /* ffeeab: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeeac: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xffeeaeu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffeeae: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ffeeb1: /* ffeeb1: mov eax, dword ptr [edi + 0x18] */
  eax = R32((uint32_t)(edi + 0x18u));
/* ffeeb4: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffeeb6: je 0xffeebe */
  if (zf) goto L_ffeebe;
L_ffeeb8: /* ffeeb8: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeeb9: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xffeebbu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffeebb: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ffeebe: /* ffeebe: mov eax, dword ptr [edi + 0x1c] */
  eax = R32((uint32_t)(edi + 0x1cu));
/* ffeec1: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffeec3: je 0xffeecb */
  if (zf) goto L_ffeecb;
L_ffeec5: /* ffeec5: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffeec6: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xffeec8u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffeec8: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_ffeecb: /* ffeecb: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* ffeece: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* ffeed0: je 0xffef16 */
  if (zf) goto L_ffef16;
L_ffeed2: /* ffeed2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ffeed3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffeed4: xor ebx, ebx */
  ebx = 0;
L_ffeed6: /* ffeed6: xor esi, esi */
  esi = 0;
/* ffeed8: jmp 0xffeee0 */
  goto L_ffeee0;
L_ffeee0: /* ffeee0: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* ffeee3: mov ecx, dword ptr [eax + ebx] */
  ecx = R32((uint32_t)(eax + ebx));
/* ffeee6: mov edx, dword ptr [ecx + esi] */
  edx = R32((uint32_t)(ecx + esi));
/* ffeee9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffeeea: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xffeeecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffeeec: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffeeef: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffeef2: cmp esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffeef5: jl 0xffeee0 */
  if ((sf != of)) goto L_ffeee0;
L_ffeef7: /* ffeef7: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* ffeefa: mov ecx, dword ptr [eax + ebx] */
  ecx = R32((uint32_t)(eax + ebx));
/* ffeefd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffeefe: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xffef00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffef00: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ffef03: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffef06: cmp ebx, 0x44 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffef09: jl 0xffeed6 */
  if ((sf != of)) goto L_ffeed6;
L_ffef0b: /* ffef0b: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* ffef0e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffef0f: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xffef11u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffef11: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffef14: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffef15: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
L_ffef16: /* ffef16: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* ffef19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffef1a: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xffef1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffef1c: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* ffef1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffef20: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xffef22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffef22: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffef25: mov ecx, 0xd */
  ecx = 0xdu;
/* ffef2a: xor eax, eax */
  eax = 0;
/* ffef2c: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ffef2e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_ffef2f: /* ffef2f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffef30: ret  */
  esp += 4; SPILL(); return;
}

void f_ffeeda(void) {
  LOAD_REGS();
  goto L_ffeeda;
L_ffeed6: /* ffeed6: xor esi, esi */
  esi = 0;
/* ffeed8: jmp 0xffeee0 */
  goto L_ffeee0;
L_ffeeda: /* ffeeda: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_ffeee0: /* ffeee0: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* ffeee3: mov ecx, dword ptr [eax + ebx] */
  ecx = R32((uint32_t)(eax + ebx));
/* ffeee6: mov edx, dword ptr [ecx + esi] */
  edx = R32((uint32_t)(ecx + esi));
/* ffeee9: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffeeea: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xffeeecu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffeeec: add esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* ffeeef: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffeef2: cmp esi, 0x2c */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffeef5: jl 0xffeee0 */
  if ((sf != of)) goto L_ffeee0;
L_ffeef7: /* ffeef7: mov eax, dword ptr [edi + 8] */
  eax = R32((uint32_t)(edi + 0x8u));
/* ffeefa: mov ecx, dword ptr [eax + ebx] */
  ecx = R32((uint32_t)(eax + ebx));
/* ffeefd: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffeefe: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xffef00u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffef00: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* ffef03: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffef06: cmp ebx, 0x44 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x44u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffef09: jl 0xffeed6 */
  if ((sf != of)) goto L_ffeed6;
L_ffef0b: /* ffef0b: mov edx, dword ptr [edi + 8] */
  edx = R32((uint32_t)(edi + 0x8u));
/* ffef0e: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* ffef0f: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xffef11u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffef11: add esp, 4 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffef14: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* ffef15: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* ffef16: mov eax, dword ptr [edi + 0x10] */
  eax = R32((uint32_t)(edi + 0x10u));
/* ffef19: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* ffef1a: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xffef1cu); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffef1c: mov ecx, dword ptr [edi + 0xc] */
  ecx = R32((uint32_t)(edi + 0xcu));
/* ffef1f: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffef20: call ebp */
  { uint32_t t = ebp; esp -= 4; W32(esp, 0xffef22u); SPILL(); call_ind(t); if (g_unwind) return; RELOAD(); }
/* ffef22: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* ffef25: mov ecx, 0xd */
  ecx = 0xdu;
/* ffef2a: xor eax, eax */
  eax = 0;
/* ffef2c: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* ffef2e: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* ffef2f: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* ffef30: ret  */
  esp += 4; SPILL(); return;
}

void f_ffef40(void) {
  LOAD_REGS();
L_ffef40: /* ffef40: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* ffef41: fld dword ptr [esp + 0xc] */
  { double v = F32((uint32_t)(esp + 0xcu)); FPUSH(v); }
/* ffef45: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* ffef46: fadd dword ptr [esp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x20u)));
/* ffef4a: mov ebx, dword ptr [esp + 0x1c] */
  ebx = R32((uint32_t)(esp + 0x1cu));
/* ffef4e: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* ffef4f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* ffef50: fmul dword ptr [0x100a668] */
  ST0 = ST0 * (F32((uint32_t)(0x100a668u)));
/* ffef56: call 0x1009188 */
  esp -= 4; W32(esp, 0xffef5bu); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ffef5b: xor ecx, ecx */
  ecx = 0;
/* ffef5d: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffef5f: setle cl */
  ecx = (ecx & 0xffffff00u) | ((uint32_t)(((zf || sf != of)) ? 1 : 0) & 0xffu);
/* ffef62: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* ffef63: and eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* ffef65: cmp eax, 0xa */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xau);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffef68: jl 0xffef6f */
  if ((sf != of)) goto L_ffef6f;
L_ffef6a: /* ffef6a: mov eax, 0xa */
  eax = 0xau;
L_ffef6f: /* ffef6f: mov edx, dword ptr [esp + 0x14] */
  edx = R32((uint32_t)(esp + 0x14u));
/* ffef73: mov esi, dword ptr [edx + eax*4] */
  esi = R32((uint32_t)(edx + eax*4));
/* ffef76: fld dword ptr [esi + 4] */
  { double v = F32((uint32_t)(esi + 0x4u)); FPUSH(v); }
/* ffef79: mov dword ptr [esp + 0x28], esi */
  W32((uint32_t)(esp + 0x28u), esi);
/* ffef7d: call 0x1009188 */
  esp -= 4; W32(esp, 0xffef82u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ffef82: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* ffef84: fsub dword ptr [0x100a270] */
  ST0 = ST0 - (F32((uint32_t)(0x100a270u)));
/* ffef8a: mov ebp, eax */
  ebp = eax;
/* ffef8c: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* ffef90: mov eax, ebx */
  eax = ebx;
/* ffef92: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* ffef94: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* ffef98: mov dword ptr [esp + 0xc], ebp */
  W32((uint32_t)(esp + 0xcu), ebp);
/* ffef9c: fmul dword ptr [esp + 0x24] */
  ST0 = ST0 * (F32((uint32_t)(esp + 0x24u)));
/* ffefa0: fild dword ptr [esp + 0x1c] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x1cu)); FPUSH(v); }
/* ffefa4: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* ffefa8: fadd dword ptr [esp + 0x24] */
  ST0 = ST0 + (F32((uint32_t)(esp + 0x24u)));
/* ffefac: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* ffefb0: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* ffefb4: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* ffefb8: fsub dword ptr [esp + 0x24] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x24u)));
/* ffefbc: call 0x1009188 */
  esp -= 4; W32(esp, 0xffefc1u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ffefc1: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* ffefc5: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* ffefc7: mov esi, eax */
  esi = eax;
/* ffefc9: call 0x1009188 */
  esp -= 4; W32(esp, 0xffefceu); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ffefce: mov edx, eax */
  edx = eax;
/* ffefd0: mov eax, ebp */
  eax = ebp;
/* ffefd2: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffefd4: cmp eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffefd7: jl 0xfff0c0 */
  if ((sf != of)) goto L_fff0c0;
L_ffefdd: /* ffefdd: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* ffefe1: lea ecx, [edx + 3] */
  ecx = (uint32_t)(edx + 0x3u);
/* ffefe4: mov dword ptr [esp + 0x14], ecx */
  W32((uint32_t)(esp + 0x14u), ecx);
/* ffefe8: lea ecx, [eax + edx*4 + 0x10] */
  ecx = (uint32_t)(eax + edx*4 + 0x10u);
L_ffefec: /* ffefec: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* ffefee: jle 0xfff010 */
  if ((zf || sf != of)) goto L_fff010;
L_ffeff0: /* ffeff0: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* ffeff4: fadd dword ptr [ecx - 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff8u)));
/* ffeff7: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* ffeffb: fld dword ptr [edi + esi*4] */
  { double v = F32((uint32_t)(edi + esi*4)); FPUSH(v); }
/* ffeffe: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* fff002: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fff004: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* fff007: jp 0xfff010 */
  if (pf) goto L_fff010;
L_fff009: /* fff009: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* fff00d: mov dword ptr [edi + esi*4], eax */
  W32((uint32_t)(edi + esi*4), eax);
L_fff010: /* fff010: mov ebp, dword ptr [esp + 0x20] */
  ebp = R32((uint32_t)(esp + 0x20u));
/* fff014: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* fff016: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff018: jge 0xfff0fc */
  if ((sf == of)) goto L_fff0fc;
L_fff01e: /* fff01e: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* fff020: jle 0xfff042 */
  if ((zf || sf != of)) goto L_fff042;
L_fff022: /* fff022: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* fff026: fadd dword ptr [ecx - 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffffcu)));
/* fff029: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* fff02d: fld dword ptr [edi + esi*4] */
  { double v = F32((uint32_t)(edi + esi*4)); FPUSH(v); }
/* fff030: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* fff034: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fff036: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* fff039: jp 0xfff042 */
  if (pf) goto L_fff042;
L_fff03b: /* fff03b: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* fff03f: mov dword ptr [edi + esi*4], eax */
  W32((uint32_t)(edi + esi*4), eax);
L_fff042: /* fff042: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* fff044: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff046: jge 0xfff0fc */
  if ((sf == of)) goto L_fff0fc;
L_fff04c: /* fff04c: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* fff04e: jle 0xfff06f */
  if ((zf || sf != of)) goto L_fff06f;
L_fff050: /* fff050: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* fff054: fadd dword ptr [ecx] */
  ST0 = ST0 + (F32((uint32_t)(ecx)));
/* fff056: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* fff05a: fld dword ptr [edi + esi*4] */
  { double v = F32((uint32_t)(edi + esi*4)); FPUSH(v); }
/* fff05d: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* fff061: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fff063: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* fff066: jp 0xfff06f */
  if (pf) goto L_fff06f;
L_fff068: /* fff068: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* fff06c: mov dword ptr [edi + esi*4], eax */
  W32((uint32_t)(edi + esi*4), eax);
L_fff06f: /* fff06f: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* fff071: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff073: jge 0xfff0fc */
  if ((sf == of)) goto L_fff0fc;
L_fff079: /* fff079: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* fff07b: jle 0xfff09d */
  if ((zf || sf != of)) goto L_fff09d;
L_fff07d: /* fff07d: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* fff081: fadd dword ptr [ecx + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x4u)));
/* fff084: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* fff088: fld dword ptr [edi + esi*4] */
  { double v = F32((uint32_t)(edi + esi*4)); FPUSH(v); }
/* fff08b: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* fff08f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fff091: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* fff094: jp 0xfff09d */
  if (pf) goto L_fff09d;
L_fff096: /* fff096: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* fff09a: mov dword ptr [edi + esi*4], eax */
  W32((uint32_t)(edi + esi*4), eax);
L_fff09d: /* fff09d: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* fff09f: cmp esi, ebp */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff0a1: jge 0xfff0fc */
  if ((sf == of)) goto L_fff0fc;
L_fff0a3: /* fff0a3: mov eax, dword ptr [esp + 0x14] */
  eax = R32((uint32_t)(esp + 0x14u));
/* fff0a7: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* fff0ab: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fff0ae: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* fff0b1: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fff0b4: cmp eax, ebp */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff0b6: mov dword ptr [esp + 0x14], eax */
  W32((uint32_t)(esp + 0x14u), eax);
/* fff0ba: jl 0xffefec */
  if ((sf != of)) goto L_ffefec;
L_fff0c0: /* fff0c0: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff0c2: jge 0xfff0fc */
  if ((sf == of)) goto L_fff0fc;
L_fff0c4: /* fff0c4: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* fff0c6: jle 0xfff0ed */
  if ((zf || sf != of)) goto L_fff0ed;
L_fff0c8: /* fff0c8: fld dword ptr [esp + 0x18] */
  { double v = F32((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* fff0cc: mov ecx, dword ptr [esp + 0x28] */
  ecx = R32((uint32_t)(esp + 0x28u));
/* fff0d0: fadd dword ptr [ecx + edx*4 + 8] */
  ST0 = ST0 + (F32((uint32_t)(ecx + edx*4 + 0x8u)));
/* fff0d4: fstp dword ptr [esp + 0x24] */
  WF32((uint32_t)(esp + 0x24u), ST0); FPOP();
/* fff0d8: fld dword ptr [edi + esi*4] */
  { double v = F32((uint32_t)(edi + esi*4)); FPUSH(v); }
/* fff0db: fcomp dword ptr [esp + 0x24] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x24u)));
  FPOP();
/* fff0df: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fff0e1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* fff0e4: jp 0xfff0ed */
  if (pf) goto L_fff0ed;
L_fff0e6: /* fff0e6: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* fff0ea: mov dword ptr [edi + esi*4], eax */
  W32((uint32_t)(edi + esi*4), eax);
L_fff0ed: /* fff0ed: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* fff0f1: add esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  esi = r;
  }
/* fff0f3: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff0f5: jge 0xfff0fc */
  if ((sf == of)) goto L_fff0fc;
L_fff0f7: /* fff0f7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* fff0f8: cmp edx, ebp */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebp);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff0fa: jl 0xfff0c4 */
  if ((sf != of)) goto L_fff0c4;
L_fff0fc: /* fff0fc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fff0fd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* fff0fe: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* fff0ff: pop ecx */
  { uint32_t v = R32(esp); esp += 4;
  ecx = v;
  }
/* fff100: ret  */
  esp += 4; SPILL(); return;
}

void f_fff110(void) {
  LOAD_REGS();
L_fff110: /* fff110: sub esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* fff113: mov eax, dword ptr [ebx + 4] */
  eax = R32((uint32_t)(ebx + 0x4u));
/* fff116: fld dword ptr [eax + 0x760] */
  { double v = F32((uint32_t)(eax + 0x760u)); FPUSH(v); }
/* fff11c: mov ecx, dword ptr [ebx] */
  ecx = R32((uint32_t)(ebx));
/* fff11e: fsub dword ptr [esp + 0x1c] */
  ST0 = ST0 - (F32((uint32_t)(esp + 0x1cu)));
/* fff122: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fff123: xor esi, esi */
  esi = 0;
/* fff125: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* fff127: fstp dword ptr [esp + 8] */
  WF32((uint32_t)(esp + 0x8u), ST0); FPOP();
/* fff12b: mov dword ptr [esp + 4], ecx */
  W32((uint32_t)(esp + 0x4u), ecx);
/* fff12f: jle 0xfff1fd */
  if ((zf || sf != of)) goto L_fff1fd;
L_fff135: /* fff135: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* fff136: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fff137: jmp 0xfff140 */
  goto L_fff140;
L_fff140: /* fff140: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* fff144: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* fff147: mov ebp, dword ptr [ebx + 0x18] */
  ebp = R32((uint32_t)(ebx + 0x18u));
/* fff14a: mov edx, dword ptr [ebp + esi*4] */
  edx = R32((uint32_t)(ebp + esi*4));
/* fff14e: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* fff152: lea eax, [esi + 1] */
  eax = (uint32_t)(esi + 0x1u);
/* fff155: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff157: jge 0xfff191 */
  if ((sf == of)) goto L_fff191;
L_fff159: /* fff159: mov edi, eax */
  edi = eax;
/* fff15b: lea ecx, [ebp + esi*4 + 4] */
  ecx = (uint32_t)(ebp + esi*4 + 0x4u);
/* fff15f: nop  */
L_fff160: /* fff160: cmp dword ptr [ecx], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fff162: jne 0xfff18d */
  if (!zf) goto L_fff18d;
L_fff164: /* fff164: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* fff168: fld dword ptr [eax + esi*4 + 4] */
  { double v = F32((uint32_t)(eax + esi*4 + 0x4u)); FPUSH(v); }
/* fff16c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* fff16d: fcomp dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
  FPOP();
/* fff171: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fff174: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* fff175: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fff177: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* fff17a: jne 0xfff187 */
  if (!zf) goto L_fff187;
L_fff17c: /* fff17c: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* fff180: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* fff183: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
L_fff187: /* fff187: cmp edi, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff18b: jl 0xfff160 */
  if ((sf != of)) goto L_fff160;
L_fff18d: /* fff18d: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
L_fff191: /* fff191: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* fff195: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* fff199: fadd dword ptr [0x100a66c] */
  ST0 = ST0 + (F32((uint32_t)(0x100a66cu)));
/* fff19f: fcomp dword ptr [eax + esi*4] */
  fpu_com(ST0, F32((uint32_t)(eax + esi*4)));
  FPOP();
/* fff1a2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fff1a4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* fff1a7: jne 0xfff1f2 */
  if (!zf) goto L_fff1f2;
L_fff1a9: /* fff1a9: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* fff1ac: sar edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
  }
/* fff1ae: cmp edx, 0x11 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x11u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff1b1: jl 0xfff1ba */
  if ((sf != of)) goto L_fff1ba;
L_fff1b3: /* fff1b3: mov edx, 0x10 */
  edx = 0x10u;
/* fff1b8: jmp 0xfff1c0 */
  goto L_fff1c0;
L_fff1ba: /* fff1ba: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* fff1bc: jge 0xfff1c0 */
  if ((sf == of)) goto L_fff1c0;
L_fff1be: /* fff1be: xor edx, edx */
  edx = 0;
L_fff1c0: /* fff1c0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* fff1c4: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* fff1c7: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* fff1cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* fff1cc: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* fff1cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fff1d0: mov eax, dword ptr [ebp + esi*4] */
  eax = R32((uint32_t)(ebp + esi*4));
/* fff1d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* fff1d5: sub eax, dword ptr [ebx + 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* fff1d8: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* fff1dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fff1dd: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* fff1e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* fff1e2: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* fff1e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* fff1e6: call 0xffef40 */
  esp -= 4; W32(esp, 0xfff1ebu); SPILL(); f_ffef40(); if (g_unwind) return; RELOAD();
/* fff1eb: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* fff1ef: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_fff1f2: /* fff1f2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* fff1f3: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff1f5: jl 0xfff140 */
  if ((sf != of)) goto L_fff140;
L_fff1fb: /* fff1fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fff1fc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
L_fff1fd: /* fff1fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fff1fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fff201: ret  */
  esp += 4; SPILL(); return;
}

void f_fff139(void) {
  LOAD_REGS();
L_fff139: /* fff139: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_fff140: /* fff140: mov edx, dword ptr [esp + 0x1c] */
  edx = R32((uint32_t)(esp + 0x1cu));
/* fff144: mov eax, dword ptr [edx + esi*4] */
  eax = R32((uint32_t)(edx + esi*4));
/* fff147: mov ebp, dword ptr [ebx + 0x18] */
  ebp = R32((uint32_t)(ebx + 0x18u));
/* fff14a: mov edx, dword ptr [ebp + esi*4] */
  edx = R32((uint32_t)(ebp + esi*4));
/* fff14e: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
/* fff152: lea eax, [esi + 1] */
  eax = (uint32_t)(esi + 0x1u);
/* fff155: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff157: jge 0xfff191 */
  if ((sf == of)) goto L_fff191;
L_fff159: /* fff159: mov edi, eax */
  edi = eax;
/* fff15b: lea ecx, [ebp + esi*4 + 4] */
  ecx = (uint32_t)(ebp + esi*4 + 0x4u);
/* fff15f: nop  */
L_fff160: /* fff160: cmp dword ptr [ecx], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fff162: jne 0xfff18d */
  if (!zf) goto L_fff18d;
L_fff164: /* fff164: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* fff168: fld dword ptr [eax + esi*4 + 4] */
  { double v = F32((uint32_t)(eax + esi*4 + 0x4u)); FPUSH(v); }
/* fff16c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* fff16d: fcomp dword ptr [esp + 0x28] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x28u)));
  FPOP();
/* fff171: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fff174: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* fff175: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fff177: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* fff17a: jne 0xfff187 */
  if (!zf) goto L_fff187;
L_fff17c: /* fff17c: mov eax, dword ptr [esp + 0x1c] */
  eax = R32((uint32_t)(esp + 0x1cu));
/* fff180: mov eax, dword ptr [eax + esi*4] */
  eax = R32((uint32_t)(eax + esi*4));
/* fff183: mov dword ptr [esp + 0x28], eax */
  W32((uint32_t)(esp + 0x28u), eax);
L_fff187: /* fff187: cmp edi, dword ptr [esp + 0xc] */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(R32((uint32_t)(esp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff18b: jl 0xfff160 */
  if ((sf != of)) goto L_fff160;
L_fff18d: /* fff18d: mov ecx, dword ptr [esp + 0xc] */
  ecx = R32((uint32_t)(esp + 0xcu));
L_fff191: /* fff191: fld dword ptr [esp + 0x28] */
  { double v = F32((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* fff195: mov eax, dword ptr [esp + 0x20] */
  eax = R32((uint32_t)(esp + 0x20u));
/* fff199: fadd dword ptr [0x100a66c] */
  ST0 = ST0 + (F32((uint32_t)(0x100a66cu)));
/* fff19f: fcomp dword ptr [eax + esi*4] */
  fpu_com(ST0, F32((uint32_t)(eax + esi*4)));
  FPOP();
/* fff1a2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fff1a4: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 7) & 1;
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  cf = 0;
  of = 0;
  }
/* fff1a7: jne 0xfff1f2 */
  if (!zf) goto L_fff1f2;
L_fff1a9: /* fff1a9: mov ecx, dword ptr [ebx + 0x24] */
  ecx = R32((uint32_t)(ebx + 0x24u));
/* fff1ac: sar edx, cl */
  { uint32_t a = (uint32_t)(edx); uint32_t c = (ecx & 31);
  if (c) {
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edx = r;
  }
  }
/* fff1ae: cmp edx, 0x11 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x11u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff1b1: jl 0xfff1ba */
  if ((sf != of)) goto L_fff1ba;
L_fff1b3: /* fff1b3: mov edx, 0x10 */
  edx = 0x10u;
/* fff1b8: jmp 0xfff1c0 */
  goto L_fff1c0;
L_fff1ba: /* fff1ba: test edx, edx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a & b);
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* fff1bc: jge 0xfff1c0 */
  if ((sf == of)) goto L_fff1c0;
L_fff1be: /* fff1be: xor edx, edx */
  edx = 0;
L_fff1c0: /* fff1c0: mov ecx, dword ptr [esp + 0x10] */
  ecx = R32((uint32_t)(esp + 0x10u));
/* fff1c4: mov eax, dword ptr [ebx + 0x28] */
  eax = R32((uint32_t)(ebx + 0x28u));
/* fff1c7: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* fff1cb: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* fff1cc: mov ecx, dword ptr [ebx + 0x2c] */
  ecx = R32((uint32_t)(ebx + 0x2cu));
/* fff1cf: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fff1d0: mov eax, dword ptr [ebp + esi*4] */
  eax = R32((uint32_t)(ebp + esi*4));
/* fff1d4: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* fff1d5: sub eax, dword ptr [ebx + 0x20] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebx + 0x20u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* fff1d8: mov ecx, dword ptr [esp + 0x34] */
  ecx = R32((uint32_t)(esp + 0x34u));
/* fff1dc: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fff1dd: mov eax, dword ptr [esp + 0x28] */
  eax = R32((uint32_t)(esp + 0x28u));
/* fff1e1: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* fff1e2: mov ecx, dword ptr [eax + edx*4] */
  ecx = R32((uint32_t)(eax + edx*4));
/* fff1e5: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* fff1e6: call 0xffef40 */
  esp -= 4; W32(esp, 0xfff1ebu); SPILL(); f_ffef40(); if (g_unwind) return; RELOAD();
/* fff1eb: mov ecx, dword ptr [esp + 0x24] */
  ecx = R32((uint32_t)(esp + 0x24u));
/* fff1ef: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
L_fff1f2: /* fff1f2: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* fff1f3: cmp esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff1f5: jl 0xfff140 */
  if ((sf != of)) goto L_fff140;
L_fff1fb: /* fff1fb: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fff1fc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* fff1fd: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fff1fe: add esp, 8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x8u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fff201: ret  */
  esp += 4; SPILL(); return;
}

void f_fff210(void) {
  LOAD_REGS();
L_fff210: /* fff210: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* fff211: mov ebp, esp */
  ebp = esp;
/* fff213: sub esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* fff216: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* fff217: mov ebx, dword ptr [ebp + 0x10] */
  ebx = R32((uint32_t)(ebp + 0x10u));
/* fff21a: shl ebx, 2 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  ebx = r;
  }
/* fff21d: mov eax, ebx */
  eax = ebx;
/* fff21f: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fff220: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fff223: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fff224: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* fff227: call 0x1009200 */
  esp -= 4; W32(esp, 0xfff22cu); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* fff22c: mov eax, ebx */
  eax = ebx;
/* fff22e: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fff231: mov edi, esp */
  edi = esp;
/* fff233: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* fff236: mov dword ptr [ebp - 0x10], edi */
  W32((uint32_t)(ebp + 0xfffffff0u), edi);
/* fff239: call 0x1009200 */
  esp -= 4; W32(esp, 0xfff23eu); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* fff23e: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* fff241: xor esi, esi */
  esi = 0;
/* fff243: xor edx, edx */
  edx = 0;
/* fff245: mov ebx, esp */
  ebx = esp;
/* fff247: xor ecx, ecx */
  ecx = 0;
/* fff249: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* fff24b: mov dword ptr [ebp - 0x14], ebx */
  W32((uint32_t)(ebp + 0xffffffecu), ebx);
/* fff24e: mov dword ptr [ebp - 0x18], esi */
  W32((uint32_t)(ebp + 0xffffffe8u), esi);
/* fff251: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* fff254: jle 0xfff317 */
  if ((zf || sf != of)) goto L_fff317;
L_fff25a: /* fff25a: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* fff25d: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* fff260: jmp 0xfff265 */
  goto L_fff265;
L_fff262: /* fff262: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
L_fff265: /* fff265: cmp ecx, 2 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff268: jge 0xfff277 */
  if ((sf == of)) goto L_fff277;
L_fff26a: /* fff26a: mov dword ptr [edi + ecx*4], edx */
  W32((uint32_t)(edi + ecx*4), edx);
/* fff26d: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* fff26f: mov dword ptr [ebx + ecx*4], eax */
  W32((uint32_t)(ebx + ecx*4), eax);
/* fff272: jmp 0xfff300 */
  goto L_fff300;
L_fff277: /* fff277: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* fff279: lea esi, [ebx + ecx*4 - 4] */
  esi = (uint32_t)(ebx + ecx*4 + 0xfffffffcu);
/* fff27d: fcomp dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
  FPOP();
/* fff27f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fff281: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* fff284: jnp 0xfff2d9 */
  if (!pf) goto L_fff2d9;
L_fff286: /* fff286: sub ebx, edi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  ebx = r;
  }
/* fff288: lea edx, [edi + ecx*4 - 8] */
  edx = (uint32_t)(edi + ecx*4 + 0xfffffff8u);
/* fff28c: mov dword ptr [ebp - 0xc], ebx */
  W32((uint32_t)(ebp + 0xfffffff4u), ebx);
/* fff28f: nop  */
L_fff290: /* fff290: mov eax, dword ptr [edx + 4] */
  eax = R32((uint32_t)(edx + 0x4u));
/* fff293: mov ebx, dword ptr [ebp + 0xc] */
  ebx = R32((uint32_t)(ebp + 0xcu));
/* fff296: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* fff299: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fff29b: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff29d: jge 0xfff2e6 */
  if ((sf == of)) goto L_fff2e6;
L_fff29f: /* fff29f: cmp ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff2a2: jle 0xfff2e6 */
  if ((zf || sf != of)) goto L_fff2e6;
L_fff2a4: /* fff2a4: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* fff2a7: fld dword ptr [esi] */
  { double v = F32((uint32_t)(esi)); FPUSH(v); }
/* fff2a9: fcomp dword ptr [eax + edx] */
  fpu_com(ST0, F32((uint32_t)(eax + edx)));
  FPOP();
/* fff2ac: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fff2ae: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* fff2b1: jp 0xfff2e6 */
  if (pf) goto L_fff2e6;
L_fff2b3: /* fff2b3: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* fff2b5: add eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fff2b7: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff2b9: jge 0xfff2e6 */
  if ((sf == of)) goto L_fff2e6;
L_fff2bb: /* fff2bb: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* fff2be: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* fff2c0: sub esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* fff2c3: fcomp dword ptr [esi] */
  fpu_com(ST0, F32((uint32_t)(esi)));
  FPOP();
/* fff2c5: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  ecx = r;
  }
/* fff2c6: sub edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* fff2c9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fff2cb: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* fff2ce: jp 0xfff290 */
  if (pf) goto L_fff290;
L_fff2d0: /* fff2d0: mov edi, dword ptr [ebp - 0x10] */
  edi = R32((uint32_t)(ebp + 0xfffffff0u));
/* fff2d3: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* fff2d6: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
L_fff2d9: /* fff2d9: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* fff2dc: mov dword ptr [edi + ecx*4], edx */
  W32((uint32_t)(edi + ecx*4), edx);
/* fff2df: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* fff2e1: mov dword ptr [ebx + ecx*4], eax */
  W32((uint32_t)(ebx + ecx*4), eax);
/* fff2e4: jmp 0xfff2fd */
  goto L_fff2fd;
L_fff2e6: /* fff2e6: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* fff2e9: mov edi, dword ptr [ebp - 0x10] */
  edi = R32((uint32_t)(ebp + 0xfffffff0u));
/* fff2ec: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* fff2ef: mov ebx, dword ptr [ebp - 0x14] */
  ebx = R32((uint32_t)(ebp + 0xffffffecu));
/* fff2f2: mov dword ptr [edi + ecx*4], edx */
  W32((uint32_t)(edi + ecx*4), edx);
/* fff2f5: mov edx, dword ptr [eax] */
  edx = R32((uint32_t)(eax));
/* fff2f7: mov dword ptr [ebx + ecx*4], edx */
  W32((uint32_t)(ebx + ecx*4), edx);
/* fff2fa: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
L_fff2fd: /* fff2fd: mov esi, dword ptr [ebp - 0x18] */
  esi = R32((uint32_t)(ebp + 0xffffffe8u));
L_fff300: /* fff300: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* fff303: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fff306: inc ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a + 1);
  ecx = r;
  }
/* fff307: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* fff308: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* fff30b: cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x10u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff30e: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* fff311: jl 0xfff262 */
  if ((sf != of)) goto L_fff262;
L_fff317: /* fff317: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* fff319: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* fff320: jle 0xfff388 */
  if ((zf || sf != of)) goto L_fff388;
L_fff322: /* fff322: mov eax, ebx */
  eax = ebx;
/* fff324: lea edx, [edi + 4] */
  edx = (uint32_t)(edi + 0x4u);
/* fff327: sub eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* fff329: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* fff32c: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
/* fff32f: nop  */
L_fff330: /* fff330: mov edi, dword ptr [ebp - 4] */
  edi = R32((uint32_t)(ebp + 0xfffffffcu));
/* fff333: lea eax, [ecx - 1] */
  eax = (uint32_t)(ecx + 0xffffffffu);
/* fff336: cmp edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff338: jge 0xfff34d */
  if ((sf == of)) goto L_fff34d;
L_fff33a: /* fff33a: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* fff33d: fld dword ptr [edx + eax] */
  { double v = F32((uint32_t)(edx + eax)); FPUSH(v); }
/* fff340: fcomp dword ptr [ebx] */
  fpu_com(ST0, F32((uint32_t)(ebx)));
  FPOP();
/* fff342: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fff344: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* fff347: jne 0xfff34d */
  if (!zf) goto L_fff34d;
L_fff349: /* fff349: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* fff34b: jmp 0xfff357 */
  goto L_fff357;
L_fff34d: /* fff34d: mov eax, dword ptr [edx - 4] */
  eax = R32((uint32_t)(edx + 0xfffffffcu));
/* fff350: mov edi, dword ptr [ebp + 0xc] */
  edi = R32((uint32_t)(ebp + 0xcu));
/* fff353: lea eax, [eax + edi + 1] */
  eax = (uint32_t)(eax + edi + 0x1u);
L_fff357: /* fff357: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* fff35a: cmp eax, edi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff35c: jle 0xfff360 */
  if ((zf || sf != of)) goto L_fff360;
L_fff35e: /* fff35e: mov eax, edi */
  eax = edi;
L_fff360: /* fff360: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff362: jge 0xfff374 */
  if ((sf == of)) goto L_fff374;
L_fff364: /* fff364: mov edx, dword ptr [ebx] */
  edx = R32((uint32_t)(ebx));
/* fff366: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* fff369: mov dword ptr [edi + esi*4], edx */
  W32((uint32_t)(edi + esi*4), edx);
/* fff36c: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* fff36d: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff36f: jl 0xfff364 */
  if ((sf != of)) goto L_fff364;
L_fff371: /* fff371: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
L_fff374: /* fff374: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* fff377: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* fff378: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* fff37b: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* fff37e: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff380: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* fff383: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* fff386: jl 0xfff330 */
  if ((sf != of)) goto L_fff330;
L_fff388: /* fff388: lea esp, [ebp - 0x24] */
  esp = (uint32_t)(ebp + 0xffffffdcu);
/* fff38b: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fff38c: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fff38d: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* fff38e: mov esp, ebp */
  esp = ebp;
/* fff390: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* fff391: ret  */
  esp += 4; SPILL(); return;
}

void f_fff3a0(void) {
  LOAD_REGS();
L_fff3a0: /* fff3a0: mov eax, dword ptr [edi + 0x2c] */
  eax = R32((uint32_t)(edi + 0x2cu));
/* fff3a3: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* fff3a4: mov ebx, dword ptr [edi + 0x28] */
  ebx = R32((uint32_t)(edi + 0x28u));
/* fff3a7: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* fff3a8: mov ebp, dword ptr [esp + 0xc] */
  ebp = R32((uint32_t)(esp + 0xcu));
/* fff3ac: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fff3ad: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fff3ae: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* fff3af: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* fff3b0: xor esi, esi */
  esi = 0;
/* fff3b2: call 0xfff210 */
  esp -= 4; W32(esp, 0xfff3b7u); SPILL(); f_fff210(); if (g_unwind) return; RELOAD();
/* fff3b7: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* fff3ba: mov edx, dword ptr [ecx] */
  edx = R32((uint32_t)(ecx));
/* fff3bc: mov ecx, dword ptr [edi + 0x20] */
  ecx = R32((uint32_t)(edi + 0x20u));
/* fff3bf: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* fff3c1: sar ebx, 1 */
  { uint32_t a = (uint32_t)(ebx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ebx = r;
  }
/* fff3c3: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* fff3c5: add esp, 0xc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xcu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fff3c8: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* fff3ca: cmp eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x1u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff3cd: jle 0xfff487 */
  if ((zf || sf != of)) goto L_fff487;
L_fff3d3: /* fff3d3: mov eax, dword ptr [ebp + edx*4] */
  eax = R32((uint32_t)(ebp + edx*4));
/* fff3d7: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* fff3da: mov ebx, dword ptr [edi + 0x20] */
  ebx = R32((uint32_t)(edi + 0x20u));
/* fff3dd: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
/* fff3e1: fld dword ptr [esp + 0x10] */
  { double v = F32((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* fff3e5: lea eax, [ecx + esi*4] */
  eax = (uint32_t)(ecx + esi*4);
/* fff3e8: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* fff3eb: add ecx, dword ptr [eax] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(eax)));
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fff3ed: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* fff3ef: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* fff3f1: mov ebx, dword ptr [edi + 4] */
  ebx = R32((uint32_t)(edi + 0x4u));
/* fff3f4: fcomp dword ptr [ebx + 0x7c] */
  fpu_com(ST0, F32((uint32_t)(ebx + 0x7cu)));
  FPOP();
/* fff3f7: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fff3f9: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* fff3fc: jne 0xfff405 */
  if (!zf) goto L_fff405;
L_fff3fe: /* fff3fe: mov eax, dword ptr [ebx + 0x7c] */
  eax = R32((uint32_t)(ebx + 0x7cu));
/* fff401: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_fff405: /* fff405: lea eax, [edx + 1] */
  eax = (uint32_t)(edx + 0x1u);
/* fff408: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff40a: jg 0xfff448 */
  if ((!zf && sf == of)) goto L_fff448;
L_fff40c: /* fff40c: mov ebx, eax */
  ebx = eax;
/* fff40e: mov edi, edi */
  edi = edi;
L_fff410: /* fff410: fld dword ptr [ebp + edx*4 + 4] */
  { double v = F32((uint32_t)(ebp + edx*4 + 0x4u)); FPUSH(v); }
/* fff414: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* fff415: fcomp dword ptr [0x100a670] */
  fpu_com(ST0, F32((uint32_t)(0x100a670u)));
  FPOP();
/* fff41b: inc ebx */
  { uint32_t a = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a + 1);
  ebx = r;
  }
/* fff41c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fff41e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* fff421: jne 0xfff432 */
  if (!zf) goto L_fff432;
L_fff423: /* fff423: fld dword ptr [ebp + edx*4] */
  { double v = F32((uint32_t)(ebp + edx*4)); FPUSH(v); }
/* fff427: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* fff42b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fff42d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* fff430: jnp 0xfff43c */
  if (!pf) goto L_fff43c;
L_fff432: /* fff432: cmp dword ptr [esp + 0x10], 0xc61c3c00 */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x10u))); uint32_t b = (uint32_t)(0xc61c3c00u);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
/* fff43a: jne 0xfff444 */
  if (!zf) goto L_fff444;
L_fff43c: /* fff43c: mov eax, dword ptr [ebp + edx*4] */
  eax = R32((uint32_t)(ebp + edx*4));
/* fff440: mov dword ptr [esp + 0x10], eax */
  W32((uint32_t)(esp + 0x10u), eax);
L_fff444: /* fff444: cmp ebx, ecx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff446: jle 0xfff410 */
  if ((zf || sf != of)) goto L_fff410;
L_fff448: /* fff448: mov eax, dword ptr [edi + 0x20] */
  eax = R32((uint32_t)(edi + 0x20u));
/* fff44b: lea ebx, [eax + edx] */
  ebx = (uint32_t)(eax + edx);
/* fff44e: cmp esi, dword ptr [edi] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff450: jge 0xfff47a */
  if ((sf == of)) goto L_fff47a;
L_fff452: /* fff452: mov ecx, dword ptr [edi + 0x18] */
  ecx = R32((uint32_t)(edi + 0x18u));
/* fff455: cmp dword ptr [ecx + esi*4], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ecx + esi*4))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff458: jg 0xfff47a */
  if ((!zf && sf == of)) goto L_fff47a;
L_fff45a: /* fff45a: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* fff45e: fld dword ptr [ecx + esi*4] */
  { double v = F32((uint32_t)(ecx + esi*4)); FPUSH(v); }
/* fff461: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* fff465: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fff467: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* fff46a: jp 0xfff473 */
  if (pf) goto L_fff473;
L_fff46c: /* fff46c: mov eax, dword ptr [esp + 0x10] */
  eax = R32((uint32_t)(esp + 0x10u));
/* fff470: mov dword ptr [ecx + esi*4], eax */
  W32((uint32_t)(ecx + esi*4), eax);
L_fff473: /* fff473: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* fff475: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* fff476: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff478: jl 0xfff452 */
  if ((sf != of)) goto L_fff452;
L_fff47a: /* fff47a: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* fff47c: lea ecx, [esi + 1] */
  ecx = (uint32_t)(esi + 0x1u);
/* fff47f: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff481: jl 0xfff3d3 */
  if ((sf != of)) goto L_fff3d3;
L_fff487: /* fff487: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* fff48a: cmp esi, dword ptr [edi] */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(R32((uint32_t)(edi)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff48c: mov ebp, dword ptr [ebp + edx*4 - 4] */
  ebp = R32((uint32_t)(ebp + edx*4 + 0xfffffffcu));
/* fff490: mov dword ptr [esp + 0x10], ebp */
  W32((uint32_t)(esp + 0x10u), ebp);
/* fff494: jge 0xfff4bc */
  if ((sf == of)) goto L_fff4bc;
L_fff496: /* fff496: jmp 0xfff4a0 */
  goto L_fff4a0;
L_fff4a0: /* fff4a0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* fff4a4: fld dword ptr [ecx + esi*4] */
  { double v = F32((uint32_t)(ecx + esi*4)); FPUSH(v); }
/* fff4a7: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* fff4ab: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fff4ad: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* fff4b0: jp 0xfff4b5 */
  if (pf) goto L_fff4b5;
L_fff4b2: /* fff4b2: mov dword ptr [ecx + esi*4], ebp */
  W32((uint32_t)(ecx + esi*4), ebp);
L_fff4b5: /* fff4b5: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* fff4b7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* fff4b8: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff4ba: jl 0xfff4a0 */
  if ((sf != of)) goto L_fff4a0;
L_fff4bc: /* fff4bc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fff4bd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* fff4be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* fff4bf: ret  */
  esp += 4; SPILL(); return;
}

void f_fff498(void) {
  LOAD_REGS();
L_fff498: /* fff498: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* fff49f: nop  */
L_fff4a0: /* fff4a0: mov ecx, dword ptr [esp + 0x14] */
  ecx = R32((uint32_t)(esp + 0x14u));
/* fff4a4: fld dword ptr [ecx + esi*4] */
  { double v = F32((uint32_t)(ecx + esi*4)); FPUSH(v); }
/* fff4a7: fcomp dword ptr [esp + 0x10] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x10u)));
  FPOP();
/* fff4ab: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fff4ad: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* fff4b0: jp 0xfff4b5 */
  if (pf) goto L_fff4b5;
L_fff4b2: /* fff4b2: mov dword ptr [ecx + esi*4], ebp */
  W32((uint32_t)(ecx + esi*4), ebp);
L_fff4b5: /* fff4b5: mov eax, dword ptr [edi] */
  eax = R32((uint32_t)(edi));
/* fff4b7: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* fff4b8: cmp esi, eax */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff4ba: jl 0xfff4a0 */
  if ((sf != of)) goto L_fff4a0;
L_fff4bc: /* fff4bc: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fff4bd: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* fff4be: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* fff4bf: ret  */
  esp += 4; SPILL(); return;
}

void f_fff4c0(void) {
  LOAD_REGS();
L_fff4c0: /* fff4c0: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* fff4c1: mov ebp, esp */
  ebp = esp;
/* fff4c3: and esp, 0xfffffff8 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xfffffff8u);
  uint32_t r = (uint32_t)(a & b);
  esp = r;
  }
/* fff4c6: sub esp, 0xcc */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0xccu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* fff4cc: movsx eax, word ptr [ecx + 2] */
  eax = (uint32_t)(int32_t)(int16_t)(R16((uint32_t)(ecx + 0x2u)));
/* fff4d0: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* fff4d1: xor ebx, ebx */
  ebx = 0;
/* fff4d3: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fff4d4: mov esi, eax */
  esi = eax;
/* fff4d6: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
/* fff4da: cmp dword ptr [ebp + 8], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x8u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff4dd: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fff4de: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
/* fff4e2: mov dword ptr [esp + 0x48], ebx */
  W32((uint32_t)(esp + 0x48u), ebx);
/* fff4e6: mov dword ptr [esp + 0x58], ebx */
  W32((uint32_t)(esp + 0x58u), ebx);
/* fff4ea: mov dword ptr [esp + 0x50], ebx */
  W32((uint32_t)(esp + 0x50u), ebx);
/* fff4ee: mov dword ptr [esp + 0x54], ebx */
  W32((uint32_t)(esp + 0x54u), ebx);
/* fff4f2: mov dword ptr [esp + 0x60], ebx */
  W32((uint32_t)(esp + 0x60u), ebx);
/* fff4f6: mov dword ptr [esp + 0x64], ebx */
  W32((uint32_t)(esp + 0x64u), ebx);
/* fff4fa: mov dword ptr [esp + 0x90], ebx */
  W32((uint32_t)(esp + 0x90u), ebx);
/* fff501: mov dword ptr [esp + 0x94], ebx */
  W32((uint32_t)(esp + 0x94u), ebx);
/* fff508: mov dword ptr [esp + 0x78], ebx */
  W32((uint32_t)(esp + 0x78u), ebx);
/* fff50c: mov dword ptr [esp + 0x7c], ebx */
  W32((uint32_t)(esp + 0x7cu), ebx);
/* fff510: mov dword ptr [esp + 0x98], ebx */
  W32((uint32_t)(esp + 0x98u), ebx);
/* fff517: mov dword ptr [esp + 0x9c], ebx */
  W32((uint32_t)(esp + 0x9cu), ebx);
/* fff51e: mov dword ptr [esp + 0x80], ebx */
  W32((uint32_t)(esp + 0x80u), ebx);
/* fff525: mov dword ptr [esp + 0x84], ebx */
  W32((uint32_t)(esp + 0x84u), ebx);
/* fff52c: mov dword ptr [esp + 0xa8], ebx */
  W32((uint32_t)(esp + 0xa8u), ebx);
/* fff533: mov dword ptr [esp + 0xac], ebx */
  W32((uint32_t)(esp + 0xacu), ebx);
/* fff53a: mov dword ptr [esp + 0x88], ebx */
  W32((uint32_t)(esp + 0x88u), ebx);
/* fff541: mov dword ptr [esp + 0x8c], ebx */
  W32((uint32_t)(esp + 0x8cu), ebx);
/* fff548: mov dword ptr [esp + 0x68], ebx */
  W32((uint32_t)(esp + 0x68u), ebx);
/* fff54c: mov dword ptr [esp + 0x6c], ebx */
  W32((uint32_t)(esp + 0x6cu), ebx);
/* fff550: mov dword ptr [esp + 0x70], ebx */
  W32((uint32_t)(esp + 0x70u), ebx);
/* fff554: mov dword ptr [esp + 0x74], ebx */
  W32((uint32_t)(esp + 0x74u), ebx);
/* fff558: mov dword ptr [esp + 0x24], ebx */
  W32((uint32_t)(esp + 0x24u), ebx);
/* fff55c: jle 0xfffbc9 */
  if ((zf || sf != of)) goto L_fffbc9;
L_fff562: /* fff562: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* fff565: sub eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* fff567: mov dword ptr [esp + 0xa4], ecx */
  W32((uint32_t)(esp + 0xa4u), ecx);
/* fff56e: mov dword ptr [esp + 0xd4], eax */
  W32((uint32_t)(esp + 0xd4u), eax);
/* fff575: jmp 0xfff580 */
  goto L_fff580;
L_fff580: /* fff580: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* fff584: cmp eax, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff587: jge 0xfff7af */
  if ((sf == of)) goto L_fff7af;
L_fff58d: /* fff58d: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* fff594: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* fff596: mov edx, edi */
  edx = edi;
/* fff598: and edx, 0xffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* fff59e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff5a0: jge 0xfff6ab */
  if ((sf == of)) goto L_fff6ab;
L_fff5a6: /* fff5a6: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* fff5a9: mov esi, eax */
  esi = eax;
/* fff5ab: fchs  */
  ST0 = -ST0;
/* fff5ad: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
/* fff5af: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* fff5b3: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
L_fff5b6: /* fff5b6: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* fff5ba: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff5bc: mov ecx, esi */
  ecx = esi;
/* fff5be: jl 0xfff5c7 */
  if ((sf != of)) goto L_fff5c7;
L_fff5c0: /* fff5c0: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
L_fff5c7: /* fff5c7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* fff5ca: fld dword ptr [ecx + eax] */
  { double v = F32((uint32_t)(ecx + eax)); FPUSH(v); }
/* fff5cd: fcomp dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
  FPOP();
/* fff5d1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fff5d3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* fff5d6: jp 0xfff5ec */
  if (pf) goto L_fff5ec;
L_fff5d8: /* fff5d8: mov dword ptr [esp + 0xb0], ebx */
  W32((uint32_t)(esp + 0xb0u), ebx);
/* fff5df: mov dword ptr [esp + 0xb4], 0x3ff00000 */
  W32((uint32_t)(esp + 0xb4u), 0x3ff00000u);
/* fff5ea: jmp 0xfff5fc */
  goto L_fff5fc;
L_fff5ec: /* fff5ec: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* fff5ef: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* fff5f2: fadd dword ptr [ecx + eax] */
  ST0 = ST0 + (F32((uint32_t)(ecx + eax)));
/* fff5f5: fstp qword ptr [esp + 0xb0] */
  WF64((uint32_t)(esp + 0xb0u), ST0); FPOP();
L_fff5fc: /* fff5fc: fld qword ptr [esp + 0xb0] */
  { double v = F64((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* fff603: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* fff607: fmul qword ptr [esp + 0xb0] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0xb0u)));
/* fff60e: mov ecx, eax */
  ecx = eax;
/* fff610: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* fff613: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* fff617: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* fff61b: fadd qword ptr [esp + 0x68] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x68u)));
/* fff61f: fstp qword ptr [esp + 0x68] */
  WF64((uint32_t)(esp + 0x68u), ST0); FPOP();
/* fff623: fild dword ptr [esp + 0x38] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* fff627: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* fff62b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* fff62c: sub esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* fff62f: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff631: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* fff635: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* fff639: fmul qword ptr [esp + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x18u)));
/* fff63d: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* fff641: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* fff645: fadd qword ptr [esp + 0x50] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x50u)));
/* fff649: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* fff64d: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* fff651: fmul qword ptr [esp + 0xb0] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0xb0u)));
/* fff658: fadd qword ptr [esp + 0x90] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x90u)));
/* fff65f: fstp qword ptr [esp + 0x90] */
  WF64((uint32_t)(esp + 0x90u), ST0); FPOP();
/* fff666: fild dword ptr [esp + 0x38] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* fff66a: fstp qword ptr [esp + 0x38] */
  WF64((uint32_t)(esp + 0x38u), ST0); FPOP();
/* fff66e: fld qword ptr [esp + 0x38] */
  { double v = F64((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* fff672: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* fff676: fmul qword ptr [esp + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x18u)));
/* fff67a: fadd qword ptr [esp + 0x98] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x98u)));
/* fff681: fstp qword ptr [esp + 0x98] */
  WF64((uint32_t)(esp + 0x98u), ST0); FPOP();
/* fff688: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* fff68c: fmul qword ptr [esp + 0xb0] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0xb0u)));
/* fff693: fadd qword ptr [esp + 0xa8] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0xa8u)));
/* fff69a: fstp qword ptr [esp + 0xa8] */
  WF64((uint32_t)(esp + 0xa8u), ST0); FPOP();
/* fff6a1: jl 0xfff5b6 */
  if ((sf != of)) goto L_fff5b6;
L_fff6a7: /* fff6a7: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
L_fff6ab: /* fff6ab: sar edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 16;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* fff6ae: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff6b0: jge 0xfff7af */
  if ((sf == of)) goto L_fff7af;
L_fff6b6: /* fff6b6: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* fff6b9: mov edx, esi */
  edx = esi;
/* fff6bb: fchs  */
  ST0 = -ST0;
/* fff6bd: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* fff6bf: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* fff6c3: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
L_fff6c6: /* fff6c6: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff6c8: mov ecx, edx */
  ecx = edx;
/* fff6ca: jl 0xfff6d3 */
  if ((sf != of)) goto L_fff6d3;
L_fff6cc: /* fff6cc: lea ecx, [esi*4] */
  ecx = (uint32_t)(esi*4);
L_fff6d3: /* fff6d3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* fff6d6: fld dword ptr [ecx + eax] */
  { double v = F32((uint32_t)(ecx + eax)); FPUSH(v); }
/* fff6d9: fcomp dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
  FPOP();
/* fff6dd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fff6df: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* fff6e2: jp 0xfff6f8 */
  if (pf) goto L_fff6f8;
L_fff6e4: /* fff6e4: mov dword ptr [esp + 0xc0], ebx */
  W32((uint32_t)(esp + 0xc0u), ebx);
/* fff6eb: mov dword ptr [esp + 0xc4], 0x3ff00000 */
  W32((uint32_t)(esp + 0xc4u), 0x3ff00000u);
/* fff6f6: jmp 0xfff708 */
  goto L_fff708;
L_fff6f8: /* fff6f8: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* fff6fb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* fff6fe: fadd dword ptr [ecx + eax] */
  ST0 = ST0 + (F32((uint32_t)(ecx + eax)));
/* fff701: fstp qword ptr [esp + 0xc0] */
  WF64((uint32_t)(esp + 0xc0u), ST0); FPOP();
L_fff708: /* fff708: fld qword ptr [esp + 0xc0] */
  { double v = F64((uint32_t)(esp + 0xc0u)); FPUSH(v); }
/* fff70f: mov ecx, esi */
  ecx = esi;
/* fff711: fmul qword ptr [esp + 0xc0] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0xc0u)));
/* fff718: imul ecx, esi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(esi);
  ecx = (uint32_t)r;
  }
/* fff71b: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* fff71f: fld qword ptr [esp + 0x68] */
  { double v = F64((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* fff723: fsub qword ptr [esp + 0x18] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x18u)));
/* fff727: fstp qword ptr [esp + 0x68] */
  WF64((uint32_t)(esp + 0x68u), ST0); FPOP();
/* fff72b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* fff72c: fild dword ptr [esp + 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* fff730: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* fff734: sub edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* fff737: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff739: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* fff73d: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* fff741: fmul qword ptr [esp + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x18u)));
/* fff745: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* fff749: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* fff74d: fsub qword ptr [esp + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x10u)));
/* fff751: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* fff755: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* fff759: fmul qword ptr [esp + 0xc0] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0xc0u)));
/* fff760: fsubr qword ptr [esp + 0x90] */
  ST0 = (F64((uint32_t)(esp + 0x90u))) - ST0;
/* fff767: fstp qword ptr [esp + 0x90] */
  WF64((uint32_t)(esp + 0x90u), ST0); FPOP();
/* fff76e: fild dword ptr [esp + 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* fff772: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* fff776: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* fff77a: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
/* fff77e: fmul qword ptr [esp + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x18u)));
/* fff782: fsubr qword ptr [esp + 0x98] */
  ST0 = (F64((uint32_t)(esp + 0x98u))) - ST0;
/* fff789: fstp qword ptr [esp + 0x98] */
  WF64((uint32_t)(esp + 0x98u), ST0); FPOP();
/* fff790: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* fff794: fmul qword ptr [esp + 0xc0] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0xc0u)));
/* fff79b: fsubr qword ptr [esp + 0xa8] */
  ST0 = (F64((uint32_t)(esp + 0xa8u))) - ST0;
/* fff7a2: fstp qword ptr [esp + 0xa8] */
  WF64((uint32_t)(esp + 0xa8u), ST0); FPOP();
/* fff7a9: jl 0xfff6c6 */
  if ((sf != of)) goto L_fff6c6;
L_fff7af: /* fff7af: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* fff7b2: cmp dword ptr [esp + 0x48], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x48u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff7b6: jge 0xfffa01 */
  if ((sf == of)) goto L_fffa01;
L_fff7bc: /* fff7bc: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* fff7bf: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff7c1: jle 0xfffa01 */
  if ((zf || sf != of)) goto L_fffa01;
L_fff7c7: /* fff7c7: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* fff7cb: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* fff7cc: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* fff7ce: mov ecx, eax */
  ecx = eax;
/* fff7d0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* fff7d3: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* fff7d5: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fff7d7: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff7d9: jle 0xfff7dd */
  if ((zf || sf != of)) goto L_fff7dd;
L_fff7db: /* fff7db: mov ecx, eax */
  ecx = eax;
L_fff7dd: /* fff7dd: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* fff7e1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff7e3: jge 0xfff8eb */
  if ((sf == of)) goto L_fff8eb;
L_fff7e9: /* fff7e9: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* fff7ec: mov esi, eax */
  esi = eax;
/* fff7ee: fchs  */
  ST0 = -ST0;
/* fff7f0: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
/* fff7f2: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* fff7f6: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* fff7f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_fff800: /* fff800: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* fff804: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff806: mov edx, esi */
  edx = esi;
/* fff808: jl 0xfff811 */
  if ((sf != of)) goto L_fff811;
L_fff80a: /* fff80a: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
L_fff811: /* fff811: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* fff814: fld dword ptr [edx + eax] */
  { double v = F32((uint32_t)(edx + eax)); FPUSH(v); }
/* fff817: fcomp dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
  FPOP();
/* fff81b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fff81d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* fff820: jp 0xfff836 */
  if (pf) goto L_fff836;
L_fff822: /* fff822: mov dword ptr [esp + 0xc8], ebx */
  W32((uint32_t)(esp + 0xc8u), ebx);
/* fff829: mov dword ptr [esp + 0xcc], 0x3ff00000 */
  W32((uint32_t)(esp + 0xccu), 0x3ff00000u);
/* fff834: jmp 0xfff846 */
  goto L_fff846;
L_fff836: /* fff836: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* fff839: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* fff83c: fadd dword ptr [edx + eax] */
  ST0 = ST0 + (F32((uint32_t)(edx + eax)));
/* fff83f: fstp qword ptr [esp + 0xc8] */
  WF64((uint32_t)(esp + 0xc8u), ST0); FPOP();
L_fff846: /* fff846: fld qword ptr [esp + 0xc8] */
  { double v = F64((uint32_t)(esp + 0xc8u)); FPUSH(v); }
/* fff84d: mov edx, edi */
  edx = edi;
/* fff84f: fmul qword ptr [esp + 0xc8] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0xc8u)));
/* fff856: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* fff859: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* fff85d: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* fff861: fadd qword ptr [esp + 0x70] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x70u)));
/* fff865: fstp qword ptr [esp + 0x70] */
  WF64((uint32_t)(esp + 0x70u), ST0); FPOP();
/* fff869: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* fff86a: fild dword ptr [esp + 0x48] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* fff86e: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* fff872: sub esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* fff875: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff877: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* fff87b: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* fff87f: fmul qword ptr [esp + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x18u)));
/* fff883: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* fff887: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* fff88b: fadd qword ptr [esp + 0x60] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x60u)));
/* fff88f: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* fff893: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* fff897: fmul qword ptr [esp + 0xc8] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0xc8u)));
/* fff89e: fadd qword ptr [esp + 0x78] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x78u)));
/* fff8a2: fstp qword ptr [esp + 0x78] */
  WF64((uint32_t)(esp + 0x78u), ST0); FPOP();
/* fff8a6: fild dword ptr [esp + 0x48] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* fff8aa: fstp qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0); FPOP();
/* fff8ae: fld qword ptr [esp + 0x48] */
  { double v = F64((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* fff8b2: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* fff8b6: fmul qword ptr [esp + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x18u)));
/* fff8ba: fadd qword ptr [esp + 0x80] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x80u)));
/* fff8c1: fstp qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0); FPOP();
/* fff8c8: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* fff8cc: fmul qword ptr [esp + 0xc8] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0xc8u)));
/* fff8d3: fadd qword ptr [esp + 0x88] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x88u)));
/* fff8da: fstp qword ptr [esp + 0x88] */
  WF64((uint32_t)(esp + 0x88u), ST0); FPOP();
/* fff8e1: jl 0xfff800 */
  if ((sf != of)) goto L_fff800;
L_fff8e7: /* fff8e7: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
L_fff8eb: /* fff8eb: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* fff8ee: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* fff8ef: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* fff8f0: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* fff8f2: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* fff8f6: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* fff8f8: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* fff8fa: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* fff8fe: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff900: jge 0xfffa01 */
  if ((sf == of)) goto L_fffa01;
L_fff906: /* fff906: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* fff909: mov esi, eax */
  esi = eax;
/* fff90b: fchs  */
  ST0 = -ST0;
/* fff90d: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
/* fff90f: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* fff913: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
L_fff916: /* fff916: mov edi, dword ptr [esp + 0x58] */
  edi = R32((uint32_t)(esp + 0x58u));
/* fff91a: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff91c: mov ecx, esi */
  ecx = esi;
/* fff91e: jl 0xfff927 */
  if ((sf != of)) goto L_fff927;
L_fff920: /* fff920: lea ecx, [edi*4] */
  ecx = (uint32_t)(edi*4);
L_fff927: /* fff927: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* fff92a: fld dword ptr [ecx + eax] */
  { double v = F32((uint32_t)(ecx + eax)); FPUSH(v); }
/* fff92d: fcomp dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
  FPOP();
/* fff931: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fff933: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* fff936: jp 0xfff94c */
  if (pf) goto L_fff94c;
L_fff938: /* fff938: mov dword ptr [esp + 0xb8], ebx */
  W32((uint32_t)(esp + 0xb8u), ebx);
/* fff93f: mov dword ptr [esp + 0xbc], 0x3ff00000 */
  W32((uint32_t)(esp + 0xbcu), 0x3ff00000u);
/* fff94a: jmp 0xfff95c */
  goto L_fff95c;
L_fff94c: /* fff94c: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* fff94f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* fff952: fadd dword ptr [ecx + eax] */
  ST0 = ST0 + (F32((uint32_t)(ecx + eax)));
/* fff955: fstp qword ptr [esp + 0xb8] */
  WF64((uint32_t)(esp + 0xb8u), ST0); FPOP();
L_fff95c: /* fff95c: fld qword ptr [esp + 0xb8] */
  { double v = F64((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* fff963: mov ecx, edi */
  ecx = edi;
/* fff965: fmul qword ptr [esp + 0xb8] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0xb8u)));
/* fff96c: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* fff96f: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* fff973: fld qword ptr [esp + 0x70] */
  { double v = F64((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* fff977: fsub qword ptr [esp + 0x18] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x18u)));
/* fff97b: fstp qword ptr [esp + 0x70] */
  WF64((uint32_t)(esp + 0x70u), ST0); FPOP();
/* fff97f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* fff980: fild dword ptr [esp + 0x58] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* fff984: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* fff988: sub esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* fff98b: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff98d: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* fff991: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* fff995: fmul qword ptr [esp + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x18u)));
/* fff999: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* fff99d: fld qword ptr [esp + 0x60] */
  { double v = F64((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* fff9a1: fsub qword ptr [esp + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x10u)));
/* fff9a5: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* fff9a9: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* fff9ad: fmul qword ptr [esp + 0xb8] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0xb8u)));
/* fff9b4: fsubr qword ptr [esp + 0x78] */
  ST0 = (F64((uint32_t)(esp + 0x78u))) - ST0;
/* fff9b8: fstp qword ptr [esp + 0x78] */
  WF64((uint32_t)(esp + 0x78u), ST0); FPOP();
/* fff9bc: fild dword ptr [esp + 0x58] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* fff9c0: fstp qword ptr [esp + 0x58] */
  WF64((uint32_t)(esp + 0x58u), ST0); FPOP();
/* fff9c4: fld qword ptr [esp + 0x58] */
  { double v = F64((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* fff9c8: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* fff9cc: fmul qword ptr [esp + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x18u)));
/* fff9d0: fsubr qword ptr [esp + 0x80] */
  ST0 = (F64((uint32_t)(esp + 0x80u))) - ST0;
/* fff9d7: fstp qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0); FPOP();
/* fff9de: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* fff9e2: fmul qword ptr [esp + 0xb8] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0xb8u)));
/* fff9e9: fsubr qword ptr [esp + 0x88] */
  ST0 = (F64((uint32_t)(esp + 0x88u))) - ST0;
/* fff9f0: fstp qword ptr [esp + 0x88] */
  WF64((uint32_t)(esp + 0x88u), ST0); FPOP();
/* fff9f7: jl 0xfff916 */
  if ((sf != of)) goto L_fff916;
L_fff9fd: /* fff9fd: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
L_fffa01: /* fffa01: fld qword ptr [esp + 0x68] */
  { double v = F64((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* fffa05: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* fffa09: fcomp qword ptr [0x100a678] */
  fpu_com(ST0, F64((uint32_t)(0x100a678u)));
  FPOP();
/* fffa0f: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* fffa13: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fffa15: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* fffa18: jne 0xfffab1 */
  if (!zf) goto L_fffab1;
L_fffa1e: /* fffa1e: fld qword ptr [esp + 0x68] */
  { double v = F64((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* fffa22: fmul qword ptr [esp + 0x98] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x98u)));
/* fffa29: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* fffa2d: fmul qword ptr [esp + 0x50] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x50u)));
/* fffa31: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* fffa33: fdivr qword ptr [0x100a0d0] */
  ST0 = (F64((uint32_t)(0x100a0d0u))) / ST0;
/* fffa39: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* fffa3d: fld qword ptr [esp + 0x98] */
  { double v = F64((uint32_t)(esp + 0x98u)); FPUSH(v); }
/* fffa44: fmul qword ptr [esp + 0x90] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x90u)));
/* fffa4b: fld qword ptr [esp + 0xa8] */
  { double v = F64((uint32_t)(esp + 0xa8u)); FPUSH(v); }
/* fffa52: fmul qword ptr [esp + 0x50] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x50u)));
/* fffa56: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* fffa58: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* fffa5c: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* fffa60: fld qword ptr [esp + 0x68] */
  { double v = F64((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* fffa64: fmul qword ptr [esp + 0xa8] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0xa8u)));
/* fffa6b: fld qword ptr [esp + 0x90] */
  { double v = F64((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* fffa72: fmul qword ptr [esp + 0x50] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x50u)));
/* fffa76: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* fffa78: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* fffa7c: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* fffa80: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* fffa84: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* fffa88: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* fffa8c: fmul qword ptr [esp + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x18u)));
/* fffa90: fadd qword ptr [esp + 0x30] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x30u)));
/* fffa94: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* fffa98: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* fffa9c: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* fffaa2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fffaa4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* fffaa7: jp 0xfffab1 */
  if (pf) goto L_fffab1;
L_fffaa9: /* fffaa9: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* fffaad: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
L_fffab1: /* fffab1: cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fffab4: jle 0xfffb94 */
  if ((zf || sf != of)) goto L_fffb94;
L_fffaba: /* fffaba: fld qword ptr [esp + 0x70] */
  { double v = F64((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* fffabe: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* fffac2: fcomp qword ptr [0x100a678] */
  fpu_com(ST0, F64((uint32_t)(0x100a678u)));
  FPOP();
/* fffac8: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* fffacc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffface: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* fffad1: jne 0xfffb64 */
  if (!zf) goto L_fffb64;
L_fffad7: /* fffad7: fld qword ptr [esp + 0x70] */
  { double v = F64((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* fffadb: fmul qword ptr [esp + 0x80] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x80u)));
/* fffae2: fld qword ptr [esp + 0x60] */
  { double v = F64((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* fffae6: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* fffaea: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* fffaec: fdivr qword ptr [0x100a0d0] */
  ST0 = (F64((uint32_t)(0x100a0d0u))) / ST0;
/* fffaf2: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* fffaf6: fld qword ptr [esp + 0x80] */
  { double v = F64((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* fffafd: fmul qword ptr [esp + 0x78] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x78u)));
/* fffb01: fld qword ptr [esp + 0x88] */
  { double v = F64((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* fffb08: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* fffb0c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* fffb0e: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* fffb12: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* fffb16: fld qword ptr [esp + 0x70] */
  { double v = F64((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* fffb1a: fmul qword ptr [esp + 0x88] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x88u)));
/* fffb21: fld qword ptr [esp + 0x78] */
  { double v = F64((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* fffb25: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* fffb29: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* fffb2b: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* fffb2f: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* fffb33: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* fffb37: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* fffb3b: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* fffb3f: fmul qword ptr [esp + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x18u)));
/* fffb43: fadd qword ptr [esp + 0x28] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x28u)));
/* fffb47: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* fffb4b: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* fffb4f: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* fffb55: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fffb57: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* fffb5a: jp 0xfffb64 */
  if (pf) goto L_fffb64;
L_fffb5c: /* fffb5c: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* fffb60: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
L_fffb64: /* fffb64: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* fffb68: fcomp qword ptr [esp + 0x28] */
  fpu_com(ST0, F64((uint32_t)(esp + 0x28u)));
  FPOP();
/* fffb6c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fffb6e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* fffb71: jne 0xfffb94 */
  if (!zf) goto L_fffb94;
L_fffb73: /* fffb73: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* fffb77: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* fffb7d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fffb7f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* fffb82: jne 0xfffb94 */
  if (!zf) goto L_fffb94;
L_fffb84: /* fffb84: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* fffb88: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* fffb8c: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* fffb90: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
L_fffb94: /* fffb94: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* fffb97: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* fffb9e: fsubr qword ptr [esp + 0x30] */
  ST0 = (F64((uint32_t)(esp + 0x30u))) - ST0;
/* fffba2: mov edx, dword ptr [esp + 0xd4] */
  edx = R32((uint32_t)(esp + 0xd4u));
/* fffba9: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* fffbad: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fffbb0: fstp dword ptr [edx + ecx - 4] */
  WF32((uint32_t)(edx + ecx + 0xfffffffcu), ST0); FPOP();
/* fffbb4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* fffbb5: mov dword ptr [esp + 0xa4], ecx */
  W32((uint32_t)(esp + 0xa4u), ecx);
/* fffbbc: cmp eax, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fffbbf: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* fffbc3: jl 0xfff580 */
  if ((sf != of)) goto L_fff580;
L_fffbc9: /* fffbc9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fffbca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fffbcb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* fffbcc: mov esp, ebp */
  esp = ebp;
/* fffbce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* fffbcf: ret  */
  esp += 4; SPILL(); return;
}

void f_fff577(void) {
  LOAD_REGS();
L_fff577: /* fff577: lea esp, [esp] */
  esp = (uint32_t)(esp);
/* fff57e: mov edi, edi */
  edi = edi;
L_fff580: /* fff580: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* fff584: cmp eax, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff587: jge 0xfff7af */
  if ((sf == of)) goto L_fff7af;
L_fff58d: /* fff58d: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* fff594: mov edi, dword ptr [ecx] */
  edi = R32((uint32_t)(ecx));
/* fff596: mov edx, edi */
  edx = edi;
/* fff598: and edx, 0xffff */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0xffffu);
  uint32_t r = (uint32_t)(a & b);
  edx = r;
  }
/* fff59e: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff5a0: jge 0xfff6ab */
  if ((sf == of)) goto L_fff6ab;
L_fff5a6: /* fff5a6: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* fff5a9: mov esi, eax */
  esi = eax;
/* fff5ab: fchs  */
  ST0 = -ST0;
/* fff5ad: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
/* fff5af: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* fff5b3: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
L_fff5b6: /* fff5b6: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* fff5ba: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff5bc: mov ecx, esi */
  ecx = esi;
/* fff5be: jl 0xfff5c7 */
  if ((sf != of)) goto L_fff5c7;
L_fff5c0: /* fff5c0: lea ecx, [eax*4] */
  ecx = (uint32_t)(eax*4);
L_fff5c7: /* fff5c7: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* fff5ca: fld dword ptr [ecx + eax] */
  { double v = F32((uint32_t)(ecx + eax)); FPUSH(v); }
/* fff5cd: fcomp dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
  FPOP();
/* fff5d1: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fff5d3: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* fff5d6: jp 0xfff5ec */
  if (pf) goto L_fff5ec;
L_fff5d8: /* fff5d8: mov dword ptr [esp + 0xb0], ebx */
  W32((uint32_t)(esp + 0xb0u), ebx);
/* fff5df: mov dword ptr [esp + 0xb4], 0x3ff00000 */
  W32((uint32_t)(esp + 0xb4u), 0x3ff00000u);
/* fff5ea: jmp 0xfff5fc */
  goto L_fff5fc;
L_fff5ec: /* fff5ec: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* fff5ef: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* fff5f2: fadd dword ptr [ecx + eax] */
  ST0 = ST0 + (F32((uint32_t)(ecx + eax)));
/* fff5f5: fstp qword ptr [esp + 0xb0] */
  WF64((uint32_t)(esp + 0xb0u), ST0); FPOP();
L_fff5fc: /* fff5fc: fld qword ptr [esp + 0xb0] */
  { double v = F64((uint32_t)(esp + 0xb0u)); FPUSH(v); }
/* fff603: mov eax, dword ptr [esp + 0x38] */
  eax = R32((uint32_t)(esp + 0x38u));
/* fff607: fmul qword ptr [esp + 0xb0] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0xb0u)));
/* fff60e: mov ecx, eax */
  ecx = eax;
/* fff610: imul ecx, eax */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(eax);
  ecx = (uint32_t)r;
  }
/* fff613: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* fff617: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* fff61b: fadd qword ptr [esp + 0x68] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x68u)));
/* fff61f: fstp qword ptr [esp + 0x68] */
  WF64((uint32_t)(esp + 0x68u), ST0); FPOP();
/* fff623: fild dword ptr [esp + 0x38] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* fff627: mov dword ptr [esp + 0x38], ecx */
  W32((uint32_t)(esp + 0x38u), ecx);
/* fff62b: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* fff62c: sub esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* fff62f: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff631: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* fff635: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* fff639: fmul qword ptr [esp + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x18u)));
/* fff63d: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* fff641: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* fff645: fadd qword ptr [esp + 0x50] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x50u)));
/* fff649: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* fff64d: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* fff651: fmul qword ptr [esp + 0xb0] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0xb0u)));
/* fff658: fadd qword ptr [esp + 0x90] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x90u)));
/* fff65f: fstp qword ptr [esp + 0x90] */
  WF64((uint32_t)(esp + 0x90u), ST0); FPOP();
/* fff666: fild dword ptr [esp + 0x38] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* fff66a: fstp qword ptr [esp + 0x38] */
  WF64((uint32_t)(esp + 0x38u), ST0); FPOP();
/* fff66e: fld qword ptr [esp + 0x38] */
  { double v = F64((uint32_t)(esp + 0x38u)); FPUSH(v); }
/* fff672: mov dword ptr [esp + 0x38], eax */
  W32((uint32_t)(esp + 0x38u), eax);
/* fff676: fmul qword ptr [esp + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x18u)));
/* fff67a: fadd qword ptr [esp + 0x98] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x98u)));
/* fff681: fstp qword ptr [esp + 0x98] */
  WF64((uint32_t)(esp + 0x98u), ST0); FPOP();
/* fff688: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* fff68c: fmul qword ptr [esp + 0xb0] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0xb0u)));
/* fff693: fadd qword ptr [esp + 0xa8] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0xa8u)));
/* fff69a: fstp qword ptr [esp + 0xa8] */
  WF64((uint32_t)(esp + 0xa8u), ST0); FPOP();
/* fff6a1: jl 0xfff5b6 */
  if ((sf != of)) goto L_fff5b6;
L_fff6a7: /* fff6a7: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
L_fff6ab: /* fff6ab: sar edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t c = 16;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  edi = r;
  }
/* fff6ae: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff6b0: jge 0xfff7af */
  if ((sf == of)) goto L_fff7af;
L_fff6b6: /* fff6b6: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* fff6b9: mov edx, esi */
  edx = esi;
/* fff6bb: fchs  */
  ST0 = -ST0;
/* fff6bd: neg edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(0 - a);
  edx = r;
  }
/* fff6bf: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* fff6c3: shl edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  edx = r;
  }
L_fff6c6: /* fff6c6: cmp esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff6c8: mov ecx, edx */
  ecx = edx;
/* fff6ca: jl 0xfff6d3 */
  if ((sf != of)) goto L_fff6d3;
L_fff6cc: /* fff6cc: lea ecx, [esi*4] */
  ecx = (uint32_t)(esi*4);
L_fff6d3: /* fff6d3: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* fff6d6: fld dword ptr [ecx + eax] */
  { double v = F32((uint32_t)(ecx + eax)); FPUSH(v); }
/* fff6d9: fcomp dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
  FPOP();
/* fff6dd: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fff6df: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* fff6e2: jp 0xfff6f8 */
  if (pf) goto L_fff6f8;
L_fff6e4: /* fff6e4: mov dword ptr [esp + 0xc0], ebx */
  W32((uint32_t)(esp + 0xc0u), ebx);
/* fff6eb: mov dword ptr [esp + 0xc4], 0x3ff00000 */
  W32((uint32_t)(esp + 0xc4u), 0x3ff00000u);
/* fff6f6: jmp 0xfff708 */
  goto L_fff708;
L_fff6f8: /* fff6f8: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* fff6fb: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* fff6fe: fadd dword ptr [ecx + eax] */
  ST0 = ST0 + (F32((uint32_t)(ecx + eax)));
/* fff701: fstp qword ptr [esp + 0xc0] */
  WF64((uint32_t)(esp + 0xc0u), ST0); FPOP();
L_fff708: /* fff708: fld qword ptr [esp + 0xc0] */
  { double v = F64((uint32_t)(esp + 0xc0u)); FPUSH(v); }
/* fff70f: mov ecx, esi */
  ecx = esi;
/* fff711: fmul qword ptr [esp + 0xc0] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0xc0u)));
/* fff718: imul ecx, esi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(esi);
  ecx = (uint32_t)r;
  }
/* fff71b: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* fff71f: fld qword ptr [esp + 0x68] */
  { double v = F64((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* fff723: fsub qword ptr [esp + 0x18] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x18u)));
/* fff727: fstp qword ptr [esp + 0x68] */
  WF64((uint32_t)(esp + 0x68u), ST0); FPOP();
/* fff72b: inc esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a + 1);
  esi = r;
  }
/* fff72c: fild dword ptr [esp + 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* fff730: mov dword ptr [esp + 0x40], ecx */
  W32((uint32_t)(esp + 0x40u), ecx);
/* fff734: sub edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* fff737: cmp esi, edi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff739: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* fff73d: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* fff741: fmul qword ptr [esp + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x18u)));
/* fff745: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* fff749: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* fff74d: fsub qword ptr [esp + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x10u)));
/* fff751: fstp qword ptr [esp + 0x50] */
  WF64((uint32_t)(esp + 0x50u), ST0); FPOP();
/* fff755: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* fff759: fmul qword ptr [esp + 0xc0] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0xc0u)));
/* fff760: fsubr qword ptr [esp + 0x90] */
  ST0 = (F64((uint32_t)(esp + 0x90u))) - ST0;
/* fff767: fstp qword ptr [esp + 0x90] */
  WF64((uint32_t)(esp + 0x90u), ST0); FPOP();
/* fff76e: fild dword ptr [esp + 0x40] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* fff772: fstp qword ptr [esp + 0x40] */
  WF64((uint32_t)(esp + 0x40u), ST0); FPOP();
/* fff776: fld qword ptr [esp + 0x40] */
  { double v = F64((uint32_t)(esp + 0x40u)); FPUSH(v); }
/* fff77a: mov dword ptr [esp + 0x40], esi */
  W32((uint32_t)(esp + 0x40u), esi);
/* fff77e: fmul qword ptr [esp + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x18u)));
/* fff782: fsubr qword ptr [esp + 0x98] */
  ST0 = (F64((uint32_t)(esp + 0x98u))) - ST0;
/* fff789: fstp qword ptr [esp + 0x98] */
  WF64((uint32_t)(esp + 0x98u), ST0); FPOP();
/* fff790: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* fff794: fmul qword ptr [esp + 0xc0] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0xc0u)));
/* fff79b: fsubr qword ptr [esp + 0xa8] */
  ST0 = (F64((uint32_t)(esp + 0xa8u))) - ST0;
/* fff7a2: fstp qword ptr [esp + 0xa8] */
  WF64((uint32_t)(esp + 0xa8u), ST0); FPOP();
/* fff7a9: jl 0xfff6c6 */
  if ((sf != of)) goto L_fff6c6;
L_fff7af: /* fff7af: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* fff7b2: cmp dword ptr [esp + 0x48], edx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(esp + 0x48u))); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff7b6: jge 0xfffa01 */
  if ((sf == of)) goto L_fffa01;
L_fff7bc: /* fff7bc: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* fff7bf: cmp eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff7c1: jle 0xfffa01 */
  if ((zf || sf != of)) goto L_fffa01;
L_fff7c7: /* fff7c7: mov edi, dword ptr [esp + 0x24] */
  edi = R32((uint32_t)(esp + 0x24u));
/* fff7cb: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* fff7cc: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* fff7ce: mov ecx, eax */
  ecx = eax;
/* fff7d0: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* fff7d3: sar ecx, 1 */
  { uint32_t a = (uint32_t)(ecx); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  ecx = r;
  }
/* fff7d5: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fff7d7: cmp ecx, eax */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff7d9: jle 0xfff7dd */
  if ((zf || sf != of)) goto L_fff7dd;
L_fff7db: /* fff7db: mov ecx, eax */
  ecx = eax;
L_fff7dd: /* fff7dd: mov eax, dword ptr [esp + 0x48] */
  eax = R32((uint32_t)(esp + 0x48u));
/* fff7e1: cmp eax, ecx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff7e3: jge 0xfff8eb */
  if ((sf == of)) goto L_fff8eb;
L_fff7e9: /* fff7e9: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* fff7ec: mov esi, eax */
  esi = eax;
/* fff7ee: fchs  */
  ST0 = -ST0;
/* fff7f0: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
/* fff7f2: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* fff7f6: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
/* fff7f9: lea esp, [esp] */
  esp = (uint32_t)(esp);
L_fff800: /* fff800: mov edi, dword ptr [esp + 0x48] */
  edi = R32((uint32_t)(esp + 0x48u));
/* fff804: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff806: mov edx, esi */
  edx = esi;
/* fff808: jl 0xfff811 */
  if ((sf != of)) goto L_fff811;
L_fff80a: /* fff80a: lea edx, [edi*4] */
  edx = (uint32_t)(edi*4);
L_fff811: /* fff811: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* fff814: fld dword ptr [edx + eax] */
  { double v = F32((uint32_t)(edx + eax)); FPUSH(v); }
/* fff817: fcomp dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
  FPOP();
/* fff81b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fff81d: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* fff820: jp 0xfff836 */
  if (pf) goto L_fff836;
L_fff822: /* fff822: mov dword ptr [esp + 0xc8], ebx */
  W32((uint32_t)(esp + 0xc8u), ebx);
/* fff829: mov dword ptr [esp + 0xcc], 0x3ff00000 */
  W32((uint32_t)(esp + 0xccu), 0x3ff00000u);
/* fff834: jmp 0xfff846 */
  goto L_fff846;
L_fff836: /* fff836: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* fff839: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* fff83c: fadd dword ptr [edx + eax] */
  ST0 = ST0 + (F32((uint32_t)(edx + eax)));
/* fff83f: fstp qword ptr [esp + 0xc8] */
  WF64((uint32_t)(esp + 0xc8u), ST0); FPOP();
L_fff846: /* fff846: fld qword ptr [esp + 0xc8] */
  { double v = F64((uint32_t)(esp + 0xc8u)); FPUSH(v); }
/* fff84d: mov edx, edi */
  edx = edi;
/* fff84f: fmul qword ptr [esp + 0xc8] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0xc8u)));
/* fff856: imul edx, edi */
  { int64_t r = (int64_t)(int32_t)(edx) * (int64_t)(int32_t)(edi);
  edx = (uint32_t)r;
  }
/* fff859: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* fff85d: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* fff861: fadd qword ptr [esp + 0x70] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x70u)));
/* fff865: fstp qword ptr [esp + 0x70] */
  WF64((uint32_t)(esp + 0x70u), ST0); FPOP();
/* fff869: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* fff86a: fild dword ptr [esp + 0x48] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* fff86e: mov dword ptr [esp + 0x48], edx */
  W32((uint32_t)(esp + 0x48u), edx);
/* fff872: sub esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* fff875: cmp edi, ecx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff877: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* fff87b: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* fff87f: fmul qword ptr [esp + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x18u)));
/* fff883: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* fff887: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* fff88b: fadd qword ptr [esp + 0x60] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x60u)));
/* fff88f: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* fff893: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* fff897: fmul qword ptr [esp + 0xc8] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0xc8u)));
/* fff89e: fadd qword ptr [esp + 0x78] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x78u)));
/* fff8a2: fstp qword ptr [esp + 0x78] */
  WF64((uint32_t)(esp + 0x78u), ST0); FPOP();
/* fff8a6: fild dword ptr [esp + 0x48] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* fff8aa: fstp qword ptr [esp + 0x48] */
  WF64((uint32_t)(esp + 0x48u), ST0); FPOP();
/* fff8ae: fld qword ptr [esp + 0x48] */
  { double v = F64((uint32_t)(esp + 0x48u)); FPUSH(v); }
/* fff8b2: mov dword ptr [esp + 0x48], edi */
  W32((uint32_t)(esp + 0x48u), edi);
/* fff8b6: fmul qword ptr [esp + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x18u)));
/* fff8ba: fadd qword ptr [esp + 0x80] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x80u)));
/* fff8c1: fstp qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0); FPOP();
/* fff8c8: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* fff8cc: fmul qword ptr [esp + 0xc8] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0xc8u)));
/* fff8d3: fadd qword ptr [esp + 0x88] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x88u)));
/* fff8da: fstp qword ptr [esp + 0x88] */
  WF64((uint32_t)(esp + 0x88u), ST0); FPOP();
/* fff8e1: jl 0xfff800 */
  if ((sf != of)) goto L_fff800;
L_fff8e7: /* fff8e7: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
L_fff8eb: /* fff8eb: mov eax, dword ptr [ebp + 0x18] */
  eax = R32((uint32_t)(ebp + 0x18u));
/* fff8ee: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* fff8ef: cdq  */
  edx = (uint32_t)((int32_t)eax >> 31);
/* fff8f0: sub eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* fff8f2: mov edx, dword ptr [esp + 0x24] */
  edx = R32((uint32_t)(esp + 0x24u));
/* fff8f6: sar eax, 1 */
  { uint32_t a = (uint32_t)(eax); uint32_t c = 1;
  uint32_t r = (uint32_t)((int32_t)(int32_t)a >> c);
  eax = r;
  }
/* fff8f8: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* fff8fa: mov eax, dword ptr [esp + 0x58] */
  eax = R32((uint32_t)(esp + 0x58u));
/* fff8fe: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff900: jge 0xfffa01 */
  if ((sf == of)) goto L_fffa01;
L_fff906: /* fff906: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* fff909: mov esi, eax */
  esi = eax;
/* fff90b: fchs  */
  ST0 = -ST0;
/* fff90d: neg esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(0 - a);
  esi = r;
  }
/* fff90f: fstp dword ptr [esp + 0x20] */
  WF32((uint32_t)(esp + 0x20u), ST0); FPOP();
/* fff913: shl esi, 2 */
  { uint32_t a = (uint32_t)(esi); uint32_t c = 2;
  uint32_t r = (uint32_t)((uint32_t)a << c);
  esi = r;
  }
L_fff916: /* fff916: mov edi, dword ptr [esp + 0x58] */
  edi = R32((uint32_t)(esp + 0x58u));
/* fff91a: cmp edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff91c: mov ecx, esi */
  ecx = esi;
/* fff91e: jl 0xfff927 */
  if ((sf != of)) goto L_fff927;
L_fff920: /* fff920: lea ecx, [edi*4] */
  ecx = (uint32_t)(edi*4);
L_fff927: /* fff927: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* fff92a: fld dword ptr [ecx + eax] */
  { double v = F32((uint32_t)(ecx + eax)); FPUSH(v); }
/* fff92d: fcomp dword ptr [esp + 0x20] */
  fpu_com(ST0, F32((uint32_t)(esp + 0x20u)));
  FPOP();
/* fff931: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fff933: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* fff936: jp 0xfff94c */
  if (pf) goto L_fff94c;
L_fff938: /* fff938: mov dword ptr [esp + 0xb8], ebx */
  W32((uint32_t)(esp + 0xb8u), ebx);
/* fff93f: mov dword ptr [esp + 0xbc], 0x3ff00000 */
  W32((uint32_t)(esp + 0xbcu), 0x3ff00000u);
/* fff94a: jmp 0xfff95c */
  goto L_fff95c;
L_fff94c: /* fff94c: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* fff94f: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* fff952: fadd dword ptr [ecx + eax] */
  ST0 = ST0 + (F32((uint32_t)(ecx + eax)));
/* fff955: fstp qword ptr [esp + 0xb8] */
  WF64((uint32_t)(esp + 0xb8u), ST0); FPOP();
L_fff95c: /* fff95c: fld qword ptr [esp + 0xb8] */
  { double v = F64((uint32_t)(esp + 0xb8u)); FPUSH(v); }
/* fff963: mov ecx, edi */
  ecx = edi;
/* fff965: fmul qword ptr [esp + 0xb8] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0xb8u)));
/* fff96c: imul ecx, edi */
  { int64_t r = (int64_t)(int32_t)(ecx) * (int64_t)(int32_t)(edi);
  ecx = (uint32_t)r;
  }
/* fff96f: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* fff973: fld qword ptr [esp + 0x70] */
  { double v = F64((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* fff977: fsub qword ptr [esp + 0x18] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x18u)));
/* fff97b: fstp qword ptr [esp + 0x70] */
  WF64((uint32_t)(esp + 0x70u), ST0); FPOP();
/* fff97f: inc edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + 1);
  edi = r;
  }
/* fff980: fild dword ptr [esp + 0x58] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* fff984: mov dword ptr [esp + 0x58], ecx */
  W32((uint32_t)(esp + 0x58u), ecx);
/* fff988: sub esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* fff98b: cmp edi, edx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fff98d: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* fff991: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* fff995: fmul qword ptr [esp + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x18u)));
/* fff999: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* fff99d: fld qword ptr [esp + 0x60] */
  { double v = F64((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* fff9a1: fsub qword ptr [esp + 0x10] */
  ST0 = ST0 - (F64((uint32_t)(esp + 0x10u)));
/* fff9a5: fstp qword ptr [esp + 0x60] */
  WF64((uint32_t)(esp + 0x60u), ST0); FPOP();
/* fff9a9: fld qword ptr [esp + 0x18] */
  { double v = F64((uint32_t)(esp + 0x18u)); FPUSH(v); }
/* fff9ad: fmul qword ptr [esp + 0xb8] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0xb8u)));
/* fff9b4: fsubr qword ptr [esp + 0x78] */
  ST0 = (F64((uint32_t)(esp + 0x78u))) - ST0;
/* fff9b8: fstp qword ptr [esp + 0x78] */
  WF64((uint32_t)(esp + 0x78u), ST0); FPOP();
/* fff9bc: fild dword ptr [esp + 0x58] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* fff9c0: fstp qword ptr [esp + 0x58] */
  WF64((uint32_t)(esp + 0x58u), ST0); FPOP();
/* fff9c4: fld qword ptr [esp + 0x58] */
  { double v = F64((uint32_t)(esp + 0x58u)); FPUSH(v); }
/* fff9c8: mov dword ptr [esp + 0x58], edi */
  W32((uint32_t)(esp + 0x58u), edi);
/* fff9cc: fmul qword ptr [esp + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x18u)));
/* fff9d0: fsubr qword ptr [esp + 0x80] */
  ST0 = (F64((uint32_t)(esp + 0x80u))) - ST0;
/* fff9d7: fstp qword ptr [esp + 0x80] */
  WF64((uint32_t)(esp + 0x80u), ST0); FPOP();
/* fff9de: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* fff9e2: fmul qword ptr [esp + 0xb8] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0xb8u)));
/* fff9e9: fsubr qword ptr [esp + 0x88] */
  ST0 = (F64((uint32_t)(esp + 0x88u))) - ST0;
/* fff9f0: fstp qword ptr [esp + 0x88] */
  WF64((uint32_t)(esp + 0x88u), ST0); FPOP();
/* fff9f7: jl 0xfff916 */
  if ((sf != of)) goto L_fff916;
L_fff9fd: /* fff9fd: mov esi, dword ptr [esp + 0x40] */
  esi = R32((uint32_t)(esp + 0x40u));
L_fffa01: /* fffa01: fld qword ptr [esp + 0x68] */
  { double v = F64((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* fffa05: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* fffa09: fcomp qword ptr [0x100a678] */
  fpu_com(ST0, F64((uint32_t)(0x100a678u)));
  FPOP();
/* fffa0f: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
/* fffa13: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fffa15: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* fffa18: jne 0xfffab1 */
  if (!zf) goto L_fffab1;
L_fffa1e: /* fffa1e: fld qword ptr [esp + 0x68] */
  { double v = F64((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* fffa22: fmul qword ptr [esp + 0x98] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x98u)));
/* fffa29: fld qword ptr [esp + 0x50] */
  { double v = F64((uint32_t)(esp + 0x50u)); FPUSH(v); }
/* fffa2d: fmul qword ptr [esp + 0x50] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x50u)));
/* fffa31: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* fffa33: fdivr qword ptr [0x100a0d0] */
  ST0 = (F64((uint32_t)(0x100a0d0u))) / ST0;
/* fffa39: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* fffa3d: fld qword ptr [esp + 0x98] */
  { double v = F64((uint32_t)(esp + 0x98u)); FPUSH(v); }
/* fffa44: fmul qword ptr [esp + 0x90] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x90u)));
/* fffa4b: fld qword ptr [esp + 0xa8] */
  { double v = F64((uint32_t)(esp + 0xa8u)); FPUSH(v); }
/* fffa52: fmul qword ptr [esp + 0x50] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x50u)));
/* fffa56: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* fffa58: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* fffa5c: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* fffa60: fld qword ptr [esp + 0x68] */
  { double v = F64((uint32_t)(esp + 0x68u)); FPUSH(v); }
/* fffa64: fmul qword ptr [esp + 0xa8] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0xa8u)));
/* fffa6b: fld qword ptr [esp + 0x90] */
  { double v = F64((uint32_t)(esp + 0x90u)); FPUSH(v); }
/* fffa72: fmul qword ptr [esp + 0x50] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x50u)));
/* fffa76: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* fffa78: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* fffa7c: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* fffa80: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* fffa84: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* fffa88: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* fffa8c: fmul qword ptr [esp + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x18u)));
/* fffa90: fadd qword ptr [esp + 0x30] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x30u)));
/* fffa94: fstp qword ptr [esp + 0x30] */
  WF64((uint32_t)(esp + 0x30u), ST0); FPOP();
/* fffa98: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* fffa9c: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* fffaa2: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fffaa4: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* fffaa7: jp 0xfffab1 */
  if (pf) goto L_fffab1;
L_fffaa9: /* fffaa9: mov dword ptr [esp + 0x30], ebx */
  W32((uint32_t)(esp + 0x30u), ebx);
/* fffaad: mov dword ptr [esp + 0x34], ebx */
  W32((uint32_t)(esp + 0x34u), ebx);
L_fffab1: /* fffab1: cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t a = (uint32_t)(R32((uint32_t)(ebp + 0x18u))); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fffab4: jle 0xfffb94 */
  if ((zf || sf != of)) goto L_fffb94;
L_fffaba: /* fffaba: fld qword ptr [esp + 0x70] */
  { double v = F64((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* fffabe: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* fffac2: fcomp qword ptr [0x100a678] */
  fpu_com(ST0, F64((uint32_t)(0x100a678u)));
  FPOP();
/* fffac8: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
/* fffacc: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffface: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* fffad1: jne 0xfffb64 */
  if (!zf) goto L_fffb64;
L_fffad7: /* fffad7: fld qword ptr [esp + 0x70] */
  { double v = F64((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* fffadb: fmul qword ptr [esp + 0x80] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x80u)));
/* fffae2: fld qword ptr [esp + 0x60] */
  { double v = F64((uint32_t)(esp + 0x60u)); FPUSH(v); }
/* fffae6: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* fffaea: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* fffaec: fdivr qword ptr [0x100a0d0] */
  ST0 = (F64((uint32_t)(0x100a0d0u))) / ST0;
/* fffaf2: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* fffaf6: fld qword ptr [esp + 0x80] */
  { double v = F64((uint32_t)(esp + 0x80u)); FPUSH(v); }
/* fffafd: fmul qword ptr [esp + 0x78] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x78u)));
/* fffb01: fld qword ptr [esp + 0x88] */
  { double v = F64((uint32_t)(esp + 0x88u)); FPUSH(v); }
/* fffb08: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* fffb0c: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* fffb0e: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* fffb12: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* fffb16: fld qword ptr [esp + 0x70] */
  { double v = F64((uint32_t)(esp + 0x70u)); FPUSH(v); }
/* fffb1a: fmul qword ptr [esp + 0x88] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x88u)));
/* fffb21: fld qword ptr [esp + 0x78] */
  { double v = F64((uint32_t)(esp + 0x78u)); FPUSH(v); }
/* fffb25: fmul qword ptr [esp + 0x60] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x60u)));
/* fffb29: fsubp st(1) */
  STI(1) = STI(1) - ST0;
  FPOP();
/* fffb2b: fmul qword ptr [esp + 0x10] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x10u)));
/* fffb2f: fstp qword ptr [esp + 0x18] */
  WF64((uint32_t)(esp + 0x18u), ST0); FPOP();
/* fffb33: fild dword ptr [esp + 0x24] */
  { double v = (double)(int32_t)R32((uint32_t)(esp + 0x24u)); FPUSH(v); }
/* fffb37: fstp qword ptr [esp + 0x10] */
  WF64((uint32_t)(esp + 0x10u), ST0); FPOP();
/* fffb3b: fld qword ptr [esp + 0x10] */
  { double v = F64((uint32_t)(esp + 0x10u)); FPUSH(v); }
/* fffb3f: fmul qword ptr [esp + 0x18] */
  ST0 = ST0 * (F64((uint32_t)(esp + 0x18u)));
/* fffb43: fadd qword ptr [esp + 0x28] */
  ST0 = ST0 + (F64((uint32_t)(esp + 0x28u)));
/* fffb47: fstp qword ptr [esp + 0x28] */
  WF64((uint32_t)(esp + 0x28u), ST0); FPOP();
/* fffb4b: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* fffb4f: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* fffb55: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fffb57: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* fffb5a: jp 0xfffb64 */
  if (pf) goto L_fffb64;
L_fffb5c: /* fffb5c: mov dword ptr [esp + 0x28], ebx */
  W32((uint32_t)(esp + 0x28u), ebx);
/* fffb60: mov dword ptr [esp + 0x2c], ebx */
  W32((uint32_t)(esp + 0x2cu), ebx);
L_fffb64: /* fffb64: fld qword ptr [esp + 0x30] */
  { double v = F64((uint32_t)(esp + 0x30u)); FPUSH(v); }
/* fffb68: fcomp qword ptr [esp + 0x28] */
  fpu_com(ST0, F64((uint32_t)(esp + 0x28u)));
  FPOP();
/* fffb6c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fffb6e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* fffb71: jne 0xfffb94 */
  if (!zf) goto L_fffb94;
L_fffb73: /* fffb73: fld qword ptr [esp + 0x28] */
  { double v = F64((uint32_t)(esp + 0x28u)); FPUSH(v); }
/* fffb77: fcomp qword ptr [0x100a110] */
  fpu_com(ST0, F64((uint32_t)(0x100a110u)));
  FPOP();
/* fffb7d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fffb7f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* fffb82: jne 0xfffb94 */
  if (!zf) goto L_fffb94;
L_fffb84: /* fffb84: mov edx, dword ptr [esp + 0x28] */
  edx = R32((uint32_t)(esp + 0x28u));
/* fffb88: mov eax, dword ptr [esp + 0x2c] */
  eax = R32((uint32_t)(esp + 0x2cu));
/* fffb8c: mov dword ptr [esp + 0x30], edx */
  W32((uint32_t)(esp + 0x30u), edx);
/* fffb90: mov dword ptr [esp + 0x34], eax */
  W32((uint32_t)(esp + 0x34u), eax);
L_fffb94: /* fffb94: fld dword ptr [ebp + 0x14] */
  { double v = F32((uint32_t)(ebp + 0x14u)); FPUSH(v); }
/* fffb97: mov ecx, dword ptr [esp + 0xa4] */
  ecx = R32((uint32_t)(esp + 0xa4u));
/* fffb9e: fsubr qword ptr [esp + 0x30] */
  ST0 = (F64((uint32_t)(esp + 0x30u))) - ST0;
/* fffba2: mov edx, dword ptr [esp + 0xd4] */
  edx = R32((uint32_t)(esp + 0xd4u));
/* fffba9: mov eax, dword ptr [esp + 0x24] */
  eax = R32((uint32_t)(esp + 0x24u));
/* fffbad: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fffbb0: fstp dword ptr [edx + ecx - 4] */
  WF32((uint32_t)(edx + ecx + 0xfffffffcu), ST0); FPOP();
/* fffbb4: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* fffbb5: mov dword ptr [esp + 0xa4], ecx */
  W32((uint32_t)(esp + 0xa4u), ecx);
/* fffbbc: cmp eax, dword ptr [ebp + 8] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x8u)));
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fffbbf: mov dword ptr [esp + 0x24], eax */
  W32((uint32_t)(esp + 0x24u), eax);
/* fffbc3: jl 0xfff580 */
  if ((sf != of)) goto L_fff580;
L_fffbc9: /* fffbc9: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fffbca: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* fffbcb: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* fffbcc: mov esp, ebp */
  esp = ebp;
/* fffbce: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* fffbcf: ret  */
  esp += 4; SPILL(); return;
}

void f_fffbd0(void) {
  LOAD_REGS();
L_fffbd0: /* fffbd0: mov eax, dword ptr [esp + 4] */
  eax = R32((uint32_t)(esp + 0x4u));
/* fffbd4: mov eax, dword ptr [eax] */
  eax = R32((uint32_t)(eax));
/* fffbd6: test eax, eax */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* fffbd8: jle 0xfffc18 */
  if ((zf || sf != of)) goto L_fffc18;
L_fffbda: /* fffbda: mov ecx, dword ptr [esp + 8] */
  ecx = R32((uint32_t)(esp + 0x8u));
/* fffbde: mov edx, dword ptr [esp + 0x10] */
  edx = R32((uint32_t)(esp + 0x10u));
/* fffbe2: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fffbe3: mov esi, dword ptr [esp + 0x10] */
  esi = R32((uint32_t)(esp + 0x10u));
/* fffbe7: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fffbe8: sub esi, ecx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
/* fffbea: sub edx, ecx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* fffbec: mov edi, eax */
  edi = eax;
/* fffbee: mov edi, edi */
  edi = edi;
L_fffbf0: /* fffbf0: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* fffbf2: fcomp dword ptr [0x100a0c4] */
  fpu_com(ST0, F32((uint32_t)(0x100a0c4u)));
  FPOP();
/* fffbf8: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* fffbfa: test ah, 0x44 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x44u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* fffbfd: jnp 0xfffc09 */
  if (!pf) goto L_fffc09;
L_fffbff: /* fffbff: fld dword ptr [ecx] */
  { double v = F32((uint32_t)(ecx)); FPUSH(v); }
/* fffc01: fdiv dword ptr [esi + ecx] */
  ST0 = ST0 / (F32((uint32_t)(esi + ecx)));
/* fffc04: fstp dword ptr [edx + ecx] */
  WF32((uint32_t)(edx + ecx), ST0); FPOP();
/* fffc07: jmp 0xfffc10 */
  goto L_fffc10;
L_fffc09: /* fffc09: mov dword ptr [edx + ecx], 0 */
  W32((uint32_t)(edx + ecx), 0x0u);
L_fffc10: /* fffc10: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fffc13: dec edi */
  { uint32_t a = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  edi = r;
  }
/* fffc14: jne 0xfffbf0 */
  if (!zf) goto L_fffbf0;
L_fffc16: /* fffc16: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* fffc17: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
L_fffc18: /* fffc18: ret  */
  esp += 4; SPILL(); return;
}

void f_fffc20(void) {
  LOAD_REGS();
L_fffc20: /* fffc20: push ebp */
  { uint32_t v = ebp; esp -= 4; W32(esp, v); }
/* fffc21: mov ebp, esp */
  ebp = esp;
/* fffc23: sub esp, 0x2c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x2cu);
  uint32_t r = (uint32_t)(a - b);
  esp = r;
  }
/* fffc26: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* fffc27: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fffc28: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fffc29: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* fffc2c: mov ebx, dword ptr [edi + 0x2c] */
  ebx = R32((uint32_t)(edi + 0x2cu));
/* fffc2f: mov esi, dword ptr [edi] */
  esi = R32((uint32_t)(edi));
/* fffc31: lea eax, [ebx*4] */
  eax = (uint32_t)(ebx*4);
/* fffc38: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fffc3b: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* fffc3e: call 0x1009200 */
  esp -= 4; W32(esp, 0xfffc43u); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* fffc43: mov ecx, esp */
  ecx = esp;
/* fffc45: xor eax, eax */
  eax = 0;
/* fffc47: test ebx, ebx */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* fffc49: mov dword ptr [ebp - 0x24], ecx */
  W32((uint32_t)(ebp + 0xffffffdcu), ecx);
/* fffc4c: jle 0xfffc5f */
  if ((zf || sf != of)) goto L_fffc5f;
L_fffc4e: /* fffc4e: mov edi, edi */
  edi = edi;
L_fffc50: /* fffc50: mov dword ptr [ecx + eax*4], 0xc61c3c00 */
  W32((uint32_t)(ecx + eax*4), 0xc61c3c00u);
/* fffc57: mov edx, dword ptr [edi + 0x2c] */
  edx = R32((uint32_t)(edi + 0x2cu));
/* fffc5a: inc eax */
  { uint32_t a = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a + 1);
  eax = r;
  }
/* fffc5b: cmp eax, edx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fffc5d: jl 0xfffc50 */
  if ((sf != of)) goto L_fffc50;
L_fffc5f: /* fffc5f: mov eax, dword ptr [edi + 4] */
  eax = R32((uint32_t)(edi + 0x4u));
/* fffc62: mov ecx, dword ptr [eax + 0x660] */
  ecx = R32((uint32_t)(eax + 0x660u));
/* fffc68: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* fffc6a: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
/* fffc6d: je 0x10001c3 */
  if (zf) goto L_10001c3;
L_fffc73: /* fffc73: lea eax, [esi*4] */
  eax = (uint32_t)(esi*4);
/* fffc7a: add eax, 3 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fffc7d: and eax, 0xfffffffc */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0xfffffffcu);
  uint32_t r = (uint32_t)(a & b);
  eax = r;
  }
/* fffc80: call 0x1009200 */
  esp -= 4; W32(esp, 0xfffc85u); SPILL(); f_1009200(); if (g_unwind) return; RELOAD();
/* fffc85: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* fffc88: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* fffc8b: mov edi, esp */
  edi = esp;
/* fffc8d: push -1 */
  { uint32_t v = 0xffffffffu; esp -= 4; W32(esp, v); }
/* fffc8f: push 0x430c0000 */
  { uint32_t v = 0x430c0000u; esp -= 4; W32(esp, v); }
/* fffc94: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* fffc95: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* fffc96: mov ecx, dword ptr [edx + 0x1c] */
  ecx = R32((uint32_t)(edx + 0x1cu));
/* fffc99: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fffc9a: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* fffc9d: call 0xfff4c0 */
  esp -= 4; W32(esp, 0xfffca2u); SPILL(); f_fff4c0(); if (g_unwind) return; RELOAD();
/* fffca2: xor edx, edx */
  edx = 0;
/* fffca4: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fffca7: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fffcaa: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* fffcad: jl 0xfffd26 */
  if ((sf != of)) goto L_fffd26;
L_fffcaf: /* fffcaf: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* fffcb2: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* fffcb4: mov dword ptr [ebp - 0xc], edx */
  W32((uint32_t)(ebp + 0xfffffff4u), edx);
/* fffcb7: mov edx, edi */
  edx = edi;
/* fffcb9: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* fffcbb: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* fffcbe: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* fffcc1: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* fffcc3: mov dword ptr [ebp - 0x10], edx */
  W32((uint32_t)(ebp + 0xfffffff0u), edx);
/* fffcc6: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* fffcc9: mov dword ptr [ebp - 0x18], 3 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3u);
/* fffcd0: lea ecx, [edi + 8] */
  ecx = (uint32_t)(edi + 0x8u);
/* fffcd3: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
L_fffcd6: /* fffcd6: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* fffcd9: fld dword ptr [edi + edx*4] */
  { double v = F32((uint32_t)(edi + edx*4)); FPUSH(v); }
/* fffcdc: mov edi, dword ptr [ebp - 0xc] */
  edi = R32((uint32_t)(ebp + 0xfffffff4u));
/* fffcdf: fsub dword ptr [eax - 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffffcu)));
/* fffce2: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* fffce5: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fffce8: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fffceb: fstp dword ptr [ecx - 0x18] */
  WF32((uint32_t)(ecx + 0xffffffe8u), ST0); FPOP();
/* fffcee: fld dword ptr [edi + eax - 0x10] */
  { double v = F32((uint32_t)(edi + eax + 0xfffffff0u)); FPUSH(v); }
/* fffcf2: mov edi, dword ptr [ebp - 8] */
  edi = R32((uint32_t)(ebp + 0xfffffff8u));
/* fffcf5: fsub dword ptr [eax - 0x10] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffff0u)));
/* fffcf8: fstp dword ptr [edi + eax - 0x10] */
  WF32((uint32_t)(edi + eax + 0xfffffff0u), ST0); FPOP();
/* fffcfc: mov edi, dword ptr [ebp - 0x10] */
  edi = R32((uint32_t)(ebp + 0xfffffff0u));
/* fffcff: fld dword ptr [edi + ecx - 0x10] */
  { double v = F32((uint32_t)(edi + ecx + 0xfffffff0u)); FPUSH(v); }
/* fffd03: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* fffd06: fsub dword ptr [eax - 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffff4u)));
/* fffd09: fstp dword ptr [ecx - 0x10] */
  WF32((uint32_t)(ecx + 0xfffffff0u), ST0); FPOP();
/* fffd0c: fld dword ptr [edi + edx*4 - 4] */
  { double v = F32((uint32_t)(edi + edx*4 + 0xfffffffcu)); FPUSH(v); }
/* fffd10: mov edi, dword ptr [ebp - 0x18] */
  edi = R32((uint32_t)(ebp + 0xffffffe8u));
/* fffd13: fsub dword ptr [eax - 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffff8u)));
/* fffd16: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* fffd19: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fffd1b: mov dword ptr [ebp - 0x18], edi */
  W32((uint32_t)(ebp + 0xffffffe8u), edi);
/* fffd1e: fstp dword ptr [ecx - 0xc] */
  WF32((uint32_t)(ecx + 0xfffffff4u), ST0); FPOP();
/* fffd21: jl 0xfffcd6 */
  if ((sf != of)) goto L_fffcd6;
L_fffd23: /* fffd23: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
L_fffd26: /* fffd26: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fffd28: jge 0xfffd55 */
  if ((sf == of)) goto L_fffd55;
L_fffd2a: /* fffd2a: mov ecx, dword ptr [ebp + 0x10] */
  ecx = R32((uint32_t)(ebp + 0x10u));
/* fffd2d: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* fffd2f: mov dword ptr [ebp - 0xc], ecx */
  W32((uint32_t)(ebp + 0xfffffff4u), ecx);
/* fffd32: mov ecx, edi */
  ecx = edi;
/* fffd34: sub ecx, ebx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* fffd36: mov dword ptr [ebp - 8], ecx */
  W32((uint32_t)(ebp + 0xfffffff8u), ecx);
/* fffd39: mov ecx, esi */
  ecx = esi;
/* fffd3b: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* fffd3e: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
L_fffd40: /* fffd40: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* fffd43: fld dword ptr [eax + edx] */
  { double v = F32((uint32_t)(eax + edx)); FPUSH(v); }
/* fffd46: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* fffd49: fsub dword ptr [eax] */
  ST0 = ST0 - (F32((uint32_t)(eax)));
/* fffd4b: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fffd4e: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* fffd4f: fstp dword ptr [eax + edx - 4] */
  WF32((uint32_t)(eax + edx + 0xfffffffcu), ST0); FPOP();
/* fffd53: jne 0xfffd40 */
  if (!zf) goto L_fffd40;
L_fffd55: /* fffd55: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* fffd58: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* fffd5b: mov edx, dword ptr [ecx + 0x678] */
  edx = R32((uint32_t)(ecx + 0x678u));
/* fffd61: mov ecx, dword ptr [eax + 0x1c] */
  ecx = R32((uint32_t)(eax + 0x1cu));
/* fffd64: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* fffd65: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* fffd67: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* fffd68: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fffd69: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fffd6a: call 0xfff4c0 */
  esp -= 4; W32(esp, 0xfffd6fu); SPILL(); f_fff4c0(); if (g_unwind) return; RELOAD();
/* fffd6f: xor eax, eax */
  eax = 0;
/* fffd71: add esp, 0x14 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x14u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fffd74: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fffd77: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* fffd7a: jl 0xfffdda */
  if ((sf != of)) goto L_fffdda;
L_fffd7c: /* fffd7c: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* fffd7f: lea ecx, [edx + 0xc] */
  ecx = (uint32_t)(edx + 0xcu);
/* fffd82: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* fffd84: mov dword ptr [ebp - 0x18], 3 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3u);
/* fffd8b: lea eax, [edi + 4] */
  eax = (uint32_t)(edi + 0x4u);
/* fffd8e: mov dword ptr [ebp - 0x10], edx */
  W32((uint32_t)(ebp + 0xfffffff0u), edx);
/* fffd91: jmp 0xfffd96 */
  goto L_fffd96;
L_fffd93: /* fffd93: mov edx, dword ptr [ebp - 0x10] */
  edx = R32((uint32_t)(ebp + 0xfffffff0u));
L_fffd96: /* fffd96: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* fffd99: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fffd9c: fsub dword ptr [eax - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xffffffecu)));
/* fffd9f: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fffda2: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* fffda5: fld dword ptr [eax + edx - 0x10] */
  { double v = F32((uint32_t)(eax + edx + 0xfffffff0u)); FPUSH(v); }
/* fffda9: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* fffdac: fsub dword ptr [eax - 0x10] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffff0u)));
/* fffdaf: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* fffdb2: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* fffdb5: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* fffdb8: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* fffdbb: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* fffdbe: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fffdc0: fld dword ptr [ecx - 0x14] */
  { double v = F32((uint32_t)(ecx + 0xffffffecu)); FPUSH(v); }
/* fffdc3: fsub dword ptr [eax - 0xc] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffff4u)));
/* fffdc6: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* fffdc9: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* fffdcc: fld dword ptr [ecx - 0x10] */
  { double v = F32((uint32_t)(ecx + 0xfffffff0u)); FPUSH(v); }
/* fffdcf: fsub dword ptr [eax - 8] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffff8u)));
/* fffdd2: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* fffdd5: jl 0xfffd93 */
  if ((sf != of)) goto L_fffd93;
L_fffdd7: /* fffdd7: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
L_fffdda: /* fffdda: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fffddc: jge 0xfffdff */
  if ((sf == of)) goto L_fffdff;
L_fffdde: /* fffdde: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* fffde1: mov ecx, esi */
  ecx = esi;
/* fffde3: sub edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* fffde5: sub ecx, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* fffde8: lea eax, [edi + eax*4] */
  eax = (uint32_t)(edi + eax*4);
/* fffdeb: jmp 0xfffdf0 */
  goto L_fffdf0;
L_fffdf0: /* fffdf0: fld dword ptr [eax + edx] */
  { double v = F32((uint32_t)(eax + edx)); FPUSH(v); }
/* fffdf3: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fffdf6: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* fffdf7: fsub dword ptr [eax - 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffffcu)));
/* fffdfa: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* fffdfd: jne 0xfffdf0 */
  if (!zf) goto L_fffdf0;
L_fffdff: /* fffdff: mov eax, dword ptr [0x100d1f0] */
  eax = R32((uint32_t)(0x100d1f0u));
/* fffe04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* fffe06: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* fffe08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fffe09: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fffe0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fffe0b: push 0x100a698 */
  { uint32_t v = 0x100a698u; esp -= 4; W32(esp, v); }
/* fffe10: call 0x1008e80 */
  esp -= 4; W32(esp, 0xfffe15u); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* fffe15: xor eax, eax */
  eax = 0;
/* fffe17: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fffe1a: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fffe1d: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* fffe20: jl 0xfffe7f */
  if ((sf != of)) goto L_fffe7f;
L_fffe22: /* fffe22: mov edx, edi */
  edx = edi;
/* fffe24: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* fffe26: mov dword ptr [ebp - 0x18], 3 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3u);
/* fffe2d: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* fffe30: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* fffe33: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* fffe36: jmp 0xfffe3b */
  goto L_fffe3b;
L_fffe38: /* fffe38: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
L_fffe3b: /* fffe3b: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* fffe3e: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fffe41: fadd dword ptr [eax - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffecu)));
/* fffe44: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fffe47: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* fffe4a: fld dword ptr [eax + edx - 0x10] */
  { double v = F32((uint32_t)(eax + edx + 0xfffffff0u)); FPUSH(v); }
/* fffe4e: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* fffe51: fadd dword ptr [eax - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff0u)));
/* fffe54: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* fffe57: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* fffe5a: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* fffe5d: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* fffe60: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* fffe63: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fffe65: fld dword ptr [ecx - 0x14] */
  { double v = F32((uint32_t)(ecx + 0xffffffecu)); FPUSH(v); }
/* fffe68: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* fffe6b: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* fffe6e: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* fffe71: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* fffe74: fadd dword ptr [ecx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff0u)));
/* fffe77: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* fffe7a: jl 0xfffe38 */
  if ((sf != of)) goto L_fffe38;
L_fffe7c: /* fffe7c: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
L_fffe7f: /* fffe7f: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fffe81: jge 0xfffe9f */
  if ((sf == of)) goto L_fffe9f;
L_fffe83: /* fffe83: mov edx, edi */
  edx = edi;
/* fffe85: mov ecx, esi */
  ecx = esi;
/* fffe87: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* fffe89: sub ecx, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* fffe8c: lea eax, [ebx + eax*4] */
  eax = (uint32_t)(ebx + eax*4);
/* fffe8f: nop  */
L_fffe90: /* fffe90: fld dword ptr [eax + edx] */
  { double v = F32((uint32_t)(eax + edx)); FPUSH(v); }
/* fffe93: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fffe96: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* fffe97: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* fffe9a: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* fffe9d: jne 0xfffe90 */
  if (!zf) goto L_fffe90;
L_fffe9f: /* fffe9f: mov ecx, dword ptr [0x100d1f0] */
  ecx = R32((uint32_t)(0x100d1f0u));
/* fffea5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* fffea7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* fffea9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fffeaa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* fffeab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* fffeac: push 0x100a688 */
  { uint32_t v = 0x100a688u; esp -= 4; W32(esp, v); }
/* fffeb1: call 0x1008e80 */
  esp -= 4; W32(esp, 0xfffeb6u); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* fffeb6: xor edx, edx */
  edx = 0;
/* fffeb8: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fffebb: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fffebe: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* fffec1: jl 0xffff20 */
  if ((sf != of)) goto L_ffff20;
L_fffec3: /* fffec3: mov edx, edi */
  edx = edi;
/* fffec5: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* fffec7: mov dword ptr [ebp - 0x18], 3 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3u);
/* fffece: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* fffed1: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* fffed4: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* fffed7: jmp 0xfffedc */
  goto L_fffedc;
L_fffed9: /* fffed9: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
L_fffedc: /* fffedc: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* fffedf: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fffee2: fsub dword ptr [ecx - 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffff4u)));
/* fffee5: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fffee8: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* fffeeb: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* fffeee: fsub dword ptr [edx + eax - 0x10] */
  ST0 = ST0 - (F32((uint32_t)(edx + eax + 0xfffffff0u)));
/* fffef2: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* fffef5: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* fffef8: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* fffefb: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* fffefe: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* ffff01: fld dword ptr [eax - 0xc] */
  { double v = F32((uint32_t)(eax + 0xfffffff4u)); FPUSH(v); }
/* ffff04: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffff07: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffff09: fsub dword ptr [ecx - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xffffffecu)));
/* ffff0c: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* ffff0f: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* ffff12: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* ffff15: fsub dword ptr [ecx - 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffff0u)));
/* ffff18: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* ffff1b: jl 0xfffed9 */
  if ((sf != of)) goto L_fffed9;
L_ffff1d: /* ffff1d: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
L_ffff20: /* ffff20: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffff22: jge 0xffff3f */
  if ((sf == of)) goto L_ffff3f;
L_ffff24: /* ffff24: mov ecx, esi */
  ecx = esi;
/* ffff26: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ffff28: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* ffff2b: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ffff2d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ffff30: /* ffff30: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* ffff32: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffff35: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* ffff36: fsub dword ptr [eax + edi - 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + edi + 0xfffffffcu)));
/* ffff3a: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* ffff3d: jne 0xffff30 */
  if (!zf) goto L_ffff30;
L_ffff3f: /* ffff3f: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffff42: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ffff49: jl 0x1000124 */
  if ((sf != of)) goto L_1000124;
L_ffff4f: /* ffff4f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ffff52: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* ffff55: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffff57: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* ffff5a: mov eax, 4 */
  eax = 0x4u;
/* ffff5f: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffff61: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* ffff64: mov eax, 8 */
  eax = 0x8u;
/* ffff69: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffff6b: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* ffff6e: mov eax, 0xfffffffc */
  eax = 0xfffffffcu;
/* ffff73: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffff75: mov dword ptr [ebp - 0x20], 3 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x3u);
/* ffff7c: mov dword ptr [ebp - 0xc], edx */
  W32((uint32_t)(ebp + 0xfffffff4u), edx);
/* ffff7f: lea edi, [ebx + 4] */
  edi = (uint32_t)(ebx + 0x4u);
/* ffff82: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_ffff85: /* ffff85: fld dword ptr [edi - 4] */
  { double v = F32((uint32_t)(edi + 0xfffffffcu)); FPUSH(v); }
/* ffff88: fadd qword ptr [0x100a128] */
  ST0 = ST0 + (F64((uint32_t)(0x100a128u)));
/* ffff8e: call 0x1009188 */
  esp -= 4; W32(esp, 0xffff93u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ffff93: cmp eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffff96: jl 0xffff9d */
  if ((sf != of)) goto L_ffff9d;
L_ffff98: /* ffff98: mov eax, 0x27 */
  eax = 0x27u;
L_ffff9d: /* ffff9d: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* ffffa0: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* ffffa3: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* ffffa6: fld dword ptr [edx + eax*4 + 0x6c0] */
  { double v = F32((uint32_t)(edx + eax*4 + 0x6c0u)); FPUSH(v); }
/* ffffad: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* ffffb0: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffffb2: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* ffffb5: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* ffffb8: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ffffbb: fadd dword ptr [edx + ecx] */
  ST0 = ST0 + (F32((uint32_t)(edx + ecx)));
/* ffffbe: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* ffffc1: fadd dword ptr [ebp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x20u)));
/* ffffc4: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* ffffc7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ffffca: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* ffffcd: mov dword ptr [edi - 4], ecx */
  W32((uint32_t)(edi + 0xfffffffcu), ecx);
/* ffffd0: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* ffffd3: fcomp dword ptr [ecx + 0x664] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x664u)));
  FPOP();
/* ffffd9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffffdb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffffde: jne 0xffffe9 */
  if (!zf) goto L_ffffe9;
L_ffffe0: /* ffffe0: mov edx, dword ptr [ecx + 0x664] */
  edx = R32((uint32_t)(ecx + 0x664u));
/* ffffe6: mov dword ptr [edi - 4], edx */
  W32((uint32_t)(edi + 0xfffffffcu), edx);
L_ffffe9: /* ffffe9: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* ffffeb: fadd qword ptr [0x100a128] */
  ST0 = ST0 + (F64((uint32_t)(0x100a128u)));
/* fffff1: call 0x1009188 */
  esp -= 4; W32(esp, 0xfffff6u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* fffff6: cmp eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fffff9: jl 0x1000000 */
  if ((sf != of)) goto L_1000000;
L_fffffb: /* fffffb: mov eax, 0x27 */
  eax = 0x27u;
L_1000000: /* 1000000: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 1000003: fld dword ptr [ecx + eax*4 + 0x6c0] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x6c0u)); FPUSH(v); }
/* 100000a: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 100000d: fadd dword ptr [edi + edx] */
  ST0 = ST0 + (F32((uint32_t)(edi + edx)));
/* 1000010: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 1000013: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1000016: fadd dword ptr [ecx + eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + eax + 0x4u)));
/* 100001a: fadd dword ptr [ebp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x20u)));
/* 100001d: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 1000020: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1000023: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 1000026: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 1000028: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 100002b: fcomp dword ptr [ecx + 0x664] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x664u)));
  FPOP();
/* 1000031: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000033: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000036: jne 0x1000040 */
  if (!zf) goto L_1000040;
L_1000038: /* 1000038: mov eax, dword ptr [ecx + 0x664] */
  eax = R32((uint32_t)(ecx + 0x664u));
/* 100003e: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_1000040: /* 1000040: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 1000043: fadd qword ptr [0x100a128] */
  ST0 = ST0 + (F64((uint32_t)(0x100a128u)));
/* 1000049: call 0x1009188 */
  esp -= 4; W32(esp, 0x100004eu); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* 100004e: cmp eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000051: jl 0x1000058 */
  if ((sf != of)) goto L_1000058;
L_1000053: /* 1000053: mov eax, 0x27 */
  eax = 0x27u;
L_1000058: /* 1000058: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 100005b: fld dword ptr [ecx + eax*4 + 0x6c0] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x6c0u)); FPUSH(v); }
/* 1000062: mov edx, dword ptr [ebp - 0x10] */
  edx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1000065: mov ebx, dword ptr [ebx + 0x10] */
  ebx = R32((uint32_t)(ebx + 0x10u));
/* 1000068: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 100006b: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100006d: fadd dword ptr [edx + ebx] */
  ST0 = ST0 + (F32((uint32_t)(edx + ebx)));
/* 1000070: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 1000073: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 1000076: fadd dword ptr [ebp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x20u)));
/* 1000079: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 100007c: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 100007f: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 1000082: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 1000085: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 1000088: fcomp dword ptr [ecx + 0x664] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x664u)));
  FPOP();
/* 100008e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000090: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000093: jne 0x100009e */
  if (!zf) goto L_100009e;
L_1000095: /* 1000095: mov edx, dword ptr [ecx + 0x664] */
  edx = R32((uint32_t)(ecx + 0x664u));
/* 100009b: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
L_100009e: /* 100009e: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 10000a1: fadd qword ptr [0x100a128] */
  ST0 = ST0 + (F64((uint32_t)(0x100a128u)));
/* 10000a7: call 0x1009188 */
  esp -= 4; W32(esp, 0x10000acu); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* 10000ac: cmp eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10000af: jl 0x10000b6 */
  if ((sf != of)) goto L_10000b6;
L_10000b1: /* 10000b1: mov eax, 0x27 */
  eax = 0x27u;
L_10000b6: /* 10000b6: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 10000b9: fld dword ptr [ecx + eax*4 + 0x6c0] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x6c0u)); FPUSH(v); }
/* 10000c0: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 10000c3: mov ebx, dword ptr [ebx + 0x10] */
  ebx = R32((uint32_t)(ebx + 0x10u));
/* 10000c6: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 10000c9: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10000cb: fadd dword ptr [edx + ebx] */
  ST0 = ST0 + (F32((uint32_t)(edx + ebx)));
/* 10000ce: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 10000d1: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 10000d3: fadd dword ptr [ebp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x20u)));
/* 10000d6: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 10000d9: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 10000dc: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 10000df: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 10000e2: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 10000e5: fcomp dword ptr [ecx + 0x664] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x664u)));
  FPOP();
/* 10000eb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 10000ed: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10000f0: jne 0x10000fb */
  if (!zf) goto L_10000fb;
L_10000f2: /* 10000f2: mov eax, dword ptr [ecx + 0x664] */
  eax = R32((uint32_t)(ecx + 0x664u));
/* 10000f8: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
L_10000fb: /* 10000fb: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 10000fe: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 1000101: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1000104: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1000107: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100010a: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100010d: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1000110: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000112: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 1000115: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 1000118: mov dword ptr [ebp - 0xc], edx */
  W32((uint32_t)(ebp + 0xfffffff4u), edx);
/* 100011b: jl 0xffff85 */
  if ((sf != of)) goto L_ffff85;
L_1000121: /* 1000121: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
L_1000124: /* 1000124: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 1000127: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000129: jge 0x10001a7 */
  if ((sf == of)) goto L_10001a7;
L_100012b: /* 100012b: mov ecx, eax */
  ecx = eax;
/* 100012d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1000130: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1000132: lea edi, [ebx + ecx*4] */
  edi = (uint32_t)(ebx + ecx*4);
/* 1000135: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 1000138: jmp 0x1000140 */
  goto L_1000140;
L_1000140: /* 1000140: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 1000142: fadd qword ptr [0x100a128] */
  ST0 = ST0 + (F64((uint32_t)(0x100a128u)));
/* 1000148: call 0x1009188 */
  esp -= 4; W32(esp, 0x100014du); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* 100014d: cmp eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000150: jl 0x1000157 */
  if ((sf != of)) goto L_1000157;
L_1000152: /* 1000152: mov eax, 0x27 */
  eax = 0x27u;
L_1000157: /* 1000157: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 100015a: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 100015d: fld dword ptr [edx + eax*4 + 0x6c0] */
  { double v = F32((uint32_t)(edx + eax*4 + 0x6c0u)); FPUSH(v); }
/* 1000164: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 1000167: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 100016a: fadd dword ptr [ecx + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + edx*4)));
/* 100016d: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 1000170: fadd dword ptr [eax + edi] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi)));
/* 1000173: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 1000176: fadd dword ptr [ebp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x20u)));
/* 1000179: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 100017c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 100017f: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 1000182: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 1000184: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 1000187: fcomp dword ptr [ecx + 0x664] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x664u)));
  FPOP();
/* 100018d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 100018f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000192: jne 0x100019c */
  if (!zf) goto L_100019c;
L_1000194: /* 1000194: mov ecx, dword ptr [ecx + 0x664] */
  ecx = R32((uint32_t)(ecx + 0x664u));
/* 100019a: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
L_100019c: /* 100019c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 100019d: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10001a0: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10001a2: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 10001a5: jl 0x1000140 */
  if ((sf != of)) goto L_1000140;
L_10001a7: /* 10001a7: mov edx, dword ptr [0x100d1f0] */
  edx = R32((uint32_t)(0x100d1f0u));
/* 10001ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10001af: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 10001b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10001b2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10001b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10001b4: push 0x100a680 */
  { uint32_t v = 0x100a680u; esp -= 4; W32(esp, v); }
/* 10001b9: call 0x1008e80 */
  esp -= 4; W32(esp, 0x10001beu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* 10001be: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10001c1: jmp 0x10001d2 */
  goto L_10001d2;
L_10001c3: /* 10001c3: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10001c5: jle 0x10001d2 */
  if ((zf || sf != of)) goto L_10001d2;
L_10001c7: /* 10001c7: mov ecx, esi */
  ecx = esi;
/* 10001c9: mov eax, 0xc61c3c00 */
  eax = 0xc61c3c00u;
/* 10001ce: mov edi, ebx */
  edi = ebx;
/* 10001d0: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
L_10001d2: /* 10001d2: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 10001d5: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 10001d8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10001da: je 0x1000314 */
  if (zf) goto L_1000314;
L_10001e0: /* 10001e0: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 10001e3: fadd dword ptr [ecx + 0x6c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x6cu)));
/* 10001e6: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 10001e9: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 10001ec: fcomp dword ptr [ecx + 0x70] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x70u)));
  FPOP();
/* 10001ef: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 10001f1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 10001f4: jp 0x10001fc */
  if (pf) goto L_10001fc;
L_10001f6: /* 10001f6: mov eax, dword ptr [ecx + 0x70] */
  eax = R32((uint32_t)(ecx + 0x70u));
/* 10001f9: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
L_10001fc: /* 10001fc: xor edx, edx */
  edx = 0;
/* 10001fe: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000201: jl 0x10002e4 */
  if ((sf != of)) goto L_10002e4;
L_1000207: /* 1000207: mov eax, 4 */
  eax = 0x4u;
/* 100020c: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 100020e: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 1000211: mov eax, 0xfffffff8 */
  eax = 0xfffffff8u;
/* 1000216: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1000218: mov dword ptr [ebp - 0x20], 3 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x3u);
/* 100021f: mov dword ptr [ebp - 0x14], 8 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x8u);
/* 1000226: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 1000229: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 100022c: jmp 0x1000231 */
  goto L_1000231;
L_100022e: /* 100022e: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
L_1000231: /* 1000231: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 1000234: lea edi, [eax + ecx] */
  edi = (uint32_t)(eax + ecx);
/* 1000237: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 100023a: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 100023d: fadd dword ptr [eax + edi] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi)));
/* 1000240: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 1000243: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 1000246: fcomp dword ptr [ecx - 8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xfffffff8u)));
  FPOP();
/* 1000249: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 100024b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 100024e: jne 0x1000256 */
  if (!zf) goto L_1000256;
L_1000250: /* 1000250: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 1000253: mov dword ptr [ecx - 8], eax */
  W32((uint32_t)(ecx + 0xfffffff8u), eax);
L_1000256: /* 1000256: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 1000259: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 100025c: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 100025f: fadd dword ptr [eax + edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi + 0x4u)));
/* 1000263: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 1000266: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 1000269: fcomp dword ptr [ecx - 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xfffffffcu)));
  FPOP();
/* 100026c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 100026e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000271: jne 0x1000279 */
  if (!zf) goto L_1000279;
L_1000273: /* 1000273: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 1000276: mov dword ptr [ecx - 4], eax */
  W32((uint32_t)(ecx + 0xfffffffcu), eax);
L_1000279: /* 1000279: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 100027c: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 100027f: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 1000282: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 1000285: fadd dword ptr [eax + edi] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi)));
/* 1000288: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 100028b: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 100028e: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 1000290: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000292: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000295: jne 0x100029c */
  if (!zf) goto L_100029c;
L_1000297: /* 1000297: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 100029a: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_100029c: /* 100029c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 100029f: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 10002a2: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 10002a5: add eax, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10002a8: fadd dword ptr [eax + ecx] */
  ST0 = ST0 + (F32((uint32_t)(eax + ecx)));
/* 10002ab: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 10002ae: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 10002b1: fcomp dword ptr [ecx + 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x4u)));
  FPOP();
/* 10002b4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 10002b6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10002b9: jne 0x10002c1 */
  if (!zf) goto L_10002c1;
L_10002bb: /* 10002bb: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 10002be: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
L_10002c1: /* 10002c1: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 10002c4: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 10002c7: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10002ca: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10002cd: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10002d0: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10002d3: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10002d5: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 10002d8: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 10002db: jl 0x100022e */
  if ((sf != of)) goto L_100022e;
L_10002e1: /* 10002e1: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_10002e4: /* 10002e4: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10002e6: jge 0x1000314 */
  if ((sf == of)) goto L_1000314;
L_10002e8: /* 10002e8: jmp 0x10002f0 */
  goto L_10002f0;
L_10002f0: /* 10002f0: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 10002f3: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 10002f6: fadd dword ptr [ecx + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + edx*4)));
/* 10002f9: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 10002fc: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 10002ff: fcomp dword ptr [ebx + edx*4] */
  fpu_com(ST0, F32((uint32_t)(ebx + edx*4)));
  FPOP();
/* 1000302: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000304: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000307: jne 0x100030f */
  if (!zf) goto L_100030f;
L_1000309: /* 1000309: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 100030c: mov dword ptr [ebx + edx*4], eax */
  W32((uint32_t)(ebx + edx*4), eax);
L_100030f: /* 100030f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1000310: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000312: jl 0x10002f0 */
  if ((sf != of)) goto L_10002f0;
L_1000314: /* 1000314: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 1000317: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 100031a: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 100031d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 1000320: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 1000323: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1000324: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 1000327: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1000328: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1000329: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 100032a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 100032b: call 0xfff110 */
  esp -= 4; W32(esp, 0x1000330u); SPILL(); f_fff110(); if (g_unwind) return; RELOAD();
/* 1000330: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 1000333: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1000334: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1000335: mov edi, ebx */
  edi = ebx;
/* 1000337: call 0xfff3a0 */
  esp -= 4; W32(esp, 0x100033cu); SPILL(); f_fff3a0(); if (g_unwind) return; RELOAD();
/* 100033c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100033f: xor edx, edx */
  edx = 0;
/* 1000341: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000344: jl 0x10003a2 */
  if ((sf != of)) goto L_10003a2;
L_1000346: /* 1000346: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 1000349: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 100034c: lea ebx, [eax + 0xc] */
  ebx = (uint32_t)(eax + 0xcu);
/* 100034f: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1000352: sub eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1000355: mov edi, 3 */
  edi = 0x3u;
/* 100035a: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
L_100035d: /* 100035d: fld dword ptr [ebx - 0xc] */
  { double v = F32((uint32_t)(ebx + 0xfffffff4u)); FPUSH(v); }
/* 1000360: fcomp dword ptr [ecx - 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xfffffffcu)));
  FPOP();
/* 1000363: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000365: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000368: je 0x10003d2 */
  if (zf) goto L_10003d2;
L_100036a: /* 100036a: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 100036d: fld dword ptr [ecx + eax] */
  { double v = F32((uint32_t)(ecx + eax)); FPUSH(v); }
/* 1000370: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 1000372: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000374: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000377: je 0x10003c7 */
  if (zf) goto L_10003c7;
L_1000379: /* 1000379: fld dword ptr [ebx - 4] */
  { double v = F32((uint32_t)(ebx + 0xfffffffcu)); FPUSH(v); }
/* 100037c: fcomp dword ptr [ecx + 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x4u)));
  FPOP();
/* 100037f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000381: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000384: je 0x10003ca */
  if (zf) goto L_10003ca;
L_1000386: /* 1000386: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 1000388: fcomp dword ptr [ecx + 8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x8u)));
  FPOP();
/* 100038b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 100038d: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000390: je 0x10003cf */
  if (zf) goto L_10003cf;
L_1000392: /* 1000392: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1000395: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1000398: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100039b: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 100039e: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10003a0: jl 0x100035d */
  if ((sf != of)) goto L_100035d;
L_10003a2: /* 10003a2: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10003a4: jge 0x10003d4 */
  if ((sf == of)) goto L_10003d4;
L_10003a6: /* 10003a6: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 10003a9: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 10003ac: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 10003af: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
L_10003b1: /* 10003b1: fld dword ptr [ecx + edi] */
  { double v = F32((uint32_t)(ecx + edi)); FPUSH(v); }
/* 10003b4: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 10003b6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 10003b8: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10003bb: je 0x10003d2 */
  if (zf) goto L_10003d2;
L_10003bd: /* 10003bd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10003be: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10003c1: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10003c3: jl 0x10003b1 */
  if ((sf != of)) goto L_10003b1;
L_10003c5: /* 10003c5: jmp 0x10003d2 */
  goto L_10003d2;
L_10003c7: /* 10003c7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10003c8: jmp 0x10003d2 */
  goto L_10003d2;
L_10003ca: /* 10003ca: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10003cd: jmp 0x10003d2 */
  goto L_10003d2;
L_10003cf: /* 10003cf: add edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_10003d2: /* 10003d2: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_10003d4: /* 10003d4: jne 0x10003ef */
  if (!zf) goto L_10003ef;
L_10003d6: /* 10003d6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10003d8: jle 0x10004ae */
  if ((zf || sf != of)) goto L_10004ae;
L_10003de: /* 10003de: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 10003e1: mov ecx, esi */
  ecx = esi;
/* 10003e3: mov eax, 0xc61c3c00 */
  eax = 0xc61c3c00u;
/* 10003e8: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 10003ea: jmp 0x10004ae */
  goto L_10004ae;
L_10003ef: /* 10003ef: xor ebx, ebx */
  ebx = 0;
/* 10003f1: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10003f4: jl 0x1000482 */
  if ((sf != of)) goto L_1000482;
L_10003fa: /* 10003fa: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 10003fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 1000400: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 1000403: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1000406: sub eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1000409: mov edi, 3 */
  edi = 0x3u;
/* 100040e: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_1000411: /* 1000411: fld dword ptr [edx - 0xc] */
  { double v = F32((uint32_t)(edx + 0xfffffff4u)); FPUSH(v); }
/* 1000414: fcomp dword ptr [ecx - 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xfffffffcu)));
  FPOP();
/* 1000417: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000419: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 100041c: jne 0x1000423 */
  if (!zf) goto L_1000423;
L_100041e: /* 100041e: mov eax, dword ptr [edx - 0xc] */
  eax = R32((uint32_t)(edx + 0xfffffff4u));
/* 1000421: jmp 0x1000426 */
  goto L_1000426;
L_1000423: /* 1000423: mov eax, dword ptr [ecx - 4] */
  eax = R32((uint32_t)(ecx + 0xfffffffcu));
L_1000426: /* 1000426: mov dword ptr [ecx - 4], eax */
  W32((uint32_t)(ecx + 0xfffffffcu), eax);
/* 1000429: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 100042c: fld dword ptr [eax + ecx] */
  { double v = F32((uint32_t)(eax + ecx)); FPUSH(v); }
/* 100042f: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 1000431: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000433: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000436: jne 0x1000440 */
  if (!zf) goto L_1000440;
L_1000438: /* 1000438: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 100043b: mov eax, dword ptr [eax + ecx] */
  eax = R32((uint32_t)(eax + ecx));
/* 100043e: jmp 0x1000442 */
  goto L_1000442;
L_1000440: /* 1000440: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
L_1000442: /* 1000442: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 1000444: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* 1000447: fcomp dword ptr [ecx + 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x4u)));
  FPOP();
/* 100044a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 100044c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 100044f: jne 0x1000456 */
  if (!zf) goto L_1000456;
L_1000451: /* 1000451: mov eax, dword ptr [edx - 4] */
  eax = R32((uint32_t)(edx + 0xfffffffcu));
/* 1000454: jmp 0x1000459 */
  goto L_1000459;
L_1000456: /* 1000456: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
L_1000459: /* 1000459: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 100045c: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 100045e: fcomp dword ptr [ecx + 8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x8u)));
  FPOP();
/* 1000461: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000463: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000466: jne 0x100046c */
  if (!zf) goto L_100046c;
L_1000468: /* 1000468: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 100046a: jmp 0x100046f */
  goto L_100046f;
L_100046c: /* 100046c: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
L_100046f: /* 100046f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 1000472: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1000475: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1000478: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100047b: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100047e: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000480: jl 0x1000411 */
  if ((sf != of)) goto L_1000411;
L_1000482: /* 1000482: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000484: jge 0x10004ae */
  if ((sf == of)) goto L_10004ae;
L_1000486: /* 1000486: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 1000489: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 100048c: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 100048e: lea ecx, [eax + ebx*4] */
  ecx = (uint32_t)(eax + ebx*4);
/* 1000491: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
L_1000493: /* 1000493: fld dword ptr [ecx + edx] */
  { double v = F32((uint32_t)(ecx + edx)); FPUSH(v); }
/* 1000496: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 1000498: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 100049a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 100049d: jne 0x10004a4 */
  if (!zf) goto L_10004a4;
L_100049f: /* 100049f: mov eax, dword ptr [ecx + edx] */
  eax = R32((uint32_t)(ecx + edx));
/* 10004a2: jmp 0x10004a6 */
  goto L_10004a6;
L_10004a4: /* 10004a4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
L_10004a6: /* 10004a6: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 10004a8: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10004ab: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10004ac: jne 0x1000493 */
  if (!zf) goto L_1000493;
L_10004ae: /* 10004ae: inc dword ptr [0x100d1f0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x100d1f0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x100d1f0u), r);
  }
/* 10004b4: lea esp, [ebp - 0x38] */
  esp = (uint32_t)(ebp + 0xffffffc8u);
/* 10004b7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10004b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10004b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10004ba: mov esp, ebp */
  esp = ebp;
/* 10004bc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10004bd: ret  */
  esp += 4; SPILL(); return;
}

void f_fffded(void) {
  LOAD_REGS();
L_fffded: /* fffded: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_fffdf0: /* fffdf0: fld dword ptr [eax + edx] */
  { double v = F32((uint32_t)(eax + edx)); FPUSH(v); }
/* fffdf3: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fffdf6: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* fffdf7: fsub dword ptr [eax - 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + 0xfffffffcu)));
/* fffdfa: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* fffdfd: jne 0xfffdf0 */
  if (!zf) goto L_fffdf0;
L_fffdff: /* fffdff: mov eax, dword ptr [0x100d1f0] */
  eax = R32((uint32_t)(0x100d1f0u));
/* fffe04: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* fffe06: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* fffe08: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fffe09: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* fffe0a: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* fffe0b: push 0x100a698 */
  { uint32_t v = 0x100a698u; esp -= 4; W32(esp, v); }
/* fffe10: call 0x1008e80 */
  esp -= 4; W32(esp, 0xfffe15u); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* fffe15: xor eax, eax */
  eax = 0;
/* fffe17: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fffe1a: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fffe1d: mov dword ptr [ebp - 4], eax */
  W32((uint32_t)(ebp + 0xfffffffcu), eax);
/* fffe20: jl 0xfffe7f */
  if ((sf != of)) goto L_fffe7f;
L_fffe22: /* fffe22: mov edx, edi */
  edx = edi;
/* fffe24: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* fffe26: mov dword ptr [ebp - 0x18], 3 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3u);
/* fffe2d: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* fffe30: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* fffe33: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* fffe36: jmp 0xfffe3b */
  goto L_fffe3b;
L_fffe38: /* fffe38: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
L_fffe3b: /* fffe3b: fld dword ptr [ecx - 0xc] */
  { double v = F32((uint32_t)(ecx + 0xfffffff4u)); FPUSH(v); }
/* fffe3e: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fffe41: fadd dword ptr [eax - 0x14] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xffffffecu)));
/* fffe44: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fffe47: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* fffe4a: fld dword ptr [eax + edx - 0x10] */
  { double v = F32((uint32_t)(eax + edx + 0xfffffff0u)); FPUSH(v); }
/* fffe4e: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* fffe51: fadd dword ptr [eax - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff0u)));
/* fffe54: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* fffe57: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* fffe5a: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* fffe5d: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* fffe60: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* fffe63: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fffe65: fld dword ptr [ecx - 0x14] */
  { double v = F32((uint32_t)(ecx + 0xffffffecu)); FPUSH(v); }
/* fffe68: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* fffe6b: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* fffe6e: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* fffe71: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* fffe74: fadd dword ptr [ecx - 0x10] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0xfffffff0u)));
/* fffe77: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* fffe7a: jl 0xfffe38 */
  if ((sf != of)) goto L_fffe38;
L_fffe7c: /* fffe7c: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
L_fffe7f: /* fffe7f: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fffe81: jge 0xfffe9f */
  if ((sf == of)) goto L_fffe9f;
L_fffe83: /* fffe83: mov edx, edi */
  edx = edi;
/* fffe85: mov ecx, esi */
  ecx = esi;
/* fffe87: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* fffe89: sub ecx, dword ptr [ebp - 4] */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffffcu)));
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* fffe8c: lea eax, [ebx + eax*4] */
  eax = (uint32_t)(ebx + eax*4);
/* fffe8f: nop  */
L_fffe90: /* fffe90: fld dword ptr [eax + edx] */
  { double v = F32((uint32_t)(eax + edx)); FPUSH(v); }
/* fffe93: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fffe96: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* fffe97: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* fffe9a: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* fffe9d: jne 0xfffe90 */
  if (!zf) goto L_fffe90;
L_fffe9f: /* fffe9f: mov ecx, dword ptr [0x100d1f0] */
  ecx = R32((uint32_t)(0x100d1f0u));
/* fffea5: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* fffea7: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* fffea9: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* fffeaa: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* fffeab: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* fffeac: push 0x100a688 */
  { uint32_t v = 0x100a688u; esp -= 4; W32(esp, v); }
/* fffeb1: call 0x1008e80 */
  esp -= 4; W32(esp, 0xfffeb6u); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* fffeb6: xor edx, edx */
  edx = 0;
/* fffeb8: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* fffebb: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fffebe: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* fffec1: jl 0xffff20 */
  if ((sf != of)) goto L_ffff20;
L_fffec3: /* fffec3: mov edx, edi */
  edx = edi;
/* fffec5: sub edx, ebx */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* fffec7: mov dword ptr [ebp - 0x18], 3 */
  W32((uint32_t)(ebp + 0xffffffe8u), 0x3u);
/* fffece: lea ecx, [edi + 0xc] */
  ecx = (uint32_t)(edi + 0xcu);
/* fffed1: lea eax, [ebx + 4] */
  eax = (uint32_t)(ebx + 0x4u);
/* fffed4: mov dword ptr [ebp - 8], edx */
  W32((uint32_t)(ebp + 0xfffffff8u), edx);
/* fffed7: jmp 0xfffedc */
  goto L_fffedc;
L_fffed9: /* fffed9: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
L_fffedc: /* fffedc: fld dword ptr [eax - 4] */
  { double v = F32((uint32_t)(eax + 0xfffffffcu)); FPUSH(v); }
/* fffedf: add eax, 0x10 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* fffee2: fsub dword ptr [ecx - 0xc] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffff4u)));
/* fffee5: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* fffee8: fstp dword ptr [eax - 0x14] */
  WF32((uint32_t)(eax + 0xffffffecu), ST0); FPOP();
/* fffeeb: fld dword ptr [eax - 0x10] */
  { double v = F32((uint32_t)(eax + 0xfffffff0u)); FPUSH(v); }
/* fffeee: fsub dword ptr [edx + eax - 0x10] */
  ST0 = ST0 - (F32((uint32_t)(edx + eax + 0xfffffff0u)));
/* fffef2: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* fffef5: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* fffef8: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* fffefb: mov edx, dword ptr [ebp - 0x18] */
  edx = R32((uint32_t)(ebp + 0xffffffe8u));
/* fffefe: fstp dword ptr [eax - 0x10] */
  WF32((uint32_t)(eax + 0xfffffff0u), ST0); FPOP();
/* ffff01: fld dword ptr [eax - 0xc] */
  { double v = F32((uint32_t)(eax + 0xfffffff4u)); FPUSH(v); }
/* ffff04: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* ffff07: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffff09: fsub dword ptr [ecx - 0x14] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xffffffecu)));
/* ffff0c: mov dword ptr [ebp - 0x18], edx */
  W32((uint32_t)(ebp + 0xffffffe8u), edx);
/* ffff0f: fstp dword ptr [eax - 0xc] */
  WF32((uint32_t)(eax + 0xfffffff4u), ST0); FPOP();
/* ffff12: fld dword ptr [eax - 8] */
  { double v = F32((uint32_t)(eax + 0xfffffff8u)); FPUSH(v); }
/* ffff15: fsub dword ptr [ecx - 0x10] */
  ST0 = ST0 - (F32((uint32_t)(ecx + 0xfffffff0u)));
/* ffff18: fstp dword ptr [eax - 8] */
  WF32((uint32_t)(eax + 0xfffffff8u), ST0); FPOP();
/* ffff1b: jl 0xfffed9 */
  if ((sf != of)) goto L_fffed9;
L_ffff1d: /* ffff1d: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
L_ffff20: /* ffff20: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffff22: jge 0xffff3f */
  if ((sf == of)) goto L_ffff3f;
L_ffff24: /* ffff24: mov ecx, esi */
  ecx = esi;
/* ffff26: sub edi, ebx */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
/* ffff28: lea eax, [ebx + edx*4] */
  eax = (uint32_t)(ebx + edx*4);
/* ffff2b: sub ecx, edx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a - b);
  ecx = r;
  }
/* ffff2d: lea ecx, [ecx] */
  ecx = (uint32_t)(ecx);
L_ffff30: /* ffff30: fld dword ptr [eax] */
  { double v = F32((uint32_t)(eax)); FPUSH(v); }
/* ffff32: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* ffff35: dec ecx */
  { uint32_t a = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  ecx = r;
  }
/* ffff36: fsub dword ptr [eax + edi - 4] */
  ST0 = ST0 - (F32((uint32_t)(eax + edi + 0xfffffffcu)));
/* ffff3a: fstp dword ptr [eax - 4] */
  WF32((uint32_t)(eax + 0xfffffffcu), ST0); FPOP();
/* ffff3d: jne 0xffff30 */
  if (!zf) goto L_ffff30;
L_ffff3f: /* ffff3f: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffff42: mov dword ptr [ebp - 4], 0 */
  W32((uint32_t)(ebp + 0xfffffffcu), 0x0u);
/* ffff49: jl 0x1000124 */
  if ((sf != of)) goto L_1000124;
L_ffff4f: /* ffff4f: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* ffff52: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* ffff55: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffff57: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* ffff5a: mov eax, 4 */
  eax = 0x4u;
/* ffff5f: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffff61: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* ffff64: mov eax, 8 */
  eax = 0x8u;
/* ffff69: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffff6b: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* ffff6e: mov eax, 0xfffffffc */
  eax = 0xfffffffcu;
/* ffff73: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* ffff75: mov dword ptr [ebp - 0x20], 3 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x3u);
/* ffff7c: mov dword ptr [ebp - 0xc], edx */
  W32((uint32_t)(ebp + 0xfffffff4u), edx);
/* ffff7f: lea edi, [ebx + 4] */
  edi = (uint32_t)(ebx + 0x4u);
/* ffff82: mov dword ptr [ebp - 0x28], eax */
  W32((uint32_t)(ebp + 0xffffffd8u), eax);
L_ffff85: /* ffff85: fld dword ptr [edi - 4] */
  { double v = F32((uint32_t)(edi + 0xfffffffcu)); FPUSH(v); }
/* ffff88: fadd qword ptr [0x100a128] */
  ST0 = ST0 + (F64((uint32_t)(0x100a128u)));
/* ffff8e: call 0x1009188 */
  esp -= 4; W32(esp, 0xffff93u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* ffff93: cmp eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* ffff96: jl 0xffff9d */
  if ((sf != of)) goto L_ffff9d;
L_ffff98: /* ffff98: mov eax, 0x27 */
  eax = 0x27u;
L_ffff9d: /* ffff9d: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* ffffa0: mov ecx, dword ptr [ebp - 0x28] */
  ecx = R32((uint32_t)(ebp + 0xffffffd8u));
/* ffffa3: mov edx, dword ptr [ebx + 4] */
  edx = R32((uint32_t)(ebx + 0x4u));
/* ffffa6: fld dword ptr [edx + eax*4 + 0x6c0] */
  { double v = F32((uint32_t)(edx + eax*4 + 0x6c0u)); FPUSH(v); }
/* ffffad: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* ffffb0: add ecx, edi */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* ffffb2: mov dword ptr [ebp - 0x1c], ecx */
  W32((uint32_t)(ebp + 0xffffffe4u), ecx);
/* ffffb5: mov ecx, dword ptr [ebx + 0x10] */
  ecx = R32((uint32_t)(ebx + 0x10u));
/* ffffb8: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* ffffbb: fadd dword ptr [edx + ecx] */
  ST0 = ST0 + (F32((uint32_t)(edx + ecx)));
/* ffffbe: fadd dword ptr [eax - 0xc] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffff4u)));
/* ffffc1: fadd dword ptr [ebp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x20u)));
/* ffffc4: fstp dword ptr [ebp - 0x18] */
  WF32((uint32_t)(ebp + 0xffffffe8u), ST0); FPOP();
/* ffffc7: mov ecx, dword ptr [ebp - 0x18] */
  ecx = R32((uint32_t)(ebp + 0xffffffe8u));
/* ffffca: fld dword ptr [ebp - 0x18] */
  { double v = F32((uint32_t)(ebp + 0xffffffe8u)); FPUSH(v); }
/* ffffcd: mov dword ptr [edi - 4], ecx */
  W32((uint32_t)(edi + 0xfffffffcu), ecx);
/* ffffd0: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* ffffd3: fcomp dword ptr [ecx + 0x664] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x664u)));
  FPOP();
/* ffffd9: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* ffffdb: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* ffffde: jne 0xffffe9 */
  if (!zf) goto L_ffffe9;
L_ffffe0: /* ffffe0: mov edx, dword ptr [ecx + 0x664] */
  edx = R32((uint32_t)(ecx + 0x664u));
/* ffffe6: mov dword ptr [edi - 4], edx */
  W32((uint32_t)(edi + 0xfffffffcu), edx);
L_ffffe9: /* ffffe9: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* ffffeb: fadd qword ptr [0x100a128] */
  ST0 = ST0 + (F64((uint32_t)(0x100a128u)));
/* fffff1: call 0x1009188 */
  esp -= 4; W32(esp, 0xfffff6u); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* fffff6: cmp eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* fffff9: jl 0x1000000 */
  if ((sf != of)) goto L_1000000;
L_fffffb: /* fffffb: mov eax, 0x27 */
  eax = 0x27u;
L_1000000: /* 1000000: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 1000003: fld dword ptr [ecx + eax*4 + 0x6c0] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x6c0u)); FPUSH(v); }
/* 100000a: mov edx, dword ptr [ebp - 8] */
  edx = R32((uint32_t)(ebp + 0xfffffff8u));
/* 100000d: fadd dword ptr [edi + edx] */
  ST0 = ST0 + (F32((uint32_t)(edi + edx)));
/* 1000010: mov eax, dword ptr [ebx + 0x10] */
  eax = R32((uint32_t)(ebx + 0x10u));
/* 1000013: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1000016: fadd dword ptr [ecx + eax + 4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + eax + 0x4u)));
/* 100001a: fadd dword ptr [ebp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x20u)));
/* 100001d: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 1000020: mov edx, dword ptr [ebp - 0x1c] */
  edx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 1000023: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 1000026: mov dword ptr [edi], edx */
  W32((uint32_t)(edi), edx);
/* 1000028: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 100002b: fcomp dword ptr [ecx + 0x664] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x664u)));
  FPOP();
/* 1000031: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000033: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000036: jne 0x1000040 */
  if (!zf) goto L_1000040;
L_1000038: /* 1000038: mov eax, dword ptr [ecx + 0x664] */
  eax = R32((uint32_t)(ecx + 0x664u));
/* 100003e: mov dword ptr [edi], eax */
  W32((uint32_t)(edi), eax);
L_1000040: /* 1000040: fld dword ptr [edi + 4] */
  { double v = F32((uint32_t)(edi + 0x4u)); FPUSH(v); }
/* 1000043: fadd qword ptr [0x100a128] */
  ST0 = ST0 + (F64((uint32_t)(0x100a128u)));
/* 1000049: call 0x1009188 */
  esp -= 4; W32(esp, 0x100004eu); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* 100004e: cmp eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000051: jl 0x1000058 */
  if ((sf != of)) goto L_1000058;
L_1000053: /* 1000053: mov eax, 0x27 */
  eax = 0x27u;
L_1000058: /* 1000058: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 100005b: fld dword ptr [ecx + eax*4 + 0x6c0] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x6c0u)); FPUSH(v); }
/* 1000062: mov edx, dword ptr [ebp - 0x10] */
  edx = R32((uint32_t)(ebp + 0xfffffff0u));
/* 1000065: mov ebx, dword ptr [ebx + 0x10] */
  ebx = R32((uint32_t)(ebx + 0x10u));
/* 1000068: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 100006b: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100006d: fadd dword ptr [edx + ebx] */
  ST0 = ST0 + (F32((uint32_t)(edx + ebx)));
/* 1000070: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 1000073: fadd dword ptr [eax - 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + 0xfffffffcu)));
/* 1000076: fadd dword ptr [ebp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x20u)));
/* 1000079: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 100007c: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 100007f: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 1000082: mov dword ptr [edi + 4], ecx */
  W32((uint32_t)(edi + 0x4u), ecx);
/* 1000085: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 1000088: fcomp dword ptr [ecx + 0x664] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x664u)));
  FPOP();
/* 100008e: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000090: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000093: jne 0x100009e */
  if (!zf) goto L_100009e;
L_1000095: /* 1000095: mov edx, dword ptr [ecx + 0x664] */
  edx = R32((uint32_t)(ecx + 0x664u));
/* 100009b: mov dword ptr [edi + 4], edx */
  W32((uint32_t)(edi + 0x4u), edx);
L_100009e: /* 100009e: fld dword ptr [edi + 8] */
  { double v = F32((uint32_t)(edi + 0x8u)); FPUSH(v); }
/* 10000a1: fadd qword ptr [0x100a128] */
  ST0 = ST0 + (F64((uint32_t)(0x100a128u)));
/* 10000a7: call 0x1009188 */
  esp -= 4; W32(esp, 0x10000acu); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* 10000ac: cmp eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10000af: jl 0x10000b6 */
  if ((sf != of)) goto L_10000b6;
L_10000b1: /* 10000b1: mov eax, 0x27 */
  eax = 0x27u;
L_10000b6: /* 10000b6: mov ecx, dword ptr [ebx + 4] */
  ecx = R32((uint32_t)(ebx + 0x4u));
/* 10000b9: fld dword ptr [ecx + eax*4 + 0x6c0] */
  { double v = F32((uint32_t)(ecx + eax*4 + 0x6c0u)); FPUSH(v); }
/* 10000c0: mov edx, dword ptr [ebp - 0x2c] */
  edx = R32((uint32_t)(ebp + 0xffffffd4u));
/* 10000c3: mov ebx, dword ptr [ebx + 0x10] */
  ebx = R32((uint32_t)(ebx + 0x10u));
/* 10000c6: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 10000c9: add edx, edi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(edi);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10000cb: fadd dword ptr [edx + ebx] */
  ST0 = ST0 + (F32((uint32_t)(edx + ebx)));
/* 10000ce: mov edx, dword ptr [ebp + 8] */
  edx = R32((uint32_t)(ebp + 0x8u));
/* 10000d1: fadd dword ptr [eax] */
  ST0 = ST0 + (F32((uint32_t)(eax)));
/* 10000d3: fadd dword ptr [ebp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x20u)));
/* 10000d6: fstp dword ptr [ebp - 0x1c] */
  WF32((uint32_t)(ebp + 0xffffffe4u), ST0); FPOP();
/* 10000d9: mov ecx, dword ptr [ebp - 0x1c] */
  ecx = R32((uint32_t)(ebp + 0xffffffe4u));
/* 10000dc: fld dword ptr [ebp - 0x1c] */
  { double v = F32((uint32_t)(ebp + 0xffffffe4u)); FPUSH(v); }
/* 10000df: mov dword ptr [edi + 8], ecx */
  W32((uint32_t)(edi + 0x8u), ecx);
/* 10000e2: mov ecx, dword ptr [edx + 4] */
  ecx = R32((uint32_t)(edx + 0x4u));
/* 10000e5: fcomp dword ptr [ecx + 0x664] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x664u)));
  FPOP();
/* 10000eb: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 10000ed: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10000f0: jne 0x10000fb */
  if (!zf) goto L_10000fb;
L_10000f2: /* 10000f2: mov eax, dword ptr [ecx + 0x664] */
  eax = R32((uint32_t)(ecx + 0x664u));
/* 10000f8: mov dword ptr [edi + 8], eax */
  W32((uint32_t)(edi + 0x8u), eax);
L_10000fb: /* 10000fb: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 10000fe: mov ecx, dword ptr [ebp - 4] */
  ecx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 1000101: mov edx, dword ptr [ebp - 0xc] */
  edx = R32((uint32_t)(ebp + 0xfffffff4u));
/* 1000104: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 1000107: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100010a: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100010d: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1000110: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000112: mov dword ptr [ebp - 4], ecx */
  W32((uint32_t)(ebp + 0xfffffffcu), ecx);
/* 1000115: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 1000118: mov dword ptr [ebp - 0xc], edx */
  W32((uint32_t)(ebp + 0xfffffff4u), edx);
/* 100011b: jl 0xffff85 */
  if ((sf != of)) goto L_ffff85;
L_1000121: /* 1000121: mov ebx, dword ptr [ebp + 0x14] */
  ebx = R32((uint32_t)(ebp + 0x14u));
L_1000124: /* 1000124: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 1000127: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000129: jge 0x10001a7 */
  if ((sf == of)) goto L_10001a7;
L_100012b: /* 100012b: mov ecx, eax */
  ecx = eax;
/* 100012d: mov eax, dword ptr [ebp - 0x14] */
  eax = R32((uint32_t)(ebp + 0xffffffecu));
/* 1000130: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1000132: lea edi, [ebx + ecx*4] */
  edi = (uint32_t)(ebx + ecx*4);
/* 1000135: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
/* 1000138: jmp 0x1000140 */
  goto L_1000140;
L_1000140: /* 1000140: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 1000142: fadd qword ptr [0x100a128] */
  ST0 = ST0 + (F64((uint32_t)(0x100a128u)));
/* 1000148: call 0x1009188 */
  esp -= 4; W32(esp, 0x100014du); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* 100014d: cmp eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000150: jl 0x1000157 */
  if ((sf != of)) goto L_1000157;
L_1000152: /* 1000152: mov eax, 0x27 */
  eax = 0x27u;
L_1000157: /* 1000157: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 100015a: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 100015d: fld dword ptr [edx + eax*4 + 0x6c0] */
  { double v = F32((uint32_t)(edx + eax*4 + 0x6c0u)); FPUSH(v); }
/* 1000164: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 1000167: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 100016a: fadd dword ptr [ecx + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + edx*4)));
/* 100016d: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 1000170: fadd dword ptr [eax + edi] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi)));
/* 1000173: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 1000176: fadd dword ptr [ebp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x20u)));
/* 1000179: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 100017c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 100017f: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 1000182: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 1000184: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 1000187: fcomp dword ptr [ecx + 0x664] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x664u)));
  FPOP();
/* 100018d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 100018f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000192: jne 0x100019c */
  if (!zf) goto L_100019c;
L_1000194: /* 1000194: mov ecx, dword ptr [ecx + 0x664] */
  ecx = R32((uint32_t)(ecx + 0x664u));
/* 100019a: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
L_100019c: /* 100019c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 100019d: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10001a0: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10001a2: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 10001a5: jl 0x1000140 */
  if ((sf != of)) goto L_1000140;
L_10001a7: /* 10001a7: mov edx, dword ptr [0x100d1f0] */
  edx = R32((uint32_t)(0x100d1f0u));
/* 10001ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10001af: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 10001b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10001b2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10001b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10001b4: push 0x100a680 */
  { uint32_t v = 0x100a680u; esp -= 4; W32(esp, v); }
/* 10001b9: call 0x1008e80 */
  esp -= 4; W32(esp, 0x10001beu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* 10001be: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10001c1: jmp 0x10001d2 */
  goto L_10001d2;
L_10001d2: /* 10001d2: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 10001d5: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 10001d8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10001da: je 0x1000314 */
  if (zf) goto L_1000314;
L_10001e0: /* 10001e0: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 10001e3: fadd dword ptr [ecx + 0x6c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x6cu)));
/* 10001e6: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 10001e9: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 10001ec: fcomp dword ptr [ecx + 0x70] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x70u)));
  FPOP();
/* 10001ef: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 10001f1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 10001f4: jp 0x10001fc */
  if (pf) goto L_10001fc;
L_10001f6: /* 10001f6: mov eax, dword ptr [ecx + 0x70] */
  eax = R32((uint32_t)(ecx + 0x70u));
/* 10001f9: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
L_10001fc: /* 10001fc: xor edx, edx */
  edx = 0;
/* 10001fe: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000201: jl 0x10002e4 */
  if ((sf != of)) goto L_10002e4;
L_1000207: /* 1000207: mov eax, 4 */
  eax = 0x4u;
/* 100020c: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 100020e: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 1000211: mov eax, 0xfffffff8 */
  eax = 0xfffffff8u;
/* 1000216: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1000218: mov dword ptr [ebp - 0x20], 3 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x3u);
/* 100021f: mov dword ptr [ebp - 0x14], 8 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x8u);
/* 1000226: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 1000229: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 100022c: jmp 0x1000231 */
  goto L_1000231;
L_100022e: /* 100022e: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
L_1000231: /* 1000231: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 1000234: lea edi, [eax + ecx] */
  edi = (uint32_t)(eax + ecx);
/* 1000237: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 100023a: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 100023d: fadd dword ptr [eax + edi] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi)));
/* 1000240: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 1000243: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 1000246: fcomp dword ptr [ecx - 8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xfffffff8u)));
  FPOP();
/* 1000249: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 100024b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 100024e: jne 0x1000256 */
  if (!zf) goto L_1000256;
L_1000250: /* 1000250: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 1000253: mov dword ptr [ecx - 8], eax */
  W32((uint32_t)(ecx + 0xfffffff8u), eax);
L_1000256: /* 1000256: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 1000259: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 100025c: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 100025f: fadd dword ptr [eax + edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi + 0x4u)));
/* 1000263: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 1000266: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 1000269: fcomp dword ptr [ecx - 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xfffffffcu)));
  FPOP();
/* 100026c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 100026e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000271: jne 0x1000279 */
  if (!zf) goto L_1000279;
L_1000273: /* 1000273: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 1000276: mov dword ptr [ecx - 4], eax */
  W32((uint32_t)(ecx + 0xfffffffcu), eax);
L_1000279: /* 1000279: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 100027c: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 100027f: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 1000282: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 1000285: fadd dword ptr [eax + edi] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi)));
/* 1000288: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 100028b: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 100028e: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 1000290: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000292: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000295: jne 0x100029c */
  if (!zf) goto L_100029c;
L_1000297: /* 1000297: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 100029a: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_100029c: /* 100029c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 100029f: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 10002a2: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 10002a5: add eax, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10002a8: fadd dword ptr [eax + ecx] */
  ST0 = ST0 + (F32((uint32_t)(eax + ecx)));
/* 10002ab: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 10002ae: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 10002b1: fcomp dword ptr [ecx + 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x4u)));
  FPOP();
/* 10002b4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 10002b6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10002b9: jne 0x10002c1 */
  if (!zf) goto L_10002c1;
L_10002bb: /* 10002bb: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 10002be: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
L_10002c1: /* 10002c1: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 10002c4: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 10002c7: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10002ca: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10002cd: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10002d0: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10002d3: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10002d5: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 10002d8: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 10002db: jl 0x100022e */
  if ((sf != of)) goto L_100022e;
L_10002e1: /* 10002e1: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_10002e4: /* 10002e4: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10002e6: jge 0x1000314 */
  if ((sf == of)) goto L_1000314;
L_10002e8: /* 10002e8: jmp 0x10002f0 */
  goto L_10002f0;
L_10002f0: /* 10002f0: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 10002f3: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 10002f6: fadd dword ptr [ecx + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + edx*4)));
/* 10002f9: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 10002fc: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 10002ff: fcomp dword ptr [ebx + edx*4] */
  fpu_com(ST0, F32((uint32_t)(ebx + edx*4)));
  FPOP();
/* 1000302: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000304: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000307: jne 0x100030f */
  if (!zf) goto L_100030f;
L_1000309: /* 1000309: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 100030c: mov dword ptr [ebx + edx*4], eax */
  W32((uint32_t)(ebx + edx*4), eax);
L_100030f: /* 100030f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1000310: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000312: jl 0x10002f0 */
  if ((sf != of)) goto L_10002f0;
L_1000314: /* 1000314: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 1000317: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 100031a: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 100031d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 1000320: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 1000323: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1000324: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 1000327: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1000328: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1000329: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 100032a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 100032b: call 0xfff110 */
  esp -= 4; W32(esp, 0x1000330u); SPILL(); f_fff110(); if (g_unwind) return; RELOAD();
/* 1000330: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 1000333: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1000334: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1000335: mov edi, ebx */
  edi = ebx;
/* 1000337: call 0xfff3a0 */
  esp -= 4; W32(esp, 0x100033cu); SPILL(); f_fff3a0(); if (g_unwind) return; RELOAD();
/* 100033c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100033f: xor edx, edx */
  edx = 0;
/* 1000341: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000344: jl 0x10003a2 */
  if ((sf != of)) goto L_10003a2;
L_1000346: /* 1000346: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 1000349: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 100034c: lea ebx, [eax + 0xc] */
  ebx = (uint32_t)(eax + 0xcu);
/* 100034f: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1000352: sub eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1000355: mov edi, 3 */
  edi = 0x3u;
/* 100035a: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
L_100035d: /* 100035d: fld dword ptr [ebx - 0xc] */
  { double v = F32((uint32_t)(ebx + 0xfffffff4u)); FPUSH(v); }
/* 1000360: fcomp dword ptr [ecx - 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xfffffffcu)));
  FPOP();
/* 1000363: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000365: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000368: je 0x10003d2 */
  if (zf) goto L_10003d2;
L_100036a: /* 100036a: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 100036d: fld dword ptr [ecx + eax] */
  { double v = F32((uint32_t)(ecx + eax)); FPUSH(v); }
/* 1000370: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 1000372: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000374: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000377: je 0x10003c7 */
  if (zf) goto L_10003c7;
L_1000379: /* 1000379: fld dword ptr [ebx - 4] */
  { double v = F32((uint32_t)(ebx + 0xfffffffcu)); FPUSH(v); }
/* 100037c: fcomp dword ptr [ecx + 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x4u)));
  FPOP();
/* 100037f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000381: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000384: je 0x10003ca */
  if (zf) goto L_10003ca;
L_1000386: /* 1000386: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 1000388: fcomp dword ptr [ecx + 8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x8u)));
  FPOP();
/* 100038b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 100038d: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000390: je 0x10003cf */
  if (zf) goto L_10003cf;
L_1000392: /* 1000392: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1000395: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1000398: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100039b: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 100039e: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10003a0: jl 0x100035d */
  if ((sf != of)) goto L_100035d;
L_10003a2: /* 10003a2: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10003a4: jge 0x10003d4 */
  if ((sf == of)) goto L_10003d4;
L_10003a6: /* 10003a6: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 10003a9: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 10003ac: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 10003af: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
L_10003b1: /* 10003b1: fld dword ptr [ecx + edi] */
  { double v = F32((uint32_t)(ecx + edi)); FPUSH(v); }
/* 10003b4: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 10003b6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 10003b8: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10003bb: je 0x10003d2 */
  if (zf) goto L_10003d2;
L_10003bd: /* 10003bd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10003be: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10003c1: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10003c3: jl 0x10003b1 */
  if ((sf != of)) goto L_10003b1;
L_10003c5: /* 10003c5: jmp 0x10003d2 */
  goto L_10003d2;
L_10003c7: /* 10003c7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10003c8: jmp 0x10003d2 */
  goto L_10003d2;
L_10003ca: /* 10003ca: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10003cd: jmp 0x10003d2 */
  goto L_10003d2;
L_10003cf: /* 10003cf: add edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_10003d2: /* 10003d2: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_10003d4: /* 10003d4: jne 0x10003ef */
  if (!zf) goto L_10003ef;
L_10003d6: /* 10003d6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10003d8: jle 0x10004ae */
  if ((zf || sf != of)) goto L_10004ae;
L_10003de: /* 10003de: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 10003e1: mov ecx, esi */
  ecx = esi;
/* 10003e3: mov eax, 0xc61c3c00 */
  eax = 0xc61c3c00u;
/* 10003e8: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 10003ea: jmp 0x10004ae */
  goto L_10004ae;
L_10003ef: /* 10003ef: xor ebx, ebx */
  ebx = 0;
/* 10003f1: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10003f4: jl 0x1000482 */
  if ((sf != of)) goto L_1000482;
L_10003fa: /* 10003fa: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 10003fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 1000400: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 1000403: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1000406: sub eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1000409: mov edi, 3 */
  edi = 0x3u;
/* 100040e: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_1000411: /* 1000411: fld dword ptr [edx - 0xc] */
  { double v = F32((uint32_t)(edx + 0xfffffff4u)); FPUSH(v); }
/* 1000414: fcomp dword ptr [ecx - 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xfffffffcu)));
  FPOP();
/* 1000417: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000419: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 100041c: jne 0x1000423 */
  if (!zf) goto L_1000423;
L_100041e: /* 100041e: mov eax, dword ptr [edx - 0xc] */
  eax = R32((uint32_t)(edx + 0xfffffff4u));
/* 1000421: jmp 0x1000426 */
  goto L_1000426;
L_1000423: /* 1000423: mov eax, dword ptr [ecx - 4] */
  eax = R32((uint32_t)(ecx + 0xfffffffcu));
L_1000426: /* 1000426: mov dword ptr [ecx - 4], eax */
  W32((uint32_t)(ecx + 0xfffffffcu), eax);
/* 1000429: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 100042c: fld dword ptr [eax + ecx] */
  { double v = F32((uint32_t)(eax + ecx)); FPUSH(v); }
/* 100042f: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 1000431: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000433: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000436: jne 0x1000440 */
  if (!zf) goto L_1000440;
L_1000438: /* 1000438: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 100043b: mov eax, dword ptr [eax + ecx] */
  eax = R32((uint32_t)(eax + ecx));
/* 100043e: jmp 0x1000442 */
  goto L_1000442;
L_1000440: /* 1000440: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
L_1000442: /* 1000442: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 1000444: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* 1000447: fcomp dword ptr [ecx + 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x4u)));
  FPOP();
/* 100044a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 100044c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 100044f: jne 0x1000456 */
  if (!zf) goto L_1000456;
L_1000451: /* 1000451: mov eax, dword ptr [edx - 4] */
  eax = R32((uint32_t)(edx + 0xfffffffcu));
/* 1000454: jmp 0x1000459 */
  goto L_1000459;
L_1000456: /* 1000456: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
L_1000459: /* 1000459: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 100045c: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 100045e: fcomp dword ptr [ecx + 8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x8u)));
  FPOP();
/* 1000461: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000463: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000466: jne 0x100046c */
  if (!zf) goto L_100046c;
L_1000468: /* 1000468: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 100046a: jmp 0x100046f */
  goto L_100046f;
L_100046c: /* 100046c: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
L_100046f: /* 100046f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 1000472: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1000475: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1000478: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100047b: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100047e: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000480: jl 0x1000411 */
  if ((sf != of)) goto L_1000411;
L_1000482: /* 1000482: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000484: jge 0x10004ae */
  if ((sf == of)) goto L_10004ae;
L_1000486: /* 1000486: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 1000489: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 100048c: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 100048e: lea ecx, [eax + ebx*4] */
  ecx = (uint32_t)(eax + ebx*4);
/* 1000491: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
L_1000493: /* 1000493: fld dword ptr [ecx + edx] */
  { double v = F32((uint32_t)(ecx + edx)); FPUSH(v); }
/* 1000496: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 1000498: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 100049a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 100049d: jne 0x10004a4 */
  if (!zf) goto L_10004a4;
L_100049f: /* 100049f: mov eax, dword ptr [ecx + edx] */
  eax = R32((uint32_t)(ecx + edx));
/* 10004a2: jmp 0x10004a6 */
  goto L_10004a6;
L_10004a4: /* 10004a4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
L_10004a6: /* 10004a6: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 10004a8: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10004ab: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10004ac: jne 0x1000493 */
  if (!zf) goto L_1000493;
L_10004ae: /* 10004ae: inc dword ptr [0x100d1f0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x100d1f0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x100d1f0u), r);
  }
/* 10004b4: lea esp, [ebp - 0x38] */
  esp = (uint32_t)(ebp + 0xffffffc8u);
/* 10004b7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10004b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10004b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10004ba: mov esp, ebp */
  esp = ebp;
/* 10004bc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10004bd: ret  */
  esp += 4; SPILL(); return;
}

void f_100013a(void) {
  LOAD_REGS();
L_100013a: /* 100013a: lea ebx, [ebx] */
  ebx = (uint32_t)(ebx);
L_1000140: /* 1000140: fld dword ptr [edi] */
  { double v = F32((uint32_t)(edi)); FPUSH(v); }
/* 1000142: fadd qword ptr [0x100a128] */
  ST0 = ST0 + (F64((uint32_t)(0x100a128u)));
/* 1000148: call 0x1009188 */
  esp -= 4; W32(esp, 0x100014du); SPILL(); f_1009188(); if (g_unwind) return; RELOAD();
/* 100014d: cmp eax, 0x28 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x28u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000150: jl 0x1000157 */
  if ((sf != of)) goto L_1000157;
L_1000152: /* 1000152: mov eax, 0x27 */
  eax = 0x27u;
L_1000157: /* 1000157: mov ecx, dword ptr [ebp + 8] */
  ecx = R32((uint32_t)(ebp + 0x8u));
/* 100015a: mov edx, dword ptr [ecx + 4] */
  edx = R32((uint32_t)(ecx + 0x4u));
/* 100015d: fld dword ptr [edx + eax*4 + 0x6c0] */
  { double v = F32((uint32_t)(edx + eax*4 + 0x6c0u)); FPUSH(v); }
/* 1000164: mov ecx, dword ptr [ecx + 0x10] */
  ecx = R32((uint32_t)(ecx + 0x10u));
/* 1000167: mov edx, dword ptr [ebp - 4] */
  edx = R32((uint32_t)(ebp + 0xfffffffcu));
/* 100016a: fadd dword ptr [ecx + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + edx*4)));
/* 100016d: mov eax, dword ptr [ebp - 8] */
  eax = R32((uint32_t)(ebp + 0xfffffff8u));
/* 1000170: fadd dword ptr [eax + edi] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi)));
/* 1000173: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 1000176: fadd dword ptr [ebp + 0x20] */
  ST0 = ST0 + (F32((uint32_t)(ebp + 0x20u)));
/* 1000179: fstp dword ptr [ebp - 0x20] */
  WF32((uint32_t)(ebp + 0xffffffe0u), ST0); FPOP();
/* 100017c: mov ecx, dword ptr [ebp - 0x20] */
  ecx = R32((uint32_t)(ebp + 0xffffffe0u));
/* 100017f: fld dword ptr [ebp - 0x20] */
  { double v = F32((uint32_t)(ebp + 0xffffffe0u)); FPUSH(v); }
/* 1000182: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
/* 1000184: mov ecx, dword ptr [eax + 4] */
  ecx = R32((uint32_t)(eax + 0x4u));
/* 1000187: fcomp dword ptr [ecx + 0x664] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x664u)));
  FPOP();
/* 100018d: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 100018f: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000192: jne 0x100019c */
  if (!zf) goto L_100019c;
L_1000194: /* 1000194: mov ecx, dword ptr [ecx + 0x664] */
  ecx = R32((uint32_t)(ecx + 0x664u));
/* 100019a: mov dword ptr [edi], ecx */
  W32((uint32_t)(edi), ecx);
L_100019c: /* 100019c: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 100019d: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10001a0: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10001a2: mov dword ptr [ebp - 4], edx */
  W32((uint32_t)(ebp + 0xfffffffcu), edx);
/* 10001a5: jl 0x1000140 */
  if ((sf != of)) goto L_1000140;
L_10001a7: /* 10001a7: mov edx, dword ptr [0x100d1f0] */
  edx = R32((uint32_t)(0x100d1f0u));
/* 10001ad: push 0 */
  { uint32_t v = 0x0u; esp -= 4; W32(esp, v); }
/* 10001af: push 1 */
  { uint32_t v = 0x1u; esp -= 4; W32(esp, v); }
/* 10001b1: push esi */
  { uint32_t v = esi; esp -= 4; W32(esp, v); }
/* 10001b2: push ebx */
  { uint32_t v = ebx; esp -= 4; W32(esp, v); }
/* 10001b3: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 10001b4: push 0x100a680 */
  { uint32_t v = 0x100a680u; esp -= 4; W32(esp, v); }
/* 10001b9: call 0x1008e80 */
  esp -= 4; W32(esp, 0x10001beu); SPILL(); f_1008e80(); if (g_unwind) return; RELOAD();
/* 10001be: add esp, 0x18 */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x18u);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 10001c1: jmp 0x10001d2 */
  goto L_10001d2;
L_10001d2: /* 10001d2: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
/* 10001d5: mov ecx, dword ptr [edi + 4] */
  ecx = R32((uint32_t)(edi + 0x4u));
/* 10001d8: test ecx, ecx */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(ecx);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  }
/* 10001da: je 0x1000314 */
  if (zf) goto L_1000314;
L_10001e0: /* 10001e0: fld dword ptr [ebp + 0x1c] */
  { double v = F32((uint32_t)(ebp + 0x1cu)); FPUSH(v); }
/* 10001e3: fadd dword ptr [ecx + 0x6c] */
  ST0 = ST0 + (F32((uint32_t)(ecx + 0x6cu)));
/* 10001e6: fstp dword ptr [ebp - 8] */
  WF32((uint32_t)(ebp + 0xfffffff8u), ST0); FPOP();
/* 10001e9: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 10001ec: fcomp dword ptr [ecx + 0x70] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x70u)));
  FPOP();
/* 10001ef: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 10001f1: test ah, 5 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x5u);
  uint8_t r = (uint8_t)(a & b);
  pf = (uint32_t)!__builtin_parity((uint32_t)(r) & 0xffu);
  }
/* 10001f4: jp 0x10001fc */
  if (pf) goto L_10001fc;
L_10001f6: /* 10001f6: mov eax, dword ptr [ecx + 0x70] */
  eax = R32((uint32_t)(ecx + 0x70u));
/* 10001f9: mov dword ptr [ebp - 8], eax */
  W32((uint32_t)(ebp + 0xfffffff8u), eax);
L_10001fc: /* 10001fc: xor edx, edx */
  edx = 0;
/* 10001fe: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000201: jl 0x10002e4 */
  if ((sf != of)) goto L_10002e4;
L_1000207: /* 1000207: mov eax, 4 */
  eax = 0x4u;
/* 100020c: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 100020e: mov dword ptr [ebp - 0x10], eax */
  W32((uint32_t)(ebp + 0xfffffff0u), eax);
/* 1000211: mov eax, 0xfffffff8 */
  eax = 0xfffffff8u;
/* 1000216: sub eax, ebx */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1000218: mov dword ptr [ebp - 0x20], 3 */
  W32((uint32_t)(ebp + 0xffffffe0u), 0x3u);
/* 100021f: mov dword ptr [ebp - 0x14], 8 */
  W32((uint32_t)(ebp + 0xffffffecu), 0x8u);
/* 1000226: lea ecx, [ebx + 8] */
  ecx = (uint32_t)(ebx + 0x8u);
/* 1000229: mov dword ptr [ebp - 0x2c], eax */
  W32((uint32_t)(ebp + 0xffffffd4u), eax);
/* 100022c: jmp 0x1000231 */
  goto L_1000231;
L_100022e: /* 100022e: mov eax, dword ptr [ebp - 0x2c] */
  eax = R32((uint32_t)(ebp + 0xffffffd4u));
L_1000231: /* 1000231: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 1000234: lea edi, [eax + ecx] */
  edi = (uint32_t)(eax + ecx);
/* 1000237: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 100023a: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 100023d: fadd dword ptr [eax + edi] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi)));
/* 1000240: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 1000243: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 1000246: fcomp dword ptr [ecx - 8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xfffffff8u)));
  FPOP();
/* 1000249: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 100024b: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 100024e: jne 0x1000256 */
  if (!zf) goto L_1000256;
L_1000250: /* 1000250: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 1000253: mov dword ptr [ecx - 8], eax */
  W32((uint32_t)(ecx + 0xfffffff8u), eax);
L_1000256: /* 1000256: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 1000259: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 100025c: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 100025f: fadd dword ptr [eax + edi + 4] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi + 0x4u)));
/* 1000263: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 1000266: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 1000269: fcomp dword ptr [ecx - 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xfffffffcu)));
  FPOP();
/* 100026c: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 100026e: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000271: jne 0x1000279 */
  if (!zf) goto L_1000279;
L_1000273: /* 1000273: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 1000276: mov dword ptr [ecx - 4], eax */
  W32((uint32_t)(ecx + 0xfffffffcu), eax);
L_1000279: /* 1000279: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 100027c: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 100027f: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 1000282: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 1000285: fadd dword ptr [eax + edi] */
  ST0 = ST0 + (F32((uint32_t)(eax + edi)));
/* 1000288: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 100028b: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 100028e: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 1000290: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000292: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000295: jne 0x100029c */
  if (!zf) goto L_100029c;
L_1000297: /* 1000297: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 100029a: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
L_100029c: /* 100029c: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 100029f: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 10002a2: mov eax, dword ptr [eax + 0x14] */
  eax = R32((uint32_t)(eax + 0x14u));
/* 10002a5: add eax, dword ptr [ebp - 0x10] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xfffffff0u)));
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10002a8: fadd dword ptr [eax + ecx] */
  ST0 = ST0 + (F32((uint32_t)(eax + ecx)));
/* 10002ab: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 10002ae: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 10002b1: fcomp dword ptr [ecx + 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x4u)));
  FPOP();
/* 10002b4: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 10002b6: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10002b9: jne 0x10002c1 */
  if (!zf) goto L_10002c1;
L_10002bb: /* 10002bb: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 10002be: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
L_10002c1: /* 10002c1: mov eax, dword ptr [ebp - 0x20] */
  eax = R32((uint32_t)(ebp + 0xffffffe0u));
/* 10002c4: mov edi, dword ptr [ebp - 0x14] */
  edi = R32((uint32_t)(ebp + 0xffffffecu));
/* 10002c7: add eax, 4 */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  eax = r;
  }
/* 10002ca: add edi, 0x10 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 10002cd: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10002d0: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10002d3: cmp eax, esi */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10002d5: mov dword ptr [ebp - 0x14], edi */
  W32((uint32_t)(ebp + 0xffffffecu), edi);
/* 10002d8: mov dword ptr [ebp - 0x20], eax */
  W32((uint32_t)(ebp + 0xffffffe0u), eax);
/* 10002db: jl 0x100022e */
  if ((sf != of)) goto L_100022e;
L_10002e1: /* 10002e1: mov edi, dword ptr [ebp + 8] */
  edi = R32((uint32_t)(ebp + 0x8u));
L_10002e4: /* 10002e4: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10002e6: jge 0x1000314 */
  if ((sf == of)) goto L_1000314;
L_10002e8: /* 10002e8: jmp 0x10002f0 */
  goto L_10002f0;
L_10002f0: /* 10002f0: mov ecx, dword ptr [edi + 0x14] */
  ecx = R32((uint32_t)(edi + 0x14u));
/* 10002f3: fld dword ptr [ebp - 8] */
  { double v = F32((uint32_t)(ebp + 0xfffffff8u)); FPUSH(v); }
/* 10002f6: fadd dword ptr [ecx + edx*4] */
  ST0 = ST0 + (F32((uint32_t)(ecx + edx*4)));
/* 10002f9: fstp dword ptr [ebp - 4] */
  WF32((uint32_t)(ebp + 0xfffffffcu), ST0); FPOP();
/* 10002fc: fld dword ptr [ebp - 4] */
  { double v = F32((uint32_t)(ebp + 0xfffffffcu)); FPUSH(v); }
/* 10002ff: fcomp dword ptr [ebx + edx*4] */
  fpu_com(ST0, F32((uint32_t)(ebx + edx*4)));
  FPOP();
/* 1000302: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000304: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000307: jne 0x100030f */
  if (!zf) goto L_100030f;
L_1000309: /* 1000309: mov eax, dword ptr [ebp - 4] */
  eax = R32((uint32_t)(ebp + 0xfffffffcu));
/* 100030c: mov dword ptr [ebx + edx*4], eax */
  W32((uint32_t)(ebx + edx*4), eax);
L_100030f: /* 100030f: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 1000310: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000312: jl 0x10002f0 */
  if ((sf != of)) goto L_10002f0;
L_1000314: /* 1000314: mov ecx, dword ptr [ebp + 0x18] */
  ecx = R32((uint32_t)(ebp + 0x18u));
/* 1000317: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 100031a: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 100031d: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 1000320: mov ebx, dword ptr [ebp + 8] */
  ebx = R32((uint32_t)(ebp + 0x8u));
/* 1000323: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 1000324: mov ecx, dword ptr [ebx + 8] */
  ecx = R32((uint32_t)(ebx + 0x8u));
/* 1000327: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1000328: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1000329: push eax */
  { uint32_t v = eax; esp -= 4; W32(esp, v); }
/* 100032a: push ecx */
  { uint32_t v = ecx; esp -= 4; W32(esp, v); }
/* 100032b: call 0xfff110 */
  esp -= 4; W32(esp, 0x1000330u); SPILL(); f_fff110(); if (g_unwind) return; RELOAD();
/* 1000330: mov edx, dword ptr [ebp - 0x24] */
  edx = R32((uint32_t)(ebp + 0xffffffdcu));
/* 1000333: push edi */
  { uint32_t v = edi; esp -= 4; W32(esp, v); }
/* 1000334: push edx */
  { uint32_t v = edx; esp -= 4; W32(esp, v); }
/* 1000335: mov edi, ebx */
  edi = ebx;
/* 1000337: call 0xfff3a0 */
  esp -= 4; W32(esp, 0x100033cu); SPILL(); f_fff3a0(); if (g_unwind) return; RELOAD();
/* 100033c: add esp, 0x1c */
  { uint32_t a = (uint32_t)(esp); uint32_t b = (uint32_t)(0x1cu);
  uint32_t r = (uint32_t)(a + b);
  esp = r;
  }
/* 100033f: xor edx, edx */
  edx = 0;
/* 1000341: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000344: jl 0x10003a2 */
  if ((sf != of)) goto L_10003a2;
L_1000346: /* 1000346: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 1000349: mov ecx, dword ptr [ebp + 0x14] */
  ecx = R32((uint32_t)(ebp + 0x14u));
/* 100034c: lea ebx, [eax + 0xc] */
  ebx = (uint32_t)(eax + 0xcu);
/* 100034f: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1000352: sub eax, dword ptr [ebp + 0x14] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0x14u)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1000355: mov edi, 3 */
  edi = 0x3u;
/* 100035a: mov dword ptr [ebp - 0xc], eax */
  W32((uint32_t)(ebp + 0xfffffff4u), eax);
L_100035d: /* 100035d: fld dword ptr [ebx - 0xc] */
  { double v = F32((uint32_t)(ebx + 0xfffffff4u)); FPUSH(v); }
/* 1000360: fcomp dword ptr [ecx - 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xfffffffcu)));
  FPOP();
/* 1000363: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000365: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000368: je 0x10003d2 */
  if (zf) goto L_10003d2;
L_100036a: /* 100036a: mov eax, dword ptr [ebp - 0xc] */
  eax = R32((uint32_t)(ebp + 0xfffffff4u));
/* 100036d: fld dword ptr [ecx + eax] */
  { double v = F32((uint32_t)(ecx + eax)); FPUSH(v); }
/* 1000370: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 1000372: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000374: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000377: je 0x10003c7 */
  if (zf) goto L_10003c7;
L_1000379: /* 1000379: fld dword ptr [ebx - 4] */
  { double v = F32((uint32_t)(ebx + 0xfffffffcu)); FPUSH(v); }
/* 100037c: fcomp dword ptr [ecx + 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x4u)));
  FPOP();
/* 100037f: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000381: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000384: je 0x10003ca */
  if (zf) goto L_10003ca;
L_1000386: /* 1000386: fld dword ptr [ebx] */
  { double v = F32((uint32_t)(ebx)); FPUSH(v); }
/* 1000388: fcomp dword ptr [ecx + 8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x8u)));
  FPOP();
/* 100038b: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 100038d: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000390: je 0x10003cf */
  if (zf) goto L_10003cf;
L_1000392: /* 1000392: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1000395: add edx, 4 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 1000398: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100039b: add ebx, 0x10 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 100039e: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10003a0: jl 0x100035d */
  if ((sf != of)) goto L_100035d;
L_10003a2: /* 10003a2: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10003a4: jge 0x10003d4 */
  if ((sf == of)) goto L_10003d4;
L_10003a6: /* 10003a6: mov eax, dword ptr [ebp + 0x14] */
  eax = R32((uint32_t)(ebp + 0x14u));
/* 10003a9: mov edi, dword ptr [ebp + 0x10] */
  edi = R32((uint32_t)(ebp + 0x10u));
/* 10003ac: lea ecx, [eax + edx*4] */
  ecx = (uint32_t)(eax + edx*4);
/* 10003af: sub edi, eax */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edi = r;
  }
L_10003b1: /* 10003b1: fld dword ptr [ecx + edi] */
  { double v = F32((uint32_t)(ecx + edi)); FPUSH(v); }
/* 10003b4: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 10003b6: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 10003b8: test ah, 1 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x1u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 10003bb: je 0x10003d2 */
  if (zf) goto L_10003d2;
L_10003bd: /* 10003bd: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10003be: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10003c1: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10003c3: jl 0x10003b1 */
  if ((sf != of)) goto L_10003b1;
L_10003c5: /* 10003c5: jmp 0x10003d2 */
  goto L_10003d2;
L_10003c7: /* 10003c7: inc edx */
  { uint32_t a = (uint32_t)(edx);
  uint32_t r = (uint32_t)(a + 1);
  edx = r;
  }
/* 10003c8: jmp 0x10003d2 */
  goto L_10003d2;
L_10003ca: /* 10003ca: add edx, 2 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x2u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 10003cd: jmp 0x10003d2 */
  goto L_10003d2;
L_10003cf: /* 10003cf: add edx, 3 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x3u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
L_10003d2: /* 10003d2: cmp edx, esi */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  zf = (r) == 0;
  }
L_10003d4: /* 10003d4: jne 0x10003ef */
  if (!zf) goto L_10003ef;
L_10003d6: /* 10003d6: test esi, esi */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a & b);
  zf = (r) == 0;
  sf = ((r) >> 31) & 1;
  of = 0;
  }
/* 10003d8: jle 0x10004ae */
  if ((zf || sf != of)) goto L_10004ae;
L_10003de: /* 10003de: mov edi, dword ptr [ebp + 0x14] */
  edi = R32((uint32_t)(ebp + 0x14u));
/* 10003e1: mov ecx, esi */
  ecx = esi;
/* 10003e3: mov eax, 0xc61c3c00 */
  eax = 0xc61c3c00u;
/* 10003e8: rep stosd dword ptr es:[edi], eax */
  if (!DF) { guest_stos32(edi, eax, ecx); edi += ecx * 4; ecx = 0; } else { while (ecx) { W32(edi, eax); edi += (DF ? -4 : 4); ecx--; } }
/* 10003ea: jmp 0x10004ae */
  goto L_10004ae;
L_10003ef: /* 10003ef: xor ebx, ebx */
  ebx = 0;
/* 10003f1: cmp esi, 4 */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 10003f4: jl 0x1000482 */
  if ((sf != of)) goto L_1000482;
L_10003fa: /* 10003fa: mov eax, dword ptr [ebp + 0x10] */
  eax = R32((uint32_t)(ebp + 0x10u));
/* 10003fd: mov ecx, dword ptr [ebp + 0xc] */
  ecx = R32((uint32_t)(ebp + 0xcu));
/* 1000400: lea edx, [eax + 0xc] */
  edx = (uint32_t)(eax + 0xcu);
/* 1000403: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 1000406: sub eax, dword ptr [ebp + 0xc] */
  { uint32_t a = (uint32_t)(eax); uint32_t b = (uint32_t)(R32((uint32_t)(ebp + 0xcu)));
  uint32_t r = (uint32_t)(a - b);
  eax = r;
  }
/* 1000409: mov edi, 3 */
  edi = 0x3u;
/* 100040e: mov dword ptr [ebp + 8], eax */
  W32((uint32_t)(ebp + 0x8u), eax);
L_1000411: /* 1000411: fld dword ptr [edx - 0xc] */
  { double v = F32((uint32_t)(edx + 0xfffffff4u)); FPUSH(v); }
/* 1000414: fcomp dword ptr [ecx - 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0xfffffffcu)));
  FPOP();
/* 1000417: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000419: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 100041c: jne 0x1000423 */
  if (!zf) goto L_1000423;
L_100041e: /* 100041e: mov eax, dword ptr [edx - 0xc] */
  eax = R32((uint32_t)(edx + 0xfffffff4u));
/* 1000421: jmp 0x1000426 */
  goto L_1000426;
L_1000423: /* 1000423: mov eax, dword ptr [ecx - 4] */
  eax = R32((uint32_t)(ecx + 0xfffffffcu));
L_1000426: /* 1000426: mov dword ptr [ecx - 4], eax */
  W32((uint32_t)(ecx + 0xfffffffcu), eax);
/* 1000429: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 100042c: fld dword ptr [eax + ecx] */
  { double v = F32((uint32_t)(eax + ecx)); FPUSH(v); }
/* 100042f: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 1000431: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000433: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000436: jne 0x1000440 */
  if (!zf) goto L_1000440;
L_1000438: /* 1000438: mov eax, dword ptr [ebp + 8] */
  eax = R32((uint32_t)(ebp + 0x8u));
/* 100043b: mov eax, dword ptr [eax + ecx] */
  eax = R32((uint32_t)(eax + ecx));
/* 100043e: jmp 0x1000442 */
  goto L_1000442;
L_1000440: /* 1000440: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
L_1000442: /* 1000442: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 1000444: fld dword ptr [edx - 4] */
  { double v = F32((uint32_t)(edx + 0xfffffffcu)); FPUSH(v); }
/* 1000447: fcomp dword ptr [ecx + 4] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x4u)));
  FPOP();
/* 100044a: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 100044c: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 100044f: jne 0x1000456 */
  if (!zf) goto L_1000456;
L_1000451: /* 1000451: mov eax, dword ptr [edx - 4] */
  eax = R32((uint32_t)(edx + 0xfffffffcu));
/* 1000454: jmp 0x1000459 */
  goto L_1000459;
L_1000456: /* 1000456: mov eax, dword ptr [ecx + 4] */
  eax = R32((uint32_t)(ecx + 0x4u));
L_1000459: /* 1000459: mov dword ptr [ecx + 4], eax */
  W32((uint32_t)(ecx + 0x4u), eax);
/* 100045c: fld dword ptr [edx] */
  { double v = F32((uint32_t)(edx)); FPUSH(v); }
/* 100045e: fcomp dword ptr [ecx + 8] */
  fpu_com(ST0, F32((uint32_t)(ecx + 0x8u)));
  FPOP();
/* 1000461: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 1000463: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 1000466: jne 0x100046c */
  if (!zf) goto L_100046c;
L_1000468: /* 1000468: mov eax, dword ptr [edx] */
  eax = R32((uint32_t)(edx));
/* 100046a: jmp 0x100046f */
  goto L_100046f;
L_100046c: /* 100046c: mov eax, dword ptr [ecx + 8] */
  eax = R32((uint32_t)(ecx + 0x8u));
L_100046f: /* 100046f: mov dword ptr [ecx + 8], eax */
  W32((uint32_t)(ecx + 0x8u), eax);
/* 1000472: add edi, 4 */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  edi = r;
  }
/* 1000475: add ebx, 4 */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ebx = r;
  }
/* 1000478: add ecx, 0x10 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 100047b: add edx, 0x10 */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(0x10u);
  uint32_t r = (uint32_t)(a + b);
  edx = r;
  }
/* 100047e: cmp edi, esi */
  { uint32_t a = (uint32_t)(edi); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000480: jl 0x1000411 */
  if ((sf != of)) goto L_1000411;
L_1000482: /* 1000482: cmp ebx, esi */
  { uint32_t a = (uint32_t)(ebx); uint32_t b = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - b);
  sf = ((r) >> 31) & 1;
  of = ((((a) ^ (b)) & ((a) ^ (r))) >> 31) & 1;
  }
/* 1000484: jge 0x10004ae */
  if ((sf == of)) goto L_10004ae;
L_1000486: /* 1000486: mov eax, dword ptr [ebp + 0xc] */
  eax = R32((uint32_t)(ebp + 0xcu));
/* 1000489: mov edx, dword ptr [ebp + 0x10] */
  edx = R32((uint32_t)(ebp + 0x10u));
/* 100048c: sub edx, eax */
  { uint32_t a = (uint32_t)(edx); uint32_t b = (uint32_t)(eax);
  uint32_t r = (uint32_t)(a - b);
  edx = r;
  }
/* 100048e: lea ecx, [eax + ebx*4] */
  ecx = (uint32_t)(eax + ebx*4);
/* 1000491: sub esi, ebx */
  { uint32_t a = (uint32_t)(esi); uint32_t b = (uint32_t)(ebx);
  uint32_t r = (uint32_t)(a - b);
  esi = r;
  }
L_1000493: /* 1000493: fld dword ptr [ecx + edx] */
  { double v = F32((uint32_t)(ecx + edx)); FPUSH(v); }
/* 1000496: fcomp dword ptr [ecx] */
  fpu_com(ST0, F32((uint32_t)(ecx)));
  FPOP();
/* 1000498: fnstsw ax */
  eax = (eax & 0xffff0000u) | ((uint32_t)(fpu_sw()) & 0xffffu);
/* 100049a: test ah, 0x41 */
  { uint8_t a = (uint8_t)(((eax >> 8) & 0xffu)); uint8_t b = (uint8_t)(0x41u);
  uint8_t r = (uint8_t)(a & b);
  zf = (r) == 0;
  }
/* 100049d: jne 0x10004a4 */
  if (!zf) goto L_10004a4;
L_100049f: /* 100049f: mov eax, dword ptr [ecx + edx] */
  eax = R32((uint32_t)(ecx + edx));
/* 10004a2: jmp 0x10004a6 */
  goto L_10004a6;
L_10004a4: /* 10004a4: mov eax, dword ptr [ecx] */
  eax = R32((uint32_t)(ecx));
L_10004a6: /* 10004a6: mov dword ptr [ecx], eax */
  W32((uint32_t)(ecx), eax);
/* 10004a8: add ecx, 4 */
  { uint32_t a = (uint32_t)(ecx); uint32_t b = (uint32_t)(0x4u);
  uint32_t r = (uint32_t)(a + b);
  ecx = r;
  }
/* 10004ab: dec esi */
  { uint32_t a = (uint32_t)(esi);
  uint32_t r = (uint32_t)(a - 1);
  zf = (r) == 0;
  esi = r;
  }
/* 10004ac: jne 0x1000493 */
  if (!zf) goto L_1000493;
L_10004ae: /* 10004ae: inc dword ptr [0x100d1f0] */
  { uint32_t a = (uint32_t)(R32((uint32_t)(0x100d1f0u)));
  uint32_t r = (uint32_t)(a + 1);
  W32((uint32_t)(0x100d1f0u), r);
  }
/* 10004b4: lea esp, [ebp - 0x38] */
  esp = (uint32_t)(ebp + 0xffffffc8u);
/* 10004b7: pop edi */
  { uint32_t v = R32(esp); esp += 4;
  edi = v;
  }
/* 10004b8: pop esi */
  { uint32_t v = R32(esp); esp += 4;
  esi = v;
  }
/* 10004b9: pop ebx */
  { uint32_t v = R32(esp); esp += 4;
  ebx = v;
  }
/* 10004ba: mov esp, ebp */
  esp = ebp;
/* 10004bc: pop ebp */
  { uint32_t v = R32(esp); esp += 4;
  ebp = v;
  }
/* 10004bd: ret  */
  esp += 4; SPILL(); return;
}
